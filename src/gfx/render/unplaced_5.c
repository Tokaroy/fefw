#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

bool OcclusionCulling_1938520(__int64, int32x2_t*);
bool gfx_render_1938080(float32x4_t* a1, float32x4_t* a2);

bool gfx_render_1938080(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float v7;
  float v8;
  float v9;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  __int64 v15;
  float32x4_t v16;
  float v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float v35;
  char v36;
  float v37;
  float32x4_t v38;
  float32x4_t v39;
  float v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  struct {
    int32x2_t v46;
    unsigned __int64 v47;
    __int64 v48;
  } v46_;

  {
    v4 = *a2;
    __asm__ volatile("" ::"w"(v4));
  }
  v5 = vsubq_f32(*a2, a1[2]);
  v6 = vmulq_f32(v5, v5);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  v7 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
           .n64_f32[0];
  {
    v8 = LANES128(a2[1]).n128_f32[0];
    __asm__ volatile("" ::"w"(v8));
  }
  v9 = v8 * v8;
  if (v7 <= (float)(v8 * v8)) {
    return true;
  }
  {
    v11 = a1[4];
    __asm__ volatile("" ::"w"(v11));
  }
  {
    v12 = a1[5];
    __asm__ volatile("" ::"w"(v12));
  }
  {
    v13 = a1[6];
    __asm__ volatile("" ::"w"(v13));
  }
  v14 = vmulq_n_f32(a1[3], LANES128(v4).n128_f32[0]);
  {
    v15 = LANES128(a1[1]).n128_i64[0];
    __asm__ volatile("" ::"r"(v15));
  }
  v16 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(v14, v11,
                         COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
          v12, v4, 2),
      v13);
  {
    v17 = v8 + LANES128(v16).n128_f32[2];
    __asm__ volatile("" ::"w"(v17));
  }
  if ((float)(v8 + LANES128(v16).n128_f32[2]) >=
      (float)-LANES128(a1[15]).n128_f32[0]) {
    v46_.v47 = 0;
    v46_.v48 = 0;
    v36 = 1;
    v35 = -0x1.0000000000000p+0f;
    LANES64(v46_.v46).n64_u64[0] = 0;
  }
  else {
    {
      v18 = a1[8];
      __asm__ volatile("" ::"w"(v18));
    }
    {
      v19 = a1[9];
      __asm__ volatile("" ::"w"(v19));
    }
    {
      v20 = a1[10];
      __asm__ volatile("" ::"w"(v20));
    }
    v21 = vmulq_f32(a1[7], COERCE_AS(float32x4_t, 0));
    HIDWORD(v46_.v48) = 0;
    v22 = LANES128_OF(vmulq_f32(v16, v16)).n128_f32[0] +
          (float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                 LANES128(v16).n128_f32[2]));
    v23 = vaddq_f32(
        vmlaq_n_f32(vmlaq_f32(v21, COERCE_AS(float32x4_t, 0), v18), v19, v17),
        v20);
    PSEUDO_LOW_LANE128(v21, n128_f32, sqrtf(v22));
    {
      v24 = a1[9];
      __asm__ volatile("" ::"w"(v24));
    }
    {
      v25 = a1[10];
      __asm__ volatile("" ::"w"(v25));
    }
    v26 = sqrtf(v22 - v9) / LANES128(v21).n128_f32[0];
    PSEUDO_LOW_LANE128(v21, n128_f32,
                       LANES128(a2[1]).n128_f32[0] / LANES128(v21).n128_f32[0]);
    v27 = v26 *
          (float)-(float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                                 LANES128(v21).n128_f32[0])) -
                          (float)(v26 * LANES128(v16).n128_f32[0]));
    v28 =
        v26 *
        (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] * v26)) +
                (float)(LANES128(v21).n128_f32[0] * LANES128(v16).n128_f32[0]));
    v29 = v26 * (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                               LANES128(v21).n128_f32[0])) +
                        (float)(v26 * LANES128(v16).n128_f32[0]));
    v30 =
        v26 *
        (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] * v26)) -
                (float)(LANES128(v21).n128_f32[0] * LANES128(v16).n128_f32[0]));
    {
      v31 = a1[7];
      __asm__ volatile("" ::"w"(v31));
    }
    {
      v32 = a1[8];
      __asm__ volatile("" ::"w"(v32));
    }
    v33 = vaddq_f32(v25, vmlaq_n_f32(vmlaq_f32(vmulq_n_f32(v31, v29),
                                               COERCE_AS(float32x4_t, 0), v32),
                                     v24, v30));
    v34 = vaddq_f32(v25, vmlaq_n_f32(vmlaq_f32(vmulq_n_f32(v31, v27),
                                               COERCE_AS(float32x4_t, 0), v32),
                                     v24, v28));
    LANES64(v46_.v46).n64_f32[0] =
        (float)(0x1.0000000000000p+0f / LANES128(v33).n128_f32[3]) *
        LANES128(v33).n128_f32[0];
    LANES64(v46_.v46).n64_f32[1] =
        (float)(0x1.0000000000000p+0f / LANES128(v34).n128_f32[3]) *
        LANES128(v34).n128_f32[0];
    PSEUDO_LOW_LANE128(
        v19, n128_f32,
        vmuls_lane_f32(LANES128(v16).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1) +
            (float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                   LANES128(v16).n128_f32[2])));
    v35 = vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v23).n128_f32[3], v23,
                         2);
    PSEUDO_LOW_LANE128(v18, n128_f32, sqrtf(LANES128(v19).n128_f32[0]));
    v36 = 0;
    LANES128(v33).n128_f32[0] =
        sqrtf(LANES128(v19).n128_f32[0] - v9) / LANES128(v18).n128_f32[0];
    {
      v37 = LANES128(a2[1]).n128_f32[0] / LANES128(v18).n128_f32[0];
      __asm__ volatile("" ::"w"(v37));
    }
    {
      v38 = a1[9];
      __asm__ volatile("" ::"w"(v38));
    }
    {
      v39 = a1[10];
      __asm__ volatile("" ::"w"(v39));
    }
    PSEUDO_LOW_LANE128(
        v19, n128_f32,
        LANES128(v33).n128_f32[0] *
            (float)-(float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                                   v37)) -
                            (float)(LANES128(v33).n128_f32[0] *
                                    LANES128(v16).n128_f32[1])));
    v40 = LANES128(v33).n128_f32[0] *
          (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                         LANES128(v33).n128_f32[0])) +
                  (float)(v37 * LANES128(v16).n128_f32[1]));
    PSEUDO_LOW_LANE128(
        v18, n128_f32,
        LANES128(v33).n128_f32[0] *
            (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] * v37)) +
                    (float)(LANES128(v33).n128_f32[0] *
                            LANES128(v16).n128_f32[1])));
    LANES128(v33).n128_f32[0] =
        LANES128(v33).n128_f32[0] *
        (float)((float)(PSEUDO_UNFUSED(LANES128(v16).n128_f32[2] *
                                       LANES128(v33).n128_f32[0])) -
                (float)(v37 * LANES128(v16).n128_f32[1]));
    {
      v41 = a1[8];
      __asm__ volatile("" ::"w"(v41));
    }
    v42 = vmulq_f32(a1[7], COERCE_AS(float32x4_t, 0));
    v43 = vaddq_f32(
        v39, vmlaq_n_f32(vmlaq_n_f32(v42, v41, LANES128(v19).n128_f32[0]), v38,
                         v40));
    v44 = vaddq_f32(
        v39, vmlaq_n_f32(vmlaq_n_f32(v42, v41, LANES128(v18).n128_f32[0]), v38,
                         LANES128(v33).n128_f32[0]));
    v46_.v47 =
        __PAIR64__(COERCE_UNSIGNED_INT(vmuls_lane_f32(
                       0x1.0000000000000p+0f / LANES128(v43).n128_f32[3],
                       COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1)),
                   COERCE_UNSIGNED_INT(vmuls_lane_f32(
                       0x1.0000000000000p+0f / LANES128(v44).n128_f32[3],
                       COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1)));
  }
  *(float*)&v46_.v48 = v35;
  BYTE4(v46_.v48) = v36;
  return !OcclusionCulling_1938520(v15, &v46_.v46);
}

#pragma GCC visibility pop
