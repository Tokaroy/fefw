#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_820d50(int);
__int64 BattleSide_7a2480(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 game_GameModeData_instance_;
__int64 game_map_7a26a0(__int64 a1);

__int64 game_map_7a26a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v13;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 440);
    if (v2 != 0) {
      v3 = *(_BYTE*)(v2 + 16);
    }
    else {
      v3 = 9;
    }
    if (((1 << v3) & 0xF1) != 0) {
      v4 = a1;
      v5 = game_820d50(2);
      if (game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v5)) != 0 &&
          *(_DWORD*)(v6 + 32) != 0) {
        LODWORD(v1) = 0;
      }
      else {
        v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if (game_HasSkill((_QWORD*)(v1 + 1744), &v13)) {
          LODWORD(v1) = 12;
        }
        else {
          LODWORD(v1) = 6;
        }
      }
      a1 = v4;
    }
    else {
      LODWORD(v1) = 0;
    }
  }
  v7 = *(_DWORD*)(a1 + 108);
  v8 = BattleSide_7a2480(a1);
  if ((int)v1 >= v7) {
    v9 = v7;
  }
  else {
    v9 = v1;
  }
  if (v7 < 0) {
    v9 = 0;
  }
  v10 = v9 + v8;
  if ((int)v1 >= v10) {
    v11 = v10;
  }
  else {
    v11 = v1;
  }
  if (v10 >= 0) {
    return v11;
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
