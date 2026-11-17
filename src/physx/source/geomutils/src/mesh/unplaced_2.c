#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

float GameRoutine_1a0ccb0(float);
__int64 physx_source_geomutils_src_mesh_4ab960(__int64 a1, unsigned int a2,
                                               char a3);

__int64 physx_source_geomutils_src_mesh_4ab960(__int64 a1, unsigned int a2,
                                               char a3)
{
  __int64 v3;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned __int16* v11;
  __int64 v12;
  float v13;
  float v14;
  float32x2_t* v15;
  float v16;
  float* v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float v30;
  float32x4_t v31;
  float32x4_t v32;
  int v33;
  float32x4_t v34;
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
  _BOOL4 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v62;
  unsigned __int8 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  _BOOL4 v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  _BOOL4 v83;
  float v84;
  float v85;
  float v86;
  __int64 result;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  _BOOL4 v95;
  float v96;
  float v97;
  float v98;
  float v99;
  int v100;
  __int64 v101;
  float* v102;
  int v103;
  bool v104;
  __int64 v105;
  float v106;
  float* v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  _BOOL4 v123;
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
  _BOOL4 v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  _BOOL4 v164;
  float v165;
  float v166;
  float v167;
  float v168;
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
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  unsigned __int32 v209;
  float v210;
  float v211;
  struct __attribute__((packed)) {
    float32x4_t v212;
    float32x4_t v213;
    unsigned __int64 v214;
    unsigned __int32 v215;
    unsigned __int64 v216;
    unsigned __int32 v217;
    unsigned __int64 v218;
    unsigned __int64 v219;
  } g_;

  v3 = *(_QWORD*)(a1 + 176);
  if (v3 != 0) {
    v7 = (unsigned int*)(v3 + 12LL * a2);
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
  }
  else {
    v11 = (unsigned __int16*)(*(_QWORD*)(a1 + 184) + 6LL * a2);
    v8 = *v11;
    v9 = v11[1];
    v10 = v11[2];
  }
  v12 = *(_QWORD*)(a1 + 192);
  v13 = *(float*)(a1 + 264);
  v14 = *(float*)(a1 + 260);
  v15 = (float32x2_t*)(v12 + 12LL * v8);
  v16 = *(float*)(a1 + 268);
  v17 = (float*)(v12 + 12LL * v9);
  v18 = (float*)(v12 + 12LL * v10);
  v19 = (float)((float)(PSEUDO_UNFUSED(LANES64(*(v15)).n64_f32[1] * v13)) +
                (float)(LANES64(*(v15)).n64_f32[0] * v14)) +
        (float)(LANES64(v15[1]).n64_f32[0] * v16);
  v20 = (float)((float)(PSEUDO_UNFUSED(v13 * v17[1])) + (float)(*v17 * v14)) +
        (float)(v17[2] * v16);
  v21 = v13 * v18[1];
  if (v19 >= v20) {
    v19 = v20;
  }
  v22 = (float)(v21 + (float)(*v18 * v14)) + (float)(v18[2] * v16);
  if (v19 >= v22) {
    v19 = v22;
  }
  v23 = *(float*)(a1 + 272);
  if (v19 >= (float)(*(float*)(a1 + 336) + v23)) {
    return 0;
  }
  v24 = *(float32x4_t*)(a1 + 400);
  v25 = *(float32x4_t*)(a1 + 412);
  v26 = *(float32x4_t*)(a1 + 436);
  v27 = *(float32x4_t*)(a1 + 424);
  v28 = vaddq_f32(
      v26,
      vaddq_f32(
          vaddq_f32(
              vmulq_n_f32(v24, COERCE_FLOAT(*(_OWORD*)LANES64(*(v15)).n64_u64)),
              vmulq_lane_f32(
                  v25, COERCE_AS(float32x2_t, LANES64(*(v15)).n64_u64[0]), 1)),
          vmulq_laneq_f32(v27, *(float32x4_t*)LANES64(*(v15)).n64_u64, 2)));
  v29 = *(float32x4_t*)v17;
  v30 = LANES128(v28).n128_f32[1];
  g_.v214 = LANES128(v28).n128_u64[0];
  g_.v215 = LANES128(v28).n128_u32[2];
  v31 = vaddq_f32(
      v26,
      vaddq_f32(
          vmulq_laneq_f32(v27, v29, 2),
          vaddq_f32(
              vmulq_n_f32(v24, LANES128(v29).n128_f32[0]),
              vmulq_lane_f32(
                  v25, COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1))));
  v32 = *(float32x4_t*)v18;
  v33 = *(_DWORD*)(a1 + 280);
  g_.v216 = LANES128(v31).n128_u64[0];
  g_.v217 = LANES128(v31).n128_u32[2];
  g_.v212 = v31;
  g_.v213 = v28;
  v34 = vaddq_f32(
      v26,
      vaddq_f32(
          vmulq_laneq_f32(v27, v32, 2),
          vaddq_f32(
              vmulq_n_f32(v24, LANES128(v32).n128_f32[0]),
              vmulq_lane_f32(
                  v25, COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]), 1))));
  v211 = LANES128(v34).n128_f32[0];
  g_.v218 = LANES128(v34).n128_u64[0];
  g_.v219 = LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0];
  LANES128(v34).n128_f32[0] = LANES128_OF(vsubq_f32(v34, v28)).n128_f32[0];
  v35 = v23 * *(float*)(a1 + 460);
  v208 = v23 * *(float*)(a1 + 464);
  v36 = v23 * *(float*)(a1 + 468);
  LANES128(v26).n128_f32[0] = LANES128_OF(vsubq_f32(v31, v28)).n128_f32[0];
  v37 =
      (float)((float)(LANES128(v31).n128_f32[1] - LANES128(v28).n128_f32[1]) *
              (float)(LANES128(v34).n128_f32[2] - LANES128(v28).n128_f32[2])) -
      (float)(PSEUDO_UNFUSED(
          (float)(LANES128(v31).n128_f32[2] - LANES128(v28).n128_f32[2]) *
          (float)(LANES128(v34).n128_f32[1] - LANES128(v28).n128_f32[1])));
  v38 = (float)((float)(LANES128(v31).n128_f32[2] - LANES128(v28).n128_f32[2]) *
                LANES128(v34).n128_f32[0]) -
        (float)(PSEUDO_UNFUSED(
            LANES128(v26).n128_f32[0] *
            (float)(LANES128(v34).n128_f32[2] - LANES128(v28).n128_f32[2])));
  v39 = (float)(PSEUDO_UNFUSED((float)-(float)(LANES128(v31).n128_f32[1] -
                                               LANES128(v28).n128_f32[1]) *
                               LANES128(v34).n128_f32[0])) +
        (float)(LANES128(v26).n128_f32[0] *
                (float)(LANES128(v34).n128_f32[1] - LANES128(v28).n128_f32[1]));
  v40 = v208 * v38;
  if (v33 != 0) {
    v41 = (float)(v40 + (float)(v37 * v35)) + (float)(v39 * v36);
    if (v41 >= 0x0.0p+0f) {
      return 0;
    }
  }
  else {
    v41 = (float)(v40 + (float)(v35 * v37)) + (float)(v36 * v39);
  }
  v202 = LANES128(v31).n128_f32[1];
  v203 = v36;
  v209 = LANES128(v28).n128_u32[2];
  v210 = v35;
  v204 = LANES128(v34).n128_f32[2];
  v205 = LANES128(v31).n128_f32[2];
  v201 = LANES128(v34).n128_f32[1];
  v42 = (float)((float)(PSEUDO_UNFUSED(LANES128(v28).n128_f32[1] * v38)) +
                (float)(LANES128(v28).n128_f32[0] * v37)) +
        (float)(LANES128(v28).n128_f32[2] * v39);
  v43 = (float)((float)(PSEUDO_UNFUSED(LANES128(v31).n128_f32[1] * v38)) +
                (float)(LANES128(v31).n128_f32[0] * v37)) +
        (float)(LANES128(v31).n128_f32[2] * v39);
  v44 = (float)((float)(PSEUDO_UNFUSED(LANES128(v34).n128_f32[1] * v38)) +
                (float)(v211 * v37)) +
        (float)(LANES128(v34).n128_f32[2] * v39);
  if (v42 >= v43) {
    v45 = (float)((float)(PSEUDO_UNFUSED(LANES128(v31).n128_f32[1] * v38)) +
                  (float)(LANES128(v31).n128_f32[0] * v37)) +
          (float)(LANES128(v31).n128_f32[2] * v39);
  }
  else {
    v45 = (float)((float)(PSEUDO_UNFUSED(LANES128(v28).n128_f32[1] * v38)) +
                  (float)(LANES128(v28).n128_f32[0] * v37)) +
          (float)(LANES128(v28).n128_f32[2] * v39);
  }
  if (v42 <= v43) {
    v42 = (float)((float)(PSEUDO_UNFUSED(LANES128(v31).n128_f32[1] * v38)) +
                  (float)(LANES128(v31).n128_f32[0] * v37)) +
          (float)(LANES128(v31).n128_f32[2] * v39);
  }
  if (v45 >= v44) {
    v46 = (float)((float)(PSEUDO_UNFUSED(LANES128(v34).n128_f32[1] * v38)) +
                  (float)(v211 * v37)) +
          (float)(LANES128(v34).n128_f32[2] * v39);
  }
  else {
    v46 = v45;
  }
  if (v42 <= v44) {
    v47 = (float)((float)(PSEUDO_UNFUSED(LANES128(v34).n128_f32[1] * v38)) +
                  (float)(v211 * v37)) +
          (float)(LANES128(v34).n128_f32[2] * v39);
  }
  else {
    v47 = v42;
  }
  v48 = GameRoutine_1a0ccb0(v37);
  v49 = *(float*)(a1 + 448);
  v50 =
      (float)(PSEUDO_UNFUSED(GameRoutine_1a0ccb0(v38) * *(float*)(a1 + 452))) +
      (float)(v48 * v49);
  v51 = v50 + (float)(GameRoutine_1a0ccb0(v39) * *(float*)(a1 + 456));
  v52 = v51 - v46;
  v53 = (float)-v51 - v47;
  v55 = (float)(v51 - v46) >= 0x0.0p+0f & v53 <= 0x0.0p+0f;
  if (GameRoutine_1a0ccb0(v41) >= 0x1.0c6f7a0000000p-20f) {
    v58 = (float)(-0x1.0000000000000p+0f / v41) * v53;
    v59 = (float)(-0x1.0000000000000p+0f / v41) * v52;
    if (v58 >= v59) {
      v60 = (float)(-0x1.0000000000000p+0f / v41) * v52;
    }
    else {
      v60 = (float)(-0x1.0000000000000p+0f / v41) * v53;
    }
    if (v58 <= v59) {
      v58 = (float)(-0x1.0000000000000p+0f / v41) * v52;
    }
    if (v60 > 0x1.fffffe0000000p+127f | v58 < -0x1.fffffe0000000p+127f) {
      return 0;
    }
    v56 = fminf(v58, 0x1.fffffe0000000p+127f);
    v57 = fmaxf(v60, -0x1.fffffe0000000p+127f);
  }
  else {
    if (!v55) {
      return 0;
    }
    v56 = 0x1.fffffe0000000p+127f;
    v57 = -0x1.fffffe0000000p+127f;
  }
  v62 = *(float*)(a1 + 472);
  v63 = LANES64_OF(vmovn_s32(vcgtq_f32(g_.v213, g_.v212))).n64_u8[0];
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(g_.v212, g_.v213))).n64_u8[0] & 1) != 0) {
    v64 = LANES128(g_.v213).n128_f32[0];
  }
  else {
    v64 = LANES128(g_.v212).n128_f32[0];
  }
  if ((v63 & 1) != 0) {
    v65 = LANES128(g_.v213).n128_f32[0];
  }
  else {
    v65 = LANES128(g_.v212).n128_f32[0];
  }
  if (v64 >= v211) {
    v64 = v211;
  }
  if (v65 <= v211) {
    v65 = v211;
  }
  v66 = *(float*)(a1 + 448);
  v67 = v66 - v64;
  v68 = (float)-v66 - v65;
  v70 = (float)(v66 - v64) >= 0x0.0p+0f & v68 <= 0x0.0p+0f;
  v71 = v202;
  if (GameRoutine_1a0ccb0(v210) >= 0x1.0c6f7a0000000p-20f) {
    v72 = -(float)(v62 * v68);
    v73 = -(float)(v62 * v67);
    if (v72 >= v73) {
      v74 = -(float)(v62 * v67);
    }
    else {
      v74 = -(float)(v62 * v68);
    }
    if (v72 <= v73) {
      v72 = -(float)(v62 * v67);
    }
    if (v74 > v56 | v72 < v57) {
      return 0;
    }
    if (v72 < v56) {
      v56 = v72;
    }
    if (v74 > v57) {
      v57 = v74;
    }
  }
  else if (!v70) {
    return 0;
  }
  v76 = *(float*)(a1 + 476);
  if (v30 >= v202) {
    v77 = v202;
  }
  else {
    v77 = v30;
  }
  if (v30 <= v202) {
    v78 = v202;
  }
  else {
    v78 = v30;
  }
  if (v77 >= v201) {
    v77 = v201;
  }
  if (v78 <= v201) {
    v78 = v201;
  }
  v79 = *(float*)(a1 + 452);
  v80 = v79 - v77;
  v81 = (float)-v79 - v78;
  v83 = (float)(v79 - v77) >= 0x0.0p+0f & v81 <= 0x0.0p+0f;
  if (GameRoutine_1a0ccb0(v208) >= 0x1.0c6f7a0000000p-20f) {
    v85 = -(float)(v76 * v81);
    v86 = -(float)(v76 * v80);
    result = 0;
    if (v85 >= v86) {
      v88 = -(float)(v76 * v80);
    }
    else {
      v88 = -(float)(v76 * v81);
    }
    if (v85 <= v86) {
      v85 = -(float)(v76 * v80);
    }
    if (v88 > v56 || v85 < v57) {
      return result;
    }
    v84 = *(float*)&v209;
    if (v85 < v56) {
      v56 = v85;
    }
    if (v88 > v57) {
      v57 = v88;
    }
  }
  else {
    v84 = *(float*)&v209;
    if (!v83) {
      return 0;
    }
  }
  v89 = v205;
  v90 = *(float*)(a1 + 480);
  if (v84 >= v205) {
    v91 = v205;
  }
  else {
    v91 = v84;
  }
  if (v84 > v205) {
    v89 = v84;
  }
  if (v91 >= v204) {
    v91 = v204;
  }
  if (v89 <= v204) {
    v89 = v204;
  }
  v92 = *(float*)(a1 + 456);
  v93 = v92 - v91;
  v94 = (float)-v92 - v89;
  v95 = (float)(v92 - v91) >= 0x0.0p+0f & v94 <= 0x0.0p+0f;
  if (GameRoutine_1a0ccb0(v203) < 0x1.0c6f7a0000000p-20f) {
    v96 = *(float*)&v209;
    if (!v95) {
      return 0;
    }
    goto LABEL_132;
  }
  v97 = -(float)(v90 * v94);
  v98 = -(float)(v90 * v93);
  result = 0;
  if (v97 >= v98) {
    v99 = -(float)(v90 * v93);
  }
  else {
    v99 = -(float)(v90 * v94);
  }
  if (v97 <= v98) {
    v97 = -(float)(v90 * v93);
  }
  if (v99 <= v56 && v97 >= v57) {
    v96 = *(float*)&v209;
    if (v97 < v56) {
      v56 = v97;
    }
    if (v99 > v57) {
      v57 = v99;
    }
  LABEL_132:
    v100 = v95 && v83;
    v101 = -3;
    v102 = (float*)&g_.v215;
    v103 = v100 & v70 & v55;
    v196 = v202 * 0x0.0p+0f;
    v197 = v30 * 0x0.0p+0f;
    v200 = v30;
    v195 = v201 * 0x0.0p+0f;
    while (1) {
      v105 = v101 + 4;
      v106 = *(v102 - 2);
      v206 = v56;
      v207 = v57;
      if (v101 == -1) {
        v105 = 0;
      }
      v107 = (float*)&g_.v214 + 3 * v105;
      v108 = *v107;
      v109 = v107[1] - *(v102 - 1);
      v110 = v107[2] - *v102;
      if ((float)((float)(PSEUDO_UNFUSED(v110 * v110)) +
                  (float)(v109 * v109)) >= 0x1.0c6f7a0000000p-20f) {
        v198 = *(v102 - 2);
        v199 = *v107;
        v111 = (float)((float)(LANES128(g_.v213).n128_f32[0] * 0x0.0p+0f) -
                       (float)(PSEUDO_UNFUSED(v110 * v30))) +
               (float)(v96 * v109);
        v112 = (float)((float)(LANES128(g_.v212).n128_f32[0] * 0x0.0p+0f) -
                       (float)(PSEUDO_UNFUSED(v110 * v71))) +
               (float)(v205 * v109);
        v113 = (float)((float)(v211 * 0x0.0p+0f) -
                       (float)(PSEUDO_UNFUSED(v110 * v201))) +
               (float)(v204 * v109);
        if (v111 >= v112) {
          v114 = (float)((float)(LANES128(g_.v212).n128_f32[0] * 0x0.0p+0f) -
                         (float)(PSEUDO_UNFUSED(v110 * v71))) +
                 (float)(v205 * v109);
        }
        else {
          v114 = (float)((float)(LANES128(g_.v213).n128_f32[0] * 0x0.0p+0f) -
                         (float)(PSEUDO_UNFUSED(v110 * v30))) +
                 (float)(v96 * v109);
        }
        if (v111 <= v112) {
          v111 = (float)((float)(LANES128(g_.v212).n128_f32[0] * 0x0.0p+0f) -
                         (float)(PSEUDO_UNFUSED(v110 * v71))) +
                 (float)(v205 * v109);
        }
        if (v114 >= v113) {
          v115 = (float)((float)(v211 * 0x0.0p+0f) -
                         (float)(PSEUDO_UNFUSED(v110 * v201))) +
                 (float)(v204 * v109);
        }
        else {
          v115 = v114;
        }
        if (v111 <= v113) {
          v116 = (float)((float)(v211 * 0x0.0p+0f) -
                         (float)(PSEUDO_UNFUSED(v110 * v201))) +
                 (float)(v204 * v109);
        }
        else {
          v116 = v111;
        }
        v117 = GameRoutine_1a0ccb0(0x0.0p+0f);
        v118 = *(float*)(a1 + 448);
        v119 = (float)(PSEUDO_UNFUSED(GameRoutine_1a0ccb0(-v110) *
                                      *(float*)(a1 + 452))) +
               (float)(v117 * v118);
        v120 = v119 + (float)(GameRoutine_1a0ccb0(v109) * *(float*)(a1 + 456));
        v121 = (float)-v120 - v116;
        v122 = v120 - v115;
        v123 = v122 >= 0x0.0p+0f & v121 <= 0x0.0p+0f;
        v124 = (float)((float)(v210 * 0x0.0p+0f) -
                       (float)(PSEUDO_UNFUSED(v110 * v208))) +
               (float)(v203 * v109);
        if (GameRoutine_1a0ccb0(v124) >= 0x1.0c6f7a0000000p-20f) {
          v140 = (float)(-0x1.0000000000000p+0f / v124) * v121;
          v141 = (float)(-0x1.0000000000000p+0f / v124) * v122;
          if (v140 >= v141) {
            v142 = (float)(-0x1.0000000000000p+0f / v124) * v122;
          }
          else {
            v142 = (float)(-0x1.0000000000000p+0f / v124) * v121;
          }
          if (v140 <= v141) {
            v140 = (float)(-0x1.0000000000000p+0f / v124) * v122;
          }
          v144 = v206;
          v143 = v207;
          if (v142 > v206 | v140 < v207) {
            return 0;
          }
          v96 = *(float*)&v209;
          v71 = v202;
          v103 &= v123;
          if (v140 < v206) {
            v144 = v140;
          }
          if (v142 > v207) {
            v143 = v142;
          }
          v206 = v144;
          v207 = v143;
          v30 = v200;
          v125 = v199 - v198;
          if ((float)((float)((float)(v110 * v110) + 0x0.0p+0f) +
                      (float)(v125 * v125)) < 0x1.0c6f7a0000000p-20f) {
            goto LABEL_201;
          }
        LABEL_155:
          v126 = (float)(v197 + (float)(LANES128(g_.v213).n128_f32[0] * v110)) -
                 (float)(v96 * v125);
          v127 = (float)(v196 + (float)(LANES128(g_.v212).n128_f32[0] * v110)) -
                 (float)(v205 * v125);
          v128 = (float)(v195 + (float)(v211 * v110)) - (float)(v204 * v125);
          if (v126 >= v127) {
            v129 =
                (float)(v196 + (float)(LANES128(g_.v212).n128_f32[0] * v110)) -
                (float)(v205 * v125);
          }
          else {
            v129 =
                (float)(v197 + (float)(LANES128(g_.v213).n128_f32[0] * v110)) -
                (float)(v96 * v125);
          }
          if (v126 <= v127) {
            v126 =
                (float)(v196 + (float)(LANES128(g_.v212).n128_f32[0] * v110)) -
                (float)(v205 * v125);
          }
          if (v129 >= v128) {
            v130 = (float)(v195 + (float)(v211 * v110)) - (float)(v204 * v125);
          }
          else {
            v130 = v129;
          }
          if (v126 <= v128) {
            v131 = (float)(v195 + (float)(v211 * v110)) - (float)(v204 * v125);
          }
          else {
            v131 = v126;
          }
          v132 = GameRoutine_1a0ccb0(v110);
          v133 = *(float*)(a1 + 448);
          v134 = (float)(PSEUDO_UNFUSED(GameRoutine_1a0ccb0(0x0.0p+0f) *
                                        *(float*)(a1 + 452))) +
                 (float)(v132 * v133);
          v135 =
              v134 + (float)(GameRoutine_1a0ccb0(-v125) * *(float*)(a1 + 456));
          v136 = (float)-v135 - v131;
          v137 = v135 - v130;
          v138 = (float)(v135 - v130) >= 0x0.0p+0f & v136 <= 0x0.0p+0f;
          v139 = (float)((float)(PSEUDO_UNFUSED(v208 * 0x0.0p+0f)) +
                         (float)(v210 * v110)) -
                 (float)(v203 * v125);
          if (GameRoutine_1a0ccb0(v139) >= 0x1.0c6f7a0000000p-20f) {
            v30 = v200;
            v71 = v202;
            v146 = (float)(-0x1.0000000000000p+0f / v139) * v136;
            v147 = (float)(-0x1.0000000000000p+0f / v139) * v137;
            if (v146 >= v147) {
              v148 = (float)(-0x1.0000000000000p+0f / v139) * v137;
            }
            else {
              v148 = (float)(-0x1.0000000000000p+0f / v139) * v136;
            }
            if (v146 <= v147) {
              v146 = (float)(-0x1.0000000000000p+0f / v139) * v137;
            }
            v150 = v206;
            v149 = v207;
            if (v148 > v206 | v146 < v207) {
              return 0;
            }
            v96 = *(float*)&v209;
            v103 &= v138;
            if (v146 < v206) {
              v150 = v146;
            }
            if (v148 > v207) {
              v149 = v148;
            }
            v206 = v150;
            v207 = v149;
          }
          else {
            v30 = v200;
            v96 = *(float*)&v209;
            v71 = v202;
            if (!v138) {
              return 0;
            }
          }
          goto LABEL_201;
        }
        v30 = v200;
        v96 = *(float*)&v209;
        v71 = v202;
        v106 = v198;
        v108 = v199;
        if (!v123) {
          return 0;
        }
      }
      v125 = v108 - v106;
      if ((float)((float)((float)(v110 * v110) + 0x0.0p+0f) +
                  (float)(v125 * v125)) >= 0x1.0c6f7a0000000p-20f) {
        goto LABEL_155;
      }
    LABEL_201:
      if ((float)((float)(PSEUDO_UNFUSED(v125 * v125)) + (float)(v109 * v109)) <
          0x1.0c6f7a0000000p-20f) {
        v56 = v206;
        v57 = v207;
      }
      else {
        v152 = (float)((float)(PSEUDO_UNFUSED(v125 * v30)) -
                       (float)(LANES128(g_.v213).n128_f32[0] * v109)) +
               (float)(v96 * 0x0.0p+0f);
        v153 = (float)((float)(PSEUDO_UNFUSED(v125 * v71)) -
                       (float)(LANES128(g_.v212).n128_f32[0] * v109)) +
               (float)(v205 * 0x0.0p+0f);
        v154 = (float)((float)(PSEUDO_UNFUSED(v125 * v201)) -
                       (float)(v211 * v109)) +
               (float)(v204 * 0x0.0p+0f);
        if (v152 >= v153) {
          v155 = (float)((float)(PSEUDO_UNFUSED(v125 * v71)) -
                         (float)(LANES128(g_.v212).n128_f32[0] * v109)) +
                 (float)(v205 * 0x0.0p+0f);
        }
        else {
          v155 = (float)((float)(PSEUDO_UNFUSED(v125 * v30)) -
                         (float)(LANES128(g_.v213).n128_f32[0] * v109)) +
                 (float)(v96 * 0x0.0p+0f);
        }
        if (v152 <= v153) {
          v152 = (float)((float)(PSEUDO_UNFUSED(v125 * v71)) -
                         (float)(LANES128(g_.v212).n128_f32[0] * v109)) +
                 (float)(v205 * 0x0.0p+0f);
        }
        if (v155 >= v154) {
          v156 = (float)((float)(PSEUDO_UNFUSED(v125 * v201)) -
                         (float)(v211 * v109)) +
                 (float)(v204 * 0x0.0p+0f);
        }
        else {
          v156 = v155;
        }
        if (v152 <= v154) {
          v157 = (float)((float)(PSEUDO_UNFUSED(v125 * v201)) -
                         (float)(v211 * v109)) +
                 (float)(v204 * 0x0.0p+0f);
        }
        else {
          v157 = v152;
        }
        v158 = GameRoutine_1a0ccb0(-v109);
        v159 = *(float*)(a1 + 448);
        v160 = (float)(PSEUDO_UNFUSED(GameRoutine_1a0ccb0(v125) *
                                      *(float*)(a1 + 452))) +
               (float)(v158 * v159);
        v161 = v160 +
               (float)(GameRoutine_1a0ccb0(0x0.0p+0f) * *(float*)(a1 + 456));
        v162 = (float)-v161 - v157;
        v163 = v161 - v156;
        v164 = (float)(v161 - v156) >= 0x0.0p+0f & v162 <= 0x0.0p+0f;
        v165 = (float)((float)(PSEUDO_UNFUSED(v208 * v125)) -
                       (float)(v210 * v109)) +
               (float)(v203 * 0x0.0p+0f);
        if (GameRoutine_1a0ccb0(v165) >= 0x1.0c6f7a0000000p-20f) {
          v56 = v206;
          v57 = v207;
          v166 = (float)(-0x1.0000000000000p+0f / v165) * v162;
          v167 = (float)(-0x1.0000000000000p+0f / v165) * v163;
          if (v166 >= v167) {
            v168 = (float)(-0x1.0000000000000p+0f / v165) * v163;
          }
          else {
            v168 = (float)(-0x1.0000000000000p+0f / v165) * v162;
          }
          if (v166 <= v167) {
            v166 = (float)(-0x1.0000000000000p+0f / v165) * v163;
          }
          if (v168 > v206 | v166 < v207) {
            return 0;
          }
          v30 = v200;
          v96 = *(float*)&v209;
          v103 &= v164;
          if (v166 < v206) {
            v56 = v166;
          }
          if (v168 > v207) {
            v57 = v168;
          }
        }
        else {
          v30 = v200;
          v56 = v206;
          v57 = v207;
          v96 = *(float*)&v209;
          if (!v164) {
            return 0;
          }
        }
      }
      v104 = __CFADD__(v101++, 1);
      v102 += 3;
      if (v104) {
        result = 0;
        if (v57 > 0x1.0000000000000p+0f || v56 < 0x0.0p+0f) {
          return result;
        }
        if (((v57 > 0x0.0p+0f) | v103 & 1) != 0) {
          v170 = *(float*)(a1 + 272);
          v171 = 0x0.0p+0f;
          v172 = *(float*)(a1 + 484);
          v173 = *(float*)(a1 + 488);
          *(_DWORD*)(a1 + 276) = a2;
          if (v57 > 0x0.0p+0f) {
            v171 = v57;
          }
          *(float*)(a1 + 292) = v30;
          *(float*)(a1 + 296) = v96;
          *(float*)(a1 + 304) = v71;
          v174 = v171 * v170;
          *(float*)(a1 + 272) = v174;
          *(float*)(a1 + 472) = v172 * (float)(0x1.0000000000000p+0f / v174);
          v175 = *(float*)(a1 + 492);
          *(float*)(a1 + 476) = v173 * (float)(0x1.0000000000000p+0f / v174);
          *(float*)(a1 + 480) = (float)(0x1.0000000000000p+0f / v174) * v175;
          *(_DWORD*)(a1 + 300) = LANES128(g_.v212).n128_u32[0];
          *(_DWORD*)(a1 + 288) = LANES128(g_.v213).n128_u32[0];
          *(float*)(a1 + 308) = v205;
          *(float*)(a1 + 312) = v211;
          *(float*)(a1 + 316) = v201;
          *(float*)(a1 + 320) = v204;
          if ((a3 & 1) != 0) {
            v176 = v174 * *(float*)(a1 + 348);
            v177 = *(float*)(a1 + 268);
            v178 = v174 * *(float*)(a1 + 264);
            v179 = (float)(PSEUDO_UNFUSED(v174 * *(float*)(a1 + 340))) +
                   *(float*)(a1 + 352);
            v180 = (float)(PSEUDO_UNFUSED(v174 * *(float*)(a1 + 344))) +
                   *(float*)(a1 + 356);
            v181 = *(float*)(a1 + 360);
            *(float*)(a1 + 64) = v179;
            *(float*)(a1 + 68) = v180;
            v182 = v176 + v181;
            v183 = *(float*)(a1 + 260);
            *(float*)(a1 + 72) = v182;
            v184 = v174 * v183;
            v185 = (float)(v174 * v177) * 0x1.0000000000000p-1f;
            v186 = *(float*)(a1 + 244);
            v187 = (float)(PSEUDO_UNFUSED(v178 * 0x1.0000000000000p-1f)) +
                   *(float*)(a1 + 240);
            *(float*)(a1 + 32) =
                (float)(PSEUDO_UNFUSED(v184 * 0x1.0000000000000p-1f)) +
                *(float*)(a1 + 236);
            *(float*)(a1 + 36) = v187;
            v188 = v185 + v186;
            v189 = *(float*)(a1 + 128);
            v190 = *(float*)(a1 + 132);
            *(float*)(a1 + 40) = v188;
            v191 = *(float*)(a1 + 160);
            v192 = *(float*)(a1 + 148);
            v193 = (float)((float)(PSEUDO_UNFUSED(v180 * *(float*)(a1 + 164))) +
                           (float)(v179 * v189)) +
                   (float)(v182 * *(float*)(a1 + 152));
            v194 = (float)((float)(PSEUDO_UNFUSED(v180 * v190)) +
                           (float)(v179 * *(float*)(a1 + 144))) +
                   (float)(v182 * *(float*)(a1 + 168));
            *(float*)(a1 + 48) = v193;
            *(float*)(a1 + 52) = v194;
            *(float*)(a1 + 56) = (float)((float)(PSEUDO_UNFUSED(v180 * v192)) +
                                         (float)(v179 * v191)) +
                                 (float)(v182 * *(float*)(a1 + 136));
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
