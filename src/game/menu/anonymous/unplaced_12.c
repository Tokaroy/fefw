#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15b9050(__int64 result, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_21319e8[10];
extern __int64 GameData_204fdb0;
__int64 game_menu_anonymous_15bc180(__int64 a1);

__int64 game_menu_anonymous_15bc180(__int64 a1)
{
  __int64 v2;

  v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_204fdb0, 0);
  return GameRoutine_15b9050(v2, *(_QWORD*)(a1 + 336));
}

#pragma GCC visibility pop
