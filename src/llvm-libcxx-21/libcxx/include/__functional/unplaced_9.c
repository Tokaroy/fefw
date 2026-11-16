#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MapAnimModule_c08ee0(__int64, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
CharacterSound_1095750(PSEUDO_X8, __int64, const char*, long double);
__int64* EntityObject_817440(__int64);
__int64* GameRoutine_c0b080(_QWORD*, __int64*);
__int64* GameRoutine_c0b220(_QWORD*, __int64*);
__int64 MapAnimModule_c08540(__int64, __int64, __int64, unsigned int, float);
__int64 MapAnimModule_c09040(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int16 GameData_1a8fe60[];
extern __int64* GameData_212d448[9];
extern int GameData_21d92e0;
int GameRoutine_1a09bf0(__int64, const char*, ...);
void EntityObject_817560(__int64);
void MapAnimModule_c09200(__int64, int, float);
void MapAnimModule_c09420(__int64, int, long double);
void MapAnimModule_c096a0(__int64, int);
__int64 llvm_libcxx_21_libcxx_include___functional_817140(__int64 a1,
                                                          _QWORD** a2);
void llvm_libcxx_21_libcxx_include___functional_10cea20(__int64 a1, _QWORD* a2);

__int64 llvm_libcxx_21_libcxx_include___functional_817140(__int64 a1,
                                                          _QWORD** a2)
{

#pragma clang fp contract(off)
  int v2;
  _QWORD* v3;
  __int64 result;
  char* v5;
  __int64* v7;
  bool v8;
  bool v9;
  bool v10;
  long double v11;
  _BYTE* v12;
  bool v13;
  __int64* v14;
  bool v15;
  bool v16;
  bool v17;
  long double v18;
  _BYTE* v19;
  bool v20;
  long double v21;
  __int64 v22[2];

  v2 = *(_DWORD*)(a1 + 8);
  v3 = *a2;
  result = 0;
  if (v2 > 3) {
    if (v2 >= 7) {
      switch (v2) {
      case 7:
        v5 = "Color1";
        break;
      case 8:
        v5 = "Color2";
        break;
      case 9:
        v5 = "Color3";
        break;
      default:
        return result;
      }
      MapAnimModule_c08540((__int64)v3, (__int64)v5, 6, 0,
                           0x1.0000000000000p-1f);
    LABEL_63:
      MapAnimModule_c09200((__int64)v3, 0, 0x1.0000000000000p+0f);
      *(_QWORD*)&v21 = 0;
      MapAnimModule_c09420((__int64)v3, 0, v21);
      return 1;
    }
  }
  else if (v2 != 0) {
    if (v2 == 1 | v2 == 3) {
      if (((unsigned __int8)MapAnimModule_c08ee0((__int64)v3, (__int64)"Done",
                                                 4u, 0) &
           1) == 0 &&
          (MapAnimModule_c09040((__int64)v3, (__int64)"Done", 4u) & 1) == 0) {
        v22[0] = (__int64)"Done";
        v22[1] = 4;
        v7 = GameRoutine_c0b080(v3 + 8, v22);
        if (v7 == nullptr ||
            (v7[8] == 0 ? (v8 = v7[9] == 0) : (v8 = false),
             v8 ? (v9 = v7[10] == 0) : (v9 = false),
             v9 ? (v10 = v7[11] == 0) : (v10 = false), v10 && v7[12] == 0)) {
          v22[0] = (__int64)"Done";
          v22[1] = 4;
          if (GameRoutine_c0b220(v3 + 13, v22) == nullptr) {
            return 1;
          }
        }
        MapAnimModule_c08540((__int64)v3, (__int64)"Done", 4, 0, 0x0.0p+0f);
        *(_QWORD*)&v11 = 0;
        MapAnimModule_c09420((__int64)v3, 0, v11);
        MapAnimModule_c09200((__int64)v3, 0, 0x0.0p+0f);
      }
      v12 = (_BYTE*)v3[1];
      v13 = v12[300] == 3 & v12[301] == 3;
      if (!v13 && v12[302] != 1) {
        goto LABEL_63;
      }
      EntityObject_817440((__int64)v3);
      return 1;
    }
    return result;
  }
  if (((unsigned __int8)MapAnimModule_c08ee0((__int64)v3, (__int64)"Done", 4u,
                                             0) &
       1) == 0 &&
      (MapAnimModule_c09040((__int64)v3, (__int64)"Done", 4u) & 1) == 0) {
    v22[0] = (__int64)"Done";
    v22[1] = 4;
    v14 = GameRoutine_c0b080(v3 + 8, v22);
    if (v14 == nullptr ||
        (v14[8] == 0 ? (v15 = v14[9] == 0) : (v15 = false),
         v15 ? (v16 = v14[10] == 0) : (v16 = false),
         v16 ? (v17 = v14[11] == 0) : (v17 = false), v17 && v14[12] == 0)) {
      v22[0] = (__int64)"Done";
      v22[1] = 4;
      if (GameRoutine_c0b220(v3 + 13, v22) == nullptr) {
        return 1;
      }
    }
    MapAnimModule_c08540((__int64)v3, (__int64)"Done", 4, 0, 0x0.0p+0f);
    *(_QWORD*)&v18 = 0;
    MapAnimModule_c09420((__int64)v3, 0, v18);
    MapAnimModule_c09200((__int64)v3, 0, 0x0.0p+0f);
  }
  v19 = (_BYTE*)v3[1];
  v20 = v19[300] == 3 & v19[301] == 3;
  if (v20 || v19[302] == 1) {
    EntityObject_817560((__int64)v3);
  }
  else {
    MapAnimModule_c09200((__int64)v3, 0, -0x1.0000000000000p+0f);
    MapAnimModule_c096a0((__int64)v3, 0);
  }
  return 1;
}

void llvm_libcxx_21_libcxx_include___functional_10cea20(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  char* v13;
  char* v14;
  int v15;
  char* v17;
  long double v18;
  __int64 v19;
  char v20[256];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (_DWORD*)*a2;
  if (*GameData_212d448[0] != 0 &&
      *(float*)(*GameData_212d448[0] + 180) > 0x1.8000000000000p+0f) {
    return;
  }
  v4 = *(_QWORD*)(v2 + 32);
  if (v4 == 0) {
    return;
  }
  v5 = *(_QWORD*)(v2 + 40);
  v6 = *(_QWORD*)(v4 + 8) == -1 | v5 == 0;
  if (v6 || *(float*)(v5 + 348) <= 0x0.0p+0f ||
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 289LL) != 1 ||
      GameData_21d92e0 == 3 && (*(_BYTE*)(v5 + 340) & 2) != 0) {
    return;
  }
  v7 = *(_QWORD*)(v5 + 136);
  if (v7 == 0) {
    return;
  }
  v9 = *(_QWORD*)(v5 + 392);
  v8 = *(_QWORD*)(v5 + 400);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  v10 = *(_DWORD*)(v9 + 11784);
  v12 = v3[8];
  v11 = v3[9];
  if (v12 == 1) {
    v13 = "Down";
  }
  else if (v12 != 0) {
    v12 = 0;
    v13 = nullptr;
  }
  else {
    v13 = "Up";
    v12 = 1;
  }
  v14 = nullptr;
  v15 = 0;
  if (v10 > 19) {
    if (v10 != 20 & v10 != 31) {
      if (v10 == 33) {
        v14 = "DragonH";
        goto LABEL_35;
      }
      goto LABEL_36;
    }
  LABEL_31:
    v14 = "Pegasus";
    goto LABEL_35;
  }
  switch (v10) {
  case 4:
    goto LABEL_31;
  case 5:
    v14 = "Dragon";
    goto LABEL_35;
  case 6:
    v14 = "Ornius";
  LABEL_35:
    v15 = 1;
    break;
  default:
    break;
  }
LABEL_36:
  if (v11 != 0) {
    if (v11 != 1) {
      return;
    }
    v17 = (const char*)GameData_1a8fe60;
  }
  else {
    v17 = "L";
  }
  if ((v12 & v15) == 1 && *(_BYTE*)(v2 + 416) == 1) {
    GameRoutine_1a09bf0((__int64)v20, "SE_ACT_<LD/MB>_WingFlap%s_%s_%s", v13,
                        v14, v17);
    {
      __typeof__(v18) z_ = (__typeof__(v18)){0};
      LODWORD(z_) = v3[10];
      v18 = z_;
    }
    CharacterSound_1095750((void*)((__int64)&v19), v7, v20, v18);
  }
}

#pragma GCC visibility pop
