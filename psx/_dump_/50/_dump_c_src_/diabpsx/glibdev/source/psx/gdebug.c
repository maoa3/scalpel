// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x80022FF8
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x80023000
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x80023008
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x80023010
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x80023028
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x80023038
// line start: 146
// line end:   160
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8002306C
// line start: 166
// line end:   167
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8002307C
// line start: 177
// line end:   181
void SendPsyqString(char *e);

// address: 0x80023084
// line start: 190
// line end:   191
void DBG_SetPollRoutine(void (*Func)());

