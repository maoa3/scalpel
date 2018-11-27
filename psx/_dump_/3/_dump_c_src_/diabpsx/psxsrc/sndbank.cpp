// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x80090F10
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x80090FE0
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009104C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800910C4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80121788
	static int DestAddr;
}


// address: 0x8009113C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80091270
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800912C4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800912E8
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009134C
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

