#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 game_10be5c0(__int64 result);
bool game_10bfbf0(__int64 a1);

bool game_10bfbf0(__int64 a1)
{

#pragma clang fp contract(off)
  int32x4_t v2;
  int v3;
  float32x4_t v4;
  unsigned int v5;
  float32x4_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  struct {
    _BYTE v27[80];
    char v28;
  } v27_;
  float32x4_t v29;
  float32x4_t v30;

  if (*(_QWORD*)(a1 + 96) == 0) {
    return false;
  }
  game_10be5c0(a1);
  v2 = vdupq_n_s32(0x3E4CCCCDu);
  if (*(_BYTE*)(a1 + 114) != 0) {
    v3 = 2;
  }
  else {
    v3 = 1;
  }
  v4 = *(float32x4_t*)(a1 + 32);
  if (!(*(float*)(*(_QWORD*)(a1 + 96) + 60LL) <= 0x1.99999a0000000p-3f)) {
    v5 = 3;
  }
  else {
    v5 = v3;
  }
  v6 = vsubq_f32(*(float32x4_t*)(a1 + 48), v4);
  v7 = vmulq_f32(v6, v6);
  LANES128(v7).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v8 = vrsqrteq_f32(v7);
  v9 = vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v7, v8)));
  v10 = vsubq_f32(
      v4,
      vbicq_s8(
          vmulq_f32(
              vmulq_f32(v6, vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v7, v9)))),
              v2),
          vceqzq_f32(v7)));
  v26 = v10;
  if ((v5 & 1) != 0) {
    LANES128(v12).n128_u32[1] = 0;
    v13 = vsubq_f32(v10, *(float32x4_t*)(a1 + 128));
    LANES128(v12).n128_f32[0] = -LANES128(v13).n128_f32[2];
    LANES128(v12).n128_u64[1] = LANES128(v13).n128_u32[0];
    LANES128(v13).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v13).n128_u32[0])),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v12).n128_u32[0]))))
            .n64_u64[0];
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    v14 = vrsqrteq_f32(v13);
    v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
    LANES128(v16).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v16).n128_u64[1] = 0x3F0000003F000000LL;
    v17 = vmulq_f32(
        vmulq_f32(v12, vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)))),
        v16);
    LANES128(v12).n128_u32[0] = *(_OWORD*)(a1 + 128);
    v18 = vbicq_s8(v17, vceqzq_f32(v13));
    LANES128(v12).n128_f32[1] =
        COERCE_FLOAT(DWORDn(*(_QWORD*)(a1 + 128),
                            sizeof(*(_QWORD*)(a1 + 128)) / 4 - 1)) +
        -0x1.99999a0000000p-4f;
    LANES128(v12).n128_u64[1] = (unsigned int)*(_QWORD*)(a1 + 136);
    v29 = vsubq_f32(v12, v18);
    v30 = vaddq_f32(v12, v18);
    collision_670c60((void*)((__int64)v27_.v27), &v26, &v30, 0x100000001LL);
    if ((v27_.v28 & 1) != 0) {
      return false;
    }
    collision_670c60((void*)((__int64)v27_.v27), &v26, &v29, 0x100000001LL);
    if ((v27_.v28 & 1) != 0) {
      return false;
    }
    collision_670c60((void*)((__int64)v27_.v27), &v30, &v26, 0x100000001LL);
    if (v27_.v28 == 1) {
      return false;
    }
    collision_670c60((void*)((__int64)v27_.v27), &v29, &v26, 0x100000001LL);
    if ((v27_.v28 & 1) != 0) {
      return false;
    }
  }
  if (!(v5 >= 2)) {
    return true;
  }
  LANES128(v19).n128_u32[1] = 0;
  v20 = vsubq_f32(v26, *(float32x4_t*)(a1 + 144));
  LANES128(v19).n128_f32[0] = -LANES128(v20).n128_f32[2];
  LANES128(v19).n128_u64[1] = LANES128(v20).n128_u32[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u32[0])),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u32[0]))))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
  v21 = vrsqrteq_f32(v20);
  v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
  LANES128(v23).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v23).n128_u64[1] = 0x3F0000003F000000LL;
  v24 = vmulq_f32(
      vmulq_f32(v19, vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v20, v22)))),
      v23);
  LANES128(v19).n128_u32[0] = *(_OWORD*)(a1 + 144);
  v25 = vbicq_s8(v24, vceqzq_f32(v20));
  LANES128(v19).n128_f32[1] =
      COERCE_FLOAT(
          DWORDn(*(_QWORD*)(a1 + 144), sizeof(*(_QWORD*)(a1 + 144)) / 4 - 1)) +
      -0x1.99999a0000000p-4f;
  LANES128(v19).n128_u64[1] = (unsigned int)*(_QWORD*)(a1 + 152);
  v29 = vsubq_f32(v19, v25);
  v30 = vaddq_f32(v19, v25);
  collision_670c60((void*)((__int64)v27_.v27), &v26, &v30, 0x100000001LL);
  if ((v27_.v28 & 1) != 0) {
    return false;
  }
  collision_670c60((void*)((__int64)v27_.v27), &v26, &v29, 0x100000001LL);
  if ((v27_.v28 & 1) != 0) {
    return false;
  }
  collision_670c60((void*)((__int64)v27_.v27), &v30, &v26, 0x100000001LL);
  if (v27_.v28 == 1) {
    return false;
  }
  collision_670c60((void*)((__int64)v27_.v27), &v29, &v26, 0x100000001LL);
  return (v27_.v28 & 1) == 0;
}

#pragma GCC visibility pop
