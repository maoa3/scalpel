// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x8007AF18
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x8007AF24
// line start: 92
// line end:   162
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


// address: 0x8007B0F8
// line start: 171
// line end:   198
char *GetStr__Fi(int StrId) {
}


// address: 0x8007B174
// line start: 204
// line end:   211
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007B1B8
// line start: 222
// line end:   259
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


// address: 0x8007B2D0
// line start: 276
// line end:   285
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007B328
// line start: 294
// line end:   296
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x8007B334
// line start: 306
// line end:   326
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x8007B414
// line start: 334
// line end:   360
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


