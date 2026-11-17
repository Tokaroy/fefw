#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_108cdc0(int);
extern int GameData_21d87e8;
__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result);
bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2);
__n128 GameRoutine_109d900(unsigned int*);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_10e26e0(__int64);
extern _DWORD* GameData_212d280;
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterIK_vtable[])();
extern __int64 GameData_21d8778;
extern __int64 fw_memory_g_heap_manager_ptr;
float powf(long double, float);
void CharacterIK_Unknown6_alt1(int8x16_t* a1, long double a2);
__n128
CharacterIK_Destructor_alt1(__int64 a1) __asm__("CharacterIK_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d900(unsigned int* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 CharacterIK_Destructor(__int64 a1);
float GameRoutine_1a0a550(float, float);
void CharacterIK_Unknown6(int8x16_t* a1);

void CharacterIK_Unknown6(int8x16_t* a1)
{

#pragma clang fp contract(on)

  float v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  int8x16_t* v7;
  float v8;
  float v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  float32x4_t* v15;
  float v16;
  float v17;
  int8x16_t* v18;
  float v20;
  float v21;
  unsigned __int32 v22;
  int8x16_t v23;
  unsigned __int32 v24;
  float v25;
  float v26;
  float v27;
  int8x16_t* v28;
  float v29;
  float v30;
  _DWORD* v31;
  int8x16_t* v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t* v35;
  char v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  unsigned __int32 v42;
  __int64* v43;
  __int64* v44;
  float v45;
  float v46;
  float32x4_t v47;
  float32x4_t* v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float v53;
  struct {
    __int128 v54;
    __int64 v55;
    __int64 v56;
    char gap48_[16];
    char v57;
  } v54_;

  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = (float)(*(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 496) + 16LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (v1 <= 0x0.0p+0f) {
    if (LANES128(a1[4]).n128_f32[0] <= 0x0.0p+0f) {
      return;
    }
  LABEL_21:
    v11 = LANES128(a1[2]).n128_u64[0];
    if (v11 == 0) {
      return;
    }
    v12 = *(_QWORD*)(v11 + 8);
    v13 = LANES128(a1[2]).n128_u64[1];
    if (v12 == -1 | v13 == 0) {
      return;
    }
    if (*(_DWORD*)(v13 + 384) != 0 || (LANES128(a1[4]).n128_u8[12] & 1) != 0) {
      v17 = 0x0.0p+0f;
      v21 = 0x1.0000000000000p+0f;
      LANES128(a1[13]).n128_u32[0] = 1120403456;
      v18 = a1 + 13;
      v20 = 0x0.0p+0f;
      v22 = LANES128(a1[3]).n128_u32[2];
      LANES128(a1[4]).n128_u8[12] = 0;
      if (v22 != 0) {
        v21 = 0x0.0p+0f;
      }
      LANES128(a1[4]).n128_u8[8] = 1;
      LANES128(a1[3]).n128_f32[3] = v21;
      LANES128(a1[4]).n128_f32[0] = v21;
      v16 = 0x1.9000000000000p+6f;
    }
    else {
      v15 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
      v16 = (float)(*(float*)(LANES128(v15[31]).n128_u64[0] + 16) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      v17 = 0x0.0p+0f;
      LANES128(a1[13]).n128_f32[0] = v16;
      v18 = a1 + 13;
      if (v16 > 0x0.0p+0f & v16 < 0x1.99999a0000000p-4f) {
        v23 = vsubq_f32(v15[19], a1[9]);
        v24 = LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u32[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v24),
                                         COERCE_AS(float32x2_t, v24)),
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v23).n128_u32[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v23).n128_u32[0]))))
                .n64_u64[0];
        v17 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
                .n64_f32[0];
        v20 = v17 / v16;
      }
      else {
        v20 = 0x0.0p+0f;
      }
    }
    LANES128(a1[12]).n128_f32[2] = v20;
    LANES128(a1[12]).n128_f32[3] = v17;
    v25 = LANES128(a1[11]).n128_f32[3];
    if ((float)(v20 * 0x1.cccccc0000000p+1f) >=
        *(float*)(GameData_21d8778 + 220)) {
      v26 = 0x0.0p+0f;
    }
    else {
      v26 = 0x1.0000000000000p+0f;
    }
    LANES128(a1[12]).n128_f32[0] = v26;
    if (v25 == v26) {
      goto LABEL_52;
    }
    v27 = LANES128(a1[12]).n128_f32[1];
    if (v27 > 0x0.0p+0f) {
      if (v27 >= 0x1.0000000000000p+0f) {
      LABEL_49:
        v25 = v26;
        goto LABEL_50;
      }
      if (v16 <= 0x0.0p+0f) {
        goto LABEL_50;
      }
      v28 = a1;
      v29 = 0x1.0000000000000p+0f -
            GameRoutine_1a0a550(0x1.0000000000000p+0f - v27,
                                v16 * 0x1.df851e0000000p+4f),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v29 > 0x0.0p+0f) {
        a1 = v28;
        if (v29 < 0x1.0000000000000p+0f) {
          v25 = v25 + (float)((float)(v26 - v25) * v29);
          goto LABEL_50;
        }
        goto LABEL_49;
      }
      a1 = v28;
    }
  LABEL_50:
    v30 = LANES128(a1[12]).n128_f32[0];
    LANES128(a1[11]).n128_f32[3] = v25;
    if (vabds_f32(v30, v25) < 0x1.a36e2e0000000p-14f) {
      LANES128(a1[11]).n128_f32[3] = v30;
    }
  LABEL_52:
    v31 = (_DWORD*)LANES128(*(a1)).n128_u64[1];
    v32 = a1;
    v54_.v55 = 0;
    v54_.v56 = 0;
    v54_.v54 = (__typeof__(v54_.v54)){0};
    LANES128(a1[9]).n128_u32[0] = v31[76];
    LANES128(a1[9]).n128_u32[1] = v31[77];
    v33 = a1[9];
    LANES128(v33).n128_u64[1] = (unsigned int)v31[78];
    a1[9] = v33;
    LANES128(a1[10]).n128_u32[0] = v31[80];
    LANES128(a1[10]).n128_u32[1] = v31[81];
    v34 = a1[10];
    LANES128(v34).n128_u64[1] = (unsigned int)v31[82];
    a1[10] = v34;
    GameRoutine_109ded0(&v54_.v54, a1 + 9, 3),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v35 = v32;
    if ((v36 & 1) != 0) {
      if ((v54_.v57 & 2) != 0 ||
          LANES128(v32[13]).n128_u32[1] + 1 != *GameData_212d280) {
        v42 = LANES128(v32[9]).n128_u32[1];
        LANES128(v32[11]).n128_u32[0] = v42;
        LANES128(v32[11]).n128_u32[1] = v42;
      }
      else {
        v37 = LANES128(v32[9]).n128_f32[1];
        v38 = LANES128(v32[11]).n128_f32[0];
        v39 = (float)(LANES128(v32[11]).n128_f32[3] * -0x1.99999a0000000p-1f) +
              0x1.0000000000000p+0f;
        LANES128(v32[11]).n128_f32[1] = v37;
        LANES128(v32[11]).n128_f32[2] = v39;
        if (v38 != v37) {
          if (v39 > 0x0.0p+0f) {
            if (v39 >= 0x1.0000000000000p+0f) {
              v38 = v37;
            }
            else {
              v40 = LANES128(v32[13]).n128_f32[0];
              if (v40 > 0x0.0p+0f) {
                v53 = v38;
                v41 = 0x1.0000000000000p+0f -
                      GameRoutine_1a0a550(0x1.0000000000000p+0f - v39,
                                          v40 * 0x1.df851e0000000p+4f),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if (v41 <= 0x0.0p+0f) {
                  v38 = v53;
                  v35 = v32;
                }
                else {
                  if (v41 >= 0x1.0000000000000p+0f) {
                    v38 = v37;
                  }
                  else {
                    v38 = v53 + (float)((float)(v37 - v53) * v41);
                  }
                  v35 = v32;
                }
              }
            }
          }
          v46 = LANES128(v35[11]).n128_f32[1];
          LANES128(v35[11]).n128_f32[0] = v38;
          if (vabds_f32(v46, v38) < 0x1.a36e2e0000000p-14f) {
            v38 = v46;
            LANES128(v35[11]).n128_f32[0] = v46;
          }
        }
        v47 = v35[9];
        v48 = (float32x4_t*)LANES128(*(v35)).n128_u64[1];
        v49 = v47;
        LANES128(v49).n128_f32[1] = v38;
        v50 = vsubq_f32(v48[19], v49);
        v51 = vmulq_f32(v50, v50);
        LANES128(v51).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v48[19]).n128_u32[0] = LANES128(v47).n128_u32[0];
          LANES128(v48[19]).n128_f32[1] = v38;
          v52 = v48[19];
          LANES128(v48[18]).n128_u32[2] |= 1u;
          LANES128(v52).n128_u64[1] = LANES128(v47).n128_u32[2];
          v48[19] = v52;
        }
      }
    }
    v43 = (__int64*)LANES128(v35[5]).n128_u64[0];
    v44 = (__int64*)LANES128(v35[5]).n128_u64[1];
    while (v43 != v44) {
      if (*(_BYTE*)(*v43 + 17) == 1) {
        v45 = LANES128(*(v18)).n128_f32[0];
        *(_DWORD*)(*v43 + 32) = LANES128(*(v18)).n128_u32[0];
        (*(void (**)(__int64, float))(*(_QWORD*)*v43 + 24LL))(*v43, v45),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      ++v43;
    }
    return;
  }
  v2 = LANES128(a1[4]).n128_f32[0];
  v3 = LANES128(a1[4]).n128_f32[1];
  if (LANES128(a1[3]).n128_u32[2] != 0) {
    v4 = 0x0.0p+0f;
  }
  else {
    v4 = 0x1.0000000000000p+0f;
  }
  v5 = v4 - v2;
  if (v3 <= 0x0.0p+0f) {
    v6 = 0x0.0p+0f;
  }
  else {
    v6 = 0x1.0000000000000p+0f;
    if (v3 < 0x1.0000000000000p+0f) {
      v7 = a1;
      v6 = 0x1.0000000000000p+0f -
           GameRoutine_1a0a550(0x1.0000000000000p+0f - v3,
                               v1 * 0x1.df851e0000000p+4f),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v2 = LANES128(v7[4]).n128_f32[0];
      a1 = v7;
    }
  }
  v8 = v2 + (float)(v5 * v6);
  if (v8 < 0x1.0624de0000000p-10f) {
    v8 = 0x0.0p+0f;
  }
  v9 = LANES128(a1[3]).n128_f32[3];
  if (v8 > 0x1.ff7cee0000000p-1f) {
    v8 = 0x1.0000000000000p+0f;
  }
  LANES128(a1[4]).n128_f32[0] = v8;
  if (v9 <= 0x0.0p+0f || v8 > 0x0.0p+0f) {
    v10 = v8 > 0x0.0p+0f;
    if (v9 > 0x0.0p+0f) {
      v10 = false;
    }
  }
  else {
    v10 = true;
  }
  LANES128(a1[4]).n128_u8[8] = v10;
  LANES128(a1[3]).n128_f32[3] = v8;
  if (v8 > 0x0.0p+0f) {
    goto LABEL_21;
  }
}

__int64 CharacterIK_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  *(_QWORD*)a1 = game_character_CharacterIK_vtable;
  GameRoutine_10e26e0(a1);
  GameHr_109d900((unsigned int*)(a1 + 104));
  v2 = *(_QWORD*)(a1 + 128);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD**)(a1 + 88);
    if ((_QWORD*)v3 == v4) {
      goto LABEL_10;
    }
    do {
      v6 = *--v4;
      v5 = v6;
      *v4 = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
      }
    } while (v4 != (_QWORD*)v3);
    v7 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v3;
    v3 = v7;
    if (v7 != 0) {
    LABEL_10:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v3);
    }
  }
  result = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;

  v1 = *(_QWORD*)(result + 8);
  if (!(*(float*)(v1 + 64) <= 0x0.0p+0f) && (*(_BYTE*)(v1 + 16) & 1) != 0) {
    v2 = *(__int64**)(v1 + 80);
    v3 = *(__int64**)(v1 + 88);
    if (v2 != v3) {
      if (*(_DWORD*)(*(_QWORD*)(v1 + 40) + 384LL) == 1) {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 40LL))(result);
            if ((result & 1) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)*v2 + 32LL))(*v2);
            }
          }
          ++v2;
        } while (v2 != v3);
      }
      else {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
          }
          ++v2;
        } while (v2 != v3);
      }
    }
    *(_DWORD*)(v1 + 212) = GameData_21d87e8;
  }
  return result;
}

bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  _BOOL8 result;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_108cdc0(*a2);
  if (result) {
    v4 = 0;
  }
  else {
    v4 = 256;
  }
  *(_DWORD*)(v2 + 56) = *(_DWORD*)(v2 + 56) & 0xFFFFFEDF | v4;
  return result;
}

#pragma GCC visibility pop
