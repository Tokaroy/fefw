#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_g3d_5f8490(_OWORD*, float*);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
double nn_g3d_5f5260();

double nn_g3d_5f5260()
{
  __int64 v0;
  __int64 v1;
  float* v2;
  float32x4_t v3;
  float v4;
  unsigned __int64 v5;
  float32x4_t* v6;
  float32x2_t* v7;
  float32x2_t* v8;
  float v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  double result;
  int8x16_t v22;
  float32x4_t v23;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = v2[3];
  v5 = *(unsigned int*)(v1 + 12);
  v6 = (float32x4_t*)v0;
  v7 = (float32x2_t*)v2;
  v8 = (float32x2_t*)v1;
  LANES128(v3).n128_f32[0] = 0x1.0000000000000p+0f / v2[1];
  v9 = 0x1.0000000000000p+0f / v2[2];
  v23 = (__typeof__(v23)){0};
  LANES128(v3).n128_f32[1] = v9;
  LANES128(v3).n128_f32[2] = 0x1.0000000000000p+0f / v4;
  LANES128(v10).n128_u64[0] = *(_QWORD*)(v1 + 4);
  LANES128(v10).n128_u64[1] = v5;
  v11 = vmulq_f32(v3, v10);
  *(_QWORD*)(v0 + 4) = LANES128(v11).n128_u64[0];
  *(_DWORD*)(v0 + 12) = LANES128(v11).n128_u32[2];
  v22 = *(int8x16_t*)(v1 + 32);
  nn_g3d_5f8490(&v23, v2),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v12 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a829d0));
  v13 = vmulq_f32(v23, v23);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  v14 = vrecpeq_f32(v13);
  v15 = vmulq_f32(v14, vrecpsq_f32(v14, v13));
  v16 = vbslq_s8(vceqzq_f32(v13), v12,
                 vmulq_f32(v12, vmulq_f32(v15, vrecpsq_f32(v15, v13))));
  LANES128(v17).n128_u64[0] = LANES128(v16).n128_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u64[0];
  *(int32x2_t*)&LANES128(v19).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v20 = vmlaq_f32(vmulq_f32(v22, v15), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v17, v12));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v6[2] = vmlsq_f32(vmlaq_f32(v20, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v17, v19)),
                    v16, v18);
  LANES128(*(v6)).n128_u32[0] =
      LANES64(*(v8)).n64_u32[0] & 0xFFCFFFFF | 0x100000;
  LANES128(v12).n128_u64[0] = LANES64(v8[3]).n64_u32[0];
  result = LANES64_OF(vsub_f32(v8[2], v7[2])).n64_f64[0];
  LANES128(v19).n128_u64[0] = LANES64(v7[3]).n64_u32[0];
  LANES128(v6[1]).n128_f64[0] = result;
  LANES128(v6[1]).n128_u32[2] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u32[0];
  return result;
}

#pragma GCC visibility pop
