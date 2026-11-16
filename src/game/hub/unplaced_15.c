#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1aad316;
extern _UNKNOWN GameData_1ab0f1b;
extern _UNKNOWN GameData_1adefb0;
extern __int64 game_GameModeData_instance_;
__int64 game_hub_f71cb0(__int64 a1, int a2);

__int64 game_hub_f71cb0(__int64 a1, int a2)
{
  void* v2;
  __int64 v3;
  unsigned __int64 v5[2];

  switch (a2) {
  case 1:
    v2 = &GameData_1adefb0;
    break;
  case 2:
    v2 = &GameData_1aad316;
    break;
  case 3:
    v2 = &GameData_1ab0f1b;
    break;
  default:
    return 1;
  }
  v5[1] = (unsigned __int64)v2;
  v5[0] = game_HashString((__int64)v2);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v5);
    if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
