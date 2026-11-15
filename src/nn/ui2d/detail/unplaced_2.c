#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 VectorGraphicsShapePathData_5a3ca0(float*, float32x2_t*, unsigned int*,
                                           __int64, _DWORD*);

__int64 acosf(double);

__int64 nn_ui2d_5a3850(float32x2_t*, float32x2_t*, unsigned __int64*, __int64,
                       __int64, unsigned int, float);

extern _UNKNOWN* GameData_2135448;

float* GameRoutine_59fe80(float* result, float, float);

float acosf_alt1(float) __asm__("acosf");

__int64 nn_ui2d_detail_5a4560(float* a1, float32x2_t** a2, int* a3, _DWORD** a4,
                              _DWORD* a5, __int64 a6);

__int64 nn_ui2d_detail_5aa5a0(__int64 a1, __int64 a2, _DWORD** a3, __int64 a4,
                              __int64* a5, float32x2_t* a6, char a7);

void nn_ui2d_detail_5aa800(__int64 a1, __int64 a2, _DWORD** a3, _QWORD* a4,
                           float32x2_t* a5, int8x8_t* a6, int8x8_t* a7,
                           char a8);

__int64 nn_ui2d_detail_5a4560(float* a1, float32x2_t** a2, int* a3, _DWORD** a4,
                              _DWORD* a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v9;
  unsigned __int64 v10;
  signed int v11;
  float32x2_t v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 (*v27)(float*);
  unsigned __int64 v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x2_t v31;
  float32x2_t v32;
  float32x2_t v33;
  float32x2_t v34;
  float v35;
  float32x2_t v36;
  float32x2_t v37;
  float32x2_t v38;
  float32x2_t v39;
  unsigned __int8 v40;
  float32x2_t v41;
  float32x2_t v42;
  float32x2_t v43;
  float32x2_t v44;
  float32x2_t v45;
  float32x2_t v46;
  float32x2_t v47;
  float32x2_t v48;
  float32x2_t v49;
  float32x2_t v50;
  float v51;
  float v52;
  float32x2_t v53;
  float32x2_t v54;
  float v55;
  float v56;
  unsigned int v57;
  float32x2_t v58;
  float32x2_t v59;
  float v60;
  float32x2_t* v61;
  int v62;
  __int64 v63;
  int v64;
  char v65;
  __int64 v66;
  char v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  __int64 result;
  float32x2_t* v75;
  int v76;
  unsigned __int64 v80;
  unsigned __int64 v81;
  int v82;
  float32x2_t v83;
  float32x2_t v84;
  unsigned __int64 v85;
  struct {
    unsigned __int64 v86;
    char gap152_[16];
    signed __int32 v87;
  } v86_;
  float v88;

  v76 = *a3;
  v75 = *a2;
  LANES64(*((*a2))).n64_u64[0] =
      *(unsigned __int64*)(*((_QWORD*)a1 + 5) + 16LL);
  ++*a2;
  ++*a3;
  if (*(_DWORD*)(*((_QWORD*)a1 + 4) + 24LL) != 0) {
    v9 = 0;
    v10 = 0;
    v86_.v87 = 0;
    v11 = 0;
    PSEUDO_LOW_LANE64(v12, n64_f64, -0x1.000003f800000p-7);
    while (1) {
      v13 = *((_QWORD*)a1 + 5);
      v14 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 56LL))(a1);
      v15 = v10 + 1;
      v16 = *(unsigned int*)(v13 + v9 + 16);
      v17 = *(unsigned int*)(v13 + v9 + 20);
      v18 = *(float*)(v13 + v9 + 8);
      v19 = *(float*)(v13 + v9 + 12);
      v20 = v16 | (v17 << 32);
      LANES64(v83).n64_u64[0] = v20;
      *(float*)&v21 = v18 + *(float*)&v16;
      v82 = v20;
      v22 = v13 + 24LL * (unsigned int)(((int)v10 + 1) % v14);
      v23 = *(_QWORD*)(v22 + 16);
      *((float*)&v21 + 1) = v19 + *((float*)&v20 + 1);
      v24 = *(float*)v22;
      v25 = *(float*)(v22 + 4);
      v26 = *(_QWORD*)a1;
      v86_.v86 = v23;
      v27 = *(__int64 (**)(float*))(v26 + 80);
      *(float*)&v28 = v24 + *(float*)&v23;
      v80 = v21;
      *((float*)&v28 + 1) = v25 + *((float*)&v23 + 1);
      LANES64(v84).n64_u64[0] = v21;
      v85 = v28;
      v81 = v28;
      if ((v27(a1) & 1) != 0) {
        LANES64(v29).n64_u64[0] = v20;
        LANES64(v31).n64_u64[0] = v81;
        LANES64(v30).n64_u64[0] = v23;
        LANES64(v32).n64_u64[0] = v80;
      }
      else {
        LANES64(v29).n64_u64[0] = v20;
        LANES64(v31).n64_u64[0] = v81;
        LANES64(v30).n64_u64[0] = v23;
        LANES64(v32).n64_u64[0] = v80;
        if (v10 == *(_DWORD*)(*((_QWORD*)a1 + 4) + 24LL) - 1) {
          PSEUDO_LOW_LANE64(v31, n64_u64, v23);
          PSEUDO_LOW_LANE64(v32, n64_u64, v20);
          LANES64(v84).n64_u64[0] = v20;
          v85 = v23;
        }
      }
      LANES64(v33).n64_u64[0] = LANES64_OF(vsub_f32(v30, v29)).n64_u64[0];
      LANES64(v34).n64_u64[0] = LANES64_OF(vsub_f32(v32, v29)).n64_u64[0];
      v35 = a1[12];
      LANES64(v36).n64_u64[0] = LANES64_OF(vmul_f32(v33, v34)).n64_u64[0];
      LANES64(v37).n64_u64[0] = LANES64_OF(vmul_f32(v33, v33)).n64_u64[0];
      LANES64(v38).n64_u64[0] = LANES64_OF(vpadd_f32(v36, v36)).n64_u64[0];
      LANES64(v39).n64_u64[0] = LANES64_OF(vpadd_f32(v37, v37)).n64_u64[0];
      if (LANES64(v38).n64_f32[0] <= 0x0.0p+0f) {
        LANES64(v45).n64_u64[0] = LANES64_OF(vmul_f32(v34, v34)).n64_u64[0];
        LANES64(v45).n64_u32[0] = LANES64_OF(vpadd_f32(v45, v45)).n64_u32[0];
        LANES64(v46).n64_u64[0] = LANES64_OF(vsub_f32(v31, v29)).n64_u64[0];
        LANES64(v53).n64_u64[0] = LANES64_OF(vmul_f32(v33, v46)).n64_u64[0];
        LANES64(v48).n64_u64[0] = LANES64_OF(vpadd_f32(v53, v53)).n64_u64[0];
        if (LANES64(v48).n64_f32[0] > 0x0.0p+0f) {
          goto LABEL_12;
        }
      }
      else {
        v40 = LANES64_OF(vcgt_f32(v38, v39)).n64_u8[0];
        LANES64(v41).n64_u64[0] = LANES64_OF(vsub_f32(v30, v32)).n64_u64[0];
        LANES64(v42).n64_u64[0] =
            LANES64_OF(vmul_f32(vmul_f32(v33, vrev64_s32(v34)), v12))
                .n64_u64[0];
        LANES64(v43).n64_u64[0] = LANES64_OF(vmul_f32(v41, v41)).n64_u64[0];
        LANES64(v45).n64_u64[0] = LANES64_OF(vpadd_f32(v42, v42)).n64_u64[0];
        LANES64(v44).n64_u64[0] = LANES64_OF(vpadd_f32(v43, v43)).n64_u64[0];
        LANES64(v45).n64_u32[0] =
            LANES64_OF(vdiv_f32(vmul_f32(v45, v45), v39)).n64_u32[0];
        if ((v40 & 1) != 0) {
          PSEUDO_LOW_LANE64(v45, n64_u64, LANES64(v44).n64_u64[0]);
        }
        LANES64(v46).n64_u64[0] = LANES64_OF(vsub_f32(v31, v29)).n64_u64[0];
        LANES64(v47).n64_u64[0] = LANES64_OF(vmul_f32(v33, v46)).n64_u64[0];
        LANES64(v48).n64_u64[0] = LANES64_OF(vpadd_f32(v47, v47)).n64_u64[0];
        if (LANES64(v48).n64_f32[0] > 0x0.0p+0f) {
        LABEL_12:
          if ((LANES64_OF(vcgt_f32(v48, v39)).n64_u8[0] & 1) != 0) {
            LANES64(v49).n64_u64[0] = LANES64_OF(vsub_f32(v30, v31)).n64_u64[0];
            LANES64(v50).n64_u64[0] = LANES64_OF(vmul_f32(v49, v49)).n64_u64[0];
            v51 = LANES64_OF(vpadd_f32(v50, v50)).n64_f32[0];
            if (LANES64(v45).n64_f32[0] >= v51) {
              v52 = LANES64(v45).n64_f32[0];
            }
            else {
              v52 = v51;
            }
          }
          else {
            LANES64(v58).n64_u64[0] =
                LANES64_OF(vmul_f32(vmul_f32(v33, vrev64_s32(v46)), v12))
                    .n64_u64[0];
            LANES64(v59).n64_u64[0] =
                LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
            v60 = LANES64_OF(vdiv_f32(vmul_f32(v59, v59), v39)).n64_f32[0];
            if (LANES64(v45).n64_f32[0] < v60) {
              v52 = v60;
            }
            else {
              v52 = LANES64(v45).n64_f32[0];
            }
          }
          goto LABEL_20;
        }
      }
      LANES64(v54).n64_u64[0] = LANES64_OF(vmul_f32(v46, v46)).n64_u64[0];
      v55 = LANES64_OF(vpadd_f32(v54, v54)).n64_f32[0];
      if (LANES64(v45).n64_f32[0] < v55) {
        v52 = v55;
      }
      else {
        v52 = LANES64(v45).n64_f32[0];
      }
    LABEL_20:
      v56 = sqrtf(v52);
      if (v56 <= v35) {
        v57 = 1;
      }
      else {
        v88 = ceilf(sqrtf(v56 / v35));
        GameRoutine_59fe80(&v88, 0x1.0000000000000p+0f, 0x1.0000000000000p+10f);
        v57 = 1 << (-__clz((int)v88 - 1) & 31);
      }
      v61 = *a2;
      v62 = nn_ui2d_5a3850(&v83, &v84, &v85, (__int64)&v86_.v86, (__int64)a2,
                           v57, a1[12] * a1[12]);
      v63 = *((_QWORD*)a1 + 4);
      v64 = v62;
      if (v10 < (unsigned int)(*(_DWORD*)(v63 + 24) - 1) ||
          (v65 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 80LL))(a1),
           v63 = *((_QWORD*)a1 + 4), (v65 & 1) != 0)) {
        if ((*(_WORD*)(v63 + 4) & 2) != 0) {
          v66 = a6 + 24LL * v86_.v87++;
          *(_DWORD*)v66 = v82;
          *(_DWORD*)(v66 + 4) = v17;
          *(_QWORD*)(v66 + 8) = v61;
          *(_DWORD*)(v66 + 16) = v64;
          *(_BYTE*)(v66 + 20) = 0;
          v63 = *((_QWORD*)a1 + 4);
        }
      }
      v11 += v64;
      v9 += 24;
      ++v10;
      if (v15 >= *(unsigned int*)(v63 + 24)) {
        goto LABEL_31;
      }
    }
  }
  v11 = 0;
  v86_.v87 = 0;
LABEL_31:
  v88 = *(float*)&v11;
  LANES64(v83).n64_u32[0] = v86_.v87;
  v67 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 88LL))(a1);
  v68 = v11;
  v69 = v76;
  if ((v67 & 1) != 0) {
    v70 = VectorGraphicsShapePathData_5a3ca0(a1, v75, (unsigned int*)&v88, a6,
                                             &v83);
    v11 = LODWORD(v88);
    v71 = v70 & ~(v70 >> 31);
    v69 = v71 + v76;
    v68 = LODWORD(v88) - v71;
  }
  if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 1) != 0 && v68 >= 1) {
    v72 = 0;
    if (v68 != 1) {
      do {
        *(*a4)++ = v69;
        ++*a5;
        v73 = v69 + v72;
        v72 += 2;
        *(*a4)++ = v73;
        ++*a5;
        *(*a4)++ = v73 + 1;
        ++*a5;
        *(*a4)++ = v69;
        ++*a5;
        *(*a4)++ = v73 + 1;
        ++*a5;
        *(*a4)++ = v73 + 2;
        ++*a5;
      } while ((v68 & 0x7FFFFFFE) != v72);
    }
    if ((v68 & 1) != 0) {
      *(*a4)++ = v69;
      ++*a5;
      *(*a4)++ = v72 + v69;
      ++*a5;
      *(*a4)++ = v69 + 1 + v72;
      ++*a5;
    }
  }
  result = LANES64(v83).n64_u32[0];
  *a2 = &v75[v11 + 1];
  *a3 = v76 + v11 + 1;
  return result;
}

void nn_ui2d_detail_5aa800(__int64 a1, __int64 a2, _DWORD** a3, _QWORD* a4,
                           float32x2_t* a5, int8x8_t* a6, int8x8_t* a7, char a8)
{
  int v8;
  float v9;
  int v10;
  unsigned int v15;
  int v16;
  int8x8_t v17;
  float32x2_t v18;
  float v19;
  float32x2_t v20;
  int v21;
  char* v22;
  float v23;
  unsigned __int64 v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  float32x2_t v29;
  int v30;
  unsigned int v31;
  float32x2_t v32;
  float32x2_t v33;

  v8 = *(_DWORD*)(a4[1] + 4LL);
  if (v8 == 2) {
    *(*a3)++ = *(_DWORD*)(a1 + 232);
    v30 = *(_DWORD*)(a1 + 232);
    ++*(_DWORD*)(a1 + 236);
    *(*a3)++ = v30 + 1;
    ++*(_DWORD*)(a1 + 236);
    if ((a8 & 1) != 0) {
      v31 = -1;
    }
    else {
      v31 = 0;
    }
    LANES64(v32).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t, LANES64(*(a5)).n64_u64[0]),
                vmul_n_f32(
                    vbsl_s8(vdup_n_s32(v31),
                            vsub_f32(((float32x2_t){0}),
                                     COERCE_AS(float32x2_t,
                                               LANES64(*(a7)).n64_u64[0])),
                            COERCE_AS(int8x8_t, LANES64(*(a7)).n64_u64[0])),
                    COERCE_FLOAT(*a4))))
            .n64_u64[0];
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmul_n_f32(COERCE_AS(float32x2_t, LANES64(*(a6)).n64_u64[0]),
                              COERCE_FLOAT(*a4)))
            .n64_u64[0];
    LANES64(*((*(float32x2_t**)a2))).n64_u64[0] =
        LANES64_OF(vadd_f32(v33, v32)).n64_u64[0];
    *(_QWORD*)a2 += 8LL;
    ++*(_DWORD*)(a1 + 232);
    LANES64(*((*(float32x2_t**)a2))).n64_u64[0] =
        LANES64_OF(vsub_f32(v32, v33)).n64_u64[0];
    *(_QWORD*)a2 += 8LL;
    ++*(_DWORD*)(a1 + 232);
  }
  else if (v8 == 1) {
    v9 = *(float*)a4;
    v10 = *((_DWORD*)a4 + 1);
    v15 = (a8 & 1) != 0 ? -1 : 0;
    v16 = *(_DWORD*)(a1 + 232);
    LANES64(v17).n64_u64[0] =
        LANES64_OF(
            vbsl_s8(vdup_n_s32(v15),
                    vsub_f32(((float32x2_t){0}),
                             COERCE_AS(float32x2_t, LANES64(*(a6)).n64_u64[0])),
                    COERCE_AS(int8x8_t, LANES64(*(a6)).n64_u64[0])))
            .n64_u64[0];
    **(_DWORD**)a2 = LANES64(*(a5)).n64_u32[0];
    *(_DWORD*)(*(_QWORD*)a2 + 4LL) = LANES64(*(a5)).n64_u32[1];
    *(_QWORD*)a2 += 8LL;
    ++*(_DWORD*)(a1 + 232);
    LANES64(v18).n64_u64[0] =
        LANES64_OF(vmul_f32(v17, COERCE_AS(float32x2_t, 1065353216LL)))
            .n64_u64[0];
    v19 = acosf_alt1(LANES64_OF(vpadd_f32(v18, v18)).n64_f32[0]);
    if ((v10 & 0x80000000) == 0) {
      LANES64(v20).n64_u64[0] =
          LANES64_OF(vmul_f32(vmul_f32(v17, COERCE_AS(float32x2_t,
                                                      0x3F80000000000000LL)),
                              COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
              .n64_u64[0];
      v21 = v10 + 1;
      v22 = (char*)GameData_2135448;
      if (LANES64_OF(vpadd_f32(v20, v20)).n64_f32[0] < 0x0.0p+0f) {
        v19 = (float)(0x1.921fb60000000p+1f - v19) + 0x1.921fb60000000p+1f;
      }
      do {
        v23 = v19 * 0x1.45f3060000000p+29f;
        v19 = (float)(0x1.921fb60000000p+1f / (float)v10) + v19;
        --v21;
        v24 = (unsigned __int64)(__int64)v23 >> 24;
        v25 = vcvts_n_f32_u32((__int64)v23 & 0xFFFFFF, 0x18u);
        v26 = (float*)&v22[16 * (unsigned __int8)v24];
        v27 = v26[1] + (float)(v26[3] * v25);
        v28 = *v26 + (float)(v26[2] * v25);
        LANES64(v29).n64_u64[0] = LANES64(*(a5)).n64_u64[0];
        *(*a3)++ = v16;
        LODWORD(v24) = *(_DWORD*)(a1 + 232);
        ++*(_DWORD*)(a1 + 236);
        *(*a3)++ = v24;
        ++*(_DWORD*)(a1 + 236);
        **(float**)a2 = LANES64(v29).n64_f32[0] + (float)(v28 * v9);
        *(float*)(*(_QWORD*)a2 + 4LL) =
            LANES64(v29).n64_f32[1] - (float)(v27 * v9);
        *(_QWORD*)a2 += 8LL;
        ++*(_DWORD*)(a1 + 232);
      } while (v21 != 0);
    }
  }
}

#pragma GCC visibility pop
