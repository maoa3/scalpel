// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800373BC
// line start: 288
// line end:   301
void FreeGameMem__Fv() {
}


// address: 0x800373F4
// line start: 308
// line end:   324
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80037450
// line start: 329
// line end:   346
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800374C4
// line start: 362
// line end:   400
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80037588
// line start: 405
// line end:   489
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80037770
// line start: 495
// line end:   611
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x800378E0
// line start: 1045
// line end:   1125
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037CBC
// line start: 2148
// line end:   2195
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037CC4
// line start: 2202
// line end:   2362
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037D74
// line start: 2370
// line end:   2404
void LoadLvlGFX__Fv() {
	// register: 16
	register char *LoadFile;
}


// address: 0x80037E2C
// line start: 2409
// line end:   2421
void LoadMegaTiles__FPCc(char *LoadFile) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyIo;
}


// address: 0x80037EBC
// line start: 2429
// line end:   2441
void LoadAllGFX__Fv() {
}


// address: 0x80037EDC
// line start: 2462
// line end:   2482
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80037FD4
// line start: 2491
// line end:   2545
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003815C
// line start: 2549
// line end:   2574
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


// address: 0x80038238
// line start: 2581
// line end:   2913
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


// address: 0x80038B30
// line start: 2926
// line end:   2978
void game_logic__Fv() {
}


// address: 0x80038C3C
// line start: 2988
// line end:   3018
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038CE4
// line start: 3026
// line end:   3081
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038D1C
// line start: 3148
// line end:   3153
void alloc_plr__Fv() {
}


// address: 0x80038D24
// line start: 3216
// line end:   3274
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038D2C
// line start: 3281
// line end:   3283
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80038D4C
// line start: 3288
// line end:   3290
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80038D6C
// line start: 3293
// line end:   3294
void app_fatal(char *pszFile) {
}


// address: 0x80038D9C
// line start: 3553
// line end:   3559
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038DC4
// line start: 3563
// line end:   3569
void DoMemCardFromInGame__Fv() {
}


