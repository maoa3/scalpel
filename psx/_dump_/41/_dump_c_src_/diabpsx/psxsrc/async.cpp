// C:\diabpsx\PSXSRC\ASYNC.CPP

#include "types.h"

// address: 0x8009A628
// line start: 88
// line end:   99
void AS_CallBack0__Fi(int ah) {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x8009A694
// line start: 102
// line end:   113
void AS_CallBack1__Fi(int ah) {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x8009A700
// line start: 122
// line end:   142
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8009A7C8
// line start: 166
// line end:   183
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8009A868
// line start: 193
// line end:   195
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009A898
// line start: 205
// line end:   212
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}

