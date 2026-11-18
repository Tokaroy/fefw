#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

bool game_zview_d24440(float a1, __int64 a2, __int64 a3, float32x4_t* a4,
                       float32x4_t* a5, __int64 a6);

bool game_zview_d24440(float a1, __int64 a2, __int64 a3, float32x4_t* a4,
                       float32x4_t* a5, __int64 a6)
{
  float32x4_t* v6;
  _BOOL8 result;
  float32x4_t v8;
  int8x16_t v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;

  v6 = *(float32x4_t**)(a6 + 16);
  result = false;
  v8 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a3 + 16) + 560LL), v6[35]);
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  v10 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_f32[0];
  if (v10 < 0x1.9000000000000p+8f && a3 != a6) {
    v11 = (float)(PSEUDO_UNFUSED(a1 *
                                 *(float*)(**(_QWORD**)(a3 + 632) + 528LL))) +
          *(float*)(**(_QWORD**)(a6 + 632) + 528LL);
    if (v10 < (float)((float)((float)(v11 * 0x1.0000000000000p+1f) +
                              0x1.0000000000000p+0f) *
                      (float)((float)(v11 * 0x1.0000000000000p+1f) +
                              0x1.0000000000000p+0f))) {
      v12 = LANES128(*(a4)).n128_f32[1];
      v13 = LANES128(*(a5)).n128_f32[1];
      if (v13 >= v12) {
        v14 = LANES128(*(a4)).n128_f32[1];
      }
      else {
        v14 = LANES128(*(a5)).n128_f32[1];
      }
      v15 = v14 - *(float*)(a3 + 552);
      v16 = LANES128(v6[36]).n128_f32[0];
      if (v15 <= v16) {
        if (v12 < v13) {
          v12 = LANES128(*(a5)).n128_f32[1];
        }
        if (v12 >= (float)(v16 - *(float*)(a6 + 552))) {
          v17 = *a4;
          v18 = *a5;
          v19 = COERCE_FLOAT(LANES128(*(a4)).n128_u64[1]);
          v20 = COERCE_FLOAT(LANES128(*(a5)).n128_u64[1]);
          v21 = LANES128_OF(vsubq_f32(*a5, *a4)).n128_f32[0];
          v22 = v20 - v19;
          if (v21 != 0x0.0p+0f || v22 != 0x0.0p+0f) {
            v23 =
                sqrtf((float)(PSEUDO_UNFUSED(v22 * v22)) + (float)(v21 * v21));
            v21 = v21 / v23;
            v22 = v22 / v23;
          }
          v24 = LANES128(v6[18]).n128_f32[1];
          v25 = LANES128(v6[18]).n128_f32[2];
          v26 = LANES128(v17).n128_f32[0] - v24;
          v27 = v19 - v25;
          if ((float)(LANES128(v17).n128_f32[0] - v24) != 0x0.0p+0f ||
              v27 != 0x0.0p+0f) {
            v28 =
                sqrtf((float)(PSEUDO_UNFUSED(v27 * v27)) + (float)(v26 * v26));
            v26 = v26 / v28;
            v27 = v27 / v28;
          }
          if ((float)((float)(PSEUDO_UNFUSED(v22 * v27)) +
                      (float)(v21 * v26)) <= 0x0.0p+0f) {
            v29 = LANES128(v18).n128_f32[0] - v24;
            v30 = v20 - v25;
            if ((float)(LANES128(v18).n128_f32[0] - v24) != 0x0.0p+0f ||
                v30 != 0x0.0p+0f) {
              v31 = sqrtf((float)(PSEUDO_UNFUSED(v30 * v30)) +
                          (float)(v29 * v29));
              v29 = v29 / v31;
              v30 = v30 / v31;
            }
            if ((float)((float)(PSEUDO_UNFUSED(v22 * v30)) +
                        (float)(v21 * v29)) >= 0x0.0p+0f) {
              v32 = (float)(PSEUDO_UNFUSED(v22 * (float)(v25 - v19))) +
                    (float)(v21 * (float)(v24 - LANES128(v17).n128_f32[0]));
              v33 = v21 * v32;
              v34 = v22 * v32;
              PSEUDO_LOW_LANE128(v18, n128_f32,
                                 LANES128(v17).n128_f32[0] + v33);
              v20 = v19 + v34;
            }
          }
          else {
            PSEUDO_LOW_LANE128(v18, n128_u32, *(unsigned __int32*)&(*a4));
            {
              __typeof__(v20) z_ = (__typeof__(v20)){0};
              LODWORD(z_) = LANES128(*(a4)).n128_u64[1];
              v20 = z_;
            }
          }
          return (float)((float)(PSEUDO_UNFUSED((float)(v25 - v20) *
                                                (float)(v25 - v20))) +
                         (float)((float)(v24 - LANES128(v18).n128_f32[0]) *
                                 (float)(v24 - LANES128(v18).n128_f32[0]))) <
                 (float)(v11 * v11);
        }
        else {
          return false;
        }
      }
      else {
        return false;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
