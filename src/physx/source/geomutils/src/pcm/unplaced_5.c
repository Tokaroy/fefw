#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 physx_Gu_MultiplePersistentContactManifold_addManifoldContactPoints(
    __int64 result, __int64, __int64, __int64, unsigned int, __int64, _QWORD*,
    char);
bool physx_Gu_MultiplePersistentContactManifold_addManifoldContactsToContactBuffer_501460(
    __int64, __int64, float32x4_t*, float32x4_t*, _QWORD*);
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82f20;
extern __int64 (*physx_Gu_OverlapReport_Destroy_OverlapReport_ptr_1f89b48[])();
float GameRoutine_1a0ccb0(float);
float32x2_t physx_Gu_SinglePersistentContactManifold_refreshContactPoints(
    __int64, float32x4_t*, float32x2_t*);
int32x2_t physx_Gu_PCMMeshContactGeneration_PCMMeshContactGeneration(
    __int64, _QWORD*, float32x2_t*, __int64, __int64, __int64, __int64, __int64,
    __int64);
void physx_Gu_HeightFieldUtil_overlapAABBTriangles(__int64, float*, __int64,
                                                   unsigned int);
bool physx_source_geomutils_src_pcm_4dce40(
    __int64 a1, __int64 a2, int8x16_t* a3, int32x4_t* a4, int32x2_t* a5,
    __int64* a6, __int64 a7, double a8, double a9, double a10, double a11,
    float32x4_t a12, double a13, double a14, float32x4_t a15);
__int64 physx_source_geomutils_src_pcm_5017e0(__int64 result, __int64 a2);

bool physx_source_geomutils_src_pcm_4dce40(
    __int64 a1, __int64 a2, int8x16_t* a3, int32x4_t* a4, int32x2_t* a5,
    __int64* a6, __int64 a7, double a8, double a9, double a10, double a11,
    float32x4_t a12, double a13, double a14, float32x4_t a15)
{
  int8x16_t v15;
  float32x4_t v17;
  int8x16_t v18;
  float32x2_t v19;
  float32x2_t v20;
  __int64 v21;
  int32x2_t v22;
  int32x2_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x8_t v27;
  float32x4_t v28;
  int8x8_t v29;
  float32x2_t v30;
  int8x8_t v31;
  int8x8_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x8_t v38;
  float32x2_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x2_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int32x4_t v48;
  float32x2_t v49;
  float32x2_t v50;
  float32x2_t v51;
  float32x2_t v52;
  float32x2_t v53;
  float32x2_t v54;
  float32x2_t v55;
  float32x2_t v56;
  float32x2_t v57;
  float32x2_t v58;
  float32x2_t v59;
  __int128 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  unsigned __int32 v66;
  unsigned __int8 v67;
  char v68;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  unsigned int v108;
  unsigned int v109;
  float v110;
  float v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  float v115;
  float32x4_t v116;
  float32x4_t v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  int32x2_t v141;
  float v142;
  int32x2_t v143;
  float v144;
  int32x2_t v145;
  float32x2_t v146;
  int32x2_t v147;
  float32x2_t v148;
  int32x2_t v149;
  float32x2_t v150;
  float32x2_t v151;
  float32x2_t v152;
  float32x2_t v153;
  float32x2_t v154;
  float v155;
  float32x2_t v156;
  float32x2_t v157;
  float32x2_t v158;
  float32x2_t v159;
  float v160;
  float32x2_t v161;
  float v162;
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
  float v178;
  float v179;
  float v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  int v188;
  __int64* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 i;
  float32x4_t* v194;
  __int64 v195;
  unsigned __int32 v196;
  unsigned __int32 v197;
  unsigned __int32 v198;
  __int64 v199;
  float32x4_t* v200;
  float32x4_t v201;
  __int64 v202;
  __int64 j;
  __int64 v204;
  __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  unsigned int v209;
  unsigned int v210;
  float32x4_t* v211;
  float32x4_t v212;
  float32x4_t v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  unsigned __int32 v216;
  unsigned __int64 v217;
  unsigned __int64 v218;
  __int64 v219;
  unsigned int v220;
  __int64 v221;
  unsigned int v222;
  __int64 v223;
  __int64 v224;
  __int64* v225;
  int v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64* v231;
  int v232;
  __int64 v233;
  __int64 v234;
  float v236;
  float v237;
  float v238;
  float v239;
  struct {
    float32x4_t v240;
    __int128 v241;
  } v240_;
  _QWORD v242[256];
  __int64 v243[38];
  __int64 v244;
  struct {
    __int64 v245[9];
    __int64 v246;
    unsigned int v247;
    unsigned int v248;
    char gap2512_[2080];
    float32x2_t v249;
    unsigned __int64 v250;
    float32x4_t* v251;
  } v245_;
  struct {
    float32x4_t v252;
    unsigned __int64 v253;
    unsigned __int32 v254;
    int v255;
    char v256;
    char gap4657_[15];
    float32x4_t v257;
    float32x4_t v258;
    float32x2_t v259;
  } v252_;
  struct {
    unsigned __int64 v260;
    float v261;
    char gap4740_[4];
    __int64 v262;
    __int64 v263;
  } v260_;
  float32x2_t v264;
  float32x4_t v265[2];
  float32x4_t v266[2];
  float32x2_t v267;
  int32x2_t v268;
  struct {
    __int64 v269;
    float v270;
    float v271;
    float v272;
    float v273;
  } v269_;

  LANES128(a12).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
  LANES128(a15).n128_u32[0] = LANES128(a4[1]).n128_u32[0];
  v15 = *a4;
  v17 = vnegq_f32(*a4);
  LANES128(a12).n128_u32[1] = LANES128(a3[1]).n128_u32[1];
  v18 = *a3;
  LANES64(v19).n64_u64[0] = LANES128_OF(vdupq_laneq_s32(*a4, 3)).n128_u64[0];
  LANES64(v20).n64_u64[0] = LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0];
  v21 = *a6;
  LODWORD(a9) = *(_DWORD*)(a1 + 8);
  LANES64(v22).n64_u64[0] =
      LANES64_OF(vdup_lane_s32(*(int32x2_t*)&a9, 0)).n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES64(*(a5)).n64_u64[0]), 0))
          .n64_u64[0];
  LANES128(a15).n128_u32[1] = LANES128(a4[1]).n128_u32[1];
  LANES64(v267).n64_u64[0] = LANES64(v23).n64_u64[0];
  LANES64(v268).n64_u64[0] = LANES64(v22).n64_u64[0];
  v24 = v17;
  LANES128(a12).n128_u32[2] = LANES128(a3[1]).n128_u32[2];
  LANES128(a15).n128_u32[2] = LANES128(a4[1]).n128_u32[2];
  LANES128(v24).n128_u32[3] = LANES128(v15).n128_u32[3];
  v25 = vmulq_laneq_f32(v24, v18, 3);
  v265[0] = v15;
  v265[1] = a15;
  v266[0] = v18;
  v266[1] = a12;
  v26 = vsubq_f32(a12, a15);
  LANES64(v27).n64_u64[0] = LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0];
  LANES128(v24).n128_u32[3] = 0;
  v28 = vmulq_n_f32(
      v26, LANES64_OF(
               vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL), v19, v19))
               .n64_f32[0]);
  LANES64(v29).n64_u64[0] = LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0];
  LANES128(v28).n128_u32[3] = 0;
  LANES64(v30).n64_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v17).n128_u64[0]), v29, 4u))
          .n64_u64[0];
  LANES64(v31).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(v29, COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])),
              COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
              COERCE_AS(float32x2_t,
                        LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0])))
          .n64_u64[0];
  LANES64(v32).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 4u)).n128_u64[0])),
              v30, COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  v33 = vmulq_f32(v24, v26);
  LANES128(v33).n128_u64[0] = LANES128_OF(vpaddq_f32(v33, v33)).n128_u64[0];
  LANES128(v34).n128_u64[0] = LANES64_OF(vext_s8(v32, v31, 4u)).n64_u64[0];
  LANES128(v34).n128_u64[1] = LANES64(v32).n64_u32[0];
  v35 = vmlaq_laneq_f32(v28, v34, v15, 3);
  v36 = vaddq_f32(v25, vmulq_laneq_f32(v18, v15, 3));
  LANES128(v35).n128_u64[1] = LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u32[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v17).n128_u64[0]), v27, 4u))
          .n64_u64[0];
  v37 = vmlaq_n_f32(
      v35, v24,
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_f32[0]);
  LANES128(v24).n128_u64[0] = LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0];
  v41 = vaddq_f32(v37, v37);
  LANES64(v38).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), v27),
              COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES64(v39).n64_u64[0] =
      LANES64_OF(
          vmul_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), v20))
          .n64_u64[0];
  v40 = *(float32x4_t*)v21;
  LANES128(v17).n128_u32[3] = 0;
  LANES128(v41).n128_u32[3] = 0;
  LANES128(v37).n128_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(vext_s8(COERCE_AS(int8x8_t, LANES128(v18).n128_u64[0]),
                               COERCE_AS(int8x8_t, LANES128(v24).n128_u64[0]),
                               4u),
                       COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])),
              COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  LANES128(v18).n128_u32[3] = 0;
  v42 = vabdq_f32(v41, *(float32x4_t*)(v21 + 16));
  v43 = vmulq_f32(v18, v17);
  LANES128(v17).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v37).n128_u64[0]), v38, 4u))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] = LANES128_OF(vpaddq_f32(v43, v43)).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES64(v264).n64_u64[0] =
      LANES64_OF(vmul_n_f32(vdup_n_s32(0x3A83126Fu), *(float*)&a9)).n64_u64[0];
  v44 = vaddq_f32(v36, v17);
  LANES64(v45).n64_u64[0] =
      LANES64_OF(
          vsub_f32(v39, vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]))))
          .n64_u64[0];
  v46 = v44;
  LANES128(v42).n128_u64[0] =
      LANES64_OF(
          vpmax_f32(COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
          .n64_u64[0];
  LANES128(v46).n128_u32[3] = LANES64(v45).n64_u32[1];
  v47 = vmulq_f32(v46, v40);
  LANES128(v47).n128_u64[0] = LANES128_OF(vpaddq_f32(v47, v47)).n128_u64[0];
  if (LANES64_OF(
          vuzp1_s8(
              vdup_lane_s16(
                  vorr_s8(
                      vcgt_f32(vdup_n_s32(0x3F7FF2E5u),
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v47).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v47).n128_u64[0]))),
                      vcgt_f32(
                          vpmax_f32(
                              COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v42).n128_u64[0])),
                          vmul_n_f32(vdup_n_s32(0x3CA3D70Au), *(float*)&a9))),
                  0),
              v22))
          .n64_u32[0] == -1) {
    *(_BYTE*)(v21 + 62) = 0;
    *(float32x4_t*)v21 = v46;
    *(float32x4_t*)(v21 + 16) = v41;
    v74 = *(float*)(a2 + 20);
    v260_.v262 = *(_QWORD*)(a2 + 8);
    v260_.v263 = a2;
    GameRoutine_1a0ccb0(v74);
    GameRoutine_1a0ccb0(*(float*)(a2 + 24));
    v75 = *(float*)(a2 + 16);
    v76 = *(float*)(a2 + 20);
    v78 = LANES128(*(a3)).n128_f32[2];
    v77 = LANES128(*(a3)).n128_f32[3];
    v79 = LANES128(*(a4)).n128_f32[0];
    v80 = LANES128(*(a4)).n128_f32[1];
    v252_.v255 = 4;
    LANES128(v240_.v240).n128_u64[1] = (unsigned __int64)&v260_.v260;
    *(_QWORD*)&v240_.v241 = a4;
    v81 = v77 + v77;
    *(float*)&v260_.v260 = 0x1.0000000000000p+0f / v76;
    *((float*)&v260_.v260 + 1) = 0x1.0000000000000p+0f / v75;
    v260_.v261 = 0x1.0000000000000p+0f / *(float*)(a2 + 24);
    v82 = LANES128(*(a3)).n128_f32[0];
    v83 = LANES128(*(a3)).n128_f32[1];
    v84 = v82 + v82;
    v85 = (float)((float)(v77 * (float)(v77 + v77)) + -0x1.0000000000000p+0f) +
          (float)(v82 * (float)(v82 + v82));
    v86 =
        (float)(PSEUDO_UNFUSED(v84 * v83)) + (float)(v78 * (float)(v77 + v77));
    v87 = (float)(PSEUDO_UNFUSED(v84 * v78)) - (float)(v83 * v81);
    v89 = *(float*)(a1 + 8);
    v88 = *(float*)(a1 + 12);
    v90 = LANES128(a4[1]).n128_f32[0];
    v91 = LANES128(a4[1]).n128_f32[1];
    v92 = v85 * v88;
    v93 = v88 * v86;
    v94 = v87 * v88;
    v95 = LANES64(*(a5)).n64_f32[0];
    v252_.v256 = 1;
    v96 = v93 + v93;
    v97 = v94 + v94;
    v98 = v92 + v92;
    v99 = v89 + v95;
    v100 = (float)(LANES128(a3[1]).n128_f32[1] - v91) +
           (float)(LANES128(a3[1]).n128_f32[1] - v91);
    v101 = (float)(LANES128(a3[1]).n128_f32[0] - v90) +
           (float)(LANES128(a3[1]).n128_f32[0] - v90);
    v102 = LANES128(a3[1]).n128_f32[2] - LANES128(a4[1]).n128_f32[2];
    v104 = LANES128(*(a4)).n128_f32[2];
    v103 = LANES128(*(a4)).n128_f32[3];
    v105 = v102 + v102;
    v106 = (float)(v103 * v103) + -0x1.0000000000000p-1f;
    v107 = (float)((float)(PSEUDO_UNFUSED(v100 * v80)) + (float)(v79 * v101)) +
           (float)(v104 * v105);
    *(float*)&v108 = (float)((float)(v100 * v106) -
                             (float)(PSEUDO_UNFUSED(
                                 (float)((float)(v104 * v101) -
                                         (float)(PSEUDO_UNFUSED(v79 * v105))) *
                                 v103))) +
                     (float)(v80 * v107);
    *(float*)&v109 = (float)((float)(v101 * v106) -
                             (float)(PSEUDO_UNFUSED(
                                 (float)((float)(v80 * v105) -
                                         (float)(PSEUDO_UNFUSED(v104 * v100))) *
                                 v103))) +
                     (float)(v79 * v107);
    v110 = (float)(v105 * v106) -
           (float)(PSEUDO_UNFUSED((float)((float)(v79 * v100) -
                                          (float)(PSEUDO_UNFUSED(v80 * v101))) *
                                  v103));
    v111 = (float)((float)(PSEUDO_UNFUSED(v96 * v80)) + (float)(v79 * v98)) +
           (float)(v104 * v97);
    *(float*)&v112 = v110 + (float)(v104 * v107);
    *(float*)&v113 = (float)((float)(v98 * v106) -
                             (float)(PSEUDO_UNFUSED(
                                 (float)((float)(v80 * v97) -
                                         (float)(PSEUDO_UNFUSED(v104 * v96))) *
                                 v103))) +
                     (float)(v79 * v111);
    *(float*)&v114 = (float)((float)(v96 * v106) -
                             (float)(PSEUDO_UNFUSED(
                                 (float)((float)(v104 * v98) -
                                         (float)(PSEUDO_UNFUSED(v79 * v97))) *
                                 v103))) +
                     (float)(v80 * v111);
    v115 = (float)(v97 * v106) -
           (float)(PSEUDO_UNFUSED((float)((float)(v79 * v96) -
                                          (float)(PSEUDO_UNFUSED(v80 * v98))) *
                                  v103));
    LANES128(v116).n128_u32[3] = 0;
    LANES128(v117).n128_u64[0] = __PAIR64__(v108, v109);
    LANES128(v116).n128_u64[0] = __PAIR64__(v114, v113);
    LANES128(v117).n128_u64[1] = v112;
    LANES128(v116).n128_f32[2] = v115 + (float)(v104 * v111);
    v252_.v252 = v117;
    LANES64(v252_.v259).n64_u64[0] = LANES64(v268).n64_u64[0];
    v252_.v254 = LANES64(v268).n64_u32[0];
    v252_.v258 = vsubq_f32(v117, v116);
    v252_.v257 = vaddq_f32(v117, v116);
    v252_.v253 = LANES64_OF(vdup_lane_s32(v268, 0)).n64_u64[0];
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v260_.v262 + 128LL))((void*)(&v269_.v269),
                                       (__int64)v260_.v262);
    BYTE8(v240_.v241) = (v269_.v269 & 1) == 0;
    LANES128(v240_.v240).n128_u64[0] = (unsigned __int64)
        physx_Gu_OverlapReport_Destroy_OverlapReport_ptr_1f89b48;
    physx_Gu_PCMMeshContactGeneration_PCMMeshContactGeneration(
        (__int64)v242, &v267, &v264, (__int64)v266, (__int64)v265, v21, a7, 0,
        0);
    v118 = LANES128(a3[1]).n128_f32[0] - LANES128(a4[1]).n128_f32[0];
    v119 = LANES128(a3[1]).n128_f32[1] - LANES128(a4[1]).n128_f32[1];
    v120 = LANES128(a3[1]).n128_f32[2];
    v121 = LANES128(a4[1]).n128_f32[2];
    v122 = LANES128(*(a4)).n128_f32[0];
    v123 = LANES128(*(a4)).n128_f32[1];
    v124 = LANES128(*(a4)).n128_f32[2];
    v125 = LANES128(*(a4)).n128_f32[3];
    v126 = LANES128(*(a3)).n128_f32[0];
    v127 = LANES128(*(a3)).n128_f32[1];
    v128 = *(float*)(a1 + 12);
    v245_.v251 = &v252_.v252;
    v129 = v119 + v119;
    v130 = v118 + v118;
    LANES64(v245_.v249).n64_u64[0] =
        LANES64_OF(vadd_f32(v252_.v259, v267)).n64_u64[0];
    v131 = v120 - v121;
    v132 = (float)(v125 * v125) + -0x1.0000000000000p-1f;
    v133 = v99 + v128;
    v134 = v131 + v131;
    v245_.v250 = LANES64_OF(vmul_f32(v245_.v249, v245_.v249)).n64_u64[0];
    v135 = (float)((float)-(float)(PSEUDO_UNFUSED(v123 * v129)) -
                   (float)(v122 * v130)) -
           (float)(v124 * v134);
    v136 = (float)((float)(PSEUDO_UNFUSED(
                       v125 * (float)((float)(PSEUDO_UNFUSED(v124 * v129)) -
                                      (float)(v123 * v134)))) +
                   (float)(v130 * v132)) -
           (float)(v122 * v135);
    v137 = (float)((float)(PSEUDO_UNFUSED(
                       v125 * (float)((float)(PSEUDO_UNFUSED(v122 * v134)) -
                                      (float)(v124 * v130)))) +
                   (float)(v129 * v132)) -
           (float)(v123 * v135);
    v138 = (float)((float)(PSEUDO_UNFUSED(
                       v125 * (float)((float)(PSEUDO_UNFUSED(v123 * v130)) -
                                      (float)(v122 * v129)))) +
                   (float)(v134 * v132)) -
           (float)(v124 * v135);
    v140 = LANES128(*(a3)).n128_f32[2];
    v139 = LANES128(*(a3)).n128_f32[3];
    PSEUDO_LOW_LANE64(v141, n64_f32,
                      (float)((float)((float)(v125 * v127) -
                                      (float)(PSEUDO_UNFUSED(v123 * v139))) -
                              (float)(v124 * v126)) +
                          (float)(v140 * v122));
    v142 = (float)((float)((float)(v125 * v126) -
                           (float)(PSEUDO_UNFUSED(v122 * v139))) -
                   (float)(v123 * v140)) +
           (float)(v127 * v124);
    PSEUDO_LOW_LANE64(v143, n64_f32,
                      (float)((float)((float)(v125 * v140) -
                                      (float)(PSEUDO_UNFUSED(v124 * v139))) -
                              (float)(v122 * v127)) +
                          (float)(v126 * v123));
    v144 = (float)(PSEUDO_UNFUSED(v122 * v126)) + (float)(v125 * v139);
    PSEUDO_LOW_LANE64(v145, n64_f32, v142 + v142);
    LANES64(v146).n64_u64[0] = LANES64_OF(vdup_lane_s32(v143, 0)).n64_u64[0];
    PSEUDO_LOW_LANE64(v147, n64_f32, v142 * (float)(v142 + v142));
    LANES64(v148).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v146, v142 + v142)).n64_u64[0];
    PSEUDO_LOW_LANE64(v149, n64_f32,
                      (float)(v144 + (float)(v123 * v127)) +
                          (float)(v124 * v140));
    LANES64(v150).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v146, LANES64(v143).n64_f32[0] +
                                        LANES64(v143).n64_f32[0]))
            .n64_u64[0];
    LANES64(v151).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v146, LANES64(v141).n64_f32[0] +
                                        LANES64(v141).n64_f32[0]))
            .n64_u64[0];
    LANES64(v152).n64_u64[0] =
        LANES64_OF(
            vmul_n_f32(vdup_lane_s32(v141, 0),
                       LANES64(v141).n64_f32[0] + LANES64(v141).n64_f32[0]))
            .n64_u64[0];
    LANES64(v153).n64_u64[0] =
        LANES64_OF(vmul_n_f32(vdup_lane_s32(v145, 0), LANES64(v141).n64_f32[0]))
            .n64_u64[0];
    LANES64(v154).n64_u64[0] = LANES64_OF(vdup_lane_s32(v149, 0)).n64_u64[0];
    v155 = (float)(LANES64(v149).n64_f32[0] * LANES64(v149).n64_f32[0]) +
           -0x1.0000000000000p-1f;
    LANES64(v156).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v154, v142 + v142)).n64_u64[0];
    LANES64(v157).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v154, LANES64(v141).n64_f32[0] +
                                        LANES64(v141).n64_f32[0]))
            .n64_u64[0];
    LANES64(v158).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v154, LANES64(v143).n64_f32[0] +
                                        LANES64(v143).n64_f32[0]))
            .n64_u64[0];
    LANES64(v159).n64_u64[0] =
        LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL),
                            vdup_lane_s32(v147, 0)))
            .n64_u64[0];
    v160 = LANES64_OF(vadd_f32(v156, v151)).n64_f32[0];
    LANES64(v151).n64_f32[0] = LANES64_OF(vsub_f32(v151, v156)).n64_f32[0];
    LANES64(v147).n64_f32[0] = LANES64_OF(vadd_f32(v153, v158)).n64_f32[0];
    LANES64(v161).n64_u64[0] = LANES64_OF(vsub_f32(v153, v158)).n64_u64[0];
    LANES64(v156).n64_f32[0] = LANES64_OF(vsub_f32(v159, v152)).n64_f32[0];
    LANES64(v153).n64_f32[0] = LANES64_OF(vsub_f32(v159, v150)).n64_f32[0];
    LANES64(v150).n64_f32[0] =
        (float)(PSEUDO_UNFUSED((float)(v99 - v99) * 0x1.0000000000000p-1f)) +
        (float)(PSEUDO_UNFUSED((float)(v99 - v99) * 0x1.0000000000000p-1f));
    PSEUDO_LOW_LANE64(
        v159, n64_f32,
        (float)(PSEUDO_UNFUSED((float)(v133 - v133) * 0x1.0000000000000p-1f)) +
            (float)(PSEUDO_UNFUSED((float)(v133 - v133) *
                                   0x1.0000000000000p-1f)));
    v162 = (float)((float)(PSEUDO_UNFUSED(LANES64(v150).n64_f32[0] *
                                          LANES64(v141).n64_f32[0])) +
                   (float)(v142 * LANES64(v159).n64_f32[0])) +
           (float)(LANES64(v143).n64_f32[0] * LANES64(v150).n64_f32[0]);
    v163 =
        v136 + (float)((float)((float)(PSEUDO_UNFUSED(
                                   LANES64(v149).n64_f32[0] *
                                   (float)((float)(LANES64(v141).n64_f32[0] *
                                                   LANES64(v150).n64_f32[0]) -
                                           (float)(PSEUDO_UNFUSED(
                                               LANES64(v143).n64_f32[0] *
                                               LANES64(v150).n64_f32[0]))))) +
                               (float)(LANES64(v159).n64_f32[0] * v155)) +
                       (float)(v142 * v162));
    v164 = (float)(v99 + v99) * 0x1.0000000000000p-1f;
    v165 =
        v137 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            LANES64(v149).n64_f32[0] *
                            (float)((float)(LANES64(v143).n64_f32[0] *
                                            LANES64(v159).n64_f32[0]) -
                                    (float)(PSEUDO_UNFUSED(
                                        v142 * LANES64(v150).n64_f32[0]))))) +
                        (float)(LANES64(v150).n64_f32[0] * v155)) +
                (float)(LANES64(v141).n64_f32[0] * v162));
    v166 = (float)(v133 + v133) * 0x1.0000000000000p-1f;
    v167 = vmuls_lane_f32(v164, v161, 1);
    v168 = v164 * LANES64(v153).n64_f32[0];
    v169 = vmuls_lane_f32(v164, vadd_f32(v148, v157), 1);
    v170 = v164 * LANES64(v151).n64_f32[0];
    v171 = v166 * LANES64(v147).n64_f32[0];
    v236 = v164 * v160;
    v237 = v166 * LANES64_OF(vsub_f32(v148, v157)).n64_f32[0];
    v238 = v164 * LANES64(v156).n64_f32[0];
    v239 =
        v138 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            LANES64(v149).n64_f32[0] *
                            (float)((float)(v142 * LANES64(v150).n64_f32[0]) -
                                    (float)(PSEUDO_UNFUSED(
                                        LANES64(v141).n64_f32[0] *
                                        LANES64(v159).n64_f32[0]))))) +
                        (float)(LANES64(v150).n64_f32[0] * v155)) +
                (float)(LANES64(v143).n64_f32[0] * v162));
    v172 = GameRoutine_1a0ccb0(
        v166 *
        (float)((float)(0x1.0000000000000p+0f - LANES64(v152).n64_f32[1]) -
                LANES64(v150).n64_f32[1]));
    v173 = v172 + GameRoutine_1a0ccb0(v167);
    v174 = v173 + GameRoutine_1a0ccb0(v169);
    v175 = GameRoutine_1a0ccb0(v171);
    v176 = v175 + GameRoutine_1a0ccb0(v168);
    v177 = v176 + GameRoutine_1a0ccb0(v170);
    v178 = GameRoutine_1a0ccb0(v237);
    v179 = v178 + GameRoutine_1a0ccb0(v236);
    v180 = v179 + GameRoutine_1a0ccb0(v238);
    *(float*)&v269_.v269 = v163 - v174;
    *((float*)&v269_.v269 + 1) = v165 - v177;
    v269_.v270 = v239 - v180;
    v269_.v271 = v174 + v163;
    v269_.v272 = v165 + v177;
    v269_.v273 = v239 + v180;
    physx_Gu_HeightFieldUtil_overlapAABBTriangles(
        (__int64)&v260_.v260, (float*)&v269_.v269, (__int64)&v240_.v240, 0x40u);
    v181 = v245_.v247;
    if (v245_.v247 != 0) {
      v182 = v245_.v248;
      if (v245_.v248 >= 2) {
        v183 = v245_.v248 - 1LL;
        if (v245_.v248 == 2) {
          v184 = 0xFFFFFFFFLL;
          v185 = 1;
        }
        else {
          LODWORD(v184) = -1;
          v221 = 0;
          v222 = -2;
          v185 = 1;
          do {
            v223 = v243[v185];
            v224 = v243[v185 - 1];
            if (COERCE_FLOAT(*(_QWORD*)(v224 + 40)) >
                COERCE_FLOAT(*(_QWORD*)(v223 + 40))) {
              v243[v185 - 1] = v223;
              v243[v185] = v224;
              if ((int)v185 - 2 >= 0) {
                v225 = &v243[v222 + 2];
                v226 = v221;
                do {
                  v228 = *(v225 - 1);
                  v227 = *v225;
                  if (COERCE_FLOAT(*(_QWORD*)(*v225 + 40)) >=
                      COERCE_FLOAT(*(_QWORD*)(v228 + 40))) {
                    break;
                  }
                  *v225 = v228;
                  *--v225 = v227;
                  --v226;
                } while (v226 > 0);
              }
            }
            v229 = v243[v185];
            v230 = v243[v185 + 1];
            if (COERCE_FLOAT(*(_QWORD*)(v229 + 40)) >
                COERCE_FLOAT(*(_QWORD*)(v230 + 40))) {
              v243[v185] = v230;
              v243[v185 + 1] = v229;
              if ((int)v185 - 1 >= 0) {
                v231 = &v243[(unsigned int)v221 + 1];
                v232 = v185;
                do {
                  v234 = *(v231 - 1);
                  v233 = *v231;
                  if (COERCE_FLOAT(*(_QWORD*)(*v231 + 40)) >=
                      COERCE_FLOAT(*(_QWORD*)(v234 + 40))) {
                    break;
                  }
                  *v231 = v234;
                  *--v231 = v233;
                  --v232;
                } while (v232 > 0);
              }
            }
            v185 += 2;
            v184 = (unsigned int)(v184 + 2);
            v221 += 2;
            v222 += 2;
          } while (v221 != (v183 & 0xFFFFFFFFFFFFFFFELL));
        }
        if ((v183 & 1) != 0) {
          v186 = v243[v185];
          v187 = v243[v185 - 1];
          if (COERCE_FLOAT(*(_QWORD*)(v187 + 40)) >
              COERCE_FLOAT(*(_QWORD*)(v186 + 40))) {
            v243[v185 - 1] = v186;
            v243[v185] = v187;
            if ((int)v185 - 2 >= 0) {
              v188 = v184 + 1;
              v189 = &v243[v184 + 1];
              do {
                v191 = *(v189 - 1);
                v190 = *v189;
                if (COERCE_FLOAT(*(_QWORD*)(*v189 + 40)) >=
                    COERCE_FLOAT(*(_QWORD*)(v191 + 40))) {
                  break;
                }
                *v189 = v191;
                *--v189 = v190;
                --v188;
              } while (v188 > 0);
            }
          }
        }
      }
      if ((_DWORD)v182 != 0) {
        v192 = 0;
        for (i = 0; i != v182; ++i) {
          v194 = (float32x4_t*)v243[i];
          v195 = v192;
          v197 = LANES128(v194[3]).n128_u32[0];
          v196 = LANES128(v194[3]).n128_u32[1];
          LANES128(v194[1]).n128_u64[1] = (unsigned __int64)v194;
          LANES128(v194[2]).n128_u64[0] = (unsigned __int64)v194;
          LANES128(v194[1]).n128_u64[0] = 0;
          v198 = v196 - v197;
          LANES128(v194[3]).n128_u32[2] = v198;
          while (v195 != 0) {
            v199 = *(_QWORD*)((char*)&v242[255] + v195);
            v195 -= 8;
            v200 = *(float32x4_t**)(v199 + 32);
            v201 = vmulq_f32(*v194, *v200);
            LANES128(v201).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v201, v201)).n128_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v201).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v201).n128_u64[0])))
                    .n64_f32[0] >= *(float*)&v244) {
              *(_QWORD*)(v199 + 16) = v194;
              LANES128(v200[1]).n128_u64[1] = (unsigned __int64)v194;
              LANES128(v194[2]).n128_u64[0] = (unsigned __int64)v200;
              *(_DWORD*)(*(_QWORD*)(v199 + 32) + 56LL) += v198;
              break;
            }
          }
          v192 += 8;
        }
        v202 = v245_.v246;
        for (j = 0; j != v182; ++j) {
          v204 = v243[j];
          if (v204 != 0 && *(_QWORD*)(v204 + 32) == v204) {
            while (*(_QWORD*)(v204 + 16) != 0) {
              v206 = v204;
              v204 = *(_QWORD*)(v204 + 16);
              v207 = *(unsigned int*)(v206 + 48);
              v208 = *(unsigned int*)(v206 + 52);
              if (v207 < v208) {
                v209 = *(_DWORD*)(v204 + 52);
                if (*(_DWORD*)(v204 + 48) < v209) {
                  do {
                    v210 = *(_DWORD*)(v204 + 48);
                    if (v210 < v209) {
                      do {
                        v211 = (float32x4_t*)(v202 +
                                              ((unsigned __int64)v210 << 6));
                        v212 = vsubq_f32(
                            v211[1], *(float32x4_t*)(v202 + (v207 << 6) + 16));
                        v213 = vmulq_f32(v212, v212);
                        LANES128(v213).n128_u64[0] =
                            LANES128_OF(vpaddq_f32(v213, v213)).n128_u64[0];
                        if (*(float*)v245_.v245 >
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v213).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v213).n128_u64[0])))
                                .n64_f32[0]) {
                          --v210;
                          v214 = v202 + ((unsigned __int64)(v209 - 1) << 6);
                          v215 = *(_QWORD*)(v214 + 40);
                          v216 = *(_DWORD*)(v214 + 48);
                          LANES128(v211[1]).n128_u64[1] = *(_QWORD*)(v214 + 24);
                          LANES128(v211[2]).n128_u64[1] = v215;
                          LANES128(*(v211)).n128_u64[1] = *(_QWORD*)(v214 + 8);
                          v217 = *(_QWORD*)v214;
                          LANES128(v211[1]).n128_u64[0] = *(_QWORD*)(v214 + 16);
                          LANES128(*(v211)).n128_u64[0] = v217;
                          v218 = *(_QWORD*)(v214 + 32);
                          LANES128(v211[3]).n128_u32[0] = v216;
                          LANES128(v211[2]).n128_u64[0] = v218;
                          v209 = *(_DWORD*)(v204 + 52) - 1;
                          *(_DWORD*)(v204 + 52) = v209;
                        }
                        ++v210;
                      } while (v210 < v209);
                      v208 = *(unsigned int*)(v206 + 52);
                    }
                    ++v207;
                  } while (v207 < v208);
                }
              }
            }
          }
        }
        v219 = v245_.v246;
        v181 = v245_.v247;
        v220 = v245_.v248;
      }
      else {
        v219 = v245_.v246;
        v220 = 0;
      }
      physx_Gu_MultiplePersistentContactManifold_addManifoldContactPoints(
          v243[36], v219, v181, (__int64)v243, v220, (__int64)v245_.v245, &v244,
          3);
    }
  }
  else {
    v48 = vaddq_f32(v44, v44);
    LANES64(v49).n64_u64[0] =
        LANES64_OF(
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1))
            .n64_u64[0];
    LANES64(v50).n64_u64[0] = LANES64_OF(vdup_laneq_s32(v44, 2)).n64_u64[0];
    v260_.v260 = LANES64_OF(vadd_f32(v22, v23)).n64_u64[0];
    LANES64(v51).n64_u64[0] =
        LANES64_OF(
            vmul_lane_f32(v49,
                          COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1))
            .n64_u64[0];
    LANES64(v52).n64_u64[0] =
        LANES64_OF(vmul_laneq_f32(v50, v48, 2)).n64_u64[0];
    LANES64(v53).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v49, LANES128(v48).n128_f32[0])).n64_u64[0];
    LANES64(v54).n64_u64[0] =
        LANES64_OF(vmul_n_f32(v50, LANES128(v48).n128_f32[0])).n64_u64[0];
    LANES64(v55).n64_u64[0] =
        LANES64_OF(
            vmul_lane_f32(v50,
                          COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1))
            .n64_u64[0];
    LANES64(v56).n64_u64[0] =
        LANES64_OF(vmul_lane_f32(
                       vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]), 0),
                       v45, 1))
            .n64_u64[0];
    LANES64(v57).n64_u64[0] =
        LANES64_OF(vmul_lane_f32(
                       vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]), 1),
                       v45, 1))
            .n64_u64[0];
    LANES64(v58).n64_u64[0] =
        LANES64_OF(vmul_lane_f32(vdup_laneq_s32(v48, 2), v45, 1)).n64_u64[0];
    LANES64(v59).n64_u64[0] =
        LANES64_OF(
            vsub_f32(
                COERCE_AS(float32x2_t, 0x3F8000003F800000LL),
                vdup_lane_s32(
                    vmul_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])),
                    0)))
            .n64_u64[0];
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vext_s8(vsub_f32(vsub_f32(COERCE_AS(float32x2_t,
                                                       0x3F8000003F800000LL),
                                             v51),
                                    v52),
                           vadd_f32(v53, v58), 4u))
            .n64_u64[0];
    *(int8x8_t*)&v60 = vext_s8(vsub_f32(v53, v58), vsub_f32(v59, v52), 4u);
    *((_QWORD*)&v60 + 1) = LANES64_OF(vadd_f32(v55, v56)).n64_u32[0];
    LANES128(v48).n128_u64[1] = LANES64_OF(vsub_f32(v54, v57)).n64_u32[0];
    v240_.v240 = v48;
    v240_.v241 = v60;
    *(int8x8_t*)&v60 = vext_s8(vadd_f32(v54, v57), vsub_f32(v55, v56), 4u);
    *((_QWORD*)&v60 + 1) = LANES64_OF(vsub_f32(v59, v51)).n64_u32[0];
    *(_OWORD*)v242 = v60;
    *(float32x4_t*)&v242[2] = v41;
    v61 = *(unsigned __int8*)(v21 + 62);
    LANES128(v252_.v252).n128_u64[0] =
        LANES64_OF(vmul_n_f32(vdup_n_s32(0x3D4CCCCDu), *(float*)&a9))
            .n64_u64[0];
    if (v61 != 0) {
      v62 = v21 + 56;
      v63 = v21 + 64;
      v64 = 0;
      do {
        while (1) {
          v65 = *(unsigned __int8*)(v62 + v64);
          v66 =
              LANES64_OF(
                  physx_Gu_SinglePersistentContactManifold_refreshContactPoints(
                      v63 + 400 * v65, &v240_.v240, (float32x2_t*)&v252_.v252))
                  .n64_u32[0];
          if (*(_DWORD*)(v63 + 400LL * (unsigned int)v65 + 384) == 0) {
            break;
          }
          *(_DWORD*)(v21 + 32 + 4 * v65) = v66;
          if (++v64 >= *(unsigned __int8*)(v21 + 62)) {
            return physx_Gu_MultiplePersistentContactManifold_addManifoldContactsToContactBuffer_501460(
                v21, a7, v266, v265, &v268);
          }
        }
        v67 = *(_BYTE*)(v21 + 62) - 1;
        *(_BYTE*)(v21 + 62) = v67;
        v68 = *(_BYTE*)(v62 + v67);
        *(_BYTE*)(v62 + v67) = v65;
        *(_BYTE*)(v62 + v64) = v68;
      } while (v64 < *(unsigned __int8*)(v21 + 62));
    }
  }
  return physx_Gu_MultiplePersistentContactManifold_addManifoldContactsToContactBuffer_501460(
      v21, a7, v266, v265, &v268);
}

__int64 physx_source_geomutils_src_pcm_5017e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int128* v12;
  _DWORD* v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  _DWORD* v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int128* v22;
  unsigned __int64 v23;
  _DWORD* v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int64 v28;
  unsigned int* v29;
  __int64 v30;
  unsigned int v31;
  _DWORD* v32;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned int* v35;
  _DWORD* v36;
  __int128* v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;

  if (a2 == 0) {
    *(_OWORD*)result = GameData_1a82dc0;
    *(_OWORD*)(result + 16) = GameData_1a82f20;
    goto LABEL_12;
  }
  v2 = *(_QWORD*)(a2 + 8);
  LODWORD(v3) = *(_DWORD*)(a2 + 32);
  *(_QWORD*)result = *(_QWORD*)a2;
  *(_QWORD*)(result + 8) = v2;
  v4 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(result + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(result + 24) = v4;
  if ((_DWORD)v3 == 0) {
  LABEL_12:
    LODWORD(v3) = 0;
    *(_BYTE*)(result + 62) = 0;
  LABEL_13:
    v3 = (unsigned int)v3;
    do {
      *(_BYTE*)(result + 56 + v3) = v3;
      ++v3;
    } while ((_DWORD)v3 != 6);
    return result;
  }
  v5 = (unsigned int*)(a2 + 48);
  v6 = result + 56;
  v7 = result + 64;
  if ((_DWORD)v3 == 1) {
    v8 = 0;
  }
  else {
    v18 = (_DWORD*)(result + 112);
    v19 = (_DWORD*)(result + 512);
    v8 = 0;
    do {
      v20 = *v5;
      v21 = v7 + 400 * v8;
      *(_BYTE*)(v6 + v8) = v8;
      *(_DWORD*)(v21 + 384) = v20;
      if ((_DWORD)v20 != 0) {
        v22 = (__int128*)(v5 + 8);
        v23 = 0;
        v24 = v18;
        do {
          v25 = *(v22 - 1);
          v26 = *v22;
          ++v23;
          *(_DWORD*)v24 = DWORDn(v25, sizeof(v25) / 4 - 1);
          DWORDn(v25, sizeof(v25) / 4 - 1) = 0;
          DWORDn(v26, sizeof(v26) / 4 - 1) = 0;
          *((_OWORD*)v24 - 3) = v25;
          *((_OWORD*)v24 - 2) = v26;
          v27 = v22[1];
          v22 += 3;
          *((_OWORD*)v24 - 1) = v27;
          v24 += 16;
        } while (v23 < *(unsigned int*)(v21 + 384));
      }
      v28 = 3 * v20;
      v29 = &v5[12 * v20 + 4];
      *(_BYTE*)(v6 + (v8 | 1)) = v8 | 1;
      v30 = v7 + 400 * (v8 | 1);
      v33 = *v29;
      v32 = v29 + 4;
      v31 = v33;
      *(_DWORD*)(v30 + 384) = v33;
      if (v33 != 0) {
        v34 = 0;
        v35 = &v5[4 * v28];
        v36 = v19;
        v37 = (__int128*)(v35 + 16);
        do {
          v38 = *(v37 - 2);
          v39 = *(v37 - 1);
          ++v34;
          *(_DWORD*)v36 = DWORDn(v38, sizeof(v38) / 4 - 1);
          DWORDn(v38, sizeof(v38) / 4 - 1) = 0;
          DWORDn(v39, sizeof(v39) / 4 - 1) = 0;
          *((_OWORD*)v36 - 3) = v38;
          *((_OWORD*)v36 - 2) = v39;
          v40 = *v37;
          v37 += 3;
          *((_OWORD*)v36 - 1) = v40;
          v36 += 16;
        } while (v34 < *(unsigned int*)(v30 + 384));
      }
      v5 = &v32[12 * v31];
      v8 += 2;
      v18 += 200;
      v19 += 200;
    } while (v8 != (v3 & 0xFFFFFFFE));
  }
  if ((v3 & 1) != 0) {
    *(_BYTE*)(v6 + v8) = v8;
    v9 = *v5;
    v10 = v7 + 400 * v8;
    *(_DWORD*)(v10 + 384) = *v5;
    if (v9 != 0) {
      v11 = 0;
      v12 = (__int128*)(v5 + 12);
      v13 = (_DWORD*)(result + 400 * v8 + 112);
      do {
        v14 = *(v12 - 2);
        ++v11;
        v15 = v14;
        DWORDn(v15, sizeof(v15) / 4 - 1) = 0;
        *((_OWORD*)v13 - 3) = v15;
        v16 = *(v12 - 1);
        v17 = *v12;
        *(_DWORD*)v13 = DWORDn(v14, sizeof(v14) / 4 - 1);
        v12 += 3;
        DWORDn(v16, sizeof(v16) / 4 - 1) = 0;
        *((_OWORD*)v13 - 2) = v16;
        *((_OWORD*)v13 - 1) = v17;
        v13 += 16;
      } while (v11 < *(unsigned int*)(v10 + 384));
    }
  }
  *(_BYTE*)(result + 62) = v3;
  if ((unsigned int)v3 <= 5) {
    goto LABEL_13;
  }
  return result;
}

#pragma GCC visibility pop
