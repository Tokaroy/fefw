#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float math_622450();

float math_622450()
{
  float32x4_t* v0;
  float32x4_t* v1;
  int8x16_t* v2;
  int32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  int32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  int8x16_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v4 =
      vsubq_f32(*v0, vaddq_f32(vsubq_f32(COERCE_AS(float32x4_t, 0), *v1), *v0));
  v5 = vnegq_f32(*v0);
  v6 = vmulq_f32(v4, v4);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  LANES128(v6).n128_u64[1] = LANES128(v6).n128_u64[0];
  v7 = vrsqrteq_f32(v6);
  v8 = vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v6, v7)));
  v9 = vbicq_s8(
      vmulq_f32(v4, vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v6, v8)))),
      vceqzq_f32(v6));
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(*v2, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(*v2, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v9, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v13 = vmlsq_f32(vmulq_f32(v8, v10), v12, v11);
  v14 = vmulq_f32(v13, v13);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrsqrteq_f32(v14);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
  v17 = vbicq_s8(
      vmulq_f32(v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
      vceqzq_f32(v14));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v6).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v19 = vmlsq_f32(vmulq_f32(v12, v18), v6, v10);
  v20 = vmulq_f32(v17, v5);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  v21 = vmulq_f32(v19, v5);
  v22 = vmulq_f32(v9, v5);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  v23 = vzip1q_s32(v17, v9);
  LANES128(v17).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u32[1];
  LANES128(v9).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u32[1];
  v24 = vzip1q_s32(v19, COERCE_AS(int32x4_t, 0));
  LANES128(v19).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u32[1];
  v25 = vzip2q_s32(v17, v9);
  v26 = vzip2q_s32(v19, COERCE_AS(int32x4_t, 0));
  v27 = vzip1q_s32(v25, v26);
  v28 = vzip2q_s32(v25, v26);
  *v3 = vzip1q_s32(v23, v24);
  v3[1] = vzip2q_s32(v23, v24);
  v3[2] = v27;
  v3[3] = v28;
  return LANES128(v28).n128_f32[0];
}

#pragma GCC visibility pop
