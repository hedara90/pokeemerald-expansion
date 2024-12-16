#include "compressAlgo.h"

std::vector<ShortCopy> getShortCopies(std::vector<unsigned short> input, size_t minLength)
{
    std::vector<ShortCopy> copies;
    for (size_t startIndex = 1; startIndex < input.size(); startIndex++)
    {
        size_t longestLength = 0;
        size_t longestOffset;
        for (size_t searchOffset = 1; searchOffset <= startIndex && searchOffset < 32767; searchOffset++)
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

        if (longestLength > 32767)
            longestLength = 32767;
        if (longestLength >= minLength)
        {
            std::vector<unsigned short>::const_iterator start = input.begin() + startIndex;
            std::vector<unsigned short>::const_iterator end = input.begin() + startIndex + longestLength;
            copies.push_back(ShortCopy(startIndex, longestLength, longestOffset, std::vector<unsigned short>(start, end)));
            copies[copies.size() - 1].firstSymbol = input[startIndex - 1];
            startIndex += longestLength;
        }
    }
    std::vector<unsigned short> checkVec(input.size());
    for (ShortCopy copy : copies)
        for (size_t i = 0; i <= copy.length; i++)
            checkVec[copy.index + i - 1]++;
    size_t currStart = 0;
    size_t currLength = 1;
    unsigned short prevSym = checkVec[0];
    for (size_t i = 1; i < checkVec.size(); i++)
    {
        unsigned short currSym = checkVec[i];
        if (currSym == 0 && prevSym == 0)
            currLength++;
        else if (currSym == 0 && prevSym == 1)
        {
            currStart = i;
            currLength = 1;
        }
        else if (currSym == 1 && prevSym == 0)
        {
            std::vector<unsigned short>::const_iterator start = input.begin() + currStart;
            std::vector<unsigned short>::const_iterator end = input.begin() + currStart + currLength;
            copies.push_back(ShortCopy(currStart, currLength, 0, std::vector<unsigned short>(start, end)));
        }
        prevSym = currSym;
    }
    if (prevSym == 0)
    {
        std::vector<unsigned short>::const_iterator start = input.begin() + currStart;
        std::vector<unsigned short>::const_iterator end = input.begin() + currStart + currLength;
        copies.push_back(ShortCopy(currStart, currLength, 0, std::vector<unsigned short>(start, end)));
    }

    return copies;
}


bool verifyShortCopies(std::vector<ShortCopy> *pCopies, std::vector<unsigned short> *pImage)
{
    std::vector<unsigned short> decodedImage(pImage->size());
    for (ShortCopy copy : (*pCopies))
    {
        if (copy.offset == 0)
        {
            for (size_t i = 0; i < copy.length; i++)
                decodedImage[copy.index + i] = copy.usSequence[i];
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

SortedShortElement::SortedShortElement() {}

SortedShortElement::SortedShortElement(size_t index, ShortCopy copy)
{
    this->index = index;
    this->copy = copy;
    isCopy = true;
}

std::vector<ShortCompressionInstruction> getShortInstructions(std::vector<ShortCopy> copies, size_t lengthMod)
{
    std::vector<ShortCompressionInstruction> instructions;
    std::vector<SortedShortElement> unsortedElements;
    std::vector<SortedShortElement> sortedElements;

    for (ShortCopy copy : copies)
        unsortedElements.push_back(SortedShortElement(copy.index, copy));

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
        ShortCompressionInstruction currInstruction;
        currInstruction.index = sortedElements[i].index;
        currInstruction.offset = sortedElements[i].copy.offset;
        currInstruction.length = sortedElements[i].copy.length;
        currInstruction.symbols = sortedElements[i].copy.usSequence;
        currInstruction.firstSymbol = sortedElements[i].copy.firstSymbol;
        currInstruction.buildBytes();
        instructions.push_back(currInstruction);
    }
    return instructions;
}

void ShortCompressionInstruction::buildBytes()
{
    if (offset != 0)
    {
        //  Current pattern either exists earlier in the image
        //  or it's a long run of the same value
        size_t currLength = length;
        loBytes.push_back(currLength & LO_LOW_BITS_MASK);
        currLength = currLength >> LO_NUM_LOW_BITS;
        if (currLength != 0)
        {
            loBytes[loBytes.size() - 1] += LO_CONTINUE_BIT;
            loBytes.push_back(currLength & BYTE_MASK);
        }
        size_t currOffset = offset;
        loBytes.push_back(currOffset & LO_LOW_BITS_MASK);
        currOffset = currOffset >> LO_NUM_LOW_BITS;
        if (currOffset != 0)
        {
            loBytes[loBytes.size() - 1] += LO_CONTINUE_BIT;
            loBytes.push_back(currOffset & BYTE_MASK);
        }
        symShorts.push_back(firstSymbol);
    }
    else
    {
        //  The current pattern doesn't exist earlier in the image
        //  it has to be written section by section
        //  Set LENGTH parameter to 0, and use OFFSET parameter as length
        loBytes.push_back(0);
        size_t currLength = length;
        loBytes.push_back(currLength & LO_LOW_BITS_MASK);
        currLength = currLength >> LO_NUM_LOW_BITS;
        if (currLength != 0)
        {
            loBytes[loBytes.size() - 1] += LO_CONTINUE_BIT;
            loBytes.push_back(currLength & BYTE_MASK);
        }
        for (unsigned short currSymbol : symbols)
            symShorts.push_back(currSymbol);
    }
}


void CompressionInstruction::buildBytes()
{
    std::vector<unsigned char> currBytes;
    if (offset != 0)
    {
        size_t currLength = length;
        currBytes.push_back(currLength & 0x7f);
        currLength = currLength >> 7;
        if (currLength != 0)
        {
            currBytes[currBytes.size() - 1] += 128;
            currBytes.push_back(currLength & 0xff);
        }
        size_t currOffset = offset;
        currBytes.push_back(currOffset & 0x7f);
        currOffset = currOffset >> 7;
        if (currOffset != 0)
        {
            currBytes[currBytes.size() - 1] += 128;
            currBytes.push_back(currOffset & 0xff);
        }
        currBytes.push_back(firstSymbol);
    }
    else
    {
        currBytes.push_back(0);
        size_t currLength = length;
        currBytes.push_back(currLength & 0x7f);
        currLength = currLength >> 7;
        if (currLength != 0)
        {
            currBytes[currBytes.size() - 1] += 128;
            currBytes.push_back(currLength & 0xff);
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

std::vector<unsigned char> getLosFromInstructions(std::vector<ShortCompressionInstruction> instructions)
{
    std::vector<unsigned char> loVec;
    for (ShortCompressionInstruction instruction : instructions)
    {
        for (unsigned char uc : instruction.loBytes)
            loVec.push_back(uc);
    }
    return loVec;
}

std::vector<unsigned short> getSymsFromInstructions(std::vector<ShortCompressionInstruction> instructions)
{
    std::vector<unsigned short> symvec;
    for (ShortCompressionInstruction instruction : instructions)
    {
        for (unsigned short uc : instruction.symShorts)
            symvec.push_back(uc);
    }
    return symvec;
}

std::vector<unsigned char> getLosFromInstructions(std::vector<CompressionInstruction> instructions)
{
    std::vector<unsigned char> loVec;
    for (CompressionInstruction instruction : instructions)
    {
        size_t readIndex = 0;

        unsigned char currByte = instruction.bytes[readIndex];
        loVec.push_back(currByte);
        readIndex++;
        //  Extract length
        if ((currByte & 0x80) == 0x80)
        {
            loVec.push_back(instruction.bytes[readIndex]);
            readIndex++;
        }

        //  Extract offset
        currByte = instruction.bytes[readIndex];
        loVec.push_back(currByte);
        readIndex++;
        if ((currByte & 0x80) == 0x80)
        {
            loVec.push_back(instruction.bytes[readIndex]);
            readIndex++;
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

std::vector<unsigned short> decodeBytesShort(std::vector<unsigned char> *pLoVec, std::vector<unsigned short> *pSymVec)
{
    std::vector<unsigned short> decodedImage;
    size_t loIndex = 0;
    size_t symIndex = 0;
    while (loIndex < pLoVec->size())
    {
        size_t currLength = 0;
        size_t currOffset = 0;
        currLength += (*pLoVec)[loIndex] & LO_LOW_BITS_MASK;
        loIndex++;
        if (((*pLoVec)[loIndex-1] & LO_CONTINUE_BIT) == LO_CONTINUE_BIT)
        {
            currLength += (*pLoVec)[loIndex] << LO_NUM_LOW_BITS;
            loIndex++;
        }
        currOffset += (*pLoVec)[loIndex] & LO_LOW_BITS_MASK;
        loIndex++;
        if (((*pLoVec)[loIndex-1] & LO_CONTINUE_BIT) == LO_CONTINUE_BIT)
        {
            currOffset += (*pLoVec)[loIndex] << LO_NUM_LOW_BITS;
            loIndex++;
        }
        if (currLength != 0)
        {
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

std::vector<unsigned char> decodeBytes(std::vector<unsigned char> *pLoVec, std::vector<unsigned char> *pSymVec, size_t lengthMod)
{
    std::vector<unsigned char> decodedImage;
    size_t loIndex = 0;
    size_t symIndex = 0;
    size_t runCount = 0;
    size_t runPixels = 0;
    size_t copyCount = 0;
    size_t copyPixels = 0;
    size_t rawCount = 0;
    size_t rawPixels = 0;
    while (loIndex < pLoVec->size())
    {
        size_t currLength = 0;
        size_t currOffset = 0;
        currLength += (*pLoVec)[loIndex] & 0x7f;
        loIndex++;
        if (((*pLoVec)[loIndex-1] & 0x80) == 0x80)
        {
            currLength += (*pLoVec)[loIndex] << 7;
            loIndex++;
        }
        currOffset += (*pLoVec)[loIndex] & 0x7f;
        loIndex++;
        if (((*pLoVec)[loIndex-1] & 0x80) == 0x80)
        {
            currOffset += (*pLoVec)[loIndex] << 7;
            loIndex++;
        }
        if (currLength != 0)
        {
            decodedImage.push_back((*pSymVec)[symIndex]);
            symIndex++;
            for (size_t i = 0; i < currLength; i++)
                decodedImage.push_back(decodedImage[decodedImage.size() - currOffset]);
            if (currOffset == 1)
            {
                runCount++;
                runPixels += currLength;
            }
            else
            {
                copyCount++;
                copyPixels += currLength;
            }
        }
        else
        {
            for (size_t i = 0; i < currOffset; i++)
            {
                decodedImage.push_back((*pSymVec)[symIndex]);
                symIndex++;
            }
            rawCount++;
            rawPixels += currOffset;
        }
    }
    return decodedImage;
}

bool verifyBytesShort(std::vector<unsigned char> *pLoVec, std::vector<unsigned short> *pSymVec, std::vector<unsigned short> *pImage)
{
    std::vector<unsigned short> shorts = decodeBytesShort(pLoVec, pSymVec);
    return compareVectorsShort(&shorts, pImage);
}

bool compareVectorsShort(std::vector<unsigned short> *pVec1, std::vector<unsigned short> *pVec2)
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
        fprintf(stderr, "Error: Couldn't open %s for reading bytes\n", filePath.c_str());
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
    CompressedImage image;
    std::vector<unsigned char> input = readFileAsUC(fileName);
    if (settings.useFrames)
    {
        //  Determine number of frames
        size_t totalPixels = input.size()*2;
        //  Split input and append
        size_t smallFrames = totalPixels/OVERWORLD_16X16;
        size_t largeFrames = totalPixels/OVERWORLD_32X32;
    }
    else
    {
        image = processImageData(input, settings, fileName);
    }
    return image;
}

CompressedImage processImageFrames(std::string fileName, InputSettings settings)
{
    CompressedImage image;
    std::vector<unsigned char> input = readFileAsUC(fileName);
    std::vector<std::vector<unsigned char>> allInputs(4);
    size_t totalSize = input.size();
    size_t partialSize = totalSize/4;
    size_t currIndex = 0;
    size_t subIndex = 0;
    size_t inputIndex = 0;
    std::vector<size_t> frameOffsets;
    for (unsigned char currChar : input)
    {
        frameOffsets.push_back(image.otherBits.size());
        if (subIndex == partialSize)
        {
            subIndex = 0;
            inputIndex++;
        }
        allInputs[inputIndex].push_back(currChar);
        subIndex++;
    }
    for (size_t i = 0; i < 4; i++)
    {
        CompressedImage tempImage = processImageData(allInputs[i], settings, fileName);
        for (unsigned int currVal : tempImage.writeVec)
            image.otherBits.push_back(currVal);
    }
    unsigned int header = IS_FRAME_CONTAINER;
    image.writeVec.push_back(header);
    for (size_t i = 0; i < 4; i++)
        image.writeVec.push_back((unsigned int)frameOffsets[i]);
    for (unsigned int currVal : image.otherBits)
        image.writeVec.push_back(currVal);
    image.isValid = true;

    return image;
}

CompressedImage processImageData(std::vector<unsigned char> input, InputSettings settings, std::string fileName)
{
    CompressedImage bestImage;
    CompressionMode someMode;
    bool hasImage = false;
    std::vector<unsigned char> rawBase = input;
    std::vector<unsigned short> usBase(rawBase.size()/2);
    memcpy(usBase.data(), rawBase.data(), rawBase.size());
    size_t baseLZsize = 0;
    bool byteFail = false;
    bool copyFail = false;
    bool compressionFail = false;
    bool uIntConversionFail = false;
    if (settings.shouldCompare)
    {
        std::string lzName = fileName + ".lz";
        baseLZsize = getFileSize(lzName);
    }
    std::vector<unsigned char> bestLO;
    std::vector<unsigned short> bestSym;
    std::vector<ShortCompressionInstruction> bestInstructions;
    for (size_t minCodeLength = 2; minCodeLength <= 15; minCodeLength++)
    {
        std::vector<ShortCopy> shortCopies = getShortCopies(usBase, minCodeLength);
        if (!verifyShortCopies(&shortCopies, &usBase))
        {
            copyFail = true;
            continue;
        }
        std::vector<ShortCompressionInstruction> shortInstructions = getShortInstructions(shortCopies, minCodeLength-1);
        std::vector<unsigned char> loVec = getLosFromInstructions(shortInstructions);
        std::vector<unsigned short> symVec = getSymsFromInstructions(shortInstructions);
        if (!verifyBytesShort(&loVec, &symVec, &usBase))
        {
            byteFail = true;
            continue;
        }
        CompressionMode mode = BASE_ONLY;
        //std::vector<CompressionMode> modesToUse = {BASE_ONLY};
        std::vector<CompressionMode> modesToUse = {BASE_ONLY, ENCODE_SYMS, ENCODE_DELTA_SYMS, ENCODE_LO, ENCODE_BOTH, ENCODE_BOTH_DELTA_SYMS};
        if (fileName.find("test/compression/") != std::string::npos)
        {
            if (fileName.find("mode_0.4bpp") != std::string::npos)
                modesToUse = {BASE_ONLY};
            else if (fileName.find("mode_1.4bpp") != std::string::npos)
                modesToUse = {ENCODE_SYMS};
            else if (fileName.find("mode_2.4bpp") != std::string::npos)
                modesToUse = {ENCODE_DELTA_SYMS};
            else if (fileName.find("mode_3.4bpp") != std::string::npos)
                modesToUse = {ENCODE_LO};
            else if (fileName.find("mode_4.4bpp") != std::string::npos)
                modesToUse = {ENCODE_BOTH};
            else if (fileName.find("mode_5.4bpp") != std::string::npos)
                modesToUse = {ENCODE_BOTH_DELTA_SYMS};

            if (modesToUse.size() == 1)
            {
                settings.canDeltaSyms = true;
                settings.canEncodeLO = true;
                settings.canEncodeSyms = true;
            }
        }
        modesToUse = {ENCODE_BOTH};

        for (CompressionMode currMode : modesToUse)
        {
            mode = currMode;
            if (!settings.canDeltaSyms
             && (mode == ENCODE_DELTA_SYMS
              || mode == ENCODE_BOTH_DELTA_SYMS))
                continue;
            if (!settings.canEncodeLO
             && (mode == ENCODE_LO
              || mode == ENCODE_BOTH
              || mode == ENCODE_BOTH_DELTA_SYMS))
                continue;
            if (!settings.canEncodeSyms
             && (mode == ENCODE_SYMS
              || mode == ENCODE_BOTH
              || mode == ENCODE_DELTA_SYMS
              || mode == ENCODE_BOTH_DELTA_SYMS))
                continue;
            CompressedImage image = fillCompressVecNew(loVec, symVec, mode,rawBase.size(), shortInstructions);
            printf("Compress done\n");
            image.loVec = loVec;
            image.symVec = symVec;
            if (!newVerifyCompression(&image, &usBase))
            {
                compressionFail = true;
                continue;
            }
            /*
            printf("Verify done\n");
            std::vector<unsigned int> uiVec = getUIntVecFromData(&image);
            printf("UInt done\n");
            //std::vector<unsigned short> decodedImage = readRawDataVecs(&uiVec);
            std::vector<unsigned short> decodedImage = readRawDataVecsNew(&uiVec);
            printf("Done stuff\n");
            if (!compareVectorsShort(&decodedImage, &usBase))
            {
                uIntConversionFail = true;
                continue;
            }
            */
            image.compressedSize = image.writeVec.size() * 4;
            if (!hasImage)
            {
                bestLO = loVec;
                bestSym = symVec;
                bestInstructions = shortInstructions;
                bestImage = image;
                hasImage = true;
                bestImage.writeVec = uiVec;
                someMode = mode;
            }
            else if (image.compressedSize < bestImage.compressedSize)
            {
                bestLO = loVec;
                bestSym = symVec;
                bestInstructions = shortInstructions;
                bestImage = image;
                hasImage = true;
                bestImage.writeVec = uiVec;
                someMode = mode;
            }
        }
    }
    bestImage.mode = someMode;
    bestImage.fileName = fileName;
    bestImage.lzSize = baseLZsize;
    bestImage.rawNumBytes = rawBase.size();
    if (hasImage)
        bestImage.isValid = true;
    else
    {
        fprintf(stderr, "Failed to compress image %s\nErrors: ", fileName.c_str());
        if (copyFail)
            fprintf(stderr, "CopyProcessing ");
        if (byteFail)
            fprintf(stderr, "ByteConversion ");
        if (compressionFail)
            fprintf(stderr, "Compression ");
        if (uIntConversionFail)
            fprintf(stderr, "uIntConversion ");
        printf("\n");
    }
    return bestImage;
}

CompressedImage getDataFromUIntVec(std::vector<unsigned int> *pInput)
{
    CompressedImage image = readNewHeader(pInput);

    size_t readIndex = 2;

    bool loEncoded = isModeLoEncoded(image.mode);
    bool symEncoded = isModeSymEncoded(image.mode);

    if (loEncoded)
    {
        image.loFreqs[0] = (*pInput)[readIndex];
        image.loFreqs[1] = (*pInput)[readIndex + 1];
        image.loFreqs[2] = (*pInput)[readIndex + 2];
        readIndex += 3;
    }
    if (symEncoded)
    {
        image.symFreqs[0] = (*pInput)[readIndex];
        image.symFreqs[1] = (*pInput)[readIndex + 1];
        image.symFreqs[2] = (*pInput)[readIndex + 2];
        readIndex += 3;
    }
    if (loEncoded || symEncoded)
    {
        for (size_t i = 0; i < image.bitreamSize; i++)
        {
            image.tANSbits.push_back((*pInput)[readIndex]);
            readIndex++;
        }
    }
    std::vector<unsigned char> remainders;
    while (readIndex < pInput->size())
    {
        unsigned int currInt = (*pInput)[readIndex];
        for (size_t i = 0; i < 4; i++)
            remainders.push_back((currInt >> (8*i)) & 0xff);
        readIndex++;
    }
    size_t remIndex = 0;
    if (!symEncoded)
    {
        for (size_t i = 0; i < image.symSize; i++)
        {
            unsigned short currSym = remainders[remIndex];
            remIndex++;
            currSym += remainders[remIndex] << 8;
            remIndex++;
            image.symVec.push_back(currSym);
        }
    }
    if (!loEncoded)
    {
        for (size_t i = 0; i < image.loSize; i++)
        {
            unsigned char currChar = remainders[remIndex];
            remIndex++;
            image.loVec.push_back(currChar);
        }
    }

    return image;
}

bool verifyCompressionShort(CompressedImage *pInput, std::vector<unsigned short> *pImage)
{
    std::vector<unsigned short> decodedImage = decodeImageShort(pInput);
    return compareVectorsShort(&decodedImage, pImage);
}

std::vector<unsigned short> decodeImageShort(CompressedImage *pInput)
{
    DataVecsNew dataVecs = decodeDataVectorsNew(pInput);
    return decodeBytesShort(&dataVecs.loVec, &dataVecs.symVec);
}

DataVecsNew decodeDataVectorsNew(CompressedImage *pInput)
{
    CompressedImage headerValues = readNewHeader(&pInput->headers);
    size_t loSize = headerValues.loSize;
    size_t symSize = headerValues.symSize;
    CompressionMode mode = headerValues.mode;
    bool loEncoded = isModeLoEncoded(mode);
    bool symEncoded = isModeSymEncoded(mode);
    bool symDelta = isModeSymDelta(mode);
    std::vector<unsigned int> loFreqs = unpackFrequencies(pInput->loFreqs[0], pInput->loFreqs[1], pInput->loFreqs[2]);
    std::vector<unsigned int> symFreqs = unpackFrequencies(pInput->symFreqs[0], pInput->symFreqs[1], pInput->symFreqs[2]);
    std::vector<unsigned char> symbols = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);

    std::vector<unsigned char> loVec(loSize);
    std::vector<unsigned short> symVec(symSize);
    std::vector<unsigned char> loNibbles(loSize*2);
    std::vector<unsigned char> symNibbles(symSize*4);

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

    std::vector<unsigned int> allBits(pInput->tANSbits.size()*32);
    size_t currIndex = 0;
    for (unsigned int ui : pInput->tANSbits)
        for (size_t i = 0; i < 32; i++)
        {
            unsigned int currVal = (ui >> i) & 0x1;
            allBits[currIndex] = currVal;
            currIndex++;
        }

    if (!symEncoded)
        for (size_t i = 0; i < symSize; i++)
            symVec[i] = pInput->symVec[i];
    if (!loEncoded)
        for (size_t i = 0; i < loSize; i++)
            loVec[i] = pInput->loVec[i];

    size_t bitIndex = 0;
    int currState = pInput->initialState;
    if (loEncoded && !symEncoded)
    {
        bitIndex = decodeNibbles(loDecode, &allBits, &currState, &loNibbles, bitIndex, loSize*2);
    }
    if (loEncoded && !symEncoded)
        for (size_t i = 0; i < loVec.size(); i++)
            loVec[i] = loNibbles[2*i] + (loNibbles[2*i + 1] << 4);

    if (symEncoded && !loEncoded)
    {
        bitIndex = decodeNibbles(symDecode, &allBits, &currState, &symNibbles, bitIndex, symSize*4);
        if (symDelta)
            deltaDecode(&symNibbles, symNibbles.size());
    }
    if (symEncoded && !loEncoded)
        for (size_t i = 0; i < symVec.size(); i++)
            for (size_t j = 0; j < 4; j++)
                symVec[i] += (unsigned short)symNibbles[i*4 + j] << (j*4);

    if (symEncoded && loEncoded)
    {
        std::vector<unsigned char> loTempNibbles;
        std::vector<unsigned char> symTempNibbles;
        decodeCombinedStream(currState, allBits, loDecode, symDecode, &loTempNibbles, &symTempNibbles, pInput->numInstructions);
    }

    DataVecsNew returnData;
    returnData.loVec = loVec;
    returnData.symVec = symVec;
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

ShortCopy::ShortCopy() {}
ShortCopy::ShortCopy(size_t index, size_t length, size_t offset, std::vector<unsigned short> usSequence)
{
    this->index = index;
    this->length = length;
    this->offset = offset;
    this->usSequence = usSequence;
}

void ImagePrinter::printImage(CompressedImage *image)
{
    if (!printedHeaders)
    {
        printf("ImagePath LZsize NUsize LOencoded LOdelta SYMencoded SYMdelta\n");
        printedHeaders = true;
    }
    printf("%s %zu %zu\n", image->fileName.c_str(), image->lzSize, image->compressedSize);
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

std::vector<unsigned int> unpackFrequencies(unsigned int pack1, unsigned int pack2, unsigned int pack3)
{
    std::vector<unsigned int> returnVec;
    std::vector<unsigned int> input = {pack1, pack2, pack3};
    int freq15 = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            int currVal = (input[i] >> (6*j)) & 0x3f;
            returnVec.push_back(currVal);
        }
        freq15 += ((input[i] >> 30) & 0x3) << (2*i);
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
/*
    mode        5

    state       6       11
    bitstream   12      23  8628 max so far, divide by 4
    loLength    12      23  2922 max so far
    symLength   14      37  14k max so far
    imageSize   10      47  16384 max so far, divide by 16

    u32:5   mode+lz
    u32:10  image size, divided by 32
    u32:14  symlength, divided by 2

    u32:6   state
    u32:12  bitstream, in ints
    u32:12  loLength, in bytes
*/
std::vector<unsigned int> getNewHeaders(CompressionMode mode, size_t imageSize, size_t symLength, int initialState, size_t bitstreamSize, size_t loLength, size_t numInstructions)
{
    if (initialState == -1)
        initialState = 0;
    std::vector<unsigned int> returnVec(2);

    unsigned int secondDataOffset = 0;
    switch (mode)
    {
        case BASE_ONLY:
            secondDataOffset = symLength;
            break;
        case ENCODE_SYMS:
            secondDataOffset = bitstreamSize * 2;
            break;
        case ENCODE_DELTA_SYMS:
            secondDataOffset = bitstreamSize * 2;
            break;
        case ENCODE_LO:
            secondDataOffset = bitstreamSize * 2;
            break;
        case ENCODE_BOTH:
            secondDataOffset = 0;
            break;
        case ENCODE_BOTH_DELTA_SYMS:
            secondDataOffset = 0;
            break;
    }

    returnVec[0] += (unsigned int)mode;     //  5 bits
    returnVec[0] += (unsigned int)initialState << 5;    //  6 bits
    returnVec[0] += (unsigned int)imageSize << (5 + 6); //  21 bits max;
    returnVec[1] += (unsigned int)numInstructions;
    returnVec[1] += (unsigned int)secondDataOffset << 16;
    /*
    returnVec[0] += (imageSize/IMAGE_SIZE_MODIFIER) << IMAGE_SIZE_OFFSET;    //  12 bits
    returnVec[0] += (symLength) << SYM_SIZE_OFFSET;    //  15 bits
                                            //  32 total

    returnVec[1] += initialState;           //  6 bits
    returnVec[1] += bitstreamSize << BITSTREAM_SIZE_OFFSET;     //  13 bits
    returnVec[1] += loLength << LO_SIZE_OFFSET;         //  13 bits
    */

    return returnVec;
}

HeaderData getHeaderStruct(std::vector<unsigned int> *pInput)
{
    HeaderData header;
    header.mode = (CompressionMode)((*pInput)[0] & MODE_MASK);
    header.initialState = ((*pInput)[0] >> 5) & 0x3f;
    header.imageSize = (*pInput)[0] >> 11;
    header.numInstructions = (*pInput)[1] & 0xffff;
    header.dataOffset = (*pInput)[1] >> 16;
    return header;
}

CompressedImage readNewHeader(std::vector<unsigned int> *pInput)
{
    CompressedImage image;
    std::vector<unsigned int> headers(2);
    headers[0] = (*pInput)[0];
    headers[1] = (*pInput)[1];
    image.mode = (CompressionMode)(headers[0] & MODE_MASK);
    /*
    image.rawNumBytes = ((headers[0] >> IMAGE_SIZE_OFFSET) & IMAGE_SIZE_MASK) * IMAGE_SIZE_MODIFIER;
    image.symSize = ((headers[0] >> SYM_SIZE_OFFSET) & SYM_SIZE_MASK);

    image.initialState = headers[1] & INITIAL_STATE_MASK;
    image.bitreamSize = (headers[1] >> BITSTREAM_SIZE_OFFSET) & BITSTREAM_SIZE_MASK;
    image.loSize = (headers[1] >> LO_SIZE_OFFSET) & LO_SIZE_MASK;
    */
    image.initialState = (headers[0] >> 5) & INITIAL_STATE_MASK;
    image.rawNumBytes = headers[0] >> 11;
    image.numInstructions = headers[1] & 0xffff;
    image.secondDataOffset = headers[1] >> 16;
    image.headers = headers;
    return image;
}

InputSettings::InputSettings() {}

InputSettings::InputSettings(bool canEncodeLO, bool canEncodeSyms, bool canDeltaSyms)
{
    this->canEncodeLO = canEncodeLO;
    this->canEncodeSyms = canEncodeSyms;
    this->canDeltaSyms = canDeltaSyms;
}

std::vector<unsigned int> getUIntVecFromData(CompressedImage *pImage)
{
    std::vector<unsigned int> returnVec;
    CompressionMode mode = pImage->mode;
    returnVec.push_back(pImage->headers[0]);
    returnVec.push_back(pImage->headers[1]);
    bool loEncoded = isModeLoEncoded(mode);
    bool symEncoded = isModeSymEncoded(mode);
    if (loEncoded)
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->loFreqs[i]);
    if (symEncoded)
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->symFreqs[i]);
    if (loEncoded || symEncoded)
        for (unsigned int currBits : pImage->tANSbits)
            returnVec.push_back(currBits);
    unsigned int currInt = 0;
    size_t currOffset = 0;
    bool containsData = false;
    if (!symEncoded)
    {
        for (size_t i = 0; i < pImage->symVec.size(); i++)
        {
            containsData = true;
            currInt += pImage->symVec[i] << currOffset;
            currOffset += 16;
            if (currOffset == 32)
            {
                returnVec.push_back(currInt);
                currInt = 0;
                currOffset = 0;
                containsData = false;
            }
        }
    }
    if (!loEncoded)
    {
        for (size_t i = 0; i < pImage->loVec.size(); i++)
        {
            containsData = true;
            currInt += (unsigned int)pImage->loVec[i] << currOffset;
            currOffset += 8;
            if (currOffset == 32)
            {
                returnVec.push_back(currInt);
                currInt = 0;
                currOffset = 0;
                containsData = false;
            }
        }
    }
    if (containsData)
        returnVec.push_back(currInt);
    /*
    if (isModeLoEncoded(otherImage.mode))
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->loFreqs[i]);
    if (isModeSymEncoded(otherImage.mode))
        for (size_t i = 0; i < 3; i++)
            returnVec.push_back(pImage->symFreqs[i]);
    if (isModeLoEncoded(otherImage.mode) || isModeSymEncoded(otherImage.mode))
        for (unsigned int ui : pImage->tANSbits)
            returnVec.push_back(ui);
    unsigned int currInt = 0;
    unsigned int currOffset = 0;
    if (!isModeSymEncoded(otherImage.mode))
    {
        for (size_t i = 0; i < pImage->symVec.size(); i++)
        {
            currInt += pImage->symVec[i] << (8*(currOffset % 4));
            currOffset += 2;
            if (currOffset % 4 == 0)
            {
                returnVec.push_back(currInt);
                currInt = 0;
            }
        }
    }
    if (!isModeLoEncoded(otherImage.mode))
    {
        for (size_t i = 0; i < pImage->loVec.size(); i++)
        {
            currInt += 0;
            currInt += pImage->loVec[i] << (8*(currOffset % 4));
            currOffset++;
            if (currOffset % 4 == 0)
            {
                returnVec.push_back(currInt);
                currInt = 0;
            }
        }
    }
    if (currOffset != 0)
        returnVec.push_back(currInt);
    */
    return returnVec;
}

bool verifyUIntVecShort(std::vector<unsigned int> *pInput, std::vector<unsigned short> *pImage)
{
    CompressedImage image = getDataFromUIntVec(pInput);
    return verifyCompressionShort(&image, pImage);
}

std::vector<unsigned int> readFileAsUInt(std::string filePath)
{
    std::vector<unsigned int> returnVec;
    std::vector<unsigned char> ucVec;
    std::ifstream iStream;
    iStream.open(filePath.c_str(), std::ios::binary);
    if (!iStream.is_open())
    {
        fprintf(stderr, "Error: Couldn't open file %s for reading\n", filePath.c_str());
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

bool isModeLoEncoded(CompressionMode mode)
{
    if (mode == ENCODE_LO
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return true;
    return false;
}

bool isModeSymEncoded(CompressionMode mode)
{
    if (mode == ENCODE_SYMS
     || mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return true;
    return false;
}

bool isModeSymDelta(CompressionMode mode)
{
    if (mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return true;
    return false;
}

CompressedImage fillCompressVecNew(std::vector<unsigned char> loVec, std::vector<unsigned short> symVec, CompressionMode mode, size_t imageBytes, std::vector<ShortCompressionInstruction> instructions)
{
    CompressedImage image;
    bool loEncoded = isModeLoEncoded(mode);
    bool symEncoded = isModeSymEncoded(mode);
    bool symDelta = isModeSymDelta(mode);

    std::vector<unsigned char> loNibbles(2*loVec.size());
    std::vector<unsigned char> symNibbles(4*symVec.size());
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);
    std::vector<unsigned char> symbols = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if (loEncoded)
    {
        for (size_t i = 0; i < loVec.size(); i++)
        {
            loNibbles[2*i] = (loVec)[i] & 0xf;
            loNibbles[2*i + 1] = ((loVec)[i] >> 4) & 0xf;
        }
        std::vector<size_t> loCounts(16);
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
            for (size_t j = 0; j < 4; j++)
                symNibbles[4*i + j] = (symVec[i] >> (4*j)) & 0xf;
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
    if (symEncoded && !loEncoded)
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
    if (loEncoded && !symEncoded)
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
    size_t currInstruction = 0;
    if (loEncoded && symEncoded)
    {
        std::vector<EncodeCol> symEncode = createEncodingTable(symDecode, symbols);
        std::vector<EncodeCol> loEncode = createEncodingTable(loDecode, symbols);
        //  Build new vectors to handle the combined data stream
        std::vector<unsigned char> fullVec;
        std::vector<std::vector<unsigned char>> loInsVecs;
        std::vector<std::vector<unsigned char>> symInsVecs;
        size_t loIndex = 0;
        size_t symIndex = 0;
        for (ShortCompressionInstruction instruction : instructions)
        {
            if (instruction.offset == 0)
            {
                instruction.offset = instruction.length;
                instruction.length = 0;
            }
            std::vector<unsigned char> loTempVec;
            std::vector<unsigned char> symTempVec;
            unsigned char loByte1 = instruction.length & 0x7f;
            unsigned char loByte2 = instruction.length >> 7;
            if (loByte2 != 0)
            {
                loByte1 += 0x80;
                loTempVec.push_back(loByte1 & 0xf);
                loTempVec.push_back(loByte1 >> 4);
                loTempVec.push_back(loByte2 & 0xf);
                loTempVec.push_back(loByte2 >> 4);
            }
            else
            {
                loTempVec.push_back(loByte1 & 0xf);
                loTempVec.push_back(loByte1 >> 4);
            }
            unsigned char loByte3 = instruction.offset & 0x7f;
            unsigned char loByte4 = instruction.offset >> 7;
            if (loByte4 != 0)
            {
                loByte3 += 0x80;
                loTempVec.push_back(loByte3 & 0xf);
                loTempVec.push_back(loByte3 >> 4);
                loTempVec.push_back(loByte4 & 0xf);
                loTempVec.push_back(loByte4 >> 4);
            }
            else
            {
                loTempVec.push_back(loByte3 & 0xf);
                loTempVec.push_back(loByte3 >> 4);
            }
            if (instruction.length != 0)
            {
                for (size_t i = 0; i < 4; i++)
                {
                    symTempVec.push_back(symNibbles[symIndex]);
                    symIndex++;
                }
            }
            else
            {
                for (size_t i = 0; i < 4*instruction.offset; i++)
                {
                    symTempVec.push_back(symNibbles[symIndex]);
                    symIndex++;
                }
            }
            loInsVecs.push_back(loTempVec);
            symInsVecs.push_back(symTempVec);
        }
        for (size_t i = 0; i < loInsVecs.size(); i++)
        {
            size_t currOuterIndex = loInsVecs.size() - 1 - i;
            for (size_t j = 0; j < symInsVecs[currOuterIndex].size(); j++)
            {
                size_t currInnerIndex = symInsVecs[currOuterIndex].size() - 1 - j;
                if (currState == -1)
                    currState = findInitialState(symEncode[0], symInsVecs[currOuterIndex][currInnerIndex]) - TANS_TABLE_SIZE;
                currState = encodeSingleSymbol(symEncode[currState], symInsVecs[currOuterIndex][currInnerIndex], &bitstream) - TANS_TABLE_SIZE;
            }
            for (size_t j = 0; j < loInsVecs[currOuterIndex].size(); j++)
            {
                size_t currInnerIndex = loInsVecs[currOuterIndex].size() - 1 - j;
                currState = encodeSingleSymbol(loEncode[currState], loInsVecs[currOuterIndex][currInnerIndex], &bitstream) - TANS_TABLE_SIZE;
            }
        }
        currInstruction++;
    }
    std::vector<unsigned int> reversedBitstream(bitstream.size());
    for (size_t i = 0; i < bitstream.size(); i++)
        reversedBitstream[reversedBitstream.size() - 1 - i] = bitstream[i];
    bitstream = reversedBitstream;
    std::vector<unsigned int> checkBits = bitstream;
    int checkState = currState;

    size_t currBitIndex = 0;
    if (loEncoded && !symEncoded)
    {
        std::vector<unsigned char> checkLoNibbles(loNibbles.size());
        currBitIndex = decodeNibbles(loDecode, &checkBits, &checkState, &checkLoNibbles, currBitIndex, loNibbles.size());
        for (size_t i = 0; i < loNibbles.size(); i++)
            if (loNibbles[i] != checkLoNibbles[i])
            {
                fprintf(stderr, "LO Mismatch\n");
                break;
            }
    }
    if (symEncoded && !loEncoded)
    {
        std::vector<unsigned char> checkSymNibbles(symNibbles.size());
        currBitIndex = decodeNibbles(symDecode, &checkBits, &checkState, &checkSymNibbles, currBitIndex, symNibbles.size());
        for (size_t i = 0; i < symNibbles.size(); i++)
            if (symNibbles[i] != checkSymNibbles[i])
            {
                fprintf(stderr, "Symbol Mismatch\n");
                break;
            }
    }
    if (loEncoded && symEncoded)
    {
        std::vector<unsigned char> loNibblesDecoded;
        std::vector<unsigned char> symNibblesDecoded;
        decodeCombinedStream(checkState, checkBits, loDecode, symDecode, &loNibblesDecoded, &symNibblesDecoded, instructions.size());
        if (loNibblesDecoded.size() != loNibbles.size())
            fprintf(stderr, "Size Mismatch for LOs\n");
        else
            for (size_t i = 0; i < loNibbles.size(); i++)
                if (loNibblesDecoded[i] != loNibbles[i])
                    fprintf(stderr, "LO Mismatch, Combined\n");
        if (symNibblesDecoded.size() != symNibbles.size())
            fprintf(stderr, "Size Mismatch for Symbols\n");
        else
            for (size_t i = 0; i < symNibbles.size(); i++)
                if (symNibblesDecoded[i] != symNibbles[i])
                    fprintf(stderr, "Symbol Mismatch, Combined\n");
    }

    std::vector<unsigned int> tANSbits;
    unsigned int currInt = 0;
    for (size_t i = 0; i < bitstream.size(); i++)
    {
        currInt += bitstream[i] << (i%32);
        if ((i+1) % 32 == 0)
        {
            tANSbits.push_back(currInt);
            currInt = 0;
        }
    }
    if (bitstream.size() % 32 != 0)
        tANSbits.push_back(currInt);
    image.headers = getNewHeaders(mode, imageBytes, symVec.size(), currState, tANSbits.size(), loVec.size(), instructions.size());
    image.tANSbits = tANSbits;
    image.symVec = symVec;
    image.loVec = loVec;
    image.initialState = currState;
    image.numInstructions = instructions.size();
    image.writeVec.push_back(image.headers[0]);
    image.writeVec.push_back(image.headers[1]);
    if (loEncoded)
    {
        for (size_t i = 0; i < 3; i++)
            image.writeVec.push_back(image.loFreqs[i]);
    }
    if (symEncoded)
    {
        for (size_t i = 0; i < 3; i++)
            image.writeVec.push_back(image.symFreqs[i]);
    }
    if (loEncoded || symEncoded)
    {
        for (unsigned int ui : image.tANSbits)
            image.writeVec.push_back(ui);
    }
    unsigned int currInt = 0;
    bool containsData = false;
    size_t currOffset = 0;
    if (!symEncoded)
    {
        for (unsigned short us : symVec)
        {
            containsData = true;
            currInt += us << currOffset;
            currOffset += 16;
            if (currOffset == 32)
            {
                image.writeVec.push_back(currInt);
                currOffset = 0;
                containsData = false;
            }
        }
    }
    if (!loEncoded)
    {
        for (unsigned char uc : loVec)
        {
            containsData = true;
            currInt += us << currOffset;
            currOffset += 8;
            if (currOffset == 32)
            {
                image.writeVec.push_back(currInt);
                currOffset = 0;
                containsData = false;
            }
        }
    }
    if (containsData)
        image.writeVec.push_back(currInt);
    return image;
}

void decodeCombinedStream(int state, std::vector<unsigned int> bitstream, std::vector<DecodeCol> loTable, std::vector<DecodeCol> symTable, std::vector<unsigned char> *loNibbles, std::vector<unsigned char> *symNibbles, size_t numInstructions)
{
    size_t instructionIndex = 0;
    size_t streamIndex = 0;
    while (instructionIndex < numInstructions)
    {
        size_t currLength = loTable[state].symbol;
        loNibbles->push_back(loTable[state].symbol);
        size_t currY = loTable[state].y;
        size_t currK = loTable[state].k;
        int nextState = currY << currK;
        for (size_t i = 0; i < currK; i++)
        {
            nextState += bitstream[streamIndex] << i;
            streamIndex++;
        }
        state = nextState - TANS_TABLE_SIZE;

        currLength += loTable[state].symbol << 4;
        loNibbles->push_back(loTable[state].symbol);
        currY = loTable[state].y;
        currK = loTable[state].k;
        nextState = currY << currK;
        for (size_t i = 0; i < currK; i++)
        {
            nextState += bitstream[streamIndex] << i;
            streamIndex++;
        }
        state = nextState - TANS_TABLE_SIZE;
        if (currLength & LO_CONTINUE_BIT)
        {
            currLength = currLength & 0x7f;
            size_t tempLength = loTable[state].symbol;
            loNibbles->push_back(loTable[state].symbol);
            currY = loTable[state].y;
            currK = loTable[state].k;
            nextState = currY << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += bitstream[streamIndex] << i;
                streamIndex++;
            }
            state = nextState - TANS_TABLE_SIZE;

            tempLength += loTable[state].symbol << 4;
            loNibbles->push_back(loTable[state].symbol);
            currY = loTable[state].y;
            currK = loTable[state].k;
            nextState = currY << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += bitstream[streamIndex] << i;
                streamIndex++;
            }
            state = nextState - TANS_TABLE_SIZE;
            currLength += tempLength << 7;
        }

        size_t currOffset = loTable[state].symbol;
        loNibbles->push_back(loTable[state].symbol);
        currY = loTable[state].y;
        currK = loTable[state].k;
        nextState = currY << currK;
        for (size_t i = 0; i < currK; i++)
        {
            nextState += bitstream[streamIndex] << i;
            streamIndex++;
        }
        state = nextState - TANS_TABLE_SIZE;

        currOffset += loTable[state].symbol << 4;
        loNibbles->push_back(loTable[state].symbol);
        currY = loTable[state].y;
        currK = loTable[state].k;
        nextState = currY << currK;
        for (size_t i = 0; i < currK; i++)
        {
            nextState += bitstream[streamIndex] << i;
            streamIndex++;
        }
        state = nextState - TANS_TABLE_SIZE;
        if (currOffset & LO_CONTINUE_BIT)
        {
            currOffset = currOffset & 0x7f;
            size_t tempOffset = loTable[state].symbol;
            loNibbles->push_back(loTable[state].symbol);
            currY = loTable[state].y;
            currK = loTable[state].k;
            nextState = currY << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += bitstream[streamIndex] << i;
                streamIndex++;
            }
            state = nextState - TANS_TABLE_SIZE;

            tempOffset += loTable[state].symbol << 4;
            loNibbles->push_back(loTable[state].symbol);
            currY = loTable[state].y;
            currK = loTable[state].k;
            nextState = currY << currK;
            for (size_t i = 0; i < currK; i++)
            {
                nextState += bitstream[streamIndex] << i;
                streamIndex++;
            }
            state = nextState - TANS_TABLE_SIZE;
            currOffset += tempOffset << 7;
        }
        if (currLength != 0)
        {
            //size_t fullSymbol = 0;
            for (size_t i = 0; i < 4; i++)
            {
                //fullSymbol += symTable[state].symbol << (4*i);
                symNibbles->push_back(symTable[state].symbol);
                currY = symTable[state].y;
                currK = symTable[state].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                state = nextState - TANS_TABLE_SIZE;
            }
        }
        else
        {
            //size_t fullSymbol = 0;
            for (size_t i = 0; i < 4*currOffset; i++)
            {
                //fullSymbol += symTable[state].symbol << (4*i);
                symNibbles->push_back(symTable[state].symbol);
                currY = symTable[state].y;
                currK = symTable[state].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                state = nextState - TANS_TABLE_SIZE;
            }
        }
        instructionIndex++;
    }
}

size_t decodeNibbles(std::vector<DecodeCol> decodeTable, std::vector<unsigned int> *bits, int *currState, std::vector<unsigned char> *nibbleVec, size_t currBitIndex, size_t numNibbles)
{
    for (size_t i = 0; i < numNibbles; i++)
    {
        (*nibbleVec)[i] = decodeTable[*currState].symbol;
        int currK = decodeTable[*currState].k;
        int nextState = decodeTable[*currState].y << currK;
        for (size_t j = 0; j < currK; j++)
        {
            nextState += (*bits)[currBitIndex] << j;
            currBitIndex++;
        }
        *currState = nextState - TANS_TABLE_SIZE;
    }
    return currBitIndex;
}

std::vector<unsigned short> readRawDataVecsNew(std::vector<unsigned int> input)
{
    HeaderData header = &input;
    CompressionMode mode = headerValues.mode;
    size_t secondDataOffset = headerValues.secondDataOffset;
    size_t numInstructions = headerValues.numInstructions;
    bool loEncoded = isModeLoEncoded(mode);
    bool symEncoded = isModeSymEncoded(mode);
    bool symDelta = isModeSymDelta(mode);
}

std::vector<unsigned short> readRawDataVecs(std::vector<unsigned int> *pInput)
{
    std::vector<unsigned short> imageVec;
    /*
    CompressedImage readImage = readNewHeader(pInput);
    bool loEncoded = isModeLoEncoded(readImage.mode);
    bool symEncoded = isModeSymEncoded(readImage.mode);
    bool symDelta = isModeSymDelta(readImage.mode);
    size_t readIndex = 2;
    std::vector<unsigned int> tANSbits;
    std::vector<unsigned int> allBits;
    std::vector<unsigned short> symVec;
    std::vector<unsigned char> loVec;
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    int currState = readImage.initialState;
    size_t secondDataOffset = readImage.secondDataOffset;
    size_t numInstructions = readImage.numInstructions;
    if (loEncoded)
    {
        printf("Building LO table\n");
        for (size_t i = 0; i < 3; i++)
            readImage.loFreqs[i] = (*pInput)[readIndex + i];
        readIndex += 3;
        std::vector<int> loFreqs = unpackFrequencies(readImage.loFreqs[0], readImage.loFreqs[1], readImage.loFreqs[2]);
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
        printf("Building Sym table\n");
        for (size_t i = 0; i < 3; i++)
            readImage.symFreqs[i] = (*pInput)[readIndex + i];
        readIndex += 3;
        std::vector<int> symFreqs = unpackFrequencies(&readImage.symFreqs[0]);
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
    if (loEncoded && !symEncoded)
    {
        //  Decode X instructions from the bitstream and read symbols from 2ndOffset
        std::vector<unsigned short> symbols(pInput->size()*2);
        memcpy(symbols.data(), pInput->data(), pInput->size()*4);
        size_t symbolIndex = 4 + 6 + secondDataOffset;
        for (size_t i = symbolIndex; i < symbols.size(); i++)
            symVec.push_back(symbols[i]);
        std::vector<unsigned int> bitstream;
        for (size_t i = readIndex; i < pInput->size(); i++)
            for (size_t j = 0; j < 32; j++)
                bitstream.push_back(((*pInput)[i] >> j) & 0x1);
        size_t streamIndex = 0;
        for (size_t i = 0; i < numInstructions; i++)
        {
            //  Get first length nibble
            size_t currLength = loDecode[currState].symbol;
            size_t currY = loDecode[currState].y;
            size_t currK = loDecode[currState].k;
            int nextState = currY << currK;
            for (size_t j = 0; j < currK; j++)
            {
                nextState += bitstream[streamIndex] << j;
                streamIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;

            //  Get second length nibble
            currLength += loDecode[currState].symbol << 4;
            loVec.push_back(currLength);
            currY = loDecode[currState].y;
            currK = loDecode[currState].k;
            nextState = currY << currK;
            for (size_t j = 0; j < currK; j++)
            {
                nextState += bitstream[streamIndex] << j;
                streamIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;

            loVec.push_back(currLength);

            //  Get second length byte if needed
            if (currLength & LO_CONTINUE_BIT)
            {
                currLength -= LO_CONTINUE_BIT;
                size_t tempLength = loDecode[currState].symbol;
                currY = loDecode[currState].y;
                currK = loDecode[currState].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                currState = nextState - TANS_TABLE_SIZE;

                tempLength += loDecode[currState].symbol << 4;
                currY = loDecode[currState].y;
                currK = loDecode[currState].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                currState = nextState - TANS_TABLE_SIZE;

                loVec.push_back(tempLength);
                currLength += tempLength << 7;
            }

            //  Get first offset nibble
            size_t currOffset = loDecode[currState].symbol;
            currY = loDecode[currState].y;
            currK = loDecode[currState].k;
            nextState = currY << currK;
            for (size_t j = 0; j < currK; j++)
            {
                nextState += bitstream[streamIndex] << j;
                streamIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;

            //  Get second offset nibble
            currOffset += loDecode[currState].symbol << 4;
            currY = loDecode[currState].y;
            currK = loDecode[currState].k;
            nextState = currY << currK;
            for (size_t j = 0; j < currK; j++)
            {
                nextState += bitstream[streamIndex] << j;
                streamIndex++;
            }
            currState = nextState - TANS_TABLE_SIZE;

            loVec.push_back(currOffset);

            //  Get second offset nibble if needed
            if (currOffset & LO_CONTINUE_BIT)
            {
                currOffset -= LO_CONTINUE_BIT;
                size_t tempOffset = loDecode[currState].symbol;
                currY = loDecode[currState].y;
                currK = loDecode[currState].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                currState = nextState - TANS_TABLE_SIZE;

                tempOffset += loDecode[currState].symbol << 4;
                currY = loDecode[currState].y;
                currK = loDecode[currState].k;
                nextState = currY << currK;
                for (size_t j = 0; j < currK; j++)
                {
                    nextState += bitstream[streamIndex] << j;
                    streamIndex++;
                }
                currState = nextState - TANS_TABLE_SIZE;
                currOffset += tempOffset << 7;

                loVec.push_back(tempOffset);
            }
        }
    }
    if (symEncoded && !loEncoded)
    {
        //  Read X instructions from 2ndOffset and decode symbols from the bitstream
        std::vector<unsigned char> symNibbles;
        std::vector<unsigned char> charVec(pInput->size()*4);
        memcpy(charVec.data(), pInput->data(), pInput->size()*4);
        size_t loIndex = 8 + 12 + secondDataOffset*2;
        for (size_t i = loIndex; i < charVec.size(); i++)
            loVec.push_back(charVec[i]);
        std::vector<unsigned int> bitstream;
        size_t streamIndex = 0;
        for (size_t i = readIndex; i < pInput->size(); i++)
            for (size_t j = 0; j < 32; j++)
                bitstream.push_back(((*pInput)[i] >> j) & 0x1);
        loIndex = 0;
        for (size_t i = 0; i < numInstructions; i++)
        {
            size_t currLength = loVec[loIndex];
            loIndex++;
            if (currLength & LO_CONTINUE_BIT)
            {
                currLength -= LO_CONTINUE_BIT;
                currLength += loVec[loIndex] << 7;
                loIndex++;
            }
            size_t currOffset = loVec[loIndex];
            loIndex++;
            if (currOffset & LO_CONTINUE_BIT)
            {
                currOffset -= LO_CONTINUE_BIT;
                currOffset += loVec[loIndex] << 7;
                loIndex++;
            }
            if (currLength != 0)
            {
                //  Decode 1
                for (size_t i = 0; i < 4; i++)
                {
                    unsigned char currSym = symDecode[currState].symbol;
                    symNibbles.push_back(currSym);
                    size_t currY = symDecode[currState].y;
                    size_t currK = symDecode[currState].k;
                    int nextState = currY << currK;
                    for (size_t j = 0; j < currK; j++)
                    {
                        nextState += bitstream[streamIndex] << j;
                        streamIndex++;
                    }
                    currState = nextState - TANS_TABLE_SIZE;
                }
            }
            else
            {
                //  Decode CurrOffset
                for (size_t i = 0; i < 4; i++)
                {
                    unsigned char currSym = symDecode[currState].symbol;
                    symNibbles.push_back(currSym);
                    size_t currY = symDecode[currState].y;
                    size_t currK = symDecode[currState].k;
                    int nextState = currY << currK;
                    for (size_t j = 0; j < currK; j++)
                    {
                        nextState += bitstream[streamIndex] << j;
                        streamIndex++;
                    }
                    currState = nextState - TANS_TABLE_SIZE;
                }
            }
        }
        if (symDelta)
        {
            deltaDecode(&symNibbles, symNibbles.size());
        }
        for (size_t i = 0; i < symNibbles.size()/4; i++)
        {
            unsigned short currSymbol = 0;
            for (size_t j = 0; j < 4; j++)
                currSymbol += symNibbles[i*4 + j] << (j*4);
            symVec.push_back(currSymbol);
        }
    }
    if (loEncoded && symEncoded)
    {
        printf("Doing full thing\n");
        std::vector<unsigned int> bitstream;
        std::vector<unsigned char> loNibbles;
        std::vector<unsigned char> symNibbles;

        for (size_t currIndex = readIndex; currIndex < pInput->size(); currIndex++)
        {
            unsigned int currBits = (*pInput)[currIndex];
            for (size_t i = 0; i < 32; i++)
                bitstream.push_back((currBits >> i) & 0x1);
        }

        decodeCombinedStream(currState, bitstream, loDecode, symDecode, &loNibbles, &symNibbles, numInstructions);
        for (size_t i = 0; i < loNibbles.size()/2; i++)
        {
            unsigned char currLO = loNibbles[2*i];
            currLO += loNibbles[2*i + 1] << 4;
            loVec.push_back(currLO);
        }
        if (symDelta)
        {
            deltaDecode(&symNibbles, symNibbles.size());
            printf("stuff\n");
        }
        for (size_t i = 0; i < symNibbles.size()/4; i++)
        {
            unsigned short currSym = symNibbles[4*i];
            currSym += ((unsigned short)symNibbles[4*i + 1]) << 4;
            currSym += ((unsigned short)symNibbles[4*i + 2]) << 8;
            currSym += ((unsigned short)symNibbles[4*i + 3]) << 12;
            symVec.push_back(currSym);
        }
    }
    if (!loEncoded && !symEncoded)
    {
        std::vector<unsigned short> shortData(pInput->size()*2 - 4);
        std::vector<unsigned char> charData;
        memcpy(shortData.data(), &(*pInput)[2], pInput->size()*4 - 8);
        for (size_t i = secondDataOffset; i < shortData.size(); i++)
        {
            unsigned short currShort = shortData[i];
            charData.push_back(currShort & 0xff);
            charData.push_back(currShort >> 8);
        }
        size_t symIndex = 0;
        size_t loIndex = 0;
        for (size_t i = 0; i < numInstructions; i++)
        {
            size_t currLength = charData[loIndex];
            loVec.push_back(charData[loIndex]);
            loIndex++;
            if (currLength & LO_CONTINUE_BIT)
            {
                currLength -= LO_CONTINUE_BIT;
                currLength += charData[loIndex] << 7;
                loVec.push_back(charData[loIndex]);
                loIndex++;
            }
            size_t currOffset = charData[loIndex];
            loVec.push_back(charData[loIndex]);
            loIndex++;
            if (currOffset & LO_CONTINUE_BIT)
            {
                currOffset -= LO_CONTINUE_BIT;
                currOffset += charData[loIndex] << 7;
                loVec.push_back(charData[loIndex]);
                loIndex++;
            }
            if (currLength != 0)
            {
                symVec.push_back(shortData[symIndex]);
                symIndex++;
            }
            else
            {
                for (size_t j = 0; j < currOffset; j++)
                {
                    symVec.push_back(shortData[symIndex]);
                    symIndex++;
                }
            }
        }
    }
    printf("Decoding bytes\n");
    imageVec = decodeBytesShort(&loVec, &symVec);
    printf("Done decoding\n");
    */
    return imageVec;
}

void deltaEncode(std::vector<unsigned char> *buffer, int length)
{
    unsigned char last = 0;
    for (int i = 0; i < length; i++)
    {
        unsigned char current =(*buffer)[i];
        (*buffer)[i] = (current-last) & 0xf;
        last = current;
    }
}

void deltaDecode(std::vector<unsigned char> *buffer, int length)
{
    unsigned char last = 0;
    for (int i = 0; i < length; i++)
    {
        unsigned char delta =(*buffer)[i];
        (*buffer)[i] = (delta+last) & 0xf;
        last = (*buffer)[i];
    }
}

bool newVerifyCompression(CompressedImage *pImage, std::vector<unsigned short> *pUsVec)
{
    CompressedImage headerValues = readNewHeader(&pImage->headers);
    CompressionMode mode = headerValues.mode;
    size_t secondDataOffset = headerValues.secondDataOffset;
    size_t numInstructions = headerValues.numInstructions;
    bool loEncoded = isModeLoEncoded(mode);
    bool symEncoded = isModeSymEncoded(mode);
    bool symDelta = isModeSymDelta(mode);
    std::vector<unsigned int> loFreqs = unpackFrequencies(pImage->loFreqs[0], pImage->loFreqs[1], pImage->loFreqs[2]);
    std::vector<unsigned int> symFreqs = unpackFrequencies(pImage->symFreqs[0], pImage->symFreqs[1], pImage->symFreqs[2]);
    std::vector<unsigned char> symbols = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::vector<DecodeCol> loDecode(TANS_TABLE_SIZE);
    std::vector<DecodeCol> symDecode(TANS_TABLE_SIZE);

    std::vector<unsigned char> loVec;
    std::vector<unsigned short> symVec;
    std::vector<unsigned char> loNibbles;
    std::vector<unsigned char> symNibbles;

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
    std::vector<unsigned int> allBits(pImage->tANSbits.size()*32);
    size_t currIndex = 0;
    for (unsigned int ui : pImage->tANSbits)
        for (size_t i = 0; i < 32; i++)
        {
            unsigned int currVal = (ui >> i) & 0x1;
            allBits[currIndex] = currVal;
            currIndex++;
        }
    size_t bitIndex = 0;
    int currState = pImage->initialState;
    if (loEncoded && symEncoded)
    {
        decodeCombinedStream(currState, allBits, loDecode, symDecode, &loNibbles, &symNibbles, numInstructions);
        if (symDelta)
            deltaDecode(&symNibbles, symNibbles.size());
        for (size_t i = 0; i < loNibbles.size()/2; i++)
        {
            unsigned char tempLO = 0;
            for (size_t j = 0; j < 2; j++)
                tempLO += loNibbles[i*2 + j] << (4*j);
            loVec.push_back(tempLO);
        }
        for (size_t i = 0; i < symNibbles.size()/4; i++)
        {
            unsigned short tempSym = 0;
            for (size_t j = 0; j < 4; j++)
                tempSym += symNibbles[i*4 + j] << (4*j);
            symVec.push_back(tempSym);
        }
    }
    else if (loEncoded)
    {
        symVec = pImage->symVec;
        for (size_t i = 0; i < numInstructions; i++)
        {
            size_t currLength = 0;
            for (size_t j = 0; j < 2; j++)
                currLength += decodeSingleSymbol(&currState, loDecode, &allBits, &bitIndex) << j*4;
            loVec.push_back(currLength);
            if (currLength & LO_CONTINUE_BIT)
            {
                currLength -= LO_CONTINUE_BIT;
                size_t tempLength = 0;
                for (size_t j = 0; j < 2; j++)
                    tempLength += decodeSingleSymbol(&currState, loDecode, &allBits, &bitIndex) << j*4;
                loVec.push_back(tempLength);
                currLength += tempLength << 7;
            }
            size_t currOffset = 0;
            for (size_t j = 0; j < 2; j++)
                currOffset += decodeSingleSymbol(&currState, loDecode, &allBits, &bitIndex) << j*4;
            loVec.push_back(currOffset);
            if (currOffset & LO_CONTINUE_BIT)
            {
                currOffset -= LO_CONTINUE_BIT;
                size_t tempOffset = 0;
                for (size_t j = 0; j < 2; j++)
                    tempOffset += decodeSingleSymbol(&currState, loDecode, &allBits, &bitIndex) << j*4;
                loVec.push_back(tempOffset);
                currOffset += tempOffset << 7;
            }
        }
    }
    else if (symEncoded)
    {
        loVec = pImage->loVec;
        size_t totalSymbols = 0;
        size_t loIndex = 0;
        size_t bitIndex = 0;
        for (size_t i = 0; i < numInstructions; i++)
        {
            size_t currLength = 0;
            size_t currOffset = 0;
            currLength = loVec[loIndex];
            loIndex++;
            if (currLength & LO_CONTINUE_BIT)
            {
                currLength -= LO_CONTINUE_BIT;
                currLength += loVec[loIndex] << 7;
                loIndex++;
            }
            currOffset = loVec[loIndex];
            loIndex++;
            if (currOffset & LO_CONTINUE_BIT)
            {
                currOffset -= LO_CONTINUE_BIT;
                currOffset += loVec[loIndex] << 7;
                loIndex++;
            }
            if (currLength != 0)
            {
                totalSymbols += 1;
            }
            else
            {
                totalSymbols += currOffset;
            }
        }
        for (size_t i = 0; i < totalSymbols*4; i++)
        {
            symNibbles.push_back(decodeSingleSymbol(&currState, symDecode, &allBits, &bitIndex));
        }
        if (symDelta)
            deltaDecode(&symNibbles, symNibbles.size());
        for (size_t i = 0; i < totalSymbols; i++)
        {
            unsigned short tempSym = 0;
            for (size_t j = 0; j < 4; j++)
                tempSym += symNibbles[i*4 + j] << (j*4);
            symVec.push_back(tempSym);
        }
    }
    if (!loEncoded && !symEncoded)
    {
        loVec = pImage->loVec;
        symVec = pImage->symVec;
    }

    if (symVec.size() != pImage->symVec.size())
    {
        fprintf(stderr, "Sym Length mismatch\n%zu vs %zu\n", symVec.size(), pImage->symVec.size());
    }
    else
    {
        bool equal = true;
        for (size_t i = 0; i < symVec.size(); i++)
            if (symVec[i] != pImage->symVec[i])
                equal = false;
        if (!equal)
            fprintf(stderr, "Sym mismatch");
    }
    if (loVec.size() != pImage->loVec.size())
    {
        fprintf(stderr, "LO length mismatch\n%zu vs %zu\n", loVec.size(), pImage->loVec.size());
    }
    else
    {
        bool equal = true;
        for (size_t i = 0; i < loVec.size(); i++)
            if (loVec[i] != pImage->loVec[i])
                equal = false;
        if (!equal)
            fprintf(stderr, "LO mismatch\n");
    }

    bool result = verifyBytesShort(&loVec, &symVec, pUsVec);
    return result;
}

unsigned char decodeSingleSymbol(int *state, std::vector<DecodeCol> table, std::vector<unsigned int> *bitstream, size_t *bitIndex)
{
    unsigned char symbol = table[*state].symbol;
    size_t currY = table[*state].y;
    size_t currK = table[*state].k;
    int nextState = currY << currK;
    for (size_t i = 0; i < currK; i++)
    {
        nextState += (*bitstream)[*bitIndex] << i;
        (*bitIndex)++;
    }
    *state = nextState - TANS_TABLE_SIZE;
    return symbol;
}

std::vector<DecodeCol> buildDecodeTable(unsigned int pack1, unsigned int pack2, unsigned int pack3)
{
    std::vector<DecodeCol> table(TANS_TABLE_SIZE);
    unsigned int packedInts[3] = {pack1, pack2, pack3};
    std::vector<unsigned int> packedFreqs = {pack1, pack2, pack3};
    std::vector<unsigned int> freqs = unpackFrequencies(pack1, pack2, pack3);
    size_t currCol = 0;
    for (size_t i = 0; i < 16; i++)
    {
        for (size_t j = 0; j < freqs[i]; j++)
        {
            table[currCol].state = TANS_TABLE_SIZE + currCol;
            table[currCol].symbol = i;
            table[currCol].y = freqs[i] + j;
            size_t currK = 0;
            while (((freqs[i] + j) << currK) < TANS_TABLE_SIZE)
                currK++;
            table[currCol].k = currK;
            currCol++;
        }
    }
    return table;
}
