#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_4a1f80(float*, float*, float*, float*, float*, float*,
                           float*, _BYTE*, float, float);
__int64 GameRoutine_4a5700(float*, float*, float*, float*, float*, float*,
                           float*, _BYTE*, float, float);
float GameRoutine_1a0a010(float);
float GameRoutine_1a0ccb0(float);
void GameRoutine_4a2290(float*, float*, float*, float*, float*, float*, float*,
                        float*, float, float, _BYTE*);
void GameRoutine_4a5a10(float*, float*, float*, float*, float*, float*, float*,
                        float*, float, float, _BYTE*);
__int64 physx_source_geomutils_src_mesh_4a1740(__int64 a1, unsigned int a2);
__int64 physx_source_geomutils_src_mesh_4a4dc0(__int64 a1, unsigned int a2,
                                               char a3);
void GameRoutine_4a5a10_alt1(float*, float*, float*, float*, float*, float*,
                             float*, float*, float, float);
void GameRoutine_4a2290_alt1(float*, float*, float*, float*, float*, float*,
                             float*, float*, float, float);

__int64 physx_source_geomutils_src_mesh_4a1740(__int64 a1, unsigned int a2)
{
  __int64 v2;
  float* v5;
  unsigned int* v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned __int16* v10;
  __int64 v11;
  float* v12;
  float* v13;
  float* v14;
  float v15;
  float v16;
  float v17;
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
  float* v34;
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
  float* v59;
  float* v60;
  float* v61;
  float* v62;
  char v63;
  float v64;
  float v65;
  float v66;
  float v67;
  char v68;
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
  bool v96;
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
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  __int64 result;
  __int64 v129;
  float v130;
  int v131;
  int v132;
  float v133;
  int v134;
  int v135;
  struct {
    char gap0_[20];
    union {
      float v136;
      float v137;
    };
    float v138;
    float v139;
    float v140;
    union {
      float v141;
      float v142;
      float v143;
      float v144;
    };
    float v145;
    float v146;
    float v147;
    float v148;
    float v149;
    union {
      float v150;
      float v151;
    };
    union {
      float v152;
      float v153;
    };
    union {
      float v154;
      float v155;
    };
    union {
      float v156;
      float v157;
    };
    float v158;
    float v159;
    float v160;
    union {
      float v161;
      float v162;
    };
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
    union {
      float v175;
      float v176;
    };
    union {
      float v177;
      float v178;
    };
    union {
      float v179;
      float v180;
    };
    union {
      float v181;
      float v182;
    };
    float v183;
    char gap160_[12];
    float v184;
    float v185;
    float v186;
    _DWORD v187[3];
    float v188[3];
    float v189[3];
    float v190[3];
    float v191;
    float v192;
    float v193;
    float v194;
    float v195;
    float v196;
    float v197[3];
    float v198[3];
    float v199[3];
    float v200[3];
    float v201[3];
    float v202[3];
    _BYTE v203[4];
    float v204;
  } f_;

  v2 = *(_QWORD*)(a1 + 48);
  v5 = (float*)f_.v187;
  if (v2 != 0) {
    v6 = (unsigned int*)(v2 + 12LL * a2);
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
  }
  else {
    v10 = (unsigned __int16*)(*(_QWORD*)(a1 + 56) + 6LL * a2);
    v7 = *v10;
    v8 = v10[1];
    v9 = v10[2];
  }
  v11 = *(_QWORD*)(a1 + 64);
  v12 = (float*)(v11 + 12LL * v7);
  v13 = (float*)(v11 + 12LL * v8);
  v14 = (float*)(v11 + 12LL * v9);
  v15 = *v12;
  v16 = v12[1];
  v17 = v12[2];
  v18 = *v13;
  v19 = v13[2];
  v20 = *v14;
  v21 = v14[1];
  v22 = v14[2];
  f_.v185 = v13[1];
  f_.v186 = v19;
  *(float*)f_.v187 = v20;
  *(float*)&f_.v187[1] = v21;
  v23 = v17 - v19;
  v24 = v16 - v21;
  *(float*)&f_.v187[2] = v22;
  v25 = v17 - v22;
  f_.v184 = v18;
  v26 = (float)((float)(v16 - f_.v185) * v25) -
        (float)(PSEUDO_UNFUSED(v23 * v24));
  v27 = (float)(v23 * (float)(v15 - v20)) -
        (float)(PSEUDO_UNFUSED((float)(v15 - v18) * v25));
  v28 = *(float*)(a1 + 72);
  v29 = *(float*)(a1 + 76);
  v30 = (float)((float)(v15 - v18) * v24) -
        (float)(PSEUDO_UNFUSED((float)(v16 - f_.v185) * (float)(v15 - v20)));
  v31 = *(float*)(a1 + 80);
  if ((float)((float)((float)(PSEUDO_UNFUSED(v27 * v29)) + (float)(v26 * v28)) +
              (float)(v30 * v31)) <= 0x0.0p+0f) {
    v35 = v20;
    v20 = v18;
    f_.v168 = v30;
    f_.v169 = v27;
    v34 = (float*)f_.v187;
    v5 = &f_.v184;
    v32 = v26;
    v33 = v27;
  }
  else {
    if (*(_DWORD*)(a1 + 92) != 0) {
      return 0;
    }
    v32 = -v26;
    f_.v168 = v30;
    f_.v169 = v27;
    v33 = -v27;
    v34 = &f_.v184;
    v35 = v18;
    v30 = -v30;
  }
  v36 = v29 * *(float*)(a1 + 304);
  f_.v141 = *(float*)(a1 + 304);
  v37 = *(float*)(a1 + 312);
  f_.v156 = *(float*)(a1 + 300);
  f_.v204 = *(float*)(a1 + 84);
  f_.v203[0] = 0;
  f_.v170 = v26;
  v38 = v34[1];
  v39 = v34[2];
  f_.v152 = v35 - v37;
  f_.v154 = v20 - v37;
  f_.v161 = v15 - v37;
  v40 = (float)(v36 + (float)(f_.v156 * v28)) +
        (float)(*(float*)(a1 + 308) * v31);
  f_.v167 = *(float*)(a1 + 308);
  v41 = *(float*)(a1 + 320);
  v42 = v5[1];
  v43 = v5[2];
  f_.v179 = v40;
  v44 = *(float*)(a1 + 316);
  v45 = (float)(v17 - v41) - (float)(v43 - v41);
  f_.v165 = v43 - v41;
  f_.v166 = v17 - v41;
  f_.v202[2] = v17 - v41;
  f_.v201[2] = v43 - v41;
  f_.v200[2] = v39 - v41;
  v46 = v16 - v44;
  v47 = v42 - v44;
  v48 = (float)(v16 - v44) - (float)(v42 - v44);
  f_.v201[0] = v20 - v37;
  f_.v201[1] = v42 - v44;
  f_.v200[0] = v35 - v37;
  f_.v200[1] = v38 - v44;
  f_.v149 = v39 - v41;
  f_.v150 = v38 - v44;
  f_.v202[0] = v15 - v37;
  f_.v202[1] = v16 - v44;
  v49 = (float)(PSEUDO_UNFUSED(v33 * v44)) + (float)(v32 * v37);
  v50 = (float)(v38 - v44) - (float)(v42 - v44);
  v51 = v49 + (float)(v30 * v41);
  v52 = (float)(v39 - v41) - (float)(v43 - v41);
  v53 = (float)(v35 - v37) - (float)(v20 - v37);
  v54 = (float)(v15 - v37) - (float)(v20 - v37);
  v55 = v16 + v44;
  f_.v183 = v51;
  f_.v197[2] = v41 + v39;
  f_.v197[0] = v37 + v35;
  f_.v197[1] = v44 + v38;
  v56 = (float)(v44 + v38) - (float)(v44 + v42);
  v57 = (float)(v41 + v39) - (float)(v41 + v43);
  f_.v198[2] = v41 + v43;
  v58 = (float)(v37 + v35) - (float)(v37 + v20);
  f_.v198[0] = v37 + v20;
  f_.v198[1] = v44 + v42;
  f_.v199[0] = v15 + v37;
  f_.v199[1] = v16 + v44;
  f_.v199[2] = v17 + v41;
  f_.v181 = v15 + v37;
  f_.v160 = v17 + v41;
  f_.v158 = (float)(v50 * v45) - (float)(PSEUDO_UNFUSED(v52 * v48));
  f_.v146 = (float)(v17 + v41) - (float)(v41 + v43);
  f_.v147 = (float)(v16 + v44) - (float)(v44 + v42);
  f_.v148 = (float)(v15 + v37) - (float)(v37 + v20);
  f_.v191 = f_.v158;
  f_.v192 = (float)(v52 * v54) - (float)(PSEUDO_UNFUSED(v53 * v45));
  f_.v175 = v37 + v37;
  f_.v177 = v44 + v44;
  f_.v193 = (float)(v53 * v48) - (float)(PSEUDO_UNFUSED(v50 * v54));
  f_.v145 = (float)(v56 * f_.v146) - (float)(PSEUDO_UNFUSED(v57 * f_.v147));
  f_.v194 = f_.v145;
  f_.v195 = (float)(v57 * (float)((float)(v15 + v37) - f_.v198[0])) -
            (float)(PSEUDO_UNFUSED((float)((float)(v37 + v35) - f_.v198[0]) *
                                   f_.v146));
  f_.v139 = f_.v195;
  f_.v140 = f_.v192;
  f_.v163 = (float)(v58 * f_.v147) - (float)(PSEUDO_UNFUSED(v56 * f_.v148));
  f_.v164 = f_.v193;
  f_.v196 = f_.v163;
  f_.v173 = -(float)(v37 + v37);
  f_.v174 = v41 + v41;
  f_.v171 = -(float)(v44 + v44);
  f_.v172 = -(float)(v41 + v41);
  f_.v138 = *(float*)(a1 + 296);
  if (v51 >= 0x0.0p+0f) {
    v59 = f_.v199;
    v60 = f_.v198;
    v61 = f_.v197;
    v62 = &f_.v194;
  }
  else {
    v59 = f_.v202;
    v60 = f_.v201;
    v61 = f_.v200;
    v62 = &f_.v191;
  }
  v63 = GameRoutine_4a1f80((float*)a1, v59, v60, v61, v62, (float*)(a1 + 72),
                           &f_.v204, f_.v203, *(float*)(a1 + 296), f_.v179);
  v65 = f_.v175;
  v64 = f_.v177;
  v67 = f_.v172;
  v66 = f_.v173;
  v68 = v63;
  v69 = f_.v141 - v46;
  v70 = f_.v174;
  f_.v159 = v55;
  v71 = f_.v141 - v55;
  v72 = f_.v171;
  v73 = *(float*)(a1 + 308);
  v74 = (float)(PSEUDO_UNFUSED(f_.v177 * v57)) + (float)(v56 * f_.v172);
  v75 = (float)(PSEUDO_UNFUSED(f_.v174 * v58)) + (float)(v57 * f_.v173);
  v76 = f_.v175 * v56;
  v77 = *(float*)(a1 + 300);
  v78 = v76 + (float)(v58 * f_.v171);
  v79 = *(float*)(a1 + 304);
  f_.v190[0] = v74;
  f_.v190[1] = v75;
  f_.v190[2] = v78;
  v80 = v79 - v47;
  if ((v63 & 1) != 0) {
    v81 = v73;
    v82 = v77;
  }
  else {
    v81 = v73;
    v82 = v77;
    if ((float)(f_.v183 * (float)((float)((float)(PSEUDO_UNFUSED(
                                              v75 * *(float*)(a1 + 76))) +
                                          (float)(v74 * *(float*)(a1 + 72))) +
                                  (float)(v78 * *(float*)(a1 + 80)))) >=
        0x0.0p+0f) {
      f_.v142 = v78;
      v83 = v74;
      f_.v136 = v73;
      GameRoutine_4a2290_alt1((float*)a1, f_.v201, f_.v198, f_.v200, f_.v197,
                              f_.v190, (float*)(a1 + 72), &f_.v204, f_.v138,
                              f_.v179);
      v73 = f_.v136;
      v74 = v83;
      v78 = f_.v142;
      v72 = f_.v171;
      v67 = f_.v172;
      v66 = f_.v173;
      v70 = f_.v174;
      v65 = f_.v175;
      v64 = f_.v177;
      v82 = *(float*)(a1 + 300);
      v79 = *(float*)(a1 + 304);
      v81 = *(float*)(a1 + 308);
    }
  }
  v84 = v75 * v80;
  v85 = f_.v156 - f_.v181;
  v86 = f_.v156 - f_.v161;
  v87 = v69 * f_.v140;
  v88 = v71 * f_.v139;
  v89 = v82 - f_.v161;
  v90 = v77 - f_.v154;
  v91 = (float)(PSEUDO_UNFUSED((float)(v46 - f_.v150) * v67)) +
        (float)(v64 * (float)(f_.v166 - f_.v149));
  v92 = (float)(PSEUDO_UNFUSED((float)(f_.v166 - f_.v149) * v66)) +
        (float)(v70 * (float)(f_.v161 - f_.v152));
  v93 = (float)(PSEUDO_UNFUSED((float)(f_.v161 - f_.v152) * v72)) +
        (float)(v65 * (float)(v46 - f_.v150));
  f_.v189[0] = v91;
  f_.v189[1] = v92;
  v94 = v92 * (float)(v79 - v46);
  f_.v189[2] = v93;
  if ((v68 & 1) != 0) {
    v95 = v81;
  }
  else {
    v96 = (float)(f_.v183 * (float)((float)((float)(PSEUDO_UNFUSED(
                                                v92 * *(float*)(a1 + 76))) +
                                            (float)(v91 * *(float*)(a1 + 72))) +
                                    (float)(v93 * *(float*)(a1 + 80)))) <
          0x0.0p+0f;
    v95 = v81;
    if (!v96) {
      f_.v143 = v78;
      v97 = v74;
      f_.v137 = v73;
      v98 = (float)(PSEUDO_UNFUSED((float)(f_.v161 - f_.v152) * v72)) +
            (float)(v65 * (float)(v46 - f_.v150));
      f_.v162 = f_.v156 - f_.v181;
      f_.v155 = v90;
      f_.v157 = v86;
      f_.v151 = v84;
      f_.v153 = v87;
      GameRoutine_4a2290_alt1((float*)a1, f_.v200, f_.v197, f_.v202, f_.v199,
                              f_.v189, (float*)(a1 + 72), &f_.v204, f_.v138,
                              f_.v179);
      v84 = f_.v151;
      v87 = f_.v153;
      v90 = f_.v155;
      v86 = f_.v157;
      v85 = f_.v162;
      v93 = v98;
      v74 = v97;
      v73 = f_.v137;
      v78 = f_.v143;
      v72 = f_.v171;
      v67 = f_.v172;
      v82 = *(float*)(a1 + 300);
      v66 = f_.v173;
      v70 = f_.v174;
      v65 = f_.v175;
      v64 = f_.v177;
      v79 = *(float*)(a1 + 304);
      v95 = *(float*)(a1 + 308);
    }
  }
  v99 = v94 + (float)(v89 * v91);
  v100 = v84 + (float)(v90 * v74);
  v101 = v81 - f_.v166;
  v102 = v88 + (float)(v85 * f_.v145);
  v103 = v87 + (float)(v86 * f_.v158);
  v104 = (float)(PSEUDO_UNFUSED(v70 * f_.v147)) + (float)(v72 * f_.v146);
  v105 = (float)(PSEUDO_UNFUSED(v65 * f_.v146)) + (float)(v67 * f_.v148);
  v106 = (float)(PSEUDO_UNFUSED(v64 * f_.v148)) + (float)(v66 * f_.v147);
  f_.v188[0] = v104;
  f_.v188[1] = v105;
  f_.v188[2] = v106;
  v107 = v73 - f_.v165;
  v108 = v95 - f_.v160;
  v109 = (float)(PSEUDO_UNFUSED(v105 * (float)(v79 - f_.v159))) +
         (float)((float)(v82 - f_.v181) * v104);
  if ((v68 & 1) == 0 &&
      (float)(f_.v183 * (float)((float)((float)(PSEUDO_UNFUSED(
                                            v105 * *(float*)(a1 + 76))) +
                                        (float)(v104 * *(float*)(a1 + 72))) +
                                (float)(v106 * *(float*)(a1 + 80)))) >=
          0x0.0p+0f) {
    v110 = f_.v179;
    f_.v144 = v78;
    f_.v180 = v102;
    f_.v182 = v93;
    f_.v176 = v100;
    f_.v178 = v103;
    GameRoutine_4a2290_alt1((float*)a1, f_.v202, f_.v199, f_.v201, f_.v198,
                            f_.v188, (float*)(a1 + 72), &f_.v204, f_.v138,
                            v110);
    v100 = f_.v176;
    v103 = f_.v178;
    v102 = f_.v180;
    v93 = f_.v182;
    v78 = f_.v144;
  }
  v111 = v100 + (float)(v107 * v78);
  v112 = v102 + (float)((float)(f_.v167 - f_.v160) * f_.v163);
  v113 = v103 + (float)((float)(f_.v167 - f_.v166) * f_.v164);
  v114 = v99 + (float)(v101 * v93);
  v115 = v109 + (float)(v108 * v106);
  if (f_.v183 < 0x0.0p+0f) {
    v117 = f_.v169;
    v116 = f_.v170;
    v118 = f_.v168;
    if (v112 < 0x0.0p+0f) {
      goto LABEL_51;
    }
    if (v113 > 0x0.0p+0f) {
      goto LABEL_51;
    }
    if (v111 > 0x0.0p+0f) {
      goto LABEL_51;
    }
    if (v114 > 0x0.0p+0f) {
      goto LABEL_51;
    }
    v119 = 0x0.0p+0f;
    if (v115 > 0x0.0p+0f) {
      goto LABEL_51;
    }
  LABEL_34:
    v120 = GameRoutine_1a0a010(
        (float)((float)(PSEUDO_UNFUSED(v117 * v117)) + (float)(v116 * v116)) +
        (float)(v118 * v118));
    if (v120 <= 0x0.0p+0f) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v117 = f_.v169;
  v116 = f_.v170;
  v118 = f_.v168;
  if (v112 <= 0x0.0p+0f && v113 >= 0x0.0p+0f && v111 >= 0x0.0p+0f &&
      v114 >= 0x0.0p+0f) {
    v119 = 0x0.0p+0f;
    if (v115 >= 0x0.0p+0f) {
      goto LABEL_34;
    }
  }
LABEL_51:
  if (f_.v203[0] != 1) {
    return 0;
  }
  v119 = f_.v204;
  v120 = GameRoutine_1a0a010(
      (float)((float)(PSEUDO_UNFUSED(v117 * v117)) + (float)(v116 * v116)) +
      (float)(v118 * v118));
  if (v120 > 0x0.0p+0f) {
  LABEL_35:
    v121 = 0x1.0000000000000p+0f / v120;
    v116 = v116 * v121;
    v117 = v117 * v121;
    v118 = v118 * v121;
  }
LABEL_36:
  v122 = GameRoutine_1a0ccb0(
      (float)((float)(PSEUDO_UNFUSED(v117 * *(float*)(a1 + 76))) +
              (float)(v116 * *(float*)(a1 + 72))) +
      (float)(v118 * *(float*)(a1 + 80)));
  if (v119 > *(float*)(a1 + 332)) {
    return 0;
  }
  v123 = -v122;
  v124 = *(float*)(a1 + 328);
  if (v119 == 0x0.0p+0f) {
    goto LABEL_48;
  }
  if (v119 <= v124) {
    v125 = *(float*)(a1 + 328);
  }
  else {
    v125 = v119;
  }
  if (v125 < 0x1.0000000000000p+0f) {
    v125 = 0x1.0000000000000p+0f;
  }
  if ((v126 = v125 * 0x1.0624de0000000p-10f,
       (float)(v124 - (float)(PSEUDO_UNFUSED(v125 * 0x1.0624de0000000p-10f))) >
           v119) ||
      (v127 = *(float*)(a1 + 324)) > v123 && (float)(v124 + v126) > v119 ||
      v119 < v124 && v127 == v123) {
  LABEL_48:
    *(float*)(a1 + 84) = v119;
    *(_DWORD*)(a1 + 88) = a2;
    result = 1;
    v129 = *(_QWORD*)v12;
    *(float*)(a1 + 324) = v123;
    if (v124 >= v119) {
      v124 = v119;
    }
    *(float*)(a1 + 328) = v124;
    *(_QWORD*)(a1 + 100) = v129;
    v130 = *v13;
    v131 = *((_DWORD*)v13 + 1);
    *(float*)(a1 + 108) = v12[2];
    *(float*)(a1 + 112) = v130;
    v132 = *((_DWORD*)v13 + 2);
    *(_DWORD*)(a1 + 116) = v131;
    *(_DWORD*)(a1 + 120) = v132;
    v133 = *v14;
    v134 = *((_DWORD*)v14 + 1);
    v135 = *((_DWORD*)v14 + 2);
    *(float*)(a1 + 140) = v117;
    *(float*)(a1 + 144) = v118;
    *(float*)(a1 + 124) = v133;
    *(_DWORD*)(a1 + 128) = v134;
    *(_DWORD*)(a1 + 132) = v135;
    *(float*)(a1 + 136) = v116;
  }
  else {
    result = 0;
    if (v119 < v124) {
      if (v119 <= v124) {
        v124 = v119;
      }
      *(float*)(a1 + 84) = v119;
      *(float*)(a1 + 328) = v124;
    }
  }
  return result;
}

__int64 physx_source_geomutils_src_mesh_4a4dc0(__int64 a1, unsigned int a2,
                                               char a3)
{
  __int64 v3;
  float* v7;
  unsigned int* v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned __int16* v12;
  __int64 v13;
  float* v14;
  float* v15;
  float* v16;
  float v17;
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
  float* v35;
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
  float v59;
  float* v60;
  float* v61;
  float* v62;
  float* v63;
  char v64;
  float v65;
  float v66;
  float v67;
  float v68;
  char v69;
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
  bool v97;
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
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  __int64 v129;
  int v130;
  int v131;
  float v132;
  int v133;
  int v134;
  __int64 result;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
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
  struct {
    float v203;
    float v204;
    float v205;
  } v203_;
  struct {
    _DWORD v206[3];
    float v207[3];
  } v206_;
  struct {
    float v208[3];
    float v209[3];
  } v208_;
  struct {
    float v210;
    float v211;
    float v212;
    float v213;
    float v214;
    float v215;
  } v210_;
  struct {
    float v216[3];
    float v217[3];
  } v216_;
  struct {
    float v218[3];
    float v219[3];
  } v218_;
  struct {
    float v220[3];
    float v221[3];
  } v220_;
  struct {
    _BYTE v222[4];
    float v223;
  } v222_;

  v3 = *(_QWORD*)(a1 + 176);
  v7 = (float*)v206_.v206;
  if (v3 != 0) {
    v8 = (unsigned int*)(v3 + 12LL * a2);
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
  }
  else {
    v12 = (unsigned __int16*)(*(_QWORD*)(a1 + 184) + 6LL * a2);
    v9 = *v12;
    v10 = v12[1];
    v11 = v12[2];
  }
  v13 = *(_QWORD*)(a1 + 192);
  v14 = (float*)(v13 + 12LL * v9);
  v15 = (float*)(v13 + 12LL * v10);
  v16 = (float*)(v13 + 12LL * v11);
  v17 = *v14;
  v18 = v14[1];
  v19 = v14[2];
  v20 = *v15;
  v21 = v15[2];
  v22 = v16[2];
  v23 = *v16;
  v24 = v16[1];
  v203_.v204 = v15[1];
  v203_.v205 = v21;
  *(float*)v206_.v206 = v23;
  *(float*)&v206_.v206[1] = v24;
  v25 = v19 - v21;
  v26 = v18 - v24;
  *(float*)&v206_.v206[2] = v22;
  v27 = v19 - v22;
  v203_.v203 = v20;
  v28 = (float)((float)(v18 - v203_.v204) * v27) -
        (float)(PSEUDO_UNFUSED(v25 * v26));
  v29 = (float)((float)(v17 - v20) * v26) -
        (float)(PSEUDO_UNFUSED((float)(v18 - v203_.v204) * (float)(v17 - v23)));
  v30 = *(float*)(a1 + 264);
  v31 = (float)(v25 * (float)(v17 - v23)) -
        (float)(PSEUDO_UNFUSED((float)(v17 - v20) * v27));
  v32 = *(float*)(a1 + 260);
  v33 = *(float*)(a1 + 268);
  if ((float)((float)((float)(PSEUDO_UNFUSED(v31 * v30)) + (float)(v28 * v32)) +
              (float)(v29 * v33)) <= 0x0.0p+0f) {
    v36 = v23;
    v23 = v20;
    v187 = v29;
    v188 = v31;
    v35 = (float*)v206_.v206;
    v7 = &v203_.v203;
    v34 = v28;
  }
  else {
    if (*(_DWORD*)(a1 + 280) != 0) {
      return 0;
    }
    v34 = -v28;
    v187 = v29;
    v188 = v31;
    v31 = -v31;
    v35 = &v203_.v203;
    v36 = v20;
    v29 = -v29;
  }
  v37 = v30 * *(float*)(a1 + 528);
  v160 = *(float*)(a1 + 528);
  v38 = *(float*)(a1 + 536);
  v176 = *(float*)(a1 + 524);
  v222_.v223 = *(float*)(a1 + 272);
  v222_.v222[0] = 0;
  v189 = v28;
  v39 = v35[1];
  v40 = v35[2];
  v171 = v36 - v38;
  v173 = v23 - v38;
  v180 = v17 - v38;
  v41 = (float)(v37 + (float)(v176 * v32)) + (float)(*(float*)(a1 + 532) * v33);
  v186 = *(float*)(a1 + 532);
  v42 = *(float*)(a1 + 544);
  v43 = v7[1];
  v44 = v7[2];
  v198 = v41;
  v45 = *(float*)(a1 + 540);
  v46 = (float)(v19 - v42) - (float)(v44 - v42);
  v184 = v44 - v42;
  v185 = v19 - v42;
  v220_.v221[2] = v19 - v42;
  v220_.v220[2] = v44 - v42;
  v218_.v219[2] = v40 - v42;
  v47 = v18 - v45;
  v48 = v43 - v45;
  v49 = (float)(v18 - v45) - (float)(v43 - v45);
  v220_.v220[0] = v23 - v38;
  v220_.v220[1] = v43 - v45;
  v218_.v219[0] = v36 - v38;
  v218_.v219[1] = v39 - v45;
  v168 = v40 - v42;
  v169 = v39 - v45;
  v220_.v221[0] = v17 - v38;
  v220_.v221[1] = v18 - v45;
  v50 = (float)(PSEUDO_UNFUSED(v31 * v45)) + (float)(v34 * v38);
  v51 = (float)(v39 - v45) - (float)(v43 - v45);
  v52 = v50 + (float)(v29 * v42);
  v53 = (float)(v40 - v42) - (float)(v44 - v42);
  v54 = (float)(v36 - v38) - (float)(v23 - v38);
  v55 = (float)(v17 - v38) - (float)(v23 - v38);
  v56 = v18 + v45;
  v202 = v52;
  v216_.v216[2] = v42 + v40;
  v216_.v216[0] = v38 + v36;
  v216_.v216[1] = v45 + v39;
  v57 = (float)(v45 + v39) - (float)(v45 + v43);
  v58 = (float)(v42 + v40) - (float)(v42 + v44);
  v216_.v217[2] = v42 + v44;
  v59 = (float)(v38 + v36) - (float)(v38 + v23);
  v216_.v217[0] = v38 + v23;
  v216_.v217[1] = v45 + v43;
  v218_.v218[0] = v17 + v38;
  v218_.v218[1] = v18 + v45;
  v218_.v218[2] = v19 + v42;
  v200 = v17 + v38;
  v179 = v19 + v42;
  v175 = (float)(v51 * v46) - (float)(PSEUDO_UNFUSED(v53 * v49));
  v165 = (float)(v19 + v42) - (float)(v42 + v44);
  v166 = (float)(v18 + v45) - (float)(v45 + v43);
  v167 = (float)(v17 + v38) - (float)(v38 + v23);
  v210_.v210 = v175;
  v210_.v211 = (float)(v53 * v55) - (float)(PSEUDO_UNFUSED(v54 * v46));
  v194 = v38 + v38;
  v196 = v45 + v45;
  v210_.v212 = (float)(v54 * v49) - (float)(PSEUDO_UNFUSED(v51 * v55));
  v164 = (float)(v57 * v165) - (float)(PSEUDO_UNFUSED(v58 * v166));
  v210_.v213 = v164;
  v210_.v214 = (float)(v58 * (float)((float)(v17 + v38) - v216_.v217[0])) -
               (float)(PSEUDO_UNFUSED(
                   (float)((float)(v38 + v36) - v216_.v217[0]) * v165));
  v158 = v210_.v214;
  v159 = v210_.v211;
  v182 = (float)(v59 * v166) - (float)(PSEUDO_UNFUSED(v57 * v167));
  v183 = v210_.v212;
  v210_.v215 = v182;
  v192 = -(float)(v38 + v38);
  v193 = v42 + v42;
  v190 = -(float)(v45 + v45);
  v191 = -(float)(v42 + v42);
  v157 = *(float*)(a1 + 520);
  if (v52 >= 0x0.0p+0f) {
    v60 = v218_.v218;
    v61 = v216_.v217;
    v62 = v216_.v216;
    v63 = &v210_.v213;
  }
  else {
    v60 = v220_.v221;
    v61 = v220_.v220;
    v62 = v218_.v219;
    v63 = &v210_.v210;
  }
  v64 = GameRoutine_4a5700((float*)a1, v60, v61, v62, v63, (float*)(a1 + 260),
                           &v222_.v223, v222_.v222, *(float*)(a1 + 520), v198);
  v66 = v194;
  v65 = v196;
  v68 = v191;
  v67 = v192;
  v69 = v64;
  v70 = v160 - v47;
  v71 = v193;
  v178 = v56;
  v72 = v160 - v56;
  v73 = v190;
  v74 = *(float*)(a1 + 532);
  v75 = (float)(PSEUDO_UNFUSED(v196 * v58)) + (float)(v57 * v191);
  v76 = (float)(PSEUDO_UNFUSED(v193 * v59)) + (float)(v58 * v192);
  v77 = v194 * v57;
  v78 = *(float*)(a1 + 524);
  v79 = v77 + (float)(v59 * v190);
  v80 = *(float*)(a1 + 528);
  v208_.v209[0] = v75;
  v208_.v209[1] = v76;
  v208_.v209[2] = v79;
  v81 = v80 - v48;
  if ((v64 & 1) != 0) {
    v82 = v74;
    v83 = v78;
  }
  else {
    v82 = v74;
    v83 = v78;
    if ((float)(v202 * (float)((float)((float)(PSEUDO_UNFUSED(
                                           v76 * *(float*)(a1 + 264))) +
                                       (float)(v75 * *(float*)(a1 + 260))) +
                               (float)(v79 * *(float*)(a1 + 268)))) >=
        0x0.0p+0f) {
      v161 = v79;
      v84 = v75;
      v155 = v74;
      GameRoutine_4a5a10_alt1((float*)a1, v220_.v220, v216_.v217, v218_.v219,
                              v216_.v216, v208_.v209, (float*)(a1 + 260),
                              &v222_.v223, v157, v198);
      v74 = v155;
      v75 = v84;
      v79 = v161;
      v73 = v190;
      v68 = v191;
      v67 = v192;
      v71 = v193;
      v66 = v194;
      v65 = v196;
      v83 = *(float*)(a1 + 524);
      v80 = *(float*)(a1 + 528);
      v82 = *(float*)(a1 + 532);
    }
  }
  v85 = v76 * v81;
  v86 = v176 - v200;
  v87 = v176 - v180;
  v88 = v70 * v159;
  v89 = v72 * v158;
  v90 = v83 - v180;
  v91 = v78 - v173;
  v92 = (float)(PSEUDO_UNFUSED((float)(v47 - v169) * v68)) +
        (float)(v65 * (float)(v185 - v168));
  v93 = (float)(PSEUDO_UNFUSED((float)(v185 - v168) * v67)) +
        (float)(v71 * (float)(v180 - v171));
  v94 = (float)(PSEUDO_UNFUSED((float)(v180 - v171) * v73)) +
        (float)(v66 * (float)(v47 - v169));
  v208_.v208[0] = v92;
  v208_.v208[1] = v93;
  v95 = v93 * (float)(v80 - v47);
  v208_.v208[2] = v94;
  if ((v69 & 1) != 0) {
    v96 = v82;
  }
  else {
    v97 =
        (float)(v202 * (float)((float)((float)(PSEUDO_UNFUSED(
                                           v93 * *(float*)(a1 + 264))) +
                                       (float)(v92 * *(float*)(a1 + 260))) +
                               (float)(v94 * *(float*)(a1 + 268)))) < 0x0.0p+0f;
    v96 = v82;
    if (!v97) {
      v162 = v79;
      v98 = v75;
      v156 = v74;
      v99 = (float)(PSEUDO_UNFUSED((float)(v180 - v171) * v73)) +
            (float)(v66 * (float)(v47 - v169));
      v181 = v176 - v200;
      v177 = v87;
      v172 = v88;
      v174 = v91;
      v170 = v85;
      GameRoutine_4a5a10_alt1((float*)a1, v218_.v219, v216_.v216, v220_.v221,
                              v218_.v218, v208_.v208, (float*)(a1 + 260),
                              &v222_.v223, v157, v198);
      v85 = v170;
      v88 = v172;
      v91 = v174;
      v87 = v177;
      v94 = v99;
      v75 = v98;
      v86 = v181;
      v74 = v156;
      v79 = v162;
      v73 = v190;
      v68 = v191;
      v83 = *(float*)(a1 + 524);
      v67 = v192;
      v71 = v193;
      v66 = v194;
      v65 = v196;
      v80 = *(float*)(a1 + 528);
      v96 = *(float*)(a1 + 532);
    }
  }
  v100 = v95 + (float)(v90 * v92);
  v101 = v85 + (float)(v91 * v75);
  v102 = v82 - v185;
  v103 = v89 + (float)(v86 * v164);
  v104 = v88 + (float)(v87 * v175);
  v105 = (float)(PSEUDO_UNFUSED(v71 * v166)) + (float)(v73 * v165);
  v106 = (float)(PSEUDO_UNFUSED(v66 * v165)) + (float)(v68 * v167);
  v107 = (float)(PSEUDO_UNFUSED(v65 * v167)) + (float)(v67 * v166);
  v206_.v207[0] = v105;
  v206_.v207[1] = v106;
  v206_.v207[2] = v107;
  v108 = v74 - v184;
  v109 = v96 - v179;
  v110 = (float)(PSEUDO_UNFUSED(v106 * (float)(v80 - v178))) +
         (float)((float)(v83 - v200) * v105);
  if ((v69 & 1) == 0 &&
      (float)(v202 * (float)((float)((float)(PSEUDO_UNFUSED(
                                         v106 * *(float*)(a1 + 264))) +
                                     (float)(v105 * *(float*)(a1 + 260))) +
                             (float)(v107 * *(float*)(a1 + 268)))) >=
          0x0.0p+0f) {
    v111 = v198;
    v163 = v79;
    v199 = v103;
    v201 = v94;
    v195 = v101;
    v197 = v104;
    GameRoutine_4a5a10_alt1((float*)a1, v220_.v221, v218_.v218, v220_.v220,
                            v216_.v217, v206_.v207, (float*)(a1 + 260),
                            &v222_.v223, v157, v111);
    v101 = v195;
    v104 = v197;
    v103 = v199;
    v94 = v201;
    v79 = v163;
  }
  v112 = v101 + (float)(v108 * v79);
  v113 = v103 + (float)((float)(v186 - v179) * v182);
  v114 = v104 + (float)((float)(v186 - v185) * v183);
  v115 = v100 + (float)(v102 * v94);
  v116 = v110 + (float)(v109 * v107);
  if (v202 < 0x0.0p+0f) {
    v118 = v188;
    v117 = v189;
    v119 = v187;
    if (v113 < 0x0.0p+0f) {
      goto LABEL_52;
    }
    if (v114 > 0x0.0p+0f) {
      goto LABEL_52;
    }
    if (v112 > 0x0.0p+0f) {
      goto LABEL_52;
    }
    if (v115 > 0x0.0p+0f) {
      goto LABEL_52;
    }
    v120 = 0x0.0p+0f;
    if (v116 > 0x0.0p+0f) {
      goto LABEL_52;
    }
  LABEL_34:
    v121 = GameRoutine_1a0a010(
        (float)((float)(PSEUDO_UNFUSED(v118 * v118)) + (float)(v117 * v117)) +
        (float)(v119 * v119));
    if (v121 <= 0x0.0p+0f) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v118 = v188;
  v117 = v189;
  v119 = v187;
  if (v113 <= 0x0.0p+0f && v114 >= 0x0.0p+0f && v112 >= 0x0.0p+0f &&
      v115 >= 0x0.0p+0f) {
    v120 = 0x0.0p+0f;
    if (v116 >= 0x0.0p+0f) {
      goto LABEL_34;
    }
  }
LABEL_52:
  if (v222_.v222[0] != 1) {
    return 0;
  }
  v120 = v222_.v223;
  v121 = GameRoutine_1a0a010(
      (float)((float)(PSEUDO_UNFUSED(v118 * v118)) + (float)(v117 * v117)) +
      (float)(v119 * v119));
  if (v121 > 0x0.0p+0f) {
  LABEL_35:
    v122 = 0x1.0000000000000p+0f / v121;
    v117 = v117 * v122;
    v118 = v118 * v122;
    v119 = v119 * v122;
  }
LABEL_36:
  v123 = GameRoutine_1a0ccb0(
      (float)((float)(PSEUDO_UNFUSED(v118 * *(float*)(a1 + 264))) +
              (float)(v117 * *(float*)(a1 + 260))) +
      (float)(v119 * *(float*)(a1 + 268)));
  if (v120 > *(float*)(a1 + 556)) {
    return 0;
  }
  v124 = -v123;
  v125 = *(float*)(a1 + 552);
  if (v120 == 0x0.0p+0f) {
    goto LABEL_48;
  }
  if (v120 <= v125) {
    v126 = *(float*)(a1 + 552);
  }
  else {
    v126 = v120;
  }
  if (v126 < 0x1.0000000000000p+0f) {
    v126 = 0x1.0000000000000p+0f;
  }
  if ((v127 = v126 * 0x1.0624de0000000p-10f,
       (float)(v125 - (float)(PSEUDO_UNFUSED(v126 * 0x1.0624de0000000p-10f))) >
           v120) ||
      (v128 = *(float*)(a1 + 548)) > v124 && (float)(v125 + v127) > v120 ||
      v120 < v125 && v128 == v124) {
  LABEL_48:
    *(float*)(a1 + 272) = v120;
    *(_DWORD*)(a1 + 276) = a2;
    v129 = *(_QWORD*)v14;
    *(float*)(a1 + 548) = v124;
    if (v125 >= v120) {
      v125 = v120;
    }
    *(float*)(a1 + 552) = v125;
    *(_QWORD*)(a1 + 288) = v129;
    *(float*)(a1 + 296) = v14[2];
    v130 = *((_DWORD*)v15 + 1);
    *(float*)(a1 + 300) = *v15;
    v131 = *((_DWORD*)v15 + 2);
    *(_DWORD*)(a1 + 304) = v130;
    *(_DWORD*)(a1 + 308) = v131;
    v132 = *v16;
    v133 = *((_DWORD*)v16 + 1);
    *(float*)(a1 + 324) = v117;
    *(float*)(a1 + 328) = v118;
    *(float*)(a1 + 312) = v132;
    v134 = *((_DWORD*)v16 + 2);
    *(_DWORD*)(a1 + 316) = v133;
    *(float*)(a1 + 332) = v119;
    *(_DWORD*)(a1 + 320) = v134;
    result = 1;
    if ((a3 & 1) != 0) {
      v136 = v125 * *(float*)(a1 + 348);
      v137 = *(float*)(a1 + 268);
      v138 = v125 * *(float*)(a1 + 264);
      v139 = (float)(PSEUDO_UNFUSED(v125 * *(float*)(a1 + 340))) +
             *(float*)(a1 + 352);
      v140 = (float)(PSEUDO_UNFUSED(v125 * *(float*)(a1 + 344))) +
             *(float*)(a1 + 356);
      v141 = *(float*)(a1 + 360);
      *(float*)(a1 + 64) = v139;
      *(float*)(a1 + 68) = v140;
      v142 = v136 + v141;
      v143 = *(float*)(a1 + 260);
      *(float*)(a1 + 72) = v142;
      v144 = v125 * v143;
      v145 = (float)(v125 * v137) * 0x1.0000000000000p-1f;
      v146 = *(float*)(a1 + 244);
      v147 = (float)(PSEUDO_UNFUSED(v138 * 0x1.0000000000000p-1f)) +
             *(float*)(a1 + 240);
      *(float*)(a1 + 32) =
          (float)(PSEUDO_UNFUSED(v144 * 0x1.0000000000000p-1f)) +
          *(float*)(a1 + 236);
      *(float*)(a1 + 36) = v147;
      v148 = v145 + v146;
      v149 = *(float*)(a1 + 128);
      v150 = *(float*)(a1 + 132);
      *(float*)(a1 + 40) = v148;
      v151 = *(float*)(a1 + 160);
      v152 = *(float*)(a1 + 148);
      v153 = (float)((float)(PSEUDO_UNFUSED(v140 * *(float*)(a1 + 164))) +
                     (float)(v139 * v149)) +
             (float)(v142 * *(float*)(a1 + 152));
      v154 = (float)((float)(PSEUDO_UNFUSED(v140 * v150)) +
                     (float)(v139 * *(float*)(a1 + 144))) +
             (float)(v142 * *(float*)(a1 + 168));
      *(float*)(a1 + 48) = v153;
      *(float*)(a1 + 52) = v154;
      *(float*)(a1 + 56) =
          (float)((float)(PSEUDO_UNFUSED(v140 * v152)) + (float)(v139 * v151)) +
          (float)(v142 * *(float*)(a1 + 136));
    }
  }
  else {
    result = 0;
    if (v120 < v125) {
      if (v120 <= v125) {
        v125 = v120;
      }
      *(float*)(a1 + 272) = v120;
      *(float*)(a1 + 552) = v125;
    }
  }
  return result;
}

#pragma GCC visibility pop
