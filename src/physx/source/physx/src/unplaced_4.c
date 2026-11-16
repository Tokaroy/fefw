#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
physx_NpArticulationLink_getGlobalPose(PSEUDO_X8, __int64, __int64);
float GameRoutine_1a09fb0(float);
float GameRoutine_1a09fc0(float);
__int64 physx_source_physx_src_2f19f0(__int64 result, __int64 a2);

__int64 physx_source_physx_src_2f19f0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  float v5;
  float v6;
  __int64 v7;
  double v8;
  float v9;
  __int64 v10;
  float v11;
  __int64 (*v12)(__int64, float, float, float, float, double, float, float);
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
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
  __int64 (*v34)(__int64, __int64, float, float, float, float, float, float);
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
  __int64 (*v55)(__int64, __int64, float, float, float, float, float, float);
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
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
  float v78;
  float v79;
  float v80;
  bool v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  __int64 v86;
  __int64 (*v87)(__int64, __int64, __int64, __int64, float, float, float, float,
                 float, float, float, float);
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
  bool v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 (*v106)(__int64, __int64, __int64, __int64, float, float, float,
                  float, float, float, float, float);
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  bool v113;
  float v114;
  float v115;
  float v116;
  __int64 v117;
  __int64 v118;
  __int64 (*v119)(__int64, __int64, __int64, __int64, float, float, float,
                  float, float, float, float, float);
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
  float v141;
  struct {
    float v142;
    float v143;
    float v144;
  } v142_;
  float v145;
  float v146;
  float v147;
  float v148;
  __int64 v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  __int64 v155;
  float v156;
  struct {
    float v157;
    float v158;
    float v159;
    float v160;
    __int64 v161;
    float v162;
    float v163;
    float v164;
    float v165;
    float v166;
    float v167;
    float v168;
    float v169;
  } v157_;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(result + 272);
  if (v2 != 0) {
    v4 = result;
    physx_NpArticulationLink_getGlobalPose((void*)((__int64)&v157_.v157),
                                           result, a2),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(**(_QWORD**)(v4 + 264) + 88LL))(
        *(_QWORD*)(v4 + 264)),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = (float)(v157_.v160 * v157_.v160) + -0x1.0000000000000p-1f;
    v6 = (float)((float)(PSEUDO_UNFUSED(
                     (float)(*((float*)&v155 + 1) + *((float*)&v155 + 1)) *
                     v157_.v158)) +
                 (float)(v157_.v157 *
                         (float)(*(float*)&v155 + *(float*)&v155))) +
         (float)(v157_.v159 * (float)(v156 + v156));
    v157_.v167 =
        *(float*)&v157_.v161 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v158 * (float)(v156 + v156)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v159 *
                                        (float)(*((float*)&v155 + 1) +
                                                *((float*)&v155 + 1))))))) +
                        (float)((float)(*(float*)&v155 + *(float*)&v155) *
                                v5)) +
                (float)(v157_.v157 * v6));
    v157_.v168 =
        *((float*)&v157_.v161 + 1) +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v159 *
                                            (float)(*(float*)&v155 +
                                                    *(float*)&v155)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v157 * (float)(v156 + v156)))))) +
                        (float)((float)(*((float*)&v155 + 1) +
                                        *((float*)&v155 + 1)) *
                                v5)) +
                (float)(v157_.v158 * v6));
    v157_.v163 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v157 * v154)) +
                                 (float)(v157_.v160 * v151)) +
                         (float)(v157_.v158 * v153)) -
                 (float)(v152 * v157_.v159);
    v157_.v164 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v158 * v154)) +
                                 (float)(v157_.v160 * v152)) +
                         (float)(v157_.v159 * v151)) -
                 (float)(v153 * v157_.v157);
    v157_.v169 =
        v157_.v162 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v157 *
                                            (float)(*((float*)&v155 + 1) +
                                                    *((float*)&v155 + 1))) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v158 *
                                        (float)(*(float*)&v155 +
                                                *(float*)&v155)))))) +
                        (float)((float)(v156 + v156) * v5)) +
                (float)(v157_.v159 * v6));
    v157_.v165 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v159 * v154)) +
                                 (float)(v157_.v160 * v153)) +
                         (float)(v157_.v157 * v152)) -
                 (float)(v151 * v157_.v158);
    v157_.v166 = (float)((float)((float)(v157_.v160 * v154) -
                                 (float)(PSEUDO_UNFUSED(v157_.v157 * v151))) -
                         (float)(v157_.v158 * v152)) -
                 (float)(v157_.v159 * v153);
    physx_NpArticulationLink_getGlobalPose((void*)((__int64)&v151), v2, v7),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(**(_QWORD**)(v4 + 264) + 64LL))(
        *(_QWORD*)(v4 + 264)),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)&v8 = v153;
    v9 = (float)(v154 * v154) + -0x1.0000000000000p-1f;
    v10 = *(_QWORD*)a2;
    v11 = (float)((float)(PSEUDO_UNFUSED(
                      (float)(*((float*)&v149 + 1) + *((float*)&v149 + 1)) *
                      v152)) +
                  (float)(v151 * (float)(*(float*)&v149 + *(float*)&v149))) +
          (float)(v153 * (float)(v150 + v150));
    *(float*)&v157_.v161 =
        *(float*)&v155 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v152 * (float)(v150 + v150)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v153 *
                                        (float)(*((float*)&v149 + 1) +
                                                *((float*)&v149 + 1))))))) +
                        (float)((float)(*(float*)&v149 + *(float*)&v149) *
                                v9)) +
                (float)(v151 * v11));
    *((float*)&v157_.v161 + 1) =
        *((float*)&v155 + 1) +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v153 * (float)(*(float*)&v149 +
                                                           *(float*)&v149)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v151 * (float)(v150 + v150)))))) +
                        (float)((float)(*((float*)&v149 + 1) +
                                        *((float*)&v149 + 1)) *
                                v9)) +
                (float)(v152 * v11));
    v157_.v162 =
        v156 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v151 *
                                            (float)(*((float*)&v149 + 1) +
                                                    *((float*)&v149 + 1))) -
                                    (float)(PSEUDO_UNFUSED(
                                        v152 * (float)(*(float*)&v149 +
                                                       *(float*)&v149)))))) +
                        (float)((float)(v150 + v150) * v9)) +
                (float)(v153 * v11));
    v12 = *(__int64 (**)(__int64, float, float, float, float, double, float,
                         float))(v10 + 16),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v157_.v157 = (float)((float)((float)(PSEUDO_UNFUSED(v151 * v148)) +
                                 (float)(v154 * v145)) +
                         (float)(v152 * v147)) -
                 (float)(v146 * v153);
    v157_.v158 = (float)((float)((float)(PSEUDO_UNFUSED(v152 * v148)) +
                                 (float)(v154 * v146)) +
                         (float)(v153 * v145)) -
                 (float)(v147 * v151);
    v157_.v159 = (float)((float)((float)(PSEUDO_UNFUSED(v153 * v148)) +
                                 (float)(v154 * v147)) +
                         (float)(v151 * v146)) -
                 (float)(v145 * v152);
    v157_.v160 = (float)((float)((float)(v154 * v148) -
                                 (float)(PSEUDO_UNFUSED(v151 * v145))) -
                         (float)(v152 * v146)) -
                 (float)(v153 * v147);
    result =
        v12(a2, v157_.v162, *(float*)&v157_.v161, *((float*)&v157_.v161 + 1),
            v157_.v160, v8, v148, -(float)(v151 * v145)),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = v157_.v164;
    v15 = v157_.v157;
    v14 = v157_.v158;
    v17 = v157_.v159;
    v16 = v157_.v160;
    v18 = v157_.v162;
    v19 = *(_QWORD*)(v4 + 264);
    v155 = v157_.v161;
    v156 = v157_.v162;
    v151 = v157_.v157;
    v152 = v157_.v158;
    v153 = v157_.v159;
    v154 = v157_.v160;
    v133 = v157_.v165;
    v135 = v157_.v163;
    v137 = v157_.v166;
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v157_.v164 *
                                                       v157_.v158)) +
                                (float)(v157_.v163 * v157_.v157)) +
                        (float)(v157_.v165 * v157_.v159)) +
                (float)(v157_.v166 * v157_.v160)) < 0x0.0p+0f) {
      v15 = -v157_.v157;
      v14 = -v157_.v158;
      v157_.v157 = -v157_.v157;
      v157_.v158 = -v157_.v158;
      v17 = -v157_.v159;
      v16 = -v157_.v160;
      v157_.v159 = -v157_.v159;
      v157_.v160 = -v157_.v160;
    }
    v138 = v16;
    v20 = v157_.v169;
    v21 = v157_.v167 - *(float*)&v157_.v161;
    v141 = (float)(v157_.v168 - *((float*)&v157_.v161 + 1)) +
           (float)(v157_.v168 - *((float*)&v157_.v161 + 1));
    if (*(_BYTE*)(v19 + 386) != 0) {
      result = (*(__int64 (**)(__int64, __int64, float, float))(
          *(_QWORD*)a2 + 32LL))(a2, (__int64)&v151, *(float*)(v19 + 104),
                                *(float*)(v19 + 108)),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v22 = v20 - v18;
    v130 = v14;
    v139 = v15;
    v140 = v21 + v21;
    v23 = -(float)(v14 * v141);
    if (*(_BYTE*)(v19 + 387) != 0) {
      v25 = *(float*)(v19 + 112);
      v24 = *(float*)(v19 + 116);
      v26 = v17;
      v27 = v151;
      v28 = v152;
      v29 = v13;
      v30 = v153;
      v31 = v154;
      v131 = v23;
      v128 = v22;
      v149 = v155;
      v123 = v24;
      v125 = v25;
      v150 = v156;
      v32 = GameRoutine_1a09fb0(-0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = GameRoutine_1a09fc0(-0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v34 = *(__int64 (**)(__int64, __int64, float, float, float, float, float,
                           float))(*(_QWORD*)a2 + 32LL),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v35 = -(float)(v27 * (float)(v32 * 0x0.0p+0f));
      v36 = (float)((float)(PSEUDO_UNFUSED(v33 * v30)) + (float)(v31 * v32)) +
            (float)(v27 * (float)(v32 * 0x0.0p+0f));
      v37 = (float)(PSEUDO_UNFUSED(v33 * v27)) +
            (float)(v31 * (float)(v32 * 0x0.0p+0f));
      v38 = (float)(PSEUDO_UNFUSED(v33 * v28)) +
            (float)(v31 * (float)(v32 * 0x0.0p+0f));
      v39 = (float)(v31 * v33) -
            (float)(PSEUDO_UNFUSED(v27 * (float)(v32 * 0x0.0p+0f)));
      v13 = v29;
      v40 = (float)(v38 + (float)(v30 * (float)(v32 * 0x0.0p+0f))) -
            (float)(v32 * v27);
      v17 = v26;
      v15 = v139;
      v145 = (float)(v37 + (float)(v28 * v32)) -
             (float)((float)(v32 * 0x0.0p+0f) * v30);
      v146 = v40;
      v147 = v36 - (float)((float)(v32 * 0x0.0p+0f) * v28);
      v148 = (float)(v39 - (float)(v28 * (float)(v32 * 0x0.0p+0f))) -
             (float)(v30 * v32);
      result = v34(a2, (__int64)&v145, -v123, -v125, v145, v40, v147, v35),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v22 = v128;
      v23 = v131;
    }
    v41 = v133;
    v42 = v22 + v22;
    v43 = v13 + v13;
    v132 = v42;
    v129 = v13 + v13;
    v44 = v135 + v135;
    v45 = v41 + v41;
    v46 = v23 - (float)(v15 * v140);
    if (*(_BYTE*)(v19 + 388) != 0) {
      v48 = *(float*)(v19 + 120);
      v47 = *(float*)(v19 + 124);
      v124 = v13;
      v126 = v17;
      v49 = v151;
      v50 = v152;
      v52 = v153;
      v51 = v154;
      v122 = v46;
      v149 = v155;
      v120 = v47;
      v121 = v48;
      v150 = v156;
      v53 = GameRoutine_1a09fb0(0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v54 = GameRoutine_1a09fc0(0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v55 = *(__int64 (**)(__int64, __int64, float, float, float, float, float,
                           float))(*(_QWORD*)a2 + 32LL),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v56 = -(float)(v49 * (float)(v53 * 0x0.0p+0f));
      v57 = (float)(PSEUDO_UNFUSED(v54 * v52)) +
            (float)(v51 * (float)(v53 * 0x0.0p+0f));
      v58 = (float)(PSEUDO_UNFUSED(v54 * v49)) +
            (float)(v51 * (float)(v53 * 0x0.0p+0f));
      v59 = (float)((float)(PSEUDO_UNFUSED(v54 * v50)) + (float)(v51 * v53)) +
            (float)(v52 * (float)(v53 * 0x0.0p+0f));
      v60 = (float)(v51 * v54) -
            (float)(PSEUDO_UNFUSED(v49 * (float)(v53 * 0x0.0p+0f)));
      v61 = v57 + (float)(v49 * v53);
      v62 = v59 - (float)((float)(v53 * 0x0.0p+0f) * v49);
      v41 = v133;
      v63 = v60 - (float)(v50 * v53);
      v64 = v61 - (float)((float)(v53 * 0x0.0p+0f) * v50);
      v65 = (float)(v58 + (float)(v50 * (float)(v53 * 0x0.0p+0f))) -
            (float)(v53 * v52);
      v13 = v124;
      v17 = v126;
      v145 = v65;
      v146 = v62;
      v147 = v64;
      v148 = v63 - (float)(v52 * (float)(v53 * 0x0.0p+0f));
      result = v55(a2, (__int64)&v145, -v120, -v121, v65, v62, v64, v56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = v122;
      v43 = v129;
      v42 = v132;
    }
    v66 = v138;
    v67 = v13 * v43;
    v68 = v46 - (float)(v17 * v42);
    v69 = v41 * v45;
    v70 = v44 * v13;
    v71 = 0x1.0000000000000p+0f;
    v72 = v135 * v44;
    v73 = (float)(v66 * v66) + -0x1.0000000000000p-1f;
    v134 = v44 * v41;
    v136 = v67;
    v74 = v45 * v137;
    v127 = v43 * v137;
    if (*(_BYTE*)(v19 + 389) == 1) {
      v75 = v134 - v127;
      v76 = (float)(0x1.0000000000000p+0f - v136) - v69;
      v77 = (float)((float)(PSEUDO_UNFUSED(
                        v138 * (float)((float)(PSEUDO_UNFUSED(v17 * v141)) -
                                       (float)(v130 * v42)))) +
                    (float)(v140 * v73)) -
            (float)(v139 * v68);
      v78 = *(float*)(v19 + 128);
      v79 = *(float*)(v19 + 132);
      v80 = v78 * (float)(v70 + v74);
      v81 = v77 > v79 | v77 < v78;
      v82 = v78 * v76;
      v83 = v78 * v75;
      v84 = v80 + *((float*)&v157_.v161 + 1);
      if (v81) {
        v85 = 16711680;
      }
      else {
        v85 = 0xFFFFFF;
      }
      v86 = *(_QWORD*)a2;
      v145 = v82 + *(float*)&v157_.v161;
      v146 = v84;
      v147 = v83 + v157_.v162;
      v87 = *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                           float, float, float, float, float, float))(v86 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v79 * v76)) + *(float*)&v157_.v161;
      v142_.v143 = (float)(PSEUDO_UNFUSED(v79 * (float)(v70 + v74))) +
                   *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v79 * v75)) + v157_.v162;
      result = v87(a2, (__int64)&v145, (__int64)&v142_.v142, v85, v142_.v142,
                   v142_.v143, v142_.v144, v75, v83 + v157_.v162, v79, v84,
                   *(float*)&v157_.v161),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v73 = (float)(v138 * v138) + -0x1.0000000000000p-1f;
      v43 = v129;
      v42 = v132;
      v71 = 0x1.0000000000000p+0f;
      v66 = v138;
    }
    v88 = v43 * v41;
    v89 = v71 - v72;
    v90 = v44 * v137;
    if (*(_BYTE*)(v19 + 390) == 1) {
      v91 = v88 + v90;
      v92 = v66 *
            (float)((float)(PSEUDO_UNFUSED(v139 * v42)) - (float)(v17 * v140));
      v93 = v89 - v69;
      v94 = v73;
      v95 = v70 - v74;
      v96 = (float)(v92 + (float)(v141 * v73)) - (float)(v130 * v68);
      v97 = *(float*)(v19 + 136);
      v98 = *(float*)(v19 + 140);
      v99 = v97 * v93;
      v100 = v96 > v98 | v96 < v97;
      v101 = v97 * v95;
      v102 = v97 * v91;
      v103 = v99 + *((float*)&v157_.v161 + 1);
      if (v100) {
        v104 = 16711680;
      }
      else {
        v104 = 0xFFFFFF;
      }
      v105 = *(_QWORD*)a2;
      v145 = v101 + *(float*)&v157_.v161;
      v146 = v103;
      v147 = v102 + v157_.v162;
      v106 =
          *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                         float, float, float, float, float, float))(v105 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v98 * v95)) + *(float*)&v157_.v161;
      v142_.v143 =
          (float)(PSEUDO_UNFUSED(v98 * v93)) + *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v98 * v91)) + v157_.v162;
      result = v106(a2, (__int64)&v145, (__int64)&v142_.v142, v104, v142_.v142,
                    v142_.v143, v142_.v144, v91, v102 + v157_.v162, v98, v103,
                    *(float*)&v157_.v161),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v42 = v132;
      v66 = v138;
      v73 = v94;
    }
    if (*(_BYTE*)(v19 + 391) == 1) {
      v107 = v89 - v136;
      v108 = (float)(PSEUDO_UNFUSED(
                 v66 * (float)((float)(PSEUDO_UNFUSED(v130 * v140)) -
                               (float)(v139 * v141)))) +
             (float)(v42 * v73);
      v109 = *(float*)(v19 + 144);
      v110 = *(float*)(v19 + 148);
      v111 = v108 - (float)(v17 * v68);
      v112 = v134 + v127;
      v113 = v111 > v110 | v111 < v109;
      v114 = v109 * v112;
      v115 = (float)(PSEUDO_UNFUSED(v109 * (float)(v88 - v90))) +
             *((float*)&v157_.v161 + 1);
      v116 = v109 * v107;
      if (v113) {
        v117 = 16711680;
      }
      else {
        v117 = 0xFFFFFF;
      }
      v118 = *(_QWORD*)a2;
      v145 = v114 + *(float*)&v157_.v161;
      v146 = v115;
      v147 = v116 + v157_.v162;
      v119 =
          *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                         float, float, float, float, float, float))(v118 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v110 * v112)) + *(float*)&v157_.v161;
      v142_.v143 = (float)(PSEUDO_UNFUSED(v110 * (float)(v88 - v90))) +
                   *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v110 * v107)) + v157_.v162;
      return v119(a2, (__int64)&v145, (__int64)&v142_.v142, v117, v142_.v142,
                  v142_.v143, v142_.v144, v107, v116 + v157_.v162, v110, v115,
                  *(float*)&v157_.v161);
    }
  }
  return result;
}

#pragma GCC visibility pop
