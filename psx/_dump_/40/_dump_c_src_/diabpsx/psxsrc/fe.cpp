// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801356EC
// line start: 167
// line end:   172
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135718
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013579C
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135818
// line start: 199
// line end:   215
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 21
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x80135940
// line start: 222
// line end:   336
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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


// address: 0x80135F6C
// line start: 340
// line end:   353
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135FEC
// line start: 357
// line end:   413
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80136134
// line start: 420
// line end:   431
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013621C
// line start: 436
// line end:   448
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80136304
// line start: 457
// line end:   458
int FeGetCursor__Fv() {
}


// address: 0x80136318
// line start: 462
// line end:   464
void FeSelect__Fv() {
}


// address: 0x80136368
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
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


// address: 0x80136530
// line start: 531
// line end:   532
void InitDummyMenu__Fv() {
}


// address: 0x80136538
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80136658
// line start: 594
// line end:   607
void FeInitMainMenu__Fv() {
}


// address: 0x801366D4
// line start: 624
// line end:   644
void FeInitNewGameMenu__Fv() {
}


// address: 0x80136764
// line start: 649
// line end:   713
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80136918
// line start: 730
// line end:   745
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013699C
// line start: 749
// line end:   764
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136A20
// line start: 769
// line end:   772
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80136A68
// line start: 777
// line end:   827
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
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


// address: 0x80136EF0
// line start: 917
// line end:   927
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136F4C
// line start: 931
// line end:   939
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80136FA0
// line start: 944
// line end:   1074
void FeNewNameMenuCtrl__Fv() {
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
													// address: 0xFFFFFFD8
													// size: 0x2
													auto char asd[2];
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


// address: 0x80137568
// line start: 1080
// line end:   1105
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
					{
						// register: 2
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013767C
// line start: 1112
// line end:   1117
void FeEnterGame__Fv() {
}


// address: 0x801376A4
// line start: 1133
// line end:   1148
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80137724
// line start: 1152
// line end:   1160
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013778C
// line start: 1164
// line end:   1172
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801377FC
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x801378A0
// line start: 1217
// line end:   1238
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013798C
// line start: 1275
// line end:   1281
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801379D8
// line start: 1285
// line end:   1291
void FeInitBook1Menu__Fv() {
}


// address: 0x80137A28
// line start: 1295
// line end:   1301
void FeInitBook2Menu__Fv() {
}


// address: 0x80137A78
// line start: 1306
// line end:   1348
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137CBC
// line start: 1353
// line end:   1354
void PlayDemo__Fv() {
}


// address: 0x80137CD0
// line start: 1369
// line end:   1385
void FadeFEOut__Fv() {
}


// address: 0x80137D94
// line start: 1418
// line end:   1473
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80137F1C
// line start: 1482
// line end:   1501
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x80137FC8
// line start: 1514
// line end:   1712
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80138474
// line start: 1721
// line end:   1723
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


