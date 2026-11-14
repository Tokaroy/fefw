#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_5b8f20(_DWORD* result, _QWORD*);
__int64 CalculateAllocatedSizeHeap_5c78c0(__int64, __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_5dec60(unsigned __int8*);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
extern _DWORD GameData_1a82cf0[4];
extern _DWORD GameData_1a82d60[4];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
extern float GameData_1b01708[8];
__int64 nn_vfx_5b7840(__int64 a1, __int64 a2);

__int64 nn_vfx_5b7840(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 (***v43)(_QWORD);
  int v44;
  float v45;
  int v46;
  __int64 v47;
  __int64 v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  float v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  float v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  float v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  float v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  int v151;
  __int64 v152;
  __int64 v153;
  float v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  int v172;
  int v173;
  _DWORD* v174;
  float32x2_t* v175;
  float32x4_t v176;
  float32x2_t v177;
  __int128 v178;
  int8x16_t v179;
  int8x16_t v180;
  int8x16_t v181;
  int8x16_t v182;
  int8x16_t v183;
  int8x16_t v184;
  int32x4_t v185;
  float32x4_t v186;
  int8x16_t v187;
  __int64 v188;
  __int64 v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  int32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  float32x4_t v200;
  int8x16_t v201;
  int8x16_t v202;
  float32x4_t v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  __int64 result;
  __int64 v208;
  __int64 v209;
  __int64* v210;
  _QWORD* v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  unsigned int v229;
  _DWORD* v230;
  __int64 v231;
  unsigned int v232;
  float v233;
  float v234;
  _DWORD* v235;
  _DWORD* v236;
  unsigned int v237;
  _DWORD* v238;
  unsigned int v239;
  float v240;
  float v241;
  float v242;
  _DWORD* v243;
  unsigned int v244;
  _DWORD* v245;
  unsigned __int8* v246;
  _DWORD* v247;
  _DWORD* v248;
  unsigned int v249;
  float v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;

  v3 = (__int64*)(a1 + 16);
  v2 = *(_QWORD*)(a1 + 16);
  if (*(_QWORD*)(v2 + 2544) != -1) {
    v6 = GameRoutine_5dec60((unsigned __int8*)(v2 + 2544));
    v2 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 96) = v6;
  }
  if (*(_QWORD*)(v2 + 2576) != -1) {
    v7 = GameRoutine_5dec60((unsigned __int8*)(v2 + 2576));
    v2 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 104) = v7;
  }
  if (*(_QWORD*)(v2 + 2608) != -1) {
    v8 = GameRoutine_5dec60((unsigned __int8*)(v2 + 2608));
    v2 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 112) = v8;
  }
  if (*(_BYTE*)(v2 + 2460) != 0) {
    if (*(_BYTE*)(v2 + 2462) != 0) {
      goto LABEL_9;
    }
  }
  else {
    v172 = *(_DWORD*)(v2 + 2472);
    *(_QWORD*)(v2 + 960) = *(_QWORD*)(v2 + 2464);
    *(_DWORD*)(v2 + 968) = v172;
    v2 = *v3;
    if (*(_BYTE*)(*v3 + 2462) != 0) {
    LABEL_9:
      if (*(_BYTE*)(v2 + 2461) != 0) {
        goto LABEL_10;
      }
    LABEL_133:
      v173 = *(_DWORD*)(v2 + 2488);
      *(_QWORD*)(v2 + 1216) = *(_QWORD*)(v2 + 2480);
      *(_DWORD*)(v2 + 1224) = v173;
      v2 = *v3;
      if (*(_BYTE*)(*v3 + 2463) != 0) {
        goto LABEL_11;
      }
      goto LABEL_134;
    }
  }
  *(_DWORD*)(v2 + 1088) = *(_DWORD*)(v2 + 2476);
  v2 = *v3;
  if (*(_BYTE*)(*v3 + 2461) == 0) {
    goto LABEL_133;
  }
LABEL_10:
  if (*(_BYTE*)(v2 + 2463) == 0) {
  LABEL_134:
    *(_DWORD*)(v2 + 1344) = *(_DWORD*)(v2 + 2492);
    v2 = *v3;
  }
LABEL_11:
  v9 = *(unsigned __int8*)(v2 + 2644);
  if (v9 <= 3) {
    v15 = GameData_1a82cf0[v9];
    *(_DWORD*)(v2 + 768) = GameData_1a82d60[v9];
    *(_DWORD*)(*v3 + 772) = v15;
    v10 = *v3;
    v11 = *(unsigned __int8*)(*v3 + 2660);
    if (v11 > 3) {
    LABEL_13:
      v12 = *v3;
      v13 = *(unsigned __int8*)(*v3 + 2676);
      if (v13 > 3) {
        goto LABEL_14;
      }
      goto LABEL_30;
    }
  }
  else {
    v10 = *v3;
    v11 = *(unsigned __int8*)(*v3 + 2660);
    if (v11 > 3) {
      goto LABEL_13;
    }
  }
  v16 = GameData_1a82cf0[v11];
  *(_DWORD*)(v10 + 848) = GameData_1a82d60[v11];
  *(_DWORD*)(*v3 + 852) = v16;
  v12 = *v3;
  v13 = *(unsigned __int8*)(*v3 + 2676);
  if (v13 > 3) {
  LABEL_14:
    v14 = *v3;
    if (*(_BYTE*)(*v3 + 2641) != 0) {
      goto LABEL_15;
    }
    goto LABEL_31;
  }
LABEL_30:
  v17 = GameData_1a82cf0[v13];
  *(_DWORD*)(v12 + 928) = GameData_1a82d60[v13];
  *(_DWORD*)(*v3 + 932) = v17;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2641) != 0) {
  LABEL_15:
    if (*(_BYTE*)(v14 + 2657) != 0) {
      goto LABEL_16;
    }
    goto LABEL_32;
  }
LABEL_31:
  *(_DWORD*)(v14 + 712) = 0;
  *(_DWORD*)(*v3 + 716) = 0;
  *(_DWORD*)(*v3 + 704) = 0;
  *(_DWORD*)(*v3 + 708) = 0;
  *(_DWORD*)(*v3 + 720) = 0;
  *(_DWORD*)(*v3 + 724) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2657) != 0) {
  LABEL_16:
    if (*(_BYTE*)(v14 + 2673) != 0) {
      goto LABEL_17;
    }
    goto LABEL_33;
  }
LABEL_32:
  *(_DWORD*)(v14 + 792) = 0;
  *(_DWORD*)(*v3 + 796) = 0;
  *(_DWORD*)(*v3 + 784) = 0;
  *(_DWORD*)(*v3 + 788) = 0;
  *(_DWORD*)(*v3 + 800) = 0;
  *(_DWORD*)(*v3 + 804) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2673) != 0) {
  LABEL_17:
    if (*(_BYTE*)(v14 + 2642) != 0) {
      goto LABEL_18;
    }
    goto LABEL_34;
  }
LABEL_33:
  *(_DWORD*)(v14 + 872) = 0;
  *(_DWORD*)(*v3 + 876) = 0;
  *(_DWORD*)(*v3 + 864) = 0;
  *(_DWORD*)(*v3 + 868) = 0;
  *(_DWORD*)(*v3 + 880) = 0;
  *(_DWORD*)(*v3 + 884) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2642) != 0) {
  LABEL_18:
    if (*(_BYTE*)(v14 + 2658) != 0) {
      goto LABEL_19;
    }
    goto LABEL_35;
  }
LABEL_34:
  *(_DWORD*)(v14 + 752) = 0;
  *(_DWORD*)(*v3 + 756) = 0;
  *(_DWORD*)(*v3 + 760) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2658) != 0) {
  LABEL_19:
    if (*(_BYTE*)(v14 + 2674) != 0) {
      goto LABEL_20;
    }
    goto LABEL_36;
  }
LABEL_35:
  *(_DWORD*)(v14 + 832) = 0;
  *(_DWORD*)(*v3 + 836) = 0;
  *(_DWORD*)(*v3 + 840) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2674) != 0) {
  LABEL_20:
    if (*(_BYTE*)(v14 + 2643) != 0) {
      goto LABEL_21;
    }
    goto LABEL_37;
  }
LABEL_36:
  *(_DWORD*)(v14 + 912) = 0;
  *(_DWORD*)(*v3 + 916) = 0;
  *(_DWORD*)(*v3 + 920) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2643) != 0) {
  LABEL_21:
    if (*(_BYTE*)(v14 + 2659) != 0) {
      goto LABEL_22;
    }
    goto LABEL_38;
  }
LABEL_37:
  *(_DWORD*)(v14 + 736) = 1065353216;
  *(_DWORD*)(*v3 + 740) = 1065353216;
  *(_DWORD*)(*v3 + 728) = 0;
  *(_DWORD*)(*v3 + 732) = 0;
  *(_DWORD*)(*v3 + 744) = 0;
  *(_DWORD*)(*v3 + 748) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2659) != 0) {
  LABEL_22:
    if (*(_BYTE*)(v14 + 2675) != 0) {
      goto LABEL_23;
    }
    goto LABEL_39;
  }
LABEL_38:
  *(_DWORD*)(v14 + 816) = 1065353216;
  *(_DWORD*)(*v3 + 820) = 1065353216;
  *(_DWORD*)(*v3 + 808) = 0;
  *(_DWORD*)(*v3 + 812) = 0;
  *(_DWORD*)(*v3 + 824) = 0;
  *(_DWORD*)(*v3 + 828) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2675) != 0) {
  LABEL_23:
    if (*(_BYTE*)(v14 + 2224) != 0) {
      goto LABEL_24;
    }
    goto LABEL_40;
  }
LABEL_39:
  *(_DWORD*)(v14 + 896) = 1065353216;
  *(_DWORD*)(*v3 + 900) = 1065353216;
  *(_DWORD*)(*v3 + 888) = 0;
  *(_DWORD*)(*v3 + 892) = 0;
  *(_DWORD*)(*v3 + 904) = 0;
  *(_DWORD*)(*v3 + 908) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2224) != 0) {
  LABEL_24:
    if (*(_BYTE*)(v14 + 2225) != 0) {
      goto LABEL_25;
    }
    goto LABEL_41;
  }
LABEL_40:
  *(_DWORD*)(v14 + 1792) = 0;
  *(_DWORD*)(*v3 + 1808) = 0;
  *(_DWORD*)(*v3 + 1824) = 0;
  *(_DWORD*)(*v3 + 1840) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2225) != 0) {
  LABEL_25:
    if (*(_BYTE*)(v14 + 2226) != 0) {
      goto LABEL_26;
    }
  LABEL_42:
    *(_DWORD*)(v14 + 1800) = 0;
    *(_DWORD*)(*v3 + 1816) = 0;
    *(_DWORD*)(*v3 + 1832) = 0;
    *(_DWORD*)(*v3 + 1848) = 0;
    v14 = *v3;
    if (*(_BYTE*)(*v3 + 2640) != 5) {
      goto LABEL_45;
    }
    goto LABEL_43;
  }
LABEL_41:
  *(_DWORD*)(v14 + 1796) = 0;
  *(_DWORD*)(*v3 + 1812) = 0;
  *(_DWORD*)(*v3 + 1828) = 0;
  *(_DWORD*)(*v3 + 1844) = 0;
  v14 = *v3;
  if (*(_BYTE*)(*v3 + 2226) == 0) {
    goto LABEL_42;
  }
LABEL_26:
  if (*(_BYTE*)(v14 + 2640) == 5) {
  LABEL_43:
    v18 = CalculateAllocatedSizeHeap_5c78c0(a2, *(_QWORD*)(v14 + 2544));
    v14 = *v3;
    if (v18 != 0) {
      *(float*)(v14 + 272) = (float)*(int*)(v18 + 48);
      v14 = *v3;
    }
  }
LABEL_45:
  if (*(_BYTE*)(v14 + 2656) == 5) {
    v19 = CalculateAllocatedSizeHeap_5c78c0(a2, *(_QWORD*)(v14 + 2576));
    v14 = *v3;
    if (v19 != 0) {
      *(float*)(v14 + 416) = (float)*(int*)(v19 + 48);
      v14 = *v3;
    }
  }
  if (*(_BYTE*)(v14 + 2672) == 5) {
    v20 = CalculateAllocatedSizeHeap_5c78c0(a2, *(_QWORD*)(v14 + 2608));
    v14 = *v3;
    if (v20 != 0) {
      *(float*)(v14 + 560) = (float)*(int*)(v20 + 48);
      v14 = *v3;
    }
  }
  v21 = *(unsigned int*)(v14 + 96);
  if ((unsigned int)(v21 - 1) <= 6) {
    v46 = -(int)v21 & 3;
    v47 = *(unsigned int*)(v14 + 96);
    if (v46 != 0) {
      v48 = 16 * v21 + 972;
      v47 = v21;
      do {
        v49 = (float)(unsigned int)v47++;
        --v46;
        v50 = *v3 + 16LL * *(int*)(*v3 + 96);
        v51 = *v3 + v48;
        v52 = *(_QWORD*)(v50 + 944);
        *(_QWORD*)(v51 - 4) = *(_QWORD*)(v50 + 952);
        *(_QWORD*)(v51 - 12) = v52;
        *(float*)(*v3 + v48) = *(float*)(*v3 + v48) + v49;
        v48 += 16;
      } while (v46 != 0);
    }
    if ((unsigned int)v21 <= 4) {
      v53 = 16 * v47;
      do {
        v54 = *v3 + 16LL * *(int*)(*v3 + 96);
        v55 = *v3 + v53;
        v56 = *(_QWORD*)(v54 + 952);
        *(_QWORD*)(v55 + 960) = *(_QWORD*)(v54 + 944);
        *(_QWORD*)(v55 + 968) = v56;
        *(float*)(*v3 + v53 + 972) =
            *(float*)(*v3 + v53 + 972) + (float)(unsigned int)v47;
        v57 = *v3 + 16LL * *(int*)(*v3 + 96);
        v58 = *v3 + v53;
        v59 = *(_QWORD*)(v57 + 952);
        *(_QWORD*)(v58 + 976) = *(_QWORD*)(v57 + 944);
        *(_QWORD*)(v58 + 984) = v59;
        *(float*)(*v3 + v53 + 988) =
            *(float*)(*v3 + v53 + 988) + (float)(unsigned int)(v47 + 1);
        v60 = *v3 + 16LL * *(int*)(*v3 + 96);
        v61 = *v3 + v53;
        v62 = *(_QWORD*)(v60 + 952);
        *(_QWORD*)(v61 + 992) = *(_QWORD*)(v60 + 944);
        *(_QWORD*)(v61 + 1000) = v62;
        *(float*)(*v3 + v53 + 1004) =
            *(float*)(*v3 + v53 + 1004) + (float)(unsigned int)(v47 + 2);
        LODWORD(v55) = v47 + 3;
        v47 += 4;
        v63 = *v3 + 16LL * *(int*)(*v3 + 96);
        v64 = *v3 + v53;
        v65 = *(_QWORD*)(v63 + 952);
        *(_QWORD*)(v64 + 1008) = *(_QWORD*)(v63 + 944);
        *(_QWORD*)(v64 + 1016) = v65;
        v66 = *v3 + v53;
        v53 += 64;
        *(float*)(v66 + 1020) =
            *(float*)(v66 + 1020) + (float)(unsigned int)v55;
      } while ((int)v55 < 7);
    }
    v14 = *v3;
    v22 = *(unsigned int*)(*v3 + 104);
    if ((unsigned int)(v22 - 1) > 6) {
    LABEL_53:
      v23 = *(unsigned int*)(v14 + 100);
      if ((unsigned int)(v23 - 1) > 6) {
        goto LABEL_54;
      }
      goto LABEL_102;
    }
  }
  else {
    v22 = *(unsigned int*)(v14 + 104);
    if ((unsigned int)(v22 - 1) > 6) {
      goto LABEL_53;
    }
  }
  v67 = -(int)v22 & 3;
  v68 = v22;
  if (v67 != 0) {
    v69 = 16 * v22 + 1228;
    v68 = v22;
    do {
      v70 = (float)(unsigned int)v68++;
      --v67;
      v71 = *v3 + 16LL * *(int*)(*v3 + 104);
      v72 = *v3 + v69;
      v73 = *(_QWORD*)(v71 + 1200);
      *(_QWORD*)(v72 - 4) = *(_QWORD*)(v71 + 1208);
      *(_QWORD*)(v72 - 12) = v73;
      *(float*)(*v3 + v69) = *(float*)(*v3 + v69) + v70;
      v69 += 16;
    } while (v67 != 0);
  }
  if ((unsigned int)v22 <= 4) {
    v74 = 16 * v68;
    do {
      v75 = *v3 + 16LL * *(int*)(*v3 + 104);
      v76 = *v3 + v74;
      v77 = *(_QWORD*)(v75 + 1208);
      *(_QWORD*)(v76 + 1216) = *(_QWORD*)(v75 + 1200);
      *(_QWORD*)(v76 + 1224) = v77;
      *(float*)(*v3 + v74 + 1228) =
          *(float*)(*v3 + v74 + 1228) + (float)(unsigned int)v68;
      v78 = *v3 + 16LL * *(int*)(*v3 + 104);
      v79 = *v3 + v74;
      v80 = *(_QWORD*)(v78 + 1208);
      *(_QWORD*)(v79 + 1232) = *(_QWORD*)(v78 + 1200);
      *(_QWORD*)(v79 + 1240) = v80;
      *(float*)(*v3 + v74 + 1244) =
          *(float*)(*v3 + v74 + 1244) + (float)(unsigned int)(v68 + 1);
      v81 = *v3 + 16LL * *(int*)(*v3 + 104);
      v82 = *v3 + v74;
      v83 = *(_QWORD*)(v81 + 1208);
      *(_QWORD*)(v82 + 1248) = *(_QWORD*)(v81 + 1200);
      *(_QWORD*)(v82 + 1256) = v83;
      *(float*)(*v3 + v74 + 1260) =
          *(float*)(*v3 + v74 + 1260) + (float)(unsigned int)(v68 + 2);
      LODWORD(v76) = v68 + 3;
      v68 += 4;
      v84 = *v3 + 16LL * *(int*)(*v3 + 104);
      v85 = *v3 + v74;
      v86 = *(_QWORD*)(v84 + 1208);
      *(_QWORD*)(v85 + 1264) = *(_QWORD*)(v84 + 1200);
      *(_QWORD*)(v85 + 1272) = v86;
      v87 = *v3 + v74;
      v74 += 64;
      *(float*)(v87 + 1276) = *(float*)(v87 + 1276) + (float)(unsigned int)v76;
    } while ((int)v76 < 7);
  }
  v14 = *v3;
  v23 = *(unsigned int*)(*v3 + 100);
  if ((unsigned int)(v23 - 1) > 6) {
  LABEL_54:
    v24 = *(unsigned int*)(v14 + 108);
    if ((unsigned int)(v24 - 1) > 6) {
      goto LABEL_55;
    }
    goto LABEL_109;
  }
LABEL_102:
  v88 = -(int)v23 & 3;
  v89 = v23;
  if (v88 != 0) {
    v90 = 16 * v23 + 1100;
    v89 = v23;
    do {
      v91 = (float)(unsigned int)v89++;
      --v88;
      v92 = *v3 + 16LL * *(int*)(*v3 + 100);
      v93 = *v3 + v90;
      v94 = *(_QWORD*)(v92 + 1072);
      *(_QWORD*)(v93 - 4) = *(_QWORD*)(v92 + 1080);
      *(_QWORD*)(v93 - 12) = v94;
      *(float*)(*v3 + v90) = *(float*)(*v3 + v90) + v91;
      v90 += 16;
    } while (v88 != 0);
  }
  if ((unsigned int)v23 <= 4) {
    v95 = 16 * v89;
    do {
      v96 = *v3 + 16LL * *(int*)(*v3 + 100);
      v97 = *v3 + v95;
      v98 = *(_QWORD*)(v96 + 1080);
      *(_QWORD*)(v97 + 1088) = *(_QWORD*)(v96 + 1072);
      *(_QWORD*)(v97 + 1096) = v98;
      *(float*)(*v3 + v95 + 1100) =
          *(float*)(*v3 + v95 + 1100) + (float)(unsigned int)v89;
      v99 = *v3 + 16LL * *(int*)(*v3 + 100);
      v100 = *v3 + v95;
      v101 = *(_QWORD*)(v99 + 1080);
      *(_QWORD*)(v100 + 1104) = *(_QWORD*)(v99 + 1072);
      *(_QWORD*)(v100 + 1112) = v101;
      *(float*)(*v3 + v95 + 1116) =
          *(float*)(*v3 + v95 + 1116) + (float)(unsigned int)(v89 + 1);
      v102 = *v3 + 16LL * *(int*)(*v3 + 100);
      v103 = *v3 + v95;
      v104 = *(_QWORD*)(v102 + 1080);
      *(_QWORD*)(v103 + 1120) = *(_QWORD*)(v102 + 1072);
      *(_QWORD*)(v103 + 1128) = v104;
      *(float*)(*v3 + v95 + 1132) =
          *(float*)(*v3 + v95 + 1132) + (float)(unsigned int)(v89 + 2);
      LODWORD(v97) = v89 + 3;
      v89 += 4;
      v105 = *v3 + 16LL * *(int*)(*v3 + 100);
      v106 = *v3 + v95;
      v107 = *(_QWORD*)(v105 + 1080);
      *(_QWORD*)(v106 + 1136) = *(_QWORD*)(v105 + 1072);
      *(_QWORD*)(v106 + 1144) = v107;
      v108 = *v3 + v95;
      v95 += 64;
      *(float*)(v108 + 1148) =
          *(float*)(v108 + 1148) + (float)(unsigned int)v97;
    } while ((int)v97 < 7);
  }
  v14 = *v3;
  v24 = *(unsigned int*)(*v3 + 108);
  if ((unsigned int)(v24 - 1) > 6) {
  LABEL_55:
    v25 = *(unsigned int*)(v14 + 112);
    if ((unsigned int)(v25 - 1) > 6) {
      goto LABEL_56;
    }
    goto LABEL_116;
  }
LABEL_109:
  v109 = -(int)v24 & 3;
  v110 = v24;
  if (v109 != 0) {
    v111 = 16 * v24 + 1356;
    v110 = v24;
    do {
      v112 = (float)(unsigned int)v110++;
      --v109;
      v113 = *v3 + 16LL * *(int*)(*v3 + 108);
      v114 = *v3 + v111;
      v115 = *(_QWORD*)(v113 + 1328);
      *(_QWORD*)(v114 - 4) = *(_QWORD*)(v113 + 1336);
      *(_QWORD*)(v114 - 12) = v115;
      *(float*)(*v3 + v111) = *(float*)(*v3 + v111) + v112;
      v111 += 16;
    } while (v109 != 0);
  }
  if ((unsigned int)v24 <= 4) {
    v116 = 16 * v110;
    do {
      v117 = *v3 + 16LL * *(int*)(*v3 + 108);
      v118 = *v3 + v116;
      v119 = *(_QWORD*)(v117 + 1336);
      *(_QWORD*)(v118 + 1344) = *(_QWORD*)(v117 + 1328);
      *(_QWORD*)(v118 + 1352) = v119;
      *(float*)(*v3 + v116 + 1356) =
          *(float*)(*v3 + v116 + 1356) + (float)(unsigned int)v110;
      v120 = *v3 + 16LL * *(int*)(*v3 + 108);
      v121 = *v3 + v116;
      v122 = *(_QWORD*)(v120 + 1336);
      *(_QWORD*)(v121 + 1360) = *(_QWORD*)(v120 + 1328);
      *(_QWORD*)(v121 + 1368) = v122;
      *(float*)(*v3 + v116 + 1372) =
          *(float*)(*v3 + v116 + 1372) + (float)(unsigned int)(v110 + 1);
      v123 = *v3 + 16LL * *(int*)(*v3 + 108);
      v124 = *v3 + v116;
      v125 = *(_QWORD*)(v123 + 1336);
      *(_QWORD*)(v124 + 1376) = *(_QWORD*)(v123 + 1328);
      *(_QWORD*)(v124 + 1384) = v125;
      *(float*)(*v3 + v116 + 1388) =
          *(float*)(*v3 + v116 + 1388) + (float)(unsigned int)(v110 + 2);
      LODWORD(v118) = v110 + 3;
      v110 += 4;
      v126 = *v3 + 16LL * *(int*)(*v3 + 108);
      v127 = *v3 + v116;
      v128 = *(_QWORD*)(v126 + 1336);
      *(_QWORD*)(v127 + 1392) = *(_QWORD*)(v126 + 1328);
      *(_QWORD*)(v127 + 1400) = v128;
      v129 = *v3 + v116;
      v116 += 64;
      *(float*)(v129 + 1404) =
          *(float*)(v129 + 1404) + (float)(unsigned int)v118;
    } while ((int)v118 < 7);
  }
  v14 = *v3;
  v25 = *(unsigned int*)(*v3 + 112);
  if ((unsigned int)(v25 - 1) > 6) {
  LABEL_56:
    v26 = *(unsigned int*)(v14 + 116);
    if ((unsigned int)(v26 - 1) > 6) {
      goto LABEL_57;
    }
    goto LABEL_123;
  }
LABEL_116:
  v130 = -(int)v25 & 3;
  v131 = v25;
  if (v130 != 0) {
    v132 = 16 * v25 + 1548;
    v131 = v25;
    do {
      v133 = (float)(unsigned int)v131++;
      --v130;
      v134 = *v3 + 16LL * *(int*)(*v3 + 112);
      v135 = *v3 + v132;
      v136 = *(_QWORD*)(v134 + 1520);
      *(_QWORD*)(v135 - 4) = *(_QWORD*)(v134 + 1528);
      *(_QWORD*)(v135 - 12) = v136;
      *(float*)(*v3 + v132) = *(float*)(*v3 + v132) + v133;
      v132 += 16;
    } while (v130 != 0);
  }
  if ((unsigned int)v25 <= 4) {
    v137 = 16 * v131;
    do {
      v138 = *v3 + 16LL * *(int*)(*v3 + 112);
      v139 = *v3 + v137;
      v140 = *(_QWORD*)(v138 + 1528);
      *(_QWORD*)(v139 + 1536) = *(_QWORD*)(v138 + 1520);
      *(_QWORD*)(v139 + 1544) = v140;
      *(float*)(*v3 + v137 + 1548) =
          *(float*)(*v3 + v137 + 1548) + (float)(unsigned int)v131;
      v141 = *v3 + 16LL * *(int*)(*v3 + 112);
      v142 = *v3 + v137;
      v143 = *(_QWORD*)(v141 + 1528);
      *(_QWORD*)(v142 + 1552) = *(_QWORD*)(v141 + 1520);
      *(_QWORD*)(v142 + 1560) = v143;
      *(float*)(*v3 + v137 + 1564) =
          *(float*)(*v3 + v137 + 1564) + (float)(unsigned int)(v131 + 1);
      v144 = *v3 + 16LL * *(int*)(*v3 + 112);
      v145 = *v3 + v137;
      v146 = *(_QWORD*)(v144 + 1528);
      *(_QWORD*)(v145 + 1568) = *(_QWORD*)(v144 + 1520);
      *(_QWORD*)(v145 + 1576) = v146;
      *(float*)(*v3 + v137 + 1580) =
          *(float*)(*v3 + v137 + 1580) + (float)(unsigned int)(v131 + 2);
      LODWORD(v139) = v131 + 3;
      v131 += 4;
      v147 = *v3 + 16LL * *(int*)(*v3 + 112);
      v148 = *v3 + v137;
      v149 = *(_QWORD*)(v147 + 1528);
      *(_QWORD*)(v148 + 1584) = *(_QWORD*)(v147 + 1520);
      *(_QWORD*)(v148 + 1592) = v149;
      v150 = *v3 + v137;
      v137 += 64;
      *(float*)(v150 + 1596) =
          *(float*)(v150 + 1596) + (float)(unsigned int)v139;
    } while ((int)v139 < 7);
  }
  v14 = *v3;
  v26 = *(unsigned int*)(*v3 + 116);
  if ((unsigned int)(v26 - 1) > 6) {
  LABEL_57:
    v27 = 0x0.0p+0f;
    v28 = 0x0.0p+0f;
    if (*(_BYTE*)(v14 + 2264) == 0) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
LABEL_123:
  v151 = -(int)v26 & 3;
  v152 = v26;
  if (v151 != 0) {
    v153 = 16 * v26 + 1676;
    v152 = v26;
    do {
      v154 = (float)(unsigned int)v152++;
      --v151;
      v155 = *v3 + 16LL * *(int*)(*v3 + 116);
      v156 = *v3 + v153;
      v157 = *(_QWORD*)(v155 + 1648);
      *(_QWORD*)(v156 - 4) = *(_QWORD*)(v155 + 1656);
      *(_QWORD*)(v156 - 12) = v157;
      *(float*)(*v3 + v153) = *(float*)(*v3 + v153) + v154;
      v153 += 16;
    } while (v151 != 0);
  }
  if ((unsigned int)v26 <= 4) {
    v158 = 16 * v152;
    do {
      v159 = *v3 + 16LL * *(int*)(*v3 + 116);
      v160 = *v3 + v158;
      v161 = *(_QWORD*)(v159 + 1656);
      *(_QWORD*)(v160 + 1664) = *(_QWORD*)(v159 + 1648);
      *(_QWORD*)(v160 + 1672) = v161;
      *(float*)(*v3 + v158 + 1676) =
          *(float*)(*v3 + v158 + 1676) + (float)(unsigned int)v152;
      v162 = *v3 + 16LL * *(int*)(*v3 + 116);
      v163 = *v3 + v158;
      v164 = *(_QWORD*)(v162 + 1656);
      *(_QWORD*)(v163 + 1680) = *(_QWORD*)(v162 + 1648);
      *(_QWORD*)(v163 + 1688) = v164;
      *(float*)(*v3 + v158 + 1692) =
          *(float*)(*v3 + v158 + 1692) + (float)(unsigned int)(v152 + 1);
      v165 = *v3 + 16LL * *(int*)(*v3 + 116);
      v166 = *v3 + v158;
      v167 = *(_QWORD*)(v165 + 1656);
      *(_QWORD*)(v166 + 1696) = *(_QWORD*)(v165 + 1648);
      *(_QWORD*)(v166 + 1704) = v167;
      *(float*)(*v3 + v158 + 1708) =
          *(float*)(*v3 + v158 + 1708) + (float)(unsigned int)(v152 + 2);
      LODWORD(v160) = v152 + 3;
      v152 += 4;
      v168 = *v3 + 16LL * *(int*)(*v3 + 116);
      v169 = *v3 + v158;
      v170 = *(_QWORD*)(v168 + 1656);
      *(_QWORD*)(v169 + 1712) = *(_QWORD*)(v168 + 1648);
      *(_QWORD*)(v169 + 1720) = v170;
      v171 = *v3 + v158;
      v158 += 64;
      *(float*)(v171 + 1724) =
          *(float*)(v171 + 1724) + (float)(unsigned int)v160;
    } while ((int)v160 < 7);
  }
  v14 = *v3;
  v27 = 0x0.0p+0f;
  v28 = 0x0.0p+0f;
  if (*(_BYTE*)(*v3 + 2264) != 0) {
  LABEL_58:
    v28 = (float)*(int*)(v14 + 2276);
  }
LABEL_59:
  *(float*)(v14 + 128) = v28;
  v29 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(*v3 + 2269) != 0) {
    v30 = 0x1.0000000000000p+0f;
  }
  else {
    v30 = 0x0.0p+0f;
  }
  *(float*)(*v3 + 148) = v30;
  v31 = *v3;
  if (*(_BYTE*)(*v3 + 2265) != 0) {
    v27 = (float)*(int*)(v31 + 2280);
  }
  *(float*)(v31 + 132) = v27;
  v32 = 0x0.0p+0f;
  if (*(_BYTE*)(*v3 + 2270) == 0) {
    v29 = 0x0.0p+0f;
  }
  *(float*)(*v3 + 152) = v29;
  v33 = 0x0.0p+0f;
  v34 = *v3;
  if (*(_BYTE*)(*v3 + 2266) != 0) {
    v33 = (float)*(int*)(v34 + 2284);
  }
  *(float*)(v34 + 136) = v33;
  v35 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(*v3 + 2271) != 0) {
    v36 = 0x1.0000000000000p+0f;
  }
  else {
    v36 = 0x0.0p+0f;
  }
  *(float*)(*v3 + 156) = v36;
  v37 = *v3;
  if (*(_BYTE*)(*v3 + 2267) != 0) {
    v32 = (float)*(int*)(v37 + 2288);
  }
  *(float*)(v37 + 140) = v32;
  v38 = 0x0.0p+0f;
  if (*(_BYTE*)(*v3 + 2272) == 0) {
    v35 = 0x0.0p+0f;
  }
  *(float*)(*v3 + 160) = v35;
  v39 = 0x0.0p+0f;
  v40 = *v3;
  if (*(_BYTE*)(*v3 + 2268) != 0) {
    v39 = (float)*(int*)(v40 + 2292);
  }
  *(float*)(v40 + 144) = v39;
  if (*(_BYTE*)(*v3 + 2273) != 0) {
    v38 = 0x1.0000000000000p+0f;
  }
  *(float*)(*v3 + 164) = v38;
  v41 = *v3;
  v42 = *(unsigned __int8*)(*v3 + 2104);
  if (v42 <= 0xF && ((1 << v42) & 0xA064) != 0) {
    if (*(unsigned __int8*)(*v3 + 2104) > 5u) {
      goto LABEL_82;
    }
  }
  else {
    *(_DWORD*)(v41 + 2164) = -1;
    v41 = *v3;
    v42 = *(unsigned __int8*)(*v3 + 2104);
    if (v42 > 5) {
    LABEL_82:
      if (v42 == 6) {
        if (*(_DWORD*)(v41 + 2164) != 0) {
          goto LABEL_145;
        }
        {
          __typeof__(v38) z_ = (__typeof__(v38)){0};
          LOBYTE(z_) = *(_BYTE*)(v41 + 2109);
          v38 = z_;
        }
        v45 = (float)LODWORD(v38);
        goto LABEL_144;
      }
      if (v42 != 13) {
        if (v42 != 15) {
          goto LABEL_145;
        }
        v43 = *(__int64 (****)(_QWORD))(a1 + 128);
        if (v43 != nullptr) {
          if (*(_DWORD*)(v41 + 2164) != 0) {
            goto LABEL_145;
          }
          v44 = (**v43)(v43);
          v41 = *v3;
          v45 = (float)v44;
          goto LABEL_144;
        }
        goto LABEL_143;
      }
    LABEL_142:
      if (*(_DWORD*)(v41 + 2164) != 0) {
        goto LABEL_145;
      }
    LABEL_143:
      v45 = 0x1.0000000000000p+0f;
      goto LABEL_144;
    }
  }
  if (v42 == 2) {
    goto LABEL_142;
  }
  if (v42 == 5 && *(_DWORD*)(v41 + 2164) == 0) {
    v45 = GameData_1b01708[*(unsigned __int8*)(v41 + 2108)];
  LABEL_144:
    *(float*)(v41 + 2048) = v45;
  }
LABEL_145:
  v253 = 0;
  GameRoutine_5b8f20(&v253, (_QWORD*)a1);
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 80LL) = v253;
  v174 = *(_DWORD**)(a1 + 648);
  if (v174 != nullptr) {
    *(_DWORD*)(*v3 + 92) = *(_DWORD*)v174;
  }
  v175 = *(float32x2_t**)(a1 + 16);
  LANES128(v176).n128_u64[0] = LANES64(v175[241]).n64_u64[0];
  PSEUDO_LOW_LANE64(v177, n64_u64, LANES64(v175[244]).n64_u64[0]);
  LANES128(v176).n128_u64[1] = LANES64(v175[242]).n64_u32[0];
  *(float32x2_t*)&v178 = v175[238];
  *((_QWORD*)&v178 + 1) = LANES64(v175[239]).n64_u32[0];
  v179 = vmlaq_f32(v176, vdupq_n_s32(0xC0C90FDB),
                   vrndnq_f32(vmulq_f32(v176, vdupq_n_s32(0x3E22F983u))));
  v180 = vcgtq_f32(v179, vdupq_n_s32(0x3FC90FDBu));
  v181 = vmvnq_s8(v180);
  v182 = vbslq_s8(v180, vsubq_f32(vdupq_n_s32(0x40490FDBu), v179), v179);
  v183 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v182);
  v184 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v182);
  v185 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
  v186 = vbslq_s8(v183, v184, v182);
  PSEUDO_LOW_LANE128(v184, n128_u32, *(_DWORD*)GameData_212c190);
  v187 = vbicq_s8(v181, v183);
  v188 = *(_QWORD*)(a1 + 32);
  v189 = *(_QWORD*)(a1 + 40);
  v190 = vmulq_f32(v186, v186);
  v191 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v185).n128_u64[0]), 0), v190,
      COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v184, n128_f32,
      -COERCE_FLOAT(DWORDn(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
          sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                            (_QWORD)GameData_212c190)) /
                  4 -
              1)));
  v192 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v184).n128_u64[0]), 0), v190,
      v191);
  v193 = vmlaq_f32(vdupq_laneq_s32(v185, 2), v190, v192);
  LANES128(v185).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v185).n128_u64[1] = 0x3F8000003F800000LL;
  PSEUDO_LOW_LANE128(
      v192, n128_f32,
      -COERCE_FLOAT(DWORDn(
          *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
          sizeof(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                            (_QWORD)GameData_212c190)) /
                  4 -
              1)));
  v194 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v192).n128_u64[0]), 0), v190,
      v193);
  v195 = vmlaq_f32(v185, v190, v194);
  PSEUDO_LOW_LANE128(v194, n128_u32, *(_DWORD*)GameData_212c188);
  v196 = vmulq_f32(v186, v195);
  v197 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
  v198 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v197).n128_u64[0]), 0), v190,
      COERCE_AS(float32x2_t, LANES128(v194).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v194, n128_f32,
      -COERCE_FLOAT(DWORDn(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188),
          sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                            (_QWORD)GameData_212c188)) /
                  4 -
              1)));
  v199 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v194).n128_u64[0]), 0), v190,
      v198);
  v200 = vmlaq_f32(vdupq_laneq_s32(v197, 2), v190, v199);
  PSEUDO_LOW_LANE128(v199, n128_f32, -LANES128(v197).n128_f32[3]);
  v201 = vmlaq_f32(
      v185, v190,
      vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v199).n128_u64[0]), 0),
          v190, v200));
  v202 = vbslq_s8(v187, v201, vnegq_f32(v201));
  LANES128(v190).n128_u64[0] =
      LANES128(v202).n128_u32[1] |
      ((unsigned __int64)LANES128(v202).n128_u32[1] << 32);
  LANES128(v197).n128_u64[0] =
      LANES128(v202).n128_u32[2] |
      ((unsigned __int64)LANES128(v196).n128_u32[2] << 32);
  LANES128(v200).n128_u64[0] = LANES128(v197).n128_u64[0];
  LANES128(v190).n128_u64[1] = LANES128(v196).n128_u32[1];
  LANES128(v200).n128_u64[1] = 3212836864LL;
  LANES128(v201).n128_u64[0] =
      LANES128(v196).n128_u32[1] |
      ((unsigned __int64)LANES128(v196).n128_u32[1] << 32);
  v203 = vmulq_f32(v190, v200);
  LANES128(v201).n128_u64[1] = LANES128(v202).n128_u32[1];
  LANES128(v197).n128_u64[1] = 1065353216;
  v204 = vmulq_f32(v201, v197);
  LANES128(v197).n128_u64[0] = __ROR8__(LANES128(v197).n128_u64[0], 32);
  v205 = vaddq_f32(vmulq_n_f32(v204, LANES128(v196).n128_f32[0]),
                   vmulq_f32(vmulq_n_f32(v197, LANES128(v202).n128_f32[0]),
                             COERCE_AS(float32x4_t, GameData_1a82940)));
  v206 = vaddq_f32(vmulq_n_f32(v204, LANES128(v202).n128_f32[0]),
                   vmulq_f32(vmulq_n_f32(v197, LANES128(v196).n128_f32[0]),
                             COERCE_AS(float32x4_t, GameData_1a83510)));
  LANES128(v202).n128_u32[0] = LANES64(v175[245]).n64_u32[0];
  *(float32x4_t*)(a1 + 448) = vmulq_n_f32(v203, LANES64(v177).n64_f32[0]);
  *(float32x4_t*)(a1 + 464) = vmulq_lane_f32(v205, v177, 1);
  *(float32x4_t*)(a1 + 480) = vmulq_n_f32(v206, LANES128(v202).n128_f32[0]);
  *(_OWORD*)(a1 + 496) = v178;
  *(float32x4_t*)(a1 + 512) = v203;
  *(float32x4_t*)(a1 + 528) = v205;
  *(float32x4_t*)(a1 + 544) = v206;
  *(_OWORD*)(a1 + 560) = v178;
  *(float32x2_t*)&v178 = v175[224];
  *((_QWORD*)&v178 + 1) = LANES64(v175[225]).n64_u32[0];
  *(_OWORD*)(a1 + 800) = v178;
  result = GameRoutine_5fcb50(v188);
  if (result != 0) {
    GameRoutine_1a0b950(result + v189, *(_QWORD*)(a1 + 16), 0x750u);
    v208 = *(_QWORD*)(a1 + 32);
    GameRoutine_5fcb80(v208);
    result = GameRoutine_5fcb70(v208);
  }
  if (*(_QWORD*)(a1 + 824) != 0) {
    v209 = *(_QWORD*)(a1 + 48);
    result = GameRoutine_5fcb50(*(_QWORD*)(a1 + 32));
    if (result != 0) {
      v210 = *(__int64**)(a1 + 824);
      v211 = (_QWORD*)(result + v209);
      v212 = *v210;
      v213 = v210[1];
      v214 = v210[3];
      v211[2] = v210[2];
      v211[3] = v214;
      *v211 = v212;
      v211[1] = v213;
      v215 = v210[4];
      v216 = v210[5];
      v217 = v210[7];
      v211[6] = v210[6];
      v211[7] = v217;
      v211[4] = v215;
      v211[5] = v216;
      v218 = v210[8];
      v219 = v210[9];
      v220 = v210[11];
      v211[10] = v210[10];
      v211[11] = v220;
      v211[8] = v218;
      v211[9] = v219;
      v221 = v210[12];
      v222 = v210[13];
      v224 = v210[14];
      v223 = v210[15];
      v211[14] = v224;
      v211[15] = v223;
      v211[12] = v221;
      v211[13] = v222;
      v225 = *(_QWORD*)(a1 + 32);
      GameRoutine_5fcb80(v225);
      result = GameRoutine_5fcb70(v225);
    }
  }
  if (*(_QWORD*)(a1 + 768) != 0) {
    v226 = *(_QWORD*)(a1 + 56);
    result = GameRoutine_5fcb50(*(_QWORD*)(a1 + 32));
    if (result != 0) {
      GameRoutine_1a0b950(result + v226, *(_QWORD*)(a1 + 768),
                          *(_QWORD*)(a1 + 776));
      v227 = *(_QWORD*)(a1 + 32);
      GameRoutine_5fcb80(v227);
      result = GameRoutine_5fcb70(v227);
    }
  }
  if (*(_BYTE*)(a1 + 3) == 1) {
    v228 = *(_QWORD*)(a1 + 64);
    result = GameRoutine_5fcb50(*(_QWORD*)(a1 + 32));
    if (result != 0) {
      v230 = *(_DWORD**)(a1 + 584);
      v231 = result + v228;
      if (v230 != nullptr) {
        *(_DWORD*)v231 = v230[1];
        *(_DWORD*)(v231 + 4) = v230[2];
        *(_DWORD*)(v231 + 8) = v230[3];
        *(float*)(v231 + 12) = (float)*(int*)(*(_QWORD*)(a1 + 584) + 16LL);
        *(_DWORD*)(v231 + 16) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 44LL);
        *(_DWORD*)(v231 + 20) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 48LL);
        *(_DWORD*)(v231 + 24) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 52LL);
        *(_DWORD*)(v231 + 28) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 56LL);
        *(_DWORD*)(v231 + 32) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 28LL);
        *(_DWORD*)(v231 + 36) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 32LL);
        *(_DWORD*)(v231 + 40) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 36LL);
        v232 = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 40LL);
        *(_DWORD*)(v231 + 44) = v232;
        {
          __typeof__(v232) z_ = (__typeof__(v232)){0};
          LOBYTE(z_) = **(_BYTE**)(a1 + 584);
          v232 = z_;
        }
        v233 = (float)v232;
        *(float*)(v231 + 48) = v233;
        {
          __typeof__(v233) z_ = (__typeof__(v233)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 584) + 1LL);
          v233 = z_;
        }
        v234 = (float)LODWORD(v233);
        *(float*)(v231 + 52) = v234;
        {
          __typeof__(v234) z_ = (__typeof__(v234)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 584) + 2LL);
          v234 = z_;
        }
        *(float*)(v231 + 56) = (float)LODWORD(v234);
        *(_DWORD*)(v231 + 64) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 20LL);
        *(_DWORD*)(v231 + 68) = *(_DWORD*)(*(_QWORD*)(a1 + 584) + 24LL);
      }
      v235 = *(_DWORD**)(a1 + 592);
      if (v235 != nullptr) {
        *(_DWORD*)(v231 + 80) = *(_DWORD*)v235;
        *(_DWORD*)(v231 + 84) = v235[1];
        *(_DWORD*)(v231 + 88) = v235[2];
        *(float*)(v231 + 92) = (float)*(int*)(*(_QWORD*)(a1 + 592) + 12LL);
      }
      v236 = *(_DWORD**)(a1 + 632);
      if (v236 != nullptr) {
        *(_DWORD*)(v231 + 96) = v236[1];
        *(_DWORD*)(v231 + 100) = v236[2];
        v237 = v236[3];
        *(_DWORD*)(v231 + 104) = v237;
        {
          __typeof__(v237) z_ = (__typeof__(v237)){0};
          LOBYTE(z_) = **(_BYTE**)(a1 + 632);
          v237 = z_;
        }
        *(float*)(v231 + 108) = (float)v237;
      }
      v238 = *(_DWORD**)(a1 + 600);
      if (v238 != nullptr) {
        *(_DWORD*)(v231 + 112) = v238[2];
        *(_DWORD*)(v231 + 116) = v238[3];
        *(_DWORD*)(v231 + 120) = v238[4];
        v239 = *(_DWORD*)(*(_QWORD*)(a1 + 600) + 4LL);
        *(_DWORD*)(v231 + 124) = v239;
        {
          __typeof__(v239) z_ = (__typeof__(v239)){0};
          LOBYTE(z_) = **(_BYTE**)(a1 + 600);
          v239 = z_;
        }
        v240 = (float)v239;
        *(float*)(v231 + 128) = v240;
        {
          __typeof__(v240) z_ = (__typeof__(v240)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 600) + 1LL);
          v240 = z_;
        }
        v241 = (float)LODWORD(v240);
        *(float*)(v231 + 132) = v241;
        {
          __typeof__(v241) z_ = (__typeof__(v241)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 600) + 2LL);
          v241 = z_;
        }
        v242 = (float)LODWORD(v241);
        *(float*)(v231 + 136) = v242;
        {
          __typeof__(v242) z_ = (__typeof__(v242)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 600) + 3LL);
          v242 = z_;
        }
        *(float*)(v231 + 140) = (float)LODWORD(v242);
      }
      v243 = *(_DWORD**)(a1 + 624);
      if (v243 != nullptr) {
        *(_DWORD*)(v231 + 144) = v243[1];
        *(_DWORD*)(v231 + 148) = v243[2];
        *(_DWORD*)(v231 + 152) = v243[3];
        v244 = *(_DWORD*)(*(_QWORD*)(a1 + 624) + 16LL);
        *(_DWORD*)(v231 + 156) = v244;
        {
          __typeof__(v244) z_ = (__typeof__(v244)){0};
          LOBYTE(z_) = **(_BYTE**)(a1 + 624);
          v244 = z_;
        }
        *(float*)(v231 + 160) = (float)v244;
      }
      v245 = *(_DWORD**)(a1 + 608);
      if (v245 != nullptr) {
        *(_DWORD*)(v231 + 176) = *(_DWORD*)v245;
        *(_DWORD*)(v231 + 180) = *(_DWORD*)(*(_QWORD*)(a1 + 608) + 8LL);
        *(float*)(v231 + 184) =
            (float)*(unsigned int*)(*(_QWORD*)(a1 + 608) + 4LL);
      }
      v246 = *(unsigned __int8**)(a1 + 616);
      if (v246 != nullptr) {
        {
          __typeof__(v229) z_ = (__typeof__(v229)){0};
          LOBYTE(z_) = v246[1];
          v229 = z_;
        }
        *(float*)(v231 + 192) = (float)v229 + (float)(2 * (unsigned int)*v246);
        *(_DWORD*)(v231 + 196) = *(_DWORD*)(*(_QWORD*)(a1 + 616) + 8LL);
        *(_DWORD*)(v231 + 200) = *(_DWORD*)(*(_QWORD*)(a1 + 616) + 16LL);
        *(_DWORD*)(v231 + 204) = *(_DWORD*)(*(_QWORD*)(a1 + 616) + 4LL);
      }
      v247 = *(_DWORD**)(a1 + 640);
      if (v247 != nullptr) {
        *(_DWORD*)(v231 + 208) = v247[4];
        *(_DWORD*)(v231 + 212) = v247[5];
        *(_DWORD*)(v231 + 216) = v247[6];
        *(_DWORD*)(v231 + 220) = *(_DWORD*)(*(_QWORD*)(a1 + 640) + 28LL);
        v248 = *(_DWORD**)(a1 + 640);
        *(_DWORD*)(v231 + 224) = v248[1];
        *(_DWORD*)(v231 + 228) = v248[2];
        *(_DWORD*)(v231 + 232) = v248[3];
        v249 = *(_DWORD*)(*(_QWORD*)(a1 + 640) + 32LL);
        *(_DWORD*)(v231 + 236) = v249;
        {
          __typeof__(v249) z_ = (__typeof__(v249)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 640) + 1LL);
          v249 = z_;
        }
        v250 = (float)v249;
        *(float*)(v231 + 240) = v250;
        {
          __typeof__(v250) z_ = (__typeof__(v250)){0};
          LOBYTE(z_) = *(_BYTE*)(*(_QWORD*)(a1 + 640) + 2LL);
          v250 = z_;
        }
        *(float*)(v231 + 244) = (float)LODWORD(v250);
      }
      v251 = *(_QWORD*)(a1 + 648);
      if (v251 != 0) {
        *(_DWORD*)(v231 + 256) = *(_DWORD*)(v251 + 4);
        *(_DWORD*)(v231 + 260) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 8LL);
        *(_DWORD*)(v231 + 264) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 12LL);
        *(_DWORD*)(v231 + 268) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 16LL);
        *(_DWORD*)(v231 + 272) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 20LL);
        *(_DWORD*)(v231 + 276) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 24LL);
        *(_DWORD*)(v231 + 280) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 28LL);
        *(_DWORD*)(v231 + 284) = *(_DWORD*)(*(_QWORD*)(a1 + 648) + 32LL);
      }
      v252 = *(_QWORD*)(a1 + 32);
      GameRoutine_5fcb80(v252);
      return GameRoutine_5fcb70(v252);
    }
  }
  return result;
}

#pragma GCC visibility pop
