#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1ab55f1;
extern _UNKNOWN GameData_1abd56f;
extern _UNKNOWN GameData_1ad7e77;
extern __int64 game_GameModeData_instance_;
__int64 game_facility_141b2c0(__int64 a1);

__int64 game_facility_141b2c0(__int64 a1)
{
  int v1;
  void* v2;
  __int64 result;
  unsigned __int64 v4[2];

  v1 = *(unsigned __int8*)(a1 + 48);
  switch (v1) {
  case 1:
    v2 = &GameData_1ad7e77;
    break;
  case 2:
    v2 = &GameData_1ab55f1;
    break;
  case 3:
    v2 = &GameData_1abd56f;
    break;
  default:
    return 0;
  }
  v4[1] = (unsigned __int64)v2;
  v4[0] = game_HashString((__int64)v2);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v4);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

#pragma GCC visibility pop
