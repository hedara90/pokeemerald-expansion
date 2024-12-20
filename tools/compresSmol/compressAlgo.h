#ifndef COMPRES_SMOL
#define COMPRES_SMOL
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <mutex>
#include <thread>
#include <string>
#include "fileDispatcher.h"
#include "tANS.h"

#define OVERWORLD_16X16         256
#define OVERWORLD_32X32         1024

#define TANS_TABLE_SIZE         64
#define LO_CONTINUE_BIT         0x80
#define LO_LOW_BITS_MASK        0x7f
#define LO_NUM_LOW_BITS         0x7
#define BYTE_MASK               0xff
#define SHORT_MASK              0xffff
#define NIBBLE_MASK             0xf
#define NUM_SHORT_BITS          0xf
#define LENGTH_MOD_MASK         0xf
#define INITIAL_STATE_MASK      0x3f
#define MODE_MASK               0x1f
#define IMAGE_SIZE_MASK         0x7ff
#define IMAGE_SIZE_OFFSET       5
#define SYM_SIZE_MASK           0x7fff
#define SYM_SIZE_OFFSET         17
#define BITSTREAM_SIZE_MASK     0x1fff
#define BITSTREAM_SIZE_OFFSET   6
#define LO_SIZE_MASK            0x1fff
#define LO_SIZE_OFFSET          19

#define IMAGE_SIZE_MODIFIER     16

enum CompressionMode {
    BASE_ONLY = 0,
    ENCODE_SYMS = 1,
    ENCODE_DELTA_SYMS = 2,
    ENCODE_LO = 3,
    ENCODE_BOTH = 4,
    ENCODE_BOTH_DELTA_SYMS = 5,
    IS_FRAME_CONTAINER = 6,
};

struct ShortCopy {
    size_t index;
    size_t length;
    size_t offset;
    unsigned short firstSymbol;
    std::vector<unsigned short> usSequence;
    ShortCopy();
    ShortCopy(size_t index, size_t length, size_t offset, std::vector<unsigned short> usSequence);
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

struct ShortCompressionInstruction {
    size_t length;
    size_t offset;
    size_t index;
    unsigned short firstSymbol;
    std::vector<unsigned short> symbols;
    std::vector<unsigned char> loBytes;
    std::vector<unsigned short> symShorts;
    void buildBytes();
    bool verifyInstruction();
};

struct SortedShortElement {
    size_t index;
    ShortCopy copy;
    bool isRun = false;
    bool isCopy = false;
    SortedShortElement();
    SortedShortElement(size_t index, ShortCopy copy);
};

struct HeaderData {
    CompressionMode mode;
    int initialState;
    size_t imageSize;
    size_t numInstructions;
    size_t dataOffset;
};

struct CompressedImage {
    std::string fileName;
    CompressionMode mode;
    size_t lzSize;
    size_t loSize;
    size_t symSize;
    size_t bitreamSize = 0;
    size_t rawNumBytes;
    int initialState;
    std::vector<unsigned int> headers;
    unsigned int loFreqs[3];
    unsigned int symFreqs[3];
    size_t compressedSize;
    bool isValid = false;
    std::vector<unsigned int> writeVec;
    std::vector<unsigned int> tANSbits;
    std::vector<unsigned int> otherBits;
    std::vector<unsigned short> symVec;
    std::vector<unsigned char> loVec;
    size_t numInstructions;
    size_t secondDataOffset;
};

struct InputSettings {
    bool canEncodeLO = true;
    bool canEncodeSyms = true;
    bool canDeltaSyms = true;
    bool shouldCompare = false;
    bool useFrames = false;
    InputSettings();
    InputSettings(bool canEncodeLO, bool canEncodeSyms, bool canDeltaSyms);
};

struct DataVecs {
    std::vector<unsigned char> loVec;
    std::vector<unsigned char> symVec;
};

struct DataVecsNew {
    std::vector<unsigned char> loVec;
    std::vector<unsigned short> symVec;
};

void analyzeImages(std::vector<CompressedImage> *allImages, std::mutex *imageMutex, FileDispatcher *dispatcher, std::mutex *dispatchMutex, InputSettings settings);

CompressedImage processImage(std::string fileName, InputSettings settings);
CompressedImage processImageFrames(std::string fileName, InputSettings settings);
CompressedImage processImageData(std::vector<unsigned char> input, InputSettings settings, std::string fileName);

class ImagePrinter {
    bool printedHeaders = false;
public:
    void printImage(CompressedImage *image);
};

std::vector<unsigned int> readFileAsUInt(std::string filePath);

size_t getCompressedSize(CompressedImage *pImage);

std::vector<ShortCopy> getShortCopies(std::vector<unsigned char> input, size_t minLength);
bool verifyShortCopies(std::vector<ShortCopy> *pCopies, std::vector<unsigned short> *pImage);

std::vector<unsigned char> getNormalizedCounts(std::vector<size_t> input);
std::vector<unsigned int> getFreqWriteInts(std::vector<unsigned char> input);
std::vector<unsigned int> getNewHeaders(CompressionMode mode, size_t imageSize, size_t symLength, int initialState, size_t bitstreamSize, size_t loLength, size_t numInstructions);
int findInitialState(EncodeCol encodeCol, unsigned char firstSymbol);
CompressedImage fillCompressVec(std::vector<unsigned char> loVec, std::vector<unsigned char> symVec, size_t lengthMod, bool loEncoded, bool symEncoded, bool symDelta, size_t byteSize, CompressionMode mode);
CompressedImage fillCompressVecNew(std::vector<unsigned char> loVec, std::vector<unsigned short> symVec, CompressionMode mode, size_t imageBytes, std::vector<ShortCompressionInstruction> instructions);
std::vector<ShortCompressionInstruction> getShortInstructions(std::vector<ShortCopy> copies, size_t lengthMod);
std::vector<unsigned char> getLosFromInstructions(std::vector<CompressionInstruction> instructions);
std::vector<unsigned char> getSymsFromInstructions(std::vector<CompressionInstruction> instructions);
std::vector<unsigned char> getLosFromInstructions(std::vector<ShortCompressionInstruction> instructions);
std::vector<unsigned short> getSymsFromInstructions(std::vector<ShortCompressionInstruction> instructions);
std::vector<unsigned int> unpackFrequencies(unsigned int pack1, unsigned int pack2, unsigned int pack3);
CompressedImage getDataFromUIntVec(std::vector<unsigned int> *pInput);
CompressedImage readNewHeader(std::vector<unsigned int> *pInput);
std::vector<unsigned int> getUIntVecFromData(CompressedImage *pImage);

std::vector<unsigned short> decodeBytesShort(std::vector<unsigned char> *pLoVec, std::vector<unsigned short> *pSymVec);
std::vector<unsigned short> decodeImageShort(CompressedImage *pInput);
DataVecsNew decodeDataVectorsNew(CompressedImage *pInput);

size_t decodeNibbles(std::vector<DecodeCol> decodeTable, std::vector<unsigned int> *bits, int *currState, std::vector<unsigned char> *nibbleVec, size_t currBitIndex, size_t numNibbles);

bool compareVectorsShort(std::vector<unsigned short> *pVec1, std::vector<unsigned short> *pVec2);

bool verifyCompressionShort(CompressedImage *pInput, std::vector<unsigned short> *pImage);
bool verifyUIntVecShort(std::vector<unsigned int> *pInput, std::vector<unsigned short> *pImage);

std::vector<unsigned short> readRawDataVecs(std::vector<unsigned int> *pInput);

bool isModeLoEncoded(CompressionMode mode);
bool isModeSymEncoded(CompressionMode mode);
bool isModeSymDelta(CompressionMode mode);

void deltaEncode(std::vector<unsigned char> *buffer, int length);
void deltaDecode(std::vector<unsigned char> *buffer, int length);

void decodeCombinedStream(int state, std::vector<unsigned int> bitstream, std::vector<DecodeCol> loTable, std::vector<DecodeCol> symTable, std::vector<unsigned char> *loNibbles, std::vector<unsigned char> *symNibbles, size_t numInstructions);
bool newVerifyCompression(CompressedImage *pImage, std::vector<unsigned short> *pUsVec);
unsigned char decodeSingleSymbol(int *state, std::vector<DecodeCol> table, std::vector<unsigned int> *bitstream, size_t *bitIndex);
std::vector<unsigned short> readRawDataVecsNew(std::vector<unsigned int> input);

HeaderData getHeaderStruct(std::vector<unsigned int> *pInput);

std::vector<DecodeCol> buildDecodeTable(unsigned int pack1, unsigned int pack2, unsigned int pack3);
#endif
