// C:\diabpsx\PSXSRC\CREDITS.CPP

#include "types.h"

// address: 0x80124CE0
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x80124D1C
// line start: 222
// line end:   352
int PrintCredits__FPciiiii(char *Str, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFFA8
	auto char *EndPtr;
	// address: 0xFFFFFFB0
	auto int X;
	// register: 9
	register int x0;
	// register: 30
	register int x1;
	// register: 23
	register int x2;
	// register: 22
	register int x3;
	// register: 17
	register int Fade;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFB8
	auto int DoneFlag;
}


// address: 0x8012553C
// line start: 357
// line end:   375
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x8012560C
// line start: 382
// line end:   400
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x801256EC
// line start: 409
// line end:   463
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x78
	auto struct CScreen CreditsBack;
	// register: 30
	register int Y;
	// register: 18
	register int Fade;
	// register: 19
	register int Mode;
	// register: 21
	register int TextNo;
	// register: 23
	register unsigned long CreditsCount;
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


