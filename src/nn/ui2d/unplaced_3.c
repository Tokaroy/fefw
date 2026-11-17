#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_597b70(__int64, _BYTE*, char);
__int64 GameRoutine_59ed50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_575670_alt1(__int64, unsigned int*,
                            unsigned int) __asm__("nn_ui2d_575670");
__int64 nn_ui2d_5756e0(__int64, const char*);
__int64 nn_ui2d_575980(__int64, int*, __int64, int);
__int64 strcpy(__int64, const char*);
__int64 strncat(__int64, const char*, unsigned __int64);
__int64 strstr(const char*, const char*);
extern _UNKNOWN GameData_21a3840;
extern _UNKNOWN GameData_21a3848;
extern __int16 GameData_21a3850;
extern __int16 GameData_21a3874;
extern __int64 GameData_21a3858;
extern __int64 GameData_21a3860;
extern __int64 GameData_21a3868;
extern __int64 GameData_21a387c;
extern __int64 GameData_21a3884;
extern __int64 GameData_21a388c;
extern char** GameData_2136130[2];
extern char** GameData_2136138;
extern char GameData_21a3852;
extern char GameData_21a3857;
extern char GameData_21a3876;
extern char GameData_21a387b;
extern int GameData_21a3853;
extern int GameData_21a3870;
extern int GameData_21a3877;
extern int GameData_21a3894;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void __cxa_guard_release(__int64);
float32x4_t nn_ui2d_56d270(float32x4_t* a1);
void nn_ui2d_572660_alt1(_QWORD* a1, __int64 a2);
__int64 nn_ui2d_575670(__int64 a1, unsigned int* a2, signed int a3);
_QWORD* nn_ui2d_577870(_QWORD* result, _QWORD* a2);
typedef __int64 GameAlign_21a387c __attribute__((aligned(4)));
extern GameAlign_21a387c GameData_21a387c_alt1;
typedef __int64 GameAlign_21a3884 __attribute__((aligned(4)));
extern GameAlign_21a3884 GameData_21a3884_alt1;
typedef __int64 GameAlign_21a388c __attribute__((aligned(4)));
extern GameAlign_21a388c GameData_21a388c_alt1;
typedef int GameAlign_21a3853 __attribute__((aligned(1)));
extern GameAlign_21a3853 GameData_21a3853_alt1;
typedef int GameAlign_21a3877 __attribute__((aligned(1)));
extern GameAlign_21a3877 GameData_21a3877_alt1;
__int64 GameRoutine_1a09be0(__int64, const char*);
__int64 GameRoutine_1a09c80(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a060(const char*, const char*);
__int64 nn_ui2d_575670_alt2(__int64, unsigned int*, unsigned int);
unsigned __int64 GameRoutine_1a09c70(const char*);
__int64 nn_ui2d_572660(_QWORD* a1, __int64 a2);

float32x4_t nn_ui2d_56d270(float32x4_t* a1)
{
  float32x4_t* v1;
  float32x4_t v2;
  float32x4_t v3;
  float32x4_t v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v1 = (float32x4_t*)LANES128(a1[1]).n128_u64[1];
  if (v1 != nullptr) {
    v2 = v1[7];
    v3 = v1[8];
    v4 = v1[9];
    v5 = 0x0.0p+0f;
    LODWORD(v6) = HIDWORD(LANES128(v1[7]).n128_u64[0]);
    LODWORD(v7) = HIDWORD(LANES128(v1[8]).n128_u64[0]);
    LODWORD(v8) = LANES128(v1[9]).n128_u64[1];
    LODWORD(v9) = LANES128(v1[8]).n128_u64[1];
    LODWORD(v10) = HIDWORD(LANES128(v1[9]).n128_u64[0]);
    LODWORD(v11) = LANES128(v1[7]).n128_u64[1];
    v12 =
        (float)((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                            vmuls_lane_f32(v6, v3, 2) *
                                            LANES128(v4).n128_f32[0])) +
                                        (float)(vmuls_lane_f32(
                                                    LANES128(v2).n128_f32[0],
                                                    COERCE_AS(float32x2_t,
                                                              LANES128(v3)
                                                                  .n128_u64[0]),
                                                    1) *
                                                LANES128(v4).n128_f32[2])) +
                                (float)(vmuls_lane_f32(LANES128(v3).n128_f32[0],
                                                       v2, 2) *
                                        LANES128(v4).n128_f32[1])) +
                        (float)((float)((float)-v7 * LANES128(v4).n128_f32[0]) *
                                LANES128(v2).n128_f32[2])) +
                (float)((float)((float)-v6 * LANES128(v3).n128_f32[0]) *
                        LANES128(v4).n128_f32[2])) +
        (float)((float)((float)-v10 * LANES128(v2).n128_f32[0]) *
                LANES128(v3).n128_f32[2]);
    if (v12 != 0x0.0p+0f) {
      v5 = 0x1.0000000000000p+0f / v12;
    }
    v13 = (float)((float)(v10 * v11) - (float)(PSEUDO_UNFUSED(v8 * v6))) * v5;
    v14 = (float)((float)(v7 * v8) - (float)(PSEUDO_UNFUSED(v9 * v10))) * v5;
    v15 = (float)((float)(v6 * v9) - (float)(PSEUDO_UNFUSED(v11 * v7))) * v5;
    LANES128(v4).n128_u64[0] = 0;
    LANES128(v4).n128_u32[2] = 0;
    LANES128(v4).n128_f32[3] =
        (float)((float)-(
                    float)(PSEUDO_UNFUSED(LANES128(v3).n128_f32[3] * v13)) -
                (float)(v14 * LANES128(v2).n128_f32[3])) -
        (float)(v15 * LANES128(v4).n128_f32[3]);
    return vaddq_f32(
        v4, vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(a1[7], v14), a1[8], v13), a1[9],
                        v15));
  }
  else {
    return a1[7];
  }
}

__int64 nn_ui2d_572660(_QWORD* a1, __int64 a2)
{
  __int64 result;
  char** v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE* v13;
  char v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  char* v26;
  int v27;
  __int64* v28;
  char v29;
  int v30;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v37;
  unsigned int v38;
  struct {
    __int64 v39;
    union {
      _QWORD v40[2];
      struct {
        char pad16_v41_[8];
        __int128 v41;
      };
    };
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    _QWORD v55[32];
    char gap392_[4];
    int v56;
  } f_;
  char v57[16];

  memset(f_.v55, 0, sizeof(f_.v55));
  f_.v56 = 0;
  __builtin_strcpy(v57, "bgsh/");
  f_.v53 = 0;
  f_.v54 = 0;
  f_.v51 = 0;
  f_.v52 = 0;
  f_.v49 = 0;
  f_.v50 = 0;
  f_.v47 = 0;
  f_.v48 = 0;
  f_.v45 = 0;
  f_.v46 = 0;
  f_.v43 = 0;
  f_.v44 = 0;
  f_.v42 = 0;
  f_.v40[0] = 0;
  f_.v41 = (__typeof__(f_.v41)){0};
  f_.v39 = 0;
  result = nn_ui2d_575980((__int64)(a1 + 1), &f_.v56, (__int64)f_.v55, 1);
  if ((_DWORD)result != 0) {
    v5 = (const char**)GameData_2136130[0];
    do {
      v9 = GameRoutine_1a0a060((const char*)f_.v55, v57);
      if (v9 != 0) {
        v10 = (_BYTE*)(v9 + GameRoutine_1a09c70(v57));
        v11 = f_.v40;
        v12 = 0;
        v13 = v10;
        v14 = *v10;
        if (*v10 != 0) {
          while (1) {
            v15 = &f_.v40[v12];
            LOBYTE(f_.v40[v12]) = v14;
            if (v13[1] == 0) {
              v20 = *v5;
              *((_BYTE*)v15 + 1) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            *((_BYTE*)v15 + 1) = v13[1];
            if (v13[2] == 0) {
              v20 = *v5;
              BYTE2(f_.v40[v12]) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            *((_BYTE*)v15 + 2) = v13[2];
            v16 = &f_.v40[v12];
            if (v13[3] == 0) {
              v20 = *v5;
              *((_BYTE*)v16 + 3) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            *((_BYTE*)v16 + 3) = v13[3];
            if (v13[4] == 0) {
              v20 = *v5;
              BYTE4(f_.v40[v12]) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            *((_BYTE*)v16 + 4) = v13[4];
            v17 = &f_.v40[v12];
            if (v13[5] == 0) {
              v20 = *v5;
              *((_BYTE*)v17 + 5) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            *((_BYTE*)v17 + 5) = v13[5];
            if (v13[6] == 0) {
              v20 = *v5;
              BYTE6(f_.v40[v12]) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            v18 = &f_.v40[v12];
            *((_BYTE*)v17 + 6) = v13[6];
            if ((_DWORD)(v12 * 8) == 120) {
              v20 = *v5;
              *((_BYTE*)v18 + 7) = 0;
              v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
              if (v21 != 0) {
                goto LABEL_33;
              }
              goto LABEL_4;
            }
            v19 = (unsigned __int8)v13[7];
            if (v19 == 0) {
              break;
            }
            ++v11;
            *((_BYTE*)v18 + 7) = v19;
            v13 = &v10[++v12 * 8];
            v14 = v10[v12 * 8];
            if (v14 == 0) {
              goto LABEL_16;
            }
          }
          v20 = *v5;
          *((_BYTE*)v11 + 7) = 0;
          v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
          if (v21 == 0) {
            goto LABEL_4;
          }
        LABEL_33:
          v22 = (const char*)(v21 + GameRoutine_1a09c70(v20));
          v23 = GameRoutine_1a0a060(v22, *GameData_2136138);
          if (v23 != 0) {
            f_.v39 = 0;
            if (f_.v40[0] == 0x7669686372415F5FLL &&
                (_QWORD)f_.v41 == 0x2E72656461685365LL &&
                *(_QWORD*)((char*)&f_.v41 + 5) == 0x68736E622E7265LL) {
              v26 = v22;
            }
            else {
              v26 = v22 + 1;
            }
            if ((unsigned int)(v23 - (int)v26) <= 0x7FFFFFFE) {
              if ((_DWORD)v23 == (_DWORD)v26) {
                v28 = &f_.v39;
              }
              else {
                v27 = (int)v26 - v23;
                v28 = &f_.v39;
                do {
                  v30 = *(unsigned __int8*)v26++;
                  v29 = v30;
                  if (v30 == 0) {
                    break;
                  }
                  *(_BYTE*)v28 = v29;
                  v28 = (__int64*)((char*)v28 + 1);
                } while (!__CFADD__(v27++, 1));
              }
              *(_BYTE*)v28 = 0;
            }
            v32 = nn_ui2d_5756e0((__int64)(a1 + 1), (const char*)f_.v55);
            if ((v32 & 0x80000000) != 0) {
              v33 = 0;
            }
            else {
              v33 = nn_ui2d_575670_alt2((__int64)(a1 + 1), nullptr, v32);
            }
            v34 = a1[25];
            if (f_.v40[0] == 0x7669686372415F5FLL &&
                (_QWORD)f_.v41 == 0x2E72656461685365LL &&
                *(_QWORD*)((char*)&f_.v41 + 5) == 0x68736E622E7265LL) {
              GameRoutine_1a09be0((__int64)f_.v40, v57);
              v37 = GameRoutine_1a09c70((const char*)f_.v40);
              GameRoutine_1a09c80((__int64)f_.v40, "__ArchiveShader.bushvt",
                                  127 - v37);
              v38 = nn_ui2d_5756e0((__int64)(a1 + 1), (const char*)f_.v40);
              if ((v38 & 0x80000000) != 0) {
                v6 = 0;
              }
              else {
                v6 = nn_ui2d_575670_alt2((__int64)(a1 + 1), nullptr, v38);
              }
              v7 = "__arcsh";
            }
            else {
              v6 = 0;
              v7 = (char*)&f_.v39;
            }
            v8 = GameRoutine_597b70((__int64)(a1 + 20), v7, 1);
            GameRoutine_59ed50(v8, a2, v33, v6, a1[26], v33 - v34 + a1[27],
                               a1[28], 3, f_.v39);
          }
          goto LABEL_4;
        }
      LABEL_16:
        v20 = *v5;
        LOBYTE(f_.v40[v12]) = 0;
        v21 = GameRoutine_1a0a060((const char*)f_.v40, v20);
        if (v21 != 0) {
          goto LABEL_33;
        }
      }
    LABEL_4:
      result = nn_ui2d_575980((__int64)(a1 + 1), &f_.v56, (__int64)f_.v55, 1);
    } while ((_DWORD)result != 0);
  }
  return result;
}

__int64 nn_ui2d_575670(__int64 a1, unsigned int* a2, signed int a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  bool v11;
  unsigned int v12;

  v3 = 0;
  if ((a3 & 0x80000000) == 0 && a3 < (signed __int32)*(_DWORD*)(a1 + 32)) {
    v4 = *(_QWORD*)(a1 + 24);
    v5 = *(_DWORD*)(a1 + 48);
    v6 = *(_DWORD*)(v4 + 16LL * (unsigned int)a3 + 8);
    v7 = bswap32(v6);
    if (v5 == 0) {
      v6 = v7;
    }
    if (a2 != nullptr) {
      v8 = *(_DWORD*)(v4 + 16LL * (unsigned int)a3 + 12);
      v9 = bswap32(v8);
      if (v5 != 0) {
        v10 = v8;
      }
      else {
        v10 = v9;
      }
      v11 = v10 >= v6;
      v12 = v10 - v6;
      if (!v11) {
        return 0;
      }
      *a2 = v6;
      a2[1] = v12;
    }
    return *(_QWORD*)(a1 + 40) + v6;
  }
  return v3;
}

_QWORD* nn_ui2d_577870(_QWORD* result, _QWORD* a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a3840,
                            memory_order_acquire) &
       1) == 0) {
    v8 = result;
    v6 = a2;
    v2 = __cxa_guard_acquire((__int64)&GameData_21a3840);
    a2 = v6;
    v3 = v2;
    result = v8;
    if (v3 != 0) {
      GameData_21a3853_alt1 = 0;
      GameData_21a3857 = 0;
      GameData_21a3850 = 1025;
      GameData_21a3852 = 5;
      GameData_21a3858 = 0x1040300010401LL;
      GameData_21a3860 = 0x5040100080001LL;
      GameData_21a3868 = 0x1040100050401LL;
      GameData_21a3870 = 524289;
      __cxa_guard_release((__int64)&GameData_21a3840);
      result = v8;
      a2 = v6;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a3848,
                            memory_order_acquire) &
       1) == 0) {
    v9 = result;
    v7 = a2;
    v4 = __cxa_guard_acquire((__int64)&GameData_21a3848);
    a2 = v7;
    v5 = v4;
    result = v9;
    if (v5 != 0) {
      GameData_21a3877_alt1 = 0;
      GameData_21a387b = 0;
      GameData_21a3874 = 1025;
      GameData_21a3876 = 5;
      GameData_21a387c_alt1 = 0x1040300010401LL;
      GameData_21a3884_alt1 = 0x1010500080001LL;
      GameData_21a388c_alt1 = 0x1000100050001LL;
      GameData_21a3894 = 589825;
      __cxa_guard_release((__int64)&GameData_21a3848);
      result = v9;
      a2 = v7;
    }
  }
  *result = &GameData_21a3850;
  *a2 = &GameData_21a3874;
  return result;
}

#pragma GCC visibility pop
