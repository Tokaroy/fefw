#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_41c990(PSEUDO_X8, int32x4_t*,
                                                   __int64);
__int64 GameRoutine_304f00(__int64 result, unsigned int);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 midPhaseQuery(__int64, __int64, __int64, __int64, double);
__int64 physx_Gu_PCMCapsuleVsMeshContactGeneration_processTriangle_4e0c50(
    float32x4_t*, unsigned int, float32x4_t*, float32x2_t*, char, __int64,
    __int64);
bool physx_Gu_HeightFieldUtil_getTriangle(__int64, float*, float*,
                                          unsigned int*, __int64, unsigned int,
                                          char, char);
extern __int64 (*MeshMTDGenerationCallback_processHit_ptr[])();
extern __int64 (*physx_Gu_intersectOBB_RTREE_ptr_1f88980[2])();
float GameRoutine_1a0a010(float);
float GameRoutine_1a0ccb0(float);
float physx_Gu_computeVertexSpaceOBB(__int64, __int64, __int64, __int64);
void physx_Gu_computeBoxAroundCapsule(float*, float*);
__int64 physx_source_geomutils_src_41bf20(__int64 a1, int32x4_t* a2, __int64 a3,
                                          char a4, __int64 a5, double a6);
__int64 physx_source_geomutils_src_41cc60(__int64 a1, float* a2, __int64 a3,
                                          char a4, __int64 a5, double a6);

__int64 physx_source_geomutils_src_41bf20(__int64 a1, int32x4_t* a2, __int64 a3,
                                          char a4, __int64 a5, double a6)
{
  int v6;
  __int64 v8;
  float v9;
  int8x16_t v10;
  int32x4_t v11;
  float32x4_t v12;
  int v13;
  char v14;
  int v15;
  float32x2_t v16;
  __int64 v17;
  float v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x2_t v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  float* v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int* v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned __int16* v53;
  float* v54;
  float v55;
  float v56;
  unsigned int v57;
  float* v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float* v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  float32x4_t* v79;
  _QWORD* v80;
  char v81;
  float32x4_t v82;
  int8x16_t v83;
  int8x16_t v84;
  int8x8_t v85;
  float32x2_t v86;
  float32x2_t v87;
  float32x2_t v88;
  float32x2_t v89;
  float32x2_t v90;
  float32x2_t v91;
  float32x2_t v92;
  float32x2_t v93;
  float32x2_t v94;
  float32x4_t v95;
  int32x2_t v96;
  __int64 v97;
  __int64 v98;
  unsigned int v99;
  float32x2_t v100;
  __int64 v101;
  unsigned int v102;
  int32x2_t* v103;
  __int64 v104;
  __int64 v105;
  int32x2_t v106;
  int32x2_t v107;
  unsigned __int8 v108;
  __int64 v109;
  int32x2_t v110;
  unsigned __int8 v111;
  __int64 v112;
  int32x2_t v113;
  unsigned __int8 v114;
  __int64 v115;
  int32x2_t v116;
  unsigned __int8 v117;
  __int64 v118;
  int32x2_t v119;
  unsigned __int8 v120;
  __int64 v121;
  int32x2_t v122;
  unsigned __int8 v123;
  __int64 v124;
  unsigned __int8 v125;
  __int64 v126;
  int32x2_t* v127;
  float v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  unsigned int v133;
  int v134;
  int8x16_t v135;
  __int64 v136;
  float32x4_t v137;
  float32x2_t v138;
  float32x2_t v139;
  float32x2_t v140;
  float32x2_t v141;
  float32x2_t v142;
  float32x2_t v143;
  float32x2_t v144;
  float32x2_t v145;
  float32x2_t v146;
  __int64 v147;
  __int64 v148;
  char v151;
  __int64 v152;
  int v155;
  float32x4_t v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int32x4_t v160;
  unsigned int v161;
  float32x4_t v162;
  int v163;
  __int64 v164;
  _QWORD v166[2];
  __int64 v167;
  _QWORD v168[3];
  int v169;
  struct {
    __int64 v170;
    __int64 v171;
  } v170_;
  unsigned int v172;
  struct {
    _BYTE v173[40];
    int32x2_t v174;
  } v173_;
  __int64 v175;
  _DWORD v176[12];
  float32x2_t v177;
  struct {
    __int64 (**v178)();
    int v179;
    char gap5700_[4];
    __int64* v180;
  } v178_;
  struct {
    float32x4_t v181;
    __int64 v182;
    __int64 v183;
    char v184;
    char gap5745_[15];
    float32x4_t v185;
    float32x4_t v186;
    float32x4_t v187;
  } v181_;

  v6 = LODWORD(a6);
  v157 = *(_QWORD*)(a1 + 40);
  v8 = *(_QWORD*)(v157 + 64);
  v152 = a1 + 8;
  v9 = (float)(*(float*)(a1 + 8) * *(float*)(a1 + 12)) * *(float*)(a1 + 16);
  *(float*)&a6 = *(float*)&a6 * 0x1.2666660000000p+0f;
  LANES64(v177).n64_u64[0] =
      LANES64_OF(vdup_lane_s32(*(int32x2_t*)&a6, 0)).n64_u64[0];
  GameRoutine_41c990((void*)((__int64)v176), a2, a1 + 8);
  v172 = 0;
  v170_.v170 = 0;
  v170_.v171 = 0;
  GameRoutine_304f00((__int64)&v170_.v170, 0x80u);
  v11 = *(int32x4_t*)(a3 + 48);
  v10 = *(int8x16_t*)(a3 + 64);
  v12 = (__typeof__(v12)){0};
  v13 = 0xFFFFFFF;
  v14 = 0;
  v15 = 0;
  v156 = (__typeof__(v156)){0};
  LANES64(v16).n64_u64[0] =
      LANES64_OF(vneg_f32(COERCE_AS(float32x2_t, 0xFF7FFFFFFF7FFFFFLL)))
          .n64_u64[0];
  v160 = (__typeof__(v160)){0};
  while (1) {
    v162 = v12;
    LODWORD(v170_.v171) = 0;
    v169 = v6;
    v168[0] = LANES128(v11).n128_u64[0];
    v168[1] = LANES128_OF(vzip2q_s32(v11, vuzp1q_s32(v11, v10))).n128_u64[0];
    v168[2] = LANES128_OF(vextq_s8(v10, v10, 4u)).n128_u64[0];
    physx_Gu_computeBoxAroundCapsule((float*)v168, (float*)&v181_.v181);
    v17 = *(_QWORD*)(a1 + 40);
    v18 = physx_Gu_computeVertexSpaceOBB((__int64)v166, (__int64)&v181_.v181,
                                         (__int64)a2, v152);
    v178_.v179 = 2;
    v178_.v180 = &v170_.v170;
    v178_.v178 = MeshMTDGenerationCallback_processHit_ptr;
    ((void (*)(__int64, _QWORD*, __int64 (***)(void), __int64, __int64,
               float))physx_Gu_intersectOBB_RTREE_ptr_1f88980
         [(unsigned int)*(unsigned __int16*)(v17 + 8) - 3])(
        v17, v166, &v178_.v178, 1, 1, v18);
    if ((_DWORD)v170_.v171 == 0) {
      goto LABEL_81;
    }
    v159 = (unsigned int)v170_.v171;
    if ((unsigned int)(v170_.v171 + 31) < 0x20) {
      goto LABEL_81;
    }
    PSEUDO_LOW_LANE64(v21, n64_u64, LANES64(v16).n64_u64[0]);
    v151 = v14;
    v155 = v15;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v161 = v13;
    v158 = (unsigned int)(v170_.v171 + 31) >> 5;
    do {
      v26 = 32 * v23;
      v163 = v24;
      v164 = v22;
      v27 = v159 - 32 * v23;
      if (v27 >= 0x20) {
        v28 = 32;
      }
      else {
        v28 = v27;
      }
      if (v26 != v159) {
        v29 = (float*)&v167;
        v30 = *(float*)v176;
        v31 = *(float*)&v176[1];
        v32 = 0;
        v33 = *(float*)&v176[2];
        v34 = *(float*)&v176[3];
        v35 = *(float*)&v176[4];
        v36 = *(float*)&v176[5];
        v37 = *(float*)&v176[6];
        v38 = *(float*)&v176[7];
        v39 = v170_.v170 + v22;
        v40 = *(float*)&v176[8];
        v41 = *(float*)&v176[9];
        v42 = *(float*)&v176[10];
        v43 = *(float*)&v176[11];
        v44 = *(_BYTE*)(v157 + 76);
        v46 = *(_QWORD*)(v157 + 24);
        v45 = *(_QWORD*)(v157 + 32);
        do {
          while (1) {
            v47 = *(unsigned int*)(v39 + 4 * v32);
            v48 = (unsigned int)(3 * v47);
            if ((v44 & 2) != 0) {
              v53 = (unsigned __int16*)(v45 + 2 * v48);
              v50 = *v53;
              v51 = v53[1];
              v52 = v53[2];
            }
            else {
              v49 = (unsigned int*)(v45 + 4 * v48);
              v50 = *v49;
              v51 = v49[1];
              v52 = v49[2];
            }
            v54 = (float*)(v46 + 12LL * v50);
            v55 = *v54;
            v56 = v54[1];
            if (v9 >= 0x0.0p+0f) {
              v57 = v52;
            }
            else {
              v57 = v51;
            }
            if (v9 < 0x0.0p+0f) {
              v51 = v52;
            }
            v58 = (float*)(v46 + 12LL * v57);
            v59 = v55 * v30;
            v60 = v55 * v31;
            v61 = v56 * v34;
            v62 = v56 * v35;
            v63 = (float)(PSEUDO_UNFUSED(v55 * v33)) +
                  (float)(PSEUDO_UNFUSED(v56 * v36));
            v64 = v54[2];
            v65 = (float*)(v46 + 12LL * v51);
            *(v29 - 5) = (float)((float)(v59 + v61) +
                                 (float)(PSEUDO_UNFUSED(v64 * v37))) +
                         v41;
            *(v29 - 4) = (float)((float)(v60 + v62) +
                                 (float)(PSEUDO_UNFUSED(v64 * v38))) +
                         v42;
            *(v29 - 3) =
                (float)(v63 + (float)(PSEUDO_UNFUSED(v64 * v40))) + v43;
            v66 = v65[1];
            v67 = v34 * v66;
            v68 = v35 * v66;
            v69 = (float)(PSEUDO_UNFUSED(v33 * *v65)) +
                  (float)(PSEUDO_UNFUSED(v36 * v66));
            v70 = v65[2];
            v71 = (float)(PSEUDO_UNFUSED(v31 * *v65)) + v68;
            *(v29 - 2) =
                v41 +
                (float)((float)((float)(PSEUDO_UNFUSED(v30 * *v65)) + v67) +
                        (float)(PSEUDO_UNFUSED(v37 * v70)));
            *(v29 - 1) =
                v42 + (float)(v71 + (float)(PSEUDO_UNFUSED(v38 * v70)));
            *v29 = v43 + (float)(v69 + (float)(PSEUDO_UNFUSED(v40 * v70)));
            v72 = v58[1];
            v73 = v34 * v72;
            v74 = v35 * v72;
            v75 = (float)(PSEUDO_UNFUSED(v33 * *v58)) +
                  (float)(PSEUDO_UNFUSED(v36 * v72));
            v76 = v58[2];
            v77 = (float)((float)(PSEUDO_UNFUSED(v31 * *v58)) + v74) +
                  (float)(PSEUDO_UNFUSED(v38 * v76));
            v29[1] =
                v41 +
                (float)((float)((float)(PSEUDO_UNFUSED(v30 * *v58)) + v73) +
                        (float)(PSEUDO_UNFUSED(v37 * v76)));
            v29[2] = v42 + v77;
            v29[3] = v43 + (float)(v75 + (float)(PSEUDO_UNFUSED(v40 * v76)));
            if (v8 != 0) {
              break;
            }
            *((_BYTE*)v29 + 16) = 56;
            ++v32;
            v29 += 10;
            if (v32 >= v28) {
              goto LABEL_23;
            }
          }
          *((_BYTE*)v29 + 16) = *(_BYTE*)(v8 + v47);
          ++v32;
          v29 += 10;
        } while (v32 < v28);
      LABEL_23:
        if (v26 != v159) {
          v78 = 0;
          v25 = 0;
          while (1) {
            LANES128(v82).n128_u32[3] = 0;
            v172 = 0;
            v181_.v184 = 0;
            v80 = &v166[5 * v78];
            v181_.v181 = (__typeof__(v181_.v181)){0};
            v181_.v182 = 0x7F7FFFFF3CA3D70ALL;
            v181_.v183 = 0x57F7FFFFFLL;
            LANES128(v82).n128_u32[0] = *(_DWORD*)v80;
            LANES128(v19).n128_u32[0] = *((_DWORD*)v80 + 3);
            LANES128(v20).n128_u32[0] = *((_DWORD*)v80 + 6);
            v81 = *((_BYTE*)v80 + 36);
            LANES128(v82).n128_u32[1] = *((_DWORD*)v80 + 1);
            LANES128(v82).n128_u32[2] = *((_DWORD*)v80 + 2);
            LANES128(v19).n128_u32[1] = *((_DWORD*)v80 + 4);
            LANES128(v20).n128_u32[1] = *((_DWORD*)v80 + 7);
            LANES128(v19).n128_u32[2] = *((_DWORD*)v80 + 5);
            LANES128(v20).n128_u32[2] = *((_DWORD*)v80 + 8);
            v181_.v185 = v82;
            v181_.v186 = v19;
            v181_.v187 = v20;
            if ((a4 & 1) == 0) {
              v83 = vsubq_f32(v20, v82);
              v84 = vsubq_f32(v19, v82);
              LANES64(v85).n64_u64[0] =
                  LANES64_OF(
                      vmls_f32(
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v83, v83, 4u))
                                            .n128_u64[0])),
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v84, v84, 4u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v84).n128_u64[0] =
                  LANES64_OF(
                      vext_s8(
                          v85,
                          vmls_f32(
                              vmul_f32(
                                  COERCE_AS(float32x2_t,
                                            LANES128_OF(vextq_s8(v84, v84, 8u))
                                                .n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(v83).n128_u64[0])),
                              COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v83, v83, 8u))
                                            .n128_u64[0])),
                          4u))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v84).n128_i8[8] = v85;
              LANES128(v83).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v84).n128_u64[0])),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES64(v85).n64_u32[0]),
                              COERCE_AS(float32x2_t, LANES64(v85).n64_u32[0]))))
                      .n64_u64[0];
              LANES128(v83).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v86).n64_u64[0] =
                  LANES64_OF(vrsqrte_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v83).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v87).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v86, vrsqrts_f32(
                                        vmul_f32(v86, v86),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v83).n128_u64[0]))))
                      .n64_u64[0];
              LANES64(v88).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v87, vrsqrts_f32(
                                        vmul_f32(v87, v87),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v83).n128_u64[0]))))
                      .n64_u64[0];
              LANES64(v89).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v88, vrsqrts_f32(
                                        vmul_f32(v88, v88),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v83).n128_u64[0]))))
                      .n64_u64[0];
              LANES128(v83).n128_u64[0] =
                  LANES64_OF(
                      vbsl_s8(
                          vdup_lane_s32(
                              vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v83).n128_u64[0])),
                              0),
                          COERCE_AS(int8x8_t, LANES128(v83).n128_u64[0]),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                              vmul_f32(
                                  v89,
                                  vrsqrts_f32(
                                      vmul_f32(v89, v89),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v83).n128_u64[0]))))))
                      .n64_u64[0];
              LANES64(v90).n64_u64[0] =
                  LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v83).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v91).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v90,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v83).n128_u64[0]),
                                          v90)))
                      .n64_u64[0];
              LANES64(v92).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v91,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v83).n128_u64[0]),
                                          v91)))
                      .n64_u64[0];
              LANES64(v93).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v92,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v83).n128_u64[0]),
                                          v92)))
                      .n64_u64[0];
              LANES64(v94).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v93,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v83).n128_u64[0]),
                                          v93)))
                      .n64_u64[0];
              v19 = vmulq_n_f32(
                  v84,
                  LANES64_OF(
                      vmul_f32(v94,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v83).n128_u64[0]),
                                          v94)))
                      .n64_f32[0]);
              v20 = *(float32x4_t*)a3;
              LANES128(v19).n128_u32[3] = 0;
              v95 = vmulq_f32(vsubq_f32(*(float32x4_t*)a3, v82), v19);
              LANES128(v95).n128_u64[0] =
                  LANES128_OF(vpaddq_f32(v95, v95)).n128_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
                      .n64_f32[0] < 0x0.0p+0f) {
                goto LABEL_26;
              }
            }
            physx_Gu_PCMCapsuleVsMeshContactGeneration_processTriangle_4e0c50(
                &v181_.v181, v26 + v78, (float32x4_t*)a3, &v177, v81,
                (__int64)v173_.v173, (__int64)&v172);
            if (v172 == 0) {
              goto LABEL_26;
            }
            LANES64(v96).n64_u64[0] =
                LANES64_OF(vdup_lane_s32(v173_.v174, 1)).n64_u64[0];
            if (v172 == 1) {
              v97 = 0;
              if ((LANES64_OF(vcgt_f32(v21, v96)).n64_u8[0] & 1) == 0) {
                goto LABEL_75;
              }
              goto LABEL_25;
            }
            if ((unsigned __int64)v172 - 2 >= 7) {
              break;
            }
            v98 = 1;
            v99 = 0;
            PSEUDO_LOW_LANE64(v100, n64_u64, LANES64(v96).n64_u64[0]);
            v101 = ((_BYTE)v172 - 1) & 7;
            v102 = 0;
            if ((((_BYTE)v172 - 1) & 7) != 0) {
            LABEL_70:
              v127 = (int32x2_t*)&v173_.v173[64 * v98 + 32];
              do {
                v102 = v98;
                LANES64(v100).n64_u64[0] =
                    LANES64_OF(vdup_lane_s32(v127[1], 1)).n64_u64[0];
                if ((LANES64_OF(vcgt_f32(v96, v100)).n64_u8[0] & 1) == 0) {
                  PSEUDO_LOW_LANE64(v100, n64_u64, LANES64(v96).n64_u64[0]);
                  v102 = v99;
                }
                PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v100).n64_u64[0]);
                LODWORD(v98) = v98 + 1;
                v127 += 8;
                --v101;
                v99 = v102;
              } while (v101 != 0);
            }
          LABEL_74:
            PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v100).n64_u64[0]);
            v97 = v102;
            if ((LANES64_OF(vcgt_f32(v21, v100)).n64_u8[0] & 1) == 0) {
            LABEL_75:
              v25 = 1;
              goto LABEL_26;
            }
          LABEL_25:
            PSEUDO_LOW_LANE64(v21, n64_u64, LANES64(v96).n64_u64[0]);
            v25 = 1;
            v161 = v26 + v78;
            v79 = (float32x4_t*)&v173_.v173[64 * v97];
            v19 = v79[1];
            v20 = v79[2];
            LANES128(v20).n128_u32[3] = 0;
            v160 = v19;
            v162 = v20;
          LABEL_26:
            if (++v78 == v28) {
              goto LABEL_6;
            }
          }
          v103 = (int32x2_t*)&v175;
          v104 = 1;
          v99 = 0;
          while (2) {
            v105 = v104;
            LANES64(v106).n64_u64[0] =
                LANES64_OF(vdup_lane_s32(v103[-23], 1)).n64_u64[0];
            if ((LANES64_OF(vcgt_f32(v96, v106)).n64_u8[0] & 1) != 0) {
              v99 = v104;
              LANES64(v107).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[-15], 1)).n64_u64[0];
              v108 = LANES64_OF(vcgt_f32(v106, v107)).n64_u8[0];
              if ((v108 & 1) == 0) {
                goto LABEL_40;
              }
            LABEL_55:
              v109 = v104 + 1;
              if ((v108 & 1) != 0) {
                goto LABEL_56;
              }
            LABEL_41:
              LANES64(v110).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[-7], 1)).n64_u64[0];
              v111 = LANES64_OF(vcgt_f32(v107, v110)).n64_u8[0];
              if ((v111 & 1) != 0) {
                goto LABEL_42;
              }
            LABEL_57:
              PSEUDO_LOW_LANE64(v110, n64_u64, LANES64(v107).n64_u64[0]);
              v112 = v109 + 1;
              if ((v111 & 1) == 0) {
                goto LABEL_58;
              }
            LABEL_43:
              v99 = v112;
              LANES64(v113).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[1], 1)).n64_u64[0];
              v114 = LANES64_OF(vcgt_f32(v110, v113)).n64_u8[0];
              if ((v114 & 1) == 0) {
                goto LABEL_44;
              }
            LABEL_59:
              v115 = v112 + 1;
              if ((v114 & 1) != 0) {
                goto LABEL_60;
              }
            LABEL_45:
              LANES64(v116).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[9], 1)).n64_u64[0];
              v117 = LANES64_OF(vcgt_f32(v113, v116)).n64_u8[0];
              if ((v117 & 1) != 0) {
                goto LABEL_46;
              }
            LABEL_61:
              PSEUDO_LOW_LANE64(v116, n64_u64, LANES64(v113).n64_u64[0]);
              v118 = v115 + 1;
              if ((v117 & 1) == 0) {
                goto LABEL_62;
              }
            LABEL_47:
              v99 = v118;
              LANES64(v119).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[17], 1)).n64_u64[0];
              v120 = LANES64_OF(vcgt_f32(v116, v119)).n64_u8[0];
              if ((v120 & 1) == 0) {
                goto LABEL_48;
              }
            LABEL_63:
              v121 = v118 + 1;
              if ((v120 & 1) != 0) {
                goto LABEL_64;
              }
            LABEL_49:
              LANES64(v122).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[25], 1)).n64_u64[0];
              v123 = LANES64_OF(vcgt_f32(v119, v122)).n64_u8[0];
              if ((v123 & 1) != 0) {
                goto LABEL_50;
              }
            LABEL_65:
              PSEUDO_LOW_LANE64(v122, n64_u64, LANES64(v119).n64_u64[0]);
              v124 = v121 + 1;
              if ((v123 & 1) == 0) {
                goto LABEL_66;
              }
            LABEL_51:
              v99 = v124;
              LANES64(v96).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[33], 1)).n64_u64[0];
              v125 = LANES64_OF(vcgt_f32(v122, v96)).n64_u8[0];
              if ((v125 & 1) == 0) {
                goto LABEL_52;
              }
            LABEL_67:
              v126 = v124 + 1;
              if ((v125 & 1) != 0) {
                goto LABEL_68;
              }
            }
            else {
              PSEUDO_LOW_LANE64(v106, n64_u64, LANES64(v96).n64_u64[0]);
              LANES64(v107).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[-15], 1)).n64_u64[0];
              v108 = LANES64_OF(vcgt_f32(v106, v107)).n64_u8[0];
              if ((v108 & 1) != 0) {
                goto LABEL_55;
              }
            LABEL_40:
              PSEUDO_LOW_LANE64(v107, n64_u64, LANES64(v106).n64_u64[0]);
              v109 = v104 + 1;
              if ((v108 & 1) == 0) {
                goto LABEL_41;
              }
            LABEL_56:
              v99 = v109;
              LANES64(v110).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[-7], 1)).n64_u64[0];
              v111 = LANES64_OF(vcgt_f32(v107, v110)).n64_u8[0];
              if ((v111 & 1) == 0) {
                goto LABEL_57;
              }
            LABEL_42:
              v112 = v109 + 1;
              if ((v111 & 1) != 0) {
                goto LABEL_43;
              }
            LABEL_58:
              LANES64(v113).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[1], 1)).n64_u64[0];
              v114 = LANES64_OF(vcgt_f32(v110, v113)).n64_u8[0];
              if ((v114 & 1) != 0) {
                goto LABEL_59;
              }
            LABEL_44:
              PSEUDO_LOW_LANE64(v113, n64_u64, LANES64(v110).n64_u64[0]);
              v115 = v112 + 1;
              if ((v114 & 1) == 0) {
                goto LABEL_45;
              }
            LABEL_60:
              v99 = v115;
              LANES64(v116).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[9], 1)).n64_u64[0];
              v117 = LANES64_OF(vcgt_f32(v113, v116)).n64_u8[0];
              if ((v117 & 1) == 0) {
                goto LABEL_61;
              }
            LABEL_46:
              v118 = v115 + 1;
              if ((v117 & 1) != 0) {
                goto LABEL_47;
              }
            LABEL_62:
              LANES64(v119).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[17], 1)).n64_u64[0];
              v120 = LANES64_OF(vcgt_f32(v116, v119)).n64_u8[0];
              if ((v120 & 1) != 0) {
                goto LABEL_63;
              }
            LABEL_48:
              PSEUDO_LOW_LANE64(v119, n64_u64, LANES64(v116).n64_u64[0]);
              v121 = v118 + 1;
              if ((v120 & 1) == 0) {
                goto LABEL_49;
              }
            LABEL_64:
              v99 = v121;
              LANES64(v122).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[25], 1)).n64_u64[0];
              v123 = LANES64_OF(vcgt_f32(v119, v122)).n64_u8[0];
              if ((v123 & 1) == 0) {
                goto LABEL_65;
              }
            LABEL_50:
              v124 = v121 + 1;
              if ((v123 & 1) != 0) {
                goto LABEL_51;
              }
            LABEL_66:
              LANES64(v96).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v103[33], 1)).n64_u64[0];
              v125 = LANES64_OF(vcgt_f32(v122, v96)).n64_u8[0];
              if ((v125 & 1) != 0) {
                goto LABEL_67;
              }
            LABEL_52:
              PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v122).n64_u64[0]);
              v126 = v124 + 1;
              if ((v125 & 1) != 0) {
              LABEL_68:
                v99 = v126;
              }
            }
            v103 += 64;
            v104 = v126 + 1;
            if (v126 == ((v172 - 1LL) & 0xFFFFFFFFFFFFFFF8LL)) {
              v98 = v105 + 8;
              PSEUDO_LOW_LANE64(v100, n64_u64, LANES64(v96).n64_u64[0]);
              v101 = ((_BYTE)v172 - 1) & 7;
              v102 = v99;
              if ((((_BYTE)v172 - 1) & 7) != 0) {
                goto LABEL_70;
              }
              goto LABEL_74;
            }
            continue;
          }
        }
      }
      v25 = 0;
    LABEL_6:
      ++v23;
      v22 = v164 + 128;
      v24 = v25 | v163;
    } while (v23 != v158);
    if ((v24 & 1) == 0) {
      v13 = v161;
      v14 = v151;
    LABEL_81:
      if ((v14 & 1) != 0) {
        goto LABEL_85;
      }
      v133 = 0;
      v134 = HIDWORD(v170_.v171);
      if ((v170_.v171 & 0x8000000000000000LL) == 0) {
        goto LABEL_87;
      }
      return v133;
    }
    v128 = LANES64_OF(vsub_f32(v21, *(float32x2_t*)(a3 + 80))).n64_f32[0];
    v13 = *(_DWORD*)(v170_.v170 + 4LL * v161);
    if (v128 >= 0x0.0p+0f) {
      break;
    }
    v12 = v162;
    v14 = 1;
    v129 = vmulq_n_f32(v162, v128);
    v15 = v155 + 1;
    LANES128(v129).n128_u32[3] = 0;
    v130 = vsubq_f32(v156, v129);
    v131 = vsubq_f32(*(float32x4_t*)a3, v129);
    v156 = v130;
    v132 = vsubq_f32(v131, *(float32x4_t*)a3);
    *(float32x4_t*)a3 = v131;
    v11 = vaddq_f32(*(float32x4_t*)(a3 + 48), v132);
    v10 = vaddq_f32(v132, *(float32x4_t*)(a3 + 64));
    *(int32x4_t*)(a3 + 48) = v11;
    *(int8x16_t*)(a3 + 64) = v10;
    if (v155 == 3) {
    LABEL_85:
      v136 = a5;
      v137 = vmulq_f32(v156, v156);
      LANES128(v137).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v137, v137)).n128_u64[0];
      LANES128(v137).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
              .n64_u64[0];
      LANES64(v138).n64_u64[0] =
          LANES64_OF(
              vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
              .n64_u64[0];
      LANES64(v139).n64_u64[0] =
          LANES64_OF(vmul_f32(v138, vrsqrts_f32(
                                        vmul_f32(v138, v138),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]))))
              .n64_u64[0];
      LANES64(v140).n64_u64[0] =
          LANES64_OF(vmul_f32(v139, vrsqrts_f32(
                                        vmul_f32(v139, v139),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]))))
              .n64_u64[0];
      LANES64(v141).n64_u64[0] =
          LANES64_OF(vmul_f32(v140, vrsqrts_f32(
                                        vmul_f32(v140, v140),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]))))
              .n64_u64[0];
      LANES128(v137).n128_u64[0] =
          LANES64_OF(
              vbsl_s8(
                  vdup_lane_s32(vceqz_f32(COERCE_AS(
                                    float32x2_t, LANES128(v137).n128_u64[0])),
                                0),
                  COERCE_AS(int8x8_t, LANES128(v137).n128_u64[0]),
                  vmul_f32(
                      COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                      vmul_f32(
                          v141,
                          vrsqrts_f32(vmul_f32(v141, v141),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v137).n128_u64[0]))))))
              .n64_u64[0];
      LANES64(v142).n64_u64[0] =
          LANES64_OF(
              vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
              .n64_u64[0];
      LANES64(v143).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v142, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]),
                                        v142)))
              .n64_u64[0];
      LANES64(v144).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v143, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]),
                                        v143)))
              .n64_u64[0];
      LANES64(v145).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v144, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]),
                                        v144)))
              .n64_u64[0];
      LANES64(v146).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v145, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v137).n128_u64[0]),
                                        v145)))
              .n64_u64[0];
      *(float*)(a5 + 32) = -LANES128(v137).n128_f32[0];
      v135 = vandq_s8(
          vdupq_lane_s32(
              vcgtz_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])), 0),
          vmulq_n_f32(
              v156,
              LANES64_OF(
                  vmul_f32(v146,
                           vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v137).n128_u64[0]),
                                      v146)))
                  .n64_f32[0]));
      goto LABEL_86;
    }
  }
  v135 = v162;
  if (v155 != 0) {
    goto LABEL_85;
  }
  v136 = a5;
  *(_DWORD*)(a5 + 32) = 0;
LABEL_86:
  *(_DWORD*)v136 = v13;
  v133 = 1;
  *(_QWORD*)(v136 + 8) = LANES128(v160).n128_u64[0];
  *(_QWORD*)(v136 + 16) =
      LANES128_OF(vzip2q_s32(v160, vuzp1q_s32(v160, v135))).n128_u64[0];
  *(_QWORD*)(v136 + 24) = LANES128_OF(vextq_s8(v135, v135, 4u)).n128_u64[0];
  v134 = HIDWORD(v170_.v171);
  if ((v170_.v171 & 0x8000000000000000LL) == 0) {
  LABEL_87:
    if ((v134 & 0x7FFFFFFF) != 0) {
      v147 = v170_.v170;
      if (v170_.v170 != 0) {
        v148 = PxGetBroadcastAllocator(nullptr);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v148 + 24LL))(v148, v147);
      }
    }
  }
  return v133;
}

__int64 physx_source_geomutils_src_41cc60(__int64 a1, float* a2, __int64 a3,
                                          char a4, __int64 a5, double a6)
{
  float v9;
  float v10;
  float v11;
  int8x16_t v12;
  int32x4_t v13;
  float32x4_t v14;
  int v15;
  char v16;
  int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  double v59;
  __int64 v60;
  float32x2_t v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  unsigned __int64 v68;
  float* v69;
  unsigned __int64 v70;
  __int64 v71;
  float32x4_t v72;
  float32x4_t v73;
  __int64 v74;
  float32x4_t* v75;
  float* v76;
  char v77;
  float32x4_t v78;
  int8x16_t v79;
  int8x16_t v80;
  int8x8_t v81;
  float32x2_t v82;
  float32x2_t v83;
  float32x2_t v84;
  float32x2_t v85;
  float32x2_t v86;
  float32x2_t v87;
  float32x2_t v88;
  float32x2_t v89;
  float32x2_t v90;
  float32x4_t v91;
  int32x2_t v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  float32x2_t v96;
  __int64 v97;
  unsigned int v98;
  int32x2_t* v99;
  __int64 v100;
  __int64 v101;
  int32x2_t v102;
  int32x2_t v103;
  unsigned __int8 v104;
  __int64 v105;
  int32x2_t v106;
  unsigned __int8 v107;
  __int64 v108;
  int32x2_t v109;
  unsigned __int8 v110;
  __int64 v111;
  int32x2_t v112;
  unsigned __int8 v113;
  __int64 v114;
  int32x2_t v115;
  unsigned __int8 v116;
  __int64 v117;
  int32x2_t v118;
  unsigned __int8 v119;
  __int64 v120;
  unsigned __int8 v121;
  __int64 v122;
  int32x2_t* v123;
  float v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  unsigned int v129;
  int v130;
  int8x16_t v131;
  __int64 v132;
  float32x4_t v133;
  float32x2_t v134;
  float32x2_t v135;
  float32x2_t v136;
  float32x2_t v137;
  float32x2_t v138;
  float32x2_t v139;
  float32x2_t v140;
  float32x2_t v141;
  float32x2_t v142;
  __int64 v143;
  __int64 v144;
  char v147;
  float32x2_t v148;
  int v149;
  int v150;
  float32x4_t v151;
  float v152;
  __int64 v153;
  float v154;
  __int64 v155;
  int32x4_t v156;
  float v157;
  unsigned int v158;
  float32x4_t v159;
  float v160;
  int v161;
  struct {
    float v163;
    float v164;
    float v165;
    float v166;
    float v167;
    float v168;
    float v169;
    float v170;
    float v171;
    float v172;
    float v173;
    float v174;
    float v175;
    float v176;
    float v177;
  } v163_;
  float v178[6];
  struct {
    __int64 v179;
    __int64 v180;
  } v179_;
  unsigned int v181;
  struct {
    _BYTE v182[40];
    int32x2_t v183;
  } v182_;
  __int64 v184;
  _QWORD v185[4];
  float32x2_t v186;
  struct {
    float32x4_t v187;
    unsigned __int64 v188;
    __int64 v189;
    char v190;
    char gap5649_[15];
    float32x4_t v191;
    float32x4_t v192;
    float32x4_t v193;
  } v187_;

  v149 = LODWORD(a6);
  *(float*)&a6 = *(float*)&a6 * 0x1.028f5c0000000p+0f;
  v185[2] = *(_QWORD*)(a1 + 8);
  v185[3] = a1;
  LANES64(v186).n64_u64[0] =
      LANES64_OF(vdup_lane_s32(*(int32x2_t*)&a6, 0)).n64_u64[0];
  GameRoutine_1a0ccb0(*(float*)(a1 + 20));
  GameRoutine_1a0ccb0(*(float*)(a1 + 24));
  v9 = *(float*)(a1 + 16);
  v10 = *(float*)(a1 + 20);
  v11 = 0x1.0000000000000p+0f;
  v181 = 0;
  v179_.v179 = 0;
  v179_.v180 = 0;
  *(float*)v185 = 0x1.0000000000000p+0f / v10;
  *((float*)v185 + 1) = 0x1.0000000000000p+0f / v9;
  *(float*)&v185[1] = 0x1.0000000000000p+0f / *(float*)(a1 + 24);
  GameRoutine_304f00((__int64)&v179_.v179, 0x80u);
  v13 = *(int32x4_t*)(a3 + 48);
  v12 = *(int8x16_t*)(a3 + 64);
  v14 = (__typeof__(v14)){0};
  v15 = 0xFFFFFFF;
  v16 = 0;
  v17 = 0;
  v156 = (__typeof__(v156)){0};
  LANES64(v148).n64_u64[0] =
      LANES64_OF(vneg_f32(COERCE_AS(float32x2_t, 0xFF7FFFFFFF7FFFFFLL)))
          .n64_u64[0];
  v151 = (__typeof__(v151)){0};
  while (1) {
    v159 = v14;
    LODWORD(v179_.v180) = 0;
    v187_.v188 = LANES128_OF(vextq_s8(v12, v12, 4u)).n128_u64[0];
    LANES128(v187_.v187).n128_u64[0] = LANES128(v13).n128_u64[0];
    LANES128(v187_.v187).n128_u64[1] =
        LANES128_OF(vzip2q_s32(v13, vuzp1q_s32(v13, v12))).n128_u64[0];
    LODWORD(v187_.v189) = v149;
    physx_Gu_computeBoxAroundCapsule((float*)&v187_.v187, &v163_.v163);
    if (v163_.v171 >= 0x0.0p+0f) {
      v21 = v163_.v164 - v163_.v166;
      if (v163_.v163 >= (float)-v163_.v167) {
        v22 = v163_.v164 - v163_.v166;
        v19 = v163_.v171 + (float)((float)(v163_.v163 + v11) + v163_.v167);
        v21 = v19;
        v20 = v163_.v168 - v163_.v170;
        v18 = v163_.v169 - v163_.v165;
      }
      else {
        v19 = v163_.v171 + (float)((float)(v11 - v163_.v163) - v163_.v167);
        v22 = v19;
        v18 = v163_.v168 + v163_.v170;
        v20 = v163_.v169 + v163_.v165;
      }
    }
    else {
      v18 = v163_.v164 + v163_.v166;
      if (v163_.v163 <= v163_.v167) {
        v20 = v163_.v164 + v163_.v166;
        v19 = (float)((float)(v11 - v163_.v163) + v163_.v167) - v163_.v171;
        v18 = v19;
        v22 = v163_.v168 + v163_.v170;
        v21 = v163_.v169 - v163_.v165;
      }
      else {
        v19 = (float)((float)(v163_.v163 + v11) - v163_.v167) - v163_.v171;
        v20 = v19;
        v21 = v163_.v168 - v163_.v170;
        v22 = v163_.v169 + v163_.v165;
      }
    }
    v23 = 0x1.0000000000000p-1f / GameRoutine_1a0a010(v19);
    v160 = v163_.v172;
    v24 = v20 * v23;
    v25 = v18 * v23;
    v26 = v22 * v23;
    v27 = v21 * v23;
    v157 = v163_.v173;
    v28 = v25 + v25;
    v29 = v26 + v26;
    v30 = v25 * (float)(v25 + v25);
    v31 = v26 * (float)(v26 + v26);
    v32 = v25 * (float)(v24 + v24);
    v33 = v26 * (float)(v24 + v24);
    v34 = v27 * (float)(v24 + v24);
    v35 = v26 * v28;
    v36 = v27 * v28;
    v37 = v27 * v29;
    v38 = v32 + v37;
    v39 = v32 - v37;
    v40 = v11 - (float)(PSEUDO_UNFUSED(v24 * (float)(v24 + v24)));
    v41 = (float)(v11 - v30) - v31;
    v42 = v163_.v174;
    v43 = v38 * v163_.v175;
    v154 = (float)(v33 - v36) * v163_.v175;
    v44 = (float)(v40 - v31) * v163_.v176;
    v45 = v39 * v163_.v176;
    v46 = (float)(v35 + v34) * v163_.v176;
    v47 = (float)(v33 + v36) * v163_.v177;
    v48 = (float)(v35 - v34) * v163_.v177;
    v152 = (float)(v40 - v30) * v163_.v177;
    v49 = GameRoutine_1a0ccb0(v41 * v163_.v175);
    v50 = v49 + GameRoutine_1a0ccb0(v45);
    v51 = v50 + GameRoutine_1a0ccb0(v47);
    v52 = GameRoutine_1a0ccb0(v43);
    v53 = v52 + GameRoutine_1a0ccb0(v44);
    v54 = v53 + GameRoutine_1a0ccb0(v48);
    v55 = GameRoutine_1a0ccb0(v154);
    v56 = v55 + GameRoutine_1a0ccb0(v46);
    v57 = v56 + GameRoutine_1a0ccb0(v152);
    v58 = v42 - v57;
    *(float*)&v59 = v42 + v57;
    v178[2] = v58;
    v178[5] = *(float*)&v59;
    v178[0] = v160 - v51;
    v178[1] = v157 - v54;
    v178[3] = v160 + v51;
    v178[4] = v157 + v54;
    midPhaseQuery((__int64)v185, (__int64)a2, (__int64)v178,
                  (__int64)&v179_.v179, v59);
    v60 = (unsigned int)v179_.v180;
    if ((_DWORD)v179_.v180 == 0 || (unsigned int)(v179_.v180 + 31) < 0x20) {
      goto LABEL_78;
    }
    PSEUDO_LOW_LANE64(v61, n64_u64, LANES64(v148).n64_u64[0]);
    v11 = 0x1.0000000000000p+0f;
    v147 = v16;
    v150 = v17;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v158 = v15;
    v155 = (unsigned int)v179_.v180;
    v153 = (unsigned int)(v179_.v180 + 31) >> 5;
    do {
      v66 = 32 * v63;
      v161 = v64;
      v67 = v60 - 32 * v63;
      if (v67 >= 0x20) {
        v68 = 32;
      }
      else {
        v68 = v67;
      }
      if (v66 != v60) {
        v69 = &v163_.v163;
        v70 = 0;
        v71 = v62;
        do {
          physx_Gu_HeightFieldUtil_getTriangle((__int64)v185, a2, v69, nullptr,
                                               0, *(_DWORD*)(v179_.v179 + v71),
                                               1, 1);
          *((_BYTE*)v69 + 36) = 56;
          ++v70;
          v71 += 4;
          v69 += 10;
        } while (v70 < v68);
        if (v66 != v155) {
          v74 = 0;
          v65 = 0;
          while (1) {
            LANES128(v78).n128_u32[3] = 0;
            v181 = 0;
            v187_.v190 = 0;
            v76 = &v163_.v163 + 10 * v74;
            v187_.v187 = (__typeof__(v187_.v187)){0};
            v187_.v188 = 0x7F7FFFFF3CA3D70ALL;
            v187_.v189 = 0x57F7FFFFFLL;
            LANES128(v78).n128_f32[0] = *v76;
            LANES128(v72).n128_f32[0] = v76[3];
            LANES128(v73).n128_f32[0] = v76[6];
            v77 = *((_BYTE*)v76 + 36);
            LANES128(v78).n128_f32[1] = v76[1];
            LANES128(v78).n128_f32[2] = v76[2];
            LANES128(v72).n128_f32[1] = v76[4];
            LANES128(v73).n128_f32[1] = v76[7];
            LANES128(v72).n128_f32[2] = v76[5];
            LANES128(v73).n128_f32[2] = v76[8];
            v187_.v191 = v78;
            v187_.v192 = v72;
            v187_.v193 = v73;
            if ((a4 & 1) == 0) {
              v79 = vsubq_f32(v73, v78);
              v80 = vsubq_f32(v72, v78);
              LANES64(v81).n64_u64[0] =
                  LANES64_OF(
                      vmls_f32(
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v79, v79, 4u))
                                            .n128_u64[0])),
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v80, v80, 4u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v80).n128_u64[0] =
                  LANES64_OF(
                      vext_s8(
                          v81,
                          vmls_f32(
                              vmul_f32(
                                  COERCE_AS(float32x2_t,
                                            LANES128_OF(vextq_s8(v80, v80, 8u))
                                                .n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(v79).n128_u64[0])),
                              COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v79, v79, 8u))
                                            .n128_u64[0])),
                          4u))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v80).n128_i8[8] = v81;
              LANES128(v79).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v80).n128_u64[0])),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES64(v81).n64_u32[0]),
                              COERCE_AS(float32x2_t, LANES64(v81).n64_u32[0]))))
                      .n64_u64[0];
              LANES128(v79).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v82).n64_u64[0] =
                  LANES64_OF(vrsqrte_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v79).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v83).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v82, vrsqrts_f32(
                                        vmul_f32(v82, v82),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v79).n128_u64[0]))))
                      .n64_u64[0];
              LANES64(v84).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v83, vrsqrts_f32(
                                        vmul_f32(v83, v83),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v79).n128_u64[0]))))
                      .n64_u64[0];
              LANES64(v85).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v84, vrsqrts_f32(
                                        vmul_f32(v84, v84),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v79).n128_u64[0]))))
                      .n64_u64[0];
              LANES128(v79).n128_u64[0] =
                  LANES64_OF(
                      vbsl_s8(
                          vdup_lane_s32(
                              vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v79).n128_u64[0])),
                              0),
                          COERCE_AS(int8x8_t, LANES128(v79).n128_u64[0]),
                          vmul_f32(
                              COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                              vmul_f32(
                                  v85,
                                  vrsqrts_f32(
                                      vmul_f32(v85, v85),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v79).n128_u64[0]))))))
                      .n64_u64[0];
              LANES64(v86).n64_u64[0] =
                  LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v79).n128_u64[0])))
                      .n64_u64[0];
              LANES64(v87).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v86,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v79).n128_u64[0]),
                                          v86)))
                      .n64_u64[0];
              LANES64(v88).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v87,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v79).n128_u64[0]),
                                          v87)))
                      .n64_u64[0];
              LANES64(v89).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v88,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v79).n128_u64[0]),
                                          v88)))
                      .n64_u64[0];
              LANES64(v90).n64_u64[0] =
                  LANES64_OF(
                      vmul_f32(v89,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v79).n128_u64[0]),
                                          v89)))
                      .n64_u64[0];
              v72 = vmulq_n_f32(
                  v80,
                  LANES64_OF(
                      vmul_f32(v90,
                               vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v79).n128_u64[0]),
                                          v90)))
                      .n64_f32[0]);
              v73 = *(float32x4_t*)a3;
              LANES128(v72).n128_u32[3] = 0;
              v91 = vmulq_f32(vsubq_f32(*(float32x4_t*)a3, v78), v72);
              LANES128(v91).n128_u64[0] =
                  LANES128_OF(vpaddq_f32(v91, v91)).n128_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
                      .n64_f32[0] < 0x0.0p+0f) {
                goto LABEL_23;
              }
            }
            physx_Gu_PCMCapsuleVsMeshContactGeneration_processTriangle_4e0c50(
                &v187_.v187, v66 + v74, (float32x4_t*)a3, &v186, v77,
                (__int64)v182_.v182, (__int64)&v181);
            if (v181 == 0) {
              goto LABEL_23;
            }
            LANES64(v92).n64_u64[0] =
                LANES64_OF(vdup_lane_s32(v182_.v183, 1)).n64_u64[0];
            if (v181 == 1) {
              v93 = 0;
              if ((LANES64_OF(vcgt_f32(v61, v92)).n64_u8[0] & 1) == 0) {
                goto LABEL_72;
              }
              goto LABEL_22;
            }
            if ((unsigned __int64)v181 - 2 >= 7) {
              break;
            }
            v94 = 1;
            v95 = 0;
            PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v92).n64_u64[0]);
            v97 = ((_BYTE)v181 - 1) & 7;
            v98 = 0;
            if ((((_BYTE)v181 - 1) & 7) != 0) {
            LABEL_67:
              v123 = (int32x2_t*)&v182_.v182[64 * v94 + 32];
              do {
                v98 = v94;
                LANES64(v96).n64_u64[0] =
                    LANES64_OF(vdup_lane_s32(v123[1], 1)).n64_u64[0];
                if ((LANES64_OF(vcgt_f32(v92, v96)).n64_u8[0] & 1) == 0) {
                  PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v92).n64_u64[0]);
                  v98 = v95;
                }
                PSEUDO_LOW_LANE64(v92, n64_u64, LANES64(v96).n64_u64[0]);
                LODWORD(v94) = v94 + 1;
                v123 += 8;
                --v97;
                v95 = v98;
              } while (v97 != 0);
            }
          LABEL_71:
            PSEUDO_LOW_LANE64(v92, n64_u64, LANES64(v96).n64_u64[0]);
            v93 = v98;
            if ((LANES64_OF(vcgt_f32(v61, v96)).n64_u8[0] & 1) == 0) {
            LABEL_72:
              v65 = 1;
              goto LABEL_23;
            }
          LABEL_22:
            PSEUDO_LOW_LANE64(v61, n64_u64, LANES64(v92).n64_u64[0]);
            v65 = 1;
            v158 = v66 + v74;
            v75 = (float32x4_t*)&v182_.v182[64 * v93];
            v72 = v75[1];
            v73 = v75[2];
            LANES128(v73).n128_u32[3] = 0;
            v156 = v72;
            v159 = v73;
          LABEL_23:
            if (++v74 == v68) {
              goto LABEL_13;
            }
          }
          v99 = (int32x2_t*)&v184;
          v100 = 1;
          v95 = 0;
          while (2) {
            v101 = v100;
            LANES64(v102).n64_u64[0] =
                LANES64_OF(vdup_lane_s32(v99[-23], 1)).n64_u64[0];
            if ((LANES64_OF(vcgt_f32(v92, v102)).n64_u8[0] & 1) != 0) {
              v95 = v100;
              LANES64(v103).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[-15], 1)).n64_u64[0];
              v104 = LANES64_OF(vcgt_f32(v102, v103)).n64_u8[0];
              if ((v104 & 1) == 0) {
                goto LABEL_37;
              }
            LABEL_52:
              v105 = v100 + 1;
              if ((v104 & 1) != 0) {
                goto LABEL_53;
              }
            LABEL_38:
              LANES64(v106).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[-7], 1)).n64_u64[0];
              v107 = LANES64_OF(vcgt_f32(v103, v106)).n64_u8[0];
              if ((v107 & 1) != 0) {
                goto LABEL_39;
              }
            LABEL_54:
              PSEUDO_LOW_LANE64(v106, n64_u64, LANES64(v103).n64_u64[0]);
              v108 = v105 + 1;
              if ((v107 & 1) == 0) {
                goto LABEL_55;
              }
            LABEL_40:
              v95 = v108;
              LANES64(v109).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[1], 1)).n64_u64[0];
              v110 = LANES64_OF(vcgt_f32(v106, v109)).n64_u8[0];
              if ((v110 & 1) == 0) {
                goto LABEL_41;
              }
            LABEL_56:
              v111 = v108 + 1;
              if ((v110 & 1) != 0) {
                goto LABEL_57;
              }
            LABEL_42:
              LANES64(v112).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[9], 1)).n64_u64[0];
              v113 = LANES64_OF(vcgt_f32(v109, v112)).n64_u8[0];
              if ((v113 & 1) != 0) {
                goto LABEL_43;
              }
            LABEL_58:
              PSEUDO_LOW_LANE64(v112, n64_u64, LANES64(v109).n64_u64[0]);
              v114 = v111 + 1;
              if ((v113 & 1) == 0) {
                goto LABEL_59;
              }
            LABEL_44:
              v95 = v114;
              LANES64(v115).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[17], 1)).n64_u64[0];
              v116 = LANES64_OF(vcgt_f32(v112, v115)).n64_u8[0];
              if ((v116 & 1) == 0) {
                goto LABEL_45;
              }
            LABEL_60:
              v117 = v114 + 1;
              if ((v116 & 1) != 0) {
                goto LABEL_61;
              }
            LABEL_46:
              LANES64(v118).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[25], 1)).n64_u64[0];
              v119 = LANES64_OF(vcgt_f32(v115, v118)).n64_u8[0];
              if ((v119 & 1) != 0) {
                goto LABEL_47;
              }
            LABEL_62:
              PSEUDO_LOW_LANE64(v118, n64_u64, LANES64(v115).n64_u64[0]);
              v120 = v117 + 1;
              if ((v119 & 1) == 0) {
                goto LABEL_63;
              }
            LABEL_48:
              v95 = v120;
              LANES64(v92).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[33], 1)).n64_u64[0];
              v121 = LANES64_OF(vcgt_f32(v118, v92)).n64_u8[0];
              if ((v121 & 1) == 0) {
                goto LABEL_49;
              }
            LABEL_64:
              v122 = v120 + 1;
              if ((v121 & 1) != 0) {
                goto LABEL_65;
              }
            }
            else {
              PSEUDO_LOW_LANE64(v102, n64_u64, LANES64(v92).n64_u64[0]);
              LANES64(v103).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[-15], 1)).n64_u64[0];
              v104 = LANES64_OF(vcgt_f32(v102, v103)).n64_u8[0];
              if ((v104 & 1) != 0) {
                goto LABEL_52;
              }
            LABEL_37:
              PSEUDO_LOW_LANE64(v103, n64_u64, LANES64(v102).n64_u64[0]);
              v105 = v100 + 1;
              if ((v104 & 1) == 0) {
                goto LABEL_38;
              }
            LABEL_53:
              v95 = v105;
              LANES64(v106).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[-7], 1)).n64_u64[0];
              v107 = LANES64_OF(vcgt_f32(v103, v106)).n64_u8[0];
              if ((v107 & 1) == 0) {
                goto LABEL_54;
              }
            LABEL_39:
              v108 = v105 + 1;
              if ((v107 & 1) != 0) {
                goto LABEL_40;
              }
            LABEL_55:
              LANES64(v109).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[1], 1)).n64_u64[0];
              v110 = LANES64_OF(vcgt_f32(v106, v109)).n64_u8[0];
              if ((v110 & 1) != 0) {
                goto LABEL_56;
              }
            LABEL_41:
              PSEUDO_LOW_LANE64(v109, n64_u64, LANES64(v106).n64_u64[0]);
              v111 = v108 + 1;
              if ((v110 & 1) == 0) {
                goto LABEL_42;
              }
            LABEL_57:
              v95 = v111;
              LANES64(v112).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[9], 1)).n64_u64[0];
              v113 = LANES64_OF(vcgt_f32(v109, v112)).n64_u8[0];
              if ((v113 & 1) == 0) {
                goto LABEL_58;
              }
            LABEL_43:
              v114 = v111 + 1;
              if ((v113 & 1) != 0) {
                goto LABEL_44;
              }
            LABEL_59:
              LANES64(v115).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[17], 1)).n64_u64[0];
              v116 = LANES64_OF(vcgt_f32(v112, v115)).n64_u8[0];
              if ((v116 & 1) != 0) {
                goto LABEL_60;
              }
            LABEL_45:
              PSEUDO_LOW_LANE64(v115, n64_u64, LANES64(v112).n64_u64[0]);
              v117 = v114 + 1;
              if ((v116 & 1) == 0) {
                goto LABEL_46;
              }
            LABEL_61:
              v95 = v117;
              LANES64(v118).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[25], 1)).n64_u64[0];
              v119 = LANES64_OF(vcgt_f32(v115, v118)).n64_u8[0];
              if ((v119 & 1) == 0) {
                goto LABEL_62;
              }
            LABEL_47:
              v120 = v117 + 1;
              if ((v119 & 1) != 0) {
                goto LABEL_48;
              }
            LABEL_63:
              LANES64(v92).n64_u64[0] =
                  LANES64_OF(vdup_lane_s32(v99[33], 1)).n64_u64[0];
              v121 = LANES64_OF(vcgt_f32(v118, v92)).n64_u8[0];
              if ((v121 & 1) != 0) {
                goto LABEL_64;
              }
            LABEL_49:
              PSEUDO_LOW_LANE64(v92, n64_u64, LANES64(v118).n64_u64[0]);
              v122 = v120 + 1;
              if ((v121 & 1) != 0) {
              LABEL_65:
                v95 = v122;
              }
            }
            v99 += 64;
            v100 = v122 + 1;
            if (v122 == ((v181 - 1LL) & 0xFFFFFFFFFFFFFFF8LL)) {
              v94 = v101 + 8;
              PSEUDO_LOW_LANE64(v96, n64_u64, LANES64(v92).n64_u64[0]);
              v97 = ((_BYTE)v181 - 1) & 7;
              v98 = v95;
              if ((((_BYTE)v181 - 1) & 7) != 0) {
                goto LABEL_67;
              }
              goto LABEL_71;
            }
            continue;
          }
        }
      }
      v65 = 0;
    LABEL_13:
      v60 = v155;
      ++v63;
      v62 += 128;
      v64 = v65 | v161;
    } while (v63 != v153);
    if ((v64 & 1) == 0) {
      v15 = v158;
      v16 = v147;
    LABEL_78:
      if ((v16 & 1) != 0) {
        goto LABEL_82;
      }
      v129 = 0;
      v130 = HIDWORD(v179_.v180);
      if ((v179_.v180 & 0x8000000000000000LL) == 0) {
        goto LABEL_84;
      }
      return v129;
    }
    v124 = LANES64_OF(vsub_f32(v61, *(float32x2_t*)(a3 + 80))).n64_f32[0];
    v15 = *(_DWORD*)(v179_.v179 + 4LL * v158);
    if (v124 >= 0x0.0p+0f) {
      break;
    }
    v14 = v159;
    v16 = 1;
    v125 = vmulq_n_f32(v159, v124);
    v17 = v150 + 1;
    LANES128(v125).n128_u32[3] = 0;
    v126 = vsubq_f32(v151, v125);
    v127 = vsubq_f32(*(float32x4_t*)a3, v125);
    v151 = v126;
    v128 = vsubq_f32(v127, *(float32x4_t*)a3);
    *(float32x4_t*)a3 = v127;
    v13 = vaddq_f32(*(float32x4_t*)(a3 + 48), v128);
    v12 = vaddq_f32(v128, *(float32x4_t*)(a3 + 64));
    *(int32x4_t*)(a3 + 48) = v13;
    *(int8x16_t*)(a3 + 64) = v12;
    if (v150 == 3) {
    LABEL_82:
      v132 = a5;
      v133 = vmulq_f32(v151, v151);
      LANES128(v133).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v133, v133)).n128_u64[0];
      LANES128(v133).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
              .n64_u64[0];
      LANES64(v134).n64_u64[0] =
          LANES64_OF(
              vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
              .n64_u64[0];
      LANES64(v135).n64_u64[0] =
          LANES64_OF(vmul_f32(v134, vrsqrts_f32(
                                        vmul_f32(v134, v134),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]))))
              .n64_u64[0];
      LANES64(v136).n64_u64[0] =
          LANES64_OF(vmul_f32(v135, vrsqrts_f32(
                                        vmul_f32(v135, v135),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]))))
              .n64_u64[0];
      LANES64(v137).n64_u64[0] =
          LANES64_OF(vmul_f32(v136, vrsqrts_f32(
                                        vmul_f32(v136, v136),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]))))
              .n64_u64[0];
      LANES128(v133).n128_u64[0] =
          LANES64_OF(
              vbsl_s8(
                  vdup_lane_s32(vceqz_f32(COERCE_AS(
                                    float32x2_t, LANES128(v133).n128_u64[0])),
                                0),
                  COERCE_AS(int8x8_t, LANES128(v133).n128_u64[0]),
                  vmul_f32(
                      COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]),
                      vmul_f32(
                          v137,
                          vrsqrts_f32(vmul_f32(v137, v137),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v133).n128_u64[0]))))))
              .n64_u64[0];
      LANES64(v138).n64_u64[0] =
          LANES64_OF(
              vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
              .n64_u64[0];
      LANES64(v139).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v138, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]),
                                        v138)))
              .n64_u64[0];
      LANES64(v140).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v139, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]),
                                        v139)))
              .n64_u64[0];
      LANES64(v141).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v140, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]),
                                        v140)))
              .n64_u64[0];
      LANES64(v142).n64_u64[0] =
          LANES64_OF(
              vmul_f32(v141, vrecps_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v133).n128_u64[0]),
                                        v141)))
              .n64_u64[0];
      *(float*)(a5 + 32) = -LANES128(v133).n128_f32[0];
      v131 = vandq_s8(
          vdupq_lane_s32(
              vcgtz_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])), 0),
          vmulq_n_f32(
              v151,
              LANES64_OF(
                  vmul_f32(v142,
                           vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v133).n128_u64[0]),
                                      v142)))
                  .n64_f32[0]));
      goto LABEL_83;
    }
  }
  v131 = v159;
  if (v150 != 0) {
    goto LABEL_82;
  }
  v132 = a5;
  *(_DWORD*)(a5 + 32) = 0;
LABEL_83:
  *(_DWORD*)v132 = v15;
  v129 = 1;
  *(_QWORD*)(v132 + 8) = LANES128(v156).n128_u64[0];
  *(_QWORD*)(v132 + 16) =
      LANES128_OF(vzip2q_s32(v156, vuzp1q_s32(v156, v131))).n128_u64[0];
  *(_QWORD*)(v132 + 24) = LANES128_OF(vextq_s8(v131, v131, 4u)).n128_u64[0];
  v130 = HIDWORD(v179_.v180);
  if ((v179_.v180 & 0x8000000000000000LL) == 0) {
  LABEL_84:
    if ((v130 & 0x7FFFFFFF) != 0) {
      v143 = v179_.v179;
      if (v179_.v179 != 0) {
        v144 = PxGetBroadcastAllocator(nullptr);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v144 + 24LL))(v144, v143);
      }
    }
  }
  return v129;
}

#pragma GCC visibility pop
