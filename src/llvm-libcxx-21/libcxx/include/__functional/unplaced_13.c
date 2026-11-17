#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ede500(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212d448[9];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float LegionGambit_e4c8c0(__int64, _QWORD*, _QWORD*, char);
float game_ede020(_QWORD*);
int __cxa_guard_acquire(__int64);
void LegionGambitCamera_e5a1c0(float32x4_t*);
void __cxa_guard_release(__int64);
void game_ede740(float32x4_t*);
float llvm_libcxx_21_libcxx_include___functional_e5ac70();

float llvm_libcxx_21_libcxx_include___functional_e5ac70()
{

#pragma clang fp contract(off)
  __int64 v0;
  float32x4_t v1;
  float32x4_t* v2;
  char v3;
  float32x4_t v4;
  unsigned __int32 v5;
  int8x16_t v6;
  unsigned __int32 v7;
  unsigned __int64 v8;
  int v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float32x4_t* v17;
  float v18;
  unsigned int v19;
  float32x4_t v20;
  float32x4_t* v21;
  float32x4_t* v22;
  __int64 v23;
  float32x4_t v25;
  float32x4_t v26;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(float32x4_t**)(v0 + 8);
  if (LANES128(v2[9]).n128_u8[4] == 0) {
    return LANES128(v1).n128_f32[0];
  }
  v3 = LANES128(v2[9]).n128_i8[5];
  v25 = (__typeof__(v25)){0};
  v26 = (__typeof__(v26)){0};
  LegionGambit_e4c8c0(LANES128(*(v2)).n128_u64[0], &v26, &v25, v3),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = v25;
  v5 = LANES128(v26).n128_u32[2];
  v6 = vsubq_f32(v26, v25);
  v7 = LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u32[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(
              vmul_f32(COERCE_AS(float32x2_t, v7), COERCE_AS(float32x2_t, v7)),
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u32[0]),
                       COERCE_AS(float32x2_t, LANES128(v6).n128_u32[0]))))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_f32[0] >= 0x1.0c6f7c0000000p-20f) {
    v8 = LANES128(*(v2)).n128_u64[1];
    *(_QWORD*)(v8 + 128) = LANES128(v26).n128_u64[0];
    *(_QWORD*)(v8 + 144) = LANES128(v4).n128_u64[0];
    v9 = *(unsigned __int8*)(v8 + 164);
    v10 = *(_OWORD*)(v8 + 128);
    v11 = *(_OWORD*)(v8 + 144);
    *((_QWORD*)&v10 + 1) = v5;
    *((_QWORD*)&v11 + 1) = LANES128(v4).n128_u32[2];
    *(_OWORD*)(v8 + 128) = v10;
    *(_OWORD*)(v8 + 144) = v11;
    if (v9 == 1) {
      *(_BYTE*)(v8 + 164) = 0;
    }
    if (*(_BYTE*)(v8 + 172) == 1) {
      *(_BYTE*)(v8 + 172) = 0;
    }
    *(_BYTE*)(v8 + 113) = 1;
  }
  v12 = game_script_hub_g_frame_counter_ptr[0];
  v13 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  v14 = LANES128(v2[9]).n128_f32[2];
  v15 = LANES128(v2[9]).n128_f32[3];
  if (v14 > v15) {
    v14 = v14 - v13;
    if (v14 >= v15) {
      goto LABEL_14;
    }
  LABEL_13:
    v14 = LANES128(v2[9]).n128_f32[3];
    goto LABEL_14;
  }
  if (v14 < v15) {
    v14 = v14 + v13;
    if (v14 > v15) {
      goto LABEL_13;
    }
  }
LABEL_14:
  LANES128(v2[9]).n128_f32[2] = v14;
  LegionGambitCamera_e5a1c0(v2),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v16 = *(_QWORD*)(*GameData_212d448[0] + 128);
  if (v16 != 0) {
    v17 = (float32x4_t*)LANES128(v2[2]).n128_u64[1];
    v18 = *(float*)(*(_QWORD*)v12 + 160LL);
    LANES128(v17[6]).n128_u64[0] = *(_QWORD*)(v16 + 72);
    LANES128(v17[9]).n128_f32[0] =
        (float)(v18 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v23 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v23;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v19 = DWORD2(GameData_21a6120);
    LANES128(v17[10]).n128_u64[0] = GameData_21a6120;
    v20 = v17[10];
    LANES128(v20).n128_u64[1] = v19;
    v17[10] = v20;
    game_ede020(v17),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_ede500((__int64)v17),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    game_ede740(v17),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v21 = (float32x4_t*)LANES128(v17[6]).n128_u64[0];
    if (LANES128(*(v21)).n128_u32[2] == 0) {
      v21[2] = vaddq_f32(v21[2], v17[10]);
      v22 = (float32x4_t*)LANES128(v17[6]).n128_u64[0];
      v1 = vaddq_f32(v22[1], v17[10]);
      v22[1] = v1;
    }
  }
  return LANES128(v1).n128_f32[0];
}

#pragma GCC visibility pop
