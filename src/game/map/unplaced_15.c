#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_21a60e8;
extern __int64 GameData_21a60e0;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__attribute__((swiftcall)) void game_map_f0ea80(PSEUDO_X8 x8_, int a1);

__attribute__((swiftcall)) void game_map_f0ea80(PSEUDO_X8 x8_, int a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v2;
  float v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a1 <= 2) {
    if (a1 != 0) {
      if (a1 == 1) {
        *(float*)(a2 + 36) = 0x1.8000000000000p-2f;
        *(_QWORD*)a2 = 0x3E8000003F19999ALL;
        *(_QWORD*)(a2 + 8) = 0x3E8000003F4CCCCDLL;
        *(_QWORD*)(a2 + 16) = 0x3F0000003F4CCCCDLL;
        *(_QWORD*)(a2 + 24) = 0x3F0000003F19999ALL;
        *(_DWORD*)(a2 + 32) = 1060320052;
        return;
      }
      if (a1 == 2) {
        *(float*)(a2 + 36) = 0x1.4000000000000p-1f;
        *(_QWORD*)a2 = 0x3F0000003F4CCCCDLL;
        *(_QWORD*)(a2 + 8) = 0x3F0000003F800000LL;
        *(_QWORD*)(a2 + 16) = 0x3F4000003F800000LL;
        *(_QWORD*)(a2 + 24) = 0x3F4000003F4CCCCDLL;
        *(_DWORD*)(a2 + 32) = 1063675495;
        return;
      }
      goto LABEL_13;
    }
    *(_QWORD*)a2 = 1058642330;
    *(_QWORD*)(a2 + 8) = 1061997773;
    *(_QWORD*)(a2 + 16) = 0x3E8000003F4CCCCDLL;
    *(_QWORD*)(a2 + 24) = 0x3E8000003F19999ALL;
    v2 = 1060320052;
    goto LABEL_11;
  }
  switch (a1) {
  case 3:
    *(_QWORD*)a2 = 0x3F4000003F4CCCCDLL;
    *(_QWORD*)(a2 + 8) = 0x3F4000003F800000LL;
    *(_QWORD*)(a2 + 16) = 0x3F8000003F800000LL;
    *(_QWORD*)(a2 + 24) = 0x3F8000003F4CCCCDLL;
    v2 = 1063675495;
  LABEL_21:
    v3 = 0x1.c000000000000p-1f;
    goto LABEL_22;
  case 4:
    *(_QWORD*)a2 = 0x3F4000003ECCCCCDLL;
    *(_QWORD*)(a2 + 8) = 0x3F4000003F19999ALL;
    *(_QWORD*)(a2 + 16) = 0x3F8000003F19999ALL;
    *(_QWORD*)(a2 + 24) = 0x3F8000003ECCCCCDLL;
    v2 = 1056964608;
    goto LABEL_21;
  case 5:
    *(_QWORD*)a2 = 1045220557;
    *(_QWORD*)(a2 + 8) = 1053609165;
    *(_QWORD*)(a2 + 16) = 0x3E8000003ECCCCCDLL;
    *(_QWORD*)(a2 + 24) = 0x3E8000003E4CCCCDLL;
    v2 = 1050253722;
  LABEL_11:
    v3 = 0x1.0000000000000p-3f;
  LABEL_22:
    *(_DWORD*)(a2 + 32) = v2;
    *(float*)(a2 + 36) = v3;
    return;
  default:
    break;
  }
LABEL_13:
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v9 = a2;
    v4 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
    a2 = v9;
    if (v4 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
      a2 = v9;
    }
  }
  *(_QWORD*)a2 = GameData_21a60e0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a2;
    v5 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
    a2 = v10;
    if (v5 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
      a2 = v10;
    }
  }
  *(_QWORD*)(a2 + 8) = GameData_21a60e0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a2;
    v6 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
    a2 = v11;
    if (v6 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
      a2 = v11;
    }
  }
  *(_QWORD*)(a2 + 16) = GameData_21a60e0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v7 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
    a2 = v12;
    if (v7 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
      a2 = v12;
    }
  }
  *(_QWORD*)(a2 + 24) = GameData_21a60e0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v13 = a2;
    v8 = __cxa_guard_acquire((__int64)&GameData_21a60e8);
    a2 = v13;
    if (v8 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
      a2 = v13;
    }
  }
  *(_QWORD*)(a2 + 32) = GameData_21a60e0;
}

#pragma GCC visibility pop
