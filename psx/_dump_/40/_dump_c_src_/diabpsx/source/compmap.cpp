// C:\diabpsx\SOURCE\COMPMAP.CPP

#include "types.h"

// address: 0x800811B8
// size: 0x170
// line start: 60
// line end:   63
struct CompLevelMaps *__13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj) {
}


// address: 0x80081224
// line start: 71
// line end:   72
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x800812B4
// line start: 80
// line end:   83
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x800812E4
// line start: 91
// line end:   93
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80081338
// size: 0x1258
// line start: 101
// line end:   111
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x800813B4
// line start: 119
// line end:   128
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x80081454
// line start: 152
// line end:   168
void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs) {
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x80081500
// line start: 176
// line end:   191
int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest) {
	// register: 17
	register unsigned char *BinPtr;
	{
		// register: 19
		register int f;
	}
}


// address: 0x800815AC
// line start: 199
// line end:   219
void MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		// register: 17
		register int f;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80081658
// line start: 229
// line end:   240
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x800816C4
// line start: 248
// line end:   257
int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj) {
	// register: 16
	register unsigned char *Data;
}


// address: 0x80081738
// line start: 265
// line end:   285
void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize) {
	// register: 17
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80081828
// size: 0x1258
// line start: 293
// line end:   331
struct DLevel *GetMap__4AMap(struct AMap *this) {
	// register: 16
	// size: 0x1258
	register struct DLevel *NewCurrLevel;
	{
		{
			// register: 17
			register long NewHnd;
		}
	}
}


// address: 0x80081948
// line start: 339
// line end:   353
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x800819D8
// line start: 361
// line end:   410
void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 17
	register unsigned char *Dest;
	// register: 17
	// size: 0x1258
	register struct DLevel *Dlev;
	// register: 2
	register long SplitHnd;
}


// address: 0x80081B9C
// line start: 418
// line end:   451
void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register unsigned char *Src;
}


