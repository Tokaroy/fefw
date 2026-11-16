#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HasSkill(_QWORD*, unsigned int*);
char* GameRoutine_60a020(char*, const char*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a8535f;
extern _UNKNOWN GameData_1a8906e;
extern _UNKNOWN GameData_1a8907b;
extern _UNKNOWN GameData_1a8d160;
extern _UNKNOWN GameData_1a90b53;
extern _UNKNOWN GameData_1a90b63;
extern _UNKNOWN GameData_1aa06e4;
extern _UNKNOWN GameData_1aa81bd;
extern _UNKNOWN GameData_1aa81ca;
extern _UNKNOWN GameData_1aa81da;
extern _UNKNOWN GameData_1aabe3c;
extern _UNKNOWN GameData_1ab3884;
extern _UNKNOWN GameData_1ab7bb7;
extern _UNKNOWN GameData_1abf79b;
extern _UNKNOWN GameData_1ac2eb5;
extern _UNKNOWN GameData_1acaa37;
extern _UNKNOWN GameData_1acaa47;
extern _UNKNOWN GameData_1ad281e;
extern _UNKNOWN GameData_1ad2832;
extern _UNKNOWN GameData_1ada195;
extern _UNKNOWN GameData_1ae1c5e;
extern _UNKNOWN GameData_1ae942d;
extern _UNKNOWN GameData_1aed5c7;
extern _UNKNOWN GameData_1af11ce;
extern _UNKNOWN GameData_1af4ef7;
extern _UNKNOWN GameData_1af4f07;
extern _UNKNOWN GameData_1af8c9f;
extern _UNKNOWN GameData_1af8cb6;
extern _UNKNOWN GameData_1afcbb4;
extern _UNKNOWN GameData_1afcbc8;
extern __int64 GameData_1a8d150;
extern __int64 GameData_1aafc80;
extern __int64 GameData_1aafc90;
extern __int64 fw_memory_g_heap_manager;
typedef __int64 GameAlign_1a89092 __attribute__((aligned(2)));
extern GameAlign_1a89092 GameData_1a89092;
typedef __int64 GameAlign_1a890a2 __attribute__((aligned(2)));
extern GameAlign_1a890a2 GameData_1a890a2;
typedef __int64 GameAlign_1a90b73 __attribute__((aligned(1)));
extern GameAlign_1a90b73 GameData_1a90b73;
typedef __int64 GameAlign_1a90b83 __attribute__((aligned(1)));
extern GameAlign_1a90b83 GameData_1a90b83;
typedef __int64 GameAlign_1a94ab6 __attribute__((aligned(2)));
extern GameAlign_1a94ab6 GameData_1a94ab6;
typedef __int64 GameAlign_1a94ac6 __attribute__((aligned(2)));
extern GameAlign_1a94ac6 GameData_1a94ac6;
typedef __int64 GameAlign_1a98a5c __attribute__((aligned(4)));
extern GameAlign_1a98a5c GameData_1a98a5c;
typedef __int64 GameAlign_1aa06fb __attribute__((aligned(1)));
extern GameAlign_1aa06fb GameData_1aa06fb;
typedef __int64 GameAlign_1aabe49 __attribute__((aligned(1)));
extern GameAlign_1aabe49 GameData_1aabe49;
typedef __int64 GameAlign_1ac2ec9 __attribute__((aligned(1)));
extern GameAlign_1ac2ec9 GameData_1ac2ec9;
typedef __int64 GameAlign_1ac2ed9 __attribute__((aligned(1)));
extern GameAlign_1ac2ed9 GameData_1ac2ed9;
typedef __int64 GameAlign_1acaa57 __attribute__((aligned(1)));
extern GameAlign_1acaa57 GameData_1acaa57;
typedef __int64 GameAlign_1acaa67 __attribute__((aligned(1)));
extern GameAlign_1acaa67 GameData_1acaa67;
typedef __int64 GameAlign_1acebbb __attribute__((aligned(1)));
extern GameAlign_1acebbb GameData_1acebbb;
typedef __int64 GameAlign_1acebcb __attribute__((aligned(1)));
extern GameAlign_1acebcb GameData_1acebcb;
typedef __int64 GameAlign_1acebdb __attribute__((aligned(1)));
extern GameAlign_1acebdb GameData_1acebdb;
typedef __int64 GameAlign_1addeda __attribute__((aligned(2)));
extern GameAlign_1addeda GameData_1addeda;
typedef __int64 GameAlign_1ae1c75 __attribute__((aligned(1)));
extern GameAlign_1ae1c75 GameData_1ae1c75;
typedef __int64 GameAlign_1ae56d5 __attribute__((aligned(1)));
extern GameAlign_1ae56d5 GameData_1ae56d5;
typedef __int64 GameAlign_1af8ccd __attribute__((aligned(1)));
extern GameAlign_1af8ccd GameData_1af8ccd;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 llvm_libcxx_21_libcxx_include___vector_6f0e10(__int64 a1,
                                                               __int64 a2);

unsigned __int64 llvm_libcxx_21_libcxx_include___vector_6f0e10(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  int v16;
  char* v17;
  __int64* v18;
  unsigned int v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(_QWORD*)(a2 + 448);
  if (v2 != 0) {
    result = GameRoutine_1a09c70(*(const char**)(a2 + 448));
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v5 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (result | 7) + 1;
      }
      v14 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
      *(_QWORD*)(a1 + 8) = v5;
      *(_QWORD*)(a1 + 16) = v14;
      *(_QWORD*)a1 = v13 | 1;
      v6 = v14;
    }
    else {
      *(_BYTE*)a1 = 2 * result;
      v6 = a1 + 1;
      if (result == 0) {
        goto LABEL_13;
      }
    }
    result = GameRoutine_1a0b940(v6, v2, v5);
  LABEL_13:
    *(_BYTE*)(v6 + v5) = 0;
    return result;
  }
  v7 = *(_QWORD*)(a2 + 24);
  v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  result = game_HasSkill((_QWORD*)(v7 + 8), (unsigned int*)&v25);
  v9 = *(unsigned __int8*)(a2 + 72);
  *(_WORD*)a1 = 0;
  v10 = (__int64*)(a1 + 1);
  switch (v9) {
  case 0LL:
    v11 = (const char*)&GameData_1ab7bb7;
    v12 = (const char*)&GameData_1ad281e;
    goto LABEL_21;
  case 1LL:
    v11 = (const char*)&GameData_1aabe3c;
    v12 = (const char*)&GameData_1ad2832;
    goto LABEL_21;
  case 2LL:
    v11 = (const char*)&GameData_1aed5c7;
    v12 = (const char*)&GameData_1afcbb4;
    goto LABEL_21;
  case 3LL:
    v11 = (const char*)&GameData_1aa81bd;
    v12 = (const char*)&GameData_1ac2eb5;
    goto LABEL_21;
  case 4LL:
    v11 = (const char*)&GameData_1acaa37;
    v12 = (const char*)&GameData_1ae1c5e;
    goto LABEL_21;
  case 5LL:
    v11 = (const char*)&GameData_1aa81ca;
    v12 = (const char*)&GameData_1aa06e4;
    goto LABEL_21;
  case 6LL:
    v11 = (const char*)&GameData_1acaa47;
    v12 = (const char*)&GameData_1afcbc8;
    goto LABEL_21;
  case 7LL:
    v11 = (const char*)&GameData_1a90b53;
    v12 = (const char*)&GameData_1ab3884;
    goto LABEL_21;
  case 13LL:
    v19 = *(unsigned __int8*)(a2 + 73);
    if (v19 > 0x1C) {
      switch (v19) {
      case 0x1Du:
        v11 = (const char*)&GameData_1ada195;
        v12 = (const char*)&GameData_1a8907b;
        break;
      case 0x1Eu:
        v11 = (const char*)&GameData_1aa81da;
        v12 = (const char*)&GameData_1af11ce;
        break;
      case 0x1Fu:
        v11 = (const char*)&GameData_1af4ef7;
        v12 = (const char*)&GameData_1af8cb6;
        break;
      default:
        goto LABEL_25;
      }
    }
    else {
      switch (v19) {
      case 0x1Au:
        v11 = (const char*)&GameData_1abf79b;
        v12 = (const char*)&GameData_1a8535f;
        break;
      case 0x1Bu:
        v11 = (const char*)&GameData_1a8906e;
        v12 = (const char*)&GameData_1ae942d;
        break;
      case 0x1Cu:
        v11 = (const char*)&GameData_1a90b63;
        v12 = (const char*)&GameData_1af8c9f;
        break;
      default:
        goto LABEL_25;
      }
    }
  LABEL_21:
    if ((result & 1) != 0) {
      v15 = v12;
    }
    else {
      v15 = v11;
    }
    result = (unsigned __int64)GameRoutine_60a020((char*)a1, v15);
    goto LABEL_25;
  case 14LL:
    switch (*(_BYTE*)(a2 + 73)) {
    case 1:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1ae56d5;
      goto LABEL_72;
    case 2:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1ae1c75;
      goto LABEL_72;
    case 4:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1aa06fb;
      goto LABEL_72;
    case 6:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1af8ccd;
      goto LABEL_72;
    case 7:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1addeda;
      goto LABEL_72;
    case 8:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1a89092;
      goto LABEL_72;
    case 9:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1a94ab6;
      goto LABEL_72;
    case 0xA:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1acebbb;
      goto LABEL_72;
    case 0xB:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1acebcb;
      goto LABEL_72;
    case 0xC:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1ac2ec9;
      goto LABEL_72;
    case 0xD:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1a8d150;
      goto LABEL_72;
    case 0xE:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1acaa57;
      goto LABEL_72;
    case 0xF:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1acebdb;
      goto LABEL_72;
    case 0x10:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1ac2ed9;
      goto LABEL_72;
    case 0x11:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1aabe49;
      goto LABEL_72;
    case 0x12:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1aafc80;
      goto LABEL_72;
    case 0x13:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1a94ac6;
      goto LABEL_72;
    case 0x14:
      v20 = *(unsigned __int8*)(a2 + 94);
      if (v20 == 2) {
        *(_BYTE*)a1 = 30;
        v18 = &GameData_1acaa67;
      }
      else {
        if (v20 == 1) {
          *(_BYTE*)a1 = 24;
          *(_DWORD*)(a1 + 9) = -1699878561;
          v21 = &GameData_1a90b83;
          goto LABEL_69;
        }
        if (*(_BYTE*)(a2 + 94) == 0) {
          *(_BYTE*)a1 = 24;
          *(_DWORD*)(a1 + 9) = -1987909537;
          v21 = &GameData_1a98a5c;
        LABEL_69:
          v22 = *v21;
          *(_BYTE*)(a1 + 13) = 0;
          *v10 = v22;
          goto LABEL_25;
        }
        *(_BYTE*)a1 = 30;
        v18 = &GameData_1a890a2;
      }
    LABEL_72:
      v23 = *v18;
      v24 = *(__int64*)((char*)v18 + 7);
      *v10 = v23;
      *(_QWORD*)(a1 + 8) = v24;
      *(_BYTE*)(a1 + 16) = 0;
    LABEL_25:
      v16 = *(unsigned __int8*)(a2 + 96);
      if (v16 == 3) {
        v17 = (const char*)&GameData_1a8d160;
      }
      else {
        if (v16 != 2) {
          return result;
        }
        v17 = (const char*)&GameData_1af4f07;
      }
      return GameRoutine_1a09ce0(a1, v17, 8u);
    case 0x16:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1aafc90;
      goto LABEL_72;
    default:
      *(_BYTE*)a1 = 30;
      v18 = &GameData_1a90b73;
      goto LABEL_72;
    }
  default:
    goto LABEL_25;
  }
}

#pragma GCC visibility pop
