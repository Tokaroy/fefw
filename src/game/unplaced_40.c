#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21a3a10;
float game_5bbed0();
float game_5bfea0();

float game_5bbed0()
{

#pragma clang fp contract(off)
  float32x4_t* v0;
  float v1;
  int v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned __int64 v6;
  float32x4_t v7;
  unsigned int v8;
  float v9;
  __int128 v10;
  float v11;
  __int128 v12;
  unsigned __int64 v13;
  _BYTE* v14;
  float v15;
  float v16;
  float v17;
  _BYTE* v18;
  float v19;
  unsigned __int64 v20;
  float v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  float v27;
  float v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(float, "s0", "=w")),
  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = (float32x4_t*)LANES128(v0[7]).n128_u64[1];
  v4 = v0[66];
  v5 = v3[16];
  v6 = LANES128(v0[108]).n128_u64[LANES128(v0[3]).n128_u32[0]];
  *(float*)&v10 =
      (float)(LANES128(v0[98]).n128_f32[1] * LANES128(v4).n128_f32[0]) *
      LANES128(v5).n128_f32[0];
  DWORD1(v10) = vmuls_lane_f32(
      vmuls_lane_f32(LANES128(v0[98]).n128_f32[2],
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
      COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]), 1);
  v7 = v0[67];
  DWORD2(v10) = vmuls_lane_f32(
      vmuls_lane_f32(LANES128(v0[98]).n128_f32[3], v4, 2), v5, 2);
  *(float*)&v8 = vmuls_lane_f32(
      vmuls_lane_f32(LANES128(v0[99]).n128_f32[2], v7, 2), v5, 2);
  v9 = vmuls_lane_f32(LANES128(v0[101]).n128_f32[1], v4, 3);
  *((float*)&v10 + 3) = v9;
  *(float*)&v12 =
      (float)(LANES128(v0[99]).n128_f32[0] * LANES128(v7).n128_f32[0]) *
      LANES128(v5).n128_f32[0];
  DWORD1(v12) = vmuls_lane_f32(
      vmuls_lane_f32(LANES128(v0[99]).n128_f32[1],
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]), 1),
      COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]), 1);
  v11 = vmuls_lane_f32(LANES128(v0[102]).n128_f32[0], v7, 3);
  *((_QWORD*)&v12 + 1) = __PAIR64__(LODWORD(v11), v8);
  if (LANES128(*(v0)).n128_u8[0] != 0) {
    v13 = LANES128(v0[84]).n128_u64[1];
    v14 = *(_BYTE**)(LANES128(v0[35]).n128_u64[1] + 16);
    if (v14[2014] != 0 && v14[2018] != 0) {
      *((float*)&v10 + 3) = v9 * *(float*)(v13 + 1620);
    }
    if (v14[2015] != 0 && v14[2019] != 0) {
      *((float*)&v12 + 3) = v11 * *(float*)(v13 + 1632);
    }
  }
  *(_OWORD*)v6 = v10;
  *(_OWORD*)(v6 + 16) = v12;
  v15 = 0x1.0000000000000p+0f;
  v17 = LANES128(v0[7]).n128_f32[0];
  v16 = LANES128(v0[7]).n128_f32[1];
  v18 = *(_BYTE**)(LANES128(v0[35]).n128_u64[1] + 16);
  if (v18[1883] != 0) {
    v15 = LANES128(v0[7]).n128_f32[1];
  }
  if (v18[1877] != 0) {
    v15 = v15 * v17;
  }
  v19 = LANES128(v3[16]).n128_f32[3] * v15;
  if (v18[2014] != 0 && v18[2018] != 0 || v18[2015] != 0 && v18[2019] != 0) {
    v20 = LANES128(v0[84]).n128_u64[1];
    v21 = 0x1.0000000000000p+0f;
    v22 = *(_QWORD*)(*(_QWORD*)(v20 + 568) + 16LL);
    if (*(_BYTE*)(v22 + 1883) != 0) {
      v21 = *(float*)(v20 + 116);
    }
    if (*(_BYTE*)(v22 + 1877) != 0) {
      v21 = v21 * *(float*)(v20 + 112);
    }
    v19 = v19 * v21;
  }
  v23 = (unsigned __int8)v18[1884];
  v24 = (unsigned __int8)v18[1878];
  v25 = 17;
  if (*(_BYTE*)(*(_QWORD*)(LANES128(v0[7]).n128_u64[1] + 32) + 5888LL) != 0) {
    v25 = 18;
  }
  *(_DWORD*)(v6 + 32) = LANES128(*(v0)).n128_u32[v25];
  v26 = LANES128(v0[2]).n128_i32[2];
  *(float*)(v6 + 44) = v1;
  *(float*)(v6 + 36) = (float)v26;
  *(_DWORD*)(v6 + 40) = v2;
  if (v1 == 0x0.0p+0f) {
    v27 = LANES128(v0[4]).n128_f32[1];
    if (v27 > 0x0.0p+0f) {
      if ((*(_BYTE*)(*(_QWORD*)(LANES128(v0[7]).n128_u64[1] + 32) + 5888LL) &
           1) == 0) {
        *(float*)(v6 + 32) = v27 - LANES128(v0[4]).n128_f32[3];
      }
      *(_DWORD*)(v6 + 44) = LANES128(v0[4]).n128_u32[3];
    }
  }
  v28 = 0x1.0000000000000p+0f;
  *(float*)(v6 + 48) = v19;
  if (v23 != 0) {
    v28 = v16;
  }
  if (v24 != 0) {
    v28 = v17 * v28;
  }
  *(float*)(v6 + 52) = v28 * LANES128(v3[20]).n128_f32[0];
  *(float*)(v6 + 56) = v28 * LANES128(v3[20]).n128_f32[1];
  *(float*)(v6 + 60) = v28 * LANES128(v3[20]).n128_f32[2];
  LANES128(v29).n128_u64[0] = LANES128(v0[52]).n128_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v0[52]).n128_u32[2];
  LANES128(v30).n128_u64[0] = LANES128(v0[53]).n128_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v0[53]).n128_u32[2];
  LANES128(v31).n128_u64[0] = LANES128(v0[54]).n128_u64[0];
  LANES128(v31).n128_u64[1] = LANES128(v0[54]).n128_u32[2];
  LANES128(v32).n128_u64[0] = LANES128(v0[55]).n128_u64[0];
  LANES128(v32).n128_u64[1] =
      LANES128(v0[55]).n128_u32[2] | 0x3F80000000000000LL;
  v33 = vzip1q_s32(v29, v31);
  v34 = vzip2q_s32(v29, v31);
  v35 = vzip1q_s32(v30, v32);
  v36 = vzip2q_s32(v30, v32);
  *(int32x4_t*)(v6 + 64) = vzip1q_s32(v33, v35);
  *(int32x4_t*)(v6 + 80) = vzip2q_s32(v33, v35);
  *(int32x4_t*)(v6 + 96) = vzip1q_s32(v34, v36);
  *(int32x4_t*)(v6 + 112) = vzip2q_s32(v34, v36);
  LANES128(v34).n128_u64[0] = LANES128(v0[56]).n128_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v0[56]).n128_u32[2];
  LANES128(v36).n128_u64[0] = LANES128(v0[57]).n128_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v0[57]).n128_u32[2];
  LANES128(v35).n128_u64[0] = LANES128(v0[58]).n128_u64[0];
  LANES128(v35).n128_u64[1] = LANES128(v0[58]).n128_u32[2];
  LANES128(v32).n128_u64[0] = LANES128(v0[59]).n128_u64[0];
  LANES128(v32).n128_u64[1] =
      LANES128(v0[59]).n128_u32[2] | 0x3F80000000000000LL;
  v37 = vzip1q_s32(v34, v35);
  v38 = vzip2q_s32(v34, v35);
  v39 = vzip1q_s32(v36, v32);
  v40 = vzip2q_s32(v36, v32);
  v41 = vzip1q_s32(v37, v39);
  v42 = vzip2q_s32(v37, v39);
  v43 = vzip1q_s32(v38, v40);
  v44 = vzip2q_s32(v38, v40);
  *(int32x4_t*)(v6 + 128) = v41;
  *(int32x4_t*)(v6 + 144) = v42;
  *(int32x4_t*)(v6 + 160) = v43;
  *(int32x4_t*)(v6 + 176) = v44;
  return LANES128(v44).n128_f32[0];
}

float game_5bfea0()
{

#pragma clang fp contract(off)
  float32x4_t* v0;
  float32x4_t* v1;
  __int64 v2;
  int v3;
  __int64 v4;
  float32x4_t v5;
  __int64 v6;
  __int64 v7;
  float32x4_t* v8;
  float32x4_t* v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  __int16 v13;
  __int64 v14;
  float32x4_t v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float32x4_t v20;
  __int64 v21;
  float32x4_t v22;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v6 = *(_QWORD*)(v2 + 568);
  v7 = v4;
  v8 = v1;
  v9 = v0;
  v10 = *(_QWORD*)(v6 + 128);
  if (v10 != 0) {
    v11 = *(_DWORD*)(*(_QWORD*)(v6 + 16) + 2164LL);
    if (v11 == 2) {
      v16 = *(_DWORD*)(v2 + 56);
      v17 = v2;
      v3 = v16 % (**(int (***)(__int64))v10)(v10),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      ++*(_DWORD*)(v17 + 56);
    }
    else if (v11 == 1) {
      v12 = *(_DWORD*)(v2 + 172);
      *(_DWORD*)(v2 + 172) = 1103515245 * v12 + 12345;
      v3 = (int)(float)(vcvts_n_f32_u32(v12, 0x20u) *
                        (float)(**(int (***)(__int64))v10)(v10)),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    }
    LANES128(v5).n128_u64[0] = *(_QWORD*)(v7 + 144);
    LANES128(v5).n128_u32[2] = *(_DWORD*)(v7 + 152);
    if (v3 <= (signed __int32)*(_DWORD*)(v10 + 16)) {
      v19 = *(_QWORD*)(v10 + 88) + 16LL * v3;
      LANES128(v20).n128_u64[0] = *(_QWORD*)v19;
      LANES128(v20).n128_u64[1] = *(unsigned int*)(v19 + 8);
      *v9 = vmulq_f32(v5, v20);
      v18 = *(_QWORD*)(v10 + 96);
      if (v18 != 0) {
        goto LABEL_9;
      }
    }
    else {
      *v9 = vmulq_f32(v5, *v9);
      v18 = *(_QWORD*)(v10 + 96);
      if (v18 != 0) {
      LABEL_9:
        if (v3 > (signed __int32)*(_DWORD*)(v10 + 16)) {
          v15 = *v8;
          goto LABEL_15;
        }
        v21 = v18 + 16LL * v3;
        LANES128(v15).n128_u64[0] = *(_QWORD*)v21;
        LANES128(v15).n128_u64[1] = *(unsigned int*)(v21 + 8);
      LABEL_14:
        *v8 = v15;
        goto LABEL_15;
      }
    }
    v15 = (__typeof__(v15)){0};
    goto LABEL_14;
  }
  LANES128(*(v0)).n128_u64[0] = 0;
  LANES128(*(v0)).n128_u64[1] = 0;
  v13 = *(_WORD*)(v2 + 170);
  v14 = GameData_21a3a10;
  *(_WORD*)(v2 + 170) = v13 + 1;
  v15 = *(float32x4_t*)(v14 + 16LL * (v13 & 0x1FF));
LABEL_15:
  v22 = vmulq_n_f32(v15, *(float*)(v7 + 108));
  *v8 = v22;
  return LANES128(v22).n128_f32[0];
}

#pragma GCC visibility pop
