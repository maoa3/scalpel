// C:\diabpsx\PSXSRC\CPLAYER.CPP

#include "types.h"

// address: 0x800893F0
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x800894D4
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008952C
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80089588
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


// address: 0x800896D4
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


// address: 0x80089B00
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x80089B80
// line start: 282
// line end:   421
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
										// register: 21
										register int Frame;
										{
											{
												// register: 17
												register int FrmNum;
												// address: 0xFFFFFFC0
												// size: 0x8
												auto struct RECT R;
												// register: 20
												register int pOtPos;
												// register: 17
												register int PhaseFlag;
												// register: 16
												register int TeleFlag;
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


// address: 0x8008A0C0
// line start: 431
// line end:   444
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008A128
// line start: 456
// line end:   514
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008A1A4
// size: 0x4
// line start: 519
// line end:   549
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008A20C
// line start: 560
// line end:   561
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008A214
// line start: 570
// line end:   571
void Dump__7CPlayer(struct CPlayer *this) {
}


