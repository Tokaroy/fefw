#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
physx_Dy_FeatherstoneArticulation_computePropagateSpatialInertia(
    PSEUDO_X8, int, unsigned __int8, float*, float*, float*, float*, __int64);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
int8x16_t physx_Dy_FeatherstoneArticulation_translateInertia(_OWORD*, __int64);
int8x16_t physx_source_lowleveldynamics_src_343420(__int64 a1, int32x2_t* a2);

int8x16_t physx_source_lowleveldynamics_src_343420(__int64 a1, int32x2_t* a2)
{
  unsigned __int32 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int8 v10;
  unsigned __int64 v11;
  float* v12;
  float v13;
  float v14;
  float v15;
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
  unsigned int* v57;
  __int64 v58;
  __int64 v59;
  float* v60;
  unsigned int v61;
  float* v62;
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
  float* v80;
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
  int8x16_t v95;
  int32x4_t v96;
  int8x16_t v97;
  int8x16_t v98;
  int32x4_t v99;
  float32x4_t v100;
  int8x16_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  int8x16_t v105;
  unsigned __int64 v106;
  int32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  int8x16_t v115;
  int8x16_t v116;
  int8x16_t v117;
  float32x4_t v118;
  int8x8_t v119;
  int8x8_t v120;
  float32x4_t v121;
  float32x4_t v122;
  int8x8_t v123;
  int8x8_t v124;
  float32x4_t v125;
  float32x2_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  int8x16_t v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x8_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x2_t v139;
  int32x4_t v140;
  float32x4_t v141;
  int8x8_t v142;
  float32x2_t v143;
  unsigned __int64 v144;
  int8x8_t v145;
  float32x2_t v146;
  int8x8_t v147;
  float32x4_t v148;
  float32x2_t v149;
  float32x4_t v150;
  float32x2_t v151;
  float32x2_t v152;
  float32x2_t v153;
  float v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x2_t v186;
  float32x2_t v187;
  float32x2_t v188;
  float32x2_t v189;
  int8x8_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x2_t v193;
  float32x2_t v194;
  unsigned __int64 v195;
  int8x8_t v196;
  float32x2_t v197;
  int8x8_t v198;
  float32x2_t v199;
  float32x4_t v200;
  float32x2_t v201;
  float32x2_t v202;
  float32x2_t v203;
  float v204;
  float32x4_t v205;
  float32x4_t v206;
  float32x4_t v207;
  int32x4_t v208;
  float32x4_t v209;
  int32x4_t v210;
  int32x4_t v211;
  int8x16_t v212;
  int32x4_t v213;
  int8x16_t v214;
  int8x16_t result;
  unsigned __int64 v216;
  __int128 v218;
  int v219;
  float v220;
  float v221;
  float v222;
  int v223;
  float v224[30];

  {
    v2 = LANES64(a2[101]).n64_u32[0];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = LANES64(a2[66]).n64_u64[0];
    __asm__ volatile("" ::"r"(v3));
  }
  v4 = v2 - 1;
  if (v2 != 1) {
    {
      v5 = LANES64(a2[105]).n64_u64[0];
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = LANES64(a2[84]).n64_u64[0];
      __asm__ volatile("" ::"r"(v6));
    }
    {
      v7 = LANES64(a2[74]).n64_u64[0];
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = LANES64(a2[72]).n64_u64[0];
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = LANES64(a2[86]).n64_u64[0];
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v216 = LANES64(a2[100]).n64_u64[0];
      __asm__ volatile("" ::"r"(v216));
    }
    do {
      v57 = (unsigned int*)(v5 + 8 * v4);
      {
        v58 = *v57;
        __asm__ volatile("" ::"r"(v58));
      }
      {
        v59 = *((unsigned __int8*)v57 + 4);
        __asm__ volatile("" ::"r"(v59));
      }
      if (*((_BYTE*)v57 + 4) != 0) {
        v60 = (float*)(v3 + 112 * v4);
        {
          v61 = *v57;
          __asm__ volatile("" ::"r"(v61));
        }
        do {
          v62 = (float*)(v6 + 24LL * v61);
          {
            v63 = v60[1];
            __asm__ volatile("" ::"w"(v63));
          }
          {
            v64 = v60[2];
            __asm__ volatile("" ::"w"(v64));
          }
          {
            v65 = v60[3];
            __asm__ volatile("" ::"w"(v65));
          }
          {
            v66 = v60[4];
            __asm__ volatile("" ::"w"(v66));
          }
          {
            v67 = v60[5];
            __asm__ volatile("" ::"w"(v67));
          }
          --v59;
          {
            v69 = *v62;
            __asm__ volatile("" ::"w"(v69));
          }
          {
            v68 = v62[1];
            __asm__ volatile("" ::"w"(v68));
          }
          {
            v70 = v60[6];
            __asm__ volatile("" ::"w"(v70));
          }
          {
            v71 = v60[7];
            __asm__ volatile("" ::"w"(v71));
          }
          {
            v73 = v62[2];
            __asm__ volatile("" ::"w"(v73));
          }
          {
            v72 = v62[3];
            __asm__ volatile("" ::"w"(v72));
          }
          {
            v74 = v60[8];
            __asm__ volatile("" ::"w"(v74));
          }
          v75 = (float)((float)(PSEUDO_UNFUSED(*v62 * *v60)) +
                        (float)(PSEUDO_UNFUSED(v68 * v65))) +
                (float)(PSEUDO_UNFUSED(v73 * v70));
          v76 = (float)((float)(PSEUDO_UNFUSED(*v62 * v63)) +
                        (float)(PSEUDO_UNFUSED(v68 * v66))) +
                (float)(PSEUDO_UNFUSED(v73 * v71));
          v77 = (float)((float)(PSEUDO_UNFUSED(*v62 * v64)) +
                        (float)(PSEUDO_UNFUSED(v68 * v67))) +
                (float)(PSEUDO_UNFUSED(v73 * v74));
          {
            v79 = v62[4];
            __asm__ volatile("" ::"w"(v79));
          }
          {
            v78 = v62[5];
            __asm__ volatile("" ::"w"(v78));
          }
          v80 = (float*)(v7 + 32LL * v61++);
          v81 = (float)((float)(PSEUDO_UNFUSED(v63 * v79)) +
                        (float)(*v60 * v72)) +
                (float)(v64 * v78);
          v82 = v75 + (float)((float)((float)(PSEUDO_UNFUSED(v72 * v60[9])) +
                                      (float)(PSEUDO_UNFUSED(v79 * v60[12]))) +
                              (float)(PSEUDO_UNFUSED(v78 * v60[15])));
          v83 = v76 + (float)((float)((float)(PSEUDO_UNFUSED(v72 * v60[10])) +
                                      (float)(PSEUDO_UNFUSED(v79 * v60[13]))) +
                              (float)(PSEUDO_UNFUSED(v78 * v60[16])));
          {
            v84 = v69 * v60[18];
            __asm__ volatile("" ::"w"(v84));
          }
          {
            v85 = v69 * v60[19];
            __asm__ volatile("" ::"w"(v85));
          }
          {
            v86 = v69 * v60[20];
            __asm__ volatile("" ::"w"(v86));
          }
          {
            v87 = v60[22];
            __asm__ volatile("" ::"w"(v87));
          }
          {
            v88 = v60[23];
            __asm__ volatile("" ::"w"(v88));
          }
          v89 = v84 + (float)(PSEUDO_UNFUSED(v68 * v60[21]));
          {
            v90 = v60[26];
            __asm__ volatile("" ::"w"(v90));
          }
          v80[2] =
              v77 + (float)((float)((float)(PSEUDO_UNFUSED(v72 * v60[11])) +
                                    (float)(PSEUDO_UNFUSED(v79 * v60[14]))) +
                            (float)(PSEUDO_UNFUSED(v78 * v60[17])));
          v91 = v85 + (float)(PSEUDO_UNFUSED(v68 * v87));
          v92 = v86 + (float)(PSEUDO_UNFUSED(v68 * v88));
          {
            v93 = v60[24];
            __asm__ volatile("" ::"w"(v93));
          }
          {
            v94 = v60[25];
            __asm__ volatile("" ::"w"(v94));
          }
          *v80 = v82;
          v80[1] = v83;
          v80[4] = v81 + (float)(v89 + (float)(PSEUDO_UNFUSED(v73 * v93)));
          v80[5] = (float)((float)((float)(PSEUDO_UNFUSED(v66 * v79)) +
                                   (float)(v65 * v72)) +
                           (float)(v67 * v78)) +
                   (float)(v91 + (float)(PSEUDO_UNFUSED(v73 * v94)));
          v80[6] = (float)((float)((float)(PSEUDO_UNFUSED(v71 * v79)) +
                                   (float)(v70 * v72)) +
                           (float)(v74 * v78)) +
                   (float)(v92 + (float)(PSEUDO_UNFUSED(v73 * v90)));
        } while (v59 != 0);
        {
          v10 = *((_BYTE*)v57 + 4);
          __asm__ volatile("" ::"r"(v10));
        }
      }
      else {
        v10 = 0;
      }
      v11 = v216 + 40 * v4;
      physx_Dy_FeatherstoneArticulation_computePropagateSpatialInertia(
          (void*)((__int64)v224),
          *(unsigned __int8*)(*(_QWORD*)(v11 + 24) + 351LL), v10,
          (float*)(v3 + 112 * v4), (float*)(v6 + 24LL * (unsigned int)v58),
          (float*)(v7 + 32 * v58), (float*)(v8 + 36 * v4), v9 + 32 * v58);
      {
        v12 = (float*)(LANES64(a2[88]).n64_u64[0] + 12 * v4);
        __asm__ volatile("" ::"r"(v12));
      }
      {
        v13 = *v12;
        __asm__ volatile("" ::"w"(v13));
      }
      {
        v14 = v12[1];
        __asm__ volatile("" ::"w"(v14));
      }
      {
        v15 = v12[2];
        __asm__ volatile("" ::"w"(v15));
      }
      LODWORD(v218) = 0;
      v219 = 0;
      v223 = 0;
      v220 = v13;
      v221 = v14;
      *((float*)&v218 + 1) = v15;
      *((float*)&v218 + 2) = -v14;
      v222 = -v13;
      *((float*)&v218 + 3) = -v15;
      physx_Dy_FeatherstoneArticulation_translateInertia(&v218, (__int64)v224);
      --v4;
      {
        v16 = (float*)(v3 + 112LL * *(unsigned int*)(v11 + 32));
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = v224[1] + v16[1];
        __asm__ volatile("" ::"w"(v17));
      }
      {
        v18 = v16[2];
        __asm__ volatile("" ::"w"(v18));
      }
      {
        v19 = v16[3];
        __asm__ volatile("" ::"w"(v19));
      }
      *v16 = v224[0] + *v16;
      v16[1] = v17;
      {
        v20 = v224[2] + v18;
        __asm__ volatile("" ::"w"(v20));
      }
      {
        v21 = v224[3] + v19;
        __asm__ volatile("" ::"w"(v21));
      }
      {
        v22 = v16[4];
        __asm__ volatile("" ::"w"(v22));
      }
      {
        v23 = v16[5];
        __asm__ volatile("" ::"w"(v23));
      }
      v16[2] = v20;
      v16[3] = v21;
      {
        v24 = v224[5] + v23;
        __asm__ volatile("" ::"w"(v24));
      }
      v16[4] = v224[4] + v22;
      v16[5] = v24;
      {
        v25 = v224[7] + v16[7];
        __asm__ volatile("" ::"w"(v25));
      }
      {
        v26 = v16[8];
        __asm__ volatile("" ::"w"(v26));
      }
      {
        v27 = v16[9];
        __asm__ volatile("" ::"w"(v27));
      }
      v16[6] = v224[6] + v16[6];
      v16[7] = v25;
      {
        v28 = v224[8] + v26;
        __asm__ volatile("" ::"w"(v28));
      }
      {
        v29 = v224[9] + v27;
        __asm__ volatile("" ::"w"(v29));
      }
      {
        v30 = v16[10];
        __asm__ volatile("" ::"w"(v30));
      }
      {
        v31 = v16[11];
        __asm__ volatile("" ::"w"(v31));
      }
      v16[8] = v28;
      v16[9] = v29;
      {
        v32 = v224[10] + v30;
        __asm__ volatile("" ::"w"(v32));
      }
      {
        v33 = v224[11] + v31;
        __asm__ volatile("" ::"w"(v33));
      }
      {
        v34 = v16[12];
        __asm__ volatile("" ::"w"(v34));
      }
      {
        v35 = v16[13];
        __asm__ volatile("" ::"w"(v35));
      }
      v16[10] = v32;
      v16[11] = v33;
      {
        v36 = v224[12] + v34;
        __asm__ volatile("" ::"w"(v36));
      }
      {
        v37 = v224[13] + v35;
        __asm__ volatile("" ::"w"(v37));
      }
      {
        v38 = v16[14];
        __asm__ volatile("" ::"w"(v38));
      }
      {
        v39 = v16[15];
        __asm__ volatile("" ::"w"(v39));
      }
      v16[12] = v36;
      v16[13] = v37;
      {
        v40 = v224[15] + v39;
        __asm__ volatile("" ::"w"(v40));
      }
      v16[14] = v224[14] + v38;
      v16[15] = v40;
      {
        v41 = v224[17] + v16[17];
        __asm__ volatile("" ::"w"(v41));
      }
      {
        v42 = v16[18];
        __asm__ volatile("" ::"w"(v42));
      }
      {
        v43 = v16[19];
        __asm__ volatile("" ::"w"(v43));
      }
      v16[16] = v224[16] + v16[16];
      v16[17] = v41;
      {
        v44 = v224[18] + v42;
        __asm__ volatile("" ::"w"(v44));
      }
      {
        v45 = v224[19] + v43;
        __asm__ volatile("" ::"w"(v45));
      }
      {
        v46 = v16[20];
        __asm__ volatile("" ::"w"(v46));
      }
      {
        v47 = v16[21];
        __asm__ volatile("" ::"w"(v47));
      }
      v16[18] = v44;
      v16[19] = v45;
      {
        v48 = v224[20] + v46;
        __asm__ volatile("" ::"w"(v48));
      }
      {
        v49 = v224[21] + v47;
        __asm__ volatile("" ::"w"(v49));
      }
      {
        v50 = v16[22];
        __asm__ volatile("" ::"w"(v50));
      }
      {
        v51 = v16[23];
        __asm__ volatile("" ::"w"(v51));
      }
      v16[20] = v48;
      v16[21] = v49;
      {
        v52 = v224[22] + v50;
        __asm__ volatile("" ::"w"(v52));
      }
      {
        v53 = v224[23] + v51;
        __asm__ volatile("" ::"w"(v53));
      }
      {
        v54 = v16[24];
        __asm__ volatile("" ::"w"(v54));
      }
      {
        v55 = v16[25];
        __asm__ volatile("" ::"w"(v55));
      }
      v16[22] = v52;
      v16[23] = v53;
      {
        v56 = v224[25] + v55;
        __asm__ volatile("" ::"w"(v56));
      }
      v16[24] = v224[24] + v54;
      v16[25] = v56;
      v16[26] = v224[26] + v16[26];
    } while ((_DWORD)v4 != 0);
  }
  {
    v95 = *(int8x16_t*)(v3 + 84);
    __asm__ volatile("" ::"w"(v95));
  }
  {
    v96 = *(int32x4_t*)(v3 + 72);
    __asm__ volatile("" ::"w"(v96));
  }
  {
    v97 = *(int8x16_t*)(v3 + 48);
    __asm__ volatile("" ::"w"(v97));
  }
  LANES128(v98).n128_u32[3] = 0;
  LANES128(v110).n128_u32[3] = 0;
  {
    v99 = *(int32x4_t*)(v3 + 36);
    __asm__ volatile("" ::"w"(v99));
  }
  {
    v100 = *(float32x4_t*)v3;
    __asm__ volatile("" ::"w"(v100));
  }
  LANES128(v101).n128_u32[0] = LANES128(v95).n128_u32[3];
  LANES128(v98).n128_u32[0] = LANES128(v97).n128_u32[3];
  {
    v103 = *(float32x4_t*)v3;
    __asm__ volatile("" ::"w"(v103));
  }
  LANES128(v102).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v96).n128_u64[0]), 0),
              COERCE_AS(int8x8_t, LANES128(v95).n128_u64[0]), 4u))
          .n64_u64[0];
  LANES128(v103).n128_u32[3] = 0;
  LANES128(v101).n128_u32[1] = *(_DWORD*)(v3 + 100);
  *(int32x2_t*)&LANES128(v102).n128_i8[8] = vdup_laneq_s32(v95, 3);
  *(unsigned __int64*)((char*)LANES128(v98).n128_u64 + 4) =
      *(unsigned int*)(v3 + 64);
  LANES128(v104).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(int8x8_t, LANES128(v96).n128_u64[0]),
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v95).n128_u64[0]), 1),
              4u))
          .n64_u64[0];
  LANES128(v101).n128_u64[1] = *(unsigned int*)(v3 + 104);
  v105 = v98;
  v106 = LANES64_OF(
             vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v98).n128_u64[0]), 1))
             .n64_u64[0];
  {
    v107 = *(int32x4_t*)(v3 + 12);
    __asm__ volatile("" ::"w"(v107));
  }
  *(int32x2_t*)&LANES128(v104).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v101).n128_u64[0]), 1);
  LANES128(v108).n128_u64[0] =
      LANES64_OF(
          vext_s8(vdup_laneq_s32(v96, 2),
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v95, v95, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  LANES128(v105).n128_u32[2] = *(_DWORD*)(v3 + 68);
  LANES128(v110).n128_u32[0] = LANES128(v107).n128_u32[3];
  v109 = v107;
  LANES128(v109).n128_u32[3] = 0;
  LANES128(v108).n128_u64[1] =
      LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0];
  *(unsigned __int64*)((char*)LANES128(v110).n128_u64 + 4) =
      *(unsigned int*)(v3 + 28);
  v111 = vaddq_f32(v101, v108);
  LANES128(v108).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v108).n128_u64[1] = 0x3F0000003F000000LL;
  v112 = vmulq_f32(v111, v108);
  v113 = vmulq_f32(vaddq_f32(v95, v104), v108);
  v114 = vmulq_f32(vaddq_f32(v96, v102), v108);
  LANES128(v111).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v99).n128_u64[0]), 0),
              COERCE_AS(int8x8_t, LANES128(v97).n128_u64[0]), 4u))
          .n64_u64[0];
  v115 = v112;
  v116 = v113;
  v117 = v114;
  *(int32x2_t*)&LANES128(v111).n128_i8[8] = vdup_laneq_s32(v97, 3);
  LANES128(v115).n128_u32[3] = 0;
  LANES128(v116).n128_u32[3] = 0;
  LANES128(v117).n128_u32[3] = 0;
  LANES128(v118).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(int8x8_t, LANES128(v99).n128_u64[0]),
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v97).n128_u64[0]), 1),
              4u))
          .n64_u64[0];
  LANES64(v119).n64_u64[0] = LANES128_OF(vextq_s8(v115, v115, 8u)).n128_u64[0];
  LANES128(v118).n128_u64[1] = v106;
  LANES64(v120).n64_u64[0] = LANES64_OF(vdup_laneq_s32(v99, 2)).n64_u64[0];
  LANES128(v116).n128_u64[0] =
      LANES128_OF(vextq_s8(v116, v116, 8u)).n128_u64[0];
  v121 = vaddq_f32(v99, v111);
  LANES128(v122).n128_u64[0] =
      LANES64_OF(
          vext_s8(v120,
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  LANES64(v123).n64_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v112).n128_u64[0]), v119, 4u))
          .n64_u64[0];
  LANES64(v124).n64_u64[0] =
      LANES64_OF(vext_s8(COERCE_AS(int8x8_t, LANES128(v113).n128_u64[0]),
                         COERCE_AS(int8x8_t, LANES128(v116).n128_u64[0]), 4u))
          .n64_u64[0];
  v125 = vaddq_f32(v97, v118);
  v127 = v110;
  LANES128(v122).n128_u64[1] =
      LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u64[0];
  LANES64(v126).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])),
                   COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]), v119))
          .n64_u64[0];
  LANES128(v127).n128_u32[2] = *(_DWORD*)(v3 + 32);
  LANES64(v133).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]),
                            v123),
                   v124, COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
          .n64_u64[0];
  v128 = vaddq_f32(v105, v122);
  v131 = vmulq_f32(v121, v108);
  v129 = COERCE_AS(float32x4_t, GameData_1a83090);
  v132 = vmulq_f32(v125, v108);
  v130 = COERCE_AS(int8x16_t, GameData_1a83610);
  LANES128(v131).n128_u32[3] = 0;
  LANES128(v132).n128_u32[3] = 0;
  LANES128(v137).n128_u64[0] = LANES64_OF(vext_s8(v133, v126, 4u)).n64_u64[0];
  LANES64(v133).n64_u32[1] = 0;
  v136 = vmulq_f32(v128, v108);
  v134 = COERCE_AS(float32x4_t, GameData_1a83090);
  v135 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v136).n128_u32[3] = 0;
  LANES128(v137).n128_u64[1] = LANES64(v133).n64_u32[0];
  v138 = vmulq_f32(v117, v137);
  LANES128(v138).n128_u64[0] = LANES128_OF(vpaddq_f32(v138, v138)).n128_u64[0];
  LANES64(v139).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v138).n128_u64[0])))
          .n64_u64[0];
  v140 = COERCE_AS(int32x4_t, GameData_1a82dd0);
  v141 = COERCE_AS(float32x4_t, GameData_1a82dd0);
  if (LANES64(v139).n64_f32[0] != 0x0.0p+0f) {
    LANES64(v142).n64_u64[0] =
        LANES128_OF(vextq_s8(v117, v117, 8u)).n128_u64[0];
    LANES64(v143).n64_u64[0] =
        LANES64_OF(
            vext_s8(COERCE_AS(int8x8_t, LANES128(v114).n128_u64[0]), v142, 4u))
            .n64_u64[0];
    v144 = LANES64_OF(
               vmls_f32(
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]),
                            v124),
                   v143, COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0])))
               .n64_u64[0];
    LANES64(v145).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]),
                         v119),
                COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]), v142))
            .n64_u64[0];
    LANES64(v146).n64_u64[0] = LANES64_OF(vrecpe_f32(v139)).n64_u64[0];
    LANES64(v147).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                         v143),
                v123, COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0])))
            .n64_u64[0];
    LANES128(v148).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v126, 0), v145, 4u)).n64_u64[0];
    LANES64(v149).n64_u64[0] =
        LANES64_OF(vmul_f32(v146, vrecps_f32(v139, v146))).n64_u64[0];
    LANES128(v150).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v133, 0), v147, 4u)).n64_u64[0];
    *(int8x8_t*)&LANES128(v148).n128_i8[8] = v147;
    LANES128(v150).n128_u64[1] = v144;
    LANES64(v151).n64_u64[0] =
        LANES64_OF(vmul_f32(v149, vrecps_f32(v139, v149))).n64_u64[0];
    LANES64(v152).n64_u64[0] =
        LANES64_OF(vmul_f32(v151, vrecps_f32(v139, v151))).n64_u64[0];
    LANES64(v153).n64_u64[0] =
        LANES64_OF(vmul_f32(v152, vrecps_f32(v139, v152))).n64_u64[0];
    LODWORD(v154) =
        LANES64_OF(vmul_f32(v153, vrecps_f32(v139, v153))).n64_u32[0];
    v141 = vmulq_n_f32(v137, v154);
    v135 = vmulq_n_f32(v148, v154);
    v134 = vmulq_n_f32(v150, v154);
    LANES128(v141).n128_u32[3] = 0;
    LANES128(v135).n128_u32[3] = 0;
    LANES128(v134).n128_u32[3] = 0;
  }
  v155 = vnegq_f32(v103);
  v156 = vnegq_f32(v109);
  v157 = vnegq_f32(v127);
  LANES128(v155).n128_u32[3] = 0;
  LANES128(v156).n128_u32[3] = 0;
  LANES128(v157).n128_u32[3] = 0;
  v158 = vmulq_n_f32(v155, LANES128(v141).n128_f32[0]);
  v159 = vmulq_lane_f32(v156,
                        COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]), 1);
  v160 = vmulq_laneq_f32(v157, v141, 2);
  v161 = vmulq_laneq_f32(v157, v135, 2);
  v162 = vmulq_laneq_f32(v157, v134, 2);
  LANES128(v158).n128_u32[3] = 0;
  LANES128(v159).n128_u32[3] = 0;
  LANES128(v160).n128_u32[3] = 0;
  LANES128(v161).n128_u32[3] = 0;
  LANES128(v162).n128_u32[3] = 0;
  v163 = vaddq_f32(v158, v159);
  v164 = vmulq_n_f32(v155, LANES128(v135).n128_f32[0]);
  v165 = vmulq_n_f32(v155, LANES128(v134).n128_f32[0]);
  LANES128(v164).n128_u32[3] = 0;
  LANES128(v165).n128_u32[3] = 0;
  v166 = vaddq_f32(v160, v163);
  v167 = vmulq_lane_f32(v156,
                        COERCE_AS(float32x2_t, LANES128(v135).n128_u64[0]), 1);
  v168 = vmulq_lane_f32(v156,
                        COERCE_AS(float32x2_t, LANES128(v134).n128_u64[0]), 1);
  LANES128(v167).n128_u32[3] = 0;
  LANES128(v168).n128_u32[3] = 0;
  v169 = vaddq_f32(v161, vaddq_f32(v164, v167));
  v170 = vaddq_f32(v162, vaddq_f32(v165, v168));
  v171 = vmulq_n_f32(v166, LANES128(v100).n128_f32[0]);
  LANES128(v171).n128_u32[3] = 0;
  v172 = vmulq_n_f32(v169, LANES128(v107).n128_f32[0]);
  v173 = vmulq_n_f32(v170, LANES64_OF(vdup_laneq_s32(v107, 3)).n64_f32[0]);
  v174 = vmulq_n_f32(
      v170, LANES64_OF(vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v110).n128_u64[0]), 1))
                .n64_f32[0]);
  v175 = vmulq_laneq_f32(v170, v127, 2);
  LANES128(v172).n128_u32[3] = 0;
  LANES128(v173).n128_u32[3] = 0;
  LANES128(v174).n128_u32[3] = 0;
  LANES128(v175).n128_u32[3] = 0;
  v176 = vaddq_f32(v171, v172);
  v177 = vmulq_lane_f32(v169,
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]), 1);
  v178 = vmulq_laneq_f32(v169, v107, 2);
  LANES128(v177).n128_u32[3] = 0;
  LANES128(v178).n128_u32[3] = 0;
  v179 = vaddq_f32(v176, v173);
  v180 = vmulq_lane_f32(v166,
                        COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0]), 1);
  v181 = vmulq_laneq_f32(v166, v100, 2);
  LANES128(v180).n128_u32[3] = 0;
  LANES128(v181).n128_u32[3] = 0;
  v182 = vaddq_f32(vaddq_f32(v181, v178), v175);
  v183 = vaddq_f32(v131, v179);
  v184 = vaddq_f32(v132, vaddq_f32(vaddq_f32(v180, v177), v174));
  v185 = vaddq_f32(v136, v182);
  LANES64(v186).n64_u64[0] = LANES128_OF(vextq_s8(v185, v185, 4u)).n128_u64[0];
  LANES64(v187).n64_u64[0] = LANES128_OF(vextq_s8(v185, v185, 8u)).n128_u64[0];
  LANES64(v188).n64_u64[0] = LANES128_OF(vextq_s8(v184, v184, 4u)).n128_u64[0];
  LANES64(v189).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v184, v184, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])),
              COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]), v187))
          .n64_u64[0];
  LANES64(v190).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]),
                            v186),
                   v188, COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
          .n64_u64[0];
  LANES128(v191).n128_u64[0] = LANES64_OF(vext_s8(v190, v189, 4u)).n64_u64[0];
  LANES64(v190).n64_u32[1] = 0;
  LANES128(v191).n128_u64[1] = LANES64(v190).n64_u32[0];
  v192 = vmulq_f32(v183, v191);
  LANES128(v192).n128_u64[0] = LANES128_OF(vpaddq_f32(v192, v192)).n128_u64[0];
  LANES64(v193).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v192).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v192).n128_u64[0])))
          .n64_u64[0];
  if (LANES64(v193).n64_f32[0] != 0x0.0p+0f) {
    LANES64(v194).n64_u64[0] =
        LANES128_OF(vextq_s8(v183, v183, 4u)).n128_u64[0];
    v195 = LANES64_OF(
               vmls_f32(
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0]),
                            v188),
                   v194, COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0])))
               .n64_u64[0];
    LANES64(v196).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v187,
                         COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])),
                COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]),
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v183, v183, 8u)).n128_u64[0])))
            .n64_u64[0];
    LANES64(v197).n64_u64[0] = LANES64_OF(vrecpe_f32(v193)).n64_u64[0];
    LANES64(v198).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]),
                         v194),
                v186, COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])))
            .n64_u64[0];
    LANES64(v199).n64_u64[0] =
        LANES64_OF(vmul_f32(v197, vrecps_f32(v193, v197))).n64_u64[0];
    LANES128(v200).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v190, 0), v198, 4u)).n64_u64[0];
    LANES128(v200).n128_u64[1] = v195;
    LANES64(v201).n64_u64[0] =
        LANES64_OF(vmul_f32(v199, vrecps_f32(v193, v199))).n64_u64[0];
    LANES64(v202).n64_u64[0] =
        LANES64_OF(vmul_f32(v201, vrecps_f32(v193, v201))).n64_u64[0];
    LANES64(v203).n64_u64[0] =
        LANES64_OF(vmul_f32(v202, vrecps_f32(v193, v202))).n64_u64[0];
    LODWORD(v204) =
        LANES64_OF(vmul_f32(v203, vrecps_f32(v193, v203))).n64_u32[0];
    LANES128(v205).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v189, 0), v196, 4u)).n64_u64[0];
    v140 = vmulq_n_f32(v191, v204);
    v129 = vmulq_n_f32(v200, v204);
    *(int8x8_t*)&LANES128(v205).n128_i8[8] = v198;
    LANES128(v140).n128_u32[3] = 0;
    LANES128(v129).n128_u32[3] = 0;
    v130 = vmulq_n_f32(v205, v204);
    LANES128(v130).n128_u32[3] = 0;
  }
  LANES64(a2[130]).n64_u64[0] = LANES128(v140).n128_u64[0];
  LANES64(a2[133]).n64_u64[0] = LANES128(v129).n128_u64[0];
  LANES128(v206).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(
                  int8x8_t,
                  LANES128_OF(
                      vdupq_lane_s32(
                          COERCE_AS(int32x2_t, LANES128(v166).n128_u64[0]), 0))
                      .n128_u64[0]),
              COERCE_AS(int8x8_t, LANES128(v169).n128_u64[0]), 4u))
          .n64_u64[0];
  LANES128(v207).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(int8x8_t, LANES128(v166).n128_u64[0]),
              COERCE_AS(
                  int8x8_t,
                  LANES128_OF(
                      vdupq_lane_s32(
                          COERCE_AS(int32x2_t, LANES128(v169).n128_u64[0]), 1))
                      .n128_u64[0]),
              4u))
          .n64_u64[0];
  LANES128(v206).n128_u64[1] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v170).n128_u64[0]), 0))
          .n64_u32[0];
  LANES128(v207).n128_u64[1] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v170).n128_u64[0]), 1))
          .n64_u32[0];
  v208 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v140, LANES128(v169).n128_f32[0]),
          vmulq_lane_f32(
              v130, COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]), 1)),
      vmulq_laneq_f32(v129, v169, 2));
  LANES128(v209).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t,
                            LANES128_OF(vdupq_laneq_s32(v166, 2)).n128_u64[0]),
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v169, v169, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  v210 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v140, LANES128(v166).n128_f32[0]),
          vmulq_lane_f32(
              v130, COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0]), 1)),
      vmulq_laneq_f32(v129, v166, 2));
  v211 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v140, LANES128(v170).n128_f32[0]),
          vmulq_lane_f32(
              v130, COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]), 1)),
      vmulq_laneq_f32(v129, v170, 2));
  LANES128(v209).n128_u64[1] = LANES64_OF(vdup_laneq_s32(v170, 2)).n64_u32[0];
  v212 = vaddq_f32(
      v141,
      vaddq_f32(vmulq_laneq_f32(v209, v210, 2),
                vaddq_f32(vmulq_n_f32(v206, LANES128(v210).n128_f32[0]),
                          vmulq_lane_f32(v207,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v210).n128_u64[0]),
                                         1))));
  v213 = vaddq_f32(
      v135,
      vaddq_f32(vmulq_laneq_f32(v209, v208, 2),
                vaddq_f32(vmulq_n_f32(v206, LANES128(v208).n128_f32[0]),
                          vmulq_lane_f32(v207,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v208).n128_u64[0]),
                                         1))));
  v214 = vaddq_f32(
      v134,
      vaddq_f32(vmulq_laneq_f32(v209, v211, 2),
                vaddq_f32(vmulq_n_f32(v206, LANES128(v211).n128_f32[0]),
                          vmulq_lane_f32(v207,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v211).n128_u64[0]),
                                         1))));
  LANES64(a2[124]).n64_u64[0] = LANES128_OF(vzip2q_s32(v210, v208)).n128_u64[0];
  LANES64(a2[121]).n64_u64[0] =
      LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v210).n128_u64[0]),
                           COERCE_AS(int32x2_t, LANES128(v208).n128_u64[0])))
          .n64_u64[0];
  LANES64(a2[123]).n64_u64[0] =
      LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v208).n128_u64[0]),
                           COERCE_AS(int32x2_t, LANES128(v211).n128_u64[0])))
          .n64_u64[0];
  LANES64(a2[127]).n64_u64[0] = LANES128(v213).n128_u64[0];
  LANES64(a2[126]).n64_u64[0] =
      LANES128_OF(vextq_s8(v212, v212, 4u)).n128_u64[0];
  LANES128(v206).n128_u64[0] =
      LANES128_OF(vzip2q_s32(v211, vuzp1q_s32(v211, v212))).n128_u64[0];
  LANES128(v211).n128_u32[1] = LANES128(v210).n128_u32[1];
  LANES64(a2[128]).n64_u64[0] =
      LANES128_OF(vzip2q_s32(v213, vuzp1q_s32(v213, v214))).n128_u64[0];
  LANES64(a2[125]).n64_u64[0] = LANES128(v206).n128_u64[0];
  LANES64(a2[122]).n64_u64[0] = LANES128(v211).n128_u64[0];
  LANES64(a2[129]).n64_u64[0] =
      LANES128_OF(vextq_s8(v214, v214, 4u)).n128_u64[0];
  LANES64(a2[131]).n64_u64[0] =
      LANES128_OF(vzip2q_s32(v140, vuzp1q_s32(v140, v130))).n128_u64[0];
  result = vextq_s8(v130, v130, 4u);
  LANES64(a2[132]).n64_u64[0] = LANES128(result).n128_u64[0];
  LANES64(a2[134]).n64_u32[0] = LANES128(v129).n128_u32[2];
  return result;
}

#pragma GCC visibility pop
