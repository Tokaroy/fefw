#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19edd80(_QWORD*, int, char, char);
__int64 GameRoutine_19ee0c0(__int64, int, char, char);
__int64 GameRoutine_19ee9a0(_QWORD*, int, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_21319e8[10];
extern __int64 GameData_20702e8;
extern __int64 GameData_20b3420;
__int64 game_gmap_anonymous_1643860(_QWORD* a1, int a2, char a3, char a4);
__int64 game_gmap_anonymous_1643900(_QWORD* a1, int a2, char a3);
__int64 game_gmap_anonymous_172cbe0(__int64 a1, int a2, char a3, char a4);
__int64 game_gmap_anonymous_172cc80(__int64 a1, int a2, char a3);
__int64 game_gmap_anonymous_172cd20(_QWORD* a1, int a2, char a3, char a4);
__int64 game_gmap_anonymous_172cdc0(_QWORD* a1, int a2, char a3);

__int64 game_gmap_anonymous_1643860(_QWORD* a1, int a2, char a3, char a4)
{
  int v8;
  char v9;
  char v10;

  *(_BYTE*)(__dynamic_cast(a1[110], GameData_21319e8[0], &GameData_20702e8, 0) +
            440) = 0;
  v8 = (*(__int64 (**)(_QWORD*))*a1)(a1);
  v9 = a3 & 1;
  v10 = a4 & 1;
  if (v8 != 0) {
    return GameRoutine_19ee0c0((__int64)a1, a2, v9, v10);
  }
  else {
    return GameRoutine_19edd80(a1, a2, v9, v10);
  }
}

__int64 game_gmap_anonymous_1643900(_QWORD* a1, int a2, char a3)
{
  *(_BYTE*)(__dynamic_cast(a1[110], GameData_21319e8[0], &GameData_20702e8, 0) +
            440) = 0;
  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) != 0) {
    return 0;
  }
  else {
    return GameRoutine_19ee9a0(a1, a2, a3 & 1);
  }
}

__int64 game_gmap_anonymous_172cbe0(__int64 a1, int a2, char a3, char a4)
{
  _QWORD* v8;
  __int64 (**v9)(_QWORD*);
  int v10;
  char v11;
  char v12;

  *(_BYTE*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                           &GameData_20b3420, 0) +
            410) = 0;
  v9 = *(__int64 (***)(_QWORD*))(a1 + 176);
  v8 = (_QWORD*)(a1 + 176);
  v10 = (*v9)(v8);
  v11 = a3 & 1;
  v12 = a4 & 1;
  if (v10 != 0) {
    return GameRoutine_19ee0c0((__int64)v8, a2, v11, v12);
  }
  else {
    return GameRoutine_19edd80(v8, a2, v11, v12);
  }
}

__int64 game_gmap_anonymous_172cc80(__int64 a1, int a2, char a3)
{
  _QWORD* v6;
  unsigned int (**v7)(_QWORD*);

  *(_BYTE*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                           &GameData_20b3420, 0) +
            410) = 0;
  v7 = *(unsigned int (***)(_QWORD*))(a1 + 176);
  v6 = (_QWORD*)(a1 + 176);
  if ((*v7)(v6) != 0) {
    return 0;
  }
  else {
    return GameRoutine_19ee9a0(v6, a2, a3 & 1);
  }
}

__int64 game_gmap_anonymous_172cd20(_QWORD* a1, int a2, char a3, char a4)
{
  int v8;
  char v9;
  char v10;

  *(_BYTE*)(__dynamic_cast(a1[110], GameData_21319e8[0], &GameData_20b3420, 0) +
            410) = 0;
  v8 = (*(__int64 (**)(_QWORD*))*a1)(a1);
  v9 = a3 & 1;
  v10 = a4 & 1;
  if (v8 != 0) {
    return GameRoutine_19ee0c0((__int64)a1, a2, v9, v10);
  }
  else {
    return GameRoutine_19edd80(a1, a2, v9, v10);
  }
}

__int64 game_gmap_anonymous_172cdc0(_QWORD* a1, int a2, char a3)
{
  *(_BYTE*)(__dynamic_cast(a1[110], GameData_21319e8[0], &GameData_20b3420, 0) +
            410) = 0;
  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) != 0) {
    return 0;
  }
  else {
    return GameRoutine_19ee9a0(a1, a2, a3 & 1);
  }
}

#pragma GCC visibility pop
