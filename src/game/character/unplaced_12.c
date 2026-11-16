#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_2167620;
__int64 game_character_bd9c40(__int64 result);
__int64 game_character_bd9e00(__int64 result);

__int64 game_character_bd9c40(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  _BYTE* v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  float v9;

  v1 = *(unsigned __int8*)(result + 112);
  v2 = (_BYTE*)result;
  if (v1 != (unsigned __int8)GameData_2167620 ||
      (*(_BYTE*)(result + 114) & 1) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
    v4 = *(__int64***)(v3 + 312);
    v5 = *(__int64***)(v3 + 320);
    if (v4 == v5) {
      LOBYTE(v1) = GameData_2167620;
    }
    else {
      do {
        v7 = *v4;
        v4 += 2;
        v6 = (__int64)v7;
        v8 = *v7;
        if (((unsigned __int8)GameData_2167620 & v2[113] & 1) != 0) {
          v9 = 0x1.0000000000000p+0f;
        }
        else {
          v9 = 0x0.0p+0f;
        }
        result = (*(__int64 (**)(__int64, __int64, __int64, float))(v8 + 16))(
            v6, (__int64)"Game_RimScale", 13, v9);
      } while (v4 != v5);
      LOBYTE(v1) = GameData_2167620;
    }
    v2[114] = 0;
  }
  v2[112] = v1;
  return result;
}

__int64 game_character_bd9e00(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  _BYTE* v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  float v9;

  v1 = *(unsigned __int8*)(result + 112);
  v2 = (_BYTE*)result;
  if (v1 != (unsigned __int8)GameData_2167620 ||
      (*(_BYTE*)(result + 114) & 1) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
    v4 = *(__int64***)(v3 + 312);
    v5 = *(__int64***)(v3 + 320);
    if (v4 == v5) {
      LOBYTE(v1) = GameData_2167620;
    }
    else {
      do {
        v7 = *v4;
        v4 += 2;
        v6 = (__int64)v7;
        v8 = *v7;
        if (((unsigned __int8)GameData_2167620 & v2[113] & 1) != 0) {
          v9 = 0x1.0000000000000p+0f;
        }
        else {
          v9 = 0x0.0p+0f;
        }
        result = (*(__int64 (**)(__int64, __int64, __int64, float))(v8 + 16))(
            v6, (__int64)"Game_RimScale", 13, v9);
      } while (v4 != v5);
      LOBYTE(v1) = GameData_2167620;
    }
    v2[114] = 0;
  }
  v2[112] = v1;
  return result;
}

#pragma GCC visibility pop
