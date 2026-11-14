#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_OWORD* GameRoutine_59fb40(_OWORD* result, __int64);
__int64 Pane_58e3b0(__int64);
__n128 TextBox_59bde0(__int64, __int64, float, float, float, double, float,
                      float, double, float);
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a833d0;
extern __int128 GameData_1a83610;
float* GameRoutine_59fe80(float* result, float, float);
float Pane_58e030(__int64);
float cosf(float);
float sinf(float);
void GameHr_55c7c0(unsigned int*, __int64, _QWORD*, unsigned int, unsigned int,
                   unsigned int);
void nn_ui2d_596660(__int64 a1, __int64 a2, char a3, char a4, int a5, float* a6,
                    int a7, char a8, float a9, float a10, float a11, float a12);
void nn_ui2d_59bff0(__int64 a1, __int64 a2, char a3);

void nn_ui2d_596660(__int64 a1, __int64 a2, char a3, char a4, int a5, float* a6,
                    int a7, char a8, float a9, float a10, float a11, float a12)
{

#pragma clang fp contract(off)
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  struct {
    float v30;
    float v31;
  } v30_;

  v30_.v30 = a12;
  v30_.v31 = a10;
  if ((a3 & 1) != 0) {
    GameRoutine_59fe80(&v30_.v31, 0x0.0p+0f, 0x1.9000000000000p+6f);
    v21 = v30_.v31;
    *(_DWORD*)(a2 + 84) = a5;
    *(float*)(a2 + 128) = (float)(v21 / a9) + 0x1.4f8b580000000p-17f;
    GameRoutine_59fe80(&v30_.v30, 0x0.0p+0f, 0x1.9000000000000p+6f);
    v22 = a11 * 0x1.1df46a0000000p-6f;
    v23 = cosf(v22);
    *(float*)(a2 + 132) =
        (float)(v23 * (float)(v30_.v30 / *(float*)(a1 + 80))) +
        (float)(v23 * (float)(v30_.v30 / *(float*)(a1 + 80)));
    v24 = sinf(v22);
    *(float*)(a2 + 136) =
        (float)-(float)(v24 * (float)(v30_.v30 / *(float*)(a1 + 84))) -
        (float)(v24 * (float)(v30_.v30 / *(float*)(a1 + 84)));
    v25 = *a6 / 0x1.fe00000000000p+7f;
    *(_DWORD*)(a2 + 160) = 0;
    *(float*)(a2 + 144) = v25;
    v26 = a6[1];
    *(_DWORD*)(a2 + 164) = 0;
    *(float*)(a2 + 148) = v26 / 0x1.fe00000000000p+7f;
    v27 = a6[2];
    *(_DWORD*)(a2 + 168) = 0;
    *(float*)(a2 + 152) = v27 / 0x1.fe00000000000p+7f;
    v28 = a6[3];
    *(_DWORD*)(a2 + 172) = 0;
    *(float*)(a2 + 156) = v28 / 0x1.fe00000000000p+7f;
    *(_DWORD*)(a2 + 160 + 4LL * a7) = 1065353216;
    *(_DWORD*)(a2 + 140) = 0;
    if ((a8 & 1) != 0) {
      v29 = 0x1.0000000000000p+0f;
      if ((a4 & 1) != 0) {
        v29 = 0x1.0000000000000p+1f;
      }
      *(float*)(a2 + 140) = v29;
      LOBYTE(v29) = *(_BYTE*)(a1 + 90);
      *(float*)(a2 + 156) =
          *(float*)(a2 + 156) *
          (float)((float)LODWORD(v29) / 0x1.fe00000000000p+7f);
    }
  }
  else {
    *(_DWORD*)(a2 + 156) = 0;
  }
}

void nn_ui2d_59bff0(__int64 a1, __int64 a2, char a3)
{
  char v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float v10;
  float v11;
  double v12;
  __int16 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float v24;
  int v25;
  __int64 v26;
  long double v27;
  char v28;
  _QWORD* v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int128 v37;
  float v38;
  float v39;
  float v40;
  __int128 v41;
  __int64 v42;
  struct {
    _QWORD v43[4];
    __int128 v44;
    __int128 v45;
  } v43_;
  struct {
    __int64 v46;
    __int64 v47;
    __int64 v48;
    float v49;
  } v46_;
  _OWORD v50[3];
  struct {
    float32x4_t v51;
    float32x4_t v52;
    float32x4_t v53;
  } v51_;
  struct {
    _QWORD v54[3];
    float32x4_t* v55;
    _QWORD* v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v54_;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v54_.v61 = 0;
  v54_.v62 = 0;
  v54_.v65 = 0;
  v54_.v66 = 0;
  v54_.v56 = nullptr;
  v54_.v57 = 0;
  v54_.v55 = nullptr;
  memset(v54_.v54, 0, sizeof(v54_.v54));
  v51_.v53 = (__typeof__(v51_.v53)){0};
  v51_.v52 = (__typeof__(v51_.v52)){0};
  v54_.v63 = 0;
  v54_.v64 = 0x3F8000003F800000LL;
  v54_.v58 = 0;
  v54_.v59 = 0x3F8000003F800000LL;
  v54_.v60 = 0x3F8000003F800000LL;
  v6 = *(_BYTE*)(a1 + 98);
  LOBYTE(v54_.v61) = -1;
  BYTE4(v54_.v65) = -1;
  v51_.v51 = (__typeof__(v51_.v51)){0};
  HIDWORD(v54_.v63) = 1065353216;
  LODWORD(v54_.v65) = 1065353216;
  if ((v6 & 2) != 0) {
    GameRoutine_59fb40(&v51_.v51, a2),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v10 = *(float*)(a1 + 80) * -0x1.0000000000000p-1f;
    v11 = *(float*)(a1 + 84) * 0x1.0000000000000p-1f;
    if (*(_QWORD*)(a1 + 312) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v7 = *(_QWORD*)(a1 + 136);
    LANES128(v51_.v52).n128_u64[0] = *(_QWORD*)(a1 + 128);
    LANES128(v51_.v52).n128_u64[1] = v7;
    v8 = *(_QWORD*)(a1 + 152);
    LANES128(v51_.v53).n128_u64[0] = *(_QWORD*)(a1 + 144);
    LANES128(v51_.v53).n128_u64[1] = v8;
    v9 = *(_QWORD*)(a1 + 120);
    LANES128(v51_.v51).n128_u64[0] = *(_QWORD*)(a1 + 112);
    LANES128(v51_.v51).n128_u64[1] = v9;
    v10 = Pane_58e030(a1),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    if (*(_QWORD*)(a1 + 312) != 0) {
    LABEL_3:
      v13 = *(_WORD*)(a1 + 276);
      v14 = 0x0.0p+0f;
      v12 = 0x0.0p+0;
      goto LABEL_4;
    }
  }
  v30 = *(unsigned __int8*)(a1 + 278);
  if ((v30 & 3) == 2) {
    LODWORD(v12) = *(_DWORD*)(a1 + 80);
    v13 = *(_WORD*)(a1 + 276);
    v31 = (v30 >> 2) & 3;
    if ((v13 & 0x1000) != 0) {
      v31 = 0;
    }
    if (v31 != 2) {
      goto LABEL_15;
    }
  LABEL_24:
    v14 = *(float*)(a1 + 84);
    goto LABEL_4;
  }
  v12 = 0x0.0p+0;
  if ((v30 & 3) == 0) {
    *(float*)&v12 = *(float*)(a1 + 80) * 0x1.0000000000000p-1f;
  }
  v13 = *(_WORD*)(a1 + 276);
  v31 = (v30 >> 2) & 3;
  if ((v13 & 0x1000) != 0) {
    v31 = 0;
  }
  if (v31 == 2) {
    goto LABEL_24;
  }
LABEL_15:
  v14 = 0x0.0p+0f;
  if (v31 == 0) {
    v14 = *(float*)(a1 + 84) * 0x1.0000000000000p-1f;
  }
LABEL_4:
  v21 = v51_.v51;
  v22 = v51_.v52;
  v23 = v51_.v53;
  v15 = v11 - v14;
  v16 = v10 + *(float*)&v12;
  v46_.v49 = 0x0.0p+0f;
  v46_.v47 = 0;
  v46_.v48 = 0;
  v46_.v46 = 0;
  v17 = vmuls_lane_f32(
            v15, COERCE_AS(float32x2_t, LANES128(v51_.v51).n128_u64[0]), 1) +
        (float)(LANES128(v51_.v51).n128_f32[0] * v16);
  v18 = vmuls_lane_f32(
            v15, COERCE_AS(float32x2_t, LANES128(v51_.v52).n128_u64[0]), 1) +
        (float)(LANES128(v51_.v52).n128_f32[0] * v16);
  v19 = vmuls_lane_f32(
            v15, COERCE_AS(float32x2_t, LANES128(v51_.v53).n128_u64[0]), 1) +
        (float)(LANES128(v51_.v53).n128_f32[0] * v16);
  LANES128(v21).n128_u32[1] = LANES128_OF(vnegq_f32(v51_.v51)).n128_u32[1];
  LANES128(v22).n128_u32[1] = LANES128_OF(vnegq_f32(v51_.v52)).n128_u32[1];
  LANES128(v23).n128_u32[1] = LANES128_OF(vnegq_f32(v51_.v53)).n128_u32[1];
  v20 = LANES128(v51_.v51).n128_f32[3] + v17;
  *(float*)&v12 = LANES128(v51_.v52).n128_f32[3] + v18;
  LANES128(v21).n128_f32[3] = v20;
  LANES128(v22).n128_f32[3] = LANES128(v51_.v52).n128_f32[3] + v18;
  LANES128(v23).n128_f32[3] = LANES128(v51_.v53).n128_f32[3] + v19;
  v24 = 0x0.0p+0f;
  v50[0] = GameData_1a82dd0;
  v50[1] = GameData_1a83610;
  v50[2] = GameData_1a83090;
  v51_.v51 = v21;
  v51_.v52 = v22;
  v51_.v53 = v23;
  v54_.v55 = &v51_.v51;
  v54_.v56 = v50;
  if ((v13 & 8) != 0) {
    v25 = *(_DWORD*)(a1 + 304);
    v20 = *(float*)(a1 + 248);
    v24 = *(float*)(a1 + 308) * v20;
    LODWORD(v46_.v46) = *(_DWORD*)(a1 + 300);
    HIDWORD(v46_.v46) = v25;
    v26 = *(_QWORD*)(a1 + 292);
    v46_.v47 = *(_QWORD*)(a1 + 284);
    v46_.v48 = v26;
    v46_.v49 = v24;
    v54_.v54[0] = &v46_.v46;
  }
  *(__n128*)&v27 =
      TextBox_59bde0(a1, (__int64)v54_.v54, v24, v20, LANES128(v21).n128_f32[0],
                     v12, 0x1.0000000000000p+0f, LANES128(v22).n128_f32[0],
                     LANES128(v23).n128_f64[0], 0x0.0p+0f),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v28 = *(_BYTE*)(a1 + 98);
  v43_.v45 = (__typeof__(v43_.v45)){0};
  v43_.v44 = (__typeof__(v43_.v44)){0};
  memset(v43_.v43, 0, sizeof(v43_.v43));
  if ((v28 & 2) != 0) {
    v32 = *(_QWORD*)a1;
    v42 = 0;
    (*(void (**)(__int64, __int64*, long double))(v32 + 96))(a1, &v42, v27),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v33 = *(float*)&v42 +
          (float)(PSEUDO_UNFUSED(*(float*)&v42 * -0x1.0000000000000p-1f));
    v34 = (float)(PSEUDO_UNFUSED(*((float*)&v42 + 1) * 0x1.0000000000000p-1f)) -
          *((float*)&v42 + 1);
    v35 = v33 - (float)(PSEUDO_UNFUSED(*(float*)&v42 * -0x1.0000000000000p-1f));
    v36 = (float)(PSEUDO_UNFUSED(*(float*)&v42 * -0x1.0000000000000p-1f)) + v33;
    LODWORD(v37) = 0;
    DWORD2(v37) = 0;
    v38 = 0x1.0000000000000p+0f / v35;
    v39 = 0x1.0000000000000p+0f /
          (float)(v34 - (float)(PSEUDO_UNFUSED(*((float*)&v42 + 1) *
                                               0x1.0000000000000p-1f)));
    v40 = -(float)(v36 * v38);
    DWORD1(v41) = 0;
    DWORD2(v41) = 0;
    *(float*)&v41 = v38 + v38;
    *((float*)&v41 + 3) = v40;
    *((float*)&v37 + 1) = v39 + v39;
    *((float*)&v37 + 3) =
        -(float)((float)((float)(PSEUDO_UNFUSED(*((float*)&v42 + 1) *
                                                0x1.0000000000000p-1f)) +
                         v34) *
                 v39);
    *(_OWORD*)v43_.v43 = v41;
    *(_OWORD*)&v43_.v43[2] = v37;
    v43_.v44 = GameData_1a833d0;
    v43_.v45 = GameData_1a82dc0;
    if ((Pane_58e3b0(a1) & 1) != 0) {
      LOBYTE(v54_.v61) = -1;
    }
    v13 = *(_WORD*)(a1 + 276);
    v29 = v43_.v43;
  }
  else {
    v29 = (_QWORD*)(a2 + 16);
  }
  GameHr_55c7c0(*(unsigned int**)(a1 + 328), (__int64)v29, v54_.v54,
                (v13 & 0x800) != 0, (v13 & 0x1000) != 0, a3 & 1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
}

#pragma GCC visibility pop
