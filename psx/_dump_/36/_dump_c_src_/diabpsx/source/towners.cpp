// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x8003516C
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800351C0
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800351E0
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80035228
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80035388
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


// address: 0x80035440
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003556C
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800356A0
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800357D0
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035900
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035A30
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035B68
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035C98
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035DC8
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035EF8
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


// address: 0x800361BC
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80036248
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


// address: 0x800362EC
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


// address: 0x8003641C
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


// address: 0x80036450
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


// address: 0x80036484
// line start: 437
// line end:   449
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003656C
// line start: 455
// line end:   457
void TownHealer__Fv() {
}


// address: 0x80036594
// line start: 464
// line end:   467
void TownStory__Fv() {
}


// address: 0x800365BC
// line start: 474
// line end:   477
void TownDrunk__Fv() {
}


// address: 0x800365E4
// line start: 484
// line end:   487
void TownBoy__Fv() {
}


// address: 0x8003660C
// line start: 495
// line end:   498
void TownWitch__Fv() {
}


// address: 0x80036634
// line start: 505
// line end:   507
void TownBarMaid__Fv() {
}


// address: 0x8003665C
// line start: 514
// line end:   517
void TownCow__Fv() {
}


// address: 0x80036684
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


// address: 0x800368D4
// size: 0x98
// line start: 581
// line end:   586
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800369A8
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80120040
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012A3BC
	static int snLastCowSFX;
}


// address: 0x80036AC4
// line start: 647
// line end:   654
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80036B04
// line start: 661
// line end:   1074
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


