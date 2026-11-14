#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1028ee0(__int64 result, char);
__int64 GameRoutine_efa7e0(__int64 result, __int64);
__int64 game_1029080(__int64 result);
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6e0;
void game_hub_d799f0(__int64);
__int64 game_hub_anonymous_10295e0(__int64 a1);

__int64 game_hub_anonymous_10295e0(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 result;

  GameRoutine_1028ee0(*(_QWORD*)(a1 + 152), 1);
  game_1029080(*(_QWORD*)(a1 + 152));
  v2 = GameData_21f3d10;
  v3 = *(int*)(GameData_21f3d10 + 184) - 1;
  *(_DWORD*)(GameData_21f3d10 + 184) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 176) + 8LL))(v2 + 176);
    v2 = GameData_21f3d10;
  }
  v4 = *(int*)(v2 + 168) - 1;
  *(_DWORD*)(v2 + 168) = v4;
  if (v4 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 160) + 8LL))(v2 + 160);
  }
  v5 = GameData_21f3d08;
  v6 = *(int*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v6;
  if (v6 != 0) {
    if (v6 > 0) {
      goto LABEL_13;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v5 + 8) + 8LL))(v5 + 8);
    if (*(int*)(v5 + 16) > 0) {
      goto LABEL_13;
    }
  }
  if (*(_BYTE*)(v5 + 65) != 0) {
    *(_BYTE*)(v5 + 65) = 0;
    v7 = GameData_220b6e0;
    v8 = *(int*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v8;
    if (v8 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v7 + 168) + 8LL))(v7 + 168);
    }
    game_hub_d799f0(v7);
  }
LABEL_13:
  result = GameData_21f3d08;
  if (*(int*)(GameData_21f3d08 + 16) <= 0) {
    return GameRoutine_efa7e0(GameData_21f3d08, 0x100000000LL);
  }
  return result;
}

#pragma GCC visibility pop
