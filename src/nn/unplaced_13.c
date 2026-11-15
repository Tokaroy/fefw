#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_gsv_GetUserSession_plt(void);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern _DWORD SdkData_c92044[33];
extern void (*SdkData_e87798[4])();
__int64 nn_5e7350(__int64 a1, int a2, int a3);
int8x16_t* nn_691a40(int8x16_t* result);

__int64 nn_5e7350(__int64 a1, int a2, int a3)
{
  __int64 v5;
  unsigned __int64 StatusReg;
  unsigned int v7;
  void (*explicit)(_QWORD);
  unsigned int v10;

  v5 = nn_gsv_GetUserSession_plt();
  nn_os_SdkMutexType_Lock_plt(v5);
  if (*(_DWORD*)(v5 + 4) != 0) {
    v10 = *(_DWORD*)(v5 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = a2;
    *(_DWORD*)(StatusReg + 12) = a3;
    *(_QWORD*)StatusReg = 0x20000014BLL;
    v7 = nn_sm_detail_SendSessionRequest(&v10);
    if (v7 != 0 || (v7 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x10000014BLL, v7 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v7);
      }
    }
  }
  else {
    v7 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(v5);
  return v7;
}

int8x16_t* nn_691a40(int8x16_t* result)
{

#pragma clang fp contract(off)
  int8x16_t v1;
  unsigned __int32 v2;
  int v3;
  bool v4;
  unsigned int v5;
  int v6;
  bool v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v17;
  int v18;
  int8x16_t v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  unsigned __int16 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v35;
  bool v36;
  unsigned int v37;
  int v38;
  int v39;
  bool v40;
  int32x2_t v41;
  int32x2_t v42;
  int v43;
  unsigned __int64 v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  bool v49;
  __int16 v50;
  int8x16_t v51;
  int v52;
  unsigned __int64 v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  bool v57;
  __int16 v58;
  unsigned int v59;
  unsigned int v60;
  bool v61;
  int v62;
  int v63;
  bool v64;
  unsigned int v65;
  bool v66;
  unsigned int v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  int v79;
  int v80;
  bool v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  bool v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  bool v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  bool v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  bool v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned int v105;
  bool v106;
  unsigned int v107;
  unsigned int v108;
  bool v109;
  unsigned __int64 v110;
  unsigned int v111;
  bool v112;
  unsigned int v113;
  int v114;
  int v115;
  bool v116;
  unsigned int v117;
  unsigned int v118;
  bool v119;
  unsigned int v120;
  bool v121;
  int v122;
  unsigned __int64 v123;
  bool v124;
  unsigned __int64 v125;
  unsigned int v126;
  unsigned __int64 v127;
  bool v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  bool v131;
  unsigned __int64 v132;
  int v133;
  unsigned int v134;
  int v135;
  unsigned int v136;
  unsigned int v137;
  int v138;
  unsigned int v139;
  unsigned int v140;
  char v141;
  unsigned int v142;
  unsigned int v143;
  char v144;
  unsigned int v145;
  char v146;
  unsigned int v147;
  unsigned int v148;
  bool v149;
  __int16 v150;
  unsigned int v151;
  unsigned int v152;
  bool v153;
  int v154;
  unsigned __int16 v155;
  unsigned __int16 v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  bool v160;
  int v161;
  int v162;
  unsigned int v163;
  int v164;
  unsigned int v165;
  unsigned int v166;
  int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  unsigned int v171;
  unsigned int v172;
  unsigned __int8 v173;
  unsigned int v174;
  char v175;
  unsigned int v176;
  char v177;
  unsigned int v178;
  char v179;
  unsigned __int8 v180;
  unsigned int v181;
  char v182;
  unsigned int v183;
  unsigned int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  int v189;
  int v190;
  unsigned int v191;
  unsigned int v192;
  char v193;
  unsigned int v194;
  char v195;
  unsigned __int8 v196;
  unsigned int v197;
  char v198;
  unsigned int v199;
  char v200;
  unsigned int v201;
  char v202;
  unsigned int v203;
  unsigned int v204;
  unsigned int v205;
  unsigned int v206;
  int v207;
  unsigned int v208;
  float v209;
  float v210;
  bool v211;
  unsigned int v212;
  unsigned int v213;
  _BOOL4 v214;
  unsigned int v215;
  bool v216;
  int v217;
  int v218;
  unsigned int v219;

  {
    v1 = result[1];
    __asm__ volatile("" ::"w"(v1));
  }
  {
    v2 = LANES128(result[2]).n128_u32[0];
    __asm__ volatile("" ::"r"(v2));
  }
  LANES128(*(result)).n128_u64[0] = 0;
  LANES128(*(result)).n128_u64[1] = 0;
  switch (v2) {
  case 1u:
    return result;
  case 2u:
    LANES128(*(result)).n128_u64[0] = -1;
    LANES128(*(result)).n128_u64[1] = -1;
    return result;
  case 8u:
    v28 = 0;
    {
      v29 = (~LANES128(v1).n128_u32[0] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v29));
    }
    if ((LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      v29 = false;
    }
    if ((LANES128(v1).n128_u32[0] & 0x80000000) == 0 && !v29) {
      if (LANES128(v1).n128_f32[0] <= 0x0.0p+0f) {
        v28 = 0;
      }
      else {
        v30 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[0], 0x14u);
        v31 = (v30 - (v30 >> 16) + 7) >> 4;
        if (LANES128(v1).n128_f32[0] < 0x1.0000000000000p+0f) {
          v28 = v31;
        }
        else {
          v28 = -1;
        }
      }
    }
    LOWORD(v123) = 0;
    {
      v124 = (~LANES128(v1).n128_u32[1] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v124));
    }
    if ((LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0) {
      v124 = false;
    }
    if ((LANES128(v1).n128_u32[1] & 0x80000000) == 0 && !v124) {
      if (LANES128(v1).n128_f32[1] <= 0x0.0p+0f) {
        LOWORD(v123) = 0;
      }
      else if (LANES128(v1).n128_f32[1] >= 0x1.0000000000000p+0f) {
        LOWORD(v123) = -1;
      }
      else {
        v125 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[1], 0x14u);
        v123 = (v125 - (v125 >> 16) + 7) >> 4;
      }
    }
    LOWORD(v127) = 0;
    {
      v128 = (~LANES128(v1).n128_u32[2] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v128));
    }
    if ((LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0) {
      v128 = false;
    }
    if ((LANES128(v1).n128_u32[2] & 0x80000000) == 0 && !v128) {
      if (LANES128(v1).n128_f32[2] <= 0x0.0p+0f) {
        LOWORD(v127) = 0;
      }
      else if (LANES128(v1).n128_f32[2] >= 0x1.0000000000000p+0f) {
        LOWORD(v127) = -1;
      }
      else {
        v129 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[2], 0x14u);
        v127 = (v129 - (v129 >> 16) + 7) >> 4;
      }
    }
    LOWORD(v130) = 0;
    {
      v131 = (~LANES128(v1).n128_u32[3] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v131));
    }
    if ((LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0) {
      v131 = false;
    }
    if ((LANES128(v1).n128_u32[3] & 0x80000000) == 0 && !v131) {
      if (LANES128(v1).n128_f32[3] <= 0x0.0p+0f) {
        LOWORD(v130) = 0;
      }
      else if (LANES128(v1).n128_f32[3] >= 0x1.0000000000000p+0f) {
        LOWORD(v130) = -1;
      }
      else {
        v132 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[3], 0x14u);
        v130 = (v132 - (v132 >> 16) + 7) >> 4;
      }
    }
    LANES128(*(result)).n128_u16[0] = v28;
    LANES128(*(result)).n128_u16[1] = v123;
    LANES128(*(result)).n128_u16[2] = v127;
    LANES128(*(result)).n128_u16[3] = v130;
    LANES128(*(result)).n128_u16[4] = v28;
    LANES128(*(result)).n128_u16[5] = v123;
    LANES128(*(result)).n128_u16[6] = v127;
    LANES128(*(result)).n128_u16[7] = v130;
    return result;
  case 0xCu: {
    v24 = (~LANES128(v1).n128_u32[0] & 0x7F800000) == 0;
    __asm__ volatile("" ::"r"(v24));
  }
    if ((LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      v24 = false;
    }
    if ((LANES128(v1).n128_u32[0] & 0x80000000) != 0) {
      if (v24 || fabs(LANES128(v1).n128_f32[0]) <= 0x0.0p+0f) {
        LODWORD(v69) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[0]) >= 0x1.0000000000000p+0f) {
        LODWORD(v69) = 0x7FFF;
      }
      else {
        v68 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[0]), 0x13u);
        v69 = (v68 - (v68 >> 15) + 7) >> 4;
      }
      v27 = -(int)v69;
    }
    else if (v24 || LANES128(v1).n128_f32[0] <= 0x0.0p+0f) {
      LOWORD(v27) = 0;
    }
    else {
      v25 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[0], 0x13u);
      v26 = (v25 - (v25 >> 15) + 7) >> 4;
      if (LANES128(v1).n128_f32[0] < 0x1.0000000000000p+0f) {
        LOWORD(v27) = v26;
      }
      else {
        LOWORD(v27) = 0x7FFF;
      }
    }
    {
      v81 = (~LANES128(v1).n128_u32[1] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v81));
    }
    if ((LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0) {
      v81 = false;
    }
    if ((LANES128(v1).n128_u32[1] & 0x80000000) != 0) {
      if (v81 || fabs(LANES128(v1).n128_f32[1]) <= 0x0.0p+0f) {
        LODWORD(v83) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[1]) >= 0x1.0000000000000p+0f) {
        LODWORD(v83) = 0x7FFF;
      }
      else {
        v84 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[1]), 0x13u);
        v83 = (v84 - (v84 >> 15) + 7) >> 4;
      }
      LODWORD(v83) = -(int)v83;
    }
    else if (v81 || LANES128(v1).n128_f32[1] <= 0x0.0p+0f) {
      LOWORD(v83) = 0;
    }
    else if (LANES128(v1).n128_f32[1] >= 0x1.0000000000000p+0f) {
      LOWORD(v83) = 0x7FFF;
    }
    else {
      v82 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[1], 0x13u);
      v83 = (v82 - (v82 >> 15) + 7) >> 4;
    }
    {
      v85 = (~LANES128(v1).n128_u32[2] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v85));
    }
    if ((LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0) {
      v85 = false;
    }
    if ((LANES128(v1).n128_u32[2] & 0x80000000) != 0) {
      if (v85 || fabs(LANES128(v1).n128_f32[2]) <= 0x0.0p+0f) {
        LODWORD(v87) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[2]) >= 0x1.0000000000000p+0f) {
        LODWORD(v87) = 0x7FFF;
      }
      else {
        v88 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[2]), 0x13u);
        v87 = (v88 - (v88 >> 15) + 7) >> 4;
      }
      LODWORD(v87) = -(int)v87;
    }
    else if (v85 || LANES128(v1).n128_f32[2] <= 0x0.0p+0f) {
      LOWORD(v87) = 0;
    }
    else if (LANES128(v1).n128_f32[2] >= 0x1.0000000000000p+0f) {
      LOWORD(v87) = 0x7FFF;
    }
    else {
      v86 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[2], 0x13u);
      v87 = (v86 - (v86 >> 15) + 7) >> 4;
    }
    {
      v89 = (~LANES128(v1).n128_u32[3] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v89));
    }
    if ((LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0) {
      v89 = false;
    }
    if ((LANES128(v1).n128_u32[3] & 0x80000000) != 0) {
      if (v89 || fabs(LANES128(v1).n128_f32[3]) <= 0x0.0p+0f) {
        LODWORD(v91) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[3]) >= 0x1.0000000000000p+0f) {
        LODWORD(v91) = 0x7FFF;
      }
      else {
        v92 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[3]), 0x13u);
        v91 = (v92 - (v92 >> 15) + 7) >> 4;
      }
      LODWORD(v91) = -(int)v91;
    }
    else if (v89 || LANES128(v1).n128_f32[3] <= 0x0.0p+0f) {
      LOWORD(v91) = 0;
    }
    else if (LANES128(v1).n128_f32[3] >= 0x1.0000000000000p+0f) {
      LOWORD(v91) = 0x7FFF;
    }
    else {
      v90 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[3], 0x13u);
      v91 = (v90 - (v90 >> 15) + 7) >> 4;
    }
    LANES128(*(result)).n128_u16[0] = v27;
    LANES128(*(result)).n128_u16[1] = v83;
    LANES128(*(result)).n128_u16[2] = v87;
    LANES128(*(result)).n128_u16[3] = v91;
    LANES128(*(result)).n128_u16[4] = v27;
    LANES128(*(result)).n128_u16[5] = v83;
    LANES128(*(result)).n128_u16[6] = v87;
    LANES128(*(result)).n128_u16[7] = v91;
    return result;
  case 0x10u:
    *result = vqmovn_high_s32(vqmovn_s32(v1), v1);
    return result;
  case 0x14u:
    *result = vqmovn_high_u32(vqmovn_u32(v1), v1);
    return result;
  case 0x16u: {
    v32 = (unsigned __int8)(LANES128(v1).n128_u32[0] >> 23);
    __asm__ volatile("" ::"r"(v32));
  }
    {
      v33 = LANES128(v1).n128_u32[0] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v33));
    }
    if ((v32 | LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      goto LABEL_442;
    }
    if (v33 != 0 && v32 == 0) {
      goto LABEL_442;
    }
    if (v33 == 0 && v32 == 255) {
      goto LABEL_70;
    }
    if (v33 != 0 && v32 == 255) {
      LOWORD(v35) = 0x7FFF;
    }
    else if (v32 > 0x8E || v32 == 142 && v33 > 0x7FE000) {
    LABEL_70:
      LOWORD(v35) = 31744;
    }
    else if (v32 < 0x71) {
      if (v32 < 0x67) {
      LABEL_442:
        LOWORD(v35) = 0;
      }
      else {
        v35 = ((v33 >> 14) | 0x200) >> (112 - v32);
      }
    }
    else {
      v35 = (v33 >> 13) | ((v32 - 112) << 10);
    }
    {
      v147 = (unsigned __int8)(LANES128(v1).n128_u32[1] >> 23);
      __asm__ volatile("" ::"r"(v147));
    }
    {
      v148 = LANES128(v1).n128_u32[1] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v148));
    }
    if ((v147 | LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0 ||
        (v148 != 0 ? (v149 = v147 == 0) : (v149 = false), v149)) {
      v150 = 0;
    }
    else {
      if (v148 == 0 && v147 == 255) {
        goto LABEL_450;
      }
      if (v148 != 0 && v147 == 255) {
        v150 = 0x7FFF;
      }
      else {
        if (v147 > 0x8E || v147 == 142 && v148 > 0x7FE000) {
        LABEL_450:
          v150 = 31744;
          goto LABEL_452;
        }
        v163 = v148 >> 14;
        v164 = (v148 >> 13) | ((v147 - 112) << 10);
        v165 = (v163 | 0x200) >> (112 - v147);
        if (v147 < 0x67) {
          LOWORD(v165) = 0;
        }
        if (v147 >= 0x71) {
          v150 = v164;
        }
        else {
          v150 = v165;
        }
      }
    }
  LABEL_452:
    {
      v151 = (unsigned __int8)(LANES128(v1).n128_u32[2] >> 23);
      __asm__ volatile("" ::"r"(v151));
    }
    {
      v152 = LANES128(v1).n128_u32[2] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v152));
    }
    if ((v151 | LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0 ||
        (v152 != 0 ? (v153 = v151 == 0) : (v153 = false), v153)) {
      v154 = 0;
    }
    else {
      if (v152 == 0 && v151 == 255) {
        goto LABEL_459;
      }
      if (v152 != 0 && v151 == 255) {
        v154 = 0x7FFF;
      }
      else {
        if (v151 > 0x8E || v151 == 142 && v152 > 0x7FE000) {
        LABEL_459:
          v154 = 31744;
          goto LABEL_461;
        }
        v166 = v152 >> 14;
        v167 = (v152 >> 13) | ((v151 - 112) << 10);
        v168 = (v166 | 0x200) >> (112 - v151);
        if (v151 < 0x67) {
          v168 = 0;
        }
        if (v151 >= 0x71) {
          v154 = v167;
        }
        else {
          v154 = v168;
        }
      }
    }
  LABEL_461:
    {
      v155 = v35 | (LANES128(v1).n128_u32[0] >> 31 << 15);
      __asm__ volatile("" ::"r"(v155));
    }
    {
      v156 = v150 | (LANES128(v1).n128_u32[1] >> 31 << 15);
      __asm__ volatile("" ::"r"(v156));
    }
    {
      v157 = v154 | (LANES128(v1).n128_u32[2] >> 31 << 15);
      __asm__ volatile("" ::"r"(v157));
    }
    {
      v158 = (unsigned __int8)(LANES128(v1).n128_u32[3] >> 23);
      __asm__ volatile("" ::"r"(v158));
    }
    {
      v159 = LANES128(v1).n128_u32[3] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v159));
    }
    if ((v158 | LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0 ||
        (v159 != 0 ? (v160 = v158 == 0) : (v160 = false), v160)) {
      v161 = 0;
    }
    else {
      if (v159 == 0 && v158 == 255) {
        goto LABEL_468;
      }
      if (v159 != 0 && v158 == 255) {
        v161 = 0x7FFF;
      }
      else {
        if (v158 > 0x8E || v158 == 142 && v159 > 0x7FE000) {
        LABEL_468:
          v161 = 31744;
          goto LABEL_470;
        }
        v169 = v159 >> 14;
        v170 = (v159 >> 13) | ((v158 - 112) << 10);
        v171 = (v169 | 0x200) >> (112 - v158);
        if (v158 < 0x67) {
          v171 = 0;
        }
        if (v158 >= 0x71) {
          v161 = v170;
        }
        else {
          v161 = v171;
        }
      }
    }
  LABEL_470:
    LANES128(*(result)).n128_u16[0] = v155;
    LANES128(*(result)).n128_u16[1] = v156;
    {
      v162 = v161 | (LANES128(v1).n128_u32[3] >> 31 << 15);
      __asm__ volatile("" ::"r"(v162));
    }
    LANES128(*(result)).n128_u16[2] = v157;
    LANES128(*(result)).n128_u16[4] = v155;
    LANES128(*(result)).n128_u16[5] = v156;
    LANES128(*(result)).n128_u16[6] = v157;
    LANES128(*(result)).n128_u16[3] = v162;
    LANES128(*(result)).n128_u16[7] = v162;
    return result;
  case 0x18u:
  case 0x28u:
    v3 = 0;
    {
      v4 = (~LANES128(v1).n128_u32[0] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v4));
    }
    if ((LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      v4 = false;
    }
    if ((LANES128(v1).n128_u32[0] & 0x80000000) == 0 && !v4) {
      if (LANES128(v1).n128_f32[0] <= 0x0.0p+0f) {
        v3 = 0;
      }
      else {
        v5 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[0], 0xCu);
        v6 = (unsigned __int8)((v5 - (v5 >> 8) + 7) >> 4);
        if (LANES128(v1).n128_f32[0] < 0x1.0000000000000p+0f) {
          v3 = v6;
        }
        else {
          v3 = 255;
        }
      }
    }
    v63 = 0;
    {
      v66 = (~LANES128(v1).n128_u32[1] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v66));
    }
    if ((LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0) {
      v66 = false;
    }
    if ((LANES128(v1).n128_u32[1] & 0x80000000) == 0 && !v66) {
      if (LANES128(v1).n128_f32[1] <= 0x0.0p+0f) {
        v63 = 0;
      }
      else if (LANES128(v1).n128_f32[1] >= 0x1.0000000000000p+0f) {
        v63 = 65280;
      }
      else {
        v67 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[1], 0xCu);
        v63 = (16 * ((_WORD)v67 - (unsigned __int16)(v67 >> 8)) + 112) & 0xFF00;
      }
    }
    v115 = 0;
    {
      v116 = (~LANES128(v1).n128_u32[2] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v116));
    }
    if ((LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0) {
      v116 = false;
    }
    if ((LANES128(v1).n128_u32[2] & 0x80000000) == 0 && !v116) {
      if (LANES128(v1).n128_f32[2] <= 0x0.0p+0f) {
        v115 = 0;
      }
      else if (LANES128(v1).n128_f32[2] >= 0x1.0000000000000p+0f) {
        v115 = 255;
      }
      else {
        v117 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[2], 0xCu);
        v115 = (unsigned __int8)((v117 - (v117 >> 8) + 7) >> 4);
      }
    }
    v118 = 0;
    {
      v119 = (~LANES128(v1).n128_u32[3] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v119));
    }
    if ((LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0) {
      v119 = false;
    }
    if ((LANES128(v1).n128_u32[3] & 0x80000000) == 0 && !v119) {
      if (LANES128(v1).n128_f32[3] <= 0x0.0p+0f) {
        v118 = 0;
      }
      else if (LANES128(v1).n128_f32[3] >= 0x1.0000000000000p+0f) {
        v118 = -16777216;
      }
      else {
        v120 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[3], 0xCu);
        v118 = (((v120 - (v120 >> 8)) << 20) + 7340032) & 0xFF000000;
      }
    }
    v121 = v2 == 24;
    if (v2 == 24) {
      v122 = v3;
    }
    else {
      v122 = v115;
    }
    if (v121) {
      v3 = v115;
    }
    v114 = v118 | (v122 << 16);
    goto LABEL_319;
  case 0x1Cu:
  case 0x2Cu:
    if ((signed __int32)(LANES128(v1).n128_u32[0] &
                         ~(LANES128(v1).n128_i32[0] >> 31)) >= 1065353216) {
      v10 = 1065353216;
    }
    else {
      v10 = LANES128(v1).n128_u32[0] & ~(LANES128(v1).n128_i32[0] >> 31);
      __asm__ volatile("" ::"r"(v10));
    }
    if ((signed __int32)(LANES128(v1).n128_u32[1] &
                         ~(LANES128(v1).n128_i32[1] >> 31)) >= 1065353216) {
      v11 = 1065353216;
    }
    else {
      v11 = LANES128(v1).n128_u32[1] & ~(LANES128(v1).n128_i32[1] >> 31);
      __asm__ volatile("" ::"r"(v11));
    }
    if ((signed __int32)(LANES128(v1).n128_u32[2] &
                         ~(LANES128(v1).n128_i32[2] >> 31)) >= 1065353216) {
      v12 = 1065353216;
    }
    else {
      v12 = LANES128(v1).n128_u32[2] & ~(LANES128(v1).n128_i32[2] >> 31);
      __asm__ volatile("" ::"r"(v12));
    }
    v13 = v10 >> 23;
    if ((signed __int32)(LANES128(v1).n128_u32[3] &
                         ~(LANES128(v1).n128_i32[3] >> 31)) >= 1065353216) {
      v14 = 1065353216;
    }
    else {
      v14 = LANES128(v1).n128_u32[3] & ~(LANES128(v1).n128_i32[3] >> 31);
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = v10 & 0x7FFFFF;
    if ((v13 | v10 & 0x7FFFFF) == 0) {
      goto LABEL_156;
    }
    if (LANES128(v1).n128_i32[0] < 0x800000 && v15 != 0) {
      goto LABEL_156;
    }
    if (LANES128(v1).n128_i32[0] <= 947912703) {
      if (LANES128(v1).n128_i32[0] <= 864026623) {
      LABEL_156:
        v72 = 0;
        goto LABEL_157;
      }
      v17 = ((v15 >> 14) | 0x200) >> (112 - v13);
    }
    else {
      v17 = ((v15 >> 13) | (v13 << 10)) - 114688;
    }
    if ((unsigned __int16)((unsigned __int16)v17 >> 10) > 0xEu) {
      v72 = 255;
      goto LABEL_157;
    }
    if ((unsigned __int16)v17 < 0x800u) {
      goto LABEL_156;
    }
    if ((unsigned __int16)v17 == 13016) {
      goto LABEL_372;
    }
    if ((unsigned __int16)v17 >> 3 >= 0x65Bu) {
      if ((unsigned __int16)v17 >> 3 < 0x65Fu) {
      LABEL_372:
        LOBYTE(v133) = 0x80;
        goto LABEL_653;
      }
      v133 = 192;
    }
    else {
      v133 = 64;
    }
    {
      v142 = SdkData_c92044[v133];
      __asm__ volatile("" ::"r"(v142));
    }
    if ((unsigned __int16)v17 == v142) {
      goto LABEL_653;
    }
    if ((unsigned __int16)v17 >= v142) {
      if ((unsigned int)(unsigned __int16)v17 < SdkData_c92044[v133 | 1]) {
        goto LABEL_653;
      }
      LOBYTE(v133) = v133 | 0x20;
    }
    else {
      LOBYTE(v133) = v133 - 32;
    }
    {
      v145 = SdkData_c92044[(unsigned __int8)v133];
      __asm__ volatile("" ::"r"(v145));
    }
    if ((unsigned __int16)v17 == v145) {
      goto LABEL_653;
    }
    if ((unsigned __int16)v17 >= v145) {
      if ((unsigned int)(unsigned __int16)v17 <
          SdkData_c92044[(unsigned __int8)v133 + 1]) {
        goto LABEL_653;
      }
      v146 = 16;
    }
    else {
      v146 = -16;
    }
    LOBYTE(v133) = v133 + v146;
    if ((_BYTE)v133 == 0xFF) {
      goto LABEL_653;
    }
    {
      v176 = SdkData_c92044[(unsigned __int8)v133];
      __asm__ volatile("" ::"r"(v176));
    }
    if ((unsigned __int16)v17 == v176) {
      goto LABEL_653;
    }
    if ((unsigned __int16)v17 >= v176) {
      if ((unsigned int)(unsigned __int16)v17 <
          SdkData_c92044[(unsigned __int8)v133 + 1]) {
        goto LABEL_653;
      }
      v177 = 8;
    }
    else {
      v177 = -8;
    }
    v180 = v133 + v177;
    if (v180 == 0xFF) {
      goto LABEL_652;
    }
    {
      v181 = SdkData_c92044[v180];
      __asm__ volatile("" ::"r"(v181));
    }
    if ((unsigned __int16)v17 == v181) {
      goto LABEL_652;
    }
    if ((unsigned __int16)v17 >= v181) {
      LOBYTE(v133) = v180;
      if ((unsigned int)(unsigned __int16)v17 < SdkData_c92044[v180 + 1]) {
        goto LABEL_653;
      }
      v182 = 4;
    }
    else {
      v182 = -4;
    }
    v180 += v182;
    if (v180 == 0xFF) {
      goto LABEL_652;
    }
    {
      v201 = SdkData_c92044[v180];
      __asm__ volatile("" ::"r"(v201));
    }
    if ((unsigned __int16)v17 == v201) {
      goto LABEL_652;
    }
    if ((unsigned __int16)v17 >= v201) {
      LOBYTE(v133) = v180;
      if ((unsigned int)(unsigned __int16)v17 < SdkData_c92044[v180 + 1]) {
        goto LABEL_653;
      }
      v202 = 2;
    }
    else {
      v202 = -2;
    }
    v180 += v202;
    if (v180 == 0xFF) {
    LABEL_652:
      LOBYTE(v133) = v180;
    }
    else {
      {
        v219 = SdkData_c92044[v180];
        __asm__ volatile("" ::"r"(v219));
      }
      LOBYTE(v133) = v180;
      if ((unsigned __int16)v17 != v219) {
        if ((unsigned __int16)v17 >= v219) {
          if ((unsigned int)(unsigned __int16)v17 < SdkData_c92044[v180 + 1]) {
            LOBYTE(v133) = v180;
          }
          else {
            LOBYTE(v133) = v180 + 1;
          }
        }
        else {
          LOBYTE(v133) = v180 - 1;
        }
      }
    }
  LABEL_653:
    v72 = (unsigned __int8)v133;
  LABEL_157:
    v73 = v11 >> 23;
    v74 = v11 & 0x7FFFFF;
    if ((v73 | v74) == 0) {
      goto LABEL_167;
    }
    if (LANES128(v1).n128_i32[1] < 0x800000 && v74 != 0) {
      goto LABEL_167;
    }
    if (LANES128(v1).n128_i32[1] <= 947912703) {
      if (LANES128(v1).n128_i32[1] <= 864026623) {
      LABEL_167:
        LOWORD(v76) = 0;
      }
      else {
        v76 = ((v74 >> 14) | 0x200) >> (112 - v73);
      }
    }
    else {
      v76 = ((v74 >> 13) | (v73 << 10)) - 114688;
    }
    v77 = (__int16)v76 & ~((__int16)v76 >> 31);
    if ((v77 & 0x3FF) != 0) {
      v78 = 0;
    }
    else {
      v78 = v77;
    }
    if ((~v77 & 0x7C00) == 0) {
      v77 = v78;
    }
    if (v77 >> 10 > 0xE) {
      v79 = 65280;
      goto LABEL_539;
    }
    if (v77 < 0x800) {
      v79 = 0;
      goto LABEL_539;
    }
    if (v77 == 13016) {
      goto LABEL_178;
    }
    if (v77 >> 3 >= 0x65B) {
      if (v77 >> 3 < 0x65F) {
      LABEL_178:
        LOBYTE(v80) = 0x80;
        goto LABEL_538;
      }
      v80 = 192;
    }
    else {
      v80 = 64;
    }
    {
      v126 = SdkData_c92044[v80];
      __asm__ volatile("" ::"r"(v126));
    }
    if (v77 == v126) {
      goto LABEL_538;
    }
    if (v77 >= v126) {
      if (v77 < SdkData_c92044[v80 | 1]) {
        goto LABEL_538;
      }
      LOBYTE(v80) = v80 | 0x20;
    }
    else {
      LOBYTE(v80) = v80 - 32;
    }
    {
      v140 = SdkData_c92044[(unsigned __int8)v80];
      __asm__ volatile("" ::"r"(v140));
    }
    if (v77 == v140) {
      goto LABEL_538;
    }
    if (v77 >= v140) {
      if (v77 < SdkData_c92044[(unsigned __int8)v80 + 1]) {
        goto LABEL_538;
      }
      v141 = 16;
    }
    else {
      v141 = -16;
    }
    LOBYTE(v80) = v80 + v141;
    if ((_BYTE)v80 == 0xFF) {
      goto LABEL_538;
    }
    {
      v143 = SdkData_c92044[(unsigned __int8)v80];
      __asm__ volatile("" ::"r"(v143));
    }
    if (v77 == v143) {
      goto LABEL_538;
    }
    if (v77 >= v143) {
      if (v77 < SdkData_c92044[(unsigned __int8)v80 + 1]) {
        goto LABEL_538;
      }
      v144 = 8;
    }
    else {
      v144 = -8;
    }
    v173 = v80 + v144;
    if (v173 == 0xFF) {
      goto LABEL_537;
    }
    {
      v174 = SdkData_c92044[v173];
      __asm__ volatile("" ::"r"(v174));
    }
    if (v77 == v174) {
      goto LABEL_537;
    }
    if (v77 >= v174) {
      LOBYTE(v80) = v173;
      if (v77 < SdkData_c92044[v173 + 1]) {
        goto LABEL_538;
      }
      v175 = 4;
    }
    else {
      v175 = -4;
    }
    v173 += v175;
    if (v173 == 0xFF) {
      goto LABEL_537;
    }
    {
      v178 = SdkData_c92044[v173];
      __asm__ volatile("" ::"r"(v178));
    }
    if (v77 == v178) {
      goto LABEL_537;
    }
    if (v77 >= v178) {
      LOBYTE(v80) = v173;
      if (v77 < SdkData_c92044[v173 + 1]) {
        goto LABEL_538;
      }
      v179 = 2;
    }
    else {
      v179 = -2;
    }
    v173 += v179;
    if (v173 == 0xFF) {
    LABEL_537:
      LOBYTE(v80) = v173;
    }
    else {
      {
        v183 = SdkData_c92044[v173];
        __asm__ volatile("" ::"r"(v183));
      }
      LOBYTE(v80) = v173;
      if (v77 != v183) {
        if (v77 >= v183) {
          if (v77 < SdkData_c92044[v173 + 1]) {
            LOBYTE(v80) = v173;
          }
          else {
            LOBYTE(v80) = v173 + 1;
          }
        }
        else {
          LOBYTE(v80) = v173 - 1;
        }
      }
    }
  LABEL_538:
    v79 = (unsigned __int8)v80 << 8;
  LABEL_539:
    v184 = v12 >> 23;
    v185 = v12 & 0x7FFFFF;
    if ((v184 | v185) == 0 ||
        LANES128(v1).n128_i32[2] < 0x800000 && v185 != 0) {
      goto LABEL_542;
    }
    if (LANES128(v1).n128_i32[2] <= 947912703) {
      if (LANES128(v1).n128_i32[2] <= 864026623) {
      LABEL_542:
        LOWORD(v186) = 0;
      }
      else {
        v186 = ((v185 >> 14) | 0x200) >> (112 - v184);
      }
    }
    else {
      v186 = ((v185 >> 13) | (v184 << 10)) - 114688;
    }
    v187 = (__int16)v186 & ~((__int16)v186 >> 31);
    if ((v187 & 0x3FF) != 0) {
      v188 = 0;
    }
    else {
      v188 = v187;
    }
    if ((~v187 & 0x7C00) == 0) {
      v187 = v188;
    }
    if (v187 >> 10 > 0xE) {
      v189 = 255;
      goto LABEL_602;
    }
    if (v187 < 0x800) {
      v189 = 0;
      goto LABEL_602;
    }
    if (v187 == 13016) {
      goto LABEL_555;
    }
    if (v187 >> 3 >= 0x65B) {
      if (v187 >> 3 < 0x65F) {
      LABEL_555:
        LOBYTE(v190) = 0x80;
        goto LABEL_601;
      }
      v190 = 192;
    }
    else {
      v190 = 64;
    }
    {
      v191 = SdkData_c92044[v190];
      __asm__ volatile("" ::"r"(v191));
    }
    if (v187 == v191) {
      goto LABEL_601;
    }
    if (v187 >= v191) {
      if (v187 < SdkData_c92044[v190 | 1]) {
        goto LABEL_601;
      }
      LOBYTE(v190) = v190 | 0x20;
    }
    else {
      LOBYTE(v190) = v190 - 32;
    }
    {
      v192 = SdkData_c92044[(unsigned __int8)v190];
      __asm__ volatile("" ::"r"(v192));
    }
    if (v187 == v192) {
      goto LABEL_601;
    }
    if (v187 >= v192) {
      if (v187 < SdkData_c92044[(unsigned __int8)v190 + 1]) {
        goto LABEL_601;
      }
      v193 = 16;
    }
    else {
      v193 = -16;
    }
    LOBYTE(v190) = v190 + v193;
    if ((_BYTE)v190 == 0xFF) {
      goto LABEL_601;
    }
    {
      v194 = SdkData_c92044[(unsigned __int8)v190];
      __asm__ volatile("" ::"r"(v194));
    }
    if (v187 == v194) {
      goto LABEL_601;
    }
    if (v187 >= v194) {
      if (v187 < SdkData_c92044[(unsigned __int8)v190 + 1]) {
        goto LABEL_601;
      }
      v195 = 8;
    }
    else {
      v195 = -8;
    }
    v196 = v190 + v195;
    if (v196 == 0xFF) {
      goto LABEL_600;
    }
    {
      v197 = SdkData_c92044[v196];
      __asm__ volatile("" ::"r"(v197));
    }
    if (v187 == v197) {
      goto LABEL_600;
    }
    if (v187 >= v197) {
      LOBYTE(v190) = v196;
      if (v187 < SdkData_c92044[v196 + 1]) {
        goto LABEL_601;
      }
      v198 = 4;
    }
    else {
      v198 = -4;
    }
    v196 += v198;
    if (v196 == 0xFF) {
      goto LABEL_600;
    }
    {
      v199 = SdkData_c92044[v196];
      __asm__ volatile("" ::"r"(v199));
    }
    if (v187 == v199) {
      goto LABEL_600;
    }
    if (v187 >= v199) {
      LOBYTE(v190) = v196;
      if (v187 < SdkData_c92044[v196 + 1]) {
        goto LABEL_601;
      }
      v200 = 2;
    }
    else {
      v200 = -2;
    }
    v196 += v200;
    if (v196 == 0xFF) {
    LABEL_600:
      LOBYTE(v190) = v196;
    }
    else {
      {
        v203 = SdkData_c92044[v196];
        __asm__ volatile("" ::"r"(v203));
      }
      LOBYTE(v190) = v196;
      if (v187 != v203) {
        if (v187 >= v203) {
          if (v187 < SdkData_c92044[v196 + 1]) {
            LOBYTE(v190) = v196;
          }
          else {
            LOBYTE(v190) = v196 + 1;
          }
        }
        else {
          LOBYTE(v190) = v196 - 1;
        }
      }
    }
  LABEL_601:
    v189 = (unsigned __int8)v190;
  LABEL_602:
    v204 = v14 >> 23;
    v205 = v14 & 0x7FFFFF;
    if ((v204 | v205) == 0 ||
        LANES128(v1).n128_i32[3] < 0x800000 && v205 != 0) {
      goto LABEL_605;
    }
    if (LANES128(v1).n128_i32[3] <= 947912703) {
      if (LANES128(v1).n128_i32[3] <= 864026623) {
      LABEL_605:
        v206 = 0;
      }
      else {
        v206 = ((v205 >> 14) | 0x200) >> (112 - v204);
      }
    }
    else {
      v206 = ((v205 >> 13) | (v204 << 10)) - 114688;
    }
    v207 = (v206 >> 10) & 0x1F;
    v208 = v206 & 0x3FF;
    if ((v207 | v208) != 0) {
      if ((v206 & 0x3FF) == 0 || v207 != 0) {
        if ((v206 & 0x3FF) != 0 || v207 != 31) {
          if ((v206 & 0x3FF) != 0 && v207 == 31) {
            v210 = __builtin_nanf("");
          }
          else {
            LODWORD(v210) = ((v208 << 13) | (v207 << 23)) + 939524096;
          }
        }
        else {
          v210 = __builtin_inff();
        }
      }
      else {
        v209 = vcvtd_n_f64_u32(v208, 0x18u);
        v210 = v209;
      }
    }
    else {
      v210 = 0x0.0p+0f;
    }
    v211 = v206 >= 0x8000;
    v212 = v206 >> 15;
    v213 = 0;
    if (v211) {
      LODWORD(v210) |= 0x80000000;
    }
    v214 = (~LODWORD(v210) & 0x7F800000) != 0;
    if ((LODWORD(v210) & 0x7FFFFF) == 0) {
      v214 = true;
    }
    if (v212 == 0 && v210 > 0x0.0p+0f && v214) {
      if (v210 >= 0x1.0000000000000p+0f) {
        v213 = -16777216;
      }
      else {
        v215 = vcvtd_n_u64_f64(v210, 0xCu);
        v213 = (((v215 - (v215 >> 8)) << 20) + 7340032) & 0xFF000000;
      }
    }
    v216 = v2 == 28;
    if (v2 == 28) {
      v217 = v72;
    }
    else {
      v217 = v189;
    }
    if (v216) {
      v218 = v189;
    }
    else {
      v218 = v72;
    }
    v46 = v79 | (v217 << 16);
    v45 = v213 | v218;
    goto LABEL_640;
  case 0x20u:
  case 0x3Cu:
    v3 = 0;
    {
      v7 = (~LANES128(v1).n128_u32[0] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v7));
    }
    if ((LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      v7 = false;
    }
    if ((LANES128(v1).n128_u32[0] & 0x80000000) == 0 && !v7) {
      if (LANES128(v1).n128_f32[0] <= 0x0.0p+0f) {
        v3 = 0;
      }
      else {
        v8 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[0], 0xEu);
        v9 = ((v8 - (v8 >> 10) + 7) >> 4) & 0x3FF;
        if (LANES128(v1).n128_f32[0] < 0x1.0000000000000p+0f) {
          v3 = v9;
        }
        else {
          v3 = 1023;
        }
      }
    }
    v63 = 0;
    {
      v64 = (~LANES128(v1).n128_u32[1] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v64));
    }
    if ((LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0) {
      v64 = false;
    }
    if ((LANES128(v1).n128_u32[1] & 0x80000000) == 0 && !v64) {
      if (LANES128(v1).n128_f32[1] <= 0x0.0p+0f) {
        v63 = 0;
      }
      else if (LANES128(v1).n128_f32[1] >= 0x1.0000000000000p+0f) {
        v63 = 1047552;
      }
      else {
        v65 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[1], 0xEu);
        v63 = (((v65 - (v65 >> 10)) << 6) + 448) & 0xFFC00;
      }
    }
    v105 = 0;
    {
      v106 = (~LANES128(v1).n128_u32[2] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v106));
    }
    if ((LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0) {
      v106 = false;
    }
    if ((LANES128(v1).n128_u32[2] & 0x80000000) == 0 && !v106) {
      if (LANES128(v1).n128_f32[2] <= 0x0.0p+0f) {
        v105 = 0;
      }
      else if (LANES128(v1).n128_f32[2] >= 0x1.0000000000000p+0f) {
        v105 = 1023;
      }
      else {
        v107 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[2], 0xEu);
        v105 = ((v107 - (v107 >> 10) + 7) >> 4) & 0x3FF;
      }
    }
    v108 = 0;
    {
      v109 = (~LANES128(v1).n128_u32[3] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v109));
    }
    if ((LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0) {
      v109 = false;
    }
    if ((LANES128(v1).n128_u32[3] & 0x80000000) != 0 || v109) {
      goto LABEL_288;
    }
    if (LANES128(v1).n128_f32[3] <= 0x0.0p+0f) {
      goto LABEL_286;
    }
    if (LANES128(v1).n128_f32[3] >= 0x1.0000000000000p+0f) {
      v108 = -1073741824;
    }
    else {
      v110 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[3], 0xEu);
      v111 =
          (((unsigned int)v110 - (unsigned int)(v110 >> 10) + 7) >> 4) & 0x3FF;
      if (v111 >= 0xC0) {
        if (v111 >= 0x200) {
          if (v111 >= 0x340) {
            v108 = -1073741824;
          }
          else {
            v108 = 0x80000000;
          }
        }
        else {
          v108 = 0x40000000;
        }
      }
      else {
      LABEL_286:
        v108 = 0;
      }
    }
  LABEL_288:
    v112 = v2 == 32;
    if (v2 == 32) {
      v113 = v105;
    }
    else {
      v113 = v3;
    }
    if (!v112) {
      v3 = v105;
    }
    v114 = v108 | (v113 << 20);
  LABEL_319:
    v54 = v114 | v63 | v3;
    goto LABEL_641;
  case 0x24u: {
    v18 = LANES128(v1).n128_u32[0];
    __asm__ volatile("" ::"r"(v18));
  }
    v19 = vextq_s8(v1, v1, 8u);
    if (LANES128(v1).n128_u32[0] >= 0x3FF) {
      v18 = 1023;
    }
    if (LANES128(v1).n128_u32[2] >= 0x3FF) {
      v20 = 1023;
    }
    else {
      v20 = LANES128(v1).n128_i32[2];
      __asm__ volatile("" ::"r"(v20));
    }
    LANES128(v1).n128_u32[0] = LANES128(v19).n128_u32[1];
    v21 = LANES64_OF(
              vshl_u32(vmin_u32(COERCE_AS(uint32x2_t, LANES128(v1).n128_u64[0]),
                                COERCE_AS(uint32x2_t, 0x3FF00000003LL)),
                       COERCE_AS(uint32x2_t, 0xA0000001ELL)))
              .n64_u64[0];
    v22 = DWORDn(v21, sizeof(v21) / 4 - 1);
    v23 = v21 | (v20 << 20);
    goto LABEL_103;
  case 0x30u: {
    v36 = (~LANES128(v1).n128_u32[0] & 0x7F800000) == 0;
    __asm__ volatile("" ::"r"(v36));
  }
    if ((LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0) {
      v36 = false;
    }
    if ((LANES128(v1).n128_u32[0] & 0x80000000) != 0) {
      if (v36 || fabs(LANES128(v1).n128_f32[0]) <= 0x0.0p+0f) {
        LOBYTE(v71) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[0]) >= 0x1.0000000000000p+0f) {
        LOBYTE(v71) = 127;
      }
      else {
        v70 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[0]), 0xBu);
        v71 = (v70 - (v70 >> 7) + 7) >> 4;
      }
      v38 = (unsigned __int8)-(char)v71;
    }
    else if (v36 || LANES128(v1).n128_f32[0] <= 0x0.0p+0f) {
      v38 = 0;
    }
    else if (LANES128(v1).n128_f32[0] >= 0x1.0000000000000p+0f) {
      v38 = 127;
    }
    else {
      v37 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[0], 0xBu);
      v38 = (unsigned __int8)((v37 - (v37 >> 7) + 7) >> 4);
    }
    {
      v93 = (~LANES128(v1).n128_u32[1] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v93));
    }
    if ((LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0) {
      v93 = false;
    }
    if ((LANES128(v1).n128_u32[1] & 0x80000000) != 0) {
      if (v93 || fabs(LANES128(v1).n128_f32[1]) <= 0x0.0p+0f) {
        LODWORD(v95) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[1]) >= 0x1.0000000000000p+0f) {
        LODWORD(v95) = 127;
      }
      else {
        v96 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[1]), 0xBu);
        v95 = (v96 - (v96 >> 7) + 7) >> 4;
      }
      LODWORD(v95) = -(int)v95;
    }
    else if (v93 || LANES128(v1).n128_f32[1] <= 0x0.0p+0f) {
      LOBYTE(v95) = 0;
    }
    else if (LANES128(v1).n128_f32[1] >= 0x1.0000000000000p+0f) {
      LOBYTE(v95) = 127;
    }
    else {
      v94 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[1], 0xBu);
      v95 = (v94 - (v94 >> 7) + 7) >> 4;
    }
    {
      v97 = (~LANES128(v1).n128_u32[2] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v97));
    }
    if ((LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0) {
      v97 = false;
    }
    if ((LANES128(v1).n128_u32[2] & 0x80000000) != 0) {
      if (v97 || fabs(LANES128(v1).n128_f32[2]) <= 0x0.0p+0f) {
        LODWORD(v99) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[2]) >= 0x1.0000000000000p+0f) {
        LODWORD(v99) = 127;
      }
      else {
        v100 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[2]), 0xBu);
        v99 = (v100 - (v100 >> 7) + 7) >> 4;
      }
      LODWORD(v99) = -(int)v99;
    }
    else if (v97 || LANES128(v1).n128_f32[2] <= 0x0.0p+0f) {
      LOBYTE(v99) = 0;
    }
    else if (LANES128(v1).n128_f32[2] >= 0x1.0000000000000p+0f) {
      LOBYTE(v99) = 127;
    }
    else {
      v98 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[2], 0xBu);
      v99 = (v98 - (v98 >> 7) + 7) >> 4;
    }
    {
      v101 = (~LANES128(v1).n128_u32[3] & 0x7F800000) == 0;
      __asm__ volatile("" ::"r"(v101));
    }
    if ((LANES128(v1).n128_u32[3] & 0x7FFFFF) == 0) {
      v101 = false;
    }
    if ((LANES128(v1).n128_u32[3] & 0x80000000) != 0) {
      if (v101 || fabs(LANES128(v1).n128_f32[3]) <= 0x0.0p+0f) {
        LODWORD(v103) = 0;
      }
      else if (fabs(LANES128(v1).n128_f32[3]) >= 0x1.0000000000000p+0f) {
        LODWORD(v103) = 127;
      }
      else {
        v104 = vcvtd_n_u64_f64(fabs(LANES128(v1).n128_f32[3]), 0xBu);
        v103 = (v104 - (v104 >> 7) + 7) >> 4;
      }
      LODWORD(v103) = -(int)v103;
    }
    else if (v101 || LANES128(v1).n128_f32[3] <= 0x0.0p+0f) {
      LODWORD(v103) = 0;
    }
    else if (LANES128(v1).n128_f32[3] >= 0x1.0000000000000p+0f) {
      LODWORD(v103) = 127;
    }
    else {
      v102 = vcvtd_n_u64_f64(LANES128(v1).n128_f32[3], 0xBu);
      v103 = (v102 - (v102 >> 7) + 7) >> 4;
    }
    v54 = ((unsigned __int8)v99 << 16) | ((_DWORD)v103 << 24) |
          ((unsigned __int8)v95 << 8) | v38;
    goto LABEL_641;
  case 0x34u: {
    v39 = LANES128(v1).n128_u32[0];
    __asm__ volatile("" ::"r"(v39));
  }
    {
      v40 = (signed __int32)LANES128(v1).n128_u32[0] <= -128;
      __asm__ volatile("" ::"r"(v40));
    }
    LANES64(v41).n64_u64[0] = LANES128_OF(vextq_s8(v1, v1, 4u)).n128_u64[0];
    if (v40) {
      v39 = -128;
    }
    LANES64(v42).n64_u64[0] =
        LANES64_OF(vmax_s32(v41, COERCE_AS(int32x2_t, 0xFFFFFF80FFFFFF80LL)))
            .n64_u64[0];
    if (v39 >= 127) {
      LOBYTE(v39) = 127;
    }
    if (LANES128(v1).n128_i32[3] <= -128) {
      v43 = -128;
    }
    else {
      v43 = LANES128(v1).n128_i32[3];
      __asm__ volatile("" ::"r"(v43));
    }
    if (v43 >= 127) {
      v43 = 127;
    }
    v44 = LANES64_OF(vand_s8(vshl_u32(vmin_s32(v42, COERCE_AS(int32x2_t,
                                                              0x7F0000007FLL)),
                                      COERCE_AS(uint32x2_t, 0x1000000008LL)),
                             COERCE_AS(int8x8_t, 0xFF00000000FF00LL)))
              .n64_u64[0];
    v45 = DWORDn(v44, sizeof(v44) / 4 - 1) | (v43 << 24);
    v46 = v44 | (unsigned __int8)v39;
    goto LABEL_640;
  case 0x38u:
    v51 = vextq_s8(v1, v1, 8u);
    {
      v18 = LANES128(v1).n128_u32[0];
      __asm__ volatile("" ::"r"(v18));
    }
    if (LANES128(v1).n128_u32[0] >= 0xFF) {
      v18 = 255;
    }
    LANES128(v1).n128_u32[0] = LANES128(v51).n128_u32[1];
    if (LANES128(v1).n128_u32[2] >= 0xFF) {
      v52 = 255;
    }
    else {
      v52 = LANES128(v1).n128_i32[2];
      __asm__ volatile("" ::"r"(v52));
    }
    v53 = LANES64_OF(
              vshl_u32(vmin_u32(COERCE_AS(uint32x2_t, LANES128(v1).n128_u64[0]),
                                COERCE_AS(uint32x2_t, 0xFF000000FFLL)),
                       COERCE_AS(uint32x2_t, 0x800000018LL)))
              .n64_u64[0];
    v22 = DWORDn(v53, sizeof(v53) / 4 - 1);
    v23 = v53 | (v52 << 16);
  LABEL_103:
    v54 = v23 | v18 | v22;
    goto LABEL_641;
  case 0x40u: {
    v47 = (unsigned __int8)(LANES128(v1).n128_u32[0] >> 23);
    __asm__ volatile("" ::"r"(v47));
  }
    {
      v48 = LANES128(v1).n128_u32[0] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v48));
    }
    if ((v47 | LANES128(v1).n128_u32[0] & 0x7FFFFF) == 0 ||
        (v48 != 0 ? (v49 = v47 == 0) : (v49 = false), v49)) {
      v50 = 0;
    }
    else {
      if (v48 == 0 && v47 == 255) {
        goto LABEL_96;
      }
      if (v48 != 0 && v47 == 255) {
        v50 = 0x7FFF;
      }
      else {
        if (v47 > 0x8E || v47 == 142 && v48 > 0x7FE000) {
        LABEL_96:
          v50 = 31744;
          goto LABEL_105;
        }
        v134 = v48 >> 14;
        v135 = (v48 >> 13) | ((v47 - 112) << 10);
        v136 = (v134 | 0x200) >> (112 - v47);
        if (v47 < 0x67) {
          LOWORD(v136) = 0;
        }
        if (v47 >= 0x71) {
          v50 = v135;
        }
        else {
          v50 = v136;
        }
      }
    }
  LABEL_105:
    {
      v55 = (unsigned __int8)(LANES128(v1).n128_u32[1] >> 23);
      __asm__ volatile("" ::"r"(v55));
    }
    {
      v56 = LANES128(v1).n128_u32[1] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v56));
    }
    if ((v55 | LANES128(v1).n128_u32[1] & 0x7FFFFF) == 0 ||
        (v56 != 0 ? (v57 = v55 == 0) : (v57 = false), v57)) {
      v58 = 0;
    }
    else {
      if (v56 == 0 && v55 == 255) {
        goto LABEL_112;
      }
      if (v56 != 0 && v55 == 255) {
        v58 = 0x7FFF;
      }
      else {
        if (v55 > 0x8E || v55 == 142 && v56 > 0x7FE000) {
        LABEL_112:
          v58 = 31744;
          goto LABEL_114;
        }
        v137 = v56 >> 14;
        v138 = (v56 >> 13) | ((v55 - 112) << 10);
        v139 = (v137 | 0x200) >> (112 - v55);
        if (v55 < 0x67) {
          LOWORD(v139) = 0;
        }
        if (v55 >= 0x71) {
          v58 = v138;
        }
        else {
          v58 = v139;
        }
      }
    }
  LABEL_114:
    v46 =
        ((__int16)(v50 | (LANES128(v1).n128_u32[0] >> 31 << 15)) &
         (unsigned int)~(
             (__int16)(v50 | (LANES128(v1).n128_u32[0] >> 31 << 15)) >> 31)) >>
        4;
    {
      v59 = (unsigned __int8)(LANES128(v1).n128_u32[2] >> 23);
      __asm__ volatile("" ::"r"(v59));
    }
    {
      v60 = LANES128(v1).n128_u32[2] & 0x7FFFFF;
      __asm__ volatile("" ::"r"(v60));
    }
    if ((v59 | LANES128(v1).n128_u32[2] & 0x7FFFFF) == 0 ||
        (v60 != 0 ? (v61 = v59 == 0) : (v61 = false), v61)) {
      v62 = 0;
    }
    else {
      if (v60 == 0 && v59 == 255) {
        goto LABEL_121;
      }
      if (v60 != 0 && v59 == 255) {
        v62 = 0x7FFF;
      }
      else {
        if (v59 > 0x8E || v59 == 142 && v60 > 0x7FE000) {
        LABEL_121:
          v62 = 31744;
          goto LABEL_123;
        }
        if (v59 < 0x71) {
          v172 = ((v60 >> 14) | 0x200) >> (112 - v59);
          if (v59 >= 0x67) {
            v62 = v172;
          }
          else {
            v62 = 0;
          }
        }
        else {
          v62 = (v60 >> 13) | ((v59 - 112) << 10);
        }
      }
    }
  LABEL_123:
    v45 =
        ((v62 &
          ~((signed __int32)((v62 | HIWORD(LANES128(v1).n128_u32[2])) << 16) >>
            31))
         << 17) &
            0xFFC00000 |
        (((__int16)(v58 | (LANES128(v1).n128_u32[1] >> 31 << 15)) &
          (unsigned int)~(
              (__int16)(v58 | (LANES128(v1).n128_u32[1] >> 31 << 15)) >> 31)) >>
         4 << 11);
  LABEL_640:
    v54 = v45 | v46;
  LABEL_641:
    v1 = vdupq_n_s32(v54);
  LABEL_642:
    *result = v1;
    return result;
  default:
    goto LABEL_642;
  }
}

#pragma GCC visibility pop
