#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <filesystem>
#include <thread>
#include <mutex>

size_t getFileSize(std::string filePath)
{
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        fprintf(stderr, "Error: Couldn't open %s for reading file size\n", filePath.c_str());
        return 0;
    }
    iStream.ignore( std::numeric_limits<std::streamsize>::max() );
    std::streamsize size = iStream.gcount();
    size_t returnSize = size;
    iStream.clear();
    iStream.seekg( 0, std::ios_base::beg );
    iStream.close();
    return returnSize;
}

std::vector<unsigned short> readFileAsUS(std::string filePath)
{
    std::vector<unsigned short> returnVec;
    std::vector<unsigned char> ucVec;
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        fprintf(stderr, "Error: Couldn't open file %s\n", filePath.c_str());
        return returnVec;
    }
    iStream.ignore( std::numeric_limits<std::streamsize>::max() );
    std::streamsize size = iStream.gcount();
    ucVec.resize(size);
    iStream.clear();
    iStream.seekg( 0, std::ios_base::beg );
    iStream.read((char*)(&ucVec[0]), size);
    iStream.close();
    unsigned short *pUShort = reinterpret_cast<unsigned short *>(ucVec.data());
    for (size_t i = 0; i < ucVec.size()/2; i++)
        returnVec.push_back(pUShort[i]);
    return returnVec;
}

struct CommonColor {
    unsigned short color;
    size_t count = 1;
};

enum PalMode {
    PAL_NEW,
    PAL_APPEND,
    PAL_EXISTS,
};

struct BestPal {
    PalMode mode;
    size_t length;
    size_t index;
    size_t begTrunc = 0;
    size_t endTrunc = 0;
    std::vector<unsigned short> palColors;
    std::vector<unsigned short> originalPal;
    size_t originalIndex;
    std::string fileName;
    bool isAssigned = false;
};

size_t countColors(BestPal input)
{
    if (input.palColors.size() == 0)
        return 0;
    if (input.isAssigned)
        return 0;
    std::vector<unsigned short> uniqueColors;
    uniqueColors.push_back(input.palColors[0]);
    for (size_t index = 1; index < input.palColors.size(); index++)
    {
        bool foundColor = false;
        for (unsigned short presentColor : uniqueColors)
        {
            if (presentColor == input.palColors[index])
            {
                foundColor = true;
                break;
            }
        }
        if (!foundColor)
            uniqueColors.push_back(input.palColors[index]);
    }
    return uniqueColors.size();
}

void searchSinglePal(std::vector<unsigned short> *compVec, std::vector<BestPal> *inputPals, std::mutex *indexMutex, size_t *globalIndex, std::mutex *resultMutex, size_t *globalLongestFit, size_t *globalBestStartIndex, size_t *globalBestPalIndex)
{
    size_t palIndex;
    size_t longestFit = 0;
    size_t bestStartIndex;
    size_t bestPalIndex;
    while (true)
    {
        indexMutex->lock();
        if (*globalIndex < inputPals->size())
        {
            palIndex = *globalIndex;
            *globalIndex += 1;
            indexMutex->unlock();
        }
        else
        {
            indexMutex->unlock();
            break;
        }
        if ((*inputPals)[palIndex].isAssigned)
            continue;
        //  Search for existing sequence
        for (size_t startIndex = 0; startIndex < compVec->size() - (*inputPals)[palIndex].palColors.size() && compVec->size() > (*inputPals)[palIndex].palColors.size(); startIndex++)
        {
            size_t currFit = 0;
            for (size_t colorIndex = 0; colorIndex < (*inputPals)[palIndex].palColors.size(); colorIndex++)
            {
                if ((*inputPals)[palIndex].palColors[colorIndex] == (*compVec)[startIndex + colorIndex])
                    currFit++;
                else
                    break;
            }
            if (currFit > longestFit && currFit == (*inputPals)[palIndex].palColors.size())
            {
                longestFit = currFit;
                bestStartIndex = startIndex;
                bestPalIndex = palIndex;
            }
        }
        //  Search for appendable sequence
        bool matches = true;
        size_t overlap = 0;
        while (matches && overlap < (*inputPals)[palIndex].palColors.size())
        {
            bool currMatch = true;
            for (size_t i = 0; i < overlap + 1; i++)
            {
                if ((*compVec)[compVec->size() - 1 - overlap + i] != (*inputPals)[palIndex].palColors[i])
                {
                    currMatch = false;
                    break;
                }
            }
            //if ((*compVec)[compVec->size() - 1 - overlap] == (*inputPals)[palIndex].palColors[overlap])
            if (currMatch)
                overlap++;
            else
                matches = false;
        }
        if (overlap > longestFit)
        {
            longestFit = overlap;
            bestStartIndex = compVec->size() - overlap;
            bestPalIndex = palIndex;
        }
    }
    resultMutex->lock();
    if (longestFit > *globalLongestFit)
    {
        *globalLongestFit = longestFit;
        *globalBestStartIndex = bestStartIndex;
        *globalBestPalIndex = bestPalIndex;
    }
    resultMutex->unlock();
}

size_t findBestPal(std::vector<unsigned short> *compVec, std::vector<BestPal> *inputPals)
{
    size_t bestPalIndex;
    size_t bestStartIndex;
    size_t longestFit = 0;
    /*
    for (size_t palIndex = 0; palIndex < inputPals->size(); palIndex++)
    {
        if ((*inputPals)[palIndex].isAssigned)
            continue;
        for (size_t startIndex = 0; startIndex < compVec->size(); startIndex++)
        {
            size_t currFit = 0;
            for (size_t colorIndex = 0; colorIndex < (*inputPals)[palIndex].palColors.size() && startIndex + colorIndex < compVec->size(); colorIndex++)
            {
                if ((*inputPals)[palIndex].palColors[colorIndex] == (*compVec)[startIndex + colorIndex])
                    currFit++;
                else
                    break;
            }
            if (currFit > longestFit)
            {
                longestFit = currFit;
                bestStartIndex = startIndex;
                bestPalIndex = palIndex;
            }
        }
    }
    */
    size_t numThreads = 20;
    std::vector<std::thread> threads;
    std::mutex inputMutex;
    std::mutex resultMutex;
    size_t globalIndex = 0;
    for (int i = 0; i < numThreads; i++)
    {
        threads.emplace_back(searchSinglePal, compVec, inputPals, &inputMutex, &globalIndex, &resultMutex, &longestFit, &bestStartIndex, &bestPalIndex);
    }
    for (int i = 0; i < numThreads; i++)
        threads[i].join();
    if (longestFit == 0)
    {
        size_t mostColors = 0;
        size_t palIndex;
        for (size_t i = 0; i < inputPals->size(); i++)
        {
            size_t numColors = countColors((*inputPals)[i]);
            if (numColors >= mostColors)
            {
                mostColors = numColors;
                palIndex = i;
            }
        }
        bestPalIndex = palIndex;
        (*inputPals)[bestPalIndex].mode = PAL_NEW;
        (*inputPals)[bestPalIndex].index = compVec->size();
    }
    else
    {
        (*inputPals)[bestPalIndex].index = bestStartIndex;
        (*inputPals)[bestPalIndex].length = longestFit;
        if (longestFit == (*inputPals)[bestPalIndex].palColors.size())
            (*inputPals)[bestPalIndex].mode = PAL_EXISTS;
        else
            (*inputPals)[bestPalIndex].mode = PAL_APPEND;
    }
    return bestPalIndex;
}

BestPal truncatePalette(std::vector<unsigned short> input)
{
    BestPal retPal;
    retPal.originalPal = input;
    //  Skip first color
    input.erase(input.begin());
    //  Remove blacks from the end
    while (input.size() > 0 && input[input.size() - 1] == 0)
        input.erase(input.end() - 1);
    //  Remove duplicates from the beginning
    while (input.size() > 1 && input[0] == input[1])
    {
        retPal.begTrunc++;
        input.erase(input.begin());
    }
    //  Remove duplicates from the end
    while (input.size() > 1 && input[input.size() - 1] == input[input.size() - 2])
    {
        retPal.endTrunc++;
        input.erase(input.end() - 1);
    }
    retPal.palColors = input;
    return retPal;
}

void addPalette(std::vector<unsigned short> *compVec, BestPal *pal)
{
    switch (pal->mode)
    {
        case PAL_NEW:
            for (unsigned short currColor : pal->palColors)
                compVec->push_back(currColor);
            break;
        case PAL_APPEND:
            break;
        case PAL_EXISTS:
            break;
    }
    pal->isAssigned = true;
}

bool doesFileExist(std::string fileName)
{
    std::ifstream file(fileName);
    return file.good();
}

bool verifyPalettes(std::vector<unsigned short> *compVec, std::vector<BestPal> *inputPals)
{
    bool isCorrect = true;
    size_t currIndex = 0;
    for (BestPal currPal : *inputPals)
    {
        for (size_t i = 0; i < currPal.palColors.size(); i++)
            if ((*compVec)[currPal.index + i] != currPal.palColors[i])
            {
                isCorrect = false;
                std::cout << "Bad: " << currIndex << " " << currPal.mode << "\n";
                std::cout << currPal.palColors.size() << "\n";
                break;
            }
        currIndex++;
    }
    return isCorrect;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Error, missing input\n");
        return 1;
    }
    size_t lzSize = 0;
    size_t nonLzSize = 0;
    size_t includedSize = 0;
    std::string input = argv[1];
    std::vector<std::string> palNames;
    std::vector<std::vector<unsigned short>> palContents;
    for (const std::filesystem::directory_entry &dirEntry : std::filesystem::recursive_directory_iterator(input))
    {
        if (dirEntry.is_regular_file())
        {
            std::string fileName = dirEntry.path().string();
            if (fileName.find(".gbapal") != std::string::npos
             && fileName.find(".gbapal.lz") == std::string::npos)
            {
                std::string lzName = fileName + ".lz";
                if (doesFileExist(lzName))
                    includedSize += getFileSize(lzName);
                else
                    includedSize += getFileSize(fileName);
            }
        }
        if (dirEntry.is_regular_file())
        {
            std::string fileName = dirEntry.path().string();
            if (fileName.find(".gbapal") != std::string::npos
             && fileName.find(".gbapal.lz") == std::string::npos)
            //if (fileName.find(".gbapal.lz") != std::string::npos)
            {
                nonLzSize += getFileSize(fileName);
                palNames.push_back(fileName);
            }
        }
        else
        {
            continue;
        }
    }
    for (std::string currString : palNames)
        palContents.push_back(readFileAsUS(currString));

    size_t rawSize = 0;
    size_t newSize = 0;
    size_t largestSize = 0;
    size_t largestIndex;
    size_t currIndex = 0;
    //  Read the palettes and strip repeated colors from the end
    std::vector<BestPal> truncatedPals;
    for (size_t i = 0; i < palContents.size(); i++)
    {
        truncatedPals.push_back(truncatePalette(palContents[i]));
        truncatedPals[truncatedPals.size() - 1].fileName = palNames[i];
        rawSize += palContents[i].size()*2;
        newSize += truncatedPals[truncatedPals.size() - 1].palColors.size()*2;
    }
    bool simple = true;
    if (simple)
    {
        std::vector<unsigned short> compVec;
        for (size_t i = 0; i < truncatedPals.size(); i++)
        {
            truncatedPals[i].index = compVec.size();
            for (unsigned short currColor : truncatedPals[i].palColors)
                compVec.push_back(currColor);
        }
        printf("Simple mode\n");
        if (verifyPalettes(&compVec, &truncatedPals))
            printf("Pal compression: OK\n");
        else
            printf("Pal compression: FAIL\n");
        printf("Raw Size: %zu\n", rawSize);
        printf("New Size: %zu\n", newSize);
        printf("Include Size: %zu\n", includedSize);
        printf("Compressed size: %zu\n", compVec.size()*2);
    }
    else
    {
        std::vector<unsigned short> compVec;
        //  Find the pal with the most different colors and start with that
        size_t mostColors = 0;
        size_t palIndex;
        for (size_t i = 0; i < truncatedPals.size(); i++)
        {
            size_t numColors = countColors(truncatedPals[i]);
            if (numColors > mostColors)
            {
                mostColors = numColors;
                palIndex = i;
            }
        }
        truncatedPals[palIndex].mode = PAL_NEW;
        truncatedPals[palIndex].index = 0;
        addPalette(&compVec, &truncatedPals[palIndex]);
        size_t numAssigned = 1;
        size_t validPals = 0;
        size_t invalidPals = 0;
        //  Find the pal that best fits into the existing stream of shorts
        while (numAssigned < truncatedPals.size())
        {
            printf("Pals assigned: %zu\n", numAssigned);
            size_t currIndex = findBestPal(&compVec, &truncatedPals);
            bool isCorrect;
            switch (truncatedPals[currIndex].mode)
            {
                case PAL_NEW:
                    for (unsigned short currColor : truncatedPals[currIndex].palColors)
                        compVec.push_back(currColor);
                    validPals++;
                    break;
                case PAL_EXISTS:
                    isCorrect = true;
                    for (size_t i = 0; i < truncatedPals[currIndex].palColors.size(); i++)
                    {
                        if (compVec[truncatedPals[currIndex].index + i] != truncatedPals[currIndex].palColors[i])
                        {
                            isCorrect = false;
                            break;
                        }
                    }
                    if (isCorrect)
                        validPals++;
                    else
                        invalidPals++;
                    break;
                case PAL_APPEND:
                    isCorrect = true;
                    for (size_t i = truncatedPals[currIndex].length; i < truncatedPals[currIndex].palColors.size(); i++)
                        compVec.push_back(truncatedPals[currIndex].palColors[i]);
                    for (size_t i = 0; i < truncatedPals[currIndex].palColors.size(); i++)
                    {
                        if (compVec[truncatedPals[currIndex].index + i] != truncatedPals[currIndex].palColors[i])
                        {
                            isCorrect = false;
                            break;
                        }
                    }
                    if (isCorrect)
                        validPals++;
                    else
                        invalidPals++;
                    break;
            }
            truncatedPals[currIndex].isAssigned = true;
            numAssigned++;
        }
        printf("Valid: %zu\nInvalid: %zu\n", validPals, invalidPals);
        if (verifyPalettes(&compVec, &truncatedPals))
            printf("Pal compression: OK\n");
        else
            printf("Pal compression: FAIL\n");
        printf("Raw Size: %zu\n", rawSize);
        printf("New Size: %zu\n", newSize);
        printf("Include Size: %zu\n", includedSize);
        printf("Compressed size: %zu\n", compVec.size()*2);
    }
    return 0;
}
