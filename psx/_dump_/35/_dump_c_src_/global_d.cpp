// global_d.cpp

#include "types.h"

// address: 0x8013BDD0
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x8014ADD0
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014AE24
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x8014B464
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8014BAA4
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8014BAB4
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014C0F4
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x8014C11C
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8014C25C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8014C2DC
// size: 0x78
extern int (*stream_buf[504])[30];

// address: 0x8014C354
// size: 0x78
extern struct strheader *stream_bufh[30];

