// C:\diabpsx\SOURCE\MSG.CPP

#include "types.h"

// address: 0x800477B4
void delta_init__Fv() {
}


// address: 0x80047814
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x800478B0
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047934
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x800479C4
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0xF1C
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x6
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x80047CF0
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80047D50
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 15
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80047F14
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x8004809C
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800480C0
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800480E4
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x800482F8
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80048328
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004835C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048448
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048470
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800484BC
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800484EC
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048524
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048564
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x800485AC
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800485D8
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048608
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048640
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x800486B4
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800487E8
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048864
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800488BC
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048924
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048A24
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048AC0
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048AF0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048C04
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048C0C
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80048C40
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80048C9C
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80048CDC
void check_update_plr__Fi(int pnum) {
}


// address: 0x80048CE4
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048D80
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DB0
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DE0
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E10
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E40
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048EAC
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048F48
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049080
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	// register: 21
	register int nIndex;
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
											// register: 5
											register int hitem;
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


// address: 0x80049248
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800492E4
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049410
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
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
											// register: 5
											register int hitem;
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


// address: 0x800495D0
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049664
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x800497FC
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049930
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049A38
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049ADC
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049BDC
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049CCC
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049DC0
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049EDC
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049FF8
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A058
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 19
			// size: 0x4
			register struct TCmdParam1 *p;
			// register: 16
			register int dx;
			// register: 2
			register int dy;
		}
	}
}


// address: 0x8004A19C
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A27C
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A354
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A430
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A50C
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A594
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5CC
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A634
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6D0
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A708
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7DC
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A840
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A8A4
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					// register: 6
					register unsigned char addok;
					{
						// register: 5
						register int i;
						{
							// register: 2
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004AA08
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB04
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB4C
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ACF0
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AD80
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE10
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEA0
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF2C
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFB8
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC0
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC8
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFD0
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B020
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B29C
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0xA
	register struct TCmdLocParam3 *p;
	{
		{
			{
				{
					{
						{
							// register: 4
							register int i;
							// register: 2
							register int mi;
							// register: 6
							register unsigned char addok;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004B424
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B474
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4BC
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4FC
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B53C
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B57C
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5BC
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B604
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 16
					register int mi;
				}
			}
		}
	}
}


// address: 0x8004B718
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011652C
	static unsigned char sbLastCmd;
}


// address: 0x8004BB38
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BBC8
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}

