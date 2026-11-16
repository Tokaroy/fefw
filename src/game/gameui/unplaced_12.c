#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_157e0f0(__int64*, __int64, const char*);
void game_gameui_157e310(__int64* a1, unsigned __int8 a2);

void game_gameui_157e310(__int64* a1, unsigned __int8 a2)
{
  char* v2;
  char* v3;

  if (a2 <= 4u) {
    if (a2 == 2) {
      v2 = "MID_Menu_Detail";
      v3 = "MID_BtlMenu_WeaponCost";
      goto LABEL_6;
    }
    if (a2 == 3) {
      v2 = "MID_Menu_Detail";
      v3 = "MID_BtlMenu_ConsumeHp";
      goto LABEL_6;
    }
  LABEL_11:
    v2 = nullptr;
    v3 = nullptr;
    goto LABEL_6;
  }
  if (a2 != 5 && a2 != 6 && a2 != 9) {
    goto LABEL_11;
  }
  v2 = "MID_Menu_Detail";
  v3 = "MID_Sys_Remaining";
LABEL_6:
  GameRoutine_157e0f0(a1, (__int64)v2, v3);
}

#pragma GCC visibility pop
