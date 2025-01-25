#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"
#include "menu.h"

#define TABLE_READ_K(tableVal)((tableVal & 7))
#define TABLE_READ_SYMBOL(tableVal)((tableVal & 0xFF) >> 3)
#define TABLE_READ_Y(tableVal)((tableVal >> 8) & 0xFF)
#define TABLE_READ_MASK(tableVal)((tableVal >> 16))

/*
Layout is the following:
u32 kVal:3;
u32 symbol:5; // Set in BuildDecompressionTable
u32 yVal:8;
u32 mask:8;
*/

#define SET_TABLE_ENTRY(k, y, mask)(((k) & 7) | ((y) << 8) | ((mask) << 16))

static IWRAM_DATA u32 sWorkingYkTable_Lo[TANS_TABLE_SIZE] = {0};
static IWRAM_DATA u32 sWorkingYkTable_Sym[TANS_TABLE_SIZE] = {0};

// Helper struct to build the tANS decode tables without having to do calculations at run-time
// Mask Table is 0, 1, 3, 7, 15, 31, 63.
static const u32 sYkTemplate[2*TANS_TABLE_SIZE] = {
    [0] = 0,
    [1] = SET_TABLE_ENTRY(6, (1 << 6) - 64, 63),
    [2] = SET_TABLE_ENTRY(5, (2 << 5) - 64, 31),
    [3] = SET_TABLE_ENTRY(5, (3 << 5) - 64, 31),
    [4] = SET_TABLE_ENTRY(4, (4 << 4) - 64, 15),
    [5] = SET_TABLE_ENTRY(4, (5 << 4) - 64, 15),
    [6] = SET_TABLE_ENTRY(4, (6 << 4) - 64, 15),
    [7] = SET_TABLE_ENTRY(4, (7 << 4) - 64, 15),
    [8] = SET_TABLE_ENTRY(3, (8 << 3) - 64, 7),
    [9] = SET_TABLE_ENTRY(3, (9 << 3) - 64, 7),
    [10] = SET_TABLE_ENTRY(3, (10 << 3) - 64, 7),
    [11] = SET_TABLE_ENTRY(3, (11 << 3) - 64, 7),
    [12] = SET_TABLE_ENTRY(3, (12 << 3) - 64, 7),
    [13] = SET_TABLE_ENTRY(3, (13 << 3) - 64, 7),
    [14] = SET_TABLE_ENTRY(3, (14 << 3) - 64, 7),
    [15] = SET_TABLE_ENTRY(3, (15 << 3) - 64, 7),
    [16] = SET_TABLE_ENTRY(2, (16 << 2) - 64, 3),
    [17] = SET_TABLE_ENTRY(2, (17 << 2) - 64, 3),
    [18] = SET_TABLE_ENTRY(2, (18 << 2) - 64, 3),
    [19] = SET_TABLE_ENTRY(2, (19 << 2) - 64, 3),
    [20] = SET_TABLE_ENTRY(2, (20 << 2) - 64, 3),
    [21] = SET_TABLE_ENTRY(2, (21 << 2) - 64, 3),
    [22] = SET_TABLE_ENTRY(2, (22 << 2) - 64, 3),
    [23] = SET_TABLE_ENTRY(2, (23 << 2) - 64, 3),
    [24] = SET_TABLE_ENTRY(2, (24 << 2) - 64, 3),
    [25] = SET_TABLE_ENTRY(2, (25 << 2) - 64, 3),
    [26] = SET_TABLE_ENTRY(2, (26 << 2) - 64, 3),
    [27] = SET_TABLE_ENTRY(2, (27 << 2) - 64, 3),
    [28] = SET_TABLE_ENTRY(2, (28 << 2) - 64, 3),
    [29] = SET_TABLE_ENTRY(2, (29 << 2) - 64, 3),
    [30] = SET_TABLE_ENTRY(2, (30 << 2) - 64, 3),
    [31] = SET_TABLE_ENTRY(2, (31 << 2) - 64, 3),
    [32] = SET_TABLE_ENTRY(1, (32 << 1) - 64, 1),
    [33] = SET_TABLE_ENTRY(1, (33 << 1) - 64, 1),
    [34] = SET_TABLE_ENTRY(1, (34 << 1) - 64, 1),
    [35] = SET_TABLE_ENTRY(1, (35 << 1) - 64, 1),
    [36] = SET_TABLE_ENTRY(1, (36 << 1) - 64, 1),
    [37] = SET_TABLE_ENTRY(1, (37 << 1) - 64, 1),
    [38] = SET_TABLE_ENTRY(1, (38 << 1) - 64, 1),
    [39] = SET_TABLE_ENTRY(1, (39 << 1) - 64, 1),
    [40] = SET_TABLE_ENTRY(1, (40 << 1) - 64, 1),
    [41] = SET_TABLE_ENTRY(1, (41 << 1) - 64, 1),
    [42] = SET_TABLE_ENTRY(1, (42 << 1) - 64, 1),
    [43] = SET_TABLE_ENTRY(1, (43 << 1) - 64, 1),
    [44] = SET_TABLE_ENTRY(1, (44 << 1) - 64, 1),
    [45] = SET_TABLE_ENTRY(1, (45 << 1) - 64, 1),
    [46] = SET_TABLE_ENTRY(1, (46 << 1) - 64, 1),
    [47] = SET_TABLE_ENTRY(1, (47 << 1) - 64, 1),
    [48] = SET_TABLE_ENTRY(1, (48 << 1) - 64, 1),
    [49] = SET_TABLE_ENTRY(1, (49 << 1) - 64, 1),
    [50] = SET_TABLE_ENTRY(1, (50 << 1) - 64, 1),
    [51] = SET_TABLE_ENTRY(1, (51 << 1) - 64, 1),
    [52] = SET_TABLE_ENTRY(1, (52 << 1) - 64, 1),
    [53] = SET_TABLE_ENTRY(1, (53 << 1) - 64, 1),
    [54] = SET_TABLE_ENTRY(1, (54 << 1) - 64, 1),
    [55] = SET_TABLE_ENTRY(1, (55 << 1) - 64, 1),
    [56] = SET_TABLE_ENTRY(1, (56 << 1) - 64, 1),
    [57] = SET_TABLE_ENTRY(1, (57 << 1) - 64, 1),
    [58] = SET_TABLE_ENTRY(1, (58 << 1) - 64, 1),
    [59] = SET_TABLE_ENTRY(1, (59 << 1) - 64, 1),
    [60] = SET_TABLE_ENTRY(1, (60 << 1) - 64, 1),
    [61] = SET_TABLE_ENTRY(1, (61 << 1) - 64, 1),
    [62] = SET_TABLE_ENTRY(1, (62 << 1) - 64, 1),
    [63] = SET_TABLE_ENTRY(1, (63 << 1) - 64, 1),
    [64] = SET_TABLE_ENTRY(0, 64 - 64, 0),
    [65] = SET_TABLE_ENTRY(0, 65 - 64, 0),
    [66] = SET_TABLE_ENTRY(0, 66 - 64, 0),
    [67] = SET_TABLE_ENTRY(0, 67 - 64, 0),
    [68] = SET_TABLE_ENTRY(0, 68 - 64, 0),
    [69] = SET_TABLE_ENTRY(0, 69 - 64, 0),
    [70] = SET_TABLE_ENTRY(0, 70 - 64, 0),
    [71] = SET_TABLE_ENTRY(0, 71 - 64, 0),
    [72] = SET_TABLE_ENTRY(0, 72 - 64, 0),
    [73] = SET_TABLE_ENTRY(0, 73 - 64, 0),
    [74] = SET_TABLE_ENTRY(0, 74 - 64, 0),
    [75] = SET_TABLE_ENTRY(0, 75 - 64, 0),
    [76] = SET_TABLE_ENTRY(0, 76 - 64, 0),
    [77] = SET_TABLE_ENTRY(0, 77 - 64, 0),
    [78] = SET_TABLE_ENTRY(0, 78 - 64, 0),
    [79] = SET_TABLE_ENTRY(0, 79 - 64, 0),
    [80] = SET_TABLE_ENTRY(0, 80 - 64, 0),
    [81] = SET_TABLE_ENTRY(0, 81 - 64, 0),
    [82] = SET_TABLE_ENTRY(0, 82 - 64, 0),
    [83] = SET_TABLE_ENTRY(0, 83 - 64, 0),
    [84] = SET_TABLE_ENTRY(0, 84 - 64, 0),
    [85] = SET_TABLE_ENTRY(0, 85 - 64, 0),
    [86] = SET_TABLE_ENTRY(0, 86 - 64, 0),
    [87] = SET_TABLE_ENTRY(0, 87 - 64, 0),
    [88] = SET_TABLE_ENTRY(0, 88 - 64, 0),
    [89] = SET_TABLE_ENTRY(0, 89 - 64, 0),
    [90] = SET_TABLE_ENTRY(0, 90 - 64, 0),
    [91] = SET_TABLE_ENTRY(0, 91 - 64, 0),
    [92] = SET_TABLE_ENTRY(0, 92 - 64, 0),
    [93] = SET_TABLE_ENTRY(0, 93 - 64, 0),
    [94] = SET_TABLE_ENTRY(0, 94 - 64, 0),
    [95] = SET_TABLE_ENTRY(0, 95 - 64, 0),
    [96] = SET_TABLE_ENTRY(0, 96 - 64, 0),
    [97] = SET_TABLE_ENTRY(0, 97 - 64, 0),
    [98] = SET_TABLE_ENTRY(0, 98 - 64, 0),
    [99] = SET_TABLE_ENTRY(0, 99 - 64, 0),
    [100] = SET_TABLE_ENTRY(0, 100 - 64, 0),
    [101] = SET_TABLE_ENTRY(0, 101 - 64, 0),
    [102] = SET_TABLE_ENTRY(0, 102 - 64, 0),
    [103] = SET_TABLE_ENTRY(0, 103 - 64, 0),
    [104] = SET_TABLE_ENTRY(0, 104 - 64, 0),
    [105] = SET_TABLE_ENTRY(0, 105 - 64, 0),
    [106] = SET_TABLE_ENTRY(0, 106 - 64, 0),
    [107] = SET_TABLE_ENTRY(0, 107 - 64, 0),
    [108] = SET_TABLE_ENTRY(0, 108 - 64, 0),
    [109] = SET_TABLE_ENTRY(0, 109 - 64, 0),
    [110] = SET_TABLE_ENTRY(0, 110 - 64, 0),
    [111] = SET_TABLE_ENTRY(0, 111 - 64, 0),
    [112] = SET_TABLE_ENTRY(0, 112 - 64, 0),
    [113] = SET_TABLE_ENTRY(0, 113 - 64, 0),
    [114] = SET_TABLE_ENTRY(0, 114 - 64, 0),
    [115] = SET_TABLE_ENTRY(0, 115 - 64, 0),
    [116] = SET_TABLE_ENTRY(0, 116 - 64, 0),
    [117] = SET_TABLE_ENTRY(0, 117 - 64, 0),
    [118] = SET_TABLE_ENTRY(0, 118 - 64, 0),
    [119] = SET_TABLE_ENTRY(0, 119 - 64, 0),
    [120] = SET_TABLE_ENTRY(0, 120 - 64, 0),
    [121] = SET_TABLE_ENTRY(0, 121 - 64, 0),
    [122] = SET_TABLE_ENTRY(0, 122 - 64, 0),
    [123] = SET_TABLE_ENTRY(0, 123 - 64, 0),
    [124] = SET_TABLE_ENTRY(0, 124 - 64, 0),
    [125] = SET_TABLE_ENTRY(0, 125 - 64, 0),
    [126] = SET_TABLE_ENTRY(0, 126 - 64, 0),
    [127] = SET_TABLE_ENTRY(0, 127 - 64, 0),
};

void LZDecompressWram(const u32 *src, void *dest)
{
    DecompressDataWram(src, dest);
}

void LZDecompressVram(const u32 *src, void *dest)
{
    DecompressDataVram(src, dest);
}

// Checks if `ptr` is likely LZ77 data
// Checks word-alignment, min/max size, and header byte
// Returns uncompressed size if true, 0 otherwise
u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize)
{
    const u8 *data = ptr;
    u32 size;
    // Compressed data must be word aligned
    if (((u32)ptr) & 3)
        return 0;
    // Check LZ77 header byte
    // See https://problemkaputt.de/gbatek.htm#biosdecompressionfunctions
    if (data[0] != 0x10)
        return 0;

    // Read 24-bit uncompressed size
    size = data[1] | (data[2] << 8) | (data[3] << 16);
    if (size >= minSize && size <= maxSize)
        return size;
    return 0;
}

static inline u32 DoLoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    return LoadSpriteSheet(&dest);
}

u32 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src)
{
    void *buffer = malloc_and_decompress(src->data, NULL);
    u32 ret = DoLoadCompressedSpriteSheet(src, buffer);
    Free(buffer);

    return ret;
}

u32 LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZDecompressWram(src->data, buffer);
    return DoLoadCompressedSpriteSheet(src, buffer);
}

// This can be used for either compressed or uncompressed sprite sheets
u32 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset)
{
    struct SpriteTemplate myTemplate;
    struct SpriteFrameImage myImage;
    u32 size;

    // Check for LZ77 header and read uncompressed size, or fallback if not compressed (zero size)
    if ((size = IsLZ77Data(template->images->data, TILE_SIZE_4BPP, MAX_DECOMPRESSION_BUFFER_SIZE)) == 0)
        return LoadSpriteSheetByTemplate(template, 0, offset);


    void *buffer = malloc_and_decompress(template->images->data, NULL);
    myImage.data = buffer;
    myImage.size = size + offset;
    myTemplate.images = &myImage;
    myTemplate.tileTag = template->tileTag;

    u32 ret = LoadSpriteSheetByTemplate(&myTemplate, 0, offset);
    Free(buffer);
    return ret;
}

u32 LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    return LoadCompressedSpritePaletteWithTag(src->data, src->tag);
}

u32 LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag)
{
    u32 index;
    struct SpritePalette dest;
    void *buffer = malloc_and_decompress(pal, NULL);

    dest.data = buffer;
    dest.tag = tag;
    index = LoadSpritePalette(&dest);
    Free(buffer);
    return index;
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    DecompressDataWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZDecompressWram(src->data, buffer);
}

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality)
{
    LoadSpecialPokePic(dest, species, personality, isFrontPic);
}

void DecompressDataVram(const u32 *src, void *dest)
{
    struct SmolHeader header;
    CpuCopy32(src, &header, 8);
    switch (header.mode)
    {
        case MODE_LZ77:
            LZ77UnCompVram(src, dest);
            break;
        default:
            SmolDecompressData(&header, &src[2], dest);
    }
}

void DecompressDataWram(const u32 *src, void *dest)
{
    struct SmolHeader header;
    CpuCopy32(src, &header, 8);
    switch (header.mode)
    {
        case MODE_LZ77:
            LZ77UnCompWram(src, dest);
            break;
        default:
            SmolDecompressData(&header, &src[2], dest);
    }
}

//  For decompressing a single part of a multi-part spritesheet
/*
void DecompressSubFrame(const u32 *src, void *dest, u32 frameId)
{
    struct SpriteSheetHeader header;
    CpuCopy32(src, &header, 4);
    const u32 *offsets = &src[1];
}
*/

extern void FastUnsafeCopy32(void *, const void *, u32 size);

static inline void CopyFuncToIwram(void *funcBuffer, const void *funcStartAddress, const void *funcEndAdress)
{
    FastUnsafeCopy32(funcBuffer, funcStartAddress, funcEndAdress - funcStartAddress);
}

#define REP0(X)
#define REP1(X) X
#define REP2(X) REP1(X) X
#define REP3(X) REP2(X) X
#define REP4(X) REP3(X) X
#define REP5(X) REP4(X) X
#define REP6(X) REP5(X) X
#define REP7(X) REP6(X) X
#define REP8(X) REP7(X) X
#define REP9(X) REP8(X) X
#define REP10(X) REP9(X) X

#define REP(TENS,ONES,X) \
  REP##TENS(REP10(X)) \
  REP##ONES(X)

//  Unpack packed tANS encoded data symbol frequences into their individual parts
static inline void UnpackFrequenciesLoop(const u32 *packedFreqs, u32 *freqs, u32 i)
{
    // Loop unpack
    freqs[i*5 + 0] = (packedFreqs[i] >> (6*0)) & PACKED_FREQ_MASK;
    freqs[i*5 + 1] = (packedFreqs[i] >> (6*1)) & PACKED_FREQ_MASK;
    freqs[i*5 + 2] = (packedFreqs[i] >> (6*2)) & PACKED_FREQ_MASK;
    freqs[i*5 + 3] = (packedFreqs[i] >> (6*3)) & PACKED_FREQ_MASK;
    freqs[i*5 + 4] = (packedFreqs[i] >> (6*4)) & PACKED_FREQ_MASK;

    freqs[15] += (packedFreqs[i] & PARTIAL_FREQ_MASK) >> (30 - 2*i);
}

static inline void UnpackFrequencies(const u32 *packedFreqs, u32 *freqs)
{
    freqs[15] = 0;

    UnpackFrequenciesLoop(packedFreqs, freqs, 0);
    UnpackFrequenciesLoop(packedFreqs, freqs, 1);
    UnpackFrequenciesLoop(packedFreqs, freqs, 2);
}

static inline void CopyTable(u32 *dst, const u32 *src, u32 size, u32 orrVal)
{
    *dst++ = (*src++) | orrVal;
    *dst++ = (*src++) | orrVal;
    for (u32 i = 0; i < size - 2; i++) {
        *dst++ = (*src++) | orrVal;
    }
}

//  Build the tANS decompression table from the specified frequencies and the precomputed helper struct
ARM_FUNC __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void BuildDecompressionTable(const u32 *packedFreqs, u32 *table)
{
    u32 freqs[16];

    UnpackFrequencies(packedFreqs, freqs);

    for (u8 i = 0; i < 16; i++)
    {
        const u32 *srcTemplate;
        switch (freqs[i]) {
        case 0:
            break;
        default: {
            srcTemplate = &sYkTemplate[freqs[i]];
            CopyTable(table, srcTemplate, freqs[i], i << 3 );
            table += freqs[i];
            srcTemplate += freqs[i];
            break;
        }
        case 1:
            srcTemplate = &sYkTemplate[1];
            REP(0, 1, *table++ = (*srcTemplate++) | (i << 3);)
            break;
        case 2:
            srcTemplate = &sYkTemplate[2];
            REP(0, 2, *table++ = (*srcTemplate++) | (i << 3);)
            break;
        }
    }
}

ARM_FUNC __attribute__((no_reorder)) static void SwitchToArmCallBuildDecompressionTable(const u32 *packedFreqs, u32 *table, void (*func)(const u32 *packedFreqs, u32 *table))
{
    func(packedFreqs, table);
}

static IWRAM_DATA u32 sCurrState = 0;
static IWRAM_DATA const u32 *sBitStream;

static inline void Copy16(void *_src, void *_dst, u32 size)
{
    u16 *src = _src;
    u16 *dst = _dst;
    for (u32 i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

static inline void Fill16(u16 value, void *_dst, u32 size)
{
    u16 *dst = _dst;
    for (u32 i = 0; i < size; i++) {
        dst[i] = value;
    }
}

#define LOT_LOOP_MAIN(nibble)   \
{ \
    u32 ykVals = ykTableLo[sCurrState];   \
    symbolLo |= TABLE_READ_SYMBOL(ykVals) << (nibble*4);   \
    currK = TABLE_READ_K(ykVals);   \
    sCurrState = TABLE_READ_Y(ykVals);  \
    sCurrState += (currBits >> bitIndex) & TABLE_READ_MASK(ykVals); \
    bitIndex += currK;  \
}

// The same for all the loops
#define LOOP_BITADVANCE() \
{   \
    currBits = *data++; \
    bitIndex -= 32; \
    if (bitIndex != 0)  \
    {   \
        sCurrState += (currBits & ((1u << bitIndex) - 1)) << (currK - bitIndex); \
    } \
}

#define DecodeSingleLO(which) \
{ \
    symbolLo = 0; \
    LOT_LOOP_MAIN(0); \
    if (bitIndex >= 32) \
    { \
        LOOP_BITADVANCE(); \
 \
        LOT_LOOP_MAIN(1); \
        goto END##which; \
    } \
    LOT_LOOP_MAIN(1); \
    if (bitIndex >= 32) \
    { \
        LOOP_BITADVANCE(); \
    } \
    END##which: \
} \

#define ANS_LOOP_MAIN(nibble)   \
{ \
    u32 ykVals = ykTableSym[sCurrState]; \
    currK = TABLE_READ_K(ykVals); \
    currSymbol = (currSymbol + TABLE_READ_SYMBOL(ykVals)) & 0xf; \
    symbolSymDelta |= currSymbol << (nibble*4); \
    sCurrState = TABLE_READ_Y(ykVals); \
    sCurrState += ((currBits >> bitIndex) & TABLE_READ_MASK(ykVals)); \
    bitIndex += currK; \
}

#define DecodeSingleSymDelta(which)   \
{   \
    symbolSymDelta = 0;   \
    ANS_LOOP_MAIN(0);  \
    if (bitIndex >= 32)  \
    {  \
        LOOP_BITADVANCE();  \
  \
        ANS_LOOP_MAIN(1);  \
        ANS_LOOP_MAIN(2);  \
        ANS_LOOP_MAIN(3);  \
        goto END_SYMDELTA##which;  \
    }  \
  \
    ANS_LOOP_MAIN(1);  \
    if (bitIndex >= 32)  \
    {  \
        LOOP_BITADVANCE();  \
  \
        ANS_LOOP_MAIN(2);  \
        ANS_LOOP_MAIN(3);  \
        goto END_SYMDELTA##which;  \
    }  \
  \
    ANS_LOOP_MAIN(2);  \
    if (bitIndex >= 32)  \
    {  \
        LOOP_BITADVANCE();  \
  \
        ANS_LOOP_MAIN(3);  \
        goto END_SYMDELTA##which;  \
    }  \
  \
    ANS_LOOP_MAIN(3);  \
    if (bitIndex >= 32)  \
    {  \
        LOOP_BITADVANCE();  \
    }  \
  \
END_SYMDELTA##which: \
}


ARM_FUNC __attribute__((noinline, no_reorder)) __attribute__((optimize("-Ofast"))) static void Mode5Loop(u16 *desiredDest, u32 *ykTableLo, u32 *ykTableSym, u16 *shortDest)
{
    const u32 *data = sBitStream;
    u32 bitIndex = 0;
    u32 currBits = *data++;
    u32 currSymbol = 0;

    do
    {
        u32 symbolLo, symbolSymDelta;
        u32 currK;
        u32 currLength, currOffset;

        DecodeSingleLO(1);
        currLength = symbolLo;
        if (currLength & CONTINUE_BIT)
        {
            currLength ^= CONTINUE_BIT;
            DecodeSingleLO(2);
            currLength += symbolLo << 7;
        }

        DecodeSingleLO(3);
        currOffset = symbolLo;
        if (currOffset & CONTINUE_BIT)
        {
            currOffset ^= CONTINUE_BIT;
            DecodeSingleLO(4)
            currOffset += symbolLo << 7;
        }


        DecodeSingleSymDelta(1);
        u32 currDeltaSym = symbolSymDelta;
        if (currLength == 0)
        {
            *shortDest++ = currDeltaSym;
            u16 *to = shortDest + currOffset - 1;

            while (shortDest != to)
            {
                DecodeSingleSymDelta(2);
                *shortDest++ = symbolSymDelta;
            }
        }
        else
        {
            if (currOffset == 1)
            {
                Fill16(currDeltaSym, shortDest, currLength + 1);
                shortDest += currLength + 1;
            }
            else
            {
                *shortDest++ = currDeltaSym;
                u16 *from = shortDest - currOffset;
                u16 *to = shortDest + currLength;
                do {
                    *shortDest++ = *from++;
                } while (shortDest != to);
            }
        }
    } while (shortDest != desiredDest);
}

ARM_FUNC __attribute__((no_reorder)) static void SwitchToArmCallMode5Loop(u16 *desiredDest, u32 *ykTableLo, u32 *ykTableSym, u16 *shortDest, void (*func)(u16 *desiredDest, u32 *ykTableLo, u32 *ykTableSym, u16 *shortDest))
{
    func(desiredDest, ykTableLo, ykTableSym, shortDest);
}

__attribute__((noinline)) static void DecodeMode5(u16 *desiredDest, const u32 *packedLOFreqs, const u32 *packedSymFreqs, void *dest)
{
    u32 funcBuffer[700];

    CopyFuncToIwram(funcBuffer, BuildDecompressionTable, SwitchToArmCallBuildDecompressionTable);

    SwitchToArmCallBuildDecompressionTable(packedLOFreqs, sWorkingYkTable_Lo, (void *)funcBuffer);
    SwitchToArmCallBuildDecompressionTable(packedSymFreqs, sWorkingYkTable_Sym, (void *) funcBuffer);

    //Mode5Loop(numInstructions, sWorkingYkTable_Lo, sWorkingYkTable_Sym, dest);
    CopyFuncToIwram(funcBuffer, Mode5Loop, SwitchToArmCallMode5Loop);
    SwitchToArmCallMode5Loop(desiredDest, sWorkingYkTable_Lo, sWorkingYkTable_Sym, dest, (void *) funcBuffer);
}

void SmolDecompressData(const struct SmolHeader *header, const u32 *data, void *dest)
{
    //  This is apparently needed due to Game Freak sending bullshit down the decompression pipeline
    if (header->numInstructions == 0)
        return;
    //u8 *leftoverPos = (u8 *)data;

    sCurrState = header->initialState;
    // Allocate also for ykTable and symbolTable
    //u32 headerLoSize = header->loSize;
    //u32 headerSymSize = header->symSize;
    //u32 alignedLoSize = header->loSize % 2 == 1 ? headerLoSize + 1 : headerLoSize;
    // LoSize HAS TO go last, because it is NOT aligned
    //bool32 loEncoded = isModeLoEncoded(header->mode);
    //bool32 symEncoded = isModeSymEncoded(header->mode);
    //bool32 symDelta = isModeSymDelta(header->mode);
    //u32 allocSize = 0;
    //if (loEncoded)
    //    allocSize += TANS_TABLE_SIZE*(sizeof(struct DecodeYK) + 4);
    //if (symEncoded)
    //    allocSize += TANS_TABLE_SIZE*(sizeof(struct DecodeYK) + 4);
    //  With combined stream we don't allocate loVec and symVec, they're read from ROM
    //sMemoryAllocated = Alloc(allocSize);
    //u16 *symVec = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK) + (TANS_TABLE_SIZE * 4));
    //u8 *loVec = sMemoryAllocated + (TANS_TABLE_SIZE*sizeof(struct DecodeYK) + (TANS_TABLE_SIZE * 4)) + headerSymSize*2;

    const u32 *pLoFreqs;
    const u32 *pSymFreqs;

    switch (header->mode)
    {
        case ENCODE_BOTH_DELTA_SYMS:
            pLoFreqs = &data[0];
            pSymFreqs = &data[3];
            sBitStream = &data[6];
            DecodeMode5(dest + header->imageSize, pLoFreqs, pSymFreqs, dest);
            break;
    }
}

bool32 isModeLoEncoded(enum CompressionMode mode)
{
    if (mode == ENCODE_LO
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

bool32 isModeSymEncoded(enum CompressionMode mode)
{
    if (mode == ENCODE_SYMS
     || mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

bool32 isModeSymDelta(enum CompressionMode mode)
{
    if (mode == ENCODE_DELTA_SYMS
     || mode == ENCODE_BOTH_DELTA_SYMS)
        return TRUE;
    return FALSE;
}

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);

    if (isFrontPic)
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].frontPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZDecompressWram(gSpeciesInfo[species].frontPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].frontPic != NULL)
            LZDecompressWram(gSpeciesInfo[species].frontPic, dest);
        else
            LZDecompressWram(gSpeciesInfo[SPECIES_NONE].frontPic, dest);
    }
    else
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].backPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZDecompressWram(gSpeciesInfo[species].backPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].backPic != NULL)
            LZDecompressWram(gSpeciesInfo[species].backPic, dest);
        else
            LZDecompressWram(gSpeciesInfo[SPECIES_NONE].backPic, dest);
    }

    if (species == SPECIES_SPINDA && isFrontPic)
    {
        DrawSpindaSpots(personality, dest, FALSE);
        DrawSpindaSpots(personality, dest, TRUE);
    }
}

void Unused_LZDecompressWramIndirect(const void **src, void *dest)
{
    LZDecompressWram(*src, dest);
}

static void UNUSED StitchObjectsOn8x8Canvas(s32 object_size, s32 object_count, u8 *src_tiles, u8 *dest_tiles)
{
    /*
      This function appears to emulate behaviour found in the GB(C) versions regarding how the Pokemon images
      are stitched together to be displayed on the battle screen.
      Given "compacted" tiles, an object count and a bounding box/object size, place the tiles in such a way
      that the result will have each object centered in a 8x8 tile canvas.
    */
    s32 i, j, k, l;
    u8 *src = src_tiles, *dest = dest_tiles;
    u8 bottom_off;

    if (object_size & 1)
    {
        // Object size is odd
        bottom_off = (object_size >> 1) + 4;
        for (l = 0; l < object_count; l++)
        {
            // Clear all unused rows of tiles plus the half-tile required due to centering
            for (j = 0; j < 8-object_size; j++)
            {
                for (k = 0; k < 8; k++)
                {
                    for (i = 0; i < 16; i++)
                    {
                        if (j % 2 == 0)
                        {
                            // Clear top half of top tile and bottom half of bottom tile when on even j
                            ((dest+i) + (k << 5))[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                        }
                        else
                        {
                            // Clear bottom half of top tile and top half of tile following bottom tile when on odd j
                            ((dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 256)[((j >> 1) << 8)] = 0;
                        }
                    }
                }
            }

            // Clear the columns to the left and right that wont be used completely
            // Unlike the previous loops, this will clear the later used space as well
            for (j = 0; j < 2; j++)
            {
                for (i = 0; i < 8; i++)
                {
                    for (k = 0; k < 32; k++)
                    {
                        // Left side
                        ((dest+k) + (i << 8))[(j << 5)] = 0;
                        // Right side
                        ((dest+k) + (i << 8))[(j << 5)+192] = 0;
                    }
                }
            }

            // Skip the top row and first tile on the second row for objects of size 5
            if (object_size == 5) dest += 0x120;

            // Copy tile data
            for (j = 0; j < object_size; j++)
            {
                for (k = 0; k < object_size; k++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        // Offset the tile by +4px in both x and y directions
                        (dest + (i << 2))[18] = (src + (i << 2))[0];
                        (dest + (i << 2))[19] = (src + (i << 2))[1];
                        (dest + (i << 2))[48] = (src + (i << 2))[2];
                        (dest + (i << 2))[49] = (src + (i << 2))[3];

                        (dest + (i << 2))[258] = (src + (i << 2))[16];
                        (dest + (i << 2))[259] = (src + (i << 2))[17];
                        (dest + (i << 2))[288] = (src + (i << 2))[18];
                        (dest + (i << 2))[289] = (src + (i << 2))[19];
                    }
                    src += 32;
                    dest += 32;
                }

                // At the end of a row, skip enough tiles to get to the beginning of the next row
                if (object_size == 7) dest += 0x20;
                else if (object_size == 5) dest += 0x60;
            }

            // Skip remaining unused space to go to the beginning of the next object
            if (object_size == 7) dest += 0x100;
            else if (object_size == 5) dest += 0x1e0;
        }
    }
    else
    {
        // Object size is even
        for (i = 0; i < object_count; i++)
        {
            // For objects of size 6, the first and last row and column will be cleared
            // While the remaining space will be filled with actual data
            if (object_size == 6)
            {
                for (k = 0; k < 256; k++)
                {
                    *dest = 0;
                    dest++;
                }
            }

            for (j = 0; j < object_size; j++)
            {
                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++)
                    {
                        *dest = 0;
                        dest++;
                    }
                }

                // Copy tile data
                for (k = 0; k < 32 * object_size; k++)
                {
                    *dest = *src;
                    src++;
                    dest++;
                }

                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++)
                    {
                        *dest = 0;
                        dest++;
                    }
                }
            }

            if (object_size == 6)
            {
                for (k = 0; k < 256; k++)
                {
                    *dest = 0;
                    dest++;
                }
            }
        }
    }
}

u32 GetDecompressedDataSize(const u32 *ptr)
{
    union CompressionHeader *header = (union CompressionHeader *)ptr;
    switch (header->smol.mode)
    {
        case MODE_LZ77:
            return header->lz77.size;
        default:
            return header->smol.imageSize;
    }
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(GetDecompressedDataSize(&src->data[0]));
    LZDecompressWram(src->data, buffer);

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;

    LoadSpriteSheet(&dest);
    Free(buffer);
    return FALSE;
}

bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;
    void *buffer;

    buffer = AllocZeroed(GetDecompressedDataSize(&src->data[0]));
    LZDecompressWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}
