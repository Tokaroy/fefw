#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void TextTagProcessor_19089c0(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_1908c60(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_1908f00(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_19091a0(PSEUDO_X8, __int64,
                                                         __int64);
__int64 GameRoutine_1905b00();
__int64 GameRoutine_1905b10();
__int64 GameRoutine_1905b80();
__int64 game_1905b70();
extern __int64 (*GameData_210fb78[])();
extern __int64 (*GameData_210fc28[])();
extern __int64 (*GameData_210fcc8[])();
extern __int64 (*GameData_210fd68[])();
extern int GameData_2175a00;
__int64 ui_text_190a640(__int64 a1);

__int64 ui_text_190a640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _BYTE v11[32];
  _BYTE* v12;
  _BYTE v13[32];
  _BYTE* v14;
  _BYTE v15[32];
  _BYTE* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _BYTE v19[32];
  _BYTE* v20;

  v17[0] = GameData_210fb78;
  v17[1] = GameRoutine_1905b00;
  v18 = v17;
  TextTagProcessor_19089c0((void*)((__int64)v19), a1, (__int64)v17);
  if (v20 == v19) {
    v2 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v20 + v2))((__int64)v20);
LABEL_6:
  if (v18 == v17) {
    v3 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_11;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v18 + v3))((__int64)v18);
LABEL_11:
  v17[0] = GameData_210fc28;
  v17[1] = GameRoutine_1905b10;
  v18 = v17;
  TextTagProcessor_1908c60((void*)((__int64)v15), a1, (__int64)v17);
  if (v16 == v15) {
    v4 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_16;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + v4))((__int64)v16);
LABEL_16:
  if (v18 == v17) {
    v5 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_21;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v18 + v5))((__int64)v18);
LABEL_21:
  v17[0] = GameData_210fcc8;
  v17[1] = game_1905b70;
  v18 = v17;
  TextTagProcessor_1908f00((void*)((__int64)v13), a1, (__int64)v17);
  if (v14 == v13) {
    v6 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_26;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + v6))((__int64)v14);
LABEL_26:
  if (v18 == v17) {
    v7 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_31;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v18 + v7))((__int64)v18);
LABEL_31:
  v17[0] = GameData_210fd68;
  v17[1] = GameRoutine_1905b80;
  v18 = v17;
  TextTagProcessor_19091a0((void*)((__int64)v11), a1, (__int64)v17);
  if (v12 == v11) {
    v8 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_36;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + v8))((__int64)v12);
LABEL_36:
  result = (__int64)v18;
  if (v18 == v17) {
    v10 = 32;
    goto LABEL_40;
  }
  if (v18 != nullptr) {
    v10 = 40;
  LABEL_40:
    result = (*(__int64 (**)(__int64))(*v18 + v10))((__int64)v18);
  }
  GameData_2175a00 = 1061075026;
  return result;
}

#pragma GCC visibility pop
