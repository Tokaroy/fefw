#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__n64 llvm_libcxx_21_libcxx_include___vector_a6c440(float32x4_t* a1,
                                                    __int128* a2,
                                                    float32x4_t* a3);

__n64 llvm_libcxx_21_libcxx_include___vector_a6c440(float32x4_t* a1,
                                                    __int128* a2,
                                                    float32x4_t* a3)
{
  float32x4_t v3;
  __int128 v4;
  float32x4_t v5;
  __int128 v6;
  __int128 v7;
  float v8;
  float v9;
  __n64 result;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v3 = *a1;
  v4 = *a2;
  v5 = COERCE_AS(float32x4_t, a2[1]);
  v6 = a2[2];
  v7 = a2[3];
  v8 = COERCE_FLOAT(LANES128(*(a1)).n128_u64[1]);
  v9 = COERCE_FLOAT(*((_QWORD*)a2 + 7)) +
       (float)((float)(vmuls_lane_f32(
                           COERCE_FLOAT(DWORDn(
                               LANES128(*(a1)).n128_u64[0],
                               sizeof(LANES128(*(a1)).n128_u64[0]) / 4 - 1)),
                           v5, 2) +
                       (float)(COERCE_FLOAT(*a1) *
                               COERCE_FLOAT(*((_QWORD*)a2 + 1)))) +
               (float)(v8 * *((float*)&v6 + 2)));
  LANES64(result).n64_u64[0] = 0;
  if (v9 < 0x0.0p+0f) {
    v11 = *a3;
    v12 = a3[1];
    v13 = a3[2];
    v14 = a3[3];
    v15 = *(float*)&v7 +
          (float)((float)(vmuls_lane_f32(
                              LANES128(v5).n128_f32[0],
                              COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]),
                              1) +
                          (float)(*(float*)&v4 * LANES128(v3).n128_f32[0])) +
                  (float)(*(float*)&v6 * LANES128(v3).n128_f32[2]));
    v16 = *((float*)&v7 + 1) +
          (float)((float)(LANES128_OF(vmulq_f32(v3, v5)).n128_f32[1] +
                          (float)(LANES128(v3).n128_f32[0] *
                                  *((float*)&v4 + 1))) +
                  (float)(v8 * *((float*)&v6 + 1)));
    v17 =
        LANES128(v14).n128_f32[3] +
        (float)((float)(vmuls_lane_f32(v16, v12, 3) +
                        (float)(v15 * COERCE_FLOAT(DWORDn(
                                          *(unsigned __int128*)a3,
                                          sizeof(*(unsigned __int128*)a3) / 4 -
                                              1)))) +
                (float)(v9 * LANES128(v13).n128_f32[3]));
    if (v17 != 0x0.0p+0f) {
      v18 = 0x1.0000000000000p+0f / v17;
      v19 = (float)((float)(PSEUDO_UNFUSED(v16 * LANES128(v12).n128_f32[0])) +
                    (float)(LANES128(v11).n128_f32[0] * v15)) +
            (float)(LANES128(v13).n128_f32[0] * v9);
      v20 =
          (float)((float)-(
                      float)(v18 *
                             (float)(LANES128(v14).n128_f32[1] +
                                     (float)((float)(vmuls_lane_f32(
                                                         v16,
                                                         COERCE_AS(
                                                             float32x2_t,
                                                             LANES128(v12)
                                                                 .n128_u64[0]),
                                                         1) +
                                                     (float)(v15 *
                                                             LANES128(v11)
                                                                 .n128_f32
                                                                     [1])) +
                                             (float)(v9 * LANES128(v13)
                                                              .n128_f32[1])))) *
                  0x1.0e00000000000p+9f) +
          0x1.0e00000000000p+9f;
      LANES64(result).n64_f32[0] =
          (float)((float)((float)(LANES128(v14).n128_f32[0] + v19) * v18) *
                  0x1.e000000000000p+9f) +
          0x1.e000000000000p+9f;
      LANES64(result).n64_f32[1] = v20;
    }
  }
  return result;
}

#pragma GCC visibility pop
