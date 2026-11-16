#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_702080(PSEUDO_X8, __int64, __int64*,
                                            __int64*);
__int64 SdkRoutine_879f00(__int64);
__int64 SdkRoutine_879f10();
__int64 SdkRoutine_87a3d0();
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
bool math_726b80(float*, __int64);
bool math_727520(_QWORD*, __int64, int);
float atan2f_plt(float, float);
unsigned __int64 SdkRoutine_87a1f0(unsigned __int64, __int64, __int64,
                                   unsigned __int64, __int64, __int64, __int64);
float math_7035b0(__int64 a1, __int64 a2);
__int64 math_7264c0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void math_732db0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2);

float math_7035b0(__int64 a1, __int64 a2)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  float v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
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
  __int64 v109;
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
  float v193[759];
  struct {
    float* v194;
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
    float v209;
    float v210;
    float v211;
    float v212;
    float v213;
    float v214;
    float v215;
    float v216;
    float v217;
    float v218;
    float v219;
  } v194_;
  struct {
    __int64 v220;
    __int64 v221;
    __int64 v222;
    __int64 v223;
    __int64 v224;
    __int64 v225;
    __int64 v226;
    __int64 v227;
    __int64 v228;
    __int64 v229;
    __int64 v230;
    __int64 v231;
    __int64 v232;
    __int64 v233;
    __int64 v234;
    __int64 v235;
    __int64 v236;
    __int64 v237;
    __int64 v238;
    __int64 v239;
    __int64 v240;
    __int64 v241;
    __int64 v242;
    __int64 v243;
    __int64 v244;
    __int64 v245;
    __int64 v246;
    char gap3512_[4];
    _BYTE v247[2916];
  } v220_;
  struct {
    _BYTE v248[2916];
    float v249;
    float v250;
    float v251;
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
    float v267;
    float v268;
    float v269;
    float v270;
    float v271;
    float v272;
    float v273;
    float v274;
    float v275;
  } v248_;
  __int64 v276[28];

  v4 = *(float*)(a2 + 16);
  v5 = *(float*)(a2 + 20);
  v6 = *(float*)a2 - *(float*)a1;
  v7 = *(float*)(a2 + 4) - *(float*)(a1 + 4);
  v8 = *(float*)(a1 + 8);
  v9 = *(float*)(a1 + 12);
  v10 = *(float*)(a2 + 8);
  v11 = *(float*)(a2 + 12);
  v12 = *(float*)(a1 + 24);
  v13 = *(float*)(a2 + 24);
  v14 = *(_QWORD*)(a1 + 136);
  v16 = *(_QWORD*)(a1 + 144);
  v15 = *(_QWORD*)(a1 + 152);
  v17 = *(_QWORD*)(a1 + 160);
  v18 = *(_QWORD*)(a1 + 168);
  v276[0] = *(_QWORD*)(a1 + 128);
  v276[1] = v276[0] + 1;
  v276[2] = v276[0] + 2;
  v276[3] = v14;
  v276[4] = v14 + 1;
  v19 = v10 - v8;
  v20 = *(float*)(a1 + 16);
  v21 = *(float*)(a1 + 20);
  v276[5] = v14 + 2;
  v276[6] = v16;
  v276[7] = v16 + 1;
  v276[8] = v16 + 2;
  v276[9] = v15;
  v276[10] = v15 + 1;
  v276[11] = v15 + 2;
  v276[12] = v15 + 3;
  v276[13] = v15 + 4;
  v276[14] = v15 + 5;
  v276[15] = v15 + 6;
  v276[16] = v15 + 7;
  v276[17] = v15 + 8;
  v276[18] = v17;
  v276[19] = v17 + 1;
  v276[20] = v17 + 2;
  v276[21] = v18;
  v276[22] = v18 + 1;
  v276[23] = v18 + 2;
  v276[24] = v18 + 3;
  v276[25] = v18 + 4;
  v276[26] = v18 + 5;
  v22 = -(float)((float)((float)((float)(0x0.0p+0f - (float)(v11 * v9)) -
                                 (float)(v4 * v20)) -
                         (float)(v5 * v21)) -
                 (float)(v13 * v12));
  v23 = (float)((float)(PSEUDO_UNFUSED(v12 * v11)) -
                (float)(PSEUDO_UNFUSED(v9 * v13))) +
        (float)((float)(PSEUDO_UNFUSED(v20 * v5)) - (float)(v4 * v21));
  v24 = (float)((float)(PSEUDO_UNFUSED(v12 * v4)) -
                (float)(PSEUDO_UNFUSED(v20 * v13))) +
        (float)((float)(PSEUDO_UNFUSED(v21 * v11)) - (float)(v5 * v9));
  v25 = (float)((float)(PSEUDO_UNFUSED(v9 * v4)) - (float)(v11 * v20)) +
        (float)((float)(PSEUDO_UNFUSED(v12 * v5)) -
                (float)(PSEUDO_UNFUSED(v21 * v13)));
  if (v22 < 0x0.0p+0f) {
    v23 = -v23;
    v24 = -v24;
    v25 = -v25;
    v22 = -v22;
  }
  v26 = sqrtf((float)((float)(PSEUDO_UNFUSED(v25 * v25)) +
                      (float)((float)(PSEUDO_UNFUSED(v24 * v24)) +
                              (float)(PSEUDO_UNFUSED(v23 * v23)))) +
              0x1.0000000000000p-126f);
  v27 = atan2f_plt(v26, v22);
  v28 = *(float*)(a2 + 28);
  v29 = *(float*)(a2 + 32);
  v31 = *(float*)(a1 + 28);
  v30 = *(float*)(a1 + 32);
  v33 = *(float*)(a1 + 36);
  v32 = *(float*)(a1 + 40);
  v35 = *(float*)(a1 + 44);
  v34 = *(float*)(a1 + 48);
  v37 = *(float*)(a2 + 36);
  v36 = *(float*)(a2 + 40);
  v248_.v251 = v19;
  v39 = *(float*)(a2 + 44);
  v38 = *(float*)(a2 + 48);
  v40 = v27 + v27;
  v41 = *(float*)(a1 + 56);
  v42 = *(float*)(a1 + 60);
  v43 = *(float*)(a2 + 56);
  v44 = *(float*)(a2 + 60);
  v45 = *(float*)(a2 + 72);
  v46 = *(float*)(a2 + 76);
  v47 = *(float*)(a1 + 72);
  v48 = *(float*)(a1 + 76);
  v248_.v249 = v6;
  v248_.v250 = v7;
  v50 = *(float*)(a2 + 80);
  v49 = *(float*)(a2 + 84);
  v194_.v194 = &v248_.v249;
  v51 = v28 - v31;
  v53 = *(float*)(a1 + 88);
  v52 = *(float*)(a1 + 92);
  v54 = v36 - v32;
  v55 = v39 - v35;
  v56 = *(float*)(a2 + 88);
  v57 = *(float*)(a2 + 92);
  v58 = v29 - v30;
  v59 = v37 - v33;
  v60 = *(float*)(a1 + 96);
  v61 = *(float*)(a1 + 100);
  v248_.v255 = v51;
  v248_.v256 = v58;
  v248_.v257 = v59;
  v248_.v258 = v54;
  v248_.v260 = v38 - v34;
  v62 = *(float*)(a1 + 104);
  v63 = *(float*)(a1 + 108);
  v64 = *(float*)(a2 + 104);
  v65 = *(float*)(a2 + 108);
  v248_.v259 = v55;
  v248_.v261 = v43 - v41;
  v248_.v262 = v44 - v42;
  v248_.v263 = v45 - v47;
  v248_.v264 = v46 - v48;
  v248_.v252 = v40 * (float)(v23 / v26);
  v67 = *(float*)(a1 + 80);
  v66 = *(float*)(a1 + 84);
  v68 = v64 - v62;
  v69 = v65 - v63;
  v70 = *(float*)(a1 + 112);
  v71 = *(float*)(a1 + 116);
  v248_.v267 = v56 - v53;
  v248_.v268 = v57 - v52;
  v248_.v254 = v40 * (float)(v25 / v26);
  v248_.v253 = v40 * (float)(v24 / v26);
  v72 = *(float*)(a2 + 96);
  v73 = *(float*)(a2 + 100);
  v248_.v271 = v68;
  v248_.v272 = v69;
  v74 = v72 - v60;
  v75 = *(float*)(a2 + 112);
  v76 = *(float*)(a2 + 116);
  v248_.v265 = v50 - v67;
  v248_.v266 = v49 - v66;
  v248_.v269 = v74;
  v77 = *(float*)(a2 + 120);
  v248_.v270 = v73 - v61;
  v78 = v75 - v70;
  v79 = *(float*)(a1 + 120);
  v248_.v273 = v78;
  v248_.v274 = v76 - v71;
  v248_.v275 = v77 - v79;
  math_702080((void*)((__int64)v220_.v247), a1 + 176, v276, v276);
  SdkRoutine_879f00((__int64)v220_.v247);
  memcpy_plt((__int64)v248_.v248, (__int64)v220_.v247, 0xB64u);
  SdkRoutine_879f10();
  v80 = *(float*)(a1 + 12);
  v81 = *(float*)(a2 + 20);
  v82 = *(float*)(a2 + 24);
  v188 = *((float*)&v220_.v220 + 1);
  v189 = *(float*)&v220_.v220;
  v84 = *(float*)(a1 + 20);
  v83 = *(float*)(a1 + 24);
  v179 = *(float*)(a1 + 8);
  v85 = *(float*)(a1 + 16);
  v86 = *(_QWORD*)(a2 + 136);
  v87 = *(_QWORD*)(a2 + 144);
  v88 = *(_QWORD*)(a2 + 152);
  v89 = *(_QWORD*)(a2 + 160);
  v90 = *(_QWORD*)(a2 + 168);
  v91 = *(float*)(a2 + 8);
  v92 = (float)(PSEUDO_UNFUSED(v82 * v84)) - (float)(PSEUDO_UNFUSED(v81 * v83));
  v186 = *((float*)&v220_.v221 + 1);
  v187 = *(float*)&v220_.v221;
  v93 = *(float*)a1;
  v94 = *(float*)(a1 + 4);
  v220_.v220 = *(_QWORD*)(a2 + 128);
  v220_.v221 = v220_.v220 + 1;
  v220_.v234 = v88 + 5;
  v220_.v235 = v88 + 6;
  v220_.v236 = v88 + 7;
  v220_.v237 = v88 + 8;
  v220_.v238 = v89;
  v220_.v239 = v89 + 1;
  v220_.v240 = v89 + 2;
  v220_.v241 = v90;
  v220_.v242 = v90 + 1;
  v220_.v243 = v90 + 2;
  v220_.v244 = v90 + 3;
  v220_.v245 = v90 + 4;
  v220_.v246 = v90 + 5;
  v184 = *((float*)&v220_.v222 + 1);
  v185 = *(float*)&v220_.v222;
  v95 = v220_.v223;
  v220_.v222 = v220_.v220 + 2;
  v220_.v223 = v86;
  v182 = *((float*)&v220_.v224 + 1);
  v183 = *(float*)&v220_.v224;
  v96 = v220_.v225;
  v220_.v224 = v86 + 1;
  v220_.v225 = v86 + 2;
  v180 = *((float*)&v220_.v226 + 1);
  v181 = *(float*)&v220_.v226;
  v97 = v220_.v227;
  v220_.v226 = v87;
  v220_.v227 = v87 + 1;
  v98 = *(float*)(a2 + 12);
  v99 = *(float*)(a2 + 16);
  v100 = (float)(0x0.0p+0f - (float)(v80 * v98)) - (float)(v85 * v99);
  v101 =
      (float)(PSEUDO_UNFUSED(v82 * v80)) - (float)(PSEUDO_UNFUSED(v98 * v83));
  v102 = v99 * v84;
  v103 =
      (float)(PSEUDO_UNFUSED(v82 * v85)) - (float)(PSEUDO_UNFUSED(v99 * v83));
  v104 = v81 * v80;
  v105 = (float)(PSEUDO_UNFUSED(v98 * v85)) - (float)(v80 * v99);
  v106 = v102 - (float)(v85 * v81);
  v107 = v100 - (float)(v84 * v81);
  v108 = v104 - (float)(v84 * v98);
  v109 = v220_.v228;
  v110 = *(float*)&v220_.v230;
  v111 = *((float*)&v220_.v229 + 1);
  v178 = *(float*)&v220_.v229;
  v220_.v228 = v87 + 2;
  v220_.v229 = v88;
  v175 = *((float*)&v220_.v231 + 1);
  v176 = *(float*)&v220_.v231;
  v177 = v111;
  v112 = *((float*)&v220_.v230 + 1);
  v220_.v230 = v88 + 1;
  v220_.v231 = v88 + 2;
  v190 = v101 + v106;
  v191 = v103 + v108;
  v173 = *((float*)&v220_.v232 + 1);
  v174 = *(float*)&v220_.v232;
  v113 = -(float)(v107 - (float)(v83 * v82));
  v192 = v105 + v92;
  v114 = *(float*)&v220_.v233;
  v220_.v232 = v88 + 3;
  v220_.v233 = v88 + 4;
  v115 = *(float*)a2;
  if (v113 < 0x0.0p+0f) {
    v113 = -v113;
    v190 = -v190;
    v191 = -v191;
    v192 = -v192;
  }
  v172 = v94 - *(float*)(a2 + 4);
  v116 = (float)((
                     float)((
                                float)((
                                           float)((
                                                      float)((
                                                                 float)((
                                                                            float)((
                                                                                       float)((
                                                                                                  float)((
                                                                                                             float)((
                                                                                                                        float)((
                                                                                                                                   float)((
                                                                                                                                              float)((
                                                                                                                                                         float)((
                                                                                                                                                                    float)((
                                                                                                                                                                               float)((float)((float)((float)((float)((float)((float)((
                                                                                                                                                                                                                                          float)((
                                                                                                                                                                                                                                                     float)((
                                                                                                                                                                                                                                                                float)((float)((float)(v189 *
                                                                                                                                                                                                                                                                                       v248_
                                                                                                                                                                                                                                                                                           .v249) +
                                                                                                                                                                                                                                                                               0x0.0p+0f) +
                                                                                                                                                                                                                                                                       (float)(v188 *
                                                                                                                                                                                                                                                                               v248_
                                                                                                                                                                                                                                                                                   .v250)) +
                                                                                                                                                                                                                                                            (float)(v187 *
                                                                                                                                                                                                                                                                    v248_
                                                                                                                                                                                                                                                                        .v251)) +
                                                                                                                                                                                                                                                 (float)(v186 *
                                                                                                                                                                                                                                                         v248_
                                                                                                                                                                                                                                                             .v252)) +
                                                                                                                                                                                                                                      (float)(v185 *
                                                                                                                                                                                                                                              v248_
                                                                                                                                                                                                                                                  .v253)) +
                                                                                                                                                                                                                              (float)(v184 *
                                                                                                                                                                                                                                      v248_
                                                                                                                                                                                                                                          .v254)) +
                                                                                                                                                                                                                      (float)(*(float*)&v95 *
                                                                                                                                                                                                                              v248_
                                                                                                                                                                                                                                  .v255)) +
                                                                                                                                                                                                              (float)(*((float*)&v95 +
                                                                                                                                                                                                                        1) *
                                                                                                                                                                                                                      v248_
                                                                                                                                                                                                                          .v256)) +
                                                                                                                                                                                                      (float)(v183 *
                                                                                                                                                                                                              v248_
                                                                                                                                                                                                                  .v257)) +
                                                                                                                                                                                              (float)(v182 *
                                                                                                                                                                                                      v248_
                                                                                                                                                                                                          .v258)) +
                                                                                                                                                                                      (float)(*(float*)&v96 *
                                                                                                                                                                                              v248_
                                                                                                                                                                                                  .v259)) +
                                                                                                                                                                           (float)(*((float*)&v96 + 1) * v248_
                                                                                                                                                                                                             .v260)) +
                                                                                                                                                                (float)(v181 *
                                                                                                                                                                        v248_
                                                                                                                                                                            .v261)) +
                                                                                                                                                     (float)(v180 *
                                                                                                                                                             v248_
                                                                                                                                                                 .v262)) +
                                                                                                                                          (float)(*(float*)&v97 *
                                                                                                                                                  v248_
                                                                                                                                                      .v263)) +
                                                                                                                               (float)(*((float*)&v97 +
                                                                                                                                         1) *
                                                                                                                                       v248_
                                                                                                                                           .v264)) +
                                                                                                                    (float)(*(float*)&v109 *
                                                                                                                            v248_
                                                                                                                                .v265)) +
                                                                                                         (float)(*((float*)&v109 +
                                                                                                                   1) *
                                                                                                                 v248_
                                                                                                                     .v266)) +
                                                                                              (float)(v178 *
                                                                                                      v248_
                                                                                                          .v267)) +
                                                                                   (float)(v177 *
                                                                                           v248_
                                                                                               .v268)) +
                                                                        (float)(v110 *
                                                                                v248_
                                                                                    .v269)) +
                                                             (float)(v112 *
                                                                     v248_
                                                                         .v270)) +
                                                  (float)(v176 * v248_.v271)) +
                                       (float)(v175 * v248_.v272)) +
                            (float)(v174 * v248_.v273)) +
                 (float)(v173 * v248_.v274)) +
         (float)(v114 * v248_.v275);
  v117 = sqrtf((float)((float)(PSEUDO_UNFUSED(v192 * v192)) +
                       (float)((float)(PSEUDO_UNFUSED(v191 * v191)) +
                               (float)(PSEUDO_UNFUSED(v190 * v190)))) +
               0x1.0000000000000p-126f);
  v118 = atan2f_plt(v117, v113);
  v119 = *(float*)(a1 + 28);
  v120 = *(float*)(a1 + 32);
  v122 = *(float*)(a2 + 28);
  v121 = *(float*)(a2 + 32);
  v124 = *(float*)(a2 + 36);
  v123 = *(float*)(a2 + 40);
  v126 = *(float*)(a2 + 44);
  v125 = *(float*)(a2 + 48);
  v128 = *(float*)(a1 + 36);
  v127 = *(float*)(a1 + 40);
  v130 = *(float*)(a1 + 44);
  v129 = *(float*)(a1 + 48);
  v131 = v118 + v118;
  v132 = *(float*)(a2 + 56);
  v133 = *(float*)(a2 + 60);
  v134 = *(float*)(a1 + 56);
  v135 = *(float*)(a1 + 60);
  v136 = *(float*)(a1 + 72);
  v137 = *(float*)(a1 + 76);
  v138 = *(float*)(a2 + 72);
  v139 = *(float*)(a2 + 76);
  *(_QWORD*)&v193[729] = &v194_.v194;
  *((float*)&v194_.v194 + 1) = v172;
  v140 = v127 - v123;
  v141 = v130 - v126;
  v142 = v120 - v121;
  v143 = *(float*)(a1 + 88);
  v144 = *(float*)(a1 + 92);
  v145 = v128 - v124;
  v146 = *(float*)(a2 + 96);
  v147 = *(float*)(a2 + 100);
  v149 = *(float*)(a1 + 80);
  v148 = *(float*)(a1 + 84);
  v194_.v195 = v179 - v91;
  *(float*)&v194_.v194 = v93 - v115;
  v194_.v199 = v119 - v122;
  v194_.v200 = v142;
  v194_.v201 = v145;
  v194_.v202 = v140;
  v194_.v204 = v129 - v125;
  v150 = *(float*)(a2 + 104);
  v151 = *(float*)(a2 + 108);
  v153 = *(float*)(a2 + 88);
  v152 = *(float*)(a2 + 92);
  v154 = *(float*)(a1 + 104);
  v155 = *(float*)(a1 + 108);
  v194_.v203 = v141;
  v194_.v205 = v134 - v132;
  v194_.v206 = v135 - v133;
  v194_.v207 = v136 - v138;
  v194_.v208 = v137 - v139;
  v194_.v196 = v131 * (float)(v190 / v117);
  v156 = v154 - v150;
  v157 = v155 - v151;
  v158 = *(float*)(a2 + 112);
  v159 = *(float*)(a2 + 116);
  v161 = *(float*)(a2 + 80);
  v160 = *(float*)(a2 + 84);
  v194_.v211 = v143 - v153;
  v194_.v212 = v144 - v152;
  v162 = v131 * (float)(v191 / v117);
  v194_.v215 = v156;
  v194_.v216 = v157;
  v194_.v198 = v131 * (float)(v192 / v117);
  v163 = *(float*)(a1 + 96);
  v164 = *(float*)(a1 + 100);
  v194_.v197 = v162;
  v194_.v209 = v149 - v161;
  v194_.v210 = v148 - v160;
  v165 = v163 - v146;
  v166 = *(float*)(a1 + 112);
  v167 = *(float*)(a1 + 116);
  v194_.v213 = v165;
  v168 = *(float*)(a1 + 120);
  v194_.v214 = v164 - v147;
  v169 = v166 - v158;
  v170 = *(float*)(a2 + 120);
  v194_.v217 = v169;
  v194_.v218 = v167 - v159;
  v194_.v219 = v168 - v170;
  math_702080((void*)((__int64)v193), a2 + 176, &v220_.v220, &v220_.v220);
  SdkRoutine_879f00((__int64)v193);
  memcpy_plt((__int64)v248_.v248, (__int64)v193, 0xB64u);
  SdkRoutine_879f10();
  return (
             float)(v116 +
                    (float)((
                                float)((
                                           float)((float)((float)((float)((float)((
                                                                                      float)((
                                                                                                 float)((
                                                                                                            float)((
                                                                                                                       float)((
                                                                                                                                  float)((
                                                                                                                                             float)((
                                                                                                                                                        float)((
                                                                                                                                                                   float)((
                                                                                                                                                                              float)((
                                                                                                                                                                                         float)((float)((float)((float)((float)((float)((
                                                                                                                                                                                                                                            float)((
                                                                                                                                                                                                                                                       float)((
                                                                                                                                                                                                                                                                  float)((
                                                                                                                                                                                                                                                                             float)((float)((float)(v193[732] * *(float*)&v194_
                                                                                                                                                                                                                                                                                                                     .v194) +
                                                                                                                                                                                                                                                                                            0x0.0p+0f) +
                                                                                                                                                                                                                                                                                    (float)(v193[733] * *(
                                                                                                                                                                                                                                                                                                            (float*)&v194_
                                                                                                                                                                                                                                                                                                                .v194 +
                                                                                                                                                                                                                                                                                                            1))) +
                                                                                                                                                                                                                                                                         (float)(v193[734] *
                                                                                                                                                                                                                                                                                 v194_
                                                                                                                                                                                                                                                                                     .v195)) +
                                                                                                                                                                                                                                                              (float)(v193[735] * v194_
                                                                                                                                                                                                                                                                                      .v196)) +
                                                                                                                                                                                                                                                   (float)(v193[736] *
                                                                                                                                                                                                                                                           v194_
                                                                                                                                                                                                                                                               .v197)) +
                                                                                                                                                                                                                                        (float)(v193[737] * v194_
                                                                                                                                                                                                                                                                .v198)) +
                                                                                                                                                                                                                                (float)(v193[738] * v194_
                                                                                                                                                                                                                                                        .v199)) +
                                                                                                                                                                                                                        (float)(v193[739] *
                                                                                                                                                                                                                                v194_
                                                                                                                                                                                                                                    .v200)) +
                                                                                                                                                                                                                (float)(v193[740] *
                                                                                                                                                                                                                        v194_
                                                                                                                                                                                                                            .v201)) +
                                                                                                                                                                                                        (float)(v193[741] *
                                                                                                                                                                                                                v194_
                                                                                                                                                                                                                    .v202)) +
                                                                                                                                                                                                (float)(v193[742] *
                                                                                                                                                                                                        v194_
                                                                                                                                                                                                            .v203)) +
                                                                                                                                                                                     (float)(v193[743] *
                                                                                                                                                                                             v194_
                                                                                                                                                                                                 .v204)) +
                                                                                                                                                                          (float)(v193[744] *
                                                                                                                                                                                  v194_
                                                                                                                                                                                      .v205)) +
                                                                                                                                                               (float)(v193[745] *
                                                                                                                                                                       v194_
                                                                                                                                                                           .v206)) +
                                                                                                                                                    (float)(v193[746] *
                                                                                                                                                            v194_
                                                                                                                                                                .v207)) +
                                                                                                                                         (float)(v193[747] *
                                                                                                                                                 v194_
                                                                                                                                                     .v208)) +
                                                                                                                              (float)(v193[748] *
                                                                                                                                      v194_
                                                                                                                                          .v209)) +
                                                                                                                   (float)(v193[749] *
                                                                                                                           v194_
                                                                                                                               .v210)) +
                                                                                                        (float)(v193[750] *
                                                                                                                v194_
                                                                                                                    .v211)) +
                                                                                             (float)(v193[751] *
                                                                                                     v194_
                                                                                                         .v212)) +
                                                                                  (float)(v193[752] *
                                                                                          v194_
                                                                                              .v213)) +
                                                                          (float)(v193[753] *
                                                                                  v194_
                                                                                      .v214)) +
                                                                  (float)(v193[754] *
                                                                          v194_
                                                                              .v215)) +
                                                          (float)(v193[755] *
                                                                  v194_.v216)) +
                                                  (float)(v193[756] *
                                                          v194_.v217)) +
                                       (float)(v193[757] * v194_.v218)) +
                            (float)(v193[758] * v194_.v219))) *
         0x1.0000000000000p-1f;
}

__int64 math_7264c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  __int64 v11;
  float v12;
  bool v13;
  __int64 v14;
  float v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float* v21;
  __int64* v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  _DWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  float v34;

  if (a2 == 0) {
    return 1;
  }
  v2 = a1 + 32;
  v3 = a1 + 576;
  v4 = (__int64*)(a1 + 360);
  v7 = 0;
  v8 = a1 + 304;
  v9 = a1 + 5144;
  v10 = (float*)(a1 + 5172);
  do {
    v11 = *(_QWORD*)(v2 + 8 * v7);
    if (v11 != -1) {
      v12 = *(float*)(v9 + 4 * v11);
      if (*(_BYTE*)(v3 + v11) != 0) {
        v13 = v12 <= 0x0.0p+0f;
      }
      else {
        v13 = v12 >= 0x0.0p+0f;
      }
      if (v13) {
        goto LABEL_5;
      }
      if (!math_726b80((float*)a1, v11) || (math_7264c0(a1, v7) & 1) == 0) {
        return 0;
      }
    }
    v14 = *(_QWORD*)(a1 + 568);
    v15 = 0x0.0p+0f;
    if (v14 != 0 & *(_QWORD*)(a1 + 5280) != 0) {
      v17 = *(_QWORD*)a1 + 132 * v7 + 16;
      if ((unsigned __int64)(v14 - 1) >= 7) {
        v20 = 0;
        v21 = v10;
        v22 = v4;
        do {
          v20 -= 8;
          v23 =
              (float)((float)((float)((float)(v15 +
                                              (float)(*(float*)(v17 +
                                                                4 * *(v22 -
                                                                      7)) *
                                                      *(v21 - 7))) +
                                      (float)(*(float*)(v17 + 4 * *(v22 - 6)) *
                                              *(v21 - 6))) +
                              (float)(*(float*)(v17 + 4 * *(v22 - 5)) *
                                      *(v21 - 5))) +
                      (float)(*(float*)(v17 + 4 * *(v22 - 4)) * *(v21 - 4))) +
              (float)(*(float*)(v17 + 4 * *(v22 - 3)) * *(v21 - 3));
          v24 = *(float*)(v17 + 4 * *(v22 - 2));
          v25 = *(v22 - 1);
          v26 = *v22;
          v22 += 8;
          v27 = v23 + (float)(v24 * *(v21 - 2));
          v28 = *(v21 - 1);
          v29 = *v21;
          v21 += 8;
          v15 = (float)(v27 + (float)(*(float*)(v17 + 4 * v25) * v28)) +
                (float)(*(float*)(v17 + 4 * v26) * v29);
        } while (-(__int64)(v14 & 0xFFFFFFFFFFFFFFF8LL) != v20);
        v18 = -v20;
        v19 = *(_QWORD*)(a1 + 568) & 7LL;
        if (v19 == 0) {
          goto LABEL_25;
        }
      LABEL_23:
        v30 = (_DWORD*)(v9 + 4 * v18);
        v31 = (__int64*)(v8 + 8 * v18);
        do {
          v33 = *v31++;
          v32 = v33;
          LODWORD(v33) = *(_DWORD*)v30++;
          --v19;
          v15 = v15 + (float)(*(float*)(v17 + 4 * v32) * *(float*)&v33);
        } while (v19 != 0);
        goto LABEL_25;
      }
      v18 = 0;
      v19 = *(_QWORD*)(a1 + 568) & 7LL;
      if (v19 != 0) {
        goto LABEL_23;
      }
    }
  LABEL_25:
    v34 = *(float*)(*(_QWORD*)(a1 + 8) + 4 * v7) + v15;
    if (v34 < *(float*)(*(_QWORD*)(a1 + 16) + 4 * v7)) {
      if (!math_727520((_QWORD*)a1, v7, 0)) {
        return 0;
      }
    }
    else {
      if (v34 <= *(float*)(*(_QWORD*)(a1 + 24) + 4 * v7)) {
        goto LABEL_5;
      }
      if (!math_727520((_QWORD*)a1, v7, 1)) {
        return 0;
      }
    }
    if ((math_7264c0(a1, v7) & 1) == 0) {
      return 0;
    }
  LABEL_5:
    ++v7;
  } while (v7 != a2);
  return 1;
}

__attribute__((swiftcall)) void math_732db0(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _DWORD v14[20];
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v25;
  struct {
    _BYTE v26[1764];
    _DWORD v27[441];
  } v26_;

  memset_plt((__int64)v26_.v27, 0, 0x6E4u);
  memcpy_plt((__int64)v26_.v26, a1, 0x6E4u);
  SdkRoutine_87a3d0();
  v15 = __PAIR64__(v26_.v27[22], v26_.v27[0]);
  v17 = __PAIR64__(v26_.v27[110], v26_.v27[88]);
  v18 = __PAIR64__(v26_.v27[154], v26_.v27[132]);
  v20 = __PAIR64__(v26_.v27[242], v26_.v27[220]);
  v19 = __PAIR64__(v26_.v27[198], v26_.v27[176]);
  v21 = __PAIR64__(v26_.v27[286], v26_.v27[264]);
  v22 = __PAIR64__(v26_.v27[330], v26_.v27[308]);
  v23 = __PAIR64__(v26_.v27[374], v26_.v27[352]);
  v14[0] = v26_.v27[21];
  v14[1] = v26_.v27[43];
  v16 = __PAIR64__(v26_.v27[66], v26_.v27[44]);
  v25 = v26_.v27[440];
  v14[6] = v26_.v27[153];
  v14[7] = v26_.v27[175];
  v14[8] = v26_.v27[197];
  v14[9] = v26_.v27[219];
  v14[16] = v26_.v27[373];
  v14[17] = v26_.v27[395];
  v24 = __PAIR64__(v26_.v27[418], v26_.v27[396]);
  v14[4] = v26_.v27[109];
  v14[5] = v26_.v27[131];
  v14[14] = v26_.v27[329];
  v14[15] = v26_.v27[351];
  v14[2] = v26_.v27[65];
  v14[3] = v26_.v27[87];
  v14[12] = v26_.v27[285];
  v14[13] = v26_.v27[307];
  v14[10] = v26_.v27[241];
  v14[11] = v26_.v27[263];
  v14[18] = v26_.v27[417];
  v14[19] = v26_.v27[439];
  result = SdkRoutine_87a1f0(0x15u, (__int64)&v15, (__int64)v14, 1u, 21, 1, a2);
  v7 = v24;
  v8 = v25;
  *(_QWORD*)(a3 + 64) = v23;
  *(_QWORD*)(a3 + 72) = v7;
  v9 = v19;
  v10 = v20;
  *(_DWORD*)(a3 + 80) = v8;
  *(_QWORD*)(a3 + 32) = v9;
  *(_QWORD*)(a3 + 40) = v10;
  v11 = v22;
  *(_QWORD*)(a3 + 48) = v21;
  *(_QWORD*)(a3 + 56) = v11;
  v12 = v16;
  *(_QWORD*)a3 = v15;
  *(_QWORD*)(a3 + 8) = v12;
  v13 = v18;
  *(_QWORD*)(a3 + 16) = v17;
  *(_QWORD*)(a3 + 24) = v13;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
