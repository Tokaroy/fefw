#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_combat_1068f80(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_combat_106b310(PSEUDO_X8, float*, float*,
                                                    float result);
__int64 CharacterAppearance_10743e0(__int64);
__int64 CinematicZoom_10e0fc0(__int64 result);
__int64 GameRoutine_10d4560(__int64 result, int*, float, long double);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* GameData_212d448[9];
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235738;
float GameRoutine_10a00a0(float, long double, float);
float game_combat_106aaf0(__int64);
float game_combat_106aff0(__int64);
float32x4_t GameRoutine_11029a0(float32x4_t*, float32x4_t result);
void GameRoutine_1066e60(_QWORD*);
void game_combat_1065370(int** a1, double a2, long double a3);
float32x4_t game_combat_1068090(float32x4_t* a1);

void game_combat_1065370(int** a1, double a2, long double a3)
{
  int v3;
  int* v4;
  long double v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int** v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v24;
  __int64 v25;
  float v26;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  int v37;
  __int64 v38;
  float v39;
  int** v40;

  v4 = *a1;
  if (((_BYTE)a1[1] & 1) != 0) {
    goto LABEL_2;
  }
  v21 = v4[17];
  if (v21 <= 143741766) {
    if (v21 == -1911544124 | v21 == -1911544118) {
      if (GameData_21ec7b0 == 0 ||
          (v28 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
          (*(_BYTE*)(v28 + 113) & 0x80) == 0) {
        v29 = GameData_2235738;
        if (GameData_2235738 != 0 && *(_BYTE*)(GameData_2235738 + 272) == 1 &&
            *(float*)(GameData_2235738 + 280) !=
                *(float*)(GameData_2235738 + 284)) {
          v30 = *(float*)(GameData_2235738 + 300);
          *(_DWORD*)(GameData_2235738 + 312) = 0;
          *(_BYTE*)(v29 + 308) = v30 < 0x0.0p+0f;
        }
      }
    }
    else {
      if (v21 != -1193575777) {
        goto LABEL_71;
      }
      v31 = 5;
      if ((v4[1] & 4) != 0) {
        v31 = 14;
      }
      v32 = GameData_21ec7b0;
      if ((GameData_21ec7b0 == 0 ||
           (v33 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
           (*(_BYTE*)(v33 + 113) & 0x80) == 0) &&
          GameData_2235738 != 0) {
        v34 = GameData_2235738 + (v31 << 6);
        if (*(_BYTE*)(v34 + 16) == 1) {
          v35 = v34 + 8;
          if (*(float*)(v35 + 16) != *(float*)(v35 + 20)) {
            v36 = *(float*)(v35 + 36);
            *(_DWORD*)(v35 + 48) = 0;
            *(_BYTE*)(v35 + 44) = v36 < 0x0.0p+0f;
            v32 = GameData_21ec7b0;
            v4 = *a1;
          }
        }
      }
      v37 = *v4;
      if ((*v4 & 0x201) == 0) {
        v38 = GameData_21d8778;
        if ((v37 & 8) != 0) {
          v39 = (float)*(int*)(GameData_21d8778 + 88) * 0x1.1111120000000p-6f;
        }
        else {
          *(float*)&a3 =
              (float)((float)v4[3 * v4[3] + 26] / (float)v4[3 * v4[3] + 24]) +
              0x1.3333340000000p-2f;
          if ((v37 & 0x44) == 0) {
            *(float*)&a3 =
                (float)v4[3 * v4[3] + 26] / (float)v4[3 * v4[3] + 24];
          }
          v39 =
              (float)(PSEUDO_UNFUSED((float)*(int*)(v38 + 80) *
                                     0x1.1111120000000p-6f)) +
              (float)((float)((float)(PSEUDO_UNFUSED((float)*(int*)(v38 + 84) *
                                                     0x1.1111120000000p-6f)) -
                              (float)(PSEUDO_UNFUSED((float)*(int*)(v38 + 80) *
                                                     0x1.1111120000000p-6f))) *
                      GameRoutine_10a00a0(*(float*)(GameData_21d8778 + 72), a3,
                                          *(float*)(GameData_21d8778 + 76)));
        }
        if (v39 > 0x0.0p+0f) {
          *(_DWORD*)(v32 + 160) = 0;
          *(float*)(v32 + 164) = v39;
          *(_DWORD*)(v32 + 168) = 0;
          *(_BYTE*)(v32 + 172) = 0;
          *(_DWORD*)(v32 + 176) = 0;
          *(_QWORD*)(v32 + 144) = 1065353216;
          *(_QWORD*)(v32 + 152) = 0xB0000000BLL;
        }
      }
    }
  }
  else {
    if (((unsigned int)(v21 - 232551549) > 0x10 |
         ((1 << ((v21 - 125) & 0x1F)) & 0x10401) == 0) &&
        v21 != 143741767) {
    LABEL_71:
      if ((*v4 & 0x212) == 0x12) {
        v40 = a1;
        CinematicZoom_10e0fc0(13);
        v4 = *v40;
        a1 = v40;
      }
    LABEL_2:
      if ((*(_BYTE*)v4 & 0x80) != 0) {
        return;
      }
      {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        v5 = z_;
      }
      if (*((_BYTE*)a1 + 8) != 1) {
        goto LABEL_75;
      }
      {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p-1f));
        v5 = z_;
      }
      if (*GameData_212d448[0] == 0) {
        goto LABEL_75;
      }
      v6 = v4[2];
      if (v6 > 3) {
        goto LABEL_75;
      }
      v7 = *GameData_212d448[0] + 24LL * v6;
      v8 = *(_QWORD*)(v7 + 32);
      if (v8 == 0) {
        goto LABEL_75;
      }
      v9 = a1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(v7 + 40);
      v11 = *(_QWORD*)(v8 + 8) == -1 | v10 == 0;
      if (v11 || (v12 = *(_QWORD*)(v10 + 80)) == 0 ||
          (*(_QWORD*)(v12 + 8) != -1 ? (v13 = *(_QWORD*)(v10 + 88) == 0)
                                     : (v13 = true),
           v13 || *(_QWORD*)(v8 + 8) == -1)) {
        std___1___shared_weak_count___release_weak(v8);
      }
      else {
        std___1___shared_weak_count___release_weak(v8);
        v14 = *(_QWORD*)(v10 + 80);
        if (v14 != 0) {
          v15 = *(_QWORD*)(v14 + 8);
          v16 = *(_QWORD*)(v10 + 88);
          {
            __typeof__(v5) z_ = (__typeof__(v5)){0};
            LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p-1f));
            v5 = z_;
          }
          a1 = v9;
          if (v15 != -1 & v16 != 0) {
            v18 = *(_QWORD*)(v16 + 392);
            v19 = *(_QWORD*)(v16 + 400);
            if (v19 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (v18 != 0) {
              v20 = CharacterAppearance_10743e0(v18);
              {
                __typeof__(v5) z_ = (__typeof__(v5)){0};
                LODWORD(z_) =
                    COERCE_UNSIGNED_INT((float)(0x1.8000000000000p-1f));
                v5 = z_;
              }
              v11 = v20 == 3;
              a1 = v9;
              v3 = v11;
            }
            if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(v19,
                                                                         v5);
              std___1___shared_weak_count___release_weak(v19);
              {
                __typeof__(v5) z_ = (__typeof__(v5)){0};
                LODWORD(z_) =
                    COERCE_UNSIGNED_INT((float)(0x1.8000000000000p-1f));
                v5 = z_;
              }
              a1 = v9;
            }
            if (((v18 != 0) & (v3 ^ 1)) != 0) {
              return;
            }
          }
        LABEL_75:
          GameRoutine_10d4560(GameData_21ec7b0 + 136, *a1, *(float*)&v5, a3);
          return;
        }
      }
      {
        __typeof__(v5) z_ = (__typeof__(v5)){0};
        LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.8000000000000p-1f));
        v5 = z_;
      }
      a1 = v9;
      goto LABEL_75;
    }
    if (GameData_21ec7b0 == 0 ||
        (v24 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
        (*(_BYTE*)(v24 + 113) & 0x80) == 0) {
      v25 = GameData_2235738;
      if (GameData_2235738 != 0 && *(_BYTE*)(GameData_2235738 + 208) == 1 &&
          *(float*)(GameData_2235738 + 216) !=
              *(float*)(GameData_2235738 + 220)) {
        v26 = *(float*)(GameData_2235738 + 236);
        *(_DWORD*)(GameData_2235738 + 248) = 0;
        *(_BYTE*)(v25 + 244) = v26 < 0x0.0p+0f;
      }
    }
  }
}

float32x4_t game_combat_1068090(float32x4_t* a1)
{

#pragma clang fp contract(off)
  __int64 v3;
  float32x4_t v4;
  __int64 v6;
  __int64 v7;

  GameRoutine_1066e60(&LANES128(a1[17]).n128_u64[1]);
  GameRoutine_1066e60((float32x4_t*)LANES128(a1[12]).n128_u64);
  game_combat_106aaf0((__int64)&a1[38]);
  if (LANES128(a1[52]).n128_i32[2] < 1) {
    LANES128(v4).n128_f32[0] = game_combat_106aff0((__int64)&a1[50]);
  }
  else {
    v3 = LANES128(a1[50]).n128_i64[1];
    game_combat_1068f80((void*)((float*)&v6), v3);
    game_combat_106b310((void*)((float*)&v7), (float*)(v3 + 48), (float*)&v6,
                        0x1.99999a0000000p-3f);
    PSEUDO_LOW_LANE128(v4, n128_u32, v7);
    *(_QWORD*)(LANES128(a1[50]).n128_u64[1] + 48) = v7;
  }
  return GameRoutine_11029a0(a1 + 31, v4);
}

#pragma GCC visibility pop
