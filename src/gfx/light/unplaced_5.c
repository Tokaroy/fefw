#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
float gfx_light_c54ab0();

float gfx_light_c54ab0()
{
  __int64 v0;
  __int64 v1;
  float result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float v26;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = v0;
  v4 = *(_QWORD*)(v0 + 16);
  if (v4 != 0) {
    v5 = v1;
    v6 = std___1___shared_weak_count_lock(v4),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v6 != 0) {
      v7 = *(_QWORD*)(v3 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v7 != 0) {
        *(_OWORD*)(*(_QWORD*)(v3 + 32) + 16LL) = *(_OWORD*)(v5 + 48);
        v9 = vsubq_f32(
            vmlaq_f32(vmulq_f32(*(float32x4_t*)v5, COERCE_AS(float32x4_t, 0)),
                      COERCE_AS(float32x4_t, 0), *(float32x4_t*)(v5 + 16)),
            *(float32x4_t*)(v5 + 32));
        v10 = vmulq_f32(v9, v9);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        v11 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
                .n64_f32[0];
        result = 0x1.47ae140000000p-7f;
        if (v11 < 0x1.47ae140000000p-7f) {
          v11 = 0x1.47ae140000000p-7f;
        }
        *(float*)(*(_QWORD*)(v3 + 32) + 32LL) = v11;
        v12 = *(float32x4_t**)(v3 + 32);
        v13 = vmulq_n_f32(v9,
                          0x1.0000000000000p+0f / LANES128(v12[2]).n128_f32[0]);
        LANES128(v13).n128_u32[3] = 0;
        v12[16] = v13;
        v14 = vmlaq_f32(vmlaq_f32(vnegq_f32(*(float32x4_t*)v5),
                                  COERCE_AS(float32x4_t, 0LL),
                                  *(float32x4_t*)(v5 + 16)),
                        COERCE_AS(float32x4_t, 0LL), *(float32x4_t*)(v5 + 32));
        v15 = vmulq_f32(v14, v14);
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        LANES128(v16).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
        v17 = LANES128_OF(vsqrtq_f32(v16)).n128_f32[0];
        if (v17 < 0x1.47ae140000000p-7f) {
          v17 = 0x1.47ae140000000p-7f;
        }
        *(float*)(*(_QWORD*)(v3 + 32) + 288LL) = v17;
        v18 = vrsqrteq_f32(v16);
        v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v16, v18)));
        *(int8x16_t*)(*(_QWORD*)(v3 + 32) + 272LL) = vbicq_s8(
            vmulq_f32(v14,
                      vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v16, v19)))),
            vceqzq_f32(v16));
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v19).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v22).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v20).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v22).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v21).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82d00),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v23 = vmlsq_f32(vmulq_f32(v19, v20), v21, v22);
        v24 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*(float32x4_t*)v5, LANES128(v23).n128_f32[0]),
                *(float32x4_t*)(v5 + 16),
                COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
            *(float32x4_t*)(v5 + 32), v23, 2);
        v25 = vmulq_f32(v24, v24);
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        v26 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]))))
                .n64_f32[0];
        if (v26 >= 0x1.47ae140000000p-7f) {
          result = v26;
        }
        *(float*)(*(_QWORD*)(v3 + 32) + 292LL) = result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
