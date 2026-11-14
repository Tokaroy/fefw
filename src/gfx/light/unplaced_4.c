#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
float32x4_t gfx_light_c548d0(_QWORD* a1);
float32x4_t gfx_light_c54f70(_QWORD* a1);

float32x4_t gfx_light_c548d0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int8x16_t* v5;
  int8x16_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int64 v18;

  v2 = a1[2];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != 0) {
        LABEL_5:
          v5 = (int8x16_t*)a1[4];
          v6 = v5[16];
          v7 = v5[17];
          LANES128(v8).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v8).n128_i8[8] =
              vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v10).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v11 = vmulq_f32(v8, v9);
          *(int8x8_t*)&LANES128(v10).n128_i8[8] =
              vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v12 = vmlsq_f32(v11, v9, v10);
          LANES128(v9).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v13).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v14).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v15).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v13).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v14).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v15).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v16 = vmlsq_f32(vmulq_f32(v9, v13), v15, v14);
          return vmlaq_f32(
              vmlaq_f32(
                  vmulq_n_f32(
                      vmlaq_f32(vmlaq_f32(vnegq_f32(v7),
                                          COERCE_AS(float32x4_t, 0), v12),
                                COERCE_AS(float32x4_t, 0), v6),
                      COERCE_FLOAT(LANES128(v5[18]).n128_u64[0])),
                  COERCE_AS(float32x4_t, 0),
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v7, LANES128(v16).n128_f32[0]), v12,
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                      v6, v16, 2)),
              COERCE_AS(float32x4_t, 0),
              vsubq_f32(vmlaq_f32(vmulq_f32(v7, COERCE_AS(float32x4_t, 0)),
                                  COERCE_AS(float32x4_t, 0), v12),
                        v6));
        }
      }
      else {
        v18 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v18);
        if (v4 != 0) {
          goto LABEL_5;
        }
      }
    }
  }
  return *(float32x4_t*)GameData_212c2a0;
}

float32x4_t gfx_light_c54f70(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int8x16_t* v5;
  int8x16_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int64 v18;

  v2 = a1[2];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != 0) {
        LABEL_5:
          v5 = (int8x16_t*)a1[4];
          v6 = v5[16];
          v7 = v5[17];
          LANES128(v8).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v8).n128_i8[8] =
              vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v10).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v11 = vmulq_f32(v8, v9);
          *(int8x8_t*)&LANES128(v10).n128_i8[8] =
              vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v9).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v12 = vmlsq_f32(v11, v9, v10);
          LANES128(v9).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v13).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v14).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v15).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v9).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v13).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v14).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v15).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v16 = vmlsq_f32(vmulq_f32(v9, v13), v15, v14);
          return vmlaq_f32(
              vmlaq_f32(
                  vmulq_n_f32(
                      vmlaq_f32(vmlaq_f32(vnegq_f32(v7),
                                          COERCE_AS(float32x4_t, 0), v12),
                                COERCE_AS(float32x4_t, 0), v6),
                      COERCE_FLOAT(LANES128(v5[18]).n128_u64[0])),
                  COERCE_AS(float32x4_t, 0),
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v7, LANES128(v16).n128_f32[0]), v12,
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                      v6, v16, 2)),
              COERCE_AS(float32x4_t, 0),
              vsubq_f32(vmlaq_f32(vmulq_f32(v7, COERCE_AS(float32x4_t, 0)),
                                  COERCE_AS(float32x4_t, 0), v12),
                        v6));
        }
      }
      else {
        v18 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v18);
        if (v4 != 0) {
          goto LABEL_5;
        }
      }
    }
  }
  return *(float32x4_t*)GameData_212c2a0;
}

#pragma GCC visibility pop
