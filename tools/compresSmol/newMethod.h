#ifndef NEW_METHOD
#define NEW_METHOD
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <mutex>
#include <thread>
#include <string>
#include <bitset>
#include "fileDispatcher.h"
#include "tANS.h"
#include "delta.h"

#define TANS_TABLE_SIZE 64

struct Copy {
    size_t index;
    size_t length;
    size_t offset;
    unsigned char firstSymbol;
    std::vector<unsigned char> ucSequence;
    std::string strSequence;
    Copy();
    Copy(size_t index, size_t length, size_t offset, std::string strSequence);
    Copy(size_t index, size_t length, size_t offset, std::vector<unsigned char> ucSequence);
};

struct CompressionInstruction {
    size_t length;
    size_t offset;
    size_t index;
    unsigned char firstSymbol;
    std::vector<unsigned char> symbols;
    std::vector<unsigned char> bytes;
    void buildBytes();
    bool verifyInstruction();
};

struct SortedElement {
    size_t index;
    Copy copy;
    bool isRun = false;
    bool isCopy = false;
    SortedElement();
    SortedElement(size_t index, Copy copy);
};

struct CompressedImage {
    std::string fileName;
    size_t lengthMod;
    bool loEncoded;
    bool symEncoded;
    bool loDelta;
    bool symDelta;
    size_t lzSize;
    size_t loSize;
    size_t symSize;
    unsigned int header;
    unsigned int loFreqs[3];
    unsigned int symFreqs[3];
    size_t compressedSize;
    std::vector<unsigned int> data;
    bool isValid = false;
    std::vector<unsigned int> writeVec;
};

struct InputSettings {
    bool canEncodeLO = true;
    bool canEncodeSyms = true;
    bool canDeltaLO = true;
    bool canDeltaSyms = true;
    InputSettings();
    InputSettings(bool canEncodeLO, bool canEncodeSyms, bool canDeltaLO, bool canDeltaSyms);
};

struct DataVecs {
    std::vector<unsigned char> loVec;
    std::vector<unsigned char> symVec;
};

void analyzeImages(std::vector<CompressedImage> *allImages, std::mutex *imageMutex, FileDispatcher *dispatcher, std::mutex *dispatchMutex, InputSettings settings);

CompressedImage processImage(std::string fileName, InputSettings settings);

class ImagePrinter {
    bool printedHeaders = false;
public:
    void printImage(CompressedImage *image);
};

std::vector<unsigned int> readFileAsUInt(std::string filePath);

size_t getCompressedSize(CompressedImage *pImage);

std::vector<Copy> getCopies(std::vector<unsigned char> input, size_t minLength);

std::vector<unsigned char> getUCvecFromUIvec(std::vector<unsigned int> *pInput);

std::vector<unsigned char> getNormalizedCounts(std::vector<size_t> input);
std::vector<unsigned int> getFreqWriteInts(std::vector<unsigned char> input);
unsigned int getHeader(bool loEncoded, bool symEncoded, bool loDelta, bool symDelta, size_t minLength, size_t loLength, size_t symLength);
int findInitialState(EncodeCol encodeCol, unsigned char firstSymbol);
CompressedImage fillCompressVec(std::vector<unsigned char> loVec, std::vector<unsigned char> symVec, size_t lengthMod, bool loEncoded, bool symEncoded, bool loDelta, bool symDelta);
std::vector<CompressionInstruction> getInstructions(std::vector<Copy> copies, size_t lengthMod);
std::vector<unsigned char> getLosFromInstructions(std::vector<CompressionInstruction> instructions);
std::vector<unsigned char> getSymsFromInstructions(std::vector<CompressionInstruction> instructions);
std::vector<int> unpackFrequencies(unsigned int pInts[3]);
CompressedImage getDataFromUIntVec(std::vector<unsigned int> *pInput);
std::vector<unsigned int> getUIntVecFromData(CompressedImage *pImage);

std::vector<unsigned char> decodeBytes(std::vector<unsigned char> *pLoVec, std::vector<unsigned char> *pSymVec, size_t lengthMod);
std::vector<unsigned char> decodeCompression(std::vector<unsigned int> *pInput);
std::vector<unsigned char> decodeImage(CompressedImage *pInput);
DataVecs decodeDataVectors(CompressedImage *pInput);

bool compareVectors(std::vector<unsigned char> *pVec1, std::vector<unsigned char> *pVec2);

bool verifyCompression(CompressedImage *pInput, std::vector<unsigned char> *pImage);
bool verifyBytes(std::vector<unsigned char> *pLoVec, std::vector<unsigned char> *pSymVec, std::vector<unsigned char> *pImage, size_t lengthMod);
bool verifyUIntVec(std::vector<unsigned int> *pInput, std::vector<unsigned char> *pImage);
#endif
