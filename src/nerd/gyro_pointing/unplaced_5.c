#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nerd_gyro_pointing_GyroPointingStateDetector_GetSensorCovariance_plt(
        PSEUDO_X8, _QWORD);
__int64 SdkRoutine_879cb0(__int64, unsigned __int64, __int64, unsigned __int64,
                          unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate_plt(__int64,
                                                                      __int64);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_AddCorrectedGlobalAcc_plt(
    __int64, __int64, float);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_AddSample_plt(__int64,
                                                                   __int64);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsMoving_plt(__int64);
float SdkRoutine_879ca0(__int64, __int64);
float atan2f_plt(float, float);
float cosf_plt(float);
float nerd_gyro_pointing_GyroPointingStateDetector_GetVelVarTime_plt(__int64);
float nerd_gyro_pointing_GyroPointingStateDetector_GetVelVar_plt(__int64);
float sinf_plt(float);
void __attribute__((noreturn)) nn_codec_hwacod_32f020();
void nerd_gyro_pointing_6ffa60(__int64 a1, __int64* a2);

void nerd_gyro_pointing_6ffa60(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  char v11;
  float v12;
  float v13;
  float v14;
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
  __int64* v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  float v40;
  __int64* v41;
  __int64* v42;
  _QWORD* v43;
  float v44;
  __int64 v45;
  float v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  unsigned int v52;
  unsigned int v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
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
  bool v128;
  __int64 v129;
  __int64 v130;
  float v131;
  float v132;
  float v133;
  __int64 v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  char v142;
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
  char v156;
  float v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
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
  unsigned __int64 v179;
  int v180;
  char v181;
  float v182;
  float v183;
  char v184;
  float v185;
  float v186;
  float v187;
  char v188;
  __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  _QWORD* v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  _QWORD* v216;
  unsigned __int64 v217;
  __int64 v218;
  bool v219;
  unsigned __int64 v220;
  _QWORD* v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  _QWORD* v226;
  unsigned __int64 v227;
  unsigned __int64 v228;
  unsigned __int64 v229;
  unsigned __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  _QWORD* v233;
  unsigned __int64 v234;
  __int64 v235;
  unsigned __int64 v236;
  _QWORD* v237;
  unsigned __int64 v238;
  unsigned __int64 v239;
  unsigned __int64 v240;
  unsigned __int64 v241;
  __int64* v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  float v252;
  float v253;
  float v254;
  float v255;
  float v256;
  float v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  float v266;
  __int64 v267;
  __int128 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  unsigned __int64 v280;
  unsigned __int64 v281;
  __int64 v282;
  int v283;
  __int64 v284;
  int v285;
  __int64 v286;
  int v287;
  __int64 v288;
  int v289;
  unsigned __int64 v290;
  int v291;
  struct {
    unsigned __int64 v292;
    unsigned __int64 v293;
    __int128 v294;
    _BYTE v295[24];
  } v292_;
  struct {
    _QWORD v296[2];
    __int64 v297;
    __int64 v298;
    int v299;
  } v296_;

  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = a1 + 24576;
  v4 = a2 + 1;
  {
    v5 = *(float*)(a1 + 8372);
    __asm__ volatile("" ::"w"(v5));
  }
  {
    v6 = *(float*)(a1 + 8376);
    __asm__ volatile("" ::"w"(v6));
  }
  {
    v7 = *(float*)(a1 + 8384);
    __asm__ volatile("" ::"w"(v7));
  }
  {
    v8 = *(float*)(a1 + 15456);
    __asm__ volatile("" ::"w"(v8));
  }
  {
    v9 = *(float*)(a1 + 15460);
    __asm__ volatile("" ::"w"(v9));
  }
  {
    v10 = *(float*)(a1 + 15464);
    __asm__ volatile("" ::"w"(v10));
  }
  {
    v11 = *(_BYTE*)(a1 + 28464);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *((float*)a2 + 2) -
          (float)(*(float*)(a1 + 8312) / 0x1.9000000000000p+6f);
    __asm__ volatile("" ::"w"(v12));
  }
  {
    v13 = *((float*)a2 + 3) -
          (float)(*(float*)(a1 + 8316) / 0x1.9000000000000p+6f);
    __asm__ volatile("" ::"w"(v13));
  }
  {
    v14 = *((float*)a2 + 4) -
          (float)(*(float*)(a1 + 8320) / 0x1.9000000000000p+6f);
    __asm__ volatile("" ::"w"(v14));
  }
  {
    v15 = *(float*)(a1 + 8368) * v13;
    __asm__ volatile("" ::"w"(v15));
  }
  {
    v16 = *(float*)(a1 + 8520);
    __asm__ volatile("" ::"w"(v16));
  }
  {
    v17 = *(float*)(a1 + 8364) * v12;
    __asm__ volatile("" ::"w"(v17));
  }
  {
    v18 = *(float*)(a1 + 8380) * v13;
    __asm__ volatile("" ::"w"(v18));
  }
  {
    v19 = *(float*)(a1 + 8532);
    __asm__ volatile("" ::"w"(v19));
  }
  *(float*)(a1 + 28472) =
      (float)((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 8352) * v12)) +
                      0x0.0p+0f) +
              (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8356) * v13))) +
      (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8360) * v14));
  {
    v20 = *(float*)(a1 + 8504);
    __asm__ volatile("" ::"w"(v20));
  }
  v21 = (float)(v17 + 0x0.0p+0f) + v15;
  v22 = v5 * v14;
  {
    v23 = *(float*)(a1 + 8524);
    __asm__ volatile("" ::"w"(v23));
  }
  v24 = v21 + v22;
  v25 = v6 * v12;
  {
    v26 = *(float*)(a1 + 8528);
    __asm__ volatile("" ::"w"(v26));
  }
  *(float*)(a1 + 28476) = v24;
  {
    v27 = *(float*)(a1 + 8508);
    __asm__ volatile("" ::"w"(v27));
  }
  v28 = (float)(v25 + 0x0.0p+0f) + v18;
  v29 = v7 * v14;
  {
    v30 = *(float*)(a1 + 8536);
    __asm__ volatile("" ::"w"(v30));
  }
  v31 = v28 + v29;
  {
    v32 = *(float*)(a1 + 8516);
    __asm__ volatile("" ::"w"(v32));
  }
  *(float*)(a1 + 28480) = v31;
  v33 = (__int64*)((char*)a2 + 20);
  {
    v34 = *((float*)a2 + 5) - v8;
    __asm__ volatile("" ::"w"(v34));
  }
  {
    v35 = *((float*)a2 + 6) - v9;
    __asm__ volatile("" ::"w"(v35));
  }
  {
    v36 = *((float*)a2 + 7) - v10;
    __asm__ volatile("" ::"w"(v36));
  }
  *(float*)(a1 + 28484) =
      (float)((float)((float)(PSEUDO_UNFUSED(v20 * v34)) + 0x0.0p+0f) +
              (float)(PSEUDO_UNFUSED(v27 * v35))) +
      (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8512) * v36));
  *(float*)(a1 + 28488) =
      (float)((float)((float)(PSEUDO_UNFUSED(v32 * v34)) + 0x0.0p+0f) +
              (float)(PSEUDO_UNFUSED(v16 * v35))) +
      (float)(PSEUDO_UNFUSED(v23 * v36));
  *(float*)(a1 + 28492) =
      (float)((float)((float)(PSEUDO_UNFUSED(v26 * v34)) + 0x0.0p+0f) +
              (float)(PSEUDO_UNFUSED(v19 * v35))) +
      (float)(PSEUDO_UNFUSED(v30 * v36));
  if ((v11 & 1) == 0) {
    {
      v62 = *a2;
      __asm__ volatile("" ::"r"(v62));
    }
    *(_BYTE*)(a1 + 28464) = 1;
    *(_QWORD*)(a1 + 28456) = v62;
    return;
  }
  {
    v37 = *(_QWORD*)(a1 + 28456);
    __asm__ volatile("" ::"r"(v37));
  }
  v38 = __OFSUB__(*a2, v37);
  {
    v39 = *a2 - v37;
    __asm__ volatile("" ::"r"(v39));
  }
  if (v39 < 0 == v38) {
    *(_QWORD*)(a1 + 28456) = *a2;
    v40 = (float)v39 / 0x1.dcd6500000000p+29f;
    if (v40 > 0x0.0p+0f) {
      v41 = a2;
      v42 = (__int64*)(a1 + 8504);
      v43 = (_QWORD*)(a1 + 28512);
      if (*(_BYTE*)(a1 + 28568) == 1) {
        if (*(_BYTE*)(a1 + 28632) == 1) {
          {
            v44 = *(float*)(a1 + 28540);
            __asm__ volatile("" ::"w"(v44));
          }
          {
            v45 = *(_QWORD*)(a1 + 8528);
            __asm__ volatile("" ::"r"(v45));
          }
          {
            v46 =
                (float)(*a2 - *(_QWORD*)(a1 + 28576)) / 0x1.dcd6500000000p+29f;
            __asm__ volatile("" ::"w"(v46));
          }
          *((_QWORD*)&v268 + 1) = *(_QWORD*)(a1 + 8520);
          v269 = v45;
          LODWORD(v270) = *(_DWORD*)(a1 + 8536);
          {
            v47 = *(_QWORD*)(a1 + 8512);
            __asm__ volatile("" ::"r"(v47));
          }
          v48 = v46 * 0x1.0000000000000p-1f;
          {
            v49 = *(float*)(a1 + 28532);
            __asm__ volatile("" ::"w"(v49));
          }
          {
            v50 = *((float*)a2 + 5);
            __asm__ volatile("" ::"w"(v50));
          }
          {
            v51 = *((float*)a2 + 6);
            __asm__ volatile("" ::"w"(v51));
          }
          {
            v267 = *v42;
            __asm__ volatile("" ::"r"(v267));
          }
          *(_QWORD*)&v268 = v47;
          *(float*)&v52 = v50 - v49;
          *(float*)&v53 = v51 - *(float*)(a1 + 28536);
          {
            v54 = *((float*)a2 + 7);
            __asm__ volatile("" ::"w"(v54));
          }
          v292_.v292 = __PAIR64__(v53, v52);
          *(float*)&v292_.v293 = v54 - v44;
          v55 = SdkRoutine_879ca0((__int64)&v267, (__int64)&v292_.v292) / v48,
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w"));
          v57 = v56 / v48;
          v59 = v58 / v48;
          if ((*(_BYTE*)(v2 + 3932) & 1) == 0) {
            *(_BYTE*)(v2 + 3932) = 1;
          }
          {
            v60 = *(unsigned __int8*)(v2 + 3992);
            __asm__ volatile("" ::"r"(v60));
          }
          *(float*)(v2 + 3920) = v55;
          *(float*)(v2 + 3924) = v57;
          a2 = v41;
          *(float*)(v2 + 3928) = v59;
          {
            v61 = *(unsigned __int8*)(v2 + 4056);
            __asm__ volatile("" ::"r"(v61));
          }
          if (v61 != v60) {
            goto LABEL_17;
          }
        LABEL_13:
          if (v61 != 0) {
            {
              v63 = *(_DWORD*)(a1 + 28528);
              __asm__ volatile("" ::"r"(v63));
            }
            *(_QWORD*)(a1 + 28576) = *(_QWORD*)(a1 + 28512);
            *(_DWORD*)(a1 + 28592) = v63;
            *(_QWORD*)(a1 + 28584) = *(_QWORD*)(a1 + 28520);
            {
              v64 = *(_DWORD*)(a1 + 28540);
              __asm__ volatile("" ::"r"(v64));
            }
            *(_QWORD*)(a1 + 28596) = *(_QWORD*)(a1 + 28532);
            *(_DWORD*)(a1 + 28604) = v64;
            {
              v65 = *(_BYTE*)(a1 + 28560);
              __asm__ volatile("" ::"r"(v65));
            }
            *(_QWORD*)(a1 + 28608) = *(_QWORD*)(a1 + 28544);
            {
              v66 = *(_QWORD*)(a1 + 28552);
              __asm__ volatile("" ::"r"(v66));
            }
            *(_BYTE*)(a1 + 28624) = v65;
            *(_QWORD*)(a1 + 28616) = v66;
            if (v60 != 0) {
            LABEL_20:
              *(_QWORD*)(a1 + 28512) = *a2;
              {
                v67 = *v4;
                __asm__ volatile("" ::"r"(v67));
              }
              *(_DWORD*)(a1 + 28528) = *((_DWORD*)v4 + 2);
              *(_QWORD*)(a1 + 28520) = v67;
              {
                v68 = *v33;
                __asm__ volatile("" ::"r"(v68));
              }
              *(_DWORD*)(a1 + 28540) = *((_DWORD*)v33 + 2);
              *(_QWORD*)(a1 + 28532) = v68;
              {
                v69 = a2[4];
                __asm__ volatile("" ::"r"(v69));
              }
              {
                v70 = a2[5];
                __asm__ volatile("" ::"r"(v70));
              }
              *(_BYTE*)(a1 + 28560) = *((_BYTE*)a2 + 48);
              *(_QWORD*)(a1 + 28552) = v70;
              *(_QWORD*)(a1 + 28544) = v69;
            LABEL_23:
              v266 = v8;
              {
                v79 = *(float*)(a1 + 24);
                __asm__ volatile("" ::"w"(v79));
              }
              {
                v80 = *(float*)(a1 + 28);
                __asm__ volatile("" ::"w"(v80));
              }
              {
                v82 = *(float*)(a1 + 16);
                __asm__ volatile("" ::"w"(v82));
              }
              {
                v81 = *(float*)(a1 + 20);
                __asm__ volatile("" ::"w"(v81));
              }
              {
                v83 = *(float*)(a1 + 32);
                __asm__ volatile("" ::"w"(v83));
              }
              *(float*)(a1 + 4) = v40 + *(float*)(a1 + 4);
              v84 = (float)((float)(PSEUDO_UNFUSED(v81 * v81)) +
                            (float)(PSEUDO_UNFUSED(v79 * v79))) +
                    (float)(PSEUDO_UNFUSED(v80 * v80));
              {
                v85 = v40 * *((float*)a2 + 2);
                __asm__ volatile("" ::"w"(v85));
              }
              {
                v86 = v40 * *((float*)a2 + 3);
                __asm__ volatile("" ::"w"(v86));
              }
              {
                v87 = v40 * *((float*)a2 + 4);
                __asm__ volatile("" ::"w"(v87));
              }
              v88 = (float)((float)((float)(PSEUDO_UNFUSED(v85 * v81)) +
                                    0x0.0p+0f) +
                            (float)(PSEUDO_UNFUSED(v86 * v79))) +
                    (float)(PSEUDO_UNFUSED(v87 * v80));
              v89 = v81 * v88;
              v90 = (float)(PSEUDO_UNFUSED(v79 * v88)) -
                    (float)(PSEUDO_UNFUSED(v86 * v84));
              v91 = (float)(PSEUDO_UNFUSED(v80 * v88)) -
                    (float)(PSEUDO_UNFUSED(v87 * v84));
              v92 = (float)(PSEUDO_UNFUSED(v87 * v79)) -
                    (float)(PSEUDO_UNFUSED(v86 * v80));
              v93 = v83 * (float)((float)(PSEUDO_UNFUSED(v85 * v80)) -
                                  (float)(PSEUDO_UNFUSED(v87 * v81)));
              v94 = (float)((float)(PSEUDO_UNFUSED(v86 * v81)) -
                            (float)(PSEUDO_UNFUSED(v85 * v79))) *
                    v83;
              v95 = (float)(PSEUDO_UNFUSED(v83 * v92)) +
                    (float)(v89 - (float)(PSEUDO_UNFUSED(v85 * v84)));
              v96 = 0x1.0000000000000p+1f /
                    (float)((float)(PSEUDO_UNFUSED(v83 * v83)) + v84);
              {
                v97 = *(float*)(a1 + 8536);
                __asm__ volatile("" ::"w"(v97));
              }
              v98 = v96 * v95;
              v99 = v96 * (float)(v94 + v91);
              v100 = v96 * (float)(v93 + v90);
              {
                v101 = *(float*)(a1 + 8532);
                __asm__ volatile("" ::"w"(v101));
              }
              v102 = v85 + v98;
              v103 = v87 + v99;
              v104 = v86 + v100;
              {
                v105 = *(float*)(a1 + 8524);
                __asm__ volatile("" ::"w"(v105));
              }
              {
                v106 = *(float*)(a1 + 12) + v104;
                __asm__ volatile("" ::"w"(v106));
              }
              {
                v107 = *(float*)(a1 + 8516);
                __asm__ volatile("" ::"w"(v107));
              }
              {
                v108 = *(float*)(a1 + 8520);
                __asm__ volatile("" ::"w"(v108));
              }
              *(float*)(a1 + 8) = *(float*)(a1 + 8) + v102;
              *(float*)(a1 + 12) = v106;
              v109 = v82 + v103;
              {
                v110 = *(float*)(a1 + 8508);
                __asm__ volatile("" ::"w"(v110));
              }
              {
                v111 = *(float*)(a1 + 8512);
                __asm__ volatile("" ::"w"(v111));
              }
              {
                v112 = *(float*)(a1 + 8528);
                __asm__ volatile("" ::"w"(v112));
              }
              *(float*)(a1 + 16) = v109;
              {
                v113 = *((float*)a2 + 5) - v8;
                __asm__ volatile("" ::"w"(v113));
              }
              {
                v114 = *((float*)a2 + 6) - v9;
                __asm__ volatile("" ::"w"(v114));
              }
              {
                v115 = *((float*)a2 + 7) - v10;
                __asm__ volatile("" ::"w"(v115));
              }
              v116 = v40 *
                     (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                 *(float*)(a1 + 8504) * v113)) +
                                             0x0.0p+0f) +
                                     (float)(PSEUDO_UNFUSED(v110 * v114))) +
                             (float)(PSEUDO_UNFUSED(v111 * v115)));
              v117 =
                  v40 *
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v107 * v113)) +
                                          0x0.0p+0f) +
                                  (float)(PSEUDO_UNFUSED(v108 * v114))) +
                          (float)(PSEUDO_UNFUSED(v105 * v115)));
              v118 =
                  v40 *
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v112 * v113)) +
                                          0x0.0p+0f) +
                                  (float)(PSEUDO_UNFUSED(v101 * v114))) +
                          (float)(PSEUDO_UNFUSED(v97 * v115)));
              v119 =
                  sqrtf((float)((float)(PSEUDO_UNFUSED(v118 * v118)) +
                                (float)((float)(PSEUDO_UNFUSED(v116 * v116)) +
                                        (float)(PSEUDO_UNFUSED(v117 * v117)))) +
                        0x1.0000000000000p-126f) *
                  0x1.0000000000000p-1f;
              if ((float)(v119 * v119) <= 0x1.47ae140000000p-5f) {
                v120 =
                    (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v119 *
                                                                                                    v119) *
                                                                                            -0x1.ae64560000000p-26f) +
                                                                                    0x1.71de3a0000000p-19f) *
                                                                            (float)(v119 *
                                                                                    v119)) +
                                                                    -0x1.a01a020000000p-13f) *
                                                            (float)(v119 *
                                                                    v119)) +
                                                    0x1.1111120000000p-7f) *
                                            (float)(v119 * v119)) +
                                    -0x1.5555560000000p-3f) *
                            (float)(v119 * v119)) +
                    0x1.0000000000000p+0f;
              }
              else {
                v120 = sinf_plt(v119) / v119,
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
              }
              v121 = v120 * 0x1.0000000000000p-1f;
              v122 = cosf_plt(v119),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              {
                v123 = *(float*)(a1 + 20);
                __asm__ volatile("" ::"w"(v123));
              }
              {
                v124 = *(float*)(a1 + 24);
                __asm__ volatile("" ::"w"(v124));
              }
              {
                v126 = *(float*)(a1 + 28);
                __asm__ volatile("" ::"w"(v126));
              }
              {
                v125 = *(float*)(a1 + 32);
                __asm__ volatile("" ::"w"(v125));
              }
              *(float*)(a1 + 20) =
                  (float)((float)(PSEUDO_UNFUSED(v125 * (float)(v116 * v121))) +
                          (float)(PSEUDO_UNFUSED(v122 * v123))) +
                  (float)((float)(v124 * (float)(v118 * v121)) -
                          (float)(PSEUDO_UNFUSED((float)(v117 * v121) * v126)));
              *(float*)(a1 + 24) =
                  (float)((float)(PSEUDO_UNFUSED(v125 * (float)(v117 * v121))) +
                          (float)(PSEUDO_UNFUSED(v122 * v124))) +
                  (float)((float)(v126 * (float)(v116 * v121)) -
                          (float)(PSEUDO_UNFUSED((float)(v118 * v121) * v123)));
              *(float*)(a1 + 28) =
                  (float)((float)(v123 * (float)(v117 * v121)) -
                          (float)(PSEUDO_UNFUSED((float)(v116 * v121) *
                                                 v124))) +
                  (float)((float)(PSEUDO_UNFUSED(v125 * (float)(v118 * v121))) +
                          (float)(PSEUDO_UNFUSED(v122 * v126)));
              *(float*)(a1 + 32) = -(
                  float)((float)((float)((float)((float)(v123 *
                                                         (float)(v116 * v121)) +
                                                 0x0.0p+0f) +
                                         (float)(v124 * (float)(v117 * v121))) +
                                 (float)(v126 * (float)(v118 * v121))) -
                         (float)(v125 * v122));
              if (*((_BYTE*)v41 + 36) == 1) {
                *(float*)(a1 + 44) = v40 + *(float*)(a1 + 44);
                if ((*((_BYTE*)v41 + 36) & 1) == 0) {
                  nn_codec_hwacod_32f020(),
                      v56 = COERCE_AS(__typeof__(v56),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                }
                *(float*)(a1 + 40) =
                    (float)(PSEUDO_UNFUSED(v40 * *((float*)v41 + 8))) +
                    *(float*)(a1 + 40);
              }
              {
                v127 = *(float*)(a1 + 4);
                __asm__ volatile("" ::"w"(v127));
              }
              {
                v128 = v127 < *(float*)a1;
                __asm__ volatile("" ::"r"(v128));
              }
              *(_BYTE*)(a1 + 36) =
                  (*(_BYTE*)(a1 + 36) | *((_BYTE*)v41 + 48)) & 1;
              if (!v128) {
                {
                  v129 = *(_QWORD*)(a1 + 8520);
                  __asm__ volatile("" ::"r"(v129));
                }
                {
                  v130 = *(_QWORD*)(a1 + 8528);
                  __asm__ volatile("" ::"r"(v130));
                }
                {
                  v132 = *(float*)(a1 + 8);
                  __asm__ volatile("" ::"w"(v132));
                }
                {
                  v131 = *(float*)(a1 + 12);
                  __asm__ volatile("" ::"w"(v131));
                }
                {
                  v133 = *(float*)(a1 + 16);
                  __asm__ volatile("" ::"w"(v133));
                }
                LODWORD(v270) = 0;
                v269 = 0;
                v267 = 0;
                v268 = (__typeof__(v268)){0};
                v296_.v297 = v129;
                v296_.v298 = v130;
                v262 = v131;
                v264 = v132;
                v296_.v299 = *(_DWORD*)(a1 + 8536);
                {
                  v134 = *(_QWORD*)(a1 + 8512);
                  __asm__ volatile("" ::"r"(v134));
                }
                v296_.v296[0] = *v42;
                v296_.v296[1] = v134;
                if ((SdkRoutine_879cb0((__int64)v296_.v296, 3u, (__int64)&v267,
                                       3u, 3u) &
                     1) == 0) {
                  v296_.v299 = 0;
                  v296_.v297 = 0;
                  v296_.v298 = 0;
                  v296_.v296[0] = 0;
                  v296_.v296[1] = 0;
                }
                {
                  v136 = *(float*)(a1 + 20);
                  __asm__ volatile("" ::"w"(v136));
                }
                {
                  v135 = *(float*)(a1 + 24);
                  __asm__ volatile("" ::"w"(v135));
                }
                {
                  v259 = *((float*)&v267 + 1);
                  __asm__ volatile("" ::"w"(v259));
                }
                {
                  v260 = *(float*)&v267;
                  __asm__ volatile("" ::"w"(v260));
                }
                {
                  v257 = *((float*)&v268 + 1);
                  __asm__ volatile("" ::"w"(v257));
                }
                {
                  v258 = *(float*)&v268;
                  __asm__ volatile("" ::"w"(v258));
                }
                {
                  v255 = *((float*)&v268 + 3);
                  __asm__ volatile("" ::"w"(v255));
                }
                {
                  v256 = *((float*)&v268 + 2);
                  __asm__ volatile("" ::"w"(v256));
                }
                {
                  v253 = *((float*)&v269 + 1);
                  __asm__ volatile("" ::"w"(v253));
                }
                {
                  v254 = *(float*)&v269;
                  __asm__ volatile("" ::"w"(v254));
                }
                {
                  v138 = *(float*)(a1 + 28);
                  __asm__ volatile("" ::"w"(v138));
                }
                {
                  v137 = *(float*)(a1 + 32);
                  __asm__ volatile("" ::"w"(v137));
                }
                {
                  v252 = *(float*)&v270;
                  __asm__ volatile("" ::"w"(v252));
                }
                if (v137 < 0x0.0p+0f) {
                  v136 = -v136;
                  v135 = -v135;
                  v138 = -v138;
                  v137 = -v137;
                }
                v263 = v262 / v127;
                v265 = v264 / v127;
                v261 = v133 / v127;
                v139 = sqrtf(
                    (float)((float)(PSEUDO_UNFUSED(v138 * v138)) +
                            (float)((float)(PSEUDO_UNFUSED(v135 * v135)) +
                                    (float)(PSEUDO_UNFUSED(v136 * v136)))) +
                    0x1.0000000000000p-126f);
                v140 = atan2f_plt(v139, v137),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
                v141 = v140 + v140;
                {
                  v142 = *(_BYTE*)(a1 + 36);
                  __asm__ volatile("" ::"r"(v142));
                }
                v143 = v141 * (float)(v136 / v139);
                v144 = v141 * (float)(v135 / v139);
                v145 = v141 * (float)(v138 / v139);
                v146 = 0x0.0p+0f;
                v147 = (float)((float)((float)(v260 * v143) + 0x0.0p+0f) +
                               (float)(v259 * v144)) +
                       (float)(v258 * v145);
                v148 = (float)((float)((float)(v257 * v143) + 0x0.0p+0f) +
                               (float)(v256 * v144)) +
                       (float)(v255 * v145);
                v149 = (float)((float)((float)(v254 * v143) + 0x0.0p+0f) +
                               (float)(v253 * v144)) +
                       (float)(v252 * v145);
                {
                  v150 = *(float*)(a1 + 4);
                  __asm__ volatile("" ::"w"(v150));
                }
                v151 = v147 / v150;
                v152 = v148 / v150;
                v153 = v149 / v150;
                v154 = v9 + v152;
                {
                  v155 = *(float*)(a1 + 44);
                  __asm__ volatile("" ::"w"(v155));
                }
                if (v155 <= 0x0.0p+0f) {
                  v156 = 0;
                  v157 = 0x0.0p+0f;
                }
                else {
                  v156 = 1;
                  {
                    v157 = *(float*)(a1 + 40) / v155;
                    __asm__ volatile("" ::"w"(v157));
                  }
                }
                *(_DWORD*)(a1 + 28) = 0;
                *(_QWORD*)(a1 + 12) = 0;
                *(_QWORD*)(a1 + 20) = 0;
                *(_QWORD*)(a1 + 4) = 0;
                *(_BYTE*)(a1 + 36) = 0;
                *(_QWORD*)(a1 + 40) = 0;
                *(_DWORD*)(a1 + 32) = 1065353216;
                {
                  v158 = v41[3];
                  __asm__ volatile("" ::"r"(v158));
                }
                {
                  v159 = v41[6];
                  __asm__ volatile("" ::"r"(v159));
                }
                *(_QWORD*)&v292_.v294 = v41[2];
                *((_QWORD*)&v292_.v294 + 1) = v158;
                {
                  v161 = v41[4];
                  __asm__ volatile("" ::"r"(v161));
                }
                {
                  v160 = v41[5];
                  __asm__ volatile("" ::"r"(v160));
                }
                *((float*)&v292_.v294 + 2) = v154;
                *((float*)&v292_.v294 + 3) = v10 + v153;
                *(_QWORD*)&v292_.v295[8] = v160;
                *(_QWORD*)&v292_.v295[16] = v159;
                *(_QWORD*)v292_.v295 = v161;
                {
                  v162 = *v41;
                  __asm__ volatile("" ::"r"(v162));
                }
                *(float*)&v292_.v295[8] = v127;
                v292_.v295[16] = v142;
                *(float*)v292_.v295 = v157;
                v292_.v295[4] = v156;
                v292_.v292 = v162;
                v292_.v293 = __PAIR64__(LODWORD(v263), LODWORD(v265));
                *(float*)&v292_.v294 = v261;
                *((float*)&v292_.v294 + 1) = v266 + v151;
                nerd_gyro_pointing_GyroPointingStateDetector_AddSample_plt(
                    a1 + 23832, (__int64)&v292_.v292),
                    v56 = COERCE_AS(__typeof__(v56),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
                {
                  v163 = *(float*)(a1 + 8284);
                  __asm__ volatile("" ::"w"(v163));
                }
                v164 = (float)(PSEUDO_UNFUSED(*((float*)&v292_.v293 + 1) *
                                              0x1.9000000000000p+6f)) -
                       *(float*)(a1 + 8316);
                {
                  v165 = *(float*)(a1 + 8276);
                  __asm__ volatile("" ::"w"(v165));
                }
                v166 = (float)(PSEUDO_UNFUSED(*(float*)&v292_.v294 *
                                              0x1.9000000000000p+6f)) -
                       *(float*)(a1 + 8320);
                {
                  v167 = *(float*)(a1 + 8280);
                  __asm__ volatile("" ::"w"(v167));
                }
                v168 = (float)(PSEUDO_UNFUSED(*(float*)&v292_.v293 *
                                              0x1.9000000000000p+6f)) -
                       *(float*)(a1 + 8312);
                {
                  v169 = *(float*)(a1 + 8272);
                  __asm__ volatile("" ::"w"(v169));
                }
                v170 = (float)((float)((float)(*(float*)(a1 + 8352) * v168) +
                                       0x0.0p+0f) +
                               (float)(*(float*)(a1 + 8356) * v164)) +
                       (float)(*(float*)(a1 + 8360) * v166);
                v171 = (float)((float)((float)(*(float*)(a1 + 8364) * v168) +
                                       0x0.0p+0f) +
                               (float)(*(float*)(a1 + 8368) * v164)) +
                       (float)(*(float*)(a1 + 8372) * v166);
                v172 = (float)((float)((float)(*(float*)(a1 + 8376) * v168) +
                                       0x0.0p+0f) +
                               (float)(*(float*)(a1 + 8380) * v164)) +
                       (float)(*(float*)(a1 + 8384) * v166);
                v173 = (float)((float)(PSEUDO_UNFUSED(v169 * v169)) +
                               (float)(PSEUDO_UNFUSED(v165 * v165))) +
                       (float)(PSEUDO_UNFUSED(v167 * v167));
                v174 = (float)((float)((float)(v169 * v170) + 0x0.0p+0f) +
                               (float)(v165 * v171)) +
                       (float)(v167 * v172);
                v175 = (float)(PSEUDO_UNFUSED(v169 * v174)) -
                       (float)(PSEUDO_UNFUSED(v173 * v170));
                v176 = (float)(PSEUDO_UNFUSED(v165 * v174)) -
                       (float)(PSEUDO_UNFUSED(v173 * v171));
                v177 = (float)(PSEUDO_UNFUSED(v167 * v174)) -
                       (float)(PSEUDO_UNFUSED(v173 * v172));
                v178 = 0x1.0000000000000p+1f /
                       (float)((float)(PSEUDO_UNFUSED(v163 * v163)) + v173);
                *(float*)&v267 =
                    v170 +
                    (float)(PSEUDO_UNFUSED(
                        v178 *
                        (float)((float)(PSEUDO_UNFUSED(
                                    v163 * (float)((float)(v165 * v172) -
                                                   (float)(PSEUDO_UNFUSED(
                                                       v171 * v167))))) +
                                v175)));
                *((float*)&v267 + 1) =
                    v171 +
                    (float)(PSEUDO_UNFUSED(
                        v178 *
                        (float)((float)(PSEUDO_UNFUSED(
                                    v163 * (float)((float)(v167 * v170) -
                                                   (float)(PSEUDO_UNFUSED(
                                                       v172 * v169))))) +
                                v176)));
                *(float*)&v268 =
                    (float)(v172 +
                            (float)(PSEUDO_UNFUSED(
                                v178 *
                                (float)((float)(PSEUDO_UNFUSED(
                                            v163 *
                                            (float)((float)(v169 * v171) -
                                                    (float)(PSEUDO_UNFUSED(
                                                        v170 * v165))))) +
                                        v177)))) +
                    -0x1.ea80000000000p+9f;
                nerd_gyro_pointing_GyroPointingStateDetector_AddCorrectedGlobalAcc_plt(
                    a1 + 23832, (__int64)&v267, v127),
                    v56 = COERCE_AS(__typeof__(v56),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
                v179 = v292_.v292;
                {
                  v180 = *(_DWORD*)v292_.v295;
                  __asm__ volatile("" ::"r"(v180));
                }
                {
                  v181 = v292_.v295[4];
                  __asm__ volatile("" ::"r"(v181));
                }
                v290 = v292_.v293;
                v289 = DWORDn(v292_.v294, sizeof(v292_.v294) / 4 - 1);
                v291 = v292_.v294;
                {
                  v288 = *(_QWORD*)((char*)&v292_.v294 + 4);
                  __asm__ volatile("" ::"r"(v288));
                }
                {
                  v286 = *(_QWORD*)&v292_.v295[5];
                  __asm__ volatile("" ::"r"(v286));
                }
                {
                  v287 = *(_DWORD*)&v292_.v295[13];
                  __asm__ volatile("" ::"r"(v287));
                }
                v182 =
                    nerd_gyro_pointing_GyroPointingStateDetector_GetVelVar_plt(
                        a1 + 23832),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
                v183 =
                    nerd_gyro_pointing_GyroPointingStateDetector_GetVelVarTime_plt(
                        a1 + 23832),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
                nerd_gyro_pointing_GyroPointingStateDetector_GetSensorCovariance_plt(
                    (void*)(&v267), a1 + 23832),
                    v56 = COERCE_AS(__typeof__(v56),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(float, "s2", "=w"));
                v284 = v267;
                v285 = v268;
                {
                  v282 = *(_QWORD*)((char*)&v268 + 4);
                  __asm__ volatile("" ::"r"(v282));
                }
                v283 = DWORDn(v268, sizeof(v268) / 4 - 1);
                v184 =
                    nerd_gyro_pointing_GyroPointingStateDetector_IsMoving_plt(
                        a1 + 23832),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
                {
                  v185 = *(float*)(v2 + 3876);
                  __asm__ volatile("" ::"w"(v185));
                }
                v186 = 0x0.0p+0f;
                v187 = 0x0.0p+0f;
                if (v185 != 0x0.0p+0f) {
                  {
                    v146 = *(float*)(v2 + 3864) / v185;
                    __asm__ volatile("" ::"w"(v146));
                  }
                  {
                    v187 = *(float*)(v2 + 3872) / v185;
                    __asm__ volatile("" ::"w"(v187));
                  }
                  {
                    v186 = *(float*)(v2 + 3868) / v185;
                    __asm__ volatile("" ::"w"(v186));
                  }
                }
                {
                  v188 = *(_BYTE*)(v2 + 3848);
                  __asm__ volatile("" ::"r"(v188));
                }
                v189 = a1 + 15616;
                {
                  v190 = *(_QWORD*)(a1 + 23808);
                  __asm__ volatile("" ::"r"(v190));
                }
                if (v190 == *(_QWORD*)(a1 + 23816)) {
                  *(_QWORD*)(a1 + 23808) = v190 - 1;
                }
                v191 = v290;
                {
                  v192 = v189 + (*(_QWORD*)(a1 + 23824) << 7);
                  __asm__ volatile("" ::"r"(v192));
                }
                *(_QWORD*)v192 = v179;
                *(_QWORD*)(v192 + 8) = v191;
                LODWORD(v191) = v291;
                *(_BYTE*)(v192 + 84) = v184 & 1;
                *(_DWORD*)(v192 + 32) = v180;
                *(_BYTE*)(v192 + 36) = v181;
                *(_DWORD*)(v192 + 49) = 0;
                *(_DWORD*)(v192 + 52) = 0;
                *(float*)(v192 + 56) = v127;
                *(_BYTE*)(v192 + 85) = v188;
                *(_WORD*)(v192 + 86) = 0;
                *(float*)(v192 + 88) = v182;
                *(float*)(v192 + 92) = v146;
                *(float*)(v192 + 96) = v186;
                *(float*)(v192 + 100) = v187;
                *(float*)(v192 + 104) = v183;
                *(_QWORD*)(v192 + 112) = 0;
                *(_QWORD*)(v192 + 120) = 0;
                {
                  v193 = *(_QWORD*)(a1 + 23808);
                  __asm__ volatile("" ::"r"(v193));
                }
                *(_DWORD*)(v192 + 16) = v191;
                v194 = v288;
                *(_QWORD*)(a1 + 23808) = v193 + 1;
                *(_QWORD*)(v192 + 20) = v194;
                *(_DWORD*)(v192 + 28) = v289;
                {
                  v195 = *(_QWORD*)(a1 + 23824);
                  __asm__ volatile("" ::"r"(v195));
                }
                *(_QWORD*)(v192 + 37) = v286;
                *(_DWORD*)(v192 + 45) = v287;
                *(_QWORD*)(v192 + 60) = v284;
                *(_DWORD*)(v192 + 68) = v285;
                *(_QWORD*)(v192 + 72) = v282;
                *(_DWORD*)(v192 + 80) = v283;
                if (v195 + 1 == *(_QWORD*)(a1 + 23816)) {
                  v196 = 0;
                }
                else {
                  v196 = v195 + 1;
                }
                *(_QWORD*)(a1 + 23824) = v196;
                v197 =
                    nerd_gyro_pointing_GyroPointingStateDetector_IsMoving_plt(
                        a1 + 23832),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w"));
                {
                  v198 = *(_QWORD*)(a1 + 23808);
                  __asm__ volatile("" ::"r"(v198));
                }
                {
                  v199 = *(_QWORD*)(a1 + 23816);
                  __asm__ volatile("" ::"r"(v199));
                }
                if (v198 != 0) {
                  {
                    v200 = *(_QWORD*)(a1 + 23824);
                    __asm__ volatile("" ::"r"(v200));
                  }
                  v201 = 0;
                  if (v200 >= v198) {
                    v202 = 0;
                  }
                  else {
                    v202 = *(_QWORD*)(a1 + 23816);
                    __asm__ volatile("" ::"r"(v202));
                  }
                  v203 = v200 - v198 + v202;
                  {
                    v204 = *(_QWORD*)(a1 + 23808) & 3LL;
                    __asm__ volatile("" ::"r"(v204));
                  }
                  if ((v197 & 1) != 0) {
                    if (v198 >= 4) {
                      v205 = a1 - (v198 << 7) + ((v202 + v200) << 7) + 16112;
                      v206 = a1 + (v203 << 7) + 15728;
                      do {
                        v207 = v203 + v201;
                        v201 += 4;
                        if (v207 >= v199) {
                          v208 = v199;
                        }
                        else {
                          v208 = 0;
                        }
                        v209 = (_QWORD*)(v206 - (v208 << 7));
                        v206 += 512;
                        ++*v209;
                        if (v207 + 1 >= v199) {
                          v210 = v199;
                        }
                        else {
                          v210 = 0;
                        }
                        ++*(_QWORD*)(v205 - (v210 << 7) - 256);
                        v211 = v207 + 2;
                        v212 = v207 + 3;
                        if (v211 >= v199) {
                          v213 = v199;
                        }
                        else {
                          v213 = 0;
                        }
                        v214 = v205 - (v213 << 7);
                        if (v212 >= v199) {
                          v215 = v199;
                        }
                        else {
                          v215 = 0;
                        }
                        v216 = (_QWORD*)(v205 - (v215 << 7));
                        v205 += 512;
                        ++*(_QWORD*)(v214 - 128);
                        ++*v216;
                      } while ((v198 & 0xFFFFFFFFFFFFFFFCLL) != v201);
                    }
                    if ((v198 & 3) != 0) {
                      v217 = v202 + v201 + v200 - v198;
                      v218 = a1 + (v217 << 7) + 15728;
                      do {
                        v219 = v217++ >= v199;
                        if (v219) {
                          v220 = v199;
                        }
                        else {
                          v220 = 0;
                        }
                        --v204;
                        v221 = (_QWORD*)(v218 - (v220 << 7));
                        v218 += 128;
                        ++*v221;
                      } while (v204 != 0);
                    }
                  }
                  else {
                    if (v198 >= 4) {
                      v222 = a1 - (v198 << 7) + ((v202 + v200) << 7) + 16120;
                      v223 = a1 + (v203 << 7) + 15736;
                      do {
                        v224 = v203 + v201;
                        v201 += 4;
                        if (v224 >= v199) {
                          v225 = v199;
                        }
                        else {
                          v225 = 0;
                        }
                        v226 = (_QWORD*)(v223 - (v225 << 7));
                        v223 += 512;
                        ++*v226;
                        if (v224 + 1 >= v199) {
                          v227 = v199;
                        }
                        else {
                          v227 = 0;
                        }
                        ++*(_QWORD*)(v222 - (v227 << 7) - 256);
                        v228 = v224 + 2;
                        v229 = v224 + 3;
                        if (v228 >= v199) {
                          v230 = v199;
                        }
                        else {
                          v230 = 0;
                        }
                        v231 = v222 - (v230 << 7);
                        if (v229 >= v199) {
                          v232 = v199;
                        }
                        else {
                          v232 = 0;
                        }
                        v233 = (_QWORD*)(v222 - (v232 << 7));
                        v222 += 512;
                        ++*(_QWORD*)(v231 - 128);
                        ++*v233;
                      } while ((v198 & 0xFFFFFFFFFFFFFFFCLL) != v201);
                    }
                    if ((v198 & 3) != 0) {
                      v234 = v202 + v201 + v200 - v198;
                      v235 = a1 + (v234 << 7) + 15736;
                      do {
                        v219 = v234++ >= v199;
                        if (v219) {
                          v236 = v199;
                        }
                        else {
                          v236 = 0;
                        }
                        --v204;
                        v237 = (_QWORD*)(v235 - (v236 << 7));
                        v235 += 128;
                        ++*v237;
                      } while (v204 != 0);
                    }
                  }
                }
                if (v198 == v199) {
                  {
                    v238 = *(_QWORD*)(a1 + 23824);
                    __asm__ volatile("" ::"r"(v238));
                  }
                  if (v198 <= v238) {
                    v239 = v198;
                  }
                  else {
                    v239 = 0;
                  }
                  v240 = v238 - v239;
                  if (v240 >= v198) {
                    v241 = v198;
                  }
                  else {
                    v241 = 0;
                  }
                  v242 = (__int64*)(v189 + ((v240 - v241) << 7));
                  {
                    v243 = v242[13];
                    __asm__ volatile("" ::"r"(v243));
                  }
                  {
                    v278 = v242[12];
                    __asm__ volatile("" ::"r"(v278));
                  }
                  v279 = v243;
                  {
                    v244 = v242[15];
                    __asm__ volatile("" ::"r"(v244));
                  }
                  {
                    v280 = v242[14];
                    __asm__ volatile("" ::"r"(v280));
                  }
                  v281 = v244;
                  {
                    v245 = v242[9];
                    __asm__ volatile("" ::"r"(v245));
                  }
                  {
                    v274 = v242[8];
                    __asm__ volatile("" ::"r"(v274));
                  }
                  v275 = v245;
                  {
                    v246 = v242[11];
                    __asm__ volatile("" ::"r"(v246));
                  }
                  {
                    v276 = v242[10];
                    __asm__ volatile("" ::"r"(v276));
                  }
                  v277 = v246;
                  {
                    v247 = v242[5];
                    __asm__ volatile("" ::"r"(v247));
                  }
                  {
                    v270 = v242[4];
                    __asm__ volatile("" ::"r"(v270));
                  }
                  v271 = v247;
                  {
                    v248 = v242[7];
                    __asm__ volatile("" ::"r"(v248));
                  }
                  {
                    v272 = v242[6];
                    __asm__ volatile("" ::"r"(v272));
                  }
                  v273 = v248;
                  {
                    v249 = v242[1];
                    __asm__ volatile("" ::"r"(v249));
                  }
                  {
                    v267 = *v242;
                    __asm__ volatile("" ::"r"(v267));
                  }
                  *(_QWORD*)&v268 = v249;
                  {
                    v251 = v242[2];
                    __asm__ volatile("" ::"r"(v251));
                  }
                  {
                    v250 = v242[3];
                    __asm__ volatile("" ::"r"(v250));
                  }
                  *(_QWORD*)(a1 + 23808) = v198 - 1;
                  *((_QWORD*)&v268 + 1) = v251;
                  v269 = v250;
                  BYTE4(v276) = (float)((float)v280 * 0x1.99999a0000000p-4f) >=
                                (float)v281;
                  nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate_plt(
                      a1 + 48, (__int64)&v267),
                      v56 = COERCE_AS(__typeof__(v56),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                }
              }
              return;
            }
          LABEL_22:
            {
              v74 = *a2;
              __asm__ volatile("" ::"r"(v74));
            }
            {
              v75 = a2[2];
              __asm__ volatile("" ::"r"(v75));
            }
            *(_QWORD*)(a1 + 28520) = a2[1];
            *(_QWORD*)(a1 + 28528) = v75;
            *v43 = v74;
            {
              v76 = a2[4];
              __asm__ volatile("" ::"r"(v76));
            }
            {
              v77 = a2[5];
              __asm__ volatile("" ::"r"(v77));
            }
            {
              v78 = a2[6];
              __asm__ volatile("" ::"r"(v78));
            }
            *(_QWORD*)(a1 + 28536) = a2[3];
            *(_QWORD*)(a1 + 28544) = v76;
            *(_QWORD*)(a1 + 28552) = v77;
            *(_QWORD*)(a1 + 28560) = v78;
            *(_BYTE*)(v2 + 3992) = 1;
            goto LABEL_23;
          }
        LABEL_19:
          if (v60 != 0) {
            goto LABEL_20;
          }
          goto LABEL_22;
        }
        v60 = 1;
        {
          v61 = *(unsigned __int8*)(a1 + 28632);
          __asm__ volatile("" ::"r"(v61));
        }
        if (v61 == 1) {
          goto LABEL_13;
        }
      }
      else {
        v60 = 0;
        {
          v61 = *(unsigned __int8*)(a1 + 28632);
          __asm__ volatile("" ::"r"(v61));
        }
        if (*(_BYTE*)(a1 + 28632) == 0) {
          goto LABEL_13;
        }
      }
    LABEL_17:
      if (v61 == 0) {
        {
          v71 = *(_QWORD*)(a1 + 28552);
          __asm__ volatile("" ::"r"(v71));
        }
        *(_QWORD*)(a1 + 28608) = *(_QWORD*)(a1 + 28544);
        *(_QWORD*)(a1 + 28616) = v71;
        *(_QWORD*)(a1 + 28624) = *(_QWORD*)(a1 + 28560);
        {
          v72 = *(_QWORD*)(a1 + 28520);
          __asm__ volatile("" ::"r"(v72));
        }
        *(_QWORD*)(a1 + 28576) = *v43;
        *(_QWORD*)(a1 + 28584) = v72;
        {
          v73 = *(_QWORD*)(a1 + 28536);
          __asm__ volatile("" ::"r"(v73));
        }
        *(_QWORD*)(a1 + 28592) = *(_QWORD*)(a1 + 28528);
        *(_QWORD*)(a1 + 28600) = v73;
        *(_BYTE*)(v2 + 4056) = 1;
        if (v60 != 0) {
          goto LABEL_20;
        }
        goto LABEL_22;
      }
      *(_BYTE*)(v2 + 4056) = 0;
      goto LABEL_19;
    }
  }
}

#pragma GCC visibility pop
