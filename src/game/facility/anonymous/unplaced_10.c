#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_efa7e0(__int64 result, __int64);
extern __int64 GameData_21f3d08;
extern __int64 GameData_220b6e0;
void game_hub_d799f0(__int64);
__int64 game_facility_anonymous_fca8c0();

__int64 game_facility_anonymous_fca8c0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  __int64 result;

  v0 = GameData_21f3d08;
  v1 = *(int*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v1;
  if (v1 != 0) {
    if (v1 > 0) {
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 8) + 8LL))(v0 + 8);
    if (*(int*)(v0 + 16) > 0) {
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v0 + 65) != 0) {
    *(_BYTE*)(v0 + 65) = 0;
    v2 = GameData_220b6e0;
    v3 = *(int*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 168) + 8LL))(v2 + 168);
    }
    game_hub_d799f0(v2);
  }
LABEL_9:
  result = GameData_21f3d08;
  if (*(int*)(GameData_21f3d08 + 16) <= 0) {
    return GameRoutine_efa7e0(GameData_21f3d08, 0x100000000LL);
  }
  return result;
}

#pragma GCC visibility pop
