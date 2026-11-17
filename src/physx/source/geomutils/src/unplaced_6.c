#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0ccb0();
__int64 physx_source_geomutils_src_3edfc0(__int64 a1, float32x4_t* a2);

__int64 physx_source_geomutils_src_3edfc0(__int64 a1, float32x4_t* a2)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  float32x4_t v7;
  float* v8;
  unsigned __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 result;
  __int64 v15;
  unsigned __int64 v16;
  float* v17;
  unsigned int v18;
  float v19;
  float v20;
  bool v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  float v29;
  float32x4_t v30;
  unsigned __int16* v31;
  float* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  int v40;
  float* v41;
  unsigned int v42;
  float v43;
  float v44;
  float v45;
  float v46;
  unsigned int v47;
  float32x4_t v48;
  __int64 v49;
  unsigned __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x2_t v53;
  unsigned __int16* v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x2_t v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x2_t v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x2_t v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x2_t v83;
  __int64 v84;
  __int64 v85;
  unsigned __int8* v86;
  unsigned __int64 v87;
  unsigned int v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x2_t v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  _DWORD v95[9];

  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_QWORD*)(a1 + 152) != 0) {
    v30 = *a2;
    v31 = *(unsigned __int16**)(a1 + 152);
    v34 = (float*)v95;
    memset(&v95[1], 0, 32);
    v35 = *((_QWORD*)v31 + 3);
    v36 = *((_QWORD*)v31 + 4);
    v37 = *v31;
    v94 = LANES128(v30).n128_u64[0];
    v95[0] = LANES128(v30).n128_u32[2];
    v38 = LANES128(v30).n128_u32[2] & 0x7FFFFFFF;
    if ((LANES128(v30).n128_u32[1] & 0x7FFFFFFF) >
            (LANES128(v30).n128_u32[0] & 0x7FFFFFFF) &&
        (LANES128(v30).n128_u32[1] & 0x7FFFFFFF) > v38) {
      v40 = 1;
      v41 = (float*)&v94;
    }
    else if (v38 <= (LANES128(v30).n128_u32[0] & 0x7FFFFFFF)) {
      v40 = 0;
      v41 = (float*)v95;
      v34 = (float*)&v94 + 1;
    }
    else {
      v40 = 2;
      v34 = (float*)&v94;
      v41 = (float*)&v94 + 1;
    }
    v42 = v95[v40 - 2];
    GameRoutine_1a0ccb0(),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
    v44 = 0x1.0000000000000p+0f / v43;
    v45 = vcvts_n_f32_u32(v37 - 1, 1u);
    v46 = (float)(PSEUDO_UNFUSED(v45 *
                                 (float)((float)(PSEUDO_UNFUSED(*v34 * v44)) +
                                         0x1.0000000000000p+0f))) +
          0x1.0000000000000p-1f;
    v47 =
        (unsigned int)(float)((float)(PSEUDO_UNFUSED(
                                  v45 *
                                  (float)((float)(PSEUDO_UNFUSED(v44 * *v41)) +
                                          0x1.0000000000000p+0f))) +
                              0x1.0000000000000p-1f);
    v48 = *a2;
    v49 = *(_QWORD*)(a1 + 160);
    v50 =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 8LL) + v47 +
                            ((unsigned int)v46 +
                             (unsigned int)(__PAIR64__(v40, v42) >> 31) * v37) *
                                v37);
    v51 = *(float32x4_t*)(v49 + 12 * v50);
    LANES128(v51).n128_u32[3] = 0;
    v52 = vmulq_f32(v51, *a2);
    LANES128(v52).n128_u64[0] = LANES128_OF(vpaddq_f32(v52, v52)).n128_u64[0];
    LANES64(v53).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
            .n64_u64[0];
    while (1) {
      result = v50;
      v54 = (unsigned __int16*)(v35 + 4 * v50);
      v55 = *v54;
      if (*v54 == 0) {
        return result;
      }
      v56 = v54[1];
      if (v55 >= 4) {
        break;
      }
      v50 = 0;
      v57 = 0;
      v58 = result;
      v59 = v55 & 3;
      if (v59 != 0) {
        goto LABEL_56;
      }
    LABEL_36:
      if (v50 == result) {
        return result;
      }
    }
    v60 = (unsigned __int8*)(v36 + 1 + v56);
    v61 = 0;
    v50 = result;
    do {
      v62 = *(v60 - 1);
      v63 = *(float32x4_t*)(v49 + 12 * v62);
      LANES128(v63).n128_u32[3] = 0;
      v64 = vmulq_f32(v48, v63);
      LANES128(v64).n128_u64[0] = LANES128_OF(vpaddq_f32(v64, v64)).n128_u64[0];
      LANES64(v65).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v65, v53)).n64_u8[0] & 1) != 0) {
        v66 = (unsigned int)v95[(v62 >> 5) + 1];
        v67 = 1LL << (v62 & 0x1F);
        if ((v66 & v67) == 0) {
          LANES64(v53).n64_u64[0] = LANES64(v65).n64_u64[0];
          v95[(v62 >> 5) + 1] = v66 | v67;
          v50 = v62;
        }
      }
      v68 = *v60;
      v69 = *(float32x4_t*)(v49 + 12 * v68);
      LANES128(v69).n128_u32[3] = 0;
      v70 = vmulq_f32(v48, v69);
      LANES128(v70).n128_u64[0] = LANES128_OF(vpaddq_f32(v70, v70)).n128_u64[0];
      LANES64(v71).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v71, v53)).n64_u8[0] & 1) != 0) {
        v72 = (unsigned int)v95[(v68 >> 5) + 1];
        v73 = 1LL << (v68 & 0x1F);
        if ((v72 & v73) == 0) {
          LANES64(v53).n64_u64[0] = LANES64(v71).n64_u64[0];
          v95[(v68 >> 5) + 1] = v72 | v73;
          v50 = v68;
        }
      }
      v74 = v60[1];
      v75 = *(float32x4_t*)(v49 + 12 * v74);
      LANES128(v75).n128_u32[3] = 0;
      v76 = vmulq_f32(v48, v75);
      LANES128(v76).n128_u64[0] = LANES128_OF(vpaddq_f32(v76, v76)).n128_u64[0];
      LANES64(v77).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v77, v53)).n64_u8[0] & 1) != 0) {
        v78 = (unsigned int)v95[(v74 >> 5) + 1];
        v79 = 1LL << (v74 & 0x1F);
        if ((v78 & v79) == 0) {
          LANES64(v53).n64_u64[0] = LANES64(v77).n64_u64[0];
          v95[(v74 >> 5) + 1] = v78 | v79;
          v50 = v74;
        }
      }
      v80 = v60[2];
      v81 = *(float32x4_t*)(v49 + 12 * v80);
      LANES128(v81).n128_u32[3] = 0;
      v82 = vmulq_f32(v48, v81);
      LANES128(v82).n128_u64[0] = LANES128_OF(vpaddq_f32(v82, v82)).n128_u64[0];
      LANES64(v83).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v83, v53)).n64_u8[0] & 1) != 0) {
        v84 = (unsigned int)v95[(v80 >> 5) + 1];
        v85 = 1LL << (v80 & 0x1F);
        if ((v84 & v85) == 0) {
          LANES64(v53).n64_u64[0] = LANES64(v83).n64_u64[0];
          v95[(v80 >> 5) + 1] = v84 | v85;
          v50 = v80;
        }
      }
      v61 -= 4;
      v60 += 4;
    } while (-(__int64)((unsigned __int16)v55 & 0xFFFC) != v61);
    v57 = -v61;
    v58 = v50;
    v59 = v55 & 3;
    if (v59 == 0) {
      goto LABEL_36;
    }
  LABEL_56:
    v86 = (unsigned __int8*)(v36 + v57 + v56);
    v50 = v58;
    do {
      v88 = *v86++;
      v87 = v88;
      v89 = *(float32x4_t*)(v49 + 12LL * v88);
      LANES128(v89).n128_u32[3] = 0;
      v90 = vmulq_f32(v48, v89);
      LANES128(v90).n128_u64[0] = LANES128_OF(vpaddq_f32(v90, v90)).n128_u64[0];
      LANES64(v91).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v91, v53)).n64_u8[0] & 1) != 0) {
        v92 = (unsigned int)v95[(v87 >> 5) + 1];
        v93 = 1LL << (v87 & 0x1F);
        if ((v92 & v93) == 0) {
          LANES64(v53).n64_u64[0] = LANES64(v91).n64_u64[0];
          v95[(v87 >> 5) + 1] = v92 | v93;
          v50 = v87;
        }
      }
      --v59;
    } while (v59 != 0);
    goto LABEL_36;
  }
  v5 = *(unsigned __int8*)(a1 + 168);
  v6 = v5 - 2;
  if (v5 < 2) {
    return 0;
  }
  v7 = *a2;
  v8 = *(float**)(a1 + 160);
  v9 = v5 - 1;
  v10 = (v5 - 1) & 3;
  LODWORD(v11) = HIDWORD(LANES128(*(a2)).n128_u64[0]);
  v12 = COERCE_FLOAT(LANES128(*(a2)).n128_u64[1]);
  v13 = (float)((float)(PSEUDO_UNFUSED(v11 * v8[1])) +
                (float)(*v8 * COERCE_FLOAT(*a2))) +
        (float)(v8[2] * v12);
  if (v6 >= 3) {
    v16 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = v8 + 7;
    v15 = 1;
    LODWORD(result) = 0;
    do {
      if ((float)((float)((float)(PSEUDO_UNFUSED(v11 * *(v17 - 3))) +
                          (float)(*(v17 - 4) * LANES128(v7).n128_f32[0])) +
                  (float)(*(v17 - 2) * v12)) <= v13) {
        v18 = result;
      }
      else {
        v13 = (float)((float)(PSEUDO_UNFUSED(v11 * *(v17 - 3))) +
                      (float)(*(v17 - 4) * LANES128(v7).n128_f32[0])) +
              (float)(*(v17 - 2) * v12);
        v18 = v15;
      }
      if ((float)((float)((float)(PSEUDO_UNFUSED(v11 * *v17)) +
                          (float)(*(v17 - 1) * LANES128(v7).n128_f32[0])) +
                  (float)(v17[1] * v12)) > v13) {
        v13 = (float)((float)(PSEUDO_UNFUSED(v11 * *v17)) +
                      (float)(*(v17 - 1) * LANES128(v7).n128_f32[0])) +
              (float)(v17[1] * v12);
        v18 = v15 + 1;
      }
      v19 = v17[5];
      v20 = (float)((float)(PSEUDO_UNFUSED(v11 * v17[3])) +
                    (float)(v17[2] * LANES128(v7).n128_f32[0])) +
            (float)(v17[4] * v12);
      v21 = v20 <= v13;
      if (v20 > v13) {
        v13 = (float)((float)(PSEUDO_UNFUSED(v11 * v17[3])) +
                      (float)(v17[2] * LANES128(v7).n128_f32[0])) +
              (float)(v17[4] * v12);
      }
      v22 = v17[6];
      v23 = v17[7];
      if (!v21) {
        v18 = v15 + 2;
      }
      v24 = v15 + 3;
      v15 += 4;
      v17 += 12;
      v25 = (float)((float)(PSEUDO_UNFUSED(v11 * v22)) +
                    (float)(v19 * LANES128(v7).n128_f32[0])) +
            (float)(v23 * v12);
      if (v25 <= v13) {
        result = v18;
      }
      else {
        v13 = v25;
        result = (unsigned int)v24;
      }
    } while (v24 != v16);
  }
  else {
    result = 0;
    v15 = 1;
  }
  if (v10 != 0) {
    v26 = &v8[3 * v15 + 2];
    do {
      v27 = (float)(PSEUDO_UNFUSED(v11 * *(v26 - 1))) +
            (float)(*(v26 - 2) * LANES128(v7).n128_f32[0]);
      v28 = *v26;
      v26 += 3;
      v29 = v27 + (float)(v28 * v12);
      if (v29 <= v13) {
        result = (unsigned int)result;
      }
      else {
        v13 = v29;
        result = (unsigned int)v15;
      }
      LODWORD(v15) = v15 + 1;
      --v10;
    } while (v10 != 0);
  }
  return result;
}

#pragma GCC visibility pop
