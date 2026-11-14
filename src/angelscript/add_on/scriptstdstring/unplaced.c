#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1a0c230(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a0abb0(_QWORD);
__int64 GameRoutine_1a0ace0(_QWORD, float);
__int64 GameRoutine_1a0acf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_25ec80(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_25eca0(_QWORD, _QWORD);
__int64 GameRoutine_c30250(_QWORD);
__int64 as_string_string_25ed50(_QWORD, _QWORD);
__int64 std___1_ios_base_init(_QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 std___1_locale_locale_1a0a220(_QWORD);
extern _UNKNOWN* GameData_212f3b8;
extern __int64 GameData_212eae8;
extern __int64 GameData_212eaf0;
extern __int64 GameData_212f3b0;
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) VariableAssign_62dc60(_QWORD);
__attribute__((swiftcall)) void
angelscript_add_on_scriptstdstring_1a7f40(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          float a3);
__attribute__((swiftcall)) void

angelscript_add_on_scriptstdstring_1a7f40(PSEUDO_X8 x8_, unsigned __int8* a1,
                                          float a3)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    __int64 v30;
  } v28_;
  struct {
    _QWORD v31[2];
    void* v32;
  } v31_;
  struct {
    _QWORD v33[2];
    char* v34;
  } v33_;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v37[7];
    __int64 v38;
    __int64 v39;
    void* v40;
    __int64 v41;
    int v42;
  } v37_;
  _QWORD v43[20];

  v43[6] = 0;
  v6 = GameData_212f3b0;
  v7 = (__int64*)GameData_212f3b8;
  v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8);
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8 + 8);
  v10 = GameData_212f3b0 + 64;
  v43[0] = GameData_212f3b0 + 64;
  v35 = v8;
  *(__int64*)((char*)&v35 + *(_QWORD*)(v8 - 24)) = v9;
  v11 = (char*)&v35 + *(_QWORD*)(v35 - 24);
  std___1_ios_base_init(v11, &v36);
  *((_QWORD*)v11 + 17) = 0;
  *((_DWORD*)v11 + 36) = -1;
  v43[0] = v10;
  v12 = GameData_212eaf0;
  v35 = v6 + 24;
  v36 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220(v37_.v37);
  memset(&v37_.v37[1], 0, 48);
  v37_.v38 = 0;
  v37_.v39 = 0;
  v37_.v40 = nullptr;
  v37_.v41 = 0;
  v36 = GameData_212eae8 + 16;
  v37_.v42 = 16;
  GameRoutine_c30250(&v36);
  GameRoutine_1a0ace0(&v35, a3);
  GameRoutine_1a0c230((void*)(v31_.v31), &v36);
  if ((v31_.v31[0] & 1) != 0) {
    v13 = (char*)v31_.v32;
  }
  else {
    v13 = (char*)v31_.v31 + 1;
  }
  v14 = GameRoutine_25eca0(v33_.v33, v13);
  if ((v31_.v31[0] & 1) != 0) {
    GameRoutine_651250(v31_.v32, v31_.v31[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v33_.v33[0] & 1) != 0) {
    v15 = v33_.v34;
  }
  else {
    v15 = (char*)v33_.v33 + 1;
  }
  if ((v33_.v33[0] & 1) != 0) {
    v16 = v33_.v33[1];
  }
  else {
    v16 = (unsigned __int64)LOBYTE(v33_.v33[0]) >> 1;
  }
  v17 = *a1;
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = a1 + 1;
  }
  else {
    v20 = *((unsigned __int8**)a1 + 2);
  }
  if (v18) {
    v21 = v19;
  }
  else {
    v21 = *((_QWORD*)a1 + 1);
  }
  v22 = v21 + v16;
  if (v21 + v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    VariableAssign_62dc60(v14);
  }
  if (v22 <= 0x16) {
    v28_.v29 = 0;
    v28_.v30 = 0;
    v28_.v28 = (unsigned __int8)(2 * v22);
    v23 = (char*)&v28_.v28 + 1;
    if (v16 == 0) {
      goto LABEL_27;
    }
  LABEL_26:
    GameRoutine_1a0b940(v23, v15, v16);
    goto LABEL_27;
  }
  if ((v22 | 7) == 0x17) {
    v24 = 26;
  }
  else {
    v24 = (v22 | 7) + 1;
  }
  v28_.v29 = v21 + v16;
  v28_.v30 = GameRoutine_25ec80(v24);
  v28_.v28 = v24 | 1;
  v23 = (char*)v28_.v30;
  if (v16 != 0) {
    goto LABEL_26;
  }
LABEL_27:
  v25 = &v23[v16];
  if (v21 != 0) {
    GameRoutine_1a0b940(v25, v20, v21);
  }
  v25[v21] = 0;
  as_string_string_25ed50(a2, &v28_.v28);
  if ((v28_.v28 & 1) != 0) {
    GameRoutine_25ec90(v28_.v30, v28_.v28 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((v33_.v33[0] & 1) != 0) {
    GameRoutine_25ec90(v33_.v34, v33_.v33[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v35 = *v7;
  *(__int64*)((char*)&v35 + *(_QWORD*)(v35 - 24)) = v26;
  v36 = GameData_212eae8 + 16;
  if ((v37_.v38 & 1) != 0) {
    GameRoutine_651250(v37_.v40, v37_.v38 & 0xFFFFFFFFFFFFFFFELL);
  }
  v36 = v12 + 16;
  std___1_locale_Destroy_locale(v37_.v37);
  GameRoutine_1a0acf0(&v35, v7 + 1);
  {
    GameRoutine_1a0abb0(v43);
    return;
  }
}

#pragma GCC visibility pop
