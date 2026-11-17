#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 SdkData_bb1200;
extern __int128 SdkData_bb3810;
extern __int128 SdkData_bb4340;
extern __int128 SdkData_bb4a70;
extern __int64 SdkData_e86e38;
float nn_nlibsdk_151fd0();

float nn_nlibsdk_151fd0()
{

#pragma clang fp contract(off)
  int8x16_t* v0;
  uint8x16_t v1;
  int8x16_t v2;
  int8x16_t v3;
  int8x16_t v4;
  int8x16_t v5;
  int8x16_t v6;
  unsigned int v7;
  int8x16_t v8;
  __int64 v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  unsigned __int64 v13;
  unsigned int v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  __int64 v18;
  int8x16_t v19;
  int8x16_t v20;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v5", "=w"));
  v7 = (unsigned int)__clz((unsigned long long)(__rbit64(
           LANES64_OF(vshrn_n_s16(veorq_s8(v4, v3), 4u)).n64_u64[0]))) >>
       2;
  LANES128(v8).n128_u64[0] = LANES64_OF(vdup_n_s8(1 << v7)).n64_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vdup_n_s8((unsigned int)(1 << v7) >> 8);
  v9 = SdkData_e86e38;
  if (vmaxvq_u32(vbicq_s8(
          v4, vceqzq_s8(vandq_s8(v8, COERCE_AS(int8x16_t, SdkData_bb4a70))))) !=
      0) {
    v10 = vandq_s8(*(int8x16_t*)(SdkData_e86e38 - v7 + 16), v5);
    if (vmaxvq_u32(v10) == 0) {
      v18 = -1;
      LANES128(v17).n128_u64[1] = -1;
      LANES128(*(v0)).n128_u8[4] = 1;
      v0[2] = v17;
      LANES128(v17).n128_u64[0] = LANES64_OF(vshrn_n_s16(v0[4], 4u)).n64_u64[0];
      LANES128(*(v0)).n128_u32[0] =
          ~((unsigned int)__clz(
                (unsigned long long)(LANES128(v17).n128_u64[0])) >>
            2);
      return LANES128(v17).n128_f32[0];
    }
    v7 = 15 - ((unsigned int)__clz(
                   (unsigned long long)(LANES64_OF(vshrn_n_s16(v10, 4u))
                                            .n64_u64[0])) >>
               2);
  }
  LANES128(v11).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
  LANES128(v11).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
  v12 = vtstq_s8(
      vandq_s8(
          vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb3810), vandq_s8(v2, v11)),
          vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb1200), vshrq_n_u8(v2, 4u))),
      vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb4340), vshrq_n_u8(v1, 4u)));
  if (vmaxvq_u32(v12) != 0 &&
      (v13 = __clz((unsigned long long)(__rbit64(
           LANES64_OF(vshrn_n_s16(v12, 4u)).n64_u64[0]))),
       v14 = (unsigned int)v13 >> 2,
       (int)v7 >= (int)((unsigned int)v13 >> 2))) {
    LANES128(*(v0)).n128_u32[0] = v14 - 1;
    if (v13 > 3) {
      v19 = *(int8x16_t*)(v9 - (v14 - 1) + 16);
      v20 = vornq_s8(v3, v19);
      v17 = vandq_s8(v19, v6);
      v0[2] = v20;
      v0[3] = v17;
    }
    else {
      LANES128(v17).n128_u64[0] = -1;
      LANES128(v17).n128_u64[1] = -1;
      LANES128(*(v0)).n128_u8[4] = 1;
      v0[2] = v17;
    }
  }
  else {
    v15 = *(int8x16_t*)(SdkData_e86e38 + 16 - v7);
    LANES128(*(v0)).n128_u32[0] = v7;
    v16 = vandq_s8(v15, v6);
    v17 = vornq_s8(v3, v15);
    v0[2] = v17;
    v0[3] = v16;
  }
  return LANES128(v17).n128_f32[0];
}

#pragma GCC visibility pop
