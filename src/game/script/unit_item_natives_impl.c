#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_1188e20(__int64 result, __int64);
__int64 as_string_c_str(__int64);
extern __int64 GameData_21ca310;
unsigned __int64 GameRoutine_1189020(unsigned __int64 result, __int64);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
__int64 unit_item_Equip_117bca0(int a1, __int64 a2);
__int64 unit_item_Equip_117bd00(__int64 a1, __int64 a2);
unsigned __int64 unit_item_PutOff_117c190(int a1, __int64 a2);
unsigned __int64 unit_item_PutOff_117c200(__int64 a1, __int64 a2);

__int64 unit_item_Equip_117bca0(int a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  _BYTE v6[4];

  if (a1 < 0) {
    v3 = nullptr;
  }
  else {
    v6[0] = a1;
    v3 = game_UnitPool_Get(v6);
  }
  v4 = as_string_c_str(a2);
  return GameRoutine_1188e20((__int64)v3, v4);
}

__int64 unit_item_Equip_117bd00(__int64 a1, __int64 a2)
{
  _BYTE* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = (_BYTE*)as_string_c_str(a1);
  if (*v3 != 0 && (GameRoutine_682bc0(&v14, (__int64)v3), v14 != 0)) {
    v4 = *(_QWORD**)(GameData_21ca310 + 56);
    if (v4 != nullptr) {
      v5 = 250;
      while (1) {
        v6 = v4[55];
        if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v14) {
          goto LABEL_23;
        }
        v7 = v4[333];
        if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v14) {
          v4 += 278;
          goto LABEL_23;
        }
        v8 = v4[611];
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v14) {
          break;
        }
        v9 = v4[889];
        if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v14) {
          v11 = 6672;
          goto LABEL_27;
        }
        v10 = v4[1167];
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v14) {
          v11 = 8896;
        LABEL_27:
          v4 = (_QWORD*)((char*)v4 + v11);
          goto LABEL_23;
        }
        v4 += 1390;
        v5 -= 5;
        if (v5 == 0) {
          goto LABEL_22;
        }
      }
      v11 = 4448;
      goto LABEL_27;
    }
  }
  else {
  LABEL_22:
    v4 = nullptr;
  }
LABEL_23:
  v12 = as_string_c_str(a2);
  return GameRoutine_1188e20((__int64)v4, v12);
}

unsigned __int64 unit_item_PutOff_117c190(int a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  _BYTE v6[4];

  if (a1 < 0) {
    v3 = nullptr;
  }
  else {
    v6[0] = a1;
    v3 = game_UnitPool_Get(v6);
  }
  v4 = as_string_c_str(a2);
  return GameRoutine_1189020((unsigned __int64)v3, v4);
}

unsigned __int64 unit_item_PutOff_117c200(__int64 a1, __int64 a2)
{
  _BYTE* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = (_BYTE*)as_string_c_str(a1);
  if (*v3 != 0 && (GameRoutine_682bc0(&v14, (__int64)v3), v14 != 0)) {
    v4 = *(_QWORD**)(GameData_21ca310 + 56);
    if (v4 != nullptr) {
      v5 = 250;
      while (1) {
        v6 = v4[55];
        if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v14) {
          goto LABEL_23;
        }
        v7 = v4[333];
        if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v14) {
          v4 += 278;
          goto LABEL_23;
        }
        v8 = v4[611];
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v14) {
          break;
        }
        v9 = v4[889];
        if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v14) {
          v11 = 6672;
          goto LABEL_27;
        }
        v10 = v4[1167];
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v14) {
          v11 = 8896;
        LABEL_27:
          v4 = (_QWORD*)((char*)v4 + v11);
          goto LABEL_23;
        }
        v4 += 1390;
        v5 -= 5;
        if (v5 == 0) {
          goto LABEL_22;
        }
      }
      v11 = 4448;
      goto LABEL_27;
    }
  }
  else {
  LABEL_22:
    v4 = nullptr;
  }
LABEL_23:
  v12 = as_string_c_str(a2);
  return GameRoutine_1189020((unsigned __int64)v4, v12);
}

#pragma GCC visibility pop
