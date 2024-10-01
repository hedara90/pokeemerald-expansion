#include "newMethod.h"
#include <vector>

std::vector<Copy> getCopies(std::vector<unsigned char> input, size_t minLength)
{
    std::vector<Copy> copies;
    for (size_t startIndex = 1; startIndex < input.size(); startIndex++)
    {
        size_t longestLength = 0;
        size_t longestOffset;
        for (size_t searchOffset = 1; searchOffset <= startIndex && searchOffset < 16383; searchOffset++)
        {
            size_t currLength = 0;
            while (input[startIndex + currLength] == input[startIndex + currLength - searchOffset]
                && startIndex + currLength < input.size())
                currLength++;
            if (currLength > longestLength)
            {
                longestLength = currLength;
                longestOffset = searchOffset;
            }
        }
        if (longestLength >= minLength)
        {
            std::vector<unsigned char>::const_iterator start = input.begin() + startIndex;
            std::vector<unsigned char>::const_iterator end = input.begin() + startIndex + longestLength;
            copies.push_back(Copy(startIndex, longestLength, longestOffset, std::vector<unsigned char>(start, end)));
            copies[copies.size() - 1].firstSymbol = input[startIndex - 1];
            startIndex += longestLength;
        }
    }
    std::vector<unsigned char> checkVec(input.size());
    for (Copy copy : copies)
        for (size_t i = 0; i <= copy.length; i++)
            checkVec[copy.index + i - 1]++;

    size_t currStart = 0;
    size_t currLength = 1;
    unsigned char prevSym = checkVec[0];
    for (size_t i = 1; i < checkVec.size(); i++)
    {
        unsigned char currSym = checkVec[i];
        if (currSym == 0 && prevSym == 0)
            currLength++;
        else if (currSym == 0 && prevSym == 1)
        {
            currStart = i;
            currLength = 1;
        }
        else if (currSym == 1 && prevSym == 0)
        {
            std::vector<unsigned char>::const_iterator start = input.begin() + currStart;
            std::vector<unsigned char>::const_iterator end = input.begin() + currStart + currLength;
            copies.push_back(Copy(currStart, currLength, 0, std::vector<unsigned char>(start, end)));
        }
        prevSym = currSym;
    }
    if (prevSym == 0)
    {
        std::vector<unsigned char>::const_iterator start = input.begin() + currStart;
        std::vector<unsigned char>::const_iterator end = input.begin() + currStart + currLength;
        copies.push_back(Copy(currStart, currLength, 0, std::vector<unsigned char>(start, end)));
    }

    return copies;
}

bool verifyCopies(std::vector<Copy> *pCopies, std::vector<unsigned char> *pImage)
{
    std::vector<unsigned char> decodedImage(pImage->size());
    for (Copy copy : (*pCopies))
    {
        if (copy.offset == 0)
        {
            for (size_t i = 0; i < copy.length; i++)
                decodedImage[copy.index + i] = copy.ucSequence[i];
        }
        else
        {
            decodedImage[copy.index - 1] = copy.firstSymbol;
            for (size_t i = 0; i < copy.length; i++)
                decodedImage[copy.index + i] = (*pImage)[copy.index + i - copy.offset];
        }
    }
    for (size_t i = 0; i < decodedImage.size(); i++)
        if (decodedImage[i] != (*pImage)[i])
            return false;
    return true;
}

SortedElement::SortedElement() {}

SortedElement::SortedElement(size_t index, Copy copy)
{
    this->index = index;
    this->copy = copy;
    isCopy = true;
}

std::vector<CompressionInstruction> getInstructions(std::vector<Copy> copies, size_t lengthMod)
{
    std::vector<CompressionInstruction> instructions;
    std::vector<SortedElement> unsortedElements;
    std::vector<SortedElement> sortedElements;

    for (Copy copy : copies)
        unsortedElements.push_back(SortedElement(copy.index, copy));

    while (unsortedElements.size() != 0)
    {
        size_t smallestIndex = 0;
        for (size_t i = 0; i < unsortedElements.size(); i++)
        {
            if (unsortedElements[i].index < unsortedElements[smallestIndex].index)
            {
                smallestIndex = i;
            }
        }
        sortedElements.push_back(unsortedElements[smallestIndex]);
        unsortedElements.erase(unsortedElements.begin() + smallestIndex);
    }
    for (size_t i = 0; i < sortedElements.size(); i++)
    {
        CompressionInstruction currInstruction;
        currInstruction.index = sortedElements[i].index;
        currInstruction.offset = sortedElements[i].copy.offset;
        currInstruction.length = sortedElements[i].copy.length;
        if (currInstruction.offset > 0)
            currInstruction.length -= (lengthMod);
        currInstruction.symbols = sortedElements[i].copy.ucSequence;
        currInstruction.firstSymbol = sortedElements[i].copy.firstSymbol;
        currInstruction.buildBytes();
        instructions.push_back(currInstruction);
    }
    return instructions;
}

void CompressionInstruction::buildBytes()
{
    std::vector<unsigned char> currBytes;
    size_t numLengthBytes = 0;
    size_t numOffsetBytes = 0;
    if (offset != 0)
    {
        size_t currLength = length;
        while (currLength != 0)
        {
            currBytes.push_back(currLength & 0x7f);
            currLength = currLength >> 7;
            if (currLength != 0)
                currBytes[currBytes.size() - 1] += 128;
            numLengthBytes++;
        }
        size_t currOffset = offset;
        while (currOffset != 0)
        {
            currBytes.push_back(currOffset & 0x7f);
            currOffset = currOffset >> 7;
            if (currOffset != 0)
                currBytes[currBytes.size() - 1] += 128;
            numOffsetBytes++;
        }
        currBytes.push_back(firstSymbol);
        size_t testLength = 0;
        for (size_t i = 0; i < numLengthBytes; i++)
        {
            testLength += (currBytes[i] & 0x7f) << (7*i);
        }
        size_t testOffset = 0;
        for (size_t i = 0; i < numOffsetBytes; i++)
        {
            testOffset += (currBytes[numLengthBytes + i] & 0x7f) << (7*i);
        }
    }
    else
    {
        currBytes.push_back(0);
        size_t currLength = length;
        while (currLength != 0)
        {
            currBytes.push_back(currLength & 0x7f);
            currLength = currLength >> 7;
            if (currLength != 0)
                currBytes[currBytes.size() - 1] += 128;
        }
        for (unsigned char currSymbol : symbols)
            currBytes.push_back(currSymbol);
    }
    bytes = currBytes;
}

bool CompressionInstruction::verifyInstruction()
{
    bool lengthDone = false;
    bool offsetDone = false;
    size_t currLength = 0;
    size_t currOffset = 0;
    size_t usedLengths = 0;
    size_t usedOffsets = 0;
    std::vector<unsigned char> currSymbols;
    for (size_t i = 0; i < bytes.size(); i++)
    {
        if (!lengthDone)
        {
            currLength += (bytes[i] & 0x7f) << (7*usedLengths);
            usedLengths++;
            if ((bytes[i] & 0x80) != 0x80)
                lengthDone = true;
        }
        else if (!offsetDone)
        {
            currOffset += (bytes[i] & 0x7f) << (7*usedOffsets);
            usedOffsets++;
            if ((bytes[i] & 0x80) != 0x80)
                offsetDone = true;
        }
        else
        {
            currSymbols.push_back(bytes[i]);
        }
    }
    return true;
}

std::vector<unsigned char> getLosFromInstructions(std::vector<CompressionInstruction> instructions)
{
    std::vector<unsigned char> loVec;
    for (CompressionInstruction instruction : instructions)
    {
        size_t readIndex = 0;
        bool foundLength = false;
        bool foundOffset = false;
        while (!foundLength)
        {
            unsigned char currByte = instruction.bytes[readIndex];
            loVec.push_back(currByte);
            readIndex++;
            if ((currByte & 0x80) != 0x80)
                foundLength = true;
        }
        while (!foundOffset)
        {
            unsigned char currByte = instruction.bytes[readIndex];
            loVec.push_back(currByte);
            readIndex++;
            if ((currByte & 0x80) != 0x80)
                foundOffset = true;
        }
    }
    return loVec;
}

std::vector<unsigned char> getSymsFromInstructions(std::vector<CompressionInstruction> instructions)
{
    std::vector<unsigned char> symVec;
    for (CompressionInstruction instruction : instructions)
    {
        if (instruction.offset != 0)
            symVec.push_back(instruction.firstSymbol);
        else
            for (unsigned char uc : instruction.symbols)
                symVec.push_back(uc);
    }
    return symVec;
}

std::vector<unsigned char> decodeBytes(std::vector<unsigned char> *pLoVec, std::vector<unsigned char> *pSymVec, size_t lengthMod)
{
    std::vector<unsigned char> decodedImage;
    size_t loIndex = 0;
    size_t symIndex = 0;
    while (loIndex < pLoVec->size())
    {
        size_t currLength = 0;
        size_t currOffset = 0;
        currLength += (*pLoVec)[loIndex] & 0x7f;
        loIndex++;
        while (((*pLoVec)[loIndex-1] & 0x80) == 0x80)
        {
            currLength += ((*pLoVec)[loIndex] & 0x7f) << 7;
            loIndex++;
        }
        currOffset += (*pLoVec)[loIndex] & 0x7f;
        loIndex++;
        while (((*pLoVec)[loIndex-1] & 0x80) == 0x80)
        {
            currOffset += ((*pLoVec)[loIndex] & 0x7f) << 7;
            loIndex++;
        }
        if (currLength != 0)
        {
            currLength += lengthMod;
            decodedImage.push_back((*pSymVec)[symIndex]);
            symIndex++;
            for (size_t i = 0; i < currLength; i++)
                decodedImage.push_back(decodedImage[decodedImage.size() - currOffset]);
        }
        else
        {
            for (size_t i = 0; i < currOffset; i++)
            {
                decodedImage.push_back((*pSymVec)[symIndex]);
                symIndex++;
            }
        }
    }
    return decodedImage;
}

bool verifyBytes(std::vector<unsigned char> *pLoVec, std::vector<unsigned char> *pSymVec, std::vector<unsigned char> *pImage, size_t lengthMod)
{
    std::vector<unsigned char> bytes = decodeBytes(pLoVec, pSymVec, lengthMod);
    return compareVectors(&bytes, pImage);
}

bool compareVectors(std::vector<unsigned char> *pVec1, std::vector<unsigned char> *pVec2)
{
    if (pVec1->size() != pVec2->size())
        return false;
    for (size_t i = 0; i < pVec1->size(); i++)
        if ((*pVec1)[i] != (*pVec2)[i])
            return false;
    return true;
}

std::vector<unsigned char> readFileAsUC(std::string filePath)
{
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        printf("Error\n");
        std::cout << filePath << "\n";
        return std::vector<unsigned char>(0);
    }
    iStream.ignore( std::numeric_limits<std::streamsize>::max() );
    std::streamsize size = iStream.gcount();
    iStream.clear();
    iStream.seekg( 0, std::ios_base::beg );
    std::vector<unsigned char> ucVec(size);
    iStream.read((char*)(&ucVec[0]), size);
    iStream.close();
    return ucVec;
}

CompressedImage processImage(std::string fileName, InputSettings settings)
{
    CompressedImage bestImage;
    bool hasImage = false;
    std::vector<unsigned char> rawBase = readFileAsUC(fileName);
    std::string rawBaseString = getStringFromUCvec(rawBase);
    std::string lzName = fileName + ".lz";
    size_t baseLZsize = getFileSize(lzName);
    for (size_t minCodeLength = 3; minCodeLength <= 18; minCodeLength++)
    {
        std::vector<Copy> copies = getCopies(rawBase, minCodeLength);
        if (!verifyCopies(&copies, &rawBase))
        {
            printf("Failed to build intermediates\n");
            continue;
        }
        std::vector<CompressionInstruction> instructions = getInstructions(copies, minCodeLength-1);
        std::vector<unsigned char> loVec = getLosFromInstructions(instructions);
        std::vector<unsigned char> symVec = getSymsFromInstructions(instructions);
        if (!verifyBytes(&loVec, &symVec, &rawBase, minCodeLength-1))
        {
            fprintf(stderr, "Failed to verify instructions at byte stage\n");
            continue;
        }
        for (size_t switcher = 0; switcher < 9; switcher++)
        {
            bool loEncoded = false;
            bool symEncoded = false;
            bool loDelta = false;
            bool symDelta = false;
            switch (switcher)
            {
                case 0:
                    //  No delta, no encoding
                    break;
                case 1:
                    //  Encode syms, no delta
                    if (!settings.canEncodeSyms)
                        continue;
                    symEncoded = true;
                    break;
                case 2:
                    //  Encode syms, delta
                    if (!settings.canEncodeLO || !settings.canDeltaSyms)
                        continue;
                    symEncoded = true;
                    symDelta = true;
                    break;
                case 3:
                    //  Encode LO, no delta
                    if (!settings.canEncodeLO)
                        continue;
                    loEncoded = true;
                    break;
                case 4:
                    //  Encode LO, delta
                    if (!settings.canEncodeLO || !settings.canDeltaLO)
                        continue;
                    loEncoded = true;
                    loDelta = true;
                    break;
                case 5:
                    if (!settings.canEncodeLO || !settings.canEncodeSyms)
                        continue;
                    //  Encode both, no delta
                    loEncoded = true;
                    symEncoded = true;
                    break;
                case 6:
                    //  Encode both, delta LO
                    if (!settings.canEncodeLO || !settings.canEncodeSyms || !settings.canDeltaLO)
                        continue;
                    loEncoded = true;
                    symEncoded = true;
                    loDelta = true;
                    break;
                case 7:
                    //  Encode both, delta syms
                    if (!settings.canEncodeLO || !settings.canEncodeSyms || !settings.canDeltaSyms)
                        continue;
                    loEncoded = true;
                    symEncoded = true;
                    symDelta = true;
                    break;
                case 8:
                    //  Encode both, delta both
                    if (!settings.canEncodeLO || !settings.canEncodeSyms || !settings.canDeltaLO || !settings.canDeltaSyms)
                        continue;
                    loEncoded = true;
                    symEncoded = true;
                    loDelta = true;
                    symDelta = true;
                    break;
            }
            CompressedImage image = fillCompressVec(loVec, symVec, minCodeLength-1, loEncoded, symEncoded, loDelta, symDelta);
            if (!verifyCompression(&image, &rawBase))
            {
                fprintf(stderr, "Failed to verify compression\n");
                std::string loEsetting = "!loEncoded";
                std::string symEsetting = "!symEncoded";
                std::string loDsetting = "!loDelta";
                std::string symDsetting = "!symDelta";
                if (loEncoded)
                    loEsetting = "loEncoded";
                if (symEncoded)
                    symEsetting = "symEncoded";
                if (loDelta)
                    loDsetting = "loDelta";
                if (symDelta)
                    symDsetting = "symDelta";
                fprintf(stderr, "Settings: %s %s %s %s %zu\n", loEsetting.c_str(), symEsetting.c_str(), loDsetting.c_str(), symDsetting.c_str(), minCodeLength);
                continue;
            }
            std::vector<unsigned int> uiVec = getUIntVecFromData(&image);
            if (!verifyUIntVec(&uiVec, &rawBase))
            {
                fprintf(stderr, "Failed to verify binary data vector\n");
                std::string loEsetting = "!loEncoded";
                std::string symEsetting = "!symEncoded";
                std::string loDsetting = "!loDelta";
                std::string symDsetting = "!symDelta";
                if (loEncoded)
                    loEsetting = "loEncoded";
                if (symEncoded)
                    symEsetting = "symEncoded";
                if (loDelta)
                    loDsetting = "loDelta";
                if (symDelta)
                    symDsetting = "symDelta";
                fprintf(stderr, "Settings: %s %s %s %s %zu\n", loEsetting.c_str(), symEsetting.c_str(), loDsetting.c_str(), symDsetting.c_str(), minCodeLength);
                continue;
            }
            image.compressedSize = getCompressedSize(&image);
            if (!hasImage)
            {
                bestImage = image;
                hasImage = true;
                bestImage.writeVec = uiVec;
            }
            else if (image.compressedSize < bestImage.compressedSize)
            {
                bestImage = image;
                hasImage = true;
                bestImage.writeVec = uiVec;
            }
        }
    }
    bestImage.fileName = fileName;
    bestImage.lzSize = baseLZsize;
    if (hasImage)
        bestImage.isValid = true;
    return bestImage;
}

size_t getCompressedSize(CompressedImage *pImage)
{
    //  Header
    size_t totalSize = 1;
    //  LO frequencies if used
    if (pImage->loEncoded)
        totalSize += 3;
    //  Sym frequencies if used
    if (pImage->symEncoded)
        totalSize += 3;
    if (pImage->loSize > 4095)
        totalSize += 1;
    if (pImage->symSize > 4095)
        totalSize += 1;
    totalSize += pImage->data.size();
    return totalSize*4;
}

CompressedImage getDataFromUIntVec(std::vector<unsigned int> *pInput)
{
    CompressedImage image;
    image.header = (*pInput)[0];
    if ((image.header & 0x1) == 0x1)
        image.loEncoded = true;
    else
        image.loEncoded = false;
    if ((image.header & 0x2) == 0x2)
        image.symEncoded = true;
    else
        image.symEncoded = false;
    if ((image.header & 0x4) == 0x4)
        image.loDelta = true;
    else
        image.loDelta = false;
    if ((image.header & 0x8) == 0x8)
        image.symDelta = true;
    else
        image.symDelta = false;
    image.lengthMod = ((image.header >> 4) & 0xf) + 2;
    image.loSize = (image.header >> 8) & 0xfff;
    image.symSize = (image.header >> 20) & 0xfff;
    size_t readIndex = 1;
    if (image.loSize == 0)
    {
        image.loSize = (*pInput)[readIndex];
        readIndex++;
    }
    if (image.symSize == 0)
    {
        image.symSize = (*pInput)[readIndex];
        readIndex++;
    }
    if (image.loEncoded)
    {
        for (size_t i = 0; i < 3; i++)
        {
            image.loFreqs[i] = (*pInput)[readIndex];
            readIndex++;
        }
    }
    if (image.symEncoded)
    {
        for (size_t i = 0; i < 3; i++)
        {
            image.symFreqs[i] = (*pInput)[readIndex];
            readIndex++;
        }
    }
    while (readIndex < pInput->size())
    {
        image.data.push_back((*pInput)[readIndex]);
        readIndex++;
    }
    return image;
}

bool verifyCompression(CompressedImage *pInput, std::vector<unsigned char> *pImage)
{
    std::vector<unsigned char> decodedImage = decodeImage(pInput);
    return compareVectors(&decodedImage, pImage);
}

std::vector<unsigned char> decodeCompression(std::vector<unsigned int> *pInput)
{
    CompressedImage image = getDataFromUIntVec(pInput);
    return decodeImage(&image);
}

std::vector<unsigned char> decodeImage(CompressedImage *pInput)
{
    DataVecs dataVecs = decodeDataVectors(pInput);
    return decodeBytes(&dataVecs.loVec, &dataVecs.symVec, pInput->lengthMod);
}

DataVecs decodeDataVectors(CompressedImage *pInput)
{
    size_t loSize = pInput->loSize;
    size_t symSize = pInput->symSize;
    bool loEncoded = pInput->loEncoded;
    bool symEncoded = pInput->symEncoded;
    bool loDelta = pInput->loDelta;
    bool symDelta = pInput->symDelta;
    std::vector<int> loFreqs = unpackFrequencies(&pInput->loFreqs[0]);
    std::vector<int> symFreqs = unpackFrequencies(&pInput->symFreqs[0]);
    std::vector<unsigned char> symbols = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);

    std::vector<unsigned char> loVec;
    std::vector<unsigned char> symVec;

    if (loEncoded)
    {
        size_t currCol = 0;
        for (size_t i = 0; i < 16; i++)
        {
            for (size_t j = 0; j < loFreqs[i]; j++)
            {
                loDecode[currCol].state = TANS_TABLE_SIZE + currCol;
                loDecode[currCol].symbol = i;
                loDecode[currCol].y = loFreqs[i] + j;
                int currK = 0;
                while ((loDecode[currCol].y << currK) < TANS_TABLE_SIZE)
                    currK++;
                loDecode[currCol].k = currK;
                currCol++;
            }
        }
    }
    if (symEncoded)
    {
        size_t currCol = 0;
        for (size_t i = 0; i < 16; i++)
        {
            for (size_t j = 0; j < symFreqs[i]; j++)
            {
                symDecode[currCol].state = TANS_TABLE_SIZE + currCol;
                symDecode[currCol].symbol = i;
                symDecode[currCol].y = symFreqs[i] + j;
                int currK = 0;
                while ((symDecode[currCol].y << currK) < TANS_TABLE_SIZE)
                    currK++;
                symDecode[currCol].k = currK;
                currCol++;
            }
        }
    }

    std::vector<unsigned char> allBits;
    for (unsigned int ui : pInput->data)
        for (size_t i = 0; i < 32; i++)
            allBits.push_back((ui >> i) & 0x1);

    size_t usedBits = 0;
    std::vector<unsigned char> loByteVec(loSize);
    std::vector<unsigned char> symByteVec(symSize);
    size_t bitIndex = 0;
    if (!loEncoded)
    {
        for (size_t i = 0; i < loSize; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                loByteVec[i] += allBits[bitIndex] << j;
                bitIndex++;
            }
        }
    }

    if (!symEncoded)
    {
        for (size_t i = 0; i < symSize; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                symByteVec[i] += allBits[bitIndex] << j;
                bitIndex++;
            }
        }
    }

    int currState = 0;
    if (loEncoded || symEncoded)
    {
        for (size_t i = 0; i < 6; i++)
        {
            currState += allBits[bitIndex] << i;
            bitIndex++;
        }
        usedBits += 6;
    }
    if (loEncoded)
    {
        for (size_t i = 0; i < loSize*2; i++)
        {
            loVec.push_back(loDecode[currState].symbol);
            int currK = loDecode[currState].k;
            int nextState = loDecode[currState].y << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += allBits[bitIndex] << i;
                bitIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;
        }
        if (loDelta)
            deltaDecode(&loVec, loVec.size());
    }
    if (loEncoded)
        for (size_t i = 0; i < loByteVec.size(); i++)
            loByteVec[i] = loVec[2*i] + (loVec[2*i + 1] << 4);

    if (symEncoded)
    {
        for (size_t i = 0; i < symSize*2; i++)
        {
            symVec.push_back(symDecode[currState].symbol);
            int currK = symDecode[currState].k;
            int nextState = symDecode[currState].y << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += allBits[bitIndex] << i;
                bitIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;
        }
        if (symDelta)
            deltaDecode(&symVec, symVec.size());
    }
    if (symEncoded)
        for (size_t i = 0; i < symByteVec.size(); i++)
            symByteVec[i] = symVec[2*i] + (symVec[2*i + 1] << 4);

    DataVecs returnData;
    returnData.loVec = loByteVec;
    returnData.symVec = symByteVec;
    return returnData;
}


void analyzeImages(std::vector<CompressedImage> *allImages, std::mutex *imageMutex, FileDispatcher *dispatcher, std::mutex *dispatchMutex, InputSettings settings)
{
    std::string fileName = "Initial Value";
    while (fileName != "")
    {
        dispatchMutex->lock();
        fileName = dispatcher->requestFileName();
        dispatchMutex->unlock();
        if (fileName == "")
            break;
        std::string uncompressedFileName = fileName.substr(0, fileName.size()-3);
        CompressedImage currImage = processImage(uncompressedFileName, settings);

        imageMutex->lock();
        allImages->push_back(currImage);
        imageMutex->unlock();
    }
}

CompressedImage fillCompressVec(std::vector<unsigned char> loVec, std::vector<unsigned char> symVec, size_t lengthMod, bool loEncoded, bool symEncoded, bool loDelta, bool symDelta)
{
    CompressedImage image;
    image.loDelta = loDelta;
    image.symDelta = symDelta;
    image.loEncoded = loEncoded;
    image.symEncoded = symEncoded;
    image.lengthMod = lengthMod;
    image.loSize = loVec.size();
    image.symSize = symVec.size();
    std::vector<unsigned char> loNibbles(2*loVec.size());
    std::vector<unsigned char> symNibbles(2*symVec.size());
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);
    image.header = getHeader(loEncoded, symEncoded, loDelta, symDelta, lengthMod, loVec.size(), symVec.size());
    std::vector<unsigned char> symbols = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if (loEncoded)
    {
        for (size_t i = 0; i < loVec.size(); i++)
        {
            loNibbles[2*i] = (loVec)[i] & 0xf;
            loNibbles[2*i + 1] = ((loVec)[i] >> 4) & 0xf;
        }
        std::vector<size_t> loCounts(16);
        if (loDelta)
            deltaEncode(&loNibbles, loNibbles.size());
        for (unsigned char uc : loNibbles)
            loCounts[uc]++;
        std::vector<unsigned char> freqsToUse = getNormalizedCounts(loCounts);
        std::vector<unsigned int> freqs = getFreqWriteInts(freqsToUse);
        image.loFreqs[0] = freqs[0];
        image.loFreqs[1] = freqs[1];
        image.loFreqs[2] = freqs[2];
        size_t currCol = 0;
        for (size_t i = 0; i < 16; i++)
        {
            for (size_t j = 0; j < freqsToUse[i]; j++)
            {
                loDecode[currCol].state = TANS_TABLE_SIZE + currCol;
                loDecode[currCol].symbol = i;
                loDecode[currCol].y = freqsToUse[i] + j;
                int currK = 0;
                while ((loDecode[currCol].y << currK) < TANS_TABLE_SIZE)
                    currK++;
                loDecode[currCol].k = currK;
                currCol++;
            }
        }
    }
    if (symEncoded)
    {
        for (size_t i = 0; i < symVec.size(); i++)
        {
            symNibbles[2*i] = (symVec)[i] & 0xf;
            symNibbles[2*i + 1] = ((symVec)[i] >> 4) & 0xf;
        }
        std::vector<size_t> symCounts(16);
        if (symDelta)
            deltaEncode(&symNibbles, symNibbles.size());
        for (unsigned char uc : symNibbles)
            symCounts[uc]++;
        std::vector<unsigned char> freqsToUse = getNormalizedCounts(symCounts);
        std::vector<unsigned int> freqs = getFreqWriteInts(freqsToUse);
        image.symFreqs[0] = freqs[0];
        image.symFreqs[1] = freqs[1];
        image.symFreqs[2] = freqs[2];
        size_t currCol = 0;
        for (size_t i = 0; i < 16; i++)
        {
            for (size_t j = 0; j < freqsToUse[i]; j++)
            {
                symDecode[currCol].state = TANS_TABLE_SIZE + currCol;
                symDecode[currCol].symbol = i;
                symDecode[currCol].y = freqsToUse[i] + j;
                int currK = 0;
                while ((symDecode[currCol].y << currK) < TANS_TABLE_SIZE)
                    currK++;
                symDecode[currCol].k = currK;
                currCol++;
            }
        }
    }
    int currState = -1;
    std::vector<unsigned int> bitstream;
    if (symEncoded)
    {
        std::vector<unsigned char> reversedVec;
        for (size_t i = 0; i < symNibbles.size(); i++)
            reversedVec.push_back(symNibbles[symNibbles.size() - i - 1]);
        std::vector<EncodeCol> symEncode = createEncodingTable(symDecode, symbols);
        size_t startIndex = 0;
        if (currState == -1)
        {
            currState = findInitialState(symEncode[0], reversedVec[0]) - TANS_TABLE_SIZE;
            startIndex = 1;
        }
        for (size_t i = startIndex; i < reversedVec.size(); i++)
            currState = encodeSingleSymbol(symEncode[currState], reversedVec[i], &bitstream) - TANS_TABLE_SIZE;
    }
    if (loEncoded)
    {
        std::vector<unsigned char> reversedVec;
        for (size_t i = 0; i < loNibbles.size(); i++)
            reversedVec.push_back(loNibbles[loNibbles.size() - i - 1]);
        std::vector<EncodeCol> loEncode = createEncodingTable(loDecode, symbols);
        size_t startIndex = 0;
        if (currState == -1)
        {
            currState = findInitialState(loEncode[0], reversedVec[0]) - TANS_TABLE_SIZE;
            startIndex = 1;
        }
        for (size_t i = startIndex; i < reversedVec.size(); i++)
            currState = encodeSingleSymbol(loEncode[currState], reversedVec[i], &bitstream) - TANS_TABLE_SIZE;
    }
    size_t currBytes = 0;
    size_t currBits = 0;
    unsigned int tempInt = 0;
    if (!loEncoded)
    {
        for (size_t i = 0; i < loVec.size(); i++)
        {
            tempInt += (loVec)[i] << (8*currBytes);
            currBytes++;
            if (currBytes >= 4)
            {
                image.data.push_back(tempInt);
                tempInt = 0;
                currBytes = 0;
            }
        }
    }
    if (!symEncoded)
    {
        for (size_t i = 0; i < symVec.size(); i++)
        {
            tempInt += (symVec)[i] << (8*currBytes);
            currBytes++;
            if (currBytes >= 4)
            {
                image.data.push_back(tempInt);
                tempInt = 0;
                currBytes = 0;
            }
        }
    }
    if (symEncoded || loEncoded)
    {
        tempInt += currState << (currBytes*8);
        currBits += 6;
    }
    for (size_t i = 0; i < bitstream.size(); i++)
    {
        tempInt += bitstream[bitstream.size() - i -1] << (8*currBytes + currBits);
        currBits++;
        if (currBits == 8)
        {
            currBytes++;
            currBits = 0;
        }
        if (currBytes >= 4)
        {
            image.data.push_back(tempInt);
            tempInt = 0;
            currBytes = 0;
        }
    }
    if (currBits != 0)
    {
        currBytes++;
        if (currBytes == 4)
        {
            image.data.push_back(tempInt);
            tempInt = 0;
            currBytes = 0;
        }
    }
    if (currBytes != 0)
        image.data.push_back(tempInt);
    return image;
}

Copy::Copy() {}
Copy::Copy(size_t index, size_t length, size_t offset, std::string strSequence)
{
    this->index = index;
    this->length = length;
    this->offset = offset;
    this->strSequence = strSequence;
    this->ucSequence = getUCvecFromString(strSequence);
}

Copy::Copy(size_t index, size_t length, size_t offset, std::vector<unsigned char> ucSequence)
{
    this->index = index;
    this->length = length;
    this->offset = offset;
    this->ucSequence = ucSequence;
    this->strSequence = getStringFromUCvec(ucSequence);
}

void ImagePrinter::printImage(CompressedImage *image)
{
    if (!printedHeaders)
    {
        printf("ImagePath LZsize NUsize MinLength LOencoded LOdelta SYMencoded SYMdelta\n");
        printedHeaders = true;
    }
    printf("%s %zu %zu %zu %d %d %d %d\n", image->fileName.c_str(), image->lzSize, image->compressedSize, image->lengthMod, image->loEncoded, image->loDelta, image->symEncoded, image->symDelta);
}

std::vector<unsigned char> getNormalizedCounts(std::vector<size_t> input)
{
    std::vector<int> tempVec(16);
    for (size_t i = 0; i < input.size(); i++)
        tempVec[i] = input[i];
    tempVec = normalizeCounts(tempVec, TANS_TABLE_SIZE);
    bool shouldAdjust = false;
    for (int i = 0; i < 16; i++)
        if (tempVec[i] == TANS_TABLE_SIZE)
        {
            shouldAdjust = true;
            tempVec[i]--;
        }
    if (shouldAdjust)
        for (size_t i = 0; i < 16; i++)
            if (tempVec[i] == 0)
            {
                tempVec[i]++;
                break;
            }
    std::vector<unsigned char> returnVec(16);
    for (size_t i = 0; i < 16; i++)
        returnVec[i] = tempVec[i];
    return returnVec;
}

std::vector<unsigned int> getFreqWriteInts(std::vector<unsigned char> input)
{
    std::vector<unsigned int> returnVec(3);
    for (size_t i = 0; i < 5; i++)
    {
        unsigned int val1 = input[i];
        unsigned int val2 = input[5 + i];
        unsigned int val3 = input[10 + i];
        val1 = val1 << (i*6);
        val2 = val2 << (i*6);
        val3 = val3 << (i*6);
        returnVec[0] += val1;
        returnVec[1] += val2;
        returnVec[2] += val3;
    }
    unsigned int lastVal = input[15];
    returnVec[0] += (lastVal & 0x3) << 30;
    returnVec[1] += (lastVal & 0xc) << 28;
    returnVec[2] += (lastVal & 0x30) << 26;
    return returnVec;
}

std::vector<int> unpackFrequencies(unsigned int pInts[3])
{
    std::vector<int> returnVec;
    int freq15 = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            int currVal = (pInts[i] >> (6*j)) & 0x3f;
            returnVec.push_back(currVal);
        }
        freq15 += ((pInts[i] >> 30) & 0x3) << (2*i);
    }
    returnVec.push_back(freq15);
    return returnVec;
}

int findInitialState(EncodeCol encodeCol, unsigned char firstSymbol)
{
    for (size_t i = 0; i < encodeCol.symbols.size(); i++)
    {
        if (encodeCol.symbols[i].symbol == firstSymbol)
            return encodeCol.symbols[i].nextState;
    }
    return -1;
}

unsigned int getHeader(bool loEncoded, bool symEncoded, bool loDelta, bool symDelta, size_t lengthMod, size_t loLength, size_t symLength)
{
    unsigned int returnVal = 0;
    if (loEncoded)
        returnVal += 1;
    if (symEncoded)
        returnVal += 2;
    if (loDelta)
        returnVal += 4;
    if (symDelta)
        returnVal += 8;
    returnVal += (lengthMod - 2) << 4;
    if (loLength < 4096)
        returnVal += (loLength & 0xfff) << 8;
    if (symLength < 4096)
        returnVal += (symLength & 0xfff) << 20;
    return returnVal;
}

InputSettings::InputSettings() {}

InputSettings::InputSettings(bool canEncodeLO, bool canEncodeSyms, bool canDeltaLO, bool canDeltaSyms)
{
    this->canEncodeLO = canEncodeLO;
    this->canEncodeSyms = canEncodeSyms;
    this->canDeltaLO = canDeltaLO;
    this->canDeltaSyms = canDeltaSyms;
}

std::vector<unsigned int> getUIntVecFromData(CompressedImage *pImage)
{
    std::vector<unsigned int> returnVec;
    returnVec.push_back(pImage->header);
    if (pImage->loSize > 4095)
        returnVec.push_back((unsigned int)pImage->loSize);
    if (pImage->symSize > 4095)
        returnVec.push_back((unsigned int)pImage->symSize);
    if (pImage->loEncoded)
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->loFreqs[i]);
    if (pImage->symEncoded)
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->symFreqs[i]);
    for (unsigned int ui : pImage->data)
        returnVec.push_back(ui);
    return returnVec;
}

bool verifyUIntVec(std::vector<unsigned int> *pInput, std::vector<unsigned char> *pImage)
{
    CompressedImage image = getDataFromUIntVec(pInput);
    return verifyCompression(&image, pImage);
}

std::vector<unsigned int> readFileAsUInt(std::string filePath)
{
    std::vector<unsigned int> returnVec;
    std::vector<unsigned char> ucVec;
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        printf("Error\n");
        return returnVec;
    }
    iStream.ignore( std::numeric_limits<std::streamsize>::max() );
    std::streamsize size = iStream.gcount();
    ucVec.resize(size);
    iStream.clear();
    iStream.seekg( 0, std::ios_base::beg );
    iStream.read((char*)(&ucVec[0]), size);
    iStream.close();
    unsigned int *pUInt = reinterpret_cast<unsigned int *>(ucVec.data());
    for (size_t i = 0; i < ucVec.size()/4; i++)
        returnVec.push_back(pUInt[i]);
    return returnVec;
}

std::vector<unsigned char> getUCvecFromUIvec(std::vector<unsigned int> *pInput)
{
    std::vector<unsigned char> returnVec;
    return returnVec;
}
