#include "types.h"

// address: 0x8012BB14
extern int NumOfMonsterListLevels;

// address: 0x800A8BC0
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8012B7F8
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012B7FC
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8012B800
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8012B808
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012B80C
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8012B810
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8012B814
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8012B818
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012B81C
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8012B820
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8012B824
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8012B828
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8012B82C
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012B830
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8012B834
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8012B838
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8012B83C
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8012B844
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8012B848
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8012B850
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8012B854
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8012B858
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8012B85C
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8012B860
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8012B864
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8012B868
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8012B86C
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8012B870
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8012B878
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8012B87C
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8012B880
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8012B884
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8012B888
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8012B88C
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8012B890
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012B894
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x8012B898
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x8012B89C
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8012B8A0
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8012B8A4
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8012B8A8
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8012B8AC
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012B8B0
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8012B8B4
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8012B8B8
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012B8BC
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8012B8C0
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8012B8C4
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8012B8C8
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012B8CC
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8012B8D0
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8012B8D4
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8012B8D8
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012B8DC
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8012B8E0
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8012B8E4
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8012B8E8
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012B8EC
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8012B8F0
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8012B8F4
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8012B8F8
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012B8FC
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8012B900
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8012B904
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8012B908
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8012B90C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012B910
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8012B914
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8012B918
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012B91C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012B920
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8012B924
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8012B928
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8012B92C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8012B930
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8012B934
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012B938
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8012B93C
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A86E0
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A8710
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A8770
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A87B0
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A8820
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A8890
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A88F0
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A8940
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A89A0
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A89E0
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A8A30
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A8A80
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A8AC0
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A8B10
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A8B70
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A8BB0
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012D3E0
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A8C40
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012BB24
extern int ArgsSoFar;

// address: 0x8012BB34
extern unsigned long *ThisOt;

// address: 0x8012BB38
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012D3E4
static long hndPrimBuffers;

// address: 0x8012D3E8
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012D3EC
static unsigned char BufferDepth;

// address: 0x8012D3ED
static unsigned char WorkRamId;

// address: 0x8012D3EE
static unsigned char ScrNum;

// address: 0x8012D3F0
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012D3F4
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012D3F8
static unsigned char BufferNum;

// address: 0x8012BB3C
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012D3F9
static unsigned char LastBuffer;

// address: 0x8012D3FC
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012D400
static int ThisOtSize;

// address: 0x8012BB40
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012D404
static int VidWait;

// address: 0x8012D870
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012D408
static void (*VbFunc)();

// address: 0x8012D40C
static unsigned long VidTick;

// address: 0x8012D410
static int VXOff;

// address: 0x8012D414
static int VYOff;

// address: 0x8012BB54
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8012BB58
extern int LastFmem;

// address: 0x8012BB48
extern unsigned int GSYS_MemStart;

// address: 0x8012BB4C
extern unsigned int GSYS_MemEnd;

// address: 0x800A8F88
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A8FB0
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012BB50
extern int LowestFmem;

// address: 0x8012BB68
extern int FileSYS;

// address: 0x8012D418
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012D41C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012BB82
extern short DavesPad;

// address: 0x8012BB84
extern short DavesPadDeb;

// address: 0x800A8FD8
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012D950
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A987C
// size: 0x5C0
extern struct TextDat *AllDats[368];

// address: 0x8012BBD4
extern int TpW;

// address: 0x8012BBD8
extern int TpH;

// address: 0x8012BBDC
extern int TpXDest;

// address: 0x8012BBE0
extern int TpYDest;

// address: 0x8012BBE4
// size: 0x8
extern struct RECT R;

// address: 0x800A9E3C
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A9E70
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A900C
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8012BBF8
static bool ChunkGot;

// address: 0x800A9E98
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A9EA8
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A9EB8
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012BC0C
extern unsigned long BL_NoLumpFiles;

// address: 0x8012BC10
extern unsigned long BL_NoStreamFiles;

// address: 0x8012BC14
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8012BC18
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012BC1C
extern unsigned char FileLoaded;

// address: 0x8012BC40
extern int NoTAllocs;

// address: 0x800A9FE4
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012D428
static bool CanPause;

// address: 0x8012D42C
static bool Paused;

// address: 0x8012D978
// size: 0x10
static struct Dialog PBack;

// address: 0x800AA24C
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800AA270
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800AA294
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8012BC6C
extern int demo_pad_time;

// address: 0x8012BC70
extern int demo_pad_count;

// address: 0x800AA174
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800AA1E0
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012BC74
extern unsigned long demo_finish;

// address: 0x8012BC78
extern int cac_pad;

// address: 0x8012BC94
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8012BC98
extern int CharFrm;

// address: 0x8012BC85
extern unsigned char WHITER;

// address: 0x8012BC86
extern unsigned char WHITEG;

// address: 0x8012BC87
extern unsigned char WHITEB;

// address: 0x8012BC88
extern unsigned char BLUER;

// address: 0x8012BC89
extern unsigned char BLUEG;

// address: 0x8012BC8A
extern unsigned char BLUEB;

// address: 0x8012BC8B
extern unsigned char REDR;

// address: 0x8012BC8C
extern unsigned char REDG;

// address: 0x8012BC8D
extern unsigned char REDB;

// address: 0x8012BC8E
extern unsigned char GOLDR;

// address: 0x8012BC8F
extern unsigned char GOLDG;

// address: 0x8012BC90
extern unsigned char GOLDB;

// address: 0x800AA618
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800AA834
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x800AAA50
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800AAB04
// size: 0x10
extern struct FontTab LFont;

// address: 0x800AAB14
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800AAC4C
// size: 0x10
extern struct FontTab MFont;

// address: 0x8012BCAD
extern unsigned char DialogRed;

// address: 0x8012BCAE
extern unsigned char DialogGreen;

// address: 0x8012BCAF
extern unsigned char DialogBlue;

// address: 0x8012BCB0
extern unsigned char DialogTRed;

// address: 0x8012BCB1
extern unsigned char DialogTGreen;

// address: 0x8012BCB2
extern unsigned char DialogTBlue;

// address: 0x8012BCB4
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012BCB8
extern int DialogBackGfx;

// address: 0x8012BCBC
extern int DialogBackW;

// address: 0x8012BCC0
extern int DialogBackH;

// address: 0x8012BCC4
extern int DialogBorderGfx;

// address: 0x8012BCC8
extern int DialogBorderTLW;

// address: 0x8012BCCC
extern int DialogBorderTLH;

// address: 0x8012BCD0
extern int DialogBorderTRW;

// address: 0x8012BCD4
extern int DialogBorderTRH;

// address: 0x8012BCD8
extern int DialogBorderBLW;

// address: 0x8012BCDC
extern int DialogBorderBLH;

// address: 0x8012BCE0
extern int DialogBorderBRW;

// address: 0x8012BCE4
extern int DialogBorderBRH;

// address: 0x8012BCE8
extern int DialogBorderTW;

// address: 0x8012BCEC
extern int DialogBorderTH;

// address: 0x8012BCF0
extern int DialogBorderBW;

// address: 0x8012BCF4
extern int DialogBorderBH;

// address: 0x8012BCF8
extern int DialogBorderLW;

// address: 0x8012BCFC
extern int DialogBorderLH;

// address: 0x8012BD00
extern int DialogBorderRW;

// address: 0x8012BD04
extern int DialogBorderRH;

// address: 0x8012BD08
extern int DialogBevelGfx;

// address: 0x8012BD0C
extern int DialogBevelCW;

// address: 0x8012BD10
extern int DialogBevelCH;

// address: 0x8012BD14
extern int DialogBevelLRW;

// address: 0x8012BD18
extern int DialogBevelLRH;

// address: 0x8012BD1C
extern int DialogBevelUDW;

// address: 0x8012BD20
extern int DialogBevelUDH;

// address: 0x8012BD24
extern int MY_DialogOTpos;

// address: 0x8012D430
static unsigned char DialogGBack;

// address: 0x8012D431
static char GShadeX;

// address: 0x8012D432
static char GShadeY;

// address: 0x8012D438
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800AAC9C
// size: 0x70
extern int Cxy[28];

// address: 0x8012BCA7
extern unsigned char BORDERR;

// address: 0x8012BCA8
extern unsigned char BORDERG;

// address: 0x8012BCA9
extern unsigned char BORDERB;

// address: 0x8012BCAA
extern unsigned char BACKR;

// address: 0x8012BCAB
extern unsigned char BACKG;

// address: 0x8012BCAC
extern unsigned char BACKB;

// address: 0x800AAC5C
// size: 0x40
static char GShadeTab[64];

// address: 0x8012BCA5
static char GShadePX;

// address: 0x8012BCA6
static char GShadePY;

// address: 0x8012BD31
extern unsigned char PlayDemoFlag;

// address: 0x8012D988
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012D9B8
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012D440
static int blockr;

// address: 0x8012D444
static int blockg;

// address: 0x8012D448
static int blockb;

// address: 0x8012D44C
static int InfraFlag;

// address: 0x8012D450
static unsigned char blank_bit;

// address: 0x8012BD45
extern unsigned char P1ObjSelCount;

// address: 0x8012BD46
extern unsigned char P2ObjSelCount;

// address: 0x8012BD47
extern unsigned char P12ObjSelCount;

// address: 0x8012BD48
extern unsigned char P1ItemSelCount;

// address: 0x8012BD49
extern unsigned char P2ItemSelCount;

// address: 0x8012BD4A
extern unsigned char P12ItemSelCount;

// address: 0x8012BD4B
extern unsigned char P1MonstSelCount;

// address: 0x8012BD4C
extern unsigned char P2MonstSelCount;

// address: 0x8012BD4D
extern unsigned char P12MonstSelCount;

// address: 0x8012BD4E
static unsigned short P1ObjSelCol;

// address: 0x8012BD50
static unsigned short P2ObjSelCol;

// address: 0x8012BD52
static unsigned short P12ObjSelCol;

// address: 0x8012BD54
static unsigned short P1ItemSelCol;

// address: 0x8012BD56
static unsigned short P2ItemSelCol;

// address: 0x8012BD58
static unsigned short P12ItemSelCol;

// address: 0x8012BD5A
static unsigned short P1MonstSelCol;

// address: 0x8012BD5C
static unsigned short P2MonstSelCol;

// address: 0x8012BD5E
static unsigned short P12MonstSelCol;

// address: 0x8012BD60
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800AAD0C
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8012BD7C
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80121554
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012D9E8
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012D9F8
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012DA08
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012DA18
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012D454
static int OWorldX;

// address: 0x8012D458
static int OWorldY;

// address: 0x8012D45C
static int WWorldX;

// address: 0x8012D460
static int WWorldY;

// address: 0x801215D0
// size: 0x20
static short TxyAdd[16];

// address: 0x8012BDA0
extern int GXAdj2;

// address: 0x8012D464
static int TimePerFrame;

// address: 0x8012D468
static int CpuStart;

// address: 0x8012D46C
static int CpuTime;

// address: 0x8012D470
static int DrawTime;

// address: 0x8012D474
static int DrawStart;

// address: 0x8012D478
static int LastCpuTime;

// address: 0x8012D47C
static int LastDrawTime;

// address: 0x8012D480
static int DrawArea;

// address: 0x8012BDA8
extern bool ProfOn;

// address: 0x800AAD20
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80121738
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800AAD34
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800AAD88
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800AADDC
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800AAE30
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800AAE84
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8012BDD0
extern int hof;

// address: 0x8012BDD4
extern int mof;

// address: 0x800AAF4C
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800AB04C
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8012BE08
extern unsigned long Time;

// address: 0x8012BE0C
extern bool CDWAIT;

// address: 0x800BD04C
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BD08C
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012D484
static bool SavePause;

// address: 0x8012BDE1
extern char NoActiveStreams;

// address: 0x8012BDE4
static bool STRInit;

// address: 0x8012BDE8
static int frame_rate;

// address: 0x8012BDEC
static unsigned char CDAngle;

// address: 0x8012BE30
extern char SFXNotPlayed;

// address: 0x8012BE31
extern char SFXNotInBank;

// address: 0x8012DA28
// size: 0x108
static char spu_management[264];

// address: 0x8012DB38
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012D48C
static unsigned short NoSfx;

// address: 0x8012BE1C
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8012BE20
static long OffsetHandle;

// address: 0x8012BE24
static int BankBase;

// address: 0x8012BE28
static unsigned char SPU_Done;

// address: 0x80121AF4
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x8012BE2C
static int NoSNDRemaps;

// address: 0x800BD10C
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x80121B98
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8012BE74
extern int demo_level;

// address: 0x8012DB50
// size: 0x20
static int buff[8];

// address: 0x8012BE78
extern int old_val;

// address: 0x8012BE7C
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8012BE80
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012BE84
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8012BE5C
extern int demo_load;

// address: 0x8012BE60
extern int demo_record_load;

// address: 0x8012BE64
extern int level_record;

// address: 0x8012BE68
extern char demo_fade_finished;

// address: 0x8012BE6B
extern unsigned char demo_which;

// address: 0x800BD338
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8012BE69
extern unsigned char quest_cheat_num;

// address: 0x8012BE6A
extern unsigned char cheat_quest_flag;

// address: 0x8012BE58
extern int moo_moo;

// address: 0x800BD2F8
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x8012BE6C
extern unsigned char demo_flash;

// address: 0x8012BE70
extern int tonys_Task;

// address: 0x8012BFE0
extern bool DoShowPanel;

// address: 0x8012BFE4
extern bool DoDrawBg;

// address: 0x8012D490
static bool GlueFinished;

// address: 0x8012D494
static bool DoHomingScroll;

// address: 0x8012D498
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012D49C
static int CurrentMonsterList;

// address: 0x8012BE91
extern char started_grtask;

// address: 0x800BD34C
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8012BFE8
// size: 0x4
static char ArmourChar[4];

// address: 0x80121C8C
// size: 0xA
static char WepChar[10];

// address: 0x8012BFEC
// size: 0x4
static char CharChar[4];

// address: 0x8012D4A0
static char ctrl_select_line;

// address: 0x8012D4A1
static char ctrl_select_side;

// address: 0x8012D4A2
static char ckeyheld;

// address: 0x8012D4A8
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8012C000
extern unsigned char ctrlflag;

// address: 0x800BD7C0
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BD718
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8012BFFC
static int toppos;

// address: 0x8012DB70
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BD8F0
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8012C070
extern int gr_scrxoff;

// address: 0x8012C074
extern int gr_scryoff;

// address: 0x8012C07C
extern unsigned short water_clut;

// address: 0x8012C07F
extern char visible_level;

// address: 0x8012C06D
extern char last_type;

// address: 0x8012C081
extern char daylight;

// address: 0x8012C07E
extern char cow_in_sight;

// address: 0x8012C078
extern unsigned int water_count;

// address: 0x8012C080
extern unsigned char lastrnd;

// address: 0x8012C084
static int call_clock;

// address: 0x8012C094
extern int TitleAnimCount;

// address: 0x8012C098
static int flametick;

// address: 0x800BD988
// size: 0x18
static int ypos[6];

// address: 0x800BD9A0
// size: 0x18
static int frmlist[6];

// address: 0x800BD9B8
// size: 0x18
static int xoff[6];

// address: 0x8012C09C
static int startx;

// address: 0x8012C0A0
extern bool hellomumflag;

// address: 0x800BD9F0
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012DB80
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012D4B0
static int partOtPos;

// address: 0x8012C0C0
extern int SetParticle;

// address: 0x8012C0C4
static int p1partexecnum;

// address: 0x8012C0C8
static int p2partexecnum;

// address: 0x800BD9D0
// size: 0x20
static int JumpArray[8];

// address: 0x8012C0CC
static int partjumpflag;

// address: 0x8012C0D0
static int partglowflag;

// address: 0x8012C0D4
static int partcolour;

// address: 0x8012C0D8
static bool anyfuckingmenus;

// address: 0x800BDA80
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x8012C0F9
extern unsigned char select_flag;

// address: 0x8012D4B4
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012D4BC
static char item_select;

// address: 0x8012C0FC
// size: 0x2
extern char QSpell[2];

// address: 0x8012C100
// size: 0x2
extern char _spltotype[2];

// address: 0x8012C104
// size: 0x8
extern bool force_attack[2];

// address: 0x8012C0EC
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012DDC0
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8012C0F0
// size: 0x4
extern char mana_order[4];

// address: 0x8012C0F4
// size: 0x4
extern char health_order[4];

// address: 0x8012C0F8
extern unsigned char birdcheck;

// address: 0x8012DDD0
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012D4C0
static unsigned short progress;

// address: 0x80121E24
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8012DDF8
// size: 0x78
static struct CScreen Scr;

// address: 0x8012C124
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8012C128
static bool GameLoading;

// address: 0x8012DE78
// size: 0x10
static struct Dialog LBack;

// address: 0x8012C144
extern unsigned int card_ev0;

// address: 0x8012C148
extern unsigned int card_ev1;

// address: 0x8012C14C
extern unsigned int card_ev2;

// address: 0x8012C150
extern unsigned int card_ev3;

// address: 0x8012C154
extern unsigned int card_ev10;

// address: 0x8012C158
extern unsigned int card_ev11;

// address: 0x8012C15C
extern unsigned int card_ev12;

// address: 0x8012C160
extern unsigned int card_ev13;

// address: 0x8012C164
// size: 0x8
extern int card_dirty[2];

// address: 0x8012C16C
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012D4C4
static int card_event;

// address: 0x8012C140
extern void (*mem_card_event_handler)();

// address: 0x8012C138
extern bool MemCardActive;

// address: 0x8012C13C
static int never_hooked_events;

// address: 0x8012C1C4
extern unsigned long MasterVol;

// address: 0x8012C1C8
extern unsigned long MusicVol;

// address: 0x8012C1CC
extern unsigned long SoundVol;

// address: 0x8012C1D0
extern unsigned long VideoVol;

// address: 0x8012C1D4
extern unsigned long SpeechVol;

// address: 0x8012D4C8
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012D4CC
static int sw;

// address: 0x8012D4D0
static int sx;

// address: 0x8012D4D4
static int sy;

// address: 0x8012D4D8
static unsigned char Adjust;

// address: 0x8012D4D9
static unsigned char qspin;

// address: 0x8012D4DA
static unsigned char lqspin;

// address: 0x8012D4DC
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012D4E0
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012D4E4
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8012C1D8
extern int save_blocks;

// address: 0x8012C1DC
extern char *Savefilename;

// address: 0x8012C1E0
extern int ReturnMenu;

// address: 0x8012D4E8
// size: 0x8
static struct RECT ORect;

// address: 0x8012D4F0
// size: 0x8
static char *McState[2];

// address: 0x8012C1E4
extern int they_pressed;

// address: 0x8012D4F8
// size: 0x8
static unsigned char Seed[8];

// address: 0x8012C19C
extern bool optionsflag;

// address: 0x8012C190
extern int cmenu;

// address: 0x8012C1A8
extern int options_pad;

// address: 0x8012C198
extern bool allspellsflag;

// address: 0x800BE520
// size: 0x80
extern short Circle[64];

// address: 0x8012C17C
extern bool goldcheat;

// address: 0x8012C1AC
extern int OptionsSeed;

// address: 0x8012C1B0
extern bool OptionsSetSeed;

// address: 0x8012C180
extern unsigned char Qfromoptions;

// address: 0x8012C184
static int Spacing;

// address: 0x8012C188
static int cs;

// address: 0x8012C18C
static int lastcs;

// address: 0x8012C194
static bool MemcardOverlay;

// address: 0x8012C1A0
extern int saveflag;

// address: 0x8012C1A4
extern int loadflag;

// address: 0x800BDAB0
// size: 0xC0
extern struct OMENUITEM MainMenu[8];

// address: 0x800BDB70
// size: 0xF0
extern struct OMENUITEM GameMenu[10];

// address: 0x800BDC60
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BDCF0
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BDD98
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BDE40
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800BDEA0
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BDF48
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BDFA8
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BE008
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BE068
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BE0C8
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BE128
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BE1D0
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BE278
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BE2D8
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800BE3C8
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BE3F8
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BE440
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x800BE488
// size: 0x98
extern struct OMENULIST MenuList[19];

// address: 0x8012C1B4
static bool debounce;

// address: 0x8012C1B8
static unsigned char KeyPos;

// address: 0x800BE5A0
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8012C1BC
static int SeedPos;

// address: 0x800BE5B4
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012D500
// size: 0x8
static int last_seenx[2];

// address: 0x8012D508
// size: 0x8
static int last_seeny[2];

// address: 0x8012C1F1
extern char hop_height;

// address: 0x8012C1F4
// size: 0x8
static struct Perch perches[4];

// address: 0x800BE734
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x8012C208
static int CurMons;

// address: 0x8012C20C
static int Frame;

// address: 0x8012C210
static int Action;

// address: 0x8012C214
static int Dir;

// address: 0x8012C278
extern int indsize;

// address: 0x8012C258
static unsigned char *kanjbuff;

// address: 0x8012C25C
// size: 0x4
static struct kindexS *kindex;

// address: 0x8012C260
static long hndKanjBuff;

// address: 0x8012C264
static long hndKanjIndex;

// address: 0x8012C2BC
extern int FeBackX;

// address: 0x8012C2C0
extern int FeBackY;

// address: 0x8012C2C4
extern int FeBackW;

// address: 0x8012C2C8
extern int FeBackH;

// address: 0x8012C2CC
extern unsigned char FeFlag;

// address: 0x800BEC64
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8012C2D0
extern int FePlayerNo;

// address: 0x8012D510
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8012C2D4
extern int FeBufferCount;

// address: 0x8012C2D8
extern int FeNoOfPlayers;

// address: 0x8012C2DC
// size: 0x8
extern int FeChrClass[2];

// address: 0x800BF3E4
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8012C2E4
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012C2E8
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8012C2EC
extern unsigned long FeCount;

// address: 0x8012C2F0
extern int fileselect;

// address: 0x8012C2F4
extern int BookMenu;

// address: 0x8012C2F8
extern int FeAttractMode;

// address: 0x8012C2FC
extern int FMVPress;

// address: 0x8012C288
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012C290
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8012C28C
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8012C298
extern unsigned char FeIsAVirgin;

// address: 0x8012C29C
extern int FeMenuDelay;

// address: 0x800BE764
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BE780
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BE79C
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BE7B8
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BE7D4
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BE7F0
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BE80C
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BE828
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BE844
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BE860
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BE87C
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BE898
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BE8B4
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BE8D0
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012C2A0
static int fadeval;

// address: 0x800BE8EC
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BE964
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BE9AC
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BEA24
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800BEA6C
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BEAB4
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BEB14
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BEB74
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BEBEC
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8012C2AC
static bool DrawBackOn;

// address: 0x8012C2B0
extern unsigned long AttractTitleDelay;

// address: 0x8012C2B4
extern unsigned long AttractMainDelay;

// address: 0x8012C2B8
extern int FMVEndPad;

// address: 0x8012C330
extern int InCredits;

// address: 0x8012C334
extern int CreditTitleNo;

// address: 0x8012C338
extern int CreditSubTitleNo;

// address: 0x8012C34C
// size: 0x8
extern int card_status[2];

// address: 0x8012C354
// size: 0x8
extern int card_usable[2];

// address: 0x8012C35C
// size: 0x8
extern int card_files[2];

// address: 0x8012C364
// size: 0x8
extern int card_changed[2];

// address: 0x8012C3A8
extern int AlertTxt;

// address: 0x8012C3AC
extern int current_card;

// address: 0x8012C3B0
extern int LoadType;

// address: 0x8012C3B4
extern int McMenuPos;

// address: 0x8012C3B8
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012C3A4
extern bool fileinfoflag;

// address: 0x8012C378
extern char *DiabloGameFile;

// address: 0x8012C37C
extern char *DiabloOptionFile;

// address: 0x8012C39C
// size: 0x8
extern char *McState_addr_8012C39C[2];

// address: 0x8012C48C
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012C494
extern int mdec_audio_sec;

// address: 0x8012C498
extern int mdec_audio_offs;

// address: 0x8012C49C
extern int mdec_audio_playing;

// address: 0x8012C4A0
extern int mdec_audio_rate_shift;

// address: 0x8012C4A4
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012C4AC
extern int slice_size;

// address: 0x8012C4B0
// size: 0x8
extern struct RECT slice;

// address: 0x8012C4B8
extern int slice_inc;

// address: 0x8012C4BC
extern int area_pw;

// address: 0x8012C4C0
extern int area_ph;

// address: 0x8012C4C4
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012C4C8
// size: 0x8
extern int num_pol[2];

// address: 0x8012C4D0
extern int mdec_cx;

// address: 0x8012C4D4
extern int mdec_cy;

// address: 0x8012C4D8
extern int mdec_w;

// address: 0x8012C4DC
extern int mdec_h;

// address: 0x8012C4E0
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012C4E8
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012C4F0
extern int move_x;

// address: 0x8012C4F4
extern int move_y;

// address: 0x8012C4F8
extern int move_scale;

// address: 0x8012C4FC
extern int stream_frames;

// address: 0x8012C500
extern int last_stream_frame;

// address: 0x8012C504
extern int mdec_framecount;

// address: 0x8012C508
extern int mdec_speed;

// address: 0x8012C50C
extern int mdec_stream_starting;

// address: 0x8012C510
extern int mdec_last_frame;

// address: 0x8012C514
extern int mdec_sectors_per_frame;

// address: 0x8012C518
extern unsigned short *vlctab;

// address: 0x8012C51C
extern unsigned char *mdc_buftop;

// address: 0x8012C520
extern unsigned char *mdc_bufstart;

// address: 0x8012C524
extern int mdc_bufleft;

// address: 0x8012C528
extern int mdc_buftotal;

// address: 0x8012C52C
extern int ordertab_length;

// address: 0x8012C530
extern int time_in_frames;

// address: 0x8012C534
extern int stream_chunksize;

// address: 0x8012C538
extern int stream_bufsize;

// address: 0x8012C53C
extern int stream_subsec;

// address: 0x8012C540
extern int stream_secnum;

// address: 0x8012C544
extern int stream_last_sector;

// address: 0x8012C548
extern int stream_startsec;

// address: 0x8012C54C
extern int stream_opened;

// address: 0x8012C550
extern int stream_last_chunk;

// address: 0x8012C554
extern int stream_got_chunks;

// address: 0x8012C558
extern int last_sector;

// address: 0x8012C55C
extern int cdstream_resetsec;

// address: 0x8012C560
extern int last_handler_event;

// address: 0x8012C430
extern bool user_start;

// address: 0x8012C3C8
extern unsigned char *vlc_tab;

// address: 0x8012C3CC
extern unsigned char *vlc_buf;

// address: 0x8012C3D0
extern unsigned char *img_buf;

// address: 0x8012C3D4
extern int vbuf;

// address: 0x8012C3D8
extern int last_fn;

// address: 0x8012C3DC
extern int last_mdc;

// address: 0x8012C3E0
extern int slnum;

// address: 0x8012C3E4
extern int slices_to_do;

// address: 0x8012C3E8
extern int mbuf;

// address: 0x8012C3EC
extern int mfn;

// address: 0x8012C3F0
extern int last_move_mbuf;

// address: 0x8012C3F4
extern int move_request;

// address: 0x8012C3F8
extern int mdec_scale;

// address: 0x8012C3FC
extern int do_brightness;

// address: 0x8012C400
extern int frame_decoded;

// address: 0x8012C404
extern int mdec_streaming;

// address: 0x8012C408
extern int mdec_stream_size;

// address: 0x8012C40C
extern int first_stream_frame;

// address: 0x8012C410
extern int stream_frames_played;

// address: 0x8012C414
extern int num_mdcs;

// address: 0x8012C418
extern int mdec_head;

// address: 0x8012C41C
extern int mdec_tail;

// address: 0x8012C420
extern int mdec_waiting_tail;

// address: 0x8012C424
extern int mdecs_queued;

// address: 0x8012C428
extern int mdecs_waiting;

// address: 0x8012C42C
extern int sfx_volume;

// address: 0x8012C434
extern int stream_chunks_in;

// address: 0x8012C438
extern int stream_chunks_total;

// address: 0x8012C43C
extern int stream_in;

// address: 0x8012C440
extern int stream_out;

// address: 0x8012C444
extern int stream_stalled;

// address: 0x8012C448
extern int stream_ending;

// address: 0x8012C44C
extern int stream_open;

// address: 0x8012C450
extern int stream_handler_installed;

// address: 0x8012C454
extern int stream_chunks_borrowed;

// address: 0x8012C458
extern int _get_count;

// address: 0x8012C45C
extern int _discard_count;

// address: 0x8012C460
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012C464
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012C468
extern int cdready_calls;

// address: 0x8012C46C
extern int cdready_errors;

// address: 0x8012C470
extern int cdready_out_of_sync;

// address: 0x8012C474
extern int cdstream_resetting;

// address: 0x8012C478
extern int sector_dma;

// address: 0x8012C47C
extern int sector_dma_in;

// address: 0x8012C480
extern unsigned long *chkaddr;

// address: 0x8012C484
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012C488
extern int first_handler_event;

// address: 0x8012C5E0
extern unsigned char *pStatusPanel;

// address: 0x8012C5E4
extern unsigned char *pGBoxBuff;

// address: 0x8012C5E8
extern unsigned char dropGoldFlag;

// address: 0x8012C5EC
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800BF8FC
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012C5F0
// size: 0x2
extern char _infoclr[2];

// address: 0x800BFAFC
// size: 0x100
extern char tempstr[256];

// address: 0x8012C5F2
extern unsigned char drawhpflag;

// address: 0x8012C5F3
extern unsigned char drawmanaflag;

// address: 0x8012C5F4
extern unsigned char chrflag;

// address: 0x8012C5F5
extern unsigned char drawbtnflag;

// address: 0x8012C5F6
extern unsigned char panbtndown;

// address: 0x8012C5F7
extern unsigned char panelflag;

// address: 0x8012C5F8
extern unsigned char chrbtndown;

// address: 0x8012C5F9
extern unsigned char lvlbtndown;

// address: 0x8012C5FA
extern unsigned char sbookflag;

// address: 0x8012C5FB
extern unsigned char talkflag;

// address: 0x8012C5FC
extern int dropGoldValue;

// address: 0x8012C600
extern int initialDropGoldValue;

// address: 0x8012C604
extern int initialDropGoldIndex;

// address: 0x8012C608
extern unsigned char *pPanelButtons;

// address: 0x8012C60C
extern unsigned char *pPanelText;

// address: 0x8012C610
extern unsigned char *pManaBuff;

// address: 0x8012C614
extern unsigned char *pLifeBuff;

// address: 0x8012C618
extern unsigned char *pChrPanel;

// address: 0x8012C61C
extern unsigned char *pChrButtons;

// address: 0x8012C620
extern unsigned char *pSpellCels;

// address: 0x8012DEC8
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012E2C8
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012D520
// size: 0x8
static int _pnumlines[2];

// address: 0x8012C624
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012C628
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012D530
// size: 0x8
static int _pSpell[2];

// address: 0x8012D538
// size: 0x8
static int _pSplType[2];

// address: 0x8012C630
extern int numpanbtns;

// address: 0x8012C634
extern unsigned char *pDurIcons;

// address: 0x8012C638
extern unsigned char drawdurflag;

// address: 0x8012D540
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8012C639
extern unsigned char chrbtnactive;

// address: 0x8012C63C
extern unsigned char *pSpellBkCel;

// address: 0x8012C640
extern unsigned char *pSBkBtnCel;

// address: 0x8012C644
extern unsigned char *pSBkIconCels;

// address: 0x8012C648
extern int sbooktab;

// address: 0x8012C64C
extern int cur_spel;

// address: 0x8012D548
static long talkofs;

// address: 0x8012E318
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012D54C
static unsigned char sgbTalkSavePos;

// address: 0x8012D54D
static unsigned char sgbNextTalkSave;

// address: 0x8012D54E
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012D550
static unsigned char *pTalkPanel;

// address: 0x8012D554
static unsigned char *pMultiBtns;

// address: 0x8012D558
static unsigned char *pTalkBtns;

// address: 0x8012D55C
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800BF410
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012C56D
extern unsigned char DrawLevelUpFlag;

// address: 0x8012C594
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012C590
extern unsigned char spspelstate;

// address: 0x8012C5B0
extern bool initchr;

// address: 0x8012C570
static int SPLICONNO;

// address: 0x8012C574
static int SPLICONY;

// address: 0x8012D528
static int SPLICONRIGHT;

// address: 0x8012C578
static int scx;

// address: 0x8012C57C
static int scy;

// address: 0x8012C580
static int scx1;

// address: 0x8012C584
static int scy1;

// address: 0x8012C588
static int scx2;

// address: 0x8012C58C
static int scy2;

// address: 0x8012C59C
extern char SpellCol;

// address: 0x800BF3FC
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800BF438
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012C5A0
static int lus;

// address: 0x8012C5A4
static int CsNo;

// address: 0x8012C5A8
static char plusanim;

// address: 0x8012E308
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012C5AC
static int CS_XOFF;

// address: 0x800BF49C
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012C5B4
extern int NoCSEntries;

// address: 0x8012C5B8
static int SPALOFF;

// address: 0x8012C5BC
static int paloffset1;

// address: 0x8012C5C0
static int paloffset2;

// address: 0x8012C5C4
static int paloffset3;

// address: 0x8012C5C8
static int paloffset4;

// address: 0x8012C5CC
static int pinc1;

// address: 0x8012C5D0
static int pinc2;

// address: 0x8012C5D4
static int pinc3;

// address: 0x8012C5D8
static int pinc4;

// address: 0x8012C660
// size: 0x8
extern int _pcurs[2];

// address: 0x8012C668
extern int cursW;

// address: 0x8012C66C
extern int cursH;

// address: 0x8012C670
extern int icursW;

// address: 0x8012C674
extern int icursH;

// address: 0x8012C678
extern int icursW28;

// address: 0x8012C67C
extern int icursH28;

// address: 0x8012C680
extern int cursmx;

// address: 0x8012C684
extern int cursmy;

// address: 0x8012C688
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012C690
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012C694
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012C698
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012C69C
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012C65C
extern int sel_data;

// address: 0x800BFBFC
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012C6A0
extern int spurtndx;

// address: 0x8012C6A4
extern int stonendx;

// address: 0x8012C6A8
extern unsigned char *pSquareCel;

// address: 0x8012C6E8
extern unsigned long ghInst;

// address: 0x8012C6EC
extern unsigned char svgamode;

// address: 0x8012C6F0
extern int MouseX;

// address: 0x8012C6F4
extern int MouseY;

// address: 0x8012C6F8
extern long gv1;

// address: 0x8012C6FC
extern long gv2;

// address: 0x8012C700
extern long gv3;

// address: 0x8012C704
extern long gv4;

// address: 0x8012C708
extern long gv5;

// address: 0x8012C70C
extern unsigned char gbProcessPlayers;

// address: 0x800BFD70
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800BFD98
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800BFDDC
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012C70D
extern unsigned char gbDoEnding;

// address: 0x8012C70E
extern unsigned char gbRunGame;

// address: 0x8012C70F
extern unsigned char gbRunGameResult;

// address: 0x8012C710
extern unsigned char gbGameLoopStartup;

// address: 0x8012E368
// size: 0x44
static int glEndSeed[17];

// address: 0x8012E3B8
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012E408
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012E458
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012D560
static long *sg_previousFilter;

// address: 0x800BFE20
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012C714
extern int Passedlvldir;

// address: 0x8012C718
extern unsigned char *TempStack;

// address: 0x8012C6B8
extern unsigned long ghMainWnd;

// address: 0x8012C6BC
extern unsigned char fullscreen;

// address: 0x8012C6C0
extern int force_redraw;

// address: 0x8012C6D4
extern unsigned char PauseMode;

// address: 0x8012C6D5
extern unsigned char FriendlyMode;

// address: 0x8012C6C5
extern unsigned char visiondebug;

// address: 0x8012C6C7
extern unsigned char light4flag;

// address: 0x8012C6C8
extern unsigned char leveldebug;

// address: 0x8012C6C9
extern unsigned char monstdebug;

// address: 0x8012C6D0
extern int debugmonsttypes;

// address: 0x8012C6C4
static unsigned char cineflag;

// address: 0x8012C6C6
extern unsigned char scrollflag;

// address: 0x8012C6CA
extern unsigned char trigdebug;

// address: 0x8012C6CC
extern int setseed;

// address: 0x8012C6D8
static int sgnTimeoutCurs;

// address: 0x8012C6DC
extern unsigned char sgbMouseDown;

// address: 0x800C04EC
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012C730
extern int numtowners;

// address: 0x8012C734
extern unsigned char storeflag;

// address: 0x8012C735
extern unsigned char boyloadflag;

// address: 0x8012C736
extern unsigned char bannerflag;

// address: 0x8012C738
extern unsigned char *pCowCels;

// address: 0x8012D564
static unsigned long sgdwCowClicks;

// address: 0x8012D568
static int sgnCowMsg;

// address: 0x800C022C
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012C728
extern unsigned long CowPlaying;

// address: 0x800BFE50
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800C01C8
// size: 0xC
extern int TownCowX[3];

// address: 0x800C01D4
// size: 0xC
extern int TownCowY[3];

// address: 0x800C01E0
// size: 0xC
extern int TownCowDir[3];

// address: 0x800C01EC
// size: 0x20
extern int cowoffx[8];

// address: 0x800C020C
// size: 0x20
extern int cowoffy[8];

// address: 0x8012C750
extern int sfxdelay;

// address: 0x8012C754
extern int sfxdnum;

// address: 0x8012C748
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C12EC
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8012C74C
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012C758
extern long orgseed;

// address: 0x8012D56C
static long sglGameSeed;

// address: 0x8012C75C
extern int SeedCount;

// address: 0x8012D570
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012D574
static int sgnWidth;

// address: 0x8012C76A
extern char msgflag;

// address: 0x8012C76B
extern char msgdelay;

// address: 0x800C2314
// size: 0x50
extern char msgtable[80];

// address: 0x800C2264
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012C769
extern char msgcnt;

// address: 0x8012D578
static unsigned long sgdwProgress;

// address: 0x8012D57C
static unsigned long sgdwXY;

// address: 0x800C2364
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80122560
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80123900
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80124620
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80125520
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C2578
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C7178
// size: 0x7F
extern char itemactive[127];

// address: 0x800C71F8
// size: 0x7F
extern char itemavail[127];

// address: 0x800C7278
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012C7A4
extern unsigned char uitemflag;

// address: 0x8012D580
static int tem;

// address: 0x8012E4A0
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012E540
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012C7A8
extern int ScrollType;

// address: 0x800C72F8
// size: 0x40
extern char ItemStr[64];

// address: 0x800C7338
// size: 0x40
extern char SufStr[64];

// address: 0x8012C784
extern long numitems;

// address: 0x8012C788
extern int gnNumGetRecords;

// address: 0x800C24D4
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C2404
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80127334
// size: 0x40
extern short SinTab[32];

// address: 0x80127374
// size: 0x46
static short Item2Frm[35];

// address: 0x800C24B0
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012C78C
extern int *ItemAnimSnds;

// address: 0x8012C790
extern int idoppely;

// address: 0x8012C794
extern int ScrollFlag;

// address: 0x800C2560
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C8124
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C8264
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012C7BC
extern int numlights;

// address: 0x8012C7C0
extern char lightmax;

// address: 0x800C828C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012C7C4
extern int numvision;

// address: 0x8012C7C8
extern unsigned char dovision;

// address: 0x8012C7CC
extern int visionid;

// address: 0x8012D584
static int disp_mask;

// address: 0x8012D588
static int weird;

// address: 0x8012D58C
static int disp_tab_r;

// address: 0x8012D590
static int dispy_r;

// address: 0x8012D594
static int disp_tab_g;

// address: 0x8012D598
static int dispy_g;

// address: 0x8012D59C
static int disp_tab_b;

// address: 0x8012D5A0
static int dispy_b;

// address: 0x8012D5A4
static int radius;

// address: 0x8012D5A8
static int bright;

// address: 0x8012E550
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012C7AC
extern int lightflag;

// address: 0x800C7E38
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C80EC
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C7378
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012C7B0
extern int restore_r;

// address: 0x8012C7B4
extern int restore_g;

// address: 0x8012C7B8
extern int restore_b;

// address: 0x800C8104
// size: 0x10
extern char radius_tab[16];

// address: 0x800C8114
// size: 0x10
extern char bright_tab[16];

// address: 0x8012C7ED
extern unsigned char qtextflag;

// address: 0x8012C7F0
extern int qtextSpd;

// address: 0x8012D5AC
static unsigned char *pMedTextCels;

// address: 0x8012D5B0
static unsigned char *pTextBoxCels;

// address: 0x8012D5B4
static char *qtextptr;

// address: 0x8012D5B8
static int qtexty;

// address: 0x8012D5BC
static unsigned long qtextDelay;

// address: 0x8012D5C0
static unsigned long sgLastScroll;

// address: 0x8012D5C4
static unsigned long scrolltexty;

// address: 0x8012D5C8
static long sglMusicVolumeSave;

// address: 0x8012C7DC
static bool qtbodge;

// address: 0x800C844C
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C845C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C8BCC
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C8ABC
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C8CB8
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DCA04
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012E5D0
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012D5CD
static unsigned char sgbRecvCmd;

// address: 0x8012D5D0
static unsigned long sgdwRecvOffset;

// address: 0x8012D5D4
static unsigned char sgbDeltaChunks;

// address: 0x8012D5D5
static unsigned char sgbDeltaChanged;

// address: 0x8012D5D8
static unsigned long sgdwOwnerWait;

// address: 0x8012D5DC
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012D5E0
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012D5E4
static int sgnCurrMegaPlayer;

// address: 0x8012C809
extern unsigned char deltaload;

// address: 0x8012C80A
extern unsigned char gbBufferMsgs;

// address: 0x8012C80C
extern unsigned long dwRecCount;

// address: 0x8012C810
extern bool LevelOut;

// address: 0x8012C826
extern unsigned char gbMaxPlayers;

// address: 0x8012C827
extern unsigned char gbActivePlayers;

// address: 0x8012C828
extern unsigned char gbGameDestroyed;

// address: 0x8012C829
extern unsigned char gbDeltaSender;

// address: 0x8012C82A
extern unsigned char gbSelectProvider;

// address: 0x8012C82B
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012D5E8
static unsigned char sgbSentThisCycle;

// address: 0x8012D5EC
static unsigned long sgdwGameLoops;

// address: 0x8012D5F0
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012D5F4
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012D5F8
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012D600
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012D608
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012D610
static unsigned char sgbTimeout;

// address: 0x8012D614
static long sglTimeoutStart;

// address: 0x8012C820
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012C825
static unsigned char sgbNetInited;

// address: 0x800DDA6C
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DDC30
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80127A88
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DE410
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012C84C
extern long numobjects;

// address: 0x800DF9E4
// size: 0x7F
extern char objectactive[127];

// address: 0x800DFA64
// size: 0x7F
extern char objectavail[127];

// address: 0x8012C850
extern unsigned char InitObjFlag;

// address: 0x8012C854
extern int trapid;

// address: 0x800DFAE4
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012C858
extern int trapdir;

// address: 0x8012C85C
extern int leverid;

// address: 0x8012C844
extern int numobjfiles;

// address: 0x800DE328
// size: 0x20
extern int bxadd[8];

// address: 0x800DE348
// size: 0x20
extern int byadd[8];

// address: 0x800DE3D0
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DE368
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DE3EC
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012C848
extern int myscale;

// address: 0x8012C870
extern unsigned char gbValidSaveFile;

// address: 0x8012C86C
extern bool DoLoadedChar;

// address: 0x800DFD04
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012C890
extern int myplr;

// address: 0x8012C894
extern int deathdelay;

// address: 0x8012C898
extern unsigned char deathflag;

// address: 0x8012C899
extern char light_rad;

// address: 0x8012C888
// size: 0x5
extern char light_level[5];

// address: 0x800DFBFC
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012C880
static int PlrStructSize;

// address: 0x8012C884
static int ItemStructSize;

// address: 0x800DFB0C
// size: 0x24
extern int plrxoff[9];

// address: 0x800DFB30
// size: 0x24
extern int plryoff[9];

// address: 0x800DFB54
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DFB78
// size: 0x24
extern int plryoff2[9];

// address: 0x800DFB9C
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DFBC0
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DFBCC
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DFBD8
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DFBE4
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DFBF0
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DFC2C
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E458C
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012C8D8
extern unsigned char *pQLogCel;

// address: 0x8012C8DC
extern int ReturnLvlX;

// address: 0x8012C8E0
extern int ReturnLvlY;

// address: 0x8012C8E4
extern int ReturnLvl;

// address: 0x8012C8E8
extern int ReturnLvlT;

// address: 0x8012C8EC
extern unsigned char rporttest;

// address: 0x8012C8F0
extern int qline;

// address: 0x8012C8F4
extern int numqlines;

// address: 0x8012C8F8
extern int qtopline;

// address: 0x8012E5E8
// size: 0x40
static int qlist[16];

// address: 0x8012D618
// size: 0x8
static struct RECT QSRect;

// address: 0x8012C8A5
extern unsigned char questlog;

// address: 0x800E4454
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012C8A8
extern int ALLQUESTS;

// address: 0x800E4568
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E4574
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E4580
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012C8BC
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012C8D4
extern bool WaterDone;

// address: 0x8012C8AC
// size: 0x7
static char questxoff[7];

// address: 0x8012C8B4
// size: 0x7
static char questyoff[7];

// address: 0x800E4554
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012C8C4
static int QS_PX;

// address: 0x8012C8C8
static int QS_PY;

// address: 0x8012C8CC
static int QS_PW;

// address: 0x8012C8D0
static int QS_PH;

// address: 0x8012E628
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E46CC
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012C933
extern char stextflag;

// address: 0x800E4F74
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E5B54
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012C934
extern int numpremium;

// address: 0x8012C938
extern int premiumlevel;

// address: 0x800E5EE4
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E6AC4
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012C93C
extern int boylevel;

// address: 0x800E6B5C
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E6BF4
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012C940
extern char stextsize;

// address: 0x8012C941
extern unsigned char stextscrl;

// address: 0x8012D620
static int stextsel;

// address: 0x8012D624
static int stextlhold;

// address: 0x8012D628
static int stextshold;

// address: 0x8012D62C
static int stextvhold;

// address: 0x8012D630
static int stextsval;

// address: 0x8012D634
static int stextsmax;

// address: 0x8012D638
static int stextup;

// address: 0x8012D63C
static int stextdown;

// address: 0x8012D640
static char stextscrlubtn;

// address: 0x8012D641
static char stextscrldbtn;

// address: 0x8012D642
static char SItemListFlag;

// address: 0x8012E638
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E77D4
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800E9454
// size: 0x30
extern char storehidx[48];

// address: 0x8012D644
static int storenumh;

// address: 0x8012D648
static int gossipstart;

// address: 0x8012D64C
static int gossipend;

// address: 0x8012D650
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012D658
static int talker;

// address: 0x8012C920
extern unsigned char *pSTextBoxCels;

// address: 0x8012C924
extern unsigned char *pSTextSlidCels;

// address: 0x8012C928
extern int *SStringY;

// address: 0x800E4E50
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E4E60
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E4EB0
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E4F00
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E4F50
// size: 0x24
extern int talkname[9];

// address: 0x8012C932
extern unsigned char InStoreFlag;

// address: 0x80128D84
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012C950
extern unsigned long gdwAllTextEntries;

// address: 0x8012D65C
static unsigned char *P3Tiles;

// address: 0x8012C960
extern int tile;

// address: 0x8012C970
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E96BC
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012C974
extern int numtrigs;

// address: 0x8012C978
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012C97C
extern int TWarpFrom;

// address: 0x800E9484
// size: 0x2C
extern int TownDownList[11];

// address: 0x800E94B0
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800E94E4
// size: 0x30
extern int L1UpList[12];

// address: 0x800E9514
// size: 0x28
extern int L1DownList[10];

// address: 0x800E953C
// size: 0xC
extern int L2UpList[3];

// address: 0x800E9548
// size: 0x14
extern int L2DownList[5];

// address: 0x800E955C
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800E9568
// size: 0x3C
extern int L3UpList[15];

// address: 0x800E95A4
// size: 0x24
extern int L3DownList[9];

// address: 0x800E95C8
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800E9600
// size: 0x10
extern int L4UpList[4];

// address: 0x800E9610
// size: 0x18
extern int L4DownList[6];

// address: 0x800E9628
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800E9638
// size: 0x84
extern int L4PentaList[33];

// address: 0x80129B14
// size: 0xA
static char cursoff[10];

// address: 0x8012C995
extern unsigned char gbSndInited;

// address: 0x8012C998
extern long sglMasterVolume;

// address: 0x8012C99C
extern long sglMusicVolume;

// address: 0x8012C9A0
extern long sglSoundVolume;

// address: 0x8012C9A4
extern long sglSpeechVolume;

// address: 0x8012C9A8
extern int sgnMusicTrack;

// address: 0x8012C996
extern unsigned char gbDupSounds;

// address: 0x8012C9AC
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80129BC0
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012C9C4
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E970C
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012C9CC
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012C9D0
// size: 0x2
extern char _pfindx[2];

// address: 0x8012C9D4
// size: 0x2
extern char _pfindy[2];

// address: 0x8012C9D6
extern unsigned char automapmoved;

// address: 0x8012D660
// size: 0x94
static struct GamePad *_GP0;

// address: 0x8012D664
// size: 0x94
static struct GamePad *_GP1;

// address: 0x8012C9B9
extern unsigned char flyflag;

// address: 0x8012C9BA
static char seen_combo;

// address: 0x8012D668
static unsigned long (*CurrentProc)();

// address: 0x80129D54
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012CA10
extern int NumOfStrings;

// address: 0x8012C9E4
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012C9E8
extern long hndText;

// address: 0x8012C9EC
extern char **TextPtr;

// address: 0x8012C9F0
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012CA20
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012CA24
extern int CharFade;

// address: 0x8012CA28
extern int rotateness;

// address: 0x8012CA2C
extern int spiralling_shape;

// address: 0x8012CA30
extern int down;

// address: 0x800E975C
// size: 0x10
extern char MlTab[16];

// address: 0x800E976C
// size: 0x10
extern char QlTab[16];

// address: 0x800E977C
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012CA4C
extern int MyXoff1;

// address: 0x8012CA50
extern int MyYoff1;

// address: 0x8012CA54
extern int MyXoff2;

// address: 0x8012CA58
extern int MyYoff2;

// address: 0x8012CA68
extern bool iscflag;

// address: 0x8012CA75
static unsigned char sgbFadedIn;

// address: 0x8012CA76
static unsigned char screenbright;

// address: 0x8012CA78
static int faderate;

// address: 0x8012CA7C
static bool fading;

// address: 0x8012CA88
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012CA80
extern int st;

// address: 0x8012CA84
extern int mode;

// address: 0x800E9904
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012CABA
extern char portalindex;

// address: 0x8012CAB4
// size: 0x2
static char WarpDropX[2];

// address: 0x8012CAB8
// size: 0x2
static char WarpDropY[2];

// address: 0x800E991C
// size: 0x78
extern char MyVerString[120];

// address: 0x8012CC2C
extern int Year;

// address: 0x8012CC30
extern int Day;

// address: 0x8012D66C
static unsigned char *tbuff;

// address: 0x800E9994
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012D670
static unsigned char HR1;

// address: 0x8012D671
static unsigned char HR2;

// address: 0x8012D672
static unsigned char HR3;

// address: 0x8012D673
static unsigned char VR1;

// address: 0x8012D674
static unsigned char VR2;

// address: 0x8012D675
static unsigned char VR3;

// address: 0x8012CCA0
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012CCA4
extern int nRoomCnt;

// address: 0x8012CCA8
extern int nSx1;

// address: 0x8012CCAC
extern int nSy1;

// address: 0x8012CCB0
extern int nSx2;

// address: 0x8012CCB4
extern int nSy2;

// address: 0x8012CC58
extern int Area_Min;

// address: 0x8012CC5C
extern int Room_Max;

// address: 0x8012CC60
extern int Room_Min;

// address: 0x8012CC64
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012CC6C
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012CC74
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012CC7C
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012CC84
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012CC88
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012CC8C
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012CC90
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012CC94
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012CC98
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012CC9C
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012D678
static int abyssx;

// address: 0x8012D67C
static unsigned char lavapool;

// address: 0x8012CD40
extern int lockoutcnt;

// address: 0x8012CCC4
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012CCCC
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012CCD4
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012CCDC
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012CCE4
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012CCEC
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012CCF4
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012CCFC
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012CD04
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012CD0C
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012CD14
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012CD1C
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012CD24
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012CD2C
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012CD30
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012CD34
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012CD38
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012CD3C
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012CD44
extern int diabquad1x;

// address: 0x8012CD48
extern int diabquad2x;

// address: 0x8012CD4C
extern int diabquad3x;

// address: 0x8012CD50
extern int diabquad4x;

// address: 0x8012CD54
extern int diabquad1y;

// address: 0x8012CD58
extern int diabquad2y;

// address: 0x8012CD5C
extern int diabquad3y;

// address: 0x8012CD60
extern int diabquad4y;

// address: 0x8012CD64
extern int SP4x1;

// address: 0x8012CD68
extern int SP4y1;

// address: 0x8012CD6C
extern int SP4x2;

// address: 0x8012CD70
extern int SP4y2;

// address: 0x8012CD74
extern int l4holdx;

// address: 0x8012CD78
extern int l4holdy;

// address: 0x8012D680
static unsigned char *lpSetPiece1;

// address: 0x8012D684
static unsigned char *lpSetPiece2;

// address: 0x8012D688
static unsigned char *lpSetPiece3;

// address: 0x8012D68C
static unsigned char *lpSetPiece4;

// address: 0x8012CD88
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012CD90
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E9C94
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E9CA8
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E9CC4
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012CD98
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E9CD8
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012CE8C
static bool DoUiForChooseMonster;

// address: 0x800E9CFC
// size: 0x88
static char *MgToText[34];

// address: 0x800E9D84
// size: 0x24
extern int StoryText[3][3];

// address: 0x800E9DA8
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800EAFA8
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EB5E8
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012CEB0
extern int setpc_x;

// address: 0x8012CEB4
extern int setpc_y;

// address: 0x8012CEB8
extern int setpc_w;

// address: 0x8012CEBC
extern int setpc_h;

// address: 0x8012CEC0
extern unsigned char setloadflag;

// address: 0x8012CEC4
extern unsigned char *pMegaTiles;

// address: 0x800EBC28
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800EC42C
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800ECC30
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800ED434
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800EDC38
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012CEC8
extern int dminx;

// address: 0x8012CECC
extern int dminy;

// address: 0x8012CED0
extern int dmaxx;

// address: 0x8012CED4
extern int dmaxy;

// address: 0x8012CED8
extern int gnDifficulty;

// address: 0x8012CEDC
extern unsigned char currlevel;

// address: 0x8012CEDD
extern unsigned char leveltype;

// address: 0x8012CEDE
extern unsigned char setlevel;

// address: 0x8012CEDF
extern unsigned char setlvlnum;

// address: 0x8012CEE0
extern unsigned char setlvltype;

// address: 0x8012CEE4
extern int ViewX;

// address: 0x8012CEE8
extern int ViewY;

// address: 0x8012CEEC
extern int ViewDX;

// address: 0x8012CEF0
extern int ViewDY;

// address: 0x8012CEF4
extern int ViewBX;

// address: 0x8012CEF8
extern int ViewBY;

// address: 0x800EE43C
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012CEFC
extern int LvlViewX;

// address: 0x8012CF00
extern int LvlViewY;

// address: 0x8012CF04
extern int btmbx;

// address: 0x8012CF08
extern int btmby;

// address: 0x8012CF0C
extern int btmdx;

// address: 0x8012CF10
extern int btmdy;

// address: 0x8012CF14
extern int MicroTileLen;

// address: 0x8012CF18
extern char TransVal;

// address: 0x800EE450
// size: 0x20
extern bool TransList[8];

// address: 0x8012CF1C
extern int themeCount;

// address: 0x800EE470
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x80110730
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x80111294
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80111DF8
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x8011295C
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012CEA8
extern unsigned char *pSetPiece;

// address: 0x8012CEAC
extern int DungSize;

// address: 0x80112B28
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012CF5C
extern int numthemes;

// address: 0x8012CF60
extern int zharlib;

// address: 0x8012CF64
extern unsigned char armorFlag;

// address: 0x8012CF65
extern unsigned char bCrossFlag;

// address: 0x8012CF66
extern unsigned char weaponFlag;

// address: 0x8012CF68
extern int themex;

// address: 0x8012CF6C
extern int themey;

// address: 0x8012CF70
extern int themeVar1;

// address: 0x8012CF74
extern unsigned char bFountainFlag;

// address: 0x8012CF75
extern unsigned char cauldronFlag;

// address: 0x8012CF76
extern unsigned char mFountainFlag;

// address: 0x8012CF77
extern unsigned char pFountainFlag;

// address: 0x8012CF78
extern unsigned char tFountainFlag;

// address: 0x8012CF79
extern unsigned char treasureFlag;

// address: 0x8012CF7C
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80112A08
// size: 0x10
extern int ThemeGood[4];

// address: 0x80112A18
// size: 0x64
extern int trm5x[25];

// address: 0x80112A7C
// size: 0x64
extern int trm5y[25];

// address: 0x80112AE0
// size: 0x24
extern int trm3x[9];

// address: 0x80112B04
// size: 0x24
extern int trm3y[9];

// address: 0x8012D054
extern int nummissiles;

// address: 0x80112D40
// size: 0x1F4
extern int missileactive[125];

// address: 0x80112F34
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012D058
extern unsigned char MissilePreFlag;

// address: 0x80113128
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012D059
extern unsigned char ManashieldFlag;

// address: 0x8012D05A
extern unsigned char ManashieldFlag2;

// address: 0x80112CB8
// size: 0x20
extern int XDirAdd[8];

// address: 0x80112CD8
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012D021
extern unsigned char fadetor;

// address: 0x8012D022
extern unsigned char fadetog;

// address: 0x8012D023
extern unsigned char fadetob;

// address: 0x80112CF8
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80112D08
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x801159D8
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012D0BC
extern long nummonsters;

// address: 0x8011B158
// size: 0x190
extern short monstactive[200];

// address: 0x8011B2E8
// size: 0x190
extern short monstkills[200];

// address: 0x8011B478
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012D0C0
extern long monstimgtot;

// address: 0x8012D0C4
extern char totalmonsters;

// address: 0x8012D0C8
extern int uniquetrans;

// address: 0x8012D690
static unsigned char sgbSaveSoundOn;

// address: 0x8012D08C
// size: 0x8
extern char offset_x[8];

// address: 0x8012D094
// size: 0x8
extern char offset_y[8];

// address: 0x8012D074
// size: 0x8
extern char left[8];

// address: 0x8012D07C
// size: 0x8
extern char right[8];

// address: 0x8012D084
// size: 0x8
extern char opposite[8];

// address: 0x8012D068
extern int nummtypes;

// address: 0x8012D06C
// size: 0x7
extern char animletter[7];

// address: 0x80115838
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012D09C
// size: 0x4
extern char rnd5[4];

// address: 0x8012D0A0
// size: 0x4
extern char rnd10[4];

// address: 0x8012D0A4
// size: 0x4
extern char rnd20[4];

// address: 0x8012D0A8
// size: 0x4
extern char rnd60[4];

// address: 0x80115958
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011B950
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011D390
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011D410
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011D480
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011B738
// size: 0x218
extern int TransPals[134];

// address: 0x8011B638
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012D100
extern unsigned char invflag;

// address: 0x8012D101
extern unsigned char drawsbarflag;

// address: 0x8012D104
extern int InvBackY;

// address: 0x8012D108
extern int InvCursPos;

// address: 0x8011E428
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012D10C
extern int InvBackAY;

// address: 0x8012D110
extern int InvSel;

// address: 0x8012D114
extern int ItemW;

// address: 0x8012D118
extern int ItemH;

// address: 0x8012D11C
extern int ItemNo;

// address: 0x8012D120
// size: 0x8
extern struct RECT BRect;

// address: 0x8012D0E8
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012D0EC
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012D0E4
extern int InvPageNo;

// address: 0x8011DDB0
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011DDD8
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011E020
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011E2C0
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011E374
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012D0F8
static bool InvOn;

// address: 0x8012D0FC
static unsigned long sgdwLastTime;

// address: 0x8012D157
extern unsigned char automapflag;

// address: 0x8011E48C
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011E554
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012D158
extern unsigned char AMLWallFlag;

// address: 0x8012D159
extern unsigned char AMRWallFlag;

// address: 0x8012D15A
extern unsigned char AMLLWallFlag;

// address: 0x8012D15B
extern unsigned char AMLRWallFlag;

// address: 0x8012D15C
extern unsigned char AMDirtFlag;

// address: 0x8012D15D
extern unsigned char AMColumnFlag;

// address: 0x8012D15E
extern unsigned char AMStairFlag;

// address: 0x8012D15F
extern unsigned char AMLDoorFlag;

// address: 0x8012D160
extern unsigned char AMLGrateFlag;

// address: 0x8012D161
extern unsigned char AMLArchFlag;

// address: 0x8012D162
extern unsigned char AMRDoorFlag;

// address: 0x8012D163
extern unsigned char AMRGrateFlag;

// address: 0x8012D164
extern unsigned char AMRArchFlag;

// address: 0x8012D168
extern int AutoMapX;

// address: 0x8012D16C
extern int AutoMapY;

// address: 0x8012D170
extern int AutoMapXOfs;

// address: 0x8012D174
extern int AutoMapYOfs;

// address: 0x8012D178
extern int AMPlayerX;

// address: 0x8012D17C
extern int AMPlayerY;

// address: 0x8012D134
extern int AutoMapScale;

// address: 0x8012D138
extern unsigned char AutoMapPlayerR;

// address: 0x8012D139
extern unsigned char AutoMapPlayerG;

// address: 0x8012D13A
extern unsigned char AutoMapPlayerB;

// address: 0x8012D13B
extern unsigned char AutoMapWallR;

// address: 0x8012D13C
extern unsigned char AutoMapWallG;

// address: 0x8012D13D
extern unsigned char AutoMapWallB;

// address: 0x8012D13E
extern unsigned char AutoMapDoorR;

// address: 0x8012D13F
extern unsigned char AutoMapDoorG;

// address: 0x8012D140
extern unsigned char AutoMapDoorB;

// address: 0x8012D141
extern unsigned char AutoMapColumnR;

// address: 0x8012D142
extern unsigned char AutoMapColumnG;

// address: 0x8012D143
extern unsigned char AutoMapColumnB;

// address: 0x8012D144
extern unsigned char AutoMapArchR;

// address: 0x8012D145
extern unsigned char AutoMapArchG;

// address: 0x8012D146
extern unsigned char AutoMapArchB;

// address: 0x8012D147
extern unsigned char AutoMapStairR;

// address: 0x8012D148
extern unsigned char AutoMapStairG;

// address: 0x8012D149
extern unsigned char AutoMapStairB;

// address: 0x8011E474
// size: 0x18
static int SetLevelName[6];

// address: 0x8012D7EC
extern unsigned long GazTick;

// address: 0x80134128
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A79B4
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012D814
extern void (*PollFunc)();

// address: 0x8012D7F8
extern void (*MsgFunc)();

// address: 0x8012D844
extern void (*ErrorFunc)();

// address: 0x8012D718
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012D71C
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012D720
// size: 0x5C
static struct TASK *T;

// address: 0x8012D724
static unsigned long MemTypeForTasker;

// address: 0x80131958
// size: 0x30
static int SchEnv[12];

// address: 0x8012D728
static unsigned long ExecId;

// address: 0x8012D72C
static unsigned long ExecMask;

// address: 0x8012D730
static int TasksActive;

// address: 0x8012D734
static void (*EpiFunc)();

// address: 0x8012D738
static void (*ProFunc)();

// address: 0x8012D73C
static unsigned long EpiProId;

// address: 0x8012D740
static unsigned long EpiProMask;

// address: 0x8012D744
static void (*DoTasksPrologue)();

// address: 0x8012D748
static void (*DoTasksEpilogue)();

// address: 0x8012D74C
static void (*StackFloodCallback)();

// address: 0x8012D750
static unsigned char ExtraStackProtection;

// address: 0x8012D754
static int ExtraStackSizeLongs;

// address: 0x8012D800
extern void *LastPtr;

// address: 0x800A79EC
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012D758
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80131988
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012D75C
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012D760
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012D764
static int TimeStamp;

// address: 0x8012D768
static unsigned char FullErrorChecking;

// address: 0x8012D76C
static unsigned long LastAttemptedAlloc;

// address: 0x8012D770
static unsigned long LastDeallocedBlock;

// address: 0x8012D774
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012D778
static int NumOfFreeHdrs;

// address: 0x8012D77C
static unsigned long LastTypeAlloced;

// address: 0x8012D780
static void (*AllocFilter)();

// address: 0x800A79F4
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A7A1C
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80132B08
// size: 0x1380
static char buf[4992];

// address: 0x800A7A44
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B7F4
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B810
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B81C
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007B854
// line start: 133
// line end:   207
void AppMain() {
}


// address: 0x8007B8F4
// line start: 215
// line end:   216
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007B920
// line start: 224
// line end:   260
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007BA08
// line start: 274
// line end:   286
void MAIN_MainLoop__Fv() {
}


// address: 0x8007BA50
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007BA84
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007BA90
// line start: 106
// line end:   149
void GPUQ_FlushQ__Fv() {
	// register: 18
	register int f;
	// register: 16
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Img;
	{
		{
			{
				{
					{
						{
							// register: 17
							register void *ImgMem;
							{
								{
									// register: 2
									register unsigned char GalRet;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007BC04
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BCB8
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007BD58
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BDF4
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BE94
// line start: 144
// line end:   181
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	{
		{
			{
				{
					// register: 16
					register int f;
				}
			}
		}
	}
}


// address: 0x8007BFB0
// line start: 188
// line end:   206
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007C08C
// line start: 217
// line end:   239
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007C1B4
// line start: 249
// line end:   250
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C1C0
// line start: 258
// line end:   267
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C1FC
// line start: 280
// line end:   346
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C410
// line start: 370
// line end:   371
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C41C
// line start: 379
// line end:   381
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C458
// line start: 385
// line end:   386
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C464
// line start: 394
// line end:   398
void PrimDrawSycnCallBack() {
}


// address: 0x8007C484
// line start: 408
// line end:   409
void SendDispEnv__Fv() {
}


// address: 0x8007C4A8
// size: 0x18
// line start: 458
// line end:   462
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C4C0
// size: 0x28
// line start: 466
// line end:   470
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C4D8
// size: 0x34
// line start: 474
// line end:   478
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C4F0
// size: 0x24
// line start: 483
// line end:   487
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C508
// size: 0x14
// line start: 491
// line end:   495
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C520
// size: 0xC
// line start: 508
// line end:   512
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C538
// line start: 516
// line end:   545
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C64C
// line start: 551
// line end:   562
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007C6B4
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007C6D4
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007C6FC
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C754
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C760
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C76C
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007C7A8
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C7B8
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007C7C4
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007C7D0
// line start: 252
// line end:   292
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007C940
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007C948
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007C968
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C968(unsigned short tpage) {
}


// address: 0x8007C984
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C984(unsigned short tpage) {
}


// address: 0x8007C990
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007C99C
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007C9A8
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007CAE4
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007CB04
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007CB44
// line start: 271
// line end:   272
void GaryLiddon__Fv() {
}


// address: 0x8007CB4C
// line start: 65
// line end:   112
void ReadPad__Fi(int NoDeb) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 17
	// size: 0x6C
	register struct CPad *Pad0;
	// register: 2
	register int New;
	// register: 3
	register int cmem;
	// register: 4
	register int p1mema;
	// register: 5
	register int p1memb;
	// register: 6
	register int p2mema;
	// register: 7
	register int p2memb;
	// register: 8
	register int diffm;
}


// address: 0x8007CD08
// line start: 117
// line end:   120
void DummyPoll__Fv() {
}


// address: 0x8007CD10
// line start: 123
// line end:   124
void DaveOwens__Fv() {
}


// address: 0x8007CD38
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8007CD60
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007CD88
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007CD94
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CD94(unsigned short tpage) {
}


// address: 0x8007CDB0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CDB0(unsigned short tpage) {
}


// address: 0x8007CDBC
// line start: 474
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007CDC4
// line start: 25
// line end:   26
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007CDCC
// line start: 30
// line end:   32
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007CE00
// line start: 36
// line end:   39
void leighbird__Fv() {
}


// address: 0x8007CE28
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007CE78
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007CECC
// line start: 79
// line end:   102
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007D034
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D098
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D0B8
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007D198
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007D25C
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D2C0
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D39C
// line start: 215
// line end:   245
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x8007D4B0
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D558
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007D5B0
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D608
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007D61C
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007D658
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007D6C0
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007D718
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D75C
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D820
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D8D8
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D9AC
// line start: 169
// line end:   214
bool LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007DBBC
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007DBD4
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007DC00
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007DC7C
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007DCE8
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007DD24
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007DD7C
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DDBC
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DE7C
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DF30
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DFD8
// line start: 173
// line end:   220
bool LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007E1E4
// size: 0x6C
// line start: 116
// line end:   122
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007E224
// line start: 132
// line end:   133
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E26C
// line start: 143
// line end:   204
void Use__7TextDat(struct TextDat *this) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT R;
					// register: 18
					register int DecompSize;
				}
			}
		}
	}
}


// address: 0x8007E460
// line start: 222
// line end:   250
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012D420
	static int TpX;
	// address: 0x8012D424
	static int TpY;
	{
		// register: 16
		register int f;
		{
			// register: 3
			register int Dx;
			// register: 2
			register int Dy;
		}
	}
}


// address: 0x8007E530
// line start: 253
// line end:   277
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007E5E8
// line start: 292
// line end:   305
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007E644
// line start: 316
// line end:   323
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007E6B4
// line start: 328
// line end:   350
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 21
	register long hndRet;
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x8007E7E0
// line start: 360
// line end:   418
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007E8DC
// size: 0x28
// line start: 434
// line end:   571
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 7
			register int W;
			// register: 8
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 17
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 4
					register int TpX;
					// register: 5
					register int TpY;
					// register: 4
					register int U;
					// register: 5
					register int V;
					// register: 3
					register int W;
					// register: 8
					register int H;
					{
						// register: 19
						register unsigned int f;
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007ECE4
// line start: 577
// line end:   634
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 22
	register int H;
	{
		{
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x8
					auto struct RECT R;
					{
						{
							// register: 4
							register unsigned char sw;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007EF50
// line start: 642
// line end:   676
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x8007F0B0
// line start: 681
// line end:   739
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007F1AC
// line start: 743
// line end:   814
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 20
	register int W;
	// register: 22
	register int H;
	// register: 4
	register unsigned char sw;
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD0
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007F408
// line start: 821
// line end:   848
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 7
	register int W;
	// register: 3
	register int H;
}


// address: 0x8007F488
// line start: 853
// line end:   911
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 17
	register int H;
	// register: 16
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD8
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD8
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007F64C
// size: 0x28
// line start: 925
// line end:   944
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F7A0
// size: 0x34
// line start: 950
// line end:   969
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F8F4
// size: 0x28
// line start: 975
// line end:   991
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F9D8
// line start: 996
// line end:   1034
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FB2C
// line start: 1043
// line end:   1073
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	// register: 17
	register int NumOfCreatures;
	{
		{
			// register: 16
			register unsigned char *ThisAddr;
			{
				// register: 17
				register unsigned int f;
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x8007FC6C
// line start: 1083
// line end:   1107
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007FD68
// line start: 1164
// line end:   1174
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FD94
// line start: 1184
// line end:   1219
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FEDC
// size: 0x6C
// line start: 1230
// line end:   1250
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x6C
			register struct TextDat *Dat2Use;
			// register: 20
			// size: 0x4
			register struct CTextFileInfo **Tab;
			{
				// register: 17
				register int f;
			}
		}
	}
}


// address: 0x8007FFFC
// line start: 1260
// line end:   1264
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80080050
// line start: 1268
// line end:   1286
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFE8
				// size: 0x8
				auto struct RECT R;
			}
		}
	}
}


// address: 0x80080118
// line start: 1313
// line end:   1314
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8008016C
// line start: 1318
// line end:   1319
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x800801C4
// line start: 1328
// line end:   1358
void DoDecompRequests__7TextDat(struct TextDat *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x800802E8
// line start: 1396
// line end:   1422
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	// register: 8
	register int NumOfFrames;
	// register: 4
	register int Widest;
	// register: 16
	register int Tallest;
	{
		// register: 7
		register int f;
		{
			// register: 3
			register int w;
			// register: 5
			register int h;
		}
	}
}


// address: 0x800803BC
// size: 0x4
// line start: 1426
// line end:   1428
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8008040C
// line start: 1434
// line end:   1435
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80080434
// line start: 1439
// line end:   1445
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x800804DC
// line start: 1451
// line end:   1479
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto bool Dir2Remap[8];
	// register: 7
	register int f;
	// register: 11
	register int RemapNum;
	{
		{
			{
				{
					// register: 9
					register int OrigNum;
					{
						// register: 6
						register int g;
					}
				}
			}
		}
	}
}


// address: 0x8008059C
// line start: 1483
// line end:   1487
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x800805E0
// size: 0xE
// line start: 1491
// line end:   1499
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80080670
// line start: 1503
// line end:   1510
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800806E0
// line start: 1515
// line end:   1526
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 18
	register int Size;
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
		{
			// register: 2
			register int ThisSize;
		}
	}
}


// address: 0x8008074C
// line start: 1534
// line end:   1536
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008079C
// line start: 1549
// line end:   1550
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800807C4
// line start: 1554
// line end:   1567
long GetFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// register: 16
	register long hnd;
}


// address: 0x80080860
// line start: 1572
// line end:   1581
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x800808C8
// line start: 1613
// line end:   1655
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	// register: 9
	register unsigned char *EndDest;
	// register: 7
	register unsigned long *BigDest;
	// register: 8
	register unsigned long Code;
	// register: 6
	register unsigned long Run;
	// register: 3
	register unsigned long BigCode;
}


// address: 0x8008099C
// size: 0x78
// line start: 1669
// line end:   1670
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x800809D0
// line start: 1674
// line end:   1734
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 17
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFFD8
			// size: 0x8
			auto struct RECT R;
			// register: 17
			// size: 0x8
			register struct PAL *Pal;
			{
				// register: 16
				register int i;
				{
					{
						// register: 10
						register int v;
						{
							// register: 2
							register unsigned short c;
						}
					}
				}
			}
		}
	}
}


// address: 0x80080C70
// line start: 1739
// line end:   1741
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80080C94
// line start: 1745
// line end:   1774
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80080F74
// line start: 1782
// line end:   1790
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80080FEC
// line start: 1794
// line end:   1838
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	// register: 18
	register int left;
	// register: 22
	register int right;
	// register: 17
	register int top;
	// register: 21
	register int bottom;
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x8
			auto struct RECT Pr;
			{
				// register: 16
				register unsigned int f;
			}
		}
	}
}


// address: 0x80081148
// line start: 1876
// line end:   1876
void _GLOBAL__D_DatPool() {
}


// address: 0x800811A0
// line start: 1876
// line end:   1876
void _GLOBAL__I_DatPool() {
}


// address: 0x800811F4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80081270
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x800812EC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80081368
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80081390
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x800813B8
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x800813C4
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x800813D0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80081448
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8008145C
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80081468
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8008147C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80081498
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x800814B4
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800814C0
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800814E8
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081510
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80081524
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80081568
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x800815C0
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800815E4
// line start: 167
// line end:   199
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80081668
// line start: 208
// line end:   218
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8008168C
// line start: 224
// line end:   243
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8008176C
// line start: 260
// line end:   261
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8008177C
// line start: 266
// line end:   293
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFF98
	// size: 0x19
	auto char SearchBuffer[25];
	// register: 17
	register int pos;
	// register: 3
	register int c;
	// register: 16
	register int size;
	// address: 0xFFFFFFB8
	// size: 0x19
	auto char Monkey[25];
	{
		// register: 3
		register int i;
	}
}


// address: 0x800818C8
// line start: 300
// line end:   372
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 30
	register unsigned char *Dest;
	// address: 0xFFFFFFB8
	auto int OrigSize;
	// register: 21
	register unsigned long Pos;
	// address: 0xFFFFFFC0
	// size: 0x14
	auto struct STRHDR *sh;
	// register: 17
	register int ah;
	// address: 0xFFFFFFC8
	auto unsigned char Count;
	{
		// register: 16
		register int SizeToRead;
		// register: 18
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


// address: 0x80081BA4
// line start: 381
// line end:   421
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register long hndText;
	// register: 18
	register unsigned char *Dest;
	// register: 21
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x80081D04
// line start: 107
// line end:   134
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80081DF0
// line start: 144
// line end:   170
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB8
	// size: 0x32
	auto char FileToLoad[50];
	// register: 16
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80081F1C
// line start: 180
// line end:   220
long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB0
	// size: 0x32
	auto char FileToLoad[50];
	// register: 18
	register long MyHnd;
	// register: 19
	register unsigned char *LoadAddr;
	// register: 17
	register int ah;
}


// address: 0x80082090
// line start: 230
// line end:   264
void BL_LoadDirectory__Fv() {
	// register: 18
	register long BL_DirMHandle;
	// register: 16
	register char *AsyncAddr;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 17
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
}


// address: 0x800821B8
// line start: 269
// line end:   336
void BL_LoadStreamDir__Fv() {
	// register: 17
	register long BL_DirMHandle;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 18
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
	// register: 3
	// size: 0x4
	register enum LANG_TYPE Lang;
}


// address: 0x80082498
// size: 0x14
// line start: 346
// line end:   367
struct STRHDR *BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	// register: 18
	// size: 0x14
	register struct STREAM *DirPtr;
	// register: 16
	// size: 0x14
	register struct STRHDR *TFileTab;
	{
		{
			{
				// register: 5
				register int j;
			}
		}
	}
}


// address: 0x80082598
// size: 0x14
// line start: 377
// line end:   421
struct STRHDR *BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	// register: 18
	// size: 0x14
	register struct STRHDR *ptr;
	// register: 21
	register unsigned long NoFiles;
	// register: 20
	register int pos;
	// register: 3
	register int c;
	// address: 0xFFFFFFC0
	// size: 0xE
	auto char fname[14];
	// register: 19
	register int size;
	{
		// register: 3
		register int i;
		{
			// register: 3
			register int i;
			{
				// register: 16
				register int s;
				// register: 3
				register int i;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x80082764
// line start: 431
// line end:   433
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80082788
// line start: 445
// line end:   451
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x800827BC
// line start: 461
// line end:   542
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x800828A4
// line start: 552
// line end:   554
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x800828B0
// line start: 561
// line end:   563
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x800828FC
// line start: 568
// line end:   570
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x8008292C
// line start: 598
// line end:   645
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int Size;
	// register: 16
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80082AA4
// line start: 655
// line end:   691
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082B6C
// size: 0x14
// line start: 701
// line end:   705
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082B98
// line start: 720
// line end:   727
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80082BD0
// line start: 42
// line end:   90
int LZNP_Decode__FPUcT0(unsigned char *in, unsigned char *out) {
	// register: 6
	register int i;
	// register: 3
	register int j;
	// register: 7
	register unsigned int flags;
	// register: 8
	register unsigned char *OriginalOut;
}


// address: 0x80082CA4
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80082DC8
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x80082E78
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x80082EA0
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80082EF4
// line start: 175
// line end:   187
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80082F40
// line start: 198
// line end:   226
int GetPausePad__Fv() {
	// register: 18
	register bool Done;
	// register: 19
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x8008302C
// line start: 238
// line end:   243
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80083058
// line start: 255
// line end:   320
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
					{
						{
							{
								{
									{
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800832D8
// line start: 331
// line end:   432
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 16
	register int lvlchange;
	// address: 0xFFFFFFD0
	auto int newx;
	// register: 30
	register int newy;
	{
		// register: 17
		// size: 0x6C
		register struct CPad *P;
		{
			{
				{
					// register: 5
					register int y;
					{
						{
							// register: 4
							register int x;
						}
					}
				}
			}
		}
	}
}


// address: 0x800835F0
// line start: 443
// line end:   481
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register int RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80083710
// line start: 491
// line end:   522
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80083814
// line start: 546
// line end:   549
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083824
// line start: 559
// line end:   560
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083830
// line start: 583
// line end:   592
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x8008397C
// line start: 597
// line end:   598
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083984
// line start: 601
// line end:   616
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083A94
// line start: 623
// line end:   624
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083A9C
// line start: 627
// line end:   628
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083AA4
// line start: 631
// line end:   644
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083BB4
// line start: 651
// line end:   652
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083BBC
// line start: 655
// line end:   656
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083BC4
// line start: 659
// line end:   672
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083CF0
// line start: 689
// line end:   690
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083CF8
// line start: 693
// line end:   693
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80083D20
// line start: 698
// line end:   698
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80083D48
// line start: 698
// line end:   698
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80083D70
// size: 0xC
// line start: 112
// line end:   112
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083DB4
// line start: 83
// line end:   83
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80083DE8
// size: 0x8
// line start: 82
// line end:   82
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80083DFC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80083E1C
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083E24
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083E2C
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80083E54
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80083EB0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80083EB0(struct CPad *this) {
}


// address: 0x80083ED8
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80083F00
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80083F00(struct CPad *this) {
}


// address: 0x80083F0C
// line start: 111
// line end:   141
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80084024
// line start: 152
// line end:   201
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x800841EC
// size: 0x6C
// line start: 215
// line end:   226
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80084288
// line start: 238
// line end:   269
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800843C0
// line start: 273
// line end:   305
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x8008451C
// line start: 315
// line end:   339
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80084640
// line start: 343
// line end:   343
void _GLOBAL__I_Pad0() {
}


// address: 0x80084678
// line start: 96
// line end:   96
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80084680
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80084680(struct CPad *this) {
}


// address: 0x8008468C
// line start: 88
// line end:   88
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80084694
// line start: 81
// line end:   81
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x8008469C
// size: 0x6C
// line start: 79
// line end:   79
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x800846D0
// line start: 128
// line end:   132
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800846F4
// line start: 89
// line end:   94
void Set__7FontTab(struct FontTab *this) {
	{
		// register: 16
		register int Loop;
		{
			// register: 16
			register int f;
			// register: 16
			register int Loop;
		}
	}
}


// address: 0x80084790
// line start: 360
// line end:   372
void InitPrinty__Fv() {
}


// address: 0x80084830
// line start: 377
// line end:   378
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084838
// line start: 385
// line end:   445
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800849B8
// line start: 450
// line end:   631
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF68
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF70
	auto int WindowW;
	// address: 0xFFFFFF78
	auto int WindowH;
	// address: 0xFFFFFF80
	auto int WindowX;
	// address: 0xFFFFFF88
	auto int WindowY;
	// address: 0xFFFFFF90
	auto bool JapLang;
	// address: 0xFFFFFF98
	auto unsigned short col;
	{
		{
			// register: 5
			register char c;
			{
				{
					{
						{
							// register: 6
							register unsigned char h;
							{
								{
									// register: 6
									register unsigned char h;
									{
										{
											// register: 6
											register unsigned char h;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80084FDC
// line start: 636
// line end:   652
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80085090
// line start: 660
// line end:   662
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800850F4
// line start: 668
// line end:   671
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80085100
// line start: 91
// line end:   91
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80085124
// line start: 88
// line end:   88
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80085144
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8008515C
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800851B4
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x800851E8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800851E8(struct TextDat *this, int FrNum) {
}


// address: 0x80085204
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x8008523C
// size: 0x34
// line start: 204
// line end:   385
struct POLY_GT4 *DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	// address: 0xFFFFFF78
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 17
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// address: 0xFFFFFF88
	auto int x0;
	// address: 0xFFFFFF90
	auto int x1;
	// address: 0xFFFFFF98
	auto int x2;
	// address: 0xFFFFFFA0
	auto int x3;
	// address: 0xFFFFFFA8
	auto int y0;
	// address: 0xFFFFFFB0
	auto int y1;
	// address: 0xFFFFFFB8
	auto int y2;
	// address: 0xFFFFFFC0
	auto int y3;
	// register: 18
	register int u0;
	// register: 19
	register int u1;
	// register: 23
	register int u2;
	// register: 30
	register int u3;
	// register: 21
	register int v0;
	// register: 20
	register int v1;
	// register: 22
	register int v2;
	// address: 0xFFFFFFC8
	auto int v3;
	// register: 6
	register int U;
	// register: 5
	register int V;
	// register: 4
	register int W;
	// register: 7
	register int H;
	{
		{
			{
				{
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					{
						{
							{
								// register: 3
								// size: 0x8
								register struct PAL *Pal;
								// register: 16
								register short G1;
								// register: 18
								register short G2;
								// register: 19
								register short G3;
								// register: 20
								register short G4;
								{
									{
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80085BB4
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80085CEC
// line start: 406
// line end:   459
void DropShadows__Fiiii(int x, int y, int w, int h) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
	// register: 19
	register unsigned char dbr;
	// register: 17
	register unsigned char dbg;
	// register: 16
	register unsigned char dbb;
}


// address: 0x80085F90
// line start: 474
// line end:   492
void InitDialog__Fv() {
	{
		// register: 16
		register int i;
		{
			// register: 18
			register int y;
			// register: 16
			register int i;
			{
				// register: 16
				register unsigned char bits;
				{
					// register: 17
					register int x;
					{
						// register: 18
						register int i;
						// register: 18
						register int y;
					}
				}
			}
		}
	}
}


// address: 0x800860C8
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80086320
// line start: 565
// line end:   989
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	// register: 30
	register int X;
	// register: 23
	register int Y;
	// address: 0xFFFFFF70
	auto int W;
	// address: 0xFFFFFF78
	auto int H;
	// register: 18
	register int Bx;
	// register: 20
	register int By;
	// register: 19
	register int Xr;
	// register: 22
	register int Yr;
	// register: 17
	register int Xl;
	// register: 21
	register int Yl;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct RECT ClipRect;
	// address: 0xFFFFFF90
	auto char trans;
	{
		{
			{
				{
					{
						// register: 16
						register int c;
						{
							// register: 2
							// size: 0xC
							register struct FRAME_HDR *Fr;
							// register: 3
							register int fw;
							// register: 5
							register int fh;
						}
					}
				}
			}
		}
	}
}


// address: 0x800874E0
// line start: 993
// line end:   1081
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	// register: 20
	register int X;
	// register: 23
	register int Y;
	// register: 19
	register int W;
	// register: 17
	register int Bx;
	// register: 16
	register int Xr;
	// register: 16
	register int Xl;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 21
	register char trans;
}


// address: 0x800876F8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800876F8(struct TextDat *this, int PalNum) {
}


// address: 0x80087714
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087714(struct TextDat *this, int FrNum) {
}


// address: 0x80087730
// line start: 67
// line end:   109
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087880
// line start: 114
// line end:   119
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x8008791C
// line start: 226
// line end:   232
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008795C
// line start: 237
// line end:   266
void CycleSelCols__Fv() {
}


// address: 0x80087B14
// line start: 274
// line end:   282
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80087B88
// line start: 291
// line end:   297
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80087BDC
// size: 0xE0
// line start: 306
// line end:   360
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80087D30
// line start: 370
// line end:   372
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80087D68
// line start: 381
// line end:   392
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80087E30
// line start: 402
// line end:   414
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80087EB8
// line start: 424
// line end:   431
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087F20
// line start: 440
// line end:   447
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087F88
// line start: 457
// line end:   462
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80087FE4
// line start: 472
// line end:   478
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80088034
// line start: 486
// line end:   521
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80088380
// line start: 532
// line end:   542
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008842C
// line start: 553
// line end:   564
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80088500
// line start: 574
// line end:   585
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 17
		register unsigned int f;
		{
			// address: 0xFFFFFFB8
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x80088608
// line start: 595
// line end:   653
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 3
	register int W;
	// register: 2
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 4
	register int zU;
	// register: 7
	register int zV;
	// register: 6
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x80088744
// size: 0xC
// line start: 663
// line end:   665
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x800887BC
// line start: 676
// line end:   677
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x800887E4
// line start: 687
// line end:   690
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008880C
// line start: 700
// line end:   702
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80088824
// line start: 745
// line end:   1229
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF08
	auto int XPos;
	// address: 0xFFFFFF10
	auto int YPos;
	// address: 0xFFFFFF18
	auto int xx;
	// address: 0xFFFFFF20
	auto int block_trans;
	// address: 0xFFFFFF28
	auto unsigned short nlval1;
	// address: 0xFFFFFF30
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF38
	auto int CLeft;
	// address: 0xFFFFFF40
	auto int CRight;
	// address: 0xFFFFFF48
	auto int CTop;
	// address: 0xFFFFFF50
	auto int CBottom;
	{
		// address: 0xFFFFFF58
		auto int ThisY;
		// address: 0xFFFFFF60
		auto int OtPos;
		// address: 0xFFFFFF68
		auto int ThisXPos;
		// register: 8
		register int ThisYPos;
		// address: 0xFFFFFF70
		auto int Height;
		{
			// register: 23
			// size: 0x8
			register struct CPart *Parts;
			// register: 5
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 16
			register int BlockNum;
			// address: 0xFFFFFF78
			auto bool Hi;
			// register: 6
			register int bx;
			// register: 7
			register int by;
			{
				{
					{
						{
							{
								{
									{
										{
											{
												// register: 11
												register int MyOt;
												// register: 16
												// size: 0x8
												register struct RECT *BlockR;
												// register: 4
												register int clipx;
												// register: 3
												register int clipy;
												{
													{
														// register: 13
														register int NumOfParts;
														{
															// register: 12
															register int f;
															{
																// register: 18
																register int X;
																// register: 16
																register int Y;
																// register: 19
																register int W;
																// register: 20
																register int H;
																// address: 0xFFFFFEF0
																// size: 0x34
																auto struct POLY_GT4 *DestGt4;
																{
																	{
																		// register: 17
																		// size: 0x10
																		register struct LittleGt4 *ThisGt4;
																		{
																			{
																				// address: 0xFFFFFF80
																				auto int MyOt;
																				// register: 16
																				// size: 0x8
																				register struct RECT *BlockR;
																				// register: 4
																				register int clipx;
																				// register: 3
																				register int clipy;
																				{
																					{
																						// register: 10
																						register int NumOfParts;
																						{
																							// register: 22
																							register int f;
																							{
																								// register: 18
																								register int X;
																								// register: 17
																								register int Y;
																								// register: 19
																								register int W;
																								// register: 20
																								register int H;
																								// address: 0xFFFFFEF4
																								// size: 0x34
																								auto struct POLY_GT4 *DestGt4;
																								{
																									{
																										// register: 16
																										// size: 0x10
																										register struct LittleGt4 *ThisGt4;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80089D48
// line start: 1241
// line end:   1264
void PrintGameSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x80089EB8
// line start: 1274
// line end:   1650
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFA0
	auto int nMonster;
	// register: 21
	register int bItem;
	// register: 2
	register int bObject;
	// address: 0xFFFFFFA8
	auto int bFlags;
	// address: 0xFFFFFFB0
	auto int vFlags;
	// address: 0xFFFFFFB8
	auto int bDead;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			// size: 0x6C
			register struct TextDat *ObjDat;
			{
				{
					// register: 18
					register int ObjIndex;
					// register: 17
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register int LoadIndex;
					// register: 3
					register int TexDat;
					{
						{
							// register: 5
							register int Col;
							{
								{
									// register: 16
									// size: 0x98
									register struct ItemStruct *pItem;
									{
										{
											// register: 23
											// size: 0xC
											register struct FRAME_HDR *Fr;
											// register: 18
											register int W;
											// register: 19
											register int H;
											// register: 4
											register short height;
											{
												{
													// register: 2
													register int it;
													{
														// register: 5
														register int Col;
														{
															{
																// register: 2
																register int gnMI;
																{
																	{
																		// register: 5
																		register int ScrXOff;
																		// register: 6
																		register int ScrYOff;
																		{
																			{
																				{
																					{
																						// register: 18
																						// size: 0x70
																						register struct MonsterStruct *MyMonst;
																						// register: 21
																						// size: 0x6C
																						register struct TextDat *CMonstGraphics;
																						// address: 0xFFFFFFC0
																						auto int mi;
																						{
																							{
																								// register: 16
																								register int Frame;
																								// register: 19
																								register int Action;
																								// register: 20
																								register int Dir;
																								// register: 16
																								register int PhysFrame;
																								// register: 17
																								register int Creature;
																								// register: 30
																								register int ScrXOff;
																								// register: 23
																								register int ScrYOff;
																								{
																									{
																										// register: 2
																										register char transfile;
																										// register: 5
																										register int Col;
																										{
																											{
																												// register: 2
																												register int MG_No;
																												// register: 5
																												register int SPal;
																												{
																													{
																														// register: 18
																														// size: 0x1C
																														register struct CMonster *MyMonst;
																														// register: 2
																														register int Frame;
																														// register: 16
																														register int PhysFrame;
																														// register: 17
																														register int Creature;
																														// register: 2
																														register char transfile;
																														{
																															{
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008AC14
// line start: 1659
// line end:   1837
void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFC8
	auto int Monster;
	// register: 20
	register int bItem;
	// address: 0xFFFFFFD0
	auto int bFlags;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 18
			// size: 0x98
			register struct ItemStruct *pItem;
			{
				{
					// register: 22
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 17
					register int W;
					// register: 19
					register int H;
					// register: 4
					register short height;
					{
						{
							// register: 2
							register int it;
							{
								// register: 5
								register int Col;
								{
									{
										// register: 2
										register int gnMI;
										{
											{
												// register: 5
												register int ScrXOff;
												// register: 6
												register int ScrYOff;
												{
													{
														// register: 20
														register int Creature;
														// register: 18
														register int mi;
														// address: 0xFFFFFFB0
														// size: 0x28
														auto struct POLY_FT4 *Ft4;
														// register: 17
														// size: 0x6C
														register struct TextDat *ThisData;
														// register: 16
														register int PhysFrame;
														// register: 19
														register int GameFrame;
														// register: 16
														register int Dir;
														{
															{
																// register: 5
																register int Col;
																{
																	{
																		// register: 16
																		// size: 0x28
																		register struct POLY_FT4 *ShadFt4;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008B340
// line start: 1845
// line end:   1865
void PrintSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x8008B4B0
// line start: 1875
// line end:   1876
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B4C4
// line start: 1886
// line end:   1887
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B4D8
// line start: 1897
// line end:   1899
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B59C
// line start: 1909
// line end:   1917
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 7
	register int XDiff;
	// register: 4
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008B61C
// line start: 1927
// line end:   1937
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008B6BC
// line start: 1948
// line end:   1959
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008B790
// line start: 2016
// line end:   2043
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008B810
// line start: 2055
// line end:   2056
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B818
// line start: 2066
// line end:   2067
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B82C
// size: 0xE0
// line start: 2103
// line end:   2110
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008B838
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B838(struct POLY_FT4 **Prim) {
}


// address: 0x8008B8B4
// line start: 100
// line end:   108
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B8FC
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008B938
// line start: 100
// line end:   108
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B980
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B980(struct POLY_GT4 **Prim) {
}


// address: 0x8008B9FC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008BA78
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008BAA0
// line start: 166
// line end:   168
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008BABC
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BAE4
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BB0C
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BB30
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BB54
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BB7C
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BB88
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008BC20
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008BCB0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008BCE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008BCE8(struct TextDat *this, int Creature) {
}


// address: 0x8008BD60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008BD60(struct TextDat *this) {
}


// address: 0x8008BD74
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008BD74(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008BD80
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008BD80(struct TextDat *this, int PalNum) {
}


// address: 0x8008BD9C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008BD9C(struct TextDat *this, int FrNum) {
}


// address: 0x8008BDB8
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008BDE4
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008BE0C
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008BE34
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008BE5C
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008BE84
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008BEB0
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008BF08
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008BFCC
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008C03C
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008C048
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008C09C
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008C20C
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008C218
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008C220
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008C228
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008C30C
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008C364
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008C3C0
// line start: 167
// line end:   173
void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this, struct CBlocks *Bg, struct PlayerStruct *Plr) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 7
	register int WorldY;
}


// address: 0x8008C50C
// line start: 178
// line end:   244
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 17
	register int NWorldX;
	// register: 16
	register int NWorldY;
	// register: 3
	register int pdir;
	// register: 4
	register int wtime;
}


// address: 0x8008C938
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008C9B8
// line start: 282
// line end:   415
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// address: 0xFFFFFFD0
	auto int ScrXOff;
	// register: 30
	register int ScrYOff;
	// register: 16
	register int Action;
	// register: 23
	register int WorldX;
	// register: 22
	register int WorldY;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int Frame;
			{
				{
					// register: 2
					register int FrmNum;
					// address: 0xFFFFFFC0
					// size: 0x8
					auto struct RECT R;
					// register: 17
					register int pOtPos;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					{
						{
							{
								{
									{
										// register: 20
										register int Frame;
										{
											{
												// register: 19
												register int FrmNum;
												// address: 0xFFFFFFC0
												// size: 0x8
												auto struct RECT R;
												// register: 17
												register int pOtPos;
												// register: 16
												// size: 0x28
												register struct POLY_FT4 *ShadFt4;
												{
													{
														// register: 3
														register int SpellFr;
														{
															{
																// register: 17
																register int zX;
																// register: 16
																register int zY;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008CEAC
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008CF28
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008CFA4
// line start: 531
// line end:   532
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CFAC
// line start: 541
// line end:   542
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CFB4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CFB4(struct POLY_FT4 **Prim) {
}


// address: 0x8008D030
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D030(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D06C
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008D06C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008D094
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008D0A8
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008D0C0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D0C0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D0F8
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008D11C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D11C(struct TextDat *this, int Creature) {
}


// address: 0x8008D194
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D194(struct TextDat *this) {
}


// address: 0x8008D1A8
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008D1A8(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008D1B4
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008D1F4
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008D200
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008D210
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008D21C
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008D24C
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008D270
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008D294
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008D2C4
// line start: 134
// line end:   174
void PROF_Draw__FPUl(unsigned long *Ot) {
	{
		{
			// register: 2
			// size: 0x18
			register struct POLY_F4 *F4;
			// register: 22
			register int XCent;
			{
				// register: 23
				register int f;
				{
					// register: 2
					// size: 0x14
					register struct POLY_F3 *F3;
				}
			}
		}
	}
}


// address: 0x8008D4B8
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008D4D8
// line start: 181
// line end:   219
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D598
// line start: 230
// line end:   267
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D648
// line start: 275
// line end:   282
void GoBackLevel__Fv() {
}


// address: 0x8008D6C0
// line start: 286
// line end:   290
void GoWarpLevel__Fv() {
}


// address: 0x8008D6F8
// line start: 296
// line end:   302
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D794
// line start: 306
// line end:   321
void GoLoadGame__Fv() {
}


// address: 0x8008D81C
// line start: 325
// line end:   331
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D8B8
// line start: 335
// line end:   346
void GoNewLevel__Fv() {
}


// address: 0x8008D90C
// line start: 353
// line end:   357
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D9A4
// line start: 364
// line end:   367
void GoForwardLevel__Fv() {
}


// address: 0x8008D9FC
// line start: 371
// line end:   375
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DA94
// line start: 383
// line end:   388
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DAE4
// line start: 392
// line end:   396
void PostNewGame__Fv() {
}


// address: 0x8008DB1C
// line start: 405
// line end:   420
void LevelToLevelInit__Fv() {
}


// address: 0x8008DBCC
// line start: 205
// line end:   219
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008DC10
// size: 0x10
// line start: 227
// line end:   231
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008DC68
// line start: 242
// line end:   339
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 22
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 23
	register int BarY;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x8008E0E8
// line start: 347
// line end:   415
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 21
	register int Loop;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 22
	register int Bx;
	// register: 23
	register int By;
}


// address: 0x8008E56C
// line start: 422
// line end:   454
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 2
	register int Anim;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x8008E70C
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E758
// line start: 491
// line end:   554
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008EB14
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008EC08
// line start: 583
// line end:   601
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008ED0C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008ED0C(struct TextDat *this, int PalNum) {
}


// address: 0x8008ED28
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008ED28(struct TextDat *this, int FrNum) {
}


// address: 0x8008ED44
// line start: 151
// line end:   164
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008EDFC
// line start: 170
// line end:   172
void InitCDWaitIcon__Fv() {
}


// address: 0x8008EE30
// line start: 182
// line end:   199
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008EE44
// line start: 395
// line end:   418
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EE8C
// line start: 428
// line end:   438
void STR_AllocBuffer__Fv() {
	{
		{
			{
				// register: 3
				register int i;
			}
		}
	}
}


// address: 0x8008EEE0
// line start: 444
// line end:   486
void STR_Init__Fv() {
	{
		{
			// register: 3
			register long vm;
			// register: 4
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
			}
		}
	}
}


// address: 0x8008F000
// size: 0x80
// line start: 497
// line end:   555
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008F138
// size: 0x80
// line start: 565
// line end:   625
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F274
// line start: 635
// line end:   640
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F2CC
// line start: 665
// line end:   696
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F3D8
// line start: 706
// line end:   710
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F428
// line start: 720
// line end:   724
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F478
// line start: 734
// line end:   752
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F4E4
// line start: 761
// line end:   803
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F5F0
// line start: 812
// line end:   881
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F79C
// line start: 891
// line end:   910
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008F864
// line start: 921
// line end:   998
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008FA40
// line start: 1010
// line end:   1135
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 19
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 18
	register int frame;
	// register: 20
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008FD40
// line start: 1148
// line end:   1319
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 18
	register char Done;
	// register: 17
	register int latency;
	// register: 19
	register int frame;
	// register: 22
	register int framediff;
	// register: 20
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x80090174
// line start: 1333
// line end:   1368
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// register: 16
			// size: 0x5C
			register struct TASK *T2;
		}
	}
}


// address: 0x8009027C
// line start: 141
// line end:   178
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8009034C
// line start: 191
// line end:   204
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x800903B8
// line start: 214
// line end:   224
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x80090430
// line start: 233
// line end:   246
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012D488
	static int DestAddr;
}


// address: 0x800904A8
// line start: 251
// line end:   290
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x800905DC
// line start: 356
// line end:   361
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090630
// line start: 385
// line end:   387
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80090654
// line start: 397
// line end:   402
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800906B8
// line start: 412
// line end:   477
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


// address: 0x80090874
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80090888
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8009089C
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090978
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090A18
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090A24
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090A50
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80090B70
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x80090BA4
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80090C34
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090D10
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090D90
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80090E30
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090EC4
// line start: 327
// line end:   344
void UpdatePals__13PalCollection(struct PalCollection *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


// address: 0x80090F38
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x80090F60
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090F68
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090FA4
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80091008
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091060
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800910B8
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x800910CC
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x800910F8
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80091100
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80091108
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80091114
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009114C
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091158
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091178
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800911C4
// line start: 117
// line end:   118
void stub__FPcPv_addr_800911C4(char *e, void *argptr) {
}


// address: 0x800911CC
// line start: 121
// line end:   123
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80091200
// line start: 127
// line end:   135
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091288
// line start: 140
// line end:   160
void SetAmbientLight__Fv() {
}


// address: 0x8009130C
// line start: 177
// line end:   219
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80091518
// line start: 223
// line end:   225
void TonysDummyPoll__Fv() {
}


// address: 0x8009153C
// line start: 229
// line end:   236
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009159C
// line start: 240
// line end:   247
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800915FC
// line start: 259
// line end:   270
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091670
// line start: 275
// line end:   283
void start_demo__Fv() {
}


// address: 0x8009170C
// line start: 287
// line end:   288
void SetQuest__Fv() {
}


// address: 0x80091734
// line start: 292
// line end:   293
int CurrCheatStr__Fv() {
}


// address: 0x80091754
// line start: 297
// line end:   299
void tony__Fv() {
}


// address: 0x8009178C
// line start: 224
// line end:   225
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091798
// line start: 235
// line end:   236
int GLUE_GetMonsterList__Fv() {
}


// address: 0x800917A4
// line start: 246
// line end:   251
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800917F8
// line start: 261
// line end:   266
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009184C
// line start: 276
// line end:   283
void GLUE_PreTown__Fv() {
}


// address: 0x800918B0
// line start: 292
// line end:   298
void GLUE_PreDun__Fv() {
}


// address: 0x800918FC
// line start: 318
// line end:   319
bool GLUE_Finished__Fv() {
}


// address: 0x80091908
// line start: 329
// line end:   330
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091914
// line start: 340
// line end:   352
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091998
// line start: 361
// line end:   365
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800919A8
// line start: 373
// line end:   377
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800919B8
// line start: 385
// line end:   389
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800919C8
// line start: 399
// line end:   419
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091AA0
// line start: 430
// line end:   612
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 19
	register int ObjId;
	// register: 20
	register int List;
	// address: 0xFFFFFDD0
	// size: 0xE0
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEB0
	// size: 0x84
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF38
	// size: 0x84
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x80091FBC
// size: 0xC
// line start: 622
// line end:   632
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80092054
// size: 0xC
// line start: 637
// line end:   643
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x800920B0
// size: 0xC
// line start: 647
// line end:   652
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800920E0
// line start: 656
// line end:   668
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80092140
// line start: 680
// line end:   689
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092194
// size: 0x10
// line start: 702
// line end:   709
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092240
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009224C
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092254
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092268
// line start: 166
// line end:   181
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80092340
// line start: 185
// line end:   195
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x800923D0
// line start: 199
// line end:   216
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092448
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80092480
// line start: 260
// line end:   275
bool checkvalid__Fv() {
	// register: 6
	register int start;
	// register: 5
	register int end;
	{
		// register: 3
		register int i;
	}
}


// address: 0x800924E4
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8009254C
// line start: 300
// line end:   318
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80092604
// line start: 322
// line end:   334
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092644
// line start: 338
// line end:   351
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092684
// line start: 355
// line end:   399
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 18
	register int p;
}


// address: 0x800927D8
// line start: 403
// line end:   410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092820
// line start: 417
// line end:   566
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80092CB8
// line start: 573
// line end:   688
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 18
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 23
	register unsigned char b;
	// register: 19
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 22
			register int x2;
			// register: 5
			register int nlen;
		}
	}
}


// address: 0x800931F4
// line start: 691
// line end:   766
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			// register: 17
			register int lena;
			// register: 2
			register int len;
			{
				{
					// register: 19
					register int oldDot;
					// register: 18
					register int OldPrintOT;
				}
			}
		}
	}
}


// address: 0x80093694
// line start: 766
// line end:   766
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800936BC
// line start: 766
// line end:   766
void _GLOBAL__I_ctrlflag() {
}


// address: 0x800936E4
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009370C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009370C(struct CPad *this) {
}


// address: 0x80093734
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093734(struct CPad *this) {
}


// address: 0x8009375C
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80093764
// line start: 85
// line end:   85
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009376C
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009376C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009378C
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009378C(struct Dialog *this, int Type) {
}


// address: 0x80093794
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800937A0
// line start: 78
// line end:   78
void ___6Dialog_addr_800937A0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800937C8
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_800937C8(struct Dialog *this) {
}


// address: 0x80093824
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093870
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x800939B0
// line start: 233
// line end:   261
void color_cycle__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// address: 0xFFFFFF78
	// size: 0x40
	auto unsigned long VRAMPal[16];
	// address: 0xFFFFFFB8
	// size: 0x40
	auto unsigned long CLUTPal[16];
	{
		{
			{
				{
					// register: 6
					register int i;
					{
						// register: 4
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80093AF4
// line start: 77
// line end:   82
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80093B2C
// line start: 87
// line end:   141
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
	// register: 17
	register int x;
	// register: 7
	register int y;
	// register: 16
	register int p;
	// register: 18
	register int *yp;
	// register: 20
	register int *frm;
	// register: 19
	register int *xp;
	// register: 22
	register char *s;
	{
		{
			{
				// register: 21
				register int i;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80093ED0
// line start: 147
// line end:   150
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80093F24
// line start: 87
// line end:   136
bool TryCreaturePrint__Fiiiiiii(int nMonster, int blockr, int blockg, int blockb, int OtPos, int ScrX, int ScrY) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 18
			// size: 0x70
			register struct MonsterStruct *MyMonst;
			// register: 19
			// size: 0x6C
			register struct TextDat *CMonstGraphics;
			// register: 2
			register int Frame;
			// register: 17
			register int Action;
			// register: 16
			register int Dir;
			// register: 16
			register int PhysFrame;
			// register: 21
			register int ScrXOff;
			// register: 20
			register int ScrYOff;
		}
	}
}


// address: 0x80094188
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80094360
// line start: 188
// line end:   217
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800943EC
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800943EC(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094428
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80094428(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80094450
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094450(struct POLY_FT4 **Prim) {
}


// address: 0x800944CC
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800944CC(struct TextDat *this, int Creature) {
}


// address: 0x800944F0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800944F0(struct TextDat *this, int Creature) {
}


// address: 0x80094568
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094568(struct TextDat *this) {
}


// address: 0x8009457C
// line start: 90
// line end:   91
void DaveLDummyPoll__Fv() {
}


// address: 0x80094584
// line start: 94
// line end:   96
void DaveL__Fv() {
}


// address: 0x800945AC
// line start: 107
// line end:   167
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 3
	register unsigned char zV0;
	// register: 2
	register unsigned char zV2;
	// register: 2
	register unsigned char zH;
	// register: 22
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 19
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x8012C0DC
	static int count;
	// register: 21
	register int n;
	// register: 16
	register int xoffset;
	// register: 4
	register int yoffset;
	// register: 18
	register short zY;
}


// address: 0x80094898
// line start: 171
// line end:   202
void mteleportfx__Fv() {
	// register: 20
	register int plr;
	// register: 16
	register int br;
	{
		{
			{
				{
					// register: 17
					register int OtPos;
				}
			}
		}
	}
}


// address: 0x80094B98
// line start: 207
// line end:   221
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x80094C70
// line start: 224
// line end:   259
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	// register: 5
	register int zU;
	// register: 7
	register int zV;
	// register: 3
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x80094CF8
// line start: 265
// line end:   296
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 23
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 16
	register unsigned char SpR;
	// register: 17
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFD0
	auto int f;
}


// address: 0x80094EE8
// line start: 301
// line end:   314
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	// address: 0xFFFFFFD0
	// size: 0x18
	auto struct POLY_F4 *F4;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
}


// address: 0x8009501C
// line start: 319
// line end:   340
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	// address: 0xFFFFFFC0
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 30
	register unsigned char SpR0;
	// register: 23
	register unsigned char SpG0;
	// register: 18
	register unsigned char SpB0;
	// address: 0xFFFFFFC8
	auto unsigned char SpR1;
	// address: 0xFFFFFFD0
	auto unsigned char SpG1;
	// register: 22
	register unsigned char SpB1;
}


// address: 0x800951EC
// line start: 345
// line end:   371
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x8009539C
// line start: 375
// line end:   388
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80095490
// line start: 393
// line end:   395
void doparticlejump__Fv() {
}


// address: 0x800954D0
// line start: 399
// line end:   418
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80095638
// line start: 423
// line end:   505
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct TextDat *Dat;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 30
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 22
	register unsigned char SpB;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 3
	register int br;
	// register: 16
	register int w;
	// register: 19
	register int h;
	// register: 20
	register int f;
	// address: 0xFFFFFF98
	auto int c;
	// address: 0xFFFFFFA0
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA8
	auto int xf;
	// address: 0xFFFFFFB0
	auto int yf;
	// address: 0xFFFFFFB8
	auto int dxf;
	// address: 0xFFFFFFC0
	auto int dyf;
	// register: 5
	register int dxabs;
	// register: 4
	register int dyabs;
	// register: 4
	register int divisor;
	// register: 8
	register int *partexecnum;
}


// address: 0x80095A50
// line start: 510
// line end:   527
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095B10
// line start: 531
// line end:   580
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFF70
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 17
	register unsigned char SpB;
	// register: 16
	register int w;
	// register: 21
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// address: 0xFFFFFF98
	auto int f;
	// address: 0xFFFFFFA0
	auto int n;
	// register: 17
	register int randu;
	// register: 20
	register int randl;
	// address: 0xFFFFFFA8
	auto unsigned char Rmask;
	// address: 0xFFFFFFB0
	auto unsigned char Gmask;
	// address: 0xFFFFFFB8
	auto unsigned char Bmask;
	// address: 0xFFFFFE70
	// size: 0x100
	auto int rand[64];
}


// address: 0x80095E04
// line start: 585
// line end:   600
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x8009602C
// line start: 605
// line end:   620
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800960C8
// line start: 625
// line end:   642
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x800961EC
// line start: 646
// line end:   661
void healFX__Fv() {
	// register: 17
	register int plr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80096328
// line start: 666
// line end:   668
void HealStart__Fi(int plr) {
}


// address: 0x8009635C
// line start: 672
// line end:   675
void HealotherStart__Fi(int plr) {
}


// address: 0x80096394
// line start: 679
// line end:   682
void TeleStart__Fi(int plr) {
}


// address: 0x800963F0
// line start: 687
// line end:   689
void PhaseStart__Fi(int plr) {
}


// address: 0x80096424
// line start: 694
// line end:   696
void PhaseEnd__Fi(int plr) {
}


// address: 0x80096450
// line start: 702
// line end:   725
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0xE0
	register struct CBlocks *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x8009662C
// line start: 730
// line end:   733
void ApocaStart__Fi(int plr) {
}


// address: 0x80096684
// line start: 738
// line end:   756
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096720
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x8009679C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096818
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096818(struct POLY_FT4 **Prim) {
}


// address: 0x80096894
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800968E4
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800968F0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800968F0(struct TextDat *this, int FrNum) {
}


// address: 0x8009690C
// line start: 90
// line end:   117
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 20
	register char r;
	// register: 18
	register char b;
	{
		// register: 6
		register int ni;
		{
			// register: 30
			register int i;
			// register: 6
			register int ni;
		}
	}
}


// address: 0x80096B10
// line start: 125
// line end:   234
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 20
	// size: 0x18
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int cp;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80096FA8
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009701C
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x80097024
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009708C
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800971BC
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800972F4
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097320
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x8009734C
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x80097354
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x8009735C
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097418
// line start: 422
// line end:   492
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x8009788C
// line start: 499
// line end:   548
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80097BD8
// line start: 552
// line end:   572
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x80097CE0
// line start: 576
// line end:   595
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80097D70
// line start: 602
// line end:   725
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
}


// address: 0x80098158
// line start: 732
// line end:   737
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098218
// line start: 746
// line end:   759
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80098320
// line start: 764
// line end:   778
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80098418
// line start: 784
// line end:   795
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80098504
// line start: 800
// line end:   804
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098588
// line start: 818
// line end:   822
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098620
// line start: 853
// line end:   864
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x800986DC
// line start: 879
// line end:   887
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098758
// line start: 910
// line end:   947
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x80098920
// line start: 955
// line end:   956
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098948
// line start: 966
// line end:   967
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098970
// line start: 972
// line end:   987
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x80098AB0
// line start: 991
// line end:   1009
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098BBC
// line start: 1013
// line end:   1154
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF58
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF78
	auto int list_size;
	// address: 0xFFFFFF80
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			// register: 9
			register int R;
			// register: 8
			register int G;
			// register: 3
			register int B;
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x8009943C
// line start: 1158
// line end:   1182
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x80099518
// line start: 1191
// line end:   1197
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099624
// line start: 1206
// line end:   1276
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800999E4
// line start: 1281
// line end:   1335
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80099C38
// line start: 1380
// line end:   1405
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099E5C
// line start: 1406
// line end:   1406
void _GLOBAL__D_gplayer() {
}


// address: 0x80099E84
// line start: 1406
// line end:   1406
void _GLOBAL__I_gplayer() {
}


// address: 0x80099EAC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80099EAC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80099ECC
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_80099ECC(struct Dialog *this, int Type) {
}


// address: 0x80099ED4
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80099ED4(struct Dialog *this, int Type) {
}


// address: 0x80099EDC
// line start: 78
// line end:   78
void ___6Dialog_addr_80099EDC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099F04
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80099F04(struct Dialog *this) {
}


// address: 0x80099F60
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80099F60(struct CPad *this) {
}


// address: 0x80099F88
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099F88(struct CPad *this) {
}


// address: 0x80099FB0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80099FB0(struct CPad *this) {
}


// address: 0x80099FD8
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_80099FD8(struct CPad *this, unsigned short mask) {
}


// address: 0x80099FE0
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_80099FE0(struct CPad *this, unsigned short tick) {
}


// address: 0x80099FE8
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A064
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A0BC
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009A118
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A150
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A188
// line start: 142
// line end:   147
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009A1E8
// line start: 158
// line end:   159
bool IsGameLoading__Fv() {
}


// address: 0x8009A1F4
// line start: 169
// line end:   245
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// register: 16
	register int tx;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 21
	register unsigned char barr;
	// register: 16
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x8009A668
// line start: 257
// line end:   286
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009A728
// line start: 296
// line end:   314
void TakeDownCutScreen__Fv() {
}


// address: 0x8009A7B4
// line start: 325
// line end:   331
void FinishProgress__Fv() {
}


// address: 0x8009A818
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A818(struct POLY_G4 **Prim) {
}


// address: 0x8009A894
// line start: 335
// line end:   335
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A8CC
// line start: 335
// line end:   335
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A904
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009A904(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A924
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009A924(struct Dialog *this, int Type) {
}


// address: 0x8009A92C
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009A92C(struct Dialog *this, int Type) {
}


// address: 0x8009A934
// line start: 78
// line end:   78
void ___6Dialog_addr_8009A934(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A95C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009A95C(struct Dialog *this) {
}


// address: 0x8009A9B8
// line start: 345
// line end:   123
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009A9D8
// line start: 105
// line end:   185
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009ABF4
// line start: 189
// line end:   213
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009ABFC
// line start: 218
// line end:   222
void init_card__Fi(int card_number) {
}


// address: 0x8009AC30
// line start: 227
// line end:   240
int ping_card__Fi(int card_number) {
}


// address: 0x8009ACC4
// line start: 244
// line end:   250
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009ACFC
// line start: 255
// line end:   266
void MemcardON__Fv() {
}


// address: 0x8009AD6C
// line start: 272
// line end:   280
void MemcardOFF__Fv() {
}


// address: 0x8009ADBC
// line start: 286
// line end:   304
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009AE50
// line start: 627
// line end:   644
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009AFD0
// line start: 652
// line end:   661
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009B0B4
// line start: 677
// line end:   800
void DrawSpinner__FiiUcUcUciiibiT8(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 6
	// size: 0x28
	register struct POLY_GT3 *GT3;
	// address: 0xFFFFFFD0
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 16
	register unsigned char rand;
	// register: 5
	register int f;
	// register: 2
	register unsigned short bright;
	// register: 30
	register unsigned short r;
	// register: 23
	register unsigned short g;
	// register: 22
	register unsigned short b;
	// register: 3
	register int xr1;
	// register: 5
	register int yr1;
	// register: 7
	register int xr2;
	// register: 4
	register int yr2;
	// register: 2
	register int yr3;
	// register: 20
	register int radius;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 17
					register char flip;
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8009B57C
// line start: 806
// line end:   1050
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF78
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF80
	auto int sh;
	// address: 0xFFFFFF58
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF88
	auto int yoff;
	// register: 17
	register int len;
	// address: 0xFFFFFF90
	auto unsigned char r;
	// address: 0xFFFFFF98
	auto unsigned char g;
	// address: 0xFFFFFFA0
	auto unsigned char b;
	// address: 0xFFFFFFA8
	auto int mx;
	// address: 0xFFFFFFB0
	auto int my;
	// address: 0xFFFFFFB8
	auto int BARFRAC;
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
	{
		// address: 0xFFFFFFC0
		auto int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 16
					register int syp;
					// register: 18
					register unsigned char barg;
					// register: 23
					register unsigned char barr;
					{
						{
							// register: 18
							register int len;
							// register: 19
							register int cx;
							// register: 20
							register int cy;
							{
								{
									// register: 3
									register int fi;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009C214
// line start: 1054
// line end:   1063
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009C29C
// line start: 1078
// line end:   1286
void ShowCharacterFiles__Fv() {
	// register: 16
	register int j;
	// register: 23
	register int yoff;
	// register: 20
	register int move;
	// register: 6
	register int fileno;
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x10
			auto struct Dialog SBack;
			// address: 0xFFFFFFD0
			// size: 0x8
			auto struct RECT um;
			// register: 2
			register int X;
			// register: 2
			register int Y;
			// register: 2
			register int W;
			// register: 17
			register int H;
			// register: 19
			register int oldBot;
			// register: 18
			register int oldTot;
			{
				{
					// register: 19
					register int r;
					// register: 18
					register int g;
					// register: 17
					register int b;
					// register: 7
					register char *FileLabel;
				}
			}
		}
	}
}


// address: 0x8009C94C
// line start: 1289
// line end:   1504
void MemcardPad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x10
					auto struct Dialog SBack;
					// address: 0xFFFFFFE0
					// size: 0x8
					auto struct RECT um;
					// register: 2
					register int X;
					// register: 2
					register int Y;
					// register: 2
					register int W;
					// register: 17
					register int H;
					// register: 19
					register int oldBot;
					// register: 18
					register int oldTot;
				}
			}
		}
	}
}


// address: 0x8009CFC4
// line start: 1510
// line end:   1510
void UnBounce__Fv() {
}


// address: 0x8009CFD0
// line start: 1529
// line end:   1760
void SoundPad__Fv() {
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 17
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 6
	register int lcs;
	{
		{
			{
				// register: 3
				register int l;
				{
					{
						{
							{
								{
									{
										// register: 16
										register int llen;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009D754
// line start: 1768
// line end:   1871
void CentrePad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				// register: 16
				register int osx;
				// register: 19
				register int osy;
			}
		}
	}
}


// address: 0x8009DB88
// line start: 1877
// line end:   1902
void CalcVolumes__Fv() {
}


// address: 0x8009DCC0
// line start: 1910
// line end:   1930
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST *mptr;
			// register: 3
			// size: 0x18
			register struct OMENUITEM *iptr;
			{
				// register: 4
				register int s;
			}
		}
	}
}


// address: 0x8009DDC8
// line start: 1938
// line end:   1955
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009DF70
// line start: 1973
// line end:   2012
void SeedPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// address: 0xFFFFFFE8
	// size: 0x2
	auto char temp[2];
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009E1F4
// line start: 2022
// line end:   2318
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 19
	register int OldOptionsSeed;
	// register: 16
	register int old_pad;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009EA0C
// line start: 2324
// line end:   2348
void ToggleOptions__Fv() {
}


// address: 0x8009EAB4
// line start: 2355
// line end:   2435
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


// address: 0x8009EDC0
// line start: 2438
// line end:   2450
void ActivateMemcard__Fv() {
}


// address: 0x8009EE44
// line start: 2455
// line end:   2479
void ShowGameFiles__FPc(char *filename) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 6
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8009EFB0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009EFB0(struct POLY_G4 **Prim) {
}


// address: 0x8009F02C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009F02C(struct CPad *this) {
}


// address: 0x8009F054
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009F054(struct CPad *this) {
}


// address: 0x8009F07C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009F07C(struct CPad *this) {
}


// address: 0x8009F0A4
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_8009F0A4(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F0AC
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_8009F0AC(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F0B4
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009F0B4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F0D4
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009F0D4(struct Dialog *this, int Type) {
}


// address: 0x8009F0DC
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009F0DC(struct Dialog *this, int Type) {
}


// address: 0x8009F0E4
// line start: 85
// line end:   88
int SetOTpos__6Dialogi_addr_8009F0E4(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009F0F0
// line start: 78
// line end:   78
void ___6Dialog_addr_8009F0F0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F118
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009F118(struct Dialog *this) {
}


// address: 0x8009F174
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F174(struct TextDat *this, int FrNum) {
}


// address: 0x8009F190
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F1E8
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009F32C
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009F3A8
// line start: 160
// line end:   183
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
	{
		{
			// register: 6
			// size: 0x23A8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x8009F534
// line start: 192
// line end:   201
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009F588
// line start: 210
// line end:   237
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009F6F0
// line start: 246
// line end:   266
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F7F4
// line start: 277
// line end:   284
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F860
// line start: 293
// line end:   309
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F8E4
// line start: 317
// line end:   330
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F990
// line start: 335
// line end:   362
void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 21
	register int ofx;
	// register: 20
	register int ofy;
	// register: 22
	register bool posok;
	{
		// register: 23
		register int d;
		{
			{
				// register: 18
				register int i;
			}
		}
	}
}


// address: 0x8009FAA0
// line start: 370
// line end:   382
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FB4C
// line start: 391
// line end:   414
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x8009FBF0
// line start: 422
// line end:   474
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int x;
							// register: 18
							register int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009FE9C
// line start: 484
// line end:   492
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FEF4
// line start: 503
// line end:   510
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF60
// line start: 520
// line end:   537
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A004C
// line start: 545
// line end:   564
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 20
		register int i;
		{
			{
				{
					// register: 17
					register int x;
					// register: 18
					register int y;
				}
			}
		}
	}
}


// address: 0x800A017C
// line start: 588
// line end:   607
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A0254
// line start: 619
// line end:   660
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A03AC
// line start: 668
// line end:   697
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A0448
// line start: 703
// line end:   723
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800A0578
// line start: 728
// line end:   747
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x800A0684
// line start: 786
// line end:   848
void DrawLBird__Fv() {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xE0
	auto struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	{
		{
			{
				// register: 21
				register int i;
			}
		}
	}
}


// address: 0x800A0890
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0890(struct POLY_FT4 **Prim) {
}


// address: 0x800A090C
// line start: 90
// line end:   132
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800A09CC
// line start: 137
// line end:   151
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A0A88
// line start: 130
// line end:   216
void DisplayMonsterTypes__Fv() {
	// address: 0xFFFFFED8
	// size: 0x100
	auto char Text[256];
	// register: 17
	// size: 0xE0
	register struct CBlocks *MBlocks;
	// register: 20
	// size: 0x1C
	register struct CMonster *MyCMonst;
	// register: 18
	// size: 0x3C
	register struct MonsterData *MyMonst;
	// register: 17
	// size: 0x6C
	register struct TextDat *CMonstGraphics;
	// register: 19
	// size: 0x6C
	register struct TextDat *ObjGraphics;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int NumMons;
	// register: 16
	register int PhysFrame;
	// register: 16
	register int Creature;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				{
					// register: 2
					register char transfile;
				}
			}
		}
	}
}


// address: 0x800A0F24
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A0F24(struct CPad *this) {
}


// address: 0x800A0F4C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A0F4C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A0F84
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A0F84(struct TextDat *this, int Creature) {
}


// address: 0x800A0FFC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A0FFC(struct TextDat *this) {
}


// address: 0x800A1010
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A1010(struct TextDat *this, int FrNum) {
}


// address: 0x800A102C
// line start: 44
// line end:   67
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A111C
// line start: 72
// line end:   97
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A122C
// line start: 102
// line end:   120
void FreeKanji__Fv() {
}


// address: 0x800A12B4
// line start: 127
// line end:   149
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A1388
// line start: 155
// line end:   173
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A13F8
// line start: 184
// line end:   206
void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col) {
	// register: 8
	register unsigned short *p;
	// register: 16
	register unsigned short *d;
	// register: 5
	register long i;
	// register: 3
	register long j;
	// register: 6
	register short by;
}


// address: 0x800A14C8
// line start: 214
// line end:   255
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE8
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800A1634
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1634(struct POLY_FT4 **Prim) {
}


// address: 0x800A16B0
// line start: 85
// line end:   108
void writeblock__FP5block(struct block *theblock) {
	{
		{
			{
				{
					{
						// register: 18
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x800A1798
// line start: 118
// line end:   235
int PAK_DoPak__FPUcT0i(unsigned char *Dest, unsigned char *buffer, int insize) {
	// register: 3
	register long begin;
	// register: 19
	register long end;
	// register: 17
	register long bestlength;
	// register: 20
	register int offset;
	// register: 23
	register int bestoffset;
	// register: 22
	register unsigned char *theptr;
	// register: 18
	register unsigned char *ptr1;
	// register: 5
	register unsigned char *ptr2;
	// register: 4
	register unsigned char *ptr3;
	// address: 0xFFFFFDB0
	// size: 0x214
	auto struct block theblock;
	// register: 21
	register int inpos;
}


// address: 0x800A19D8
// line start: 245
// line end:   278
int PAK_DoUnpak__FPUcT0(unsigned char *Dest, unsigned char *Source) {
	// register: 19
	register int outsize;
	{
		// register: 5
		register unsigned char *From;
		// register: 17
		register int size;
		// register: 3
		register int ch;
	}
}


// address: 0x800A1A78
// line start: 55
// line end:   58
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x8002E8A0
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002E8A0(short col) {
}


// address: 0x8002E8D8
// line start: 527
// line end:   695
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 17
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// register: 19
	register int SpellW;
	// register: 20
	register int SpellH;
	// register: 18
	register unsigned char r;
	// address: 0xFFFFFF88
	auto unsigned char g;
	// address: 0xFFFFFF90
	auto unsigned char b;
	// register: 13
	register int x0;
	// register: 12
	register int x1;
	// register: 16
	register int x2;
	// register: 15
	register int x3;
	// register: 24
	register int y0;
	// register: 11
	register int y1;
	// register: 9
	register int y2;
	// register: 14
	register int y3;
	// register: 4
	register int u0;
	// register: 5
	register int u1;
	// register: 10
	register int u2;
	// register: 8
	register int u3;
	// register: 6
	register int v0;
	// register: 7
	register int v1;
	// register: 3
	register int v2;
	// register: 2
	register int v3;
	{
		{
			{
				{
					// register: 22
					register int X;
					// address: 0xFFFFFFC8
					auto int Y;
					// register: 20
					register int SW;
					// register: 23
					register int SH;
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					// address: 0xFFFFFFD0
					auto int st;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8002F3F8
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F404
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F4A0
// line start: 740
// line end:   751
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int old_opts;
	}
}


// address: 0x8002F544
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5F8
// line start: 815
// line end:   1113
void DrawSpellList__Fv() {
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 22
	register int i;
	// register: 19
	register int j;
	// register: 4
	register int t;
	// address: 0xFFFFFFA8
	auto unsigned long mask;
	// address: 0xFFFFFFB0
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 17
	register int c;
	// register: 23
	register int v;
	// address: 0xFFFFFFB8
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
	// register: 21
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 19
	register int lx;
	// register: 20
	register int ly;
	// register: 17
	register int NoYSpells;
	// register: 18
	register int NoXSpells;
	{
		{
			{
				{
					{
						{
							// register: 4
							register bool Flag;
						}
					}
				}
			}
		}
	}
}


// address: 0x800301BC
// line start: 1119
// line end:   1131
void SetSpell__Fi(int pnum) {
}


// address: 0x80030290
// line start: 1142
// line end:   1145
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80030340
// line start: 1152
// line end:   1154
void ClearPanel__Fv() {
}


// address: 0x80030370
// line start: 1207
// line end:   1208
void InitPanelStr__Fv() {
}


// address: 0x80030390
// line start: 1294
// line end:   1441
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x800305B0
// line start: 1447
// line end:   1450
void DrawCtrlPan__Fv() {
}


// address: 0x800305DC
// line start: 1530
// line end:   1542
void DoAutoMap__Fv() {
}


// address: 0x80030650
// line start: 1549
// line end:   1640
void CheckPanelInfo__Fv() {
	// register: 17
	// size: 0x4
	register int (*_pSpell)[1];
	// register: 16
	register int c;
	// register: 5
	register int s;
	// register: 16
	register int v;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030D70
// line start: 1714
// line end:   1730
void FreeControlPan__Fv() {
	{
		// register: 4
		register void *p__p;
		{
			// register: 4
			register void *p__p;
			{
				// register: 4
				register void *p__p;
				{
					// register: 4
					register void *p__p;
					{
						// register: 4
						register void *p__p;
						{
							// register: 4
							register void *p__p;
							{
								// register: 4
								register void *p__p;
								{
									// register: 4
									register void *p__p;
									{
										// register: 4
										register void *p__p;
										{
											// register: 4
											register void *p__p;
											{
												// register: 4
												register void *p__p;
												{
													// register: 4
													register void *p__p;
													{
														// register: 4
														register void *p__p;
														{
															// register: 4
															register void *p__p;
															{
																// register: 4
																register void *p__p;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030E80
// line start: 1752
// line end:   1780
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	// register: 6
	// size: 0x4
	register enum TXT_JUST Justify;
	// register: 8
	register unsigned char R;
	// register: 5
	register unsigned char G;
	// register: 3
	register unsigned char B;
}


// address: 0x80030F9C
// line start: 1823
// line end:   1866
void PrintInfo__Fv() {
	// register: 20
	register int nOffset1;
	// register: 22
	register int w;
	// register: 18
	register int nlines;
	{
		{
			{
				// register: 16
				register int i;
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x80031258
// line start: 1872
// line end:   1991
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	// register: 16
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int nGold;
							{
								{
									{
										{
											{
												{
													{
														{
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003190C
// line start: 2044
// line end:   2138
void MY_PlrStringXY__Fv() {
	// register: 21
	// size: 0x28
	register struct CSDATA *ptr;
	// address: 0xFFFFFFC0
	auto char r;
	// address: 0xFFFFFFC8
	auto char g;
	// register: 30
	register char b;
	// register: 22
	register int x;
	// register: 23
	register int y;
	// address: 0xFFFFFFD0
	auto int w;
	// register: 20
	register int len;
}


// address: 0x80031E5C
// line start: 2144
// line end:   2160
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031F04
// line start: 2183
// line end:   2219
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x8003206C
// line start: 2226
// line end:   2239
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032148
// line start: 2247
// line end:   2268
void DrawArrows__Fv() {
	// register: 18
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
}


// address: 0x80032240
// line start: 2273
// line end:   2467
void BuildChr__Fv() {
	// register: 18
	register char c;
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
	{
		{
		}
	}
}


// address: 0x80033518
// line start: 2472
// line end:   2565
void DrawChr__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 2
	register int pc;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	{
		{
			// register: 18
			register int llus;
			// register: 16
			register int move;
		}
	}
}


// address: 0x80033974
// line start: 2619
// line end:   2640
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80033A58
// line start: 2649
// line end:   2657
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033AEC
// line start: 2662
// line end:   2699
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80033E58
// line start: 2706
// line end:   2746
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033EDC
// line start: 2754
// line end:   2768
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033FC4
// line start: 2774
// line end:   2781
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003405C
// line start: 2788
// line end:   2800
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034274
// line start: 2827
// line end:   3012
void DrawSpellBook__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int ii;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFFC8
	auto int mind;
	// address: 0xFFFFFFCC
	auto int maxd;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto unsigned long tspls;
	// register: 17
	register char c;
	// register: 16
	register int v;
	// register: 19
	register unsigned char bright;
	// address: 0xFFFFFFC0
	// size: 0x4
	auto char Num[4];
	// register: 22
	register int bw;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 17
	register int lsbooktab;
	// register: 18
	register int lcur_spel;
}


// address: 0x80034C2C
// line start: 3021
// line end:   3064
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
	{
		{
			{
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80034E60
// line start: 3078
// line end:   3080
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034E94
// line start: 3589
// line end:   3589
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80034EBC
// line start: 3589
// line end:   3589
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80034EF8
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034EF8(struct CPad *this) {
}


// address: 0x80034F20
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034F20(struct CPad *this) {
}


// address: 0x80034F48
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_80034F48(struct CPad *this, unsigned short mask) {
}


// address: 0x80034F50
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_80034F50(struct CPad *this, unsigned short tick) {
}


// address: 0x80034F58
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80034F58(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034F78
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_80034F78(struct Dialog *this, int Type) {
}


// address: 0x80034F80
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80034F80(struct Dialog *this, int Type) {
}


// address: 0x80034F88
// line start: 78
// line end:   78
void ___6Dialog_addr_80034F88(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034FB0
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80034FB0(struct Dialog *this) {
}


// address: 0x8003500C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8003500C(struct TextDat *this, int PalNum) {
}


// address: 0x80035028
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035028(struct TextDat *this, int FrNum) {
}


// address: 0x80035044
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x8003504C
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80035054
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x800350B0
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x80035114
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x80035134
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80035194
// line start: 211
// line end:   231
void CheckTown__Fv() {
	{
		// register: 18
		register int i;
		{
			// register: 17
			register int mx;
		}
	}
}


// address: 0x800353EC
// line start: 237
// line end:   258
void CheckRportal__Fv() {
	{
		// register: 17
		register int i;
		{
			// register: 16
			register int mx;
		}
	}
}


// address: 0x80035614
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x8003561C
// line start: 40
// line end:   90
void InitDead__Fv() {
	// register: 6
	register int nd;
	// register: 7
	register int i;
	// register: 2
	register int mi;
	// address: 0xFFFFFCD0
	// size: 0x320
	auto int mtypes[200];
}


// address: 0x80035818
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035860
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800358B0
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003590C
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035980
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035A44
// line start: 401
// line end:   485
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035C2C
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D9C
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036178
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036180
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036230
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x800362CC
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x800362EC
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800363E4
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003656C
// line start: 2560
// line end:   2585
void ClearOutDungeonMap__Fv() {
	// register: 11
	register unsigned short val;
	{
		// register: 10
		register int x;
		{
			{
				// register: 6
				register int y;
			}
		}
	}
}


// address: 0x80036648
// line start: 2592
// line end:   2928
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80036FE8
// line start: 2941
// line end:   2993
void game_logic__Fv() {
}


// address: 0x800370F4
// line start: 3003
// line end:   3033
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x8003719C
// line start: 3041
// line end:   3096
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800371D4
// line start: 3163
// line end:   3168
void alloc_plr__Fv() {
}


// address: 0x800371DC
// line start: 3231
// line end:   3289
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800371E4
// line start: 3296
// line end:   3298
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037204
// line start: 3303
// line end:   3305
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037224
// line start: 3308
// line end:   3309
void app_fatal(char *pszFile) {
}


// address: 0x80037254
// line start: 3568
// line end:   3574
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x8003727C
// line start: 3578
// line end:   3584
void DoMemCardFromInGame__Fv() {
}


// address: 0x800372A4
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800372F8
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037318
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037360
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800374C0
// line start: 166
// line end:   175
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037578
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376A4
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377D8
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037908
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A38
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B68
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CA0
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DD0
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F00
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038030
// line start: 312
// line end:   337
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 3
	register int y2;
}


// address: 0x800382F4
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80038380
// line start: 363
// line end:   377
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80038424
// line start: 384
// line end:   397
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038554
// line start: 406
// line end:   414
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038588
// line start: 422
// line end:   429
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385BC
// line start: 437
// line end:   449
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800386A4
// line start: 455
// line end:   457
void TownHealer__Fv() {
}


// address: 0x800386CC
// line start: 464
// line end:   467
void TownStory__Fv() {
}


// address: 0x800386F4
// line start: 474
// line end:   477
void TownDrunk__Fv() {
}


// address: 0x8003871C
// line start: 484
// line end:   487
void TownBoy__Fv() {
}


// address: 0x80038744
// line start: 495
// line end:   498
void TownWitch__Fv() {
}


// address: 0x8003876C
// line start: 505
// line end:   507
void TownBarMaid__Fv() {
}


// address: 0x80038794
// line start: 514
// line end:   517
void TownCow__Fv() {
}


// address: 0x800387BC
// line start: 524
// line end:   575
void ProcessTowners__Fv() {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80038A0C
// size: 0x98
// line start: 581
// line end:   586
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038AE0
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80122464
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012C72C
	static int snLastCowSFX;
}


// address: 0x80038BFC
// line start: 647
// line end:   654
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C3C
// line start: 661
// line end:   1057
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x98
	register struct ItemStruct *Item;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003A064
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A06C
// line start: 96
// line end:   102
void stream_stop__Fv() {
}


// address: 0x8003A0C0
// line start: 115
// line end:   149
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A1B0
// line start: 155
// line end:   171
void stream_update__Fv() {
}


// address: 0x8003A1B8
// line start: 177
// line end:   184
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A1D4
// line start: 191
// line end:   222
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A22C
// line start: 228
// line end:   251
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A234
// line start: 257
// line end:   277
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A338
// line start: 284
// line end:   315
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A434
// line start: 324
// line end:   369
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A54C
// line start: 376
// line end:   398
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A5E4
// line start: 413
// line end:   416
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A624
// line start: 424
// line end:   434
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A678
// line start: 441
// line end:   456
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003A710
// line start: 463
// line end:   473
void sound_update__Fv() {
}


// address: 0x8003A744
// line start: 481
// line end:   512
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A788
// line start: 518
// line end:   531
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A830
// line start: 45
// line end:   75
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A8D4
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A8E4
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003A92C
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003A998
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A9E4
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003AA34
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003AA3C
// line start: 565
// line end:   584
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AA44
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AA4C
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AAE0
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AB0C
// line start: 183
// line end:   266
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003AC18
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003AC20
// line start: 331
// line end:   562
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register int nol;
	// register: 18
	register unsigned long (*saveProc)();
	{
		{
		}
	}
}


// address: 0x8003B10C
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B144
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003B170
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B238
// line start: 539
// line end:   576
void AddInitItems__Fv() {
	// register: 22
	register int j;
	{
		// register: 20
		register int i;
		{
			// register: 19
			register int ii;
			// register: 18
			register int xx;
			// register: 17
			register int yy;
		}
	}
}


// address: 0x8003B450
// line start: 583
// line end:   630
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B614
// line start: 637
// line end:   890
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 11
	register int mind;
	// register: 10
	register int maxd;
	// register: 15
	register int tac;
	// register: 5
	register int g;
	// address: 0xFFFFFFD0
	auto int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF60
	auto int bac;
	// address: 0xFFFFFF68
	auto int sadd;
	// register: 19
	register int madd;
	// address: 0xFFFFFF70
	auto int dadd;
	// register: 18
	register int vadd;
	// register: 23
	register int fr;
	// register: 30
	register int lr;
	// register: 22
	register int mr;
	// register: 13
	register int dmod;
	// register: 14
	register int ghit;
	// register: 17
	register int lrad;
	// address: 0xFFFFFF78
	auto int ihp;
	// address: 0xFFFFFF80
	auto int imana;
	// address: 0xFFFFFF88
	auto int spllvladd;
	// address: 0xFFFFFF90
	auto int enac;
	// address: 0xFFFFFF98
	auto int fmin;
	// address: 0xFFFFFFA0
	auto int fmax;
	// address: 0xFFFFFFA8
	auto int lmin;
	// address: 0xFFFFFFB0
	auto int lmax;
	// address: 0xFFFFFFB8
	auto long iflgs;
	// register: 20
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003C0C4
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C444
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C4E0
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 5
	register unsigned char sf;
	// register: 11
	register unsigned char changeflag;
	// register: 10
	register int sa;
	// register: 9
	register int ma;
	// register: 8
	register int da;
}


// address: 0x8003C640
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C68C
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8003C76C
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003CA00
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CAC4
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CBDC
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CC08
// line start: 1111
// line end:   1127
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003CD84
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CD8C
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CDBC
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D1F8
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D4D0
// line start: 1306
// line end:   1354
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 5
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 16
	register unsigned char savail;
}


// address: 0x8003D6FC
// line start: 1361
// line end:   1384
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 19
		register int l;
		{
			{
				// register: 21
				register int j;
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D864
// line start: 1390
// line end:   1402
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D92C
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D9E4
// line start: 1421
// line end:   1466
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003DC4C
// line start: 1473
// line end:   1533
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	// address: 0xFFFFFB68
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 6
	register int j;
	// register: 17
	register int preidx;
	// address: 0xFFFFFF68
	// size: 0x80
	auto char istr[128];
	// register: 2
	register unsigned char addok;
}


// address: 0x8003DE3C
// line start: 1541
// line end:   1609
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int l;
	// register: 19
	register int bs;
	// register: 5
	register int maxc;
	// register: 17
	register int minc;
	{
		{
			// register: 8
			register int v;
		}
	}
}


// address: 0x8003E0F0
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E63C
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E674
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E6E8
// line start: 1767
// line end:   2049
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FE14
// line start: 2057
// line end:   2155
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	// register: 16
	register int pre;
	// register: 23
	register int post;
	// address: 0xFFFFFB48
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 7
	register int j;
	// register: 20
	register int preidx;
	// register: 30
	register int sufidx;
	// address: 0xFFFFFF48
	// size: 0x80
	auto char istr[128];
	// register: 21
	register unsigned char goe;
}


// address: 0x8004027C
// line start: 2162
// line end:   2192
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040378
// line start: 2198
// line end:   2225
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80040480
// line start: 2234
// line end:   2270
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x800406C4
// line start: 2278
// line end:   2309
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80040904
// line start: 2317
// line end:   2340
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040A78
// line start: 2348
// line end:   2363
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 9
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80040B78
// line start: 2370
// line end:   2404
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	// register: 4
	register int j;
	// register: 2
	register int idata;
	// address: 0xFFFFFF68
	// size: 0x80
	auto unsigned char uok[128];
	// register: 16
	register int numu;
}


// address: 0x80040D28
// line start: 2411
// line end:   2433
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040FD0
// line start: 2440
// line end:   2453
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x800410DC
// line start: 2463
// line end:   2467
void ItemRndDur__Fi(int ii) {
}


// address: 0x8004116C
// line start: 2474
// line end:   2512
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041478
// line start: 2520
// line end:   2563
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x800416C0
// line start: 2571
// line end:   2585
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800417F0
// line start: 2595
// line end:   2610
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041938
// line start: 2622
// line end:   2632
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80041A10
// line start: 2636
// line end:   2646
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041AD0
// line start: 2655
// line end:   2670
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041C14
// line start: 2682
// line end:   2706
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041E00
// line start: 2713
// line end:   2749
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 18
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 21
			register int tries;
		}
	}
}


// address: 0x80042040
// line start: 2756
// line end:   2781
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x80042200
// line start: 2789
// line end:   2821
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800423B8
// line start: 2828
// line end:   2832
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x8004240C
// line start: 2842
// line end:   2857
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800424D4
// line start: 2872
// line end:   2922
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 4
	register int ii;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 2
											register int it;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80042708
// line start: 2929
// line end:   2934
void FreeItemGFX__Fv() {
}


// address: 0x80042710
// line start: 2953
// line end:   2978
void GetItemStr__Fi(int i) {
	{
		{
			{
				// register: 17
				register int nGold;
			}
		}
	}
}


// address: 0x800428B8
// line start: 2984
// line end:   2994
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800429A8
// line start: 2999
// line end:   3023
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042A78
// line start: 3027
// line end:   3040
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042B3C
// line start: 3045
// line end:   3058
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042BAC
// line start: 3062
// line end:   3080
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x80042CAC
// line start: 3185
// line end:   3309
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042DA0
// line start: 3315
// line end:   3527
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80043454
// line start: 3571
// line end:   3599
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x8004345C
// line start: 3612
// line end:   3655
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800435E8
// line start: 3662
// line end:   3707
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043958
// line start: 3713
// line end:   3753
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043C68
// line start: 3760
// line end:   3763
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043C78
// line start: 3771
// line end:   3961
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80044290
// line start: 3970
// line end:   3975
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80044324
// line start: 3994
// line end:   4009
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800443A0
// line start: 4015
// line end:   4034
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800444A8
// line start: 4042
// line end:   4067
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x800446C8
// line start: 4076
// line end:   4095
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x8004490C
// line start: 4108
// line end:   4123
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044A5C
// line start: 4154
// line end:   4158
void SpawnStoreGold__Fv() {
}


// address: 0x80044AE0
// line start: 4207
// line end:   4218
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044C80
// line start: 4230
// line end:   4238
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044CE4
// line start: 4257
// line end:   4279
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80044E74
// line start: 4287
// line end:   4308
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044FF0
// line start: 4316
// line end:   4337
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x8004516C
// line start: 4476
// line end:   4517
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x800452E0
// line start: 4671
// line end:   4769
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045438
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800454A0
// line start: 380
// line end:   399
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x80045514
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045580
// line start: 415
// line end:   765
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 4
	register int v;
	// register: 22
	register int colour_mask;
	// register: 17
	register int shift_mask;
	// register: 12
	register int shake;
	// address: 0xFFFFFFA8
	auto int light_x;
	// address: 0xFFFFFFB0
	auto int light_y;
	// address: 0xFFFFFFB8
	auto int block_x;
	// register: 9
	register int block_y;
	// register: 23
	register int dist_y;
	// register: 11
	register int max_x;
	// register: 6
	register int mult;
	// register: 7
	register int mult_st;
	// register: 21
	register int radius_block;
	// register: 7
	register int scr_x;
	// register: 8
	register int scr_y;
	// register: 6
	register int temp_x;
	// register: 5
	register int temp_y;
	// register: 19
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x80046230
// line start: 771
// line end:   819
void DoUnLight__Fv() {
	// register: 6
	register int x;
	// register: 7
	register int y;
	// register: 11
	register int max_x;
	// register: 16
	register int max_y;
	// register: 14
	register int radius_block;
	// register: 13
	register int nXPos;
	// register: 12
	register int nYPos;
}


// address: 0x80046474
// line start: 826
// line end:   841
void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius) {
	// register: 4
	register int i;
	// register: 6
	register int j;
	// register: 3
	register int x1;
	// register: 9
	register int y1;
	// register: 8
	register int x2;
	// register: 5
	register int y2;
}


// address: 0x80046538
// line start: 848
// line end:   952
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 16
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// register: 9
	register int nLineLen;
	// register: 21
	register int nBlockerFlag;
	// register: 8
	register int j;
	// register: 20
	register int k;
	// register: 2
	register int v;
	// register: 5
	register int x1adj;
	// register: 7
	register int x2adj;
	// register: 4
	register int y1adj;
	// register: 6
	register int y2adj;
}


// address: 0x80046A48
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x80046A50
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x80046A58
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x80046A60
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x80046A84
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046AC8
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046B5C
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x80046B8C
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046BB8
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046BF0
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80046BF8
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046C30
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046C74
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046CA4
// line start: 1205
// line end:   1266
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x80046DD0
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80046DD8
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046E28
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046F2C
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80046FE0
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80047098
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x800472F8
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x80047300
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x8004730C
// line start: 129
// line end:   167
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x80047460
// line start: 176
// line end:   225
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80047608
// line start: 230
// line end:   236
void DrawQTextBack__Fv() {
}


// address: 0x80047678
// line start: 246
// line end:   286
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047760
// line start: 291
// line end:   408
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80047ACC
// line start: 411
// line end:   411
void _GLOBAL__D_QBack() {
}


// address: 0x80047AF4
// line start: 411
// line end:   411
void _GLOBAL__I_QBack() {
}


// address: 0x80047B1C
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80047B1C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047B3C
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80047B3C(struct Dialog *this, int Type) {
}


// address: 0x80047B44
// line start: 78
// line end:   78
void ___6Dialog_addr_80047B44(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047B6C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80047B6C(struct Dialog *this) {
}


// address: 0x80047BC8
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047BC8(struct CFont *this, char ch) {
}


// address: 0x80047C20
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047C20(struct TextDat *this, int FrNum) {
}


// address: 0x80047C3C
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047C44
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047C4C
// line start: 187
// line end:   201
void delta_init__Fv() {
}


// address: 0x80047CAC
// line start: 208
// line end:   229
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D48
// line start: 236
// line end:   252
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047DCC
// line start: 261
// line end:   283
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047E5C
// line start: 289
// line end:   330
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0xF1C
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x6
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x80048188
// line start: 336
// line end:   352
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x800481E8
// line start: 359
// line end:   478
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 15
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x800483AC
// line start: 485
// line end:   546
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x80048534
// line start: 552
// line end:   555
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048558
// line start: 561
// line end:   564
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004857C
// line start: 571
// line end:   634
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x80048790
// line start: 639
// line end:   647
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x800487C0
// line start: 658
// line end:   666
int DeltaImportData__FPc(char *Src) {
}


// address: 0x800487F4
// line start: 678
// line end:   693
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800488F0
// line start: 768
// line end:   772
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048918
// line start: 778
// line end:   792
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x80048964
// line start: 798
// line end:   808
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048994
// line start: 814
// line end:   823
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800489CC
// line start: 829
// line end:   839
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048A0C
// line start: 845
// line end:   856
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048A54
// line start: 862
// line end:   867
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048A80
// line start: 873
// line end:   879
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048AB0
// line start: 884
// line end:   891
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048AE8
// line start: 896
// line end:   904
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048B5C
// line start: 909
// line end:   955
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C90
// line start: 961
// line end:   976
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D0C
// line start: 992
// line end:   1011
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D64
// line start: 1018
// line end:   1025
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DCC
// line start: 1030
// line end:   1073
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048ED4
// line start: 1079
// line end:   1090
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048F78
// line start: 1096
// line end:   1101
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048FA8
// line start: 1107
// line end:   1149
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x800490BC
// line start: 1154
// line end:   1170
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x800490C4
// line start: 1176
// line end:   1184
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x800490F8
// line start: 1199
// line end:   1210
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049154
// line start: 1216
// line end:   1219
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049194
// line start: 1225
// line end:   1234
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004919C
// line start: 1245
// line end:   1252
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004921C
// line start: 1261
// line end:   1275
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004924C
// line start: 1280
// line end:   1289
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004927C
// line start: 1293
// line end:   1306
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492AC
// line start: 1312
// line end:   1325
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492DC
// line start: 1331
// line end:   1337
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049350
// line start: 1346
// line end:   1352
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800493D8
// line start: 1359
// line end:   1392
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049518
// line start: 1402
// line end:   1439
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	// register: 21
	register int nIndex;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800496E8
// line start: 1448
// line end:   1454
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049770
// line start: 1461
// line end:   1495
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800498A4
// line start: 1504
// line end:   1547
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80049A6C
// line start: 1555
// line end:   1568
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049AB8
// line start: 1575
// line end:   1606
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049BD0
// line start: 1615
// line end:   1630
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049CD0
// line start: 1650
// line end:   1660
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049D28
// line start: 1667
// line end:   1675
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049DB4
// line start: 1682
// line end:   1698
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049E9C
// line start: 1706
// line end:   1721
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049F74
// line start: 1728
// line end:   1743
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A050
// line start: 1750
// line end:   1761
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A130
// line start: 1768
// line end:   1779
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A210
// line start: 1787
// line end:   1793
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A25C
// line start: 1800
// line end:   1812
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004A390
// line start: 1819
// line end:   1833
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A458
// line start: 1840
// line end:   1851
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A518
// line start: 1859
// line end:   1869
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5DC
// line start: 1876
// line end:   1887
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6A0
// line start: 1894
// line end:   1900
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6E8
// line start: 1907
// line end:   1911
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A720
// line start: 1917
// line end:   1921
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A748
// line start: 1928
// line end:   1935
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7D0
// line start: 1943
// line end:   1947
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A800
// line start: 1954
// line end:   1963
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A8E4
// line start: 1971
// line end:   1977
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A950
// line start: 1984
// line end:   1990
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A9BC
// line start: 1997
// line end:   2017
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 7
				register unsigned char addok;
				{
					// register: 5
					register int i;
					{
						// register: 2
						register int mi;
					}
				}
			}
		}
	}
}


// address: 0x8004AAD4
// line start: 2026
// line end:   2042
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABC0
// line start: 2056
// line end:   2063
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC08
// line start: 2070
// line end:   2117
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ADC4
// line start: 2126
// line end:   2132
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE40
// line start: 2139
// line end:   2145
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEBC
// line start: 2152
// line end:   2158
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF38
// line start: 2165
// line end:   2171
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFB4
// line start: 2177
// line end:   2182
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B02C
// line start: 2188
// line end:   2195
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B034
// line start: 2201
// line end:   2204
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B03C
// line start: 2209
// line end:   2215
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B044
// line start: 2220
// line end:   2225
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B09C
// line start: 2231
// line end:   2279
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B314
// line start: 2287
// line end:   2319
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0xA
	register struct TCmdLocParam3 *p;
	{
		{
			{
				{
					{
						{
							// register: 4
							register int i;
							// register: 2
							register int mi;
							// register: 6
							register unsigned char addok;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004B4A4
// line start: 2325
// line end:   2330
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4F4
// line start: 2336
// line end:   2343
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B53C
// line start: 2349
// line end:   2357
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B57C
// line start: 2362
// line end:   2370
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5BC
// line start: 2376
// line end:   2384
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5FC
// line start: 2390
// line end:   2399
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B63C
// line start: 2404
// line end:   2411
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B684
// line start: 2418
// line end:   2430
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 16
					register int mi;
				}
			}
		}
	}
}


// address: 0x8004B760
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012D5CC
	static unsigned char sbLastCmd;
}


// address: 0x8004BB80
// size: 0xF1C
// line start: 2583
// line end:   2593
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BC10
// line start: 2600
// line end:   2604
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BC48
// line start: 167
// line end:   171
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BC74
// line start: 556
// line end:   561
int InitLevelType__Fi(int l) {
}


// address: 0x8004BCC0
// line start: 567
// line end:   605
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004BE50
// line start: 684
// line end:   690
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BEC4
// line start: 705
// line end:   821
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF50
	// size: 0x80
	auto char szPlayerDescript[128];
	{
		{
			// address: 0xFFFFFFD0
			// size: 0x28
			auto struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


// address: 0x8004C12C
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C264
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C3B0
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C438
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C478
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C51C
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C5AC
// line start: 510
// line end:   551
void InitObjectGFX__Fv() {
	// address: 0xFFFFFF88
	// size: 0x38
	auto unsigned char fileload[56];
	// register: 3
	register int i;
	// register: 5
	register int t;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x20
					auto char filestr[32];
				}
			}
		}
	}
}


// address: 0x8004C7C8
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004C7D4
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C88C
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CB10
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CB70
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CB98
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CCA4
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CDB0
// line start: 753
// line end:   781
void Obj_Light__Fii(int i, int lr) {
	// register: 23
	register int ox;
	// register: 22
	register int oy;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 19
	register int p;
	// register: 21
	register int tr;
	// register: 20
	register unsigned char turnon;
}


// address: 0x8004CFC0
// line start: 787
// line end:   830
void Obj_Circle__Fi(int i) {
	// register: 3
	register int px;
	// register: 2
	register int py;
	// register: 6
	register int ox;
	// register: 7
	register int oy;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004D2E4
// line start: 837
// line end:   842
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D348
// line start: 873
// line end:   935
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x6C
	register struct TextDat *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x8004D624
// line start: 940
// line end:   948
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D694
// line start: 957
// line end:   982
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D828
// line start: 990
// line end:   992
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D874
// line start: 999
// line end:   1010
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004D998
// line start: 1017
// line end:   1058
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DC68
// line start: 1067
// line end:   1118
void Obj_Trap__Fi(int i) {
	// register: 16
	register int oti;
	// register: 5
	register unsigned char otrig;
	// register: 20
	register int sx;
	// register: 21
	register int sy;
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 3
	register int x;
	// register: 5
	register int y;
	// register: 8
	register int ax;
	// register: 9
	register int ay;
}


// address: 0x8004DFB8
// line start: 1127
// line end:   1153
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E248
// line start: 1162
// line end:   1244
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E524
// line start: 1252
// line end:   1253
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E55C
// line start: 1266
// line end:   1305
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 18
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8004E630
// line start: 1312
// line end:   1336
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E638
// line start: 1342
// line end:   1371
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E640
// line start: 1377
// line end:   1398
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E8C0
// line start: 1405
// line end:   1412
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004E964
// line start: 1419
// line end:   1466
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004ED08
// line start: 1472
// line end:   1520
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F0E0
// line start: 1526
// line end:   1567
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F478
// line start: 1573
// line end:   1614
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F810
// line start: 1620
// line end:   1659
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FB18
// line start: 1663
// line end:   1720
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FE20
// line start: 1726
// line end:   1770
void MonstCheckDoors__Fi(int m) {
	// register: 20
	register int i;
	// register: 16
	register int oi;
	// register: 19
	register int dpx;
	// register: 18
	register int dpy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
}


// address: 0x8005031C
// line start: 1776
// line end:   1788
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050454
// line start: 1795
// line end:   1805
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050568
// line start: 1812
// line end:   1827
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050720
// line start: 1836
// line end:   1846
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x800507CC
// line start: 1854
// line end:   1870
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050950
// line start: 1877
// line end:   1884
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050AAC
// line start: 1891
// line end:   1916
void OperateLever__Fii(int pnum, int i) {
	// register: 6
	register unsigned char mapflag;
	// register: 5
	register int j;
	// register: 2
	register int oi;
	// register: 2
	register int ot;
}


// address: 0x80050C98
// line start: 1922
// line end:   1980
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 19
	register int v2;
	// register: 16
	register int j;
	// register: 3
	register int oi;
	// register: 3
	register int ot;
	// register: 16
	register int itm;
	{
		{
			// register: 6
			register unsigned char found;
			// register: 5
			register unsigned char dowarp;
			{
				{
				}
			}
		}
	}
}


// address: 0x8005118C
// line start: 1986
// line end:   2031
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051534
// line start: 2037
// line end:   2068
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8005175C
// line start: 2074
// line end:   2115
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051B2C
// line start: 2121
// line end:   2147
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051CF0
// line start: 2153
// line end:   2176
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051E88
// line start: 2182
// line end:   2208
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800520DC
// line start: 2214
// line end:   2237
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800522AC
// line start: 2245
// line end:   2261
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052464
// line start: 2267
// line end:   2274
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800525C0
// line start: 2281
// line end:   2288
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8005271C
// line start: 2294
// line end:   2328
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x80052824
// line start: 2336
// line end:   2370
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int jstn;
	{
		{
			{
				{
					// register: 16
					register unsigned char *setp;
					{
					}
				}
			}
		}
	}
}


// address: 0x80052ADC
// line start: 2379
// line end:   2405
void TryDisarm__Fii(int pnum, int i) {
	// register: 6
	register int j;
	// register: 3
	register int oi;
	// register: 2
	register int oti;
	// register: 16
	register int trapdisper;
	// register: 2
	register unsigned char checkflag;
}


// address: 0x80052CA0
// line start: 2411
// line end:   2414
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80052D10
// line start: 2421
// line end:   2974
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 16
	register int v1;
	// register: 20
	register int v2;
	// register: 21
	register int v3;
	// register: 17
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
}


// address: 0x800552EC
// line start: 2980
// line end:   2991
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055468
// line start: 2997
// line end:   3018
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055638
// line start: 3024
// line end:   3032
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055720
// line start: 3038
// line end:   3066
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055890
// line start: 3078
// line end:   3100
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055980
// line start: 3107
// line end:   3113
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055A28
// line start: 3120
// line end:   3127
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055ADC
// line start: 3134
// line end:   3226
unsigned char OperateFountains__Fii(int pnum, int i) {
	// register: 21
	register int ii;
	// register: 19
	register unsigned char rv;
	{
		{
			{
				{
					// register: 16
					register int rndVal;
					// register: 19
					register int statVal;
					// register: 20
					register int saveRnd;
					// register: 22
					register int status;
				}
			}
		}
	}
}


// address: 0x80056088
// line start: 3233
// line end:   3273
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80056234
// line start: 3279
// line end:   3289
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056324
// line start: 3297
// line end:   3333
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x8005651C
// line start: 3339
// line end:   3456
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056954
// line start: 3464
// line end:   3474
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056A68
// line start: 3480
// line end:   3490
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056B7C
// line start: 3496
// line end:   3506
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056C90
// line start: 3512
// line end:   3601
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80056E90
// line start: 3609
// line end:   3635
void BreakCrux__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x80057080
// line start: 3643
// line end:   3704
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x800575D4
// line start: 3710
// line end:   3731
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057734
// line start: 3739
// line end:   3745
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057790
// line start: 3753
// line end:   3777
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x800578A8
// line start: 3783
// line end:   3799
void SyncCrux__Fi(int i) {
	// register: 6
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 7
	register unsigned char mapflag;
}


// address: 0x800579E0
// line start: 3806
// line end:   3809
void SyncLever__Fi(int i) {
}


// address: 0x80057A5C
// line start: 3817
// line end:   3829
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80057B68
// line start: 3838
// line end:   3853
void SyncPedistal__Fi(int i) {
	// register: 16
	register unsigned char *setp;
	{
		{
			{
			}
		}
	}
}


// address: 0x80057CC4
// line start: 3861
// line end:   3885
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057E2C
// line start: 3893
// line end:   3916
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057F58
// line start: 3924
// line end:   3963
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80058098
// line start: 3971
// line end:   4112
void GetObjectStr__Fi(int i) {
}


// address: 0x800584B4
// line start: 4117
// line end:   4272
void RestoreObjectLight__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int oi;
	// register: 4
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x800586D0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800586D0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058708
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058708(struct TextDat *this, int Creature) {
}


// address: 0x80058780
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058780(struct TextDat *this) {
}


// address: 0x80058794
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x8005879C
// line start: 380
// line end:   385
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x800587C8
// line start: 391
// line end:   404
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005887C
// line start: 449
// line end:   498
void SetupLocalPlayer__Fv() {
}


// address: 0x8005889C
// line start: 271
// line end:   272
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800588E0
// line start: 276
// line end:   277
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800588F4
// line start: 413
// line end:   419
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058914
// line start: 529
// line end:   548
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005891C
// line start: 555
// line end:   566
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058938
// line start: 575
// line end:   586
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005895C
// line start: 592
// line end:   673
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80058B98
// line start: 720
// line end:   837
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058FB4
// line start: 844
// line end:   850
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005901C
// line start: 856
// line end:   892
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005918C
// line start: 899
// line end:   962
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 4294967295
	register long v;
	// register: 6
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80059398
// line start: 968
// line end:   975
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x8005941C
// line start: 984
// line end:   1154
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x800597BC
// line start: 1164
// line end:   1170
void InitMultiView__Fv() {
}


// address: 0x800597C4
// line start: 1271
// line end:   1297
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x8005985C
// line start: 1301
// line end:   1306
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x800598E4
// line start: 1360
// line end:   1369
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059978
// line start: 1376
// line end:   1389
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059A6C
// line start: 1395
// line end:   1399
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059A80
// line start: 1434
// line end:   1455
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059B0C
// line start: 1460
// line end:   1479
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059B70
// line start: 1487
// line end:   1545
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DFCF8
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059BAC
// line start: 1553
// line end:   1575
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059BD8
// line start: 1672
// line end:   1704
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80059D10
// line start: 1730
// line end:   1745
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059DA8
// line start: 1751
// line end:   1792
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80059F44
// line start: 1825
// line end:   1841
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 13
	register int pp;
	// register: 4
	register int pn;
	// register: 5
	register int x;
	// register: 10
	register int y;
}


// address: 0x8005A064
// line start: 1848
// line end:   1881
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A184
// line start: 1888
// line end:   1917
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A320
// line start: 1923
// line end:   1960
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8005A4E8
// line start: 1965
// line end:   2090
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 20
	register unsigned char diablolevel;
	{
		{
			{
				{
					{
						// register: 2
						register int pdd;
					}
				}
			}
		}
	}
}


// address: 0x8005A7F0
// line start: 2095
// line end:   2261
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AC38
// line start: 2268
// line end:   2293
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005AD90
// line start: 2299
// line end:   2301
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005ADB0
// line start: 2307
// line end:   2332
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x8005B098
// line start: 2338
// line end:   2360
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B15C
// line start: 2367
// line end:   2422
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B2AC
// line start: 2427
// line end:   2445
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B33C
// line start: 2453
// line end:   2469
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B3F8
// line start: 2477
// line end:   2478
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B400
// line start: 2506
// line end:   2523
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B488
// line start: 2527
// line end:   2644
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B7F4
// line start: 2651
// line end:   2700
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005B994
// line start: 2707
// line end:   2821
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x8005BFC4
// line start: 2828
// line end:   2891
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x8005C374
// line start: 2898
// line end:   2905
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C404
// line start: 2913
// line end:   2984
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 5
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8005C790
// line start: 2992
// line end:   3013
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C890
// line start: 3021
// line end:   3046
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C950
// line start: 3052
// line end:   3064
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C9F0
// line start: 3068
// line end:   3232
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x84
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	// size: 0x6C
	register struct TextDat *objdat;
	// register: 21
	register int otad;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFF8C
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4c;
	// register: 19
	register int frame;
	// register: 2
	register unsigned int rnd;
	// register: 18
	register unsigned int rot;
}


// address: 0x8005D9B4
// line start: 3239
// line end:   3297
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DCF4
// line start: 3303
// line end:   3328
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8005DDF0
// line start: 3333
// line end:   3349
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005DE6C
// line start: 3356
// line end:   3381
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DFAC
// line start: 3388
// line end:   3389
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DFB4
// line start: 3396
// line end:   3703
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E3F4
// line start: 3715
// line end:   3723
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E45C
// line start: 3730
// line end:   3769
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 8
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005E944
// line start: 3816
// line end:   3833
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E9E0
// line start: 3842
// line end:   3963
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 20
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x23A8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005ED14
// line start: 3969
// line end:   3972
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ED3C
// line start: 3980
// line end:   4005
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 17
	// size: 0xC
	register struct map_info *dm;
}


// address: 0x8005EEE4
// line start: 4012
// line end:   4064
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005EEEC
// line start: 4070
// line end:   4163
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F2FC
// line start: 4230
// line end:   4254
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F424
// line start: 4258
// line end:   4263
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F454
// line start: 4280
// line end:   4314
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F5F0
// line start: 4321
// line end:   4333
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F70C
// line start: 4341
// line end:   4358
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F7F8
// line start: 4366
// line end:   4376
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F8DC
// line start: 4384
// line end:   4398
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F9B8
// line start: 4406
// line end:   4411
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005F9FC
// line start: 4418
// line end:   4427
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FAD8
// line start: 4434
// line end:   4443
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FB48
// line start: 4450
// line end:   4459
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FC24
// line start: 4466
// line end:   4475
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FC90
// line start: 4482
// line end:   4485
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC98
// line start: 4492
// line end:   4559
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFC8
// line start: 4562
// line end:   4562
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FFF0
// line start: 4563
// line end:   4563
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060034
// line start: 4564
// line end:   4564
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060068
// line start: 4565
// line end:   4565
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006009C
// line start: 4566
// line end:   4566
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800600D0
// line start: 4567
// line end:   4567
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060104
// line start: 4568
// line end:   4568
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060138
// line start: 4569
// line end:   4569
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060170
// line start: 4570
// line end:   4570
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800601A4
// line start: 4571
// line end:   4571
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800601CC
// line start: 4572
// line end:   4572
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800601F4
// line start: 4573
// line end:   4573
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006021C
// line start: 4574
// line end:   4574
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80060264
// line start: 4575
// line end:   4575
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006028C
// line start: 4576
// line end:   4576
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800602B4
// line start: 4577
// line end:   4577
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800602E8
// line start: 4578
// line end:   4578
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060310
// line start: 4579
// line end:   4579
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060354
// line start: 4580
// line end:   4580
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060388
// line start: 4581
// line end:   4581
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800603BC
// line start: 4583
// line end:   4583
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060408
// line start: 4584
// line end:   4584
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060454
// line start: 4585
// line end:   4585
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x800604A0
// line start: 4586
// line end:   4586
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800604F4
// line start: 4587
// line end:   4587
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060540
// line start: 4588
// line end:   4588
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x8006058C
// line start: 4589
// line end:   4589
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800605DC
// line start: 4590
// line end:   4590
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060628
// line start: 4591
// line end:   4591
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060674
// line start: 4592
// line end:   4592
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800606C0
// line start: 4593
// line end:   4593
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x8006070C
// line start: 4594
// line end:   4594
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060758
// line start: 4595
// line end:   4595
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x800607A4
// line start: 4596
// line end:   4596
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800607F4
// line start: 4597
// line end:   4597
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060840
// line start: 4599
// line end:   4599
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060890
// line start: 4601
// line end:   4601
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x800608DC
// line start: 4602
// line end:   4602
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060928
// line start: 4603
// line end:   4603
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060974
// line start: 4604
// line end:   4604
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x800609C0
// line start: 4605
// line end:   4605
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060A0C
// line start: 4606
// line end:   4606
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060A58
// line start: 4607
// line end:   4607
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060AA4
// line start: 4608
// line end:   4608
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060AF0
// line start: 4609
// line end:   4609
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80060B3C
// line start: 4610
// line end:   4610
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80060B88
// line start: 4611
// line end:   4611
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80060BD4
// line start: 4619
// line end:   4620
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060C08
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060C08(struct POLY_FT4 **Prim) {
}


// address: 0x80060C84
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80060C84(int PNum) {
}


// address: 0x80060CD4
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80060CD4(struct CPlayer *this) {
}


// address: 0x80060CE0
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060CEC
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060CF8
// line start: 160
// line end:   220
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto unsigned short LAVAPAL[16];
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned short WATERPAL[16];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT ClutR;
	// register: 16
	register int clut;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	// size: 0x8
	register struct PAL *Pal;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// register: 16
	register bool ch;
	{
		{
			{
				// register: 4
				register int i;
				{
					{
						// register: 10
						register int i;
						{
							// register: 11
							register unsigned short col1;
							// register: 3
							register unsigned short col2;
							// register: 14
							register unsigned char sb;
							// register: 13
							register unsigned char sg;
							// register: 8
							register unsigned char dr;
							// register: 7
							register unsigned char dg;
							// register: 5
							register unsigned char db;
						}
					}
				}
			}
		}
	}
}


// address: 0x80060F48
// line start: 226
// line end:   291
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80061404
// line start: 295
// line end:   322
unsigned char ForceQuests__Fv() {
	{
		// register: 6
		register int i;
		{
			// register: 16
			register int ql;
			// register: 18
			register int qx;
			// register: 17
			register int qy;
			{
				// register: 4
				register int j;
			}
		}
	}
}


// address: 0x800615A8
// line start: 327
// line end:   333
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x8006163C
// line start: 339
// line end:   444
void CheckQuestKill__FiUc(int m, unsigned char sendmsg) {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 4
											register int i;
											// register: 7
											register int j;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80061C1C
// line start: 478
// line end:   503
void SetReturnLvlPos__Fv() {
}


// address: 0x80061D2C
// line start: 511
// line end:   516
void GetReturnLvlPos__Fv() {
}


// address: 0x80061D80
// line start: 523
// line end:   545
void ResyncMPQuests__Fv() {
}


// address: 0x80061EBC
// line start: 555
// line end:   644
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006241C
// line start: 660
// line end:   701
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	// register: 10
	register unsigned char r;
	// register: 9
	register unsigned char g;
	// register: 8
	register unsigned char b;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80062648
// line start: 710
// line end:   740
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062810
// line start: 750
// line end:   771
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800628A8
// line start: 779
// line end:   800
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x800629C0
// line start: 807
// line end:   825
void QuestlogUp__Fv() {
}


// address: 0x80062A10
// line start: 833
// line end:   853
void QuestlogDown__Fv() {
}


// address: 0x80062A78
// line start: 862
// line end:   874
void RemoveQLog__Fv() {
}


// address: 0x80062AF0
// line start: 879
// line end:   900
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062BB4
// line start: 908
// line end:   910
void QuestlogESC__Fv() {
}


// address: 0x80062BDC
// line start: 917
// line end:   937
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062C5C
// line start: 984
// line end:   984
void _GLOBAL__D_questlog() {
}


// address: 0x80062C84
// line start: 984
// line end:   984
void _GLOBAL__I_questlog() {
}


// address: 0x80062CAC
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80062CB8
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80062CB8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80062CD8
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_80062CD8(struct Dialog *this, int Type) {
}


// address: 0x80062CE0
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80062CE0(struct Dialog *this, int Type) {
}


// address: 0x80062CE8
// line start: 78
// line end:   78
void ___6Dialog_addr_80062CE8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80062D10
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80062D10(struct Dialog *this) {
}


// address: 0x80062D6C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062D6C(struct TextDat *this, int PalNum) {
}


// address: 0x80062D88
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062D88(struct TextDat *this, int FrNum) {
}


// address: 0x80062DA4
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80062F6C
// line start: 315
// line end:   373
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80063064
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x8006306C
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x800630DC
// line start: 177
// line end:   252
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8012C92C
	static unsigned char DaveFix;
}


// address: 0x800634B4
// line start: 259
// line end:   266
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063548
// line start: 273
// line end:   286
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x800635E0
// line start: 292
// line end:   296
void AddSLine__Fi(int y) {
}


// address: 0x80063630
// line start: 302
// line end:   303
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063658
// line start: 312
// line end:   321
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006370C
// line start: 326
// line end:   418
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063B94
// line start: 426
// line end:   484
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x800641B4
// line start: 491
// line end:   505
void S_StartSmith__Fv() {
}


// address: 0x8006433C
// line start: 511
// line end:   538
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800644F4
// line start: 544
// line end:   562
void S_StartSBuy__Fv() {
}


// address: 0x80064624
// line start: 568
// line end:   609
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80064844
// line start: 615
// line end:   645
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064994
// line start: 651
// line end:   662
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064A78
// line start: 668
// line end:   720
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80064CA0
// line start: 726
// line end:   772
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800650D0
// line start: 780
// line end:   788
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065174
// line start: 793
// line end:   814
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065354
// line start: 819
// line end:   877
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065824
// line start: 886
// line end:   898
void S_StartWitch__Fv() {
}


// address: 0x80065964
// line start: 904
// line end:   941
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80065B3C
// line start: 947
// line end:   967
void S_StartWBuy__Fv() {
}


// address: 0x80065C68
// line start: 973
// line end:   993
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065D8C
// line start: 999
// line end:   1059
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800663E4
// line start: 1068
// line end:   1074
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x8006646C
// line start: 1080
// line end:   1089
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800665EC
// line start: 1095
// line end:   1136
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066A0C
// line start: 1145
// line end:   1151
void S_StartNoMoney__Fv() {
}


// address: 0x80066A74
// line start: 1157
// line end:   1162
void S_StartNoRoom__Fv() {
}


// address: 0x80066AD4
// line start: 1168
// line end:   1240
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066E4C
// line start: 1246
// line end:   1264
void S_StartBoy__Fv() {
}


// address: 0x80066FDC
// line start: 1271
// line end:   1300
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067164
// line start: 1308
// line end:   1328
void S_StartHealer__Fv() {
}


// address: 0x80067338
// line start: 1334
// line end:   1356
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800674A4
// line start: 1362
// line end:   1379
void S_StartHBuy__Fv() {
}


// address: 0x800675C4
// line start: 1385
// line end:   1394
void S_StartStory__Fv() {
}


// address: 0x800676B4
// line start: 1400
// line end:   1404
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800676E8
// line start: 1412
// line end:   1417
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800677BC
// line start: 1423
// line end:   1494
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006821C
// line start: 1503
// line end:   1527
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800683F0
// line start: 1533
// line end:   1567
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x80068620
// line start: 1574
// line end:   1584
void S_StartTavern__Fv() {
}


// address: 0x80068718
// line start: 1590
// line end:   1599
void S_StartBarMaid__Fv() {
}


// address: 0x800687EC
// line start: 1605
// line end:   1614
void S_StartDrunk__Fv() {
}


// address: 0x800688C0
// line start: 1620
// line end:   1694
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068BB0
// line start: 1701
// line end:   1705
void DrawSText__Fv() {
}


// address: 0x80068BF0
// line start: 1710
// line end:   1724
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068CB8
// line start: 1728
// line end:   1781
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068E64
// line start: 1789
// line end:   1854
void STextESC__Fv() {
}


// address: 0x80068FC0
// line start: 1861
// line end:   1896
void STextUp__Fv() {
}


// address: 0x80069158
// line start: 1906
// line end:   1939
void STextDown__Fv() {
}


// address: 0x80069308
// line start: 1951
// line end:   1973
void S_SmithEnter__Fv() {
}


// address: 0x800693DC
// line start: 1980
// line end:   1991
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069458
// line start: 1999
// line end:   2009
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800694D4
// line start: 2017
// line end:   2108
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069920
// line start: 2117
// line end:   2141
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069B14
// line start: 2147
// line end:   2181
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069D38
// line start: 2189
// line end:   2215
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069EC0
// line start: 2222
// line end:   2261
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x8006A0F0
// line start: 2268
// line end:   2298
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A3A8
// line start: 2307
// line end:   2331
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006A60C
// line start: 2337
// line end:   2393
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A900
// line start: 2400
// line end:   2417
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AA04
// line start: 2424
// line end:   2442
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AC74
// line start: 2448
// line end:   2467
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ADD0
// line start: 2474
// line end:   2491
void S_WitchEnter__Fv() {
}


// address: 0x8006AE80
// line start: 2498
// line end:   2531
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B080
// line start: 2536
// line end:   2567
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B26C
// line start: 2575
// line end:   2592
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B370
// line start: 2599
// line end:   2614
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B4E8
// line start: 2620
// line end:   2639
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B644
// line start: 2646
// line end:   2674
void S_BoyEnter__Fv() {
}


// address: 0x8006B77C
// line start: 2681
// line end:   2692
void BoyBuyItem__Fv() {
}


// address: 0x8006B800
// line start: 2698
// line end:   2745
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BAA4
// line start: 2750
// line end:   2784
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BC7C
// line start: 2790
// line end:   2812
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BFC8
// line start: 2819
// line end:   2854
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C0E4
// line start: 2859
// line end:   2877
void S_HealerEnter__Fv() {
}


// address: 0x8006C17C
// line start: 2884
// line end:   2915
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C388
// line start: 2923
// line end:   2936
void S_StoryEnter__Fv() {
}


// address: 0x8006C420
// line start: 2943
// line end:   2962
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C59C
// line start: 2969
// line end:   3011
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006C794
// line start: 3020
// line end:   3031
void S_TavernEnter__Fv() {
}


// address: 0x8006C804
// line start: 3038
// line end:   3050
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C874
// line start: 3057
// line end:   3068
void S_DrunkEnter__Fv() {
}


// address: 0x8006C8E4
// line start: 3075
// line end:   3140
void STextEnter__Fv() {
}


// address: 0x8006CAF0
// line start: 3145
// line end:   3238
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CC20
// line start: 3243
// line end:   3245
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CC34
// line start: 3324
// line end:   3324
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CC5C
// line start: 3324
// line end:   3324
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006CC84
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006CC84(struct CPad *this) {
}


// address: 0x8006CCAC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8006CCAC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006CCCC
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8006CCCC(struct Dialog *this, int Type) {
}


// address: 0x8006CCD4
// line start: 78
// line end:   78
void ___6Dialog_addr_8006CCD4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006CCFC
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8006CCFC(struct Dialog *this) {
}


// address: 0x8006CD58
// line start: 129
// line end:   207
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006CF08
// line start: 216
// line end:   269
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	// register: 9
	register int i;
	// register: 14
	register int j;
	// register: 3
	register int xx;
	// register: 5
	register int yy;
	// register: 7
	register long v1;
	// register: 4
	register long v2;
	// register: 3
	register long v3;
	// register: 8
	register long v4;
	// register: 25
	register long ii;
	{
		{
			// register: 12
			register unsigned short *Map;
			{
				{
					{
						{
							// register: 2
							register long Dave;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006D100
// line start: 276
// line end:   323
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	// register: 4
	register long v1;
	// register: 9
	register long v2;
	// register: 9
	register long v3;
	// register: 3
	register long v4;
}


// address: 0x8006D1F0
// line start: 330
// line end:   406
void T_Pass3__Fv() {
	// register: 19
	register unsigned char *pSector;
	// register: 16
	register int xx;
	// register: 10
	register int yy;
	{
		// register: 5
		register int y;
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8006D5B0
// line start: 415
// line end:   468
void CreateTown__Fi(int entry) {
	{
		// register: 6
		register int y;
		{
			{
				// register: 4
				register int x;
			}
		}
	}
}


// address: 0x8006D718
// line start: 530
// line end:   562
unsigned char *GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len) {
	// register: 18
	// size: 0x14
	register struct FileIO *MyIo;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto char SmallName[20];
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register int FileLen;
}


// address: 0x8006D7FC
// line start: 574
// line end:   601
void GRL_StripDir__FPcPCc(char *Dest, char *Src) {
	// register: 17
	register char *BSlash;
	// register: 3
	register char *FSlash;
	{
		{
			// register: 5
			register char *Last;
		}
	}
}


// address: 0x8006D894
// line start: 76
// line end:   81
void InitVPTriggers__Fv() {
}


// address: 0x8006D8DC
// line start: 89
// line end:   130
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006DBF4
// line start: 135
// line end:   163
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006DEA4
// line start: 170
// line end:   219
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E304
// line start: 226
// line end:   273
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006E780
// line start: 280
// line end:   339
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EC8C
// line start: 345
// line end:   355
void Freeupstairs__Fv() {
	// register: 8
	register int j;
	// register: 9
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
}


// address: 0x8006ED4C
// line start: 362
// line end:   373
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006EE40
// line start: 380
// line end:   391
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006EF34
// line start: 398
// line end:   409
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F028
// line start: 427
// line end:   479
void CheckTrigForce__Fv() {
	// register: 21
	register int ocursmx;
	// register: 20
	register int ocursmy;
	{
		{
			{
				// register: 19
				register int i;
				{
					{
						// register: 19
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8006F344
// line start: 489
// line end:   510
void FadeGameOut__Fv() {
}


// address: 0x8006F3E0
// line start: 515
// line end:   522
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F444
// line start: 527
// line end:   669
void CheckTriggers__Fi(int pnum) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	{
		// register: 23
		register int i;
		{
			{
				{
					{
						{
							// register: 4
							register unsigned char abortflag;
							// register: 17
							register int dx;
							// register: 16
							register int dy;
							// register: 19
							register char m;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006F960
// line start: 45
// line end:   94
int GetManaAmount__Fii(int id, int sn) {
	// register: 3
	register int i;
	// register: 8
	register int sl;
	// register: 6
	register int ma;
	// register: 7
	register int adj;
}


// address: 0x8006FC28
// line start: 101
// line end:   138
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006FD6C
// line start: 144
// line end:   165
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8006FE0C
// line start: 172
// line end:   204
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x800700B8
// line start: 209
// line end:   244
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8007036C
// line start: 249
// line end:   272
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x800705D0
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800705D8
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070640
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070660
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800706C0
// line start: 167
// line end:   194
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070750
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x800707A0
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x800707E4
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80070824
// line start: 261
// line end:   275
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x800708A8
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x80070908
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80070958
// line start: 94
// line end:   99
void ClrCursor__Fi(int num) {
}


// address: 0x800709A8
// line start: 108
// line end:   171
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80070E64
// line start: 182
// line end:   187
void CloseInvChr__Fv() {
}


// address: 0x80070EB4
// line start: 192
// line end:   195
int LeftOf__Fi(int dir) {
}


// address: 0x80070ECC
// line start: 199
// line end:   202
int RightOf__Fi(int dir) {
}


// address: 0x80070EE8
// line start: 211
// line end:   222
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80070F94
// line start: 270
// line end:   305
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071058
// size: 0x94
// line start: 318
// line end:   341
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x8007114C
// line start: 350
// line end:   351
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071154
// line start: 360
// line end:   363
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071198
// line start: 372
// line end:   375
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800711DC
// line start: 416
// line end:   474
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8007143C
// line start: 484
// line end:   537
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800715EC
// line start: 545
// line end:   564
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071648
// line start: 572
// line end:   575
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071684
// line start: 584
// line end:   605
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071748
// line start: 613
// line end:   736
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80071B54
// line start: 746
// line end:   780
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071C98
// line start: 787
// line end:   830
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80071D8C
// line start: 841
// line end:   887
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071EA4
// line start: 899
// line end:   907
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80071EF8
// line start: 915
// line end:   1025
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 18
	register int rnd;
	// register: 22
	register int newdir;
	// register: 18
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80072304
// line start: 1035
// line end:   1095
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072620
// line start: 1103
// line end:   1167
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 17
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x800729C0
// line start: 1177
// line end:   1199
void show_combos__7GamePad(struct GamePad *this) {
	// register: 23
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072B98
// line start: 1267
// line end:   1502
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					// register: 6
					register unsigned long msk;
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007321C
// line start: 1507
// line end:   1536
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC0
	// size: 0x94
	auto struct GamePad GPad1;
	// address: 0xFFFFFF58
	// size: 0x94
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073300
// line start: 1542
// line end:   1598
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x94
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x94
	register struct GamePad *GPad2;
}


// address: 0x800733E4
// line start: 1604
// line end:   1606
void Init_GamePad__Fv() {
}


// address: 0x80073414
// line start: 1611
// line end:   1625
void InitGamePadVars__Fv() {
}


// address: 0x800734A4
// line start: 1629
// line end:   1638
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073514
// line start: 1642
// line end:   1645
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x8007353C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8007353C(struct CBlocks *this) {
}


// address: 0x80073550
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073550(struct CPad *this) {
}


// address: 0x80073578
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80073578(struct CPad *this) {
}


// address: 0x800735A0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800735A0(struct CPad *this) {
}


// address: 0x800735C8
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x800735F4
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x80073628
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073648
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073668
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x80073674
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073684
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x800736AC
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073758
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800737A0
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800737AC
// line start: 92
// line end:   137
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 17
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073918
// line start: 147
// line end:   167
char *GetStr__Fi(int StrId) {
}


// address: 0x80073980
// line start: 173
// line end:   176
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x800739B4
// line start: 187
// line end:   222
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073B18
// line start: 234
// line end:   243
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073B70
// line start: 252
// line end:   254
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073B7C
// line start: 264
// line end:   282
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073C44
// line start: 290
// line end:   316
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073CC4
// line start: 97
// line end:   176
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// address: 0xFFFFFFAC
	// size: 0x28
	auto struct POLY_FT4 *FT5;
	// register: 17
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
	{
		{
			{
				{
					// register: 16
					register int yness;
					// register: 16
					register int shape;
					// register: 19
					register int redness;
					// register: 18
					register int bluness;
					{
						// register: 21
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80074208
// line start: 179
// line end:   203
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074388
// line start: 207
// line end:   225
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800744E8
// line start: 229
// line end:   244
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074580
// line start: 251
// line end:   266
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074630
// line start: 273
// line end:   274
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074694
// line start: 278
// line end:   281
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800747AC
// line start: 285
// line end:   287
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074844
// line start: 291
// line end:   293
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800748DC
// line start: 297
// line end:   298
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074944
// line start: 302
// line end:   313
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800749E4
// line start: 317
// line end:   332
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x80074AC4
// line start: 337
// line end:   352
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x80074B9C
// line start: 357
// line end:   369
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074C2C
// line start: 373
// line end:   387
void FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 22
	register char xflip;
	// register: 23
	register char yflip;
	// register: 16
	register int frame;
	// register: 21
	register int sfx;
}


// address: 0x80074D48
// line start: 391
// line end:   403
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074DE4
// line start: 407
// line end:   408
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074E4C
// line start: 412
// line end:   413
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074EB4
// line start: 417
// line end:   426
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074FE8
// line start: 430
// line end:   439
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x8007512C
// line start: 443
// line end:   444
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075194
// line start: 448
// line end:   449
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800751EC
// line start: 453
// line end:   463
void FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 9
			register char xflip;
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800752B8
// line start: 468
// line end:   469
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007531C
// line start: 473
// line end:   475
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075324
// line start: 478
// line end:   553
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int x, int y, int OtPos) {
	// register: 16
	register int size;
	{
		{
			// register: 16
			// size: 0x84
			register struct CPlayer *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x6C
					auto struct TextDat *ThisDat;
					// register: 4
					register int xr1;
					// register: 3
					register int yr1;
					// register: 6
					register int xr2;
					// register: 7
					register int yr2;
					// register: 17
					register int radius;
					// address: 0xFFFFFFC8
					auto int angle;
					// register: 3
					register unsigned int bright;
					// register: 21
					register unsigned int r;
					// register: 23
					register unsigned int g;
					// register: 20
					register unsigned int b;
					// register: 22
					register char flip;
					{
						// register: 16
						register int i;
						{
							// register: 16
							register int i;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007584C
// line start: 558
// line end:   563
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800758F4
// line start: 567
// line end:   568
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800758FC
// line start: 571
// line end:   572
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075930
// line start: 576
// line end:   577
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075954
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075954(struct POLY_FT4 **Prim) {
}


// address: 0x800759D0
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_800759D0(int PNum) {
}


// address: 0x80075A20
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075A20(struct CPlayer *this) {
}


// address: 0x80075A2C
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075A2C(struct CPlayer *this) {
}


// address: 0x80075A38
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075A38(struct CPlayer *this) {
}


// address: 0x80075A44
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075A44(struct TextDat *this) {
}


// address: 0x80075A58
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075A58(struct TextDat *this, int FrNum) {
}


// address: 0x80075A74
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075AAC
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075B2C
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075BC4
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075C74
// line start: 156
// line end:   199
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	{
		// register: 9
		register unsigned int f;
		{
			{
				{
					{
						// register: 7
						register int i;
						{
							{
								{
									// register: 4
									register int minl;
									// register: 2
									register int maxl;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80075E30
// size: 0x28
// line start: 287
// line end:   314
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x80075FC4
// size: 0x28
// line start: 319
// line end:   338
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007607C
// size: 0x28
// line start: 354
// line end:   430
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 22
	register int AnimFrame;
	// register: 18
	register int XOffSet;
	// register: 17
	register int YOffSet;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *PalFr;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	register int LoadIndex;
	// register: 23
	register int Creature;
	{
		{
		}
	}
}


// address: 0x80076310
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x800763E8
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076470
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007649C
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764C8
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764F4
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076520
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007654C
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076570
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076594
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765C0
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765EC
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076618
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076644
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076670
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007669C
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766C8
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766F4
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076720
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007674C
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076778
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767A4
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767D0
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767FC
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076828
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076854
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076880
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768AC
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768D8
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076904
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076930
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007695C
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076988
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769B4
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769E0
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A0C
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A38
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A64
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A90
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ABC
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AE8
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B14
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076BA8
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076C38
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076CC8
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076D58
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076DE8
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E14
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E40
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E6C
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E98
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EC4
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EF0
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F1C
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F48
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F74
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FA0
// size: 0x28
// line start: 1089
// line end:   1115
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x800770F8
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800771C4
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077290
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772BC
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772E8
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077314
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077340
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077364
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077390
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773BC
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773E8
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077414
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077440
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007746C
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077498
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774C4
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774F0
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007751C
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077548
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077574
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775A0
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775CC
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775F8
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077624
// size: 0x28
// line start: 1390
// line end:   1422
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	{
		// register: 20
		register int PhysFrame;
		{
			{
				// register: 16
				// size: 0x28
				register struct POLY_FT4 *ShadFt4;
			}
		}
	}
}


// address: 0x800777B8
// size: 0x28
// line start: 1446
// line end:   1470
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	// register: 16
	register int PhysFrame;
	{
		{
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x80077940
// size: 0x28
// line start: 1480
// line end:   1481
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077964
// size: 0x28
// line start: 1491
// line end:   1492
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077990
// size: 0x28
// line start: 1502
// line end:   1503
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779BC
// size: 0x28
// line start: 1513
// line end:   1514
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779E8
// size: 0x28
// line start: 1524
// line end:   1525
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A14
// size: 0x28
// line start: 1535
// line end:   1536
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A40
// size: 0x28
// line start: 1546
// line end:   1547
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A6C
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A98
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AC4
// size: 0x28
// line start: 1579
// line end:   1580
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AF0
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B1C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077B1C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077B58
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077B58(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077B80
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077B80(struct POLY_FT4 **Prim) {
}


// address: 0x80077BFC
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077BFC(struct CBlocks *this) {
}


// address: 0x80077C08
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077C08(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077C40
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077C40(struct TextDat *this, int Creature) {
}


// address: 0x80077CB8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077CB8(struct TextDat *this) {
}


// address: 0x80077CCC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077CCC(struct TextDat *this, int FrNum) {
}


// address: 0x80077CE8
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x80077CF0
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80077CF8
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077D00
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077D08
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80077D10
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077D40
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x80077D4C
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077E50
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x80077E58
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077EAC
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077F68
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077FF8
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078050
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078100
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80078154
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80078174
// line start: 139
// line end:   163
void M_ClearSquares__Fi(int i) {
	// register: 8
	register int mx;
	// register: 10
	register int my;
	// register: 12
	register int mt;
	// register: 11
	register int mt2;
	{
		// register: 5
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x800782E0
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007831C
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80078368
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x800783B0
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078410
// line start: 221
// line end:   304
void M_Enemy__Fi(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 22
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 21
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 22
			register int _my;
		}
	}
}


// address: 0x80078984
// line start: 309
// line end:   318
void ClearMVars__Fi(int i) {
}


// address: 0x800789F8
// line start: 322
// line end:   429
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80078E44
// line start: 434
// line end:   442
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078EF4
// line start: 447
// line end:   475
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80079038
// line start: 479
// line end:   498
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079130
// line start: 502
// line end:   510
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x800791D8
// line start: 514
// line end:   559
unsigned char SpawnSkeleton__Fiii(int ii, int x, int y) {
	// address: 0xFFFFFF98
	// size: 0x24
	auto int monstok[3][3];
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 20
	register unsigned char savail;
}


// address: 0x800793C8
// line start: 563
// line end:   580
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x800794A8
// line start: 584
// line end:   613
unsigned char PosOkMonst__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int mi;
	// register: 19
	register unsigned char fire;
}


// address: 0x80079724
// line start: 618
// line end:   649
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079A2C
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079D28
// line start: 203
// line end:   276
void SetAutomapView__Fii(int x, int y) {
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 2
	register unsigned short s;
	// register: 3
	register unsigned short d;
}


// address: 0x8007A178
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A34C
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A494
// line start: 184
// line end:   198
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A59C
// line start: 206
// line end:   207
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007A5D4
// line start: 214
// line end:   222
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007A644
// line start: 230
// line end:   232
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007A664
// line start: 239
// line end:   243
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007A69C
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007A6FC
// line start: 262
// line end:   277
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007A878
// line start: 283
// line end:   284
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007A884
// line start: 289
// line end:   315
void GetPortalLevel__Fv() {
}


// address: 0x8007AA28
// line start: 321
// line end:   334
void GetPortalLvlPos__Fv() {
}


// address: 0x8007AAD8
// size: 0xB8
// line start: 61
// line end:   62
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007AB04
// line start: 70
// line end:   70
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007AB2C
// line start: 78
// line end:   84
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007AB5C
// line start: 92
// line end:   108
void Dump__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x8007AC00
// line start: 117
// line end:   123
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007AC68
// size: 0xF1C
// line start: 132
// line end:   152
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AD3C
// line start: 160
// line end:   171
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007ADAC
// line start: 179
// line end:   185
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AE20
// line start: 195
// line end:   250
void WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this) {
	// register: 16
	register unsigned char *DecDest;
	// register: 19
	register long hndDec;
	// register: 18
	register int CompSize;
	{
		{
			// register: 16
			register long hndSplit;
		}
	}
}


// address: 0x8007B034
// line start: 258
// line end:   302
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x8007B1D4
// line start: 310
// line end:   356
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Dest) {
	// register: 20
	register unsigned char *DestPtr;
	{
		// register: 22
		register int f;
		{
			// register: 16
			register long hnd;
			{
				{
					// register: 17
					register unsigned char *MyData;
				}
			}
		}
	}
}


// address: 0x8007B334
// line start: 364
// line end:   401
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Src) {
	{
		// register: 20
		register int f;
		{
			{
				{
					// register: 17
					register long hnd;
					// register: 16
					register unsigned char *DestData;
					// register: 21
					register int Offset;
				}
			}
		}
	}
}


// address: 0x8007B474
// line start: 408
// line end:   414
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B4AC
// line start: 418
// line end:   420
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B4E4
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007B528
// line start: 85
// line end:   116
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007B5E4
// line start: 126
// line end:   141
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007B6C4
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8007B6C4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007B6E4
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8007B6E4(struct Dialog *this, int Type) {
}


// address: 0x8007B6EC
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8007B6EC(struct Dialog *this, int Type) {
}


// address: 0x8007B6F4
// line start: 78
// line end:   78
void ___6Dialog_addr_8007B6F4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007B71C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8007B71C(struct Dialog *this) {
}


// address: 0x8007B778
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B7BC
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007B7CC
// line start: 284
// line end:   285
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E698
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001E6B8
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001E6C8
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001E6D8
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001E6F8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E724
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001E734
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001E744
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001E770
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001E850
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8B0
// line start: 31
// line end:   39
void main();

// address: 0x8001E900
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001E908
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001E910
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001E918
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001E930
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001E984
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E994
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9B8
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001E9DC
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC10
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x8001EC60
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x8001ECB0
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED24
// size: 0x5C
// line start: 141
// line end:   211
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	// register: 16
	// size: 0x5C
	register struct TASK *RetTask;
	// register: 17
	register long hndTask;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct GAL_STRUCT G[4];
}


// address: 0x8001EF0C
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0CC
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1A8
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F230
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x8001F25C
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x8001F2AC
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2BC
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F338
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F380
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3C4
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3D4
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3EC
// size: 0x5C
// line start: 482
// line end:   498
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F444
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F45C
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x8001F480
// line start: 543
// line end:   583
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	// register: 17
	register int TasksKilled;
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	// register: 18
	register unsigned char WasCurrentTaskKilled;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F580
// line start: 594
// line end:   610
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F5F8
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F60C
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F620
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F634
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F648
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F65C
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F670
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6BC
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6DC
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F74C
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x8001F79C
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7B4
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7CC
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7E4
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7FC
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F814
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x8001F848
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F858
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F870
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F898
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8C4
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F900
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA78
// line start: 174
// line end:   175
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA88
// line start: 194
// line end:   245
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
}


// address: 0x8001FBBC
// line start: 253
// line end:   275
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC74
// line start: 288
// line end:   358
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x8001FD94
// line start: 373
// line end:   450
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x20
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x8001FF2C
// line start: 464
// line end:   486
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF8C
// line start: 499
// line end:   530
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020008
// line start: 542
// line end:   581
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200A8
// line start: 594
// line end:   618
unsigned long GAL_GetFreeMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002011C
// line start: 632
// line end:   656
unsigned long GAL_GetUsedMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020190
// line start: 671
// line end:   697
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x8002020C
// line start: 709
// line end:   715
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002022C
// line start: 729
// line end:   736
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020278
// line start: 751
// line end:   764
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202A8
// line start: 778
// line end:   788
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202D8
// line start: 801
// line end:   802
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020308
// size: 0x20
// line start: 816
// line end:   841
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020360
// size: 0x20
// line start: 853
// line end:   886
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x800203C8
// size: 0x20
// line start: 897
// line end:   932
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80020430
// size: 0x28
// line start: 944
// line end:   965
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002046C
// line start: 978
// line end:   1031
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x20
	register struct MEM_HDR *NextIndex;
	// register: 19
	register void *Start;
	// register: 21
	register void *End;
	{
		// register: 2
		register void *ThisStart;
		// register: 4
		register void *ThisEnd;
	}
}


// address: 0x80020540
// line start: 1053
// line end:   1083
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002061C
// line start: 1107
// line end:   1194
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207B4
// size: 0x20
// line start: 1210
// line end:   1237
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned char Done;
	// register: 3
	register unsigned long ThisStart;
	// register: 2
	register unsigned long ThisEnd;
	// register: 5
	register unsigned long Start;
	// register: 6
	register unsigned long End;
}


// address: 0x80020820
// size: 0x20
// line start: 1249
// line end:   1266
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208A8
// line start: 1279
// line end:   1281
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208E8
// line start: 1293
// line end:   1313
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002096C
// line start: 1323
// line end:   1343
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020A08
// line start: 1354
// line end:   1358
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A70
// line start: 1378
// line end:   1392
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC4
// line start: 1406
// line end:   1422
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B18
// line start: 1436
// line end:   1453
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B9C
// line start: 1466
// line end:   1471
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BF8
// line start: 1486
// line end:   1538
unsigned char GAL_CheckMem(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80020CF4
// line start: 1553
// line end:   1578
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DA0
// line start: 1591
// line end:   1606
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DF8
// line start: 1618
// line end:   1620
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E28
// size: 0x4
// line start: 1633
// line end:   1634
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E38
// line start: 1645
// line end:   1646
char *GAL_GetLastErrorText();

// address: 0x80020E60
// line start: 1658
// line end:   1685
int GAL_HowManyEmptyRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020EC8
// line start: 1695
// line end:   1720
int GAL_HowManyUsedRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020F30
// line start: 1729
// line end:   1730
void GAL_SetTimeStamp(int Time);

// address: 0x80020F40
// line start: 1740
// line end:   1741
void GAL_IncTimeStamp();

// address: 0x80020F60
// line start: 1750
// line end:   1751
int GAL_GetTimeStamp();

// address: 0x80020F70
// line start: 1767
// line end:   1778
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FC0
// line start: 1798
// line end:   1803
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021010
// line start: 1818
// line end:   1835
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210BC
// line start: 1846
// line end:   1857
long GAL_GetSize(long hnd) {
}


// address: 0x80021110
// line start: 1871
// line end:   1963
unsigned char GazDefragMem(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x20
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x20
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80021278
// line start: 1976
// line end:   2000
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x8002131C
// line start: 2013
// line end:   2019
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021350
// line start: 2032
// line end:   2042
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213BC
// line start: 2060
// line end:   2095
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x20
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x800214B4
// size: 0x20
// line start: 2134
// line end:   2153
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214F0
// line start: 2167
// line end:   2196
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021580
// line start: 2208
// line end:   2227
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x800215FC
// line start: 2240
// line end:   2290
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x800216B0
// line start: 2301
// line end:   2324
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x8002170C
// line start: 2335
// line end:   2340
void GAL_MemDump(unsigned long Type);

// address: 0x80021780
// line start: 2354
// line end:   2355
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021790
// line start: 2368
// line end:   2382
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217BC
// line start: 2394
// line end:   2406
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021804
// line start: 2415
// line end:   2416
int GAL_GetNumFreeHeaders();

// address: 0x80021814
// line start: 2420
// line end:   2421
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021824
// line start: 2431
// line end:   2438
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002183C
// line start: 2447
// line end:   2459
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021890
// line start: 2462
// line end:   2463
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218A0
// line start: 2476
// line end:   2525
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80023C5C
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CA8
// line start: 172
// line end:   479
int _doprnt(char *fmt0, char *argp, struct FILE *fp) {
	// register: 22
	register char *fmt;
	// register: 4
	register int ch;
	// address: 0xFFFFFFA8
	auto int cnt;
	// register: 16
	register int n;
	// register: 17
	register char *t;
	// register: 3
	register unsigned long _ulong;
	// register: 5
	register int base;
	// address: 0xFFFFFFB0
	auto int dprec;
	// register: 30
	register int fieldsz;
	// register: 19
	register int flags;
	// address: 0xFFFFFFB8
	auto int fpprec;
	// register: 20
	register int prec;
	// register: 20
	register int realsz;
	// register: 23
	register int size;
	// address: 0xFFFFFFC0
	auto int width;
	// register: 6
	register char sign;
	// address: 0xFFFFFFC8
	auto char *digs;
	// address: 0x80023DFC
	bool rflag;
	// address: 0x80024164
	bool nosign;
	// address: 0x80024210
	bool pforw;
	{
		// register: 2
		register char c;
		{
			{
				// register: 2
				register char *p;
			}
		}
	}
}


