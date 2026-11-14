#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_bccce0(PSEUDO_X8, _QWORD* result, int);

__int64 CalculateAllocatedSizeHeap_5c7400(__int64, __int64, __int64*);

__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);

__int64 GameHr_5fc7e0(__int64*, __int64);

__int64 GameHr_bc84e0(__int64*, __int64);

__int64 GameRoutine_18e5d80(__int64);

__int64 GameRoutine_5c02c0(const char*, ...);

__int64 GameRoutine_5c7e20(__int64);

__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);

__int64 GameRoutine_5fc180(_QWORD);

__int64 GameRoutine_5fcb50(__int64);

__int64 GameRoutine_5fcb70(_QWORD);

__int64 GameRoutine_5fcb80(__int64 result);

__int64 RectDrawer_5fcbc0(__int64, __int64*);

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);

__int64 memset(_QWORD, _QWORD, _QWORD);

extern __int64 GameData_2136448[3];

extern __int64 fw_memory_g_heap_manager_ptr;

void nn_mem_StandardAllocator_Free(__int64, __int64);

__int64 nn_vfx_5c65e0(__int64 result, __int64 a2);

__int64 nn_vfx_5c6e20(__int64 a1, __int64 a2, __int64* a3);

long double nn_vfx_5cfd20(long double result, __int64 a2, __int64 a3,
                          __int64 a4, __int64 a5, __int64 a6);

void nn_vfx_bc6f60(__int64 a1, __int64 a2);

long double nn_vfx_5cfd20(long double result, __int64 a2, __int64 a3,
                          __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  int v7;
  float v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t* v15;
  __int8* v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t* v20;
  __int8* v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  float32x4_t v25;
  __int8* v26;
  float32x4_t v27;
  int8x16_t v28;
  float v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float v34;
  float v35;
  __int64 v36;
  int v37;
  int v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  int v43;
  float32x4_t v44;
  float v45;
  int v46;
  float32x4_t v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int64 v52;
  _DWORD* v53;
  unsigned int v54;
  __int64 v55;
  float32x4_t v56;
  int8x16_t v57;
  float v58;
  float v59;
  float v60;
  __int64 v61;
  int v62;
  float32x4_t v63;
  float v64;
  float32x4_t v65;
  __int128 v66;
  __int128 v67;
  __int128 v68;
  __int128 v69;
  float v70;
  _DWORD* v71;
  int v72;
  float v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int128 v82;
  __int128 v83;
  __int64 v84;
  __int128 v85;
  __int128 v86;
  __int64 v87;
  __int128 v88;
  __int128 v89;
  __int128 v90;
  __int64 v91;
  __int128 v92;
  struct {
    __int64 v93;
    float v94;
    float v95;
    float v96;
    float v97;
  } v93_;

  v6 = *(unsigned int*)(a4 + 112);
  if ((int)v6 <= 1) {
    *(_DWORD*)(a4 + 120) = 0;
    return result;
  }
  v7 = *(_DWORD*)(a6 + 88);
  v8 = 0x0.0p+0f;
  v9 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
  if (v7 == 1) {
    v10 = (v6 - 1) & 3;
    if ((unsigned int)(v6 - 2) >= 3) {
      v12 = (v6 - 1) & 0xFFFFFFFC;
      v11 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
      do {
        v13 = *(float32x4_t**)(v11 + 88);
        v12 -= 4;
        v14 = *v13;
        v16 = &LANES128(v13[5]).n128_i8[8];
        v15 = (float32x4_t*)LANES128(v13[5]).n128_u64[1];
        v17 = vsubq_f32(v14, *(float32x4_t*)*((_QWORD*)v16 + 1));
        v18 = vmulq_f32(v17, v17);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        v19 = *v15;
        v21 = &LANES128(v15[5]).n128_i8[8];
        v20 = (float32x4_t*)LANES128(v15[5]).n128_u64[1];
        v22 = vsubq_f32(v19, *(float32x4_t*)*((_QWORD*)v21 + 1));
        v23 = vmulq_f32(v22, v22);
        v24 = v8 + LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                       .n64_f32[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
                .n64_u64[0];
        v25 = *v20;
        v26 = &LANES128(v20[5]).n128_i8[8];
        v11 = LANES128(v20[5]).n128_u64[1];
        v27 = vsubq_f32(v25, *(float32x4_t*)*((_QWORD*)v26 + 1));
        v28 = vmulq_f32(v27, v27);
        LANES128(v28).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u64[0];
        v29 =
            (float)(v24 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
                        .n64_f32[0]) +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]))))
                .n64_f32[0];
        v30 =
            vsubq_f32(*(float32x4_t*)v11, *(float32x4_t*)*(_QWORD*)(v11 + 96));
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v8 = v29 +
             LANES64_OF(vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                 .n64_f32[0];
      } while (v12 != 0);
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 88LL);
    }
    for (; v10 != 0;
         v8 = v8 + LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]))))
                       .n64_f32[0]) {
      v11 = *(_QWORD*)(v11 + 88);
      --v10;
      v32 = vsubq_f32(*(float32x4_t*)v11, *(float32x4_t*)*(_QWORD*)(v11 + 96));
      v33 = vmulq_f32(v32, v32);
      LANES128(v33).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_u64[0];
    }
    v8 = 0x1.0000000000000p+0f / v8;
  }
  v34 = *(float*)(a5 + 116);
  v35 = 0x1.0000000000000p+0f;
  v36 = *(_QWORD*)(*(_QWORD*)(a5 + 568) + 16LL);
  v37 = *(unsigned __int8*)(v36 + 1884);
  v38 = *(unsigned __int8*)(v36 + 1878);
  if (v37 == 0) {
    v34 = 0x1.0000000000000p+0f;
  }
  if (v38 != 0) {
    v34 = v34 * *(float*)(a5 + 112);
  }
  *(float*)&result = *(float*)&result +
                     (float)(*(float*)(a4 + 128) - floorf(*(float*)(a4 + 128)));
  v39 = (float)(unsigned int)(v6 - 1);
  if (v7 != 0) {
    if (v7 != 1) {
      v43 = 0;
      v42 = 0;
      goto LABEL_23;
    }
    v40 = *(float*)(a4 + 140);
    v93_.v93 = 0;
    v93_.v94 = 0x0.0p+0f;
    v93_.v95 = v40 * 0x1.99999a0000000p-4f;
    v93_.v96 = v40 * 0x1.99999a0000000p-4f;
    v93_.v97 = v40 * 0x1.99999a0000000p-4f;
  }
  else {
    v41 = (float)(*(float*)&result + 0x0.0p+0f) /
          (float)((int)*(float*)(a6 + 24) - 1);
    *(float*)&v93_.v93 = 0x0.0p+0f / v39;
    *((float*)&v93_.v93 + 1) = 0x0.0p+0f / v39;
    if (v41 <= 0x1.0000000000000p+0f) {
      v35 = v41;
    }
    v93_.v96 = v35;
    v93_.v97 = v35;
    v93_.v94 = 0x0.0p+0f / v39;
    v93_.v95 = v35;
  }
  LODWORD(v42) = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 12));
  HIDWORD(v42) = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 16) + 1);
  v43 = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 20) + 2);
LABEL_23:
  v44 = *(float32x4_t*)v9;
  v45 = *(float*)(v9 + 80);
  *(_QWORD*)a3 = *(_QWORD*)v9;
  *(_DWORD*)(a3 + 8) = LANES128(v44).n128_u32[2];
  v46 = 2;
  v47 = *(float32x4_t*)v9;
  *(float*)(a3 + 12) = v34 * v45;
  *(float*)(a3 + 92) = -(float)(v34 * v45);
  *(_QWORD*)(a3 + 80) = LANES128(v47).n128_u64[0];
  *(_DWORD*)(a3 + 88) = LANES128(v47).n128_u32[2];
  v48 = *(_OWORD*)(v9 + 32);
  *(_QWORD*)(a3 + 16) = v48;
  *(_DWORD*)(a3 + 24) = DWORD2(v48);
  v49 = *(_OWORD*)(v9 + 32);
  *(_QWORD*)(a3 + 96) = v49;
  *(_DWORD*)(a3 + 104) = DWORD2(v49);
  v50 = *(_OWORD*)(v9 + 48);
  *(_QWORD*)(a3 + 32) = v50;
  *(_DWORD*)(a3 + 40) = DWORD2(v50);
  v51 = *(_OWORD*)(v9 + 48);
  *(_QWORD*)(a3 + 48) = v42;
  *(_QWORD*)(a3 + 128) = v42;
  *(_DWORD*)(a3 + 56) = v43;
  *(_DWORD*)(a3 + 136) = v43;
  v52 = 1;
  *(_DWORD*)(a3 + 28) = 0;
  *(_DWORD*)(a3 + 108) = 0;
  *(_DWORD*)(a3 + 120) = DWORD2(v51);
  v53 = (_DWORD*)(a3 + 296);
  *(_QWORD*)(a3 + 112) = v51;
  do {
    v9 = *(_QWORD*)(v9 + 88);
    v72 = *(_DWORD*)(a6 + 88);
    if (v72 == 1) {
      if (v46 <= 2) {
        v54 = 2;
      }
      else {
        v54 = v46;
      }
      v55 = a3 + 80LL * v54;
      v56 = vsubq_f32(*(float32x4_t*)*(_QWORD*)(v9 + 96), *(float32x4_t*)v9);
      v57 = vmulq_f32(v56, v56);
      LANES128(v57).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
              .n64_u64[0];
      v58 = *(float*)(v55 - 112);
      v59 = *(float*)(v55 - 108);
      LANES128(v57).n128_f32[0] =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]))))
              .n64_f32[0];
      *(float*)&v93_.v93 = v58 + (float)(LANES128(v57).n128_f32[0] * v8);
      *((float*)&v93_.v93 + 1) = v59 + (float)(LANES128(v57).n128_f32[0] * v8);
      v60 = *(float*)(v55 - 104);
      v93_.v94 = v60 + (float)(LANES128(v57).n128_f32[0] * v8);
      v93_.v95 =
          v58 - (float)(0x1.99999a0000000p-4f * LANES128(v57).n128_f32[0]);
      v93_.v96 =
          v59 - (float)(0x1.99999a0000000p-4f * LANES128(v57).n128_f32[0]);
      v93_.v97 =
          v60 - (float)(0x1.99999a0000000p-4f * LANES128(v57).n128_f32[0]);
    LABEL_28:
      LODWORD(v61) = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 12));
      HIDWORD(v61) = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 16) + 1);
      v62 = *((_DWORD*)&v93_.v93 + 3 * *(int*)(a6 + 20) + 2);
      goto LABEL_29;
    }
    if (v72 == 0) {
      v73 = (float)(*(float*)&result + (float)(unsigned int)v52) /
            (float)((int)*(float*)(a6 + 24) - 1);
      *(float*)&v93_.v93 = (float)(unsigned int)v52 / v39;
      *((float*)&v93_.v93 + 1) = *(float*)&v93_.v93;
      if (v73 > 0x1.0000000000000p+0f) {
        v73 = 0x1.0000000000000p+0f;
      }
      v93_.v96 = v73;
      v93_.v97 = v73;
      v93_.v94 = (float)(unsigned int)v52 / v39;
      v93_.v95 = v73;
      goto LABEL_28;
    }
    v62 = 0;
    v61 = 0;
  LABEL_29:
    v63 = *(float32x4_t*)v9;
    v64 = *(float*)(v9 + 80);
    v46 += 2;
    *((_QWORD*)v53 - 17) = *(_QWORD*)v9;
    *(v53 - 32) = LANES128(v63).n128_u32[2];
    v65 = *(float32x4_t*)v9;
    *((float*)v53 - 31) = v34 * v64;
    *((float*)v53 - 11) = -(float)(v34 * v64);
    *((_QWORD*)v53 - 7) = LANES128(v65).n128_u64[0];
    *(v53 - 12) = LANES128(v65).n128_u32[2];
    v66 = *(_OWORD*)(v9 + 32);
    *((_QWORD*)v53 - 15) = v66;
    *(v53 - 28) = DWORD2(v66);
    v67 = *(_OWORD*)(v9 + 32);
    *((_QWORD*)v53 - 5) = v67;
    *(v53 - 8) = DWORD2(v67);
    v68 = *(_OWORD*)(v9 + 48);
    *((_QWORD*)v53 - 13) = v68;
    *(v53 - 24) = DWORD2(v68);
    v69 = *(_OWORD*)(v9 + 48);
    *((_QWORD*)v53 - 11) = v61;
    *((_QWORD*)v53 - 1) = v61;
    v70 = (float)(unsigned int)v52;
    *v53 = v62;
    ++v52;
    *((float*)v53 - 27) = v70;
    *((float*)v53 - 7) = v70;
    *((_QWORD*)v53 - 3) = v69;
    *(v53 - 4) = DWORD2(v69);
    v71 = v53 - 20;
    v53 += 40;
    *v71 = v62;
  } while (v6 != v52);
  *(_DWORD*)(a4 + 120) = 2 * v6;
  if (*(_DWORD*)a6 != 0 && *(_DWORD*)a6 != 3) {
    v74 = *(_QWORD*)(a4 + 88);
    v75 = (unsigned int)v6;
    v76 = v6 & 3;
    if ((int)v6 >= 4) {
      v78 = 0;
      v77 = 0;
      v79 = 640 * (v75 >> 2);
      do {
        v80 = *(_QWORD*)(v74 + 88);
        v81 = a3 + v78;
        v77 += 4;
        v78 += 640;
        v82 = *(_OWORD*)(v80 + 64);
        *(_QWORD*)(v81 + 64) = v82;
        *(_DWORD*)(v81 + 72) = DWORD2(v82);
        v83 = *(_OWORD*)(v80 + 64);
        *(_QWORD*)(v81 + 144) = v83;
        *(_DWORD*)(v81 + 152) = DWORD2(v83);
        v84 = *(_QWORD*)(v80 + 88);
        v85 = *(_OWORD*)(v84 + 64);
        *(_QWORD*)(v81 + 224) = v85;
        *(_DWORD*)(v81 + 232) = DWORD2(v85);
        v86 = *(_OWORD*)(v84 + 64);
        *(_QWORD*)(v81 + 304) = v86;
        *(_DWORD*)(v81 + 312) = DWORD2(v86);
        v87 = *(_QWORD*)(v84 + 88);
        v88 = *(_OWORD*)(v87 + 64);
        *(_QWORD*)(v81 + 384) = v88;
        *(_DWORD*)(v81 + 392) = DWORD2(v88);
        v89 = *(_OWORD*)(v87 + 64);
        *(_QWORD*)(v81 + 464) = v89;
        *(_DWORD*)(v81 + 472) = DWORD2(v89);
        v74 = *(_QWORD*)(v87 + 88);
        v90 = *(_OWORD*)(v74 + 64);
        *(_QWORD*)(v81 + 544) = v90;
        *(_DWORD*)(v81 + 552) = DWORD2(v90);
        result = *(long double*)(v74 + 64);
        *(long double*)(v81 + 624) = result;
      } while (v79 != v78);
    }
    else {
      v77 = 0;
    }
    if (v76 != 0) {
      v91 = a3 + 160 * v77 + 152;
      do {
        v74 = *(_QWORD*)(v74 + 88);
        --v76;
        v92 = *(_OWORD*)(v74 + 64);
        *(_QWORD*)(v91 - 88) = v92;
        *(_DWORD*)(v91 - 80) = DWORD2(v92);
        result = *(long double*)(v74 + 64);
        *(long double*)(v91 - 8) = result;
        v91 += 160;
      } while (v76 != 0);
    }
  }
  return result;
}

void nn_vfx_bc6f60(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    int v11;
    char gap12_[4];
    __int64 v12;
    unsigned __int64 v13;
    __int64 v14;
    char v15;
  } v10_;

  Manager_bccce0((void*)((__int64)&v10_.v10), *(_QWORD**)(a1 + 104), a2);
  GameRoutine_18e5d80((__int64)&v10_.v10);
  v3 = *(_QWORD*)(a1 + 296);
  v4 = *(_QWORD*)(v3 - 40);
  if (v4 >= *(_QWORD*)(v3 - 32)) {
    v8 = GameHr_bc84e0((__int64*)(v3 - 48), (__int64)&v10_.v10);
  }
  else {
    v5 = v10_.v10;
    *(_DWORD*)(v4 + 8) = v10_.v11;
    *(_QWORD*)v4 = v5;
    if ((v10_.v12 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v4 + 16), v10_.v14, v10_.v13);
    }
    else {
      v6 = v10_.v12;
      v7 = v10_.v14;
      *(_QWORD*)(v4 + 24) = v10_.v13;
      *(_QWORD*)(v4 + 32) = v7;
      *(_QWORD*)(v4 + 16) = v6;
    }
    v8 = v4 + 48;
    *(_BYTE*)(v4 + 40) = v10_.v15;
  }
  *(_QWORD*)(v3 - 40) = v8;
  if ((v10_.v12 & 1) != 0 && v10_.v14 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v10_.v14);
  }
}

#pragma GCC visibility pop
