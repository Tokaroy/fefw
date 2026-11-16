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
_OWORD* Pane_5939e0(__int64, __int64, int, float*, __int64, float*, float*,
                    float*);
__int64 DynamicRenderingTexture_576260(char*, __int64, _DWORD*, _DWORD*, int,
                                       __int64);
__int64 LayoutEx_58d5b0(__int64, int);
__int64 LayoutEx_593440(__int64*, __int64, int, float*);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1b13cdc;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
float GameRoutine_1a09fb0(float);
float GameRoutine_1a09fc0(float);
float Pane_592dd0(__int64*, float*);
unsigned __int64 LayoutEx_593fa0(unsigned __int64 result, __int64,
                                 unsigned int);
__int64 nn_ui2d_593c30(__int64* a1, __int64 a2, unsigned int a3);
__int64 nn_ui2d_5953b0(__int64 result, float32x4_t* a2);

__int64 nn_ui2d_593c30(__int64* a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __n128 v18;
  __int64 v19;
  char v20;
  float v21;
  float v22;
  int v23;
  int* v24;
  __int64 v25;
  __int64 v26;
  _OWORD* v27;
  __int128 v28;
  float v29;
  float v30;
  float v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int128 v44;
  __int128 v45;
  struct {
    float v46;
    float v47;
  } v46_;
  float v48[2];
  struct {
    float v49;
    float v50;
  } v49_;
  struct {
    float v51;
    float v52;
  } v51_;
  __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
    unsigned __int64 v57;
  } v54_;
  struct {
    __int128 v58;
    __int128 v59;
    __int128 v60;
  } v58_;
  float v61[8];

  v54_.v56 = 0;
  v54_.v57 = 0;
  v54_.v54 = 0;
  v54_.v55 = 0;
  LayoutEx_593fa0((unsigned __int64)a1, a2, a3);
  v6 = a1[11];
  switch (a3) {
  case 2u:
    v15 = *(_DWORD*)(v6 + 100);
    v14 = *(_DWORD*)(v6 + 104);
    v16 = *(_QWORD*)(v6 + 84);
    v54_.v55 = *(_QWORD*)(v6 + 76);
    v54_.v56 = v16;
    v54_.v57 = __PAIR64__(v14, v15);
    v13 = *(_DWORD*)(v6 + 96);
    LODWORD(v54_.v54) = *(_DWORD*)(v6 + 92);
    goto LABEL_8;
  case 1u:
    v11 = *(_DWORD*)(v6 + 68);
    v10 = *(_DWORD*)(v6 + 72);
    v12 = *(_QWORD*)(v6 + 60);
    v54_.v55 = *(_QWORD*)(v6 + 52);
    v54_.v56 = v12;
    v54_.v57 = __PAIR64__(v10, v11);
    goto LABEL_6;
  case 0u:
    v7 = *(_DWORD*)(v6 + 32);
    v8 = *(_QWORD*)(v6 + 36);
    v9 = *(_QWORD*)(v6 + 44);
    LODWORD(v54_.v57) = 1120403456;
    v54_.v55 = v8;
    v54_.v56 = v9;
    DWORDn(v54_.v57, sizeof(v54_.v57) / 4 - 1) = v7;
  LABEL_6:
    LODWORD(v54_.v54) = 0;
    v13 = 0;
  LABEL_8:
    DWORDn(v54_.v54, sizeof(v54_.v54) / 4 - 1) = v13;
    break;
  default:
    break;
  }
  v17 = *a1;
  v53 = 0;
  v18 = ((__n128 (*)(__int64, __int64*)) *
         (_QWORD*)(*(_QWORD*)v17 + 96LL))(v17, &v53);
  v19 = a1[11];
  v20 = *((_BYTE*)a1 + 552);
  PSEUDO_LOW_LANE128(v18, n128_u8, *(_BYTE*)(v19 + 12));
  v21 = *(float*)&v53 +
        (float)((float)LANES128(v18).n128_u32[0] * 0x1.0000000000000p+1f);
  v22 = *((float*)&v53 + 1) +
        (float)((float)LANES128(v18).n128_u32[0] * 0x1.0000000000000p+1f);
  v51_.v51 = v21;
  v51_.v52 = v22;
  if ((v20 & 4) == 0 && (*(_BYTE*)(v19 + 8) & 0x20) != 0 && (a1[19] & 1) != 0) {
    v23 = 0;
  }
  else {
    v24 = (int*)a1 + a3;
    v25 = v24[39];
    v26 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    v49_.v49 = v21 * -0x1.0000000000000p-1f;
    v49_.v50 = v22 * 0x1.0000000000000p-1f;
    v48[0] = v21 / *(float*)&v53;
    v48[1] = v22 / *((float*)&v53 + 1);
    v27 = (_OWORD*)(v26 + v25);
    v46_.v46 = (float)((float)(v21 / *(float*)&v53) + -0x1.0000000000000p+0f) *
               0x1.0000000000000p-1f;
    v46_.v47 =
        (float)((float)(v22 / *((float*)&v53 + 1)) + -0x1.0000000000000p+0f) *
        0x1.0000000000000p-1f;
    v61[0] = 0x0.0p+0f - v46_.v46;
    v61[1] = 0x0.0p+0f - v46_.v47;
    v61[2] = v46_.v46 + 0x1.0000000000000p+0f;
    v61[3] = 0x0.0p+0f - v46_.v47;
    v61[4] = 0x0.0p+0f - v46_.v46;
    v61[5] = v46_.v47 + 0x1.0000000000000p+0f;
    v61[6] = v46_.v46 + 0x1.0000000000000p+0f;
    v61[7] = v46_.v47 + 0x1.0000000000000p+0f;
    DynamicRenderingTexture_576260((char*)a2, v26 + v25, &v49_.v49, &v51_.v51,
                                   1, (__int64)v61);
    v58_.v60 = (__typeof__(v58_.v60)){0};
    v58_.v59 = (__typeof__(v58_.v59)){0};
    v58_.v58 = (__typeof__(v58_.v58)){0};
    {
      __typeof__(v28) z_ = (__typeof__(v28)){0};
      LODWORD(z_) = 0;
      v28 = z_;
    }
    DWORD2(v28) = 0;
    v29 = 0x1.0000000000000p+0f /
          (float)((float)(v49_.v49 + v51_.v51) - v49_.v49);
    v30 = 0x1.0000000000000p+0f /
          (float)((float)(v49_.v50 - v51_.v52) - v49_.v50);
    v31 = -(float)((float)(v49_.v49 + (float)(v49_.v49 + v51_.v51)) * v29);
    DWORD1(v32) = 0;
    DWORD2(v32) = 0;
    *(float*)&v32 = v29 + v29;
    *((float*)&v32 + 3) = v31;
    *((float*)&v28 + 1) = v30 + v30;
    *((float*)&v28 + 3) =
        -(float)((float)(v49_.v50 + (float)(v49_.v50 - v51_.v52)) * v30);
    v44 = v28;
    v45 = v32;
    GameRoutine_59fb40(&v58_.v58, a2);
    *v27 = v45;
    v27[1] = v44;
    v27[2] = GameData_1a833d0;
    v27[3] = GameData_1a82dc0;
    v33 = v58_.v59;
    v34 = v58_.v60;
    v27[4] = v58_.v58;
    v27[5] = v33;
    v27[6] = v34;
    Pane_5939e0((__int64)a1, a2, v24[42], (float*)&v54_.v54, (__int64)&v49_.v49,
                &v51_.v51, v48, &v46_.v46);
    v23 = LayoutEx_593440(a1, a2, v24[48], (float*)&v54_.v54);
    v19 = a1[11];
    if (v19 == 0) {
      goto LABEL_19;
    }
  }
  if ((a1[69] & 4) == 0 && (*(_BYTE*)(v19 + 8) & 0x20) != 0) {
    v35 = v23;
    v36 = *((int*)a1 + a3 + 45);
    v37 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    v38 = Pane_592dd0(a1, &v51_.v51);
    v40 = *((float*)&v54_.v54 + 1);
    *(_QWORD*)&v58_.v58 = __PAIR64__(LODWORD(v39), LODWORD(v38));
    if (*((float*)&v54_.v54 + 1) > 0x0.0p+0f) {
      v41 = v39;
      v42 = *(float*)&v54_.v54 * 0x1.1df46a0000000p-6f;
      *(float*)&v58_.v58 =
          v38 - (float)(GameRoutine_1a09fc0(*(float*)&v54_.v54 *
                                            0x1.1df46a0000000p-6f) *
                        v40);
      v38 = v41 - (float)(GameRoutine_1a09fb0(v42) * v40);
      *((float*)&v58_.v58 + 1) = v38;
    }
    {
      __typeof__(v38) z_ = (__typeof__(v38)){0};
      LOBYTE(z_) = *(_BYTE*)(*a1 + 90);
      v38 = z_;
    }
    *(float*)(v37 + v36 + 220) =
        (float)((float)LODWORD(v38) / 0x1.fe00000000000p+7f) /
        0x1.fe00000000000p+7f;
    DynamicRenderingTexture_576260((char*)a2, v37 + v36, &v58_.v58, &v51_.v51,
                                   1, (__int64)&GameData_1b13cdc);
    v23 = v35;
  }
LABEL_19:
  if (v23 != 0) {
    return (unsigned int)(v23 - 1) >> 2;
  }
  else {
    return 0;
  }
}

__int64 nn_ui2d_5953b0(__int64 result, float32x4_t* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  float v5;
  float v6;
  float32x2_t* v7;
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  int32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int32x4_t v36;
  float32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;

  if ((*(_BYTE*)(result + 96) & 2) != 0) {
    v5 = *(float*)(result + 80);
    v6 = *(float*)(result + 84);
    v7 = (float32x2_t*)result;
    result = LayoutEx_58d5b0(result, 1);
    v8 = (float)(PSEUDO_UNFUSED(v6 * *(float*)(result + 16))) +
         (float)((float)(v6 * *(float*)(result + 8)) * 0x1.0000000000000p-1f);
    v9 = v8 - (float)(v6 * 0x1.0000000000000p-1f);
    v10 = -(float)(v8 + (float)((float)-v6 * 0x1.0000000000000p-1f));
    LANES128(v11).n128_u64[0] = 0;
    LANES128(v12).n128_u32[0] = 0;
    LANES128(v12).n128_u32[1] =
        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    LANES128(v11).n128_u64[1] = *(unsigned int*)(result + 20);
    LANES128(v13).n128_u64[0] = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
    LANES128(v12).n128_u32[2] = 0;
    LANES128(v13).n128_u32[2] = 0;
    LANES128(v12).n128_f32[3] = v9;
    LANES128(v13).n128_f32[3] =
        (float)((float)((float)-(float)(*(float*)(result + 4) * v5) *
                        0x1.0000000000000p-1f) -
                (float)(PSEUDO_UNFUSED(v5 * *(float*)(result + 12)))) +
        (float)(v5 * 0x1.0000000000000p-1f);
    v14 = vmlaq_f32(v11, vdupq_n_s32(0xC0C90FDB),
                    vrndnq_f32(vmulq_f32(v11, vdupq_n_s32(0x3E22F983u))));
    v15 = vcgtq_f32(v14, vdupq_n_s32(0x3FC90FDBu));
    v16 = vmvnq_s8(v15);
    v17 = vbslq_s8(v15, vsubq_f32(vdupq_n_s32(0x40490FDBu), v14), v14);
    v18 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v17);
    v19 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v17);
    v20 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
    v21 = vbslq_s8(v18, v19, v17);
    PSEUDO_LOW_LANE128(v19, n128_u32, *(_DWORD*)GameData_212c190);
    v22 = vbicq_s8(v16, v18);
    v23 = vmulq_f32(v21, v21);
    v24 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 0), v23,
        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v19, n128_f32,
        -COERCE_FLOAT(DWORDn(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
            sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c190)) /
                    4 -
                1)));
    v25 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 0), v23,
        v24);
    v26 = vmlaq_f32(vdupq_laneq_s32(v20, 2), v23, v25);
    LANES128(v20).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v20).n128_u64[1] = 0x3F8000003F800000LL;
    PSEUDO_LOW_LANE128(
        v25, n128_f32,
        -COERCE_FLOAT(DWORDn(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
            sizeof(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c190)) /
                    4 -
                1)));
    v27 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 0), v23,
        v26);
    v28 = vmlaq_f32(v20, v23, v27);
    PSEUDO_LOW_LANE128(v27, n128_u32, *(_DWORD*)GameData_212c188);
    v29 = vmulq_f32(v21, v28);
    v30 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
    v31 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 0), v23,
        COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v27, n128_f32,
        -COERCE_FLOAT(DWORDn(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188),
            sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c188)) /
                    4 -
                1)));
    v32 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 0), v23,
        v31);
    v33 = vmlaq_f32(vdupq_laneq_s32(v30, 2), v23, v32);
    LANES128(v32).n128_f32[0] = -LANES128(v30).n128_f32[3];
    v34 = vmlaq_f32(
        v20, v23,
        vmlaq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 0),
            v23, v33));
    v35 = vbslq_s8(v22, v34, vnegq_f32(v34));
    LANES128(v23).n128_u64[0] =
        LANES128(v35).n128_u32[1] |
        ((unsigned __int64)LANES128(v35).n128_u32[1] << 32);
    LANES128(v30).n128_u64[0] =
        LANES128(v35).n128_u32[2] |
        ((unsigned __int64)LANES128(v29).n128_u32[2] << 32);
    LANES128(v33).n128_u64[0] = LANES128(v30).n128_u64[0];
    LANES128(v23).n128_u64[1] = LANES128(v29).n128_u32[1];
    LANES128(v32).n128_u64[0] =
        LANES128(v29).n128_u32[1] |
        ((unsigned __int64)LANES128(v29).n128_u32[1] << 32);
    LANES128(v33).n128_u64[1] = 3212836864LL;
    LANES128(v32).n128_u64[1] = LANES128(v35).n128_u32[1];
    LANES128(v34).n128_u64[0] = __ROR8__(LANES128(v30).n128_u64[0], 32);
    v36 = vmulq_f32(v23, v33);
    LANES128(v30).n128_u64[1] = 1065353216;
    v37 = vmulq_f32(v32, v30);
    v38 = vaddq_f32(vmulq_n_f32(v37, LANES128(v29).n128_f32[0]),
                    vmulq_f32(vmulq_n_f32(v34, LANES128(v35).n128_f32[0]),
                              COERCE_AS(float32x4_t, GameData_1a82940)));
    v39 = vaddq_f32(vmulq_n_f32(v37, LANES128(v35).n128_f32[0]),
                    vmulq_f32(vmulq_n_f32(v34, LANES128(v29).n128_f32[0]),
                              COERCE_AS(float32x4_t, GameData_1a83510)));
    v40 = vzip1q_s32(v36, v39);
    v41 = vzip2q_s32(v36, v39);
    LANES128(v39).n128_u64[0] = 0;
    LANES128(v39).n128_u32[2] = 0;
    v42 = vzip1q_s32(v38, COERCE_AS(int32x4_t, 0));
    v43 = vzip1q_s32(v41, vdupq_laneq_s32(v38, 2));
    v44 = vzip1q_s32(v40, v42);
    v45 = vzip2q_s32(v40, v42);
    LANES128(v43).n128_u32[3] = 0;
    LANES128(v44).n128_u32[3] = 0;
    LANES128(v45).n128_u32[3] = 0;
    v46 = vmulq_n_f32(v13, LANES128(v45).n128_f32[0]);
    v47 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v13, LANES128(v44).n128_f32[0]), v12,
                       COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v44, 2);
    v48 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v13, LANES128(v43).n128_f32[0]), v12,
                       COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v43, 2);
    LANES128(v43).n128_u64[0] = 0;
    LANES128(v43).n128_u32[2] = 0;
    LANES128(v34).n128_u64[0] = 0;
    LANES128(v34).n128_u32[2] = 0;
    LANES128(v43).n128_f32[3] =
        -(float)((float)((float)((float)-(float)(*(float*)(result + 4) * v5) *
                                 0x1.0000000000000p-1f) -
                         (float)(PSEUDO_UNFUSED(v5 * *(float*)(result + 12)))) +
                 (float)(v5 * 0x1.0000000000000p-1f));
    v49 = vaddq_f32(COERCE_AS(float32x4_t, 0), v47);
    v50 = vaddq_f32(
        COERCE_AS(float32x4_t, 0),
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                v46, v12, COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]), 1),
            COERCE_AS(float32x4_t, GameData_1a83090), v45, 2));
    v51 = vaddq_f32(COERCE_AS(float32x4_t, 0), v48);
    v52 = vmulq_f32(v49, COERCE_AS(float32x4_t, 0));
    v53 =
        vaddq_f32(v43, vmlaq_f32(vmlaq_f32(v49, COERCE_AS(float32x4_t, 0), v50),
                                 COERCE_AS(float32x4_t, 0), v51));
    LANES128(v49).n128_u64[0] = 0;
    LANES128(v49).n128_u32[2] = 0;
    LANES128(v49).n128_f32[3] = v10;
    v54 = vmlaq_f32(vaddq_f32(v50, v52), COERCE_AS(float32x4_t, 0), v51);
    v55 = vaddq_f32(v51, vmlaq_f32(v52, COERCE_AS(float32x4_t, 0), v50));
    v56 = vaddq_f32(v49, v54);
    LANES128(v34).n128_u32[3] =
        DWORDn(*(_OWORD*)LANES64(v7[14]).n64_u64,
               sizeof(*(_OWORD*)LANES64(v7[14]).n64_u64) / 4 - 1);
    LANES128(v39).n128_u32[3] =
        DWORDn(*(_OWORD*)LANES64(v7[18]).n64_u64,
               sizeof(*(_OWORD*)LANES64(v7[18]).n64_u64) / 4 - 1);
    v57 = vaddq_f32(
        v34, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(
                         v53, COERCE_FLOAT(*(_OWORD*)LANES64(v7[14]).n64_u64)),
                     v56, v7[14], 1),
                 v55, *(float32x4_t*)LANES64(v7[14]).n64_u64, 2));
    LANES128(v34).n128_u64[0] = 0;
    LANES128(v34).n128_u32[2] = 0;
    LANES128(v34).n128_u32[3] =
        DWORDn(*(_OWORD*)LANES64(v7[16]).n64_u64,
               sizeof(*(_OWORD*)LANES64(v7[16]).n64_u64) / 4 - 1);
    v58 = vaddq_f32(
        v34, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(
                         v53, COERCE_FLOAT(*(_OWORD*)LANES64(v7[16]).n64_u64)),
                     v56, v7[16], 1),
                 v55, *(float32x4_t*)LANES64(v7[16]).n64_u64, 2));
    v59 = vaddq_f32(
        v39, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(
                         v53, COERCE_FLOAT(*(_OWORD*)LANES64(v7[18]).n64_u64)),
                     v56, v7[18], 1),
                 v55, *(float32x4_t*)LANES64(v7[18]).n64_u64, 2));
    a2[8] = v57;
    a2[9] = v58;
    a2[10] = v59;
  }
  else {
    v3 = *(_QWORD*)(result + 152);
    LANES128(a2[9]).n128_u64[1] = *(_QWORD*)(result + 136);
    LANES128(a2[10]).n128_u64[1] = v3;
    LANES128(a2[8]).n128_u64[1] = *(_QWORD*)(result + 120);
    LANES128(a2[8]).n128_u64[0] = *(_QWORD*)(result + 112);
    v4 = *(_QWORD*)(result + 128);
    LANES128(a2[10]).n128_u64[0] = *(_QWORD*)(result + 144);
    LANES128(a2[9]).n128_u64[0] = v4;
  }
  LANES128(a2[25]).n128_u8[4] &= ~0x20u;
  return result;
}

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
      LODWORD(v29) = (unsigned __int8)(*(_BYTE*)(a1 + 90));
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
