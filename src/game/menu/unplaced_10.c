#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1632800(__int64 result, int);
extern __int64* GameData_2131a88[7];
__int64 game_menu_179cbd0(__int64 a1);

__int64 game_menu_179cbd0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *GameData_2131a88[0];
  if (*GameData_2131a88[0] != 0) {
    v3 = *(_QWORD*)(a1 + 336);
    if (v3 != 0) {
      return GameRoutine_1632800(result, *(_DWORD*)(v3 + 40));
    }
  }
  return result;
}

#pragma GCC visibility pop
