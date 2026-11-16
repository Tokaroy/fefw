#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c6da0(__int64);
__int64 Unit_6ca760(__int64, _WORD*);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
typedef __int64 GameAlign_1aad0f4 __attribute__((aligned(4)));
extern GameAlign_1aad0f4 GameData_1aad0f4;
typedef __int64 GameAlign_1aad104 __attribute__((aligned(4)));
extern GameAlign_1aad104 GameData_1aad104;
typedef __int64 GameAlign_1ac0782 __attribute__((aligned(2)));
extern GameAlign_1ac0782 GameData_1ac0782;
unsigned int* GameRoutine_842b40(unsigned int* result, unsigned __int64*);
void game_script_e73e20(__int64 a1);

void game_script_e73e20(__int64 a1)
{
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  struct {
    char gap0_[8];
    __int128 v19;
    __int64 v20;
    __int64 v21;
    char* v22;
    char gap48_[28];
    unsigned int v23;
  } f_;

  LOWORD(f_.v19) = 0;
  v2 = *(_DWORD*)(a1 + 28);
  switch (v2) {
  case 3:
    LOBYTE(f_.v19) = 30;
    v3 = &GameData_1aad104;
  LABEL_7:
    v4 = *v3;
    v5 = *(__int64*)((char*)v3 + 7);
    v6 = *(__int64**)(a1 + 40);
    v7 = *(__int64**)(a1 + 48);
    LOBYTE(f_.v20) = 0;
    *(_QWORD*)((char*)&f_.v19 + 1) = v4;
    *((_QWORD*)&f_.v19 + 1) = v5;
    while (v6 != v7) {
      v8 = *v6;
      f_.v23 = 0;
      v9 = *(_QWORD*)(v8 + 16);
      f_.v22 = (char*)&f_.v19 + 1;
      f_.v21 = game_HashString((__int64)&f_.v19 + 1);
      GameRoutine_842b40(&f_.v23, (unsigned __int64*)&f_.v21);
      if ((game_HasSkill((_QWORD*)(v9 + 1744), &f_.v23) & 1) == 0) {
        v10 = *v6;
        f_.v23 = 0;
        v11 = *(_QWORD*)(v10 + 16);
        f_.v22 = (char*)&f_.v19 + 1;
        f_.v21 = game_HashString((__int64)&f_.v19 + 1);
        GameRoutine_842b40(&f_.v23, (unsigned __int64*)&f_.v21);
        Unit_6ca760(v11, &f_.v23);
      }
      v6 += 2;
    }
    break;
  case 2:
    LOBYTE(f_.v19) = 30;
    v3 = &GameData_1aad0f4;
    goto LABEL_7;
  case 1:
    LOBYTE(f_.v19) = 30;
    v3 = &GameData_1ac0782;
    goto LABEL_7;
  default:
    break;
  }
  v12 = *(_QWORD*)(a1 + 40);
  v13 = *(_QWORD*)(a1 + 48);
  while (v12 != v13) {
    v14 = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
    v15 = *(_DWORD*)(a1 + 24);
    v16 = *(unsigned __int8*)(v14 + 497);
    if (v15 < v16) {
      v16 = *(_DWORD*)(a1 + 24);
    }
    if (v15 >= 0) {
      v17 = v16;
    }
    else {
      v17 = 0;
    }
    if (v17 != *(unsigned __int8*)(v14 + 496)) {
      *(_BYTE*)(v14 + 496) = v17;
      v18 = *(_DWORD*)(v14 + 416);
      if ((v18 & 0x10000000) == 0) {
        *(_DWORD*)(v14 + 416) = v18 | 0x10000000;
        game_6c51e0(v14);
        GameRoutine_6c6da0(v14);
        game_6c6ec0(v14);
        *(_DWORD*)(v14 + 416) &= ~0x10000000u;
      }
    }
    v12 += 16;
  }
}

#pragma GCC visibility pop
