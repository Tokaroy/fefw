#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 spine_TransformConstraintData_isLocal(_QWORD);
__int64 spine_TransformConstraintData_isRelative(_QWORD);
extern int* GameData_2132928[3];
extern int* GameData_2132930[2];
float spine_Bone_localToWorld(float*, float*, float*, float, float);
float spine_Bone_updateAppliedTransform(__int64);
float spine_MathUtil_atan2(float, float);
float spine_MathUtil_cos(float);
float spine_MathUtil_sin(float);
float spine_cpp_src_spine_19f40(float);
void GameRoutine_16c30();
float spine_cpp_src_spine_4efc0(__int64 a1);

float spine_cpp_src_spine_4efc0(__int64 a1)
{
  float result;
  char v3;
  char v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  unsigned __int64 v11;
  float* v12;
  float* v13;
  float* v14;
  float v15;
  float v16;
  float v17;
  unsigned __int64 v18;
  float* v19;
  float* v20;
  float* v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float* v27;
  float v28;
  float v29;
  float v30;
  _BOOL4 v31;
  __int64 v32;
  float v33;
  unsigned __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float* v39;
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
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float* v68;
  float v69;
  float v70;
  float v71;
  _BOOL4 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float* v81;
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
  float v129;
  _QWORD _98[3];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(float*)(a1 + 56) == 0x0.0p+0f && *(float*)(a1 + 60) == 0x0.0p+0f &&
      *(float*)(a1 + 64) == 0x0.0p+0f && *(float*)(a1 + 68) == 0x0.0p+0f &&
      *(float*)(a1 + 72) == 0x0.0p+0f) {
    result = *(float*)(a1 + 76);
    if (result == 0x0.0p+0f) {
      return result;
    }
  }
  v3 = spine_TransformConstraintData_isLocal(*(_QWORD*)(a1 + 8)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = spine_TransformConstraintData_isRelative(*(_QWORD*)(a1 + 8)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v3 & 1) != 0) {
    if ((v4 & 1) != 0) {
      if (*(_QWORD*)(a1 + 24) != 0) {
        _98[0] = _98[2];
        v5 = *(float*)(a1 + 56);
        v6 = *(float*)(a1 + 60);
        v7 = *(float*)(a1 + 64);
        v8 = *(float*)(a1 + 68);
        v9 = *(float*)(a1 + 72);
        v10 = *(float*)(a1 + 76);
        v11 = 0;
        v12 = *(float**)(a1 + 48);
        do {
          v13 = *(float**)(*(_QWORD*)(a1 + 40) + 8 * v11);
          v14 = *(float**)(a1 + 8);
          ((void (*)(float, float, float, float, float, float,
                     float))GameRoutine_16c30)(
              v13[23] + (float)((float)(v12[23] + v14[31]) * v6),
              v13[24] + (float)((float)(v12[24] + v14[32]) * v7),
              v13[25] + (float)((float)(v12[25] + v14[30]) * v5),
              v13[26] *
                  (float)((float)((float)((float)(v12[26] +
                                                  -0x1.0000000000000p+0f) +
                                          v14[33]) *
                                  v8) +
                          0x1.0000000000000p+0f),
              v13[27] *
                  (float)((float)((float)((float)(v12[27] +
                                                  -0x1.0000000000000p+0f) +
                                          v14[34]) *
                                  v9) +
                          0x1.0000000000000p+0f),
              v13[28], v13[29] + (float)((float)(v12[29] + v14[35]) * v10)),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          ++v11;
        } while (v11 < *(_QWORD*)(a1 + 24));
      }
    }
    else if (*(_QWORD*)(a1 + 24) != 0) {
      v15 = *(float*)(a1 + 60);
      v16 = *(float*)(a1 + 64);
      v17 = *(float*)(a1 + 76);
      v18 = 0;
      v19 = *(float**)(a1 + 48);
      do {
        v20 = *(float**)(*(_QWORD*)(a1 + 40) + 8 * v18);
        v21 = *(float**)(a1 + 8);
        v22 = v19[23];
        v23 = v19[24];
        v25 = v21[31];
        v24 = v21[32];
        if (v17 != 0x0.0p+0f) {
          v26 = (float)(v19[29] - v20[29]) + v21[35];
          v20[22] =
              v20[22] +
              (float)((float)(v26 -
                              (float)(360 *
                                      (0x4000 -
                                       (int)((float)(v26 /
                                                     -0x1.6800000000000p+8f) +
                                             0x1.0001fffffffffp+14)))) *
                      v17);
        }
        ((void (*)(float, float))GameRoutine_16c30)(
            v20[23] + (float)((float)((float)(v22 - v20[23]) + v25) * v15),
            v20[24] + (float)((float)((float)(v23 - v20[24]) + v24) * v16)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        ++v18;
      } while (v18 < *(_QWORD*)(a1 + 24));
    }
    return result;
  }
  if ((v4 & 1) == 0) {
    v68 = *(float**)(a1 + 48);
    v69 = v68[33];
    v70 = v68[34];
    v109 = *(float*)(a1 + 64);
    v111 = *(float*)(a1 + 60);
    v71 = v68[30];
    v72 = *(float*)(a1 + 64) != 0x0.0p+0f | v111 != 0x0.0p+0f;
    v113 = v68[34];
    v115 = v68[31];
    v125 = v68[33];
    v127 = v68[30];
    if ((float)((float)(v71 * v70) - (float)(PSEUDO_UNFUSED(v69 * v115))) <=
        0x0.0p+0f) {
      result = -*(float*)GameData_2132930[0];
    }
    else {
      result = *(float*)GameData_2132930[0];
    }
    if (*(_QWORD*)(a1 + 24) == 0) {
      return result;
    }
    v73 = *(_QWORD*)(a1 + 8);
    v74 = 0;
    v75 = *(float*)(a1 + 76);
    v77 = *(float*)(a1 + 68);
    v76 = *(float*)(a1 + 72);
    v121 = v75;
    v123 = *(float*)GameData_2132928[0];
    v129 = *(float*)(a1 + 56);
    v117 = -0x1.921fb60000000p+1f;
    v119 = *(float*)(v73 + 120) * result;
    v105 = (float)(PSEUDO_UNFUSED(v69 * v69)) + (float)(v71 * v71);
    v107 = result * *(float*)(v73 + 140);
    v103 = (float)(PSEUDO_UNFUSED(v70 * v70)) + (float)(v115 * v115);
    while (1) {
      v81 = *(float**)(*(_QWORD*)(a1 + 40) + 8 * v74);
      if (v129 != 0x0.0p+0f) {
        v82 = v76;
        v83 = v77;
        v85 = v81[30];
        v84 = v81[31];
        v87 = v81[33];
        v86 = v81[34];
        v88 = spine_MathUtil_atan2(v125, v127),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v89 = v119 + (float)(v88 - spine_MathUtil_atan2(v87, v85)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v89 <= 0x1.921fb60000000p+1f) {
          if (v89 < v117) {
            v89 = v89 + v123;
          }
        }
        else {
          v89 = v89 - v123;
        }
        v90 = v129 * v89;
        v91 = spine_MathUtil_cos(v129 * v89),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v92 = spine_MathUtil_sin(v90),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v81[30] = (float)(v91 * v85) - (float)(PSEUDO_UNFUSED(v87 * v92));
        v81[31] = (float)(v91 * v84) - (float)(PSEUDO_UNFUSED(v86 * v92));
        v93 = v86 * v91;
        v77 = v83;
        v76 = v82;
        v75 = v121;
        v81[33] = (float)(PSEUDO_UNFUSED(v87 * v91)) + (float)(v92 * v85);
        v81[34] = v93 + (float)(v92 * v84);
      }
      if (v72) {
        spine_Bone_localToWorld(v68, (float*)_98 + 1, (float*)_98,
                                *(float*)(*(_QWORD*)(a1 + 8) + 124LL),
                                *(float*)(*(_QWORD*)(a1 + 8) + 128LL)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        v94 = v81[35];
        v81[32] =
            v81[32] + (float)((float)(*((float*)_98 + 1) - v81[32]) * v111);
        v81[35] = v94 + (float)((float)(*(float*)_98 - v94) * v109);
        if (v77 <= 0x0.0p+0f) {
        LABEL_73:
          if (v76 > 0x0.0p+0f) {
            goto LABEL_80;
          }
          goto LABEL_74;
        }
      }
      else if (v77 <= 0x0.0p+0f) {
        goto LABEL_73;
      }
      v95 =
          spine_cpp_src_spine_19f40((float)(PSEUDO_UNFUSED(v81[33] * v81[33])) +
                                    (float)(v81[30] * v81[30])),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v95 != 0x0.0p+0f) {
        v95 = (float)(v95 +
                      (float)((float)((float)(spine_cpp_src_spine_19f40(v105) -
                                              v95) +
                                      *(float*)(*(_QWORD*)(a1 + 8) + 132LL)) *
                              v77)) /
              v95,
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v81[30] = v95 * v81[30];
      v81[33] = v95 * v81[33];
      if (v76 > 0x0.0p+0f) {
      LABEL_80:
        v96 = spine_cpp_src_spine_19f40(
            (float)(PSEUDO_UNFUSED(v81[34] * v81[34])) +
            (float)(v81[31] * v81[31])),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v96 != 0x0.0p+0f) {
          v96 =
              (float)(v96 +
                      (float)((float)((float)(spine_cpp_src_spine_19f40(v103) -
                                              v96) +
                                      *(float*)(*(_QWORD*)(a1 + 8) + 136LL)) *
                              v76)) /
              v96,
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v81[31] = v96 * v81[31];
        v81[34] = v96 * v81[34];
        if (v75 <= 0x0.0p+0f) {
          goto LABEL_64;
        }
      LABEL_83:
        v97 = v81[31];
        v98 = v81[34];
        v99 = spine_MathUtil_atan2(v98, v97),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v100 = spine_MathUtil_atan2(v113, v115),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v101 = v100 - spine_MathUtil_atan2(v125, v127),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v78 = v101 - (float)(v99 - spine_MathUtil_atan2(v81[33], v81[30])),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v78 > 0x1.921fb60000000p+1f) {
          v78 = v78 - v123;
        }
        else if (v78 < v117) {
          v78 = v78 + v123;
        }
        v79 = v99 + (float)((float)(v107 + v78) * v75);
        v80 = spine_cpp_src_spine_19f40((float)(PSEUDO_UNFUSED(v98 * v98)) +
                                        (float)(v97 * v97)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v81[31] = v80 * spine_MathUtil_cos(v79),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v81[34] = v80 * spine_MathUtil_sin(v79),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        goto LABEL_64;
      }
    LABEL_74:
      if (v75 > 0x0.0p+0f) {
        goto LABEL_83;
      }
    LABEL_64:
      result = spine_Bone_updateAppliedTransform((__int64)v81);
      if ((unsigned __int64)++v74 >= *(_QWORD*)(a1 + 24)) {
        return result;
      }
    }
  }
  v27 = *(float**)(a1 + 48);
  v28 = v27[33];
  v29 = v27[34];
  v104 = *(float*)(a1 + 64);
  v106 = *(float*)(a1 + 60);
  v30 = v27[30];
  v31 = *(float*)(a1 + 64) != 0x0.0p+0f | v106 != 0x0.0p+0f;
  v108 = v27[34];
  v110 = v27[31];
  v124 = v27[33];
  v126 = v27[30];
  if ((float)((float)(v30 * v29) - (float)(PSEUDO_UNFUSED(v28 * v110))) <=
      0x0.0p+0f) {
    result = -*(float*)GameData_2132930[0];
  }
  else {
    result = *(float*)GameData_2132930[0];
  }
  if (*(_QWORD*)(a1 + 24) != 0) {
    v32 = *(_QWORD*)(a1 + 8);
    v33 = -0x1.0000000000000p+0f;
    v34 = 0;
    v35 = *(float*)(a1 + 56);
    v37 = *(float*)(a1 + 68);
    v36 = *(float*)(a1 + 72);
    v38 = *(float*)(a1 + 76);
    v128 = v35;
    v118 = v38;
    v120 = -0x1.921fb60000000p+1f;
    v122 = *(float*)GameData_2132928[0];
    v114 = (float)(PSEUDO_UNFUSED(v28 * v28)) + (float)(v30 * v30);
    v116 = *(float*)(v32 + 120) * result;
    v112 = (float)(PSEUDO_UNFUSED(v29 * v29)) + (float)(v110 * v110);
    v102 = result * *(float*)(v32 + 140);
    do {
      v39 = *(float**)(*(_QWORD*)(a1 + 40) + 8 * v34);
      if (v35 != 0x0.0p+0f) {
        v40 = v36;
        v41 = v37;
        v42 = v39[30];
        v43 = v39[31];
        v45 = v39[33];
        v44 = v39[34];
        v46 = v116 + spine_MathUtil_atan2(v124, v126),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v47 = v46 + v122;
        if (v46 >= v120) {
          v47 = v46;
        }
        if (v46 > 0x1.921fb60000000p+1f) {
          v48 = v46 - v122;
        }
        else {
          v48 = v47;
        }
        v49 = v128 * v48;
        v50 = spine_MathUtil_cos(v128 * v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v51 = v49;
        v35 = v128;
        v52 = spine_MathUtil_sin(v51),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v39[30] = (float)(v50 * v42) - (float)(PSEUDO_UNFUSED(v45 * v52));
        v39[31] = (float)(v50 * v43) - (float)(PSEUDO_UNFUSED(v44 * v52));
        v53 = v45 * v50;
        v33 = -0x1.0000000000000p+0f;
        v54 = v53 + (float)(v52 * v42);
        v55 = (float)(PSEUDO_UNFUSED(v44 * v50)) + (float)(v52 * v43);
        v37 = v41;
        v36 = v40;
        v38 = v118;
        v39[33] = v54;
        v39[34] = v55;
      }
      if (v31) {
        spine_Bone_localToWorld(v27, (float*)_98 + 1, (float*)_98,
                                *(float*)(*(_QWORD*)(a1 + 8) + 124LL),
                                *(float*)(*(_QWORD*)(a1 + 8) + 128LL)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        v56 = v39[35];
        v39[32] = v39[32] + (float)(*((float*)_98 + 1) * v106);
        v39[35] = v56 + (float)(*(float*)_98 * v104);
      }
      if (v37 != 0x0.0p+0f) {
        v57 = (float)((float)((float)(spine_cpp_src_spine_19f40(v114) + v33) +
                              *(float*)(*(_QWORD*)(a1 + 8) + 132LL)) *
                      v37) +
              0x1.0000000000000p+0f,
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v39[30] = v39[30] * v57;
        v39[33] = v57 * v39[33];
      }
      if (v36 != 0x0.0p+0f) {
        v58 = (float)((float)((float)(spine_cpp_src_spine_19f40(v112) + v33) +
                              *(float*)(*(_QWORD*)(a1 + 8) + 136LL)) *
                      v36) +
              0x1.0000000000000p+0f,
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v39[31] = v39[31] * v58;
        v39[34] = v58 * v39[34];
      }
      if (v38 > 0x0.0p+0f) {
        v59 = spine_MathUtil_atan2(v108, v110),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v60 = v59 - spine_MathUtil_atan2(v124, v126),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v61 = v39[31];
        v62 = v39[34];
        v63 = v60 + v122;
        if (v60 >= v120) {
          v63 = v60;
        }
        if (v60 > 0x1.921fb60000000p+1f) {
          v64 = v60 - v122;
        }
        else {
          v64 = v63;
        }
        v65 =
            spine_MathUtil_atan2(v39[34], v39[31]) +
            (float)((float)(v102 + (float)(v64 - (float)(PSEUDO_UNFUSED(
                                                     0x1.921fb60000000p+1f *
                                                     0x1.0000000000000p-1f)))) *
                    v38),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v66 = spine_cpp_src_spine_19f40((float)(PSEUDO_UNFUSED(v62 * v62)) +
                                        (float)(v61 * v61)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v39[31] = v66 * spine_MathUtil_cos(v65),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v67 = v66 * spine_MathUtil_sin(v65),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v35 = v128;
        v39[34] = v67;
      }
      result = spine_Bone_updateAppliedTransform((__int64)v39);
      ++v34;
    } while (v34 < *(_QWORD*)(a1 + 24));
  }
  return result;
}

#pragma GCC visibility pop
