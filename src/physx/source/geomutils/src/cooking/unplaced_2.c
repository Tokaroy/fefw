#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0cd30(_QWORD);
__int64 PxGetBroadcastAllocator(_QWORD);
__int64 physx_Gu_EdgeList_Destroy_EdgeList(_QWORD);
__n128 GameRoutine_362560(__int64, int, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_2135e78;
extern __int64 (*GameData_1f88468)();
extern __int64 (*physx_TriangleMeshBuilder_Destroy_TriangleMeshBuilder_ptr)();
void GameRoutine_3f2da0();
__int64 physx_source_geomutils_src_cooking_54c110(__int64 a1);
__int64 physx_source_geomutils_src_cooking_554500(__int64 a1, __int64 a2,
                                                  unsigned int a3);
int GameRoutine_1a0cd30_alt1(int);
void GameRoutine_362560_alt1(__int64, int, __int64, __int64, unsigned int);

__int64 physx_source_geomutils_src_cooking_54c110(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = (char*)GameData_2135e78 + 16;
  *(_QWORD*)(a1 + 32) = &GameData_1f88468;
  v2 = a1 + 32;
  if ((*(_BYTE*)(a1 + 436) & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 440);
    if (v3 != 0) {
      v4 = v2;
      v5 = v3 - *(_QWORD*)(v3 - 8);
      v6 = PxGetBroadcastAllocator(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v5);
      v2 = v4;
      *(_QWORD*)(a1 + 440) = 0;
    }
  }
  result = ((__int64 (*)(__int64))GameRoutine_3f2da0)(v2);
  v8 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = &physx_TriangleMeshBuilder_Destroy_TriangleMeshBuilder_ptr;
  if (v8 != 0) {
    physx_Gu_EdgeList_Destroy_EdgeList(v8);
    v9 = PxGetBroadcastAllocator(0);
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v8);
    *(_QWORD*)(a1 + 8) = 0;
  }
  return result;
}

__int64 physx_source_geomutils_src_cooking_554500(__int64 a1, __int64 a2,
                                                  unsigned int a3)
{

#pragma clang fp contract(on)

  signed int v3;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  float v21;
  __int64 v22;
  unsigned int* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 i;
  unsigned int* v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  unsigned int* v39;
  __int64 k;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  _DWORD* v44;
  unsigned int* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 j;
  __int64 v50;
  float32x4_t* v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _DWORD* v58;
  __int64 v59;
  unsigned int* v60;
  float32x4_t* v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  int8x8_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t* v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  int8x8_t v72;
  float32x4_t v73;
  float32x4_t* v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  int8x8_t v78;
  float32x4_t v79;
  __int64 v80;
  float32x4_t* v81;
  int8x16_t v82;
  int8x8_t v83;
  float32x4_t v84;
  _DWORD* v85;
  unsigned int* v86;
  __int64 v87;
  unsigned int v88;
  float32x4_t* v89;
  int8x16_t v90;
  int8x8_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t* v94;
  float32x4_t v95;
  float32x4_t v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  float32x4_t* v100;
  unsigned int* v101;
  float32x4_t* v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t* v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t* v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t* v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t* v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t* v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  __int64 v125;
  float32x4_t* v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  _DWORD* v134;
  unsigned int* v135;
  float32x4_t* v136;
  float32x4_t v137;
  float32x4_t v138;
  int8x16_t v139;
  int8x8_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t* v143;
  float32x4_t v144;
  float32x4_t v145;
  int8x16_t v146;
  int8x8_t v147;
  float32x4_t v148;
  float32x4_t* v149;
  float32x4_t v150;
  float32x4_t v151;
  int8x16_t v152;
  int8x8_t v153;
  float32x4_t v154;
  __int64 v155;
  float32x4_t* v156;
  int8x16_t v157;
  int8x8_t v158;
  float32x4_t v159;
  _DWORD* v160;
  __int64 v161;
  unsigned int* v162;
  unsigned int v163;
  float32x4_t* v164;
  int8x16_t v165;
  int8x8_t v166;
  float32x4_t v167;
  float32x4_t v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  int v172;
  int v173;
  int v174;
  int v175;
  float v176;
  int v177;
  unsigned int v178;
  float v179;
  int v180;
  float v181;
  int v182;
  float v183;
  int v184;
  float v185;
  int v186;
  __int64* v188;
  char* v189;
  __int64* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  _DWORD* v198;
  __int64 v199;
  _DWORD* v200;
  int v201;
  _DWORD* v202;
  int* v203;
  int v204;
  _DWORD* v205;
  __int64 v206;
  unsigned int* v207;
  __int64 v208;
  _DWORD* v209;
  unsigned int* v210;
  unsigned int v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned int* v215;
  __int64 v216;
  _DWORD* v217;
  __int64 v218;
  unsigned int* v219;
  _DWORD* v220;
  unsigned int v221;
  struct {
    char gap0_[64];
    __int64 v223;
    char gap72_[12];
    int v224;
    char gap88_[8];
    unsigned __int64 v226;
    __int64 v227;
    __int64 v228;
    __int64 v229;
    __int64 v230;
    __int64 v231;
    __int64 v232;
    int v233;
    unsigned int v234;
    int v235;
    char gap164_[4];
    __int64 v236;
    char gap176_[8];
    __int64 v238;
    __int64 v239;
    unsigned __int64 v240;
    __int64 v241;
    char gap216_[4];
    unsigned int v242;
    int v243;
    int v244;
    int v245;
    int v246;
    int v247;
    int v248;
    int v249;
    int v250;
    char gap256_[8];
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    __int64 v255;
    __int64 v256;
    char gap312_[4];
    _BYTE v257[4];
    __int64 v258;
    union {
      _DWORD v259[2];
      struct {
        char pad332_v260_[4];
        float v260;
      };
    };
    float v261;
    char gap340_[2];
    char v262;
    _BYTE v263[9];
  } f_;

  v3 = a3 - 2;
  if (a3 < 2) {
    return 0;
  }
  result = 1;
  if (a3 != 2) {
    v6 = a3;
    v7 = *(_QWORD*)(a1 + 72);
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v10 = 0;
    f_.v234 = a3 - 1;
    v12 = *(_QWORD*)(a1 + 56);
    v11 = *(_QWORD*)(a1 + 64);
    if (a3 <= 3) {
      v13 = 1;
    }
    else {
      v13 = 2;
    }
    f_.v239 = v3;
    f_.v242 = a3 >> 1;
    v14 = (int)(a3 - v13);
    f_.v224 = a3 - 2 * v13;
    v15 = (unsigned int)(f_.v224 + 1);
    f_.v256 = *(_QWORD*)(a1 + 80);
    v16 = (unsigned int)v15 & 0xFFFFFFFC;
    f_.v227 = ((_BYTE)v13 - 2) & 7;
    f_.v254 = v11;
    f_.v255 = v7;
    v17 = -v16;
    f_.v233 = a3 - v13 - v13;
    f_.v226 = v14 - v3;
    v18 = a3 & 7;
    v19 = -(__int64)(a3 & 0xFFFFFFF8);
    f_.v240 = v15 - 1;
    f_.v251 = v8;
    f_.v252 = v9;
    f_.v253 = v12;
    f_.v238 = a3 - (unsigned int)v13;
    f_.v231 = v18;
    f_.v232 = v14;
    f_.v229 = v19;
    f_.v230 = v16;
    f_.v228 = v17;
    f_.v223 = 4LL * (unsigned int)v13 + 8;
    f_.v235 = v13 - (a3 >> 1);
    f_.v236 = v13;
    f_.v249 = -3 - v13;
    f_.v250 = -3 - 2 * v13;
    f_.v247 = -2 - v13;
    f_.v248 = (2 * v13) ^ 0xFFFFFFFE;
    f_.v245 = ~(_DWORD)v13;
    f_.v246 = ~(2 * v13);
    f_.v244 = -(int)v13;
    f_.v243 = -2 * v13;
    while (1) {
      v22 = *(&f_.v251 + v10);
      if (*(_DWORD*)(a1 + 96) == v6) {
        v23 = *(unsigned int**)(a1 + 8);
        if (v6 < 8) {
          v24 = 0;
          if (v18 == 0) {
            goto LABEL_36;
          }
        LABEL_20:
          v32 = v24;
          for (i = v18; i != 0; --i) {
            v23[v32] = *(_DWORD*)(v22 + v32 * 4);
            ++v32;
          }
          goto LABEL_36;
        }
        v28 = v23 + 4;
        v29 = (_DWORD*)(v22 + 16);
        v30 = 0;
        do {
          v30 -= 8;
          *(v28 - 4) = *(v29 - 4);
          *(v28 - 3) = *(v29 - 3);
          *(v28 - 2) = *(v29 - 2);
          *(v28 - 1) = *(v29 - 1);
          *(_DWORD*)v28 = *(_DWORD*)v29;
          v28[1] = v29[1];
          v28[2] = v29[2];
          v31 = v29[3];
          v29 += 8;
          v28[3] = v31;
          v28 += 8;
        } while (v19 != v30);
        v24 = -v30;
        if (v18 != 0) {
          goto LABEL_20;
        }
        goto LABEL_36;
      }
      v25 = *(_QWORD*)(a1 + 88);
      v26 = *(&f_.v254 + v10);
      if (v6 >= 8) {
        break;
      }
      v27 = 0;
      if (v18 != 0) {
        goto LABEL_26;
      }
    LABEL_28:
      GameRoutine_362560_alt1(v25, v6, (__int64)f_.v263, (__int64)&f_.v262,
                              0x20u);
      v42 = *(_QWORD*)(a1 + 88);
      v23 = *(unsigned int**)(a1 + 8);
      if (v6 < 8) {
        v43 = 0;
        if (v18 == 0) {
          goto LABEL_36;
        }
      LABEL_34:
        v48 = v43;
        for (j = v18; j != 0; --j) {
          v23[v48] = *(_DWORD*)(v22 + 4LL * *(unsigned int*)(v42 + v48 * 4));
          ++v48;
        }
        goto LABEL_36;
      }
      v44 = v23 + 4;
      v45 = (unsigned int*)(v42 + 16);
      v46 = 0;
      do {
        v46 -= 8;
        *(v44 - 4) = *(_DWORD*)(v22 + 4LL * *(v45 - 4));
        *(v44 - 3) = *(_DWORD*)(v22 + 4LL * *(v45 - 3));
        *(v44 - 2) = *(_DWORD*)(v22 + 4LL * *(v45 - 2));
        *(v44 - 1) = *(_DWORD*)(v22 + 4LL * *(v45 - 1));
        *(_DWORD*)v44 = *(_DWORD*)(v22 + 4LL * *v45);
        v44[1] = *(_DWORD*)(v22 + 4LL * v45[1]);
        v44[2] = *(_DWORD*)(v22 + 4LL * v45[2]);
        v47 = v45[3];
        v45 += 8;
        v44[3] = *(_DWORD*)(v22 + 4 * v47);
        v44 += 8;
      } while (v19 != v46);
      v43 = -v46;
      if (v18 != 0) {
        goto LABEL_34;
      }
    LABEL_36:
      v50 = *(_QWORD*)(a1 + 16);
      v51 = (float32x4_t*)(v50 + 32LL * *v23);
      v52 = *v51;
      v53 = v51[1];
      if (v6 >= 4) {
        v54 = (float32x4_t*)(v50 + 32LL * v23[1]);
        v52 = vminq_f32(v52, *v54);
        v53 = vmaxq_f32(v53, v54[1]);
      }
      if ((int)v13 <= (int)f_.v238) {
        v55 = *(_QWORD*)(a1 + 24);
        if (f_.v240 < 3) {
          v56 = 0;
          v57 = v13;
          if ((((_BYTE)f_.v224 + 1) & 3) == 0) {
            goto LABEL_47;
          }
        LABEL_45:
          v85 = (_DWORD*)(v55 + 4 * v56);
          v86 = &v23[v57];
          v87 = ((_BYTE)f_.v224 + 1) & 3;
          do {
            v88 = *v86++;
            --v87;
            v89 = (float32x4_t*)(v50 + 32LL * v88);
            v52 = vminq_f32(v52, *v89);
            v53 = vmaxq_f32(v53, v89[1]);
            v90 = vsubq_f32(v53, v52);
            LANES64(v91).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v92).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v91, COERCE_AS(int8x8_t, LANES128(v90).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v92).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v90).n128_u64[0]), v91, 4u);
            v93 = vmulq_f32(v90, v92);
            LANES128(v93).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v93, v93)).n128_u64[0];
            *(_DWORD*)v85++ =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])))
                    .n64_u32[0];
          } while (v87 != 0);
          goto LABEL_47;
        }
        v58 = (_DWORD*)(v55 + 8);
        v59 = 0;
        v60 = (unsigned int*)((char*)v23 + f_.v223);
        do {
          v59 -= 4;
          v61 = (float32x4_t*)(v50 + 32LL * *(v60 - 2));
          v62 = vminq_f32(v52, *v61);
          v63 = vmaxq_f32(v53, v61[1]);
          v64 = vsubq_f32(v63, v62);
          LANES64(v65).n64_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t,
                             LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v66).n128_u64[0] =
              LANES64_OF(vext_s8(v65,
                                 COERCE_AS(int8x8_t, LANES128(v64).n128_u64[0]),
                                 4u))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v66).n128_i8[8] =
              vext_s8(COERCE_AS(int8x8_t, LANES128(v64).n128_u64[0]), v65, 4u);
          v67 = vmulq_f32(v64, v66);
          LANES128(v67).n128_u64[0] =
              LANES128_OF(vpaddq_f32(v67, v67)).n128_u64[0];
          *(v58 - 2) =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0])))
                  .n64_u32[0];
          v68 = (float32x4_t*)(v50 + 32LL * *(v60 - 1));
          v69 = vminq_f32(v62, *v68);
          v70 = vmaxq_f32(v63, v68[1]);
          v71 = vsubq_f32(v70, v69);
          LANES64(v72).n64_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t,
                             LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v66).n128_u64[0] =
              LANES64_OF(vext_s8(v72,
                                 COERCE_AS(int8x8_t, LANES128(v71).n128_u64[0]),
                                 4u))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v66).n128_i8[8] =
              vext_s8(COERCE_AS(int8x8_t, LANES128(v71).n128_u64[0]), v72, 4u);
          v73 = vmulq_f32(v71, v66);
          LANES128(v73).n128_u64[0] =
              LANES128_OF(vpaddq_f32(v73, v73)).n128_u64[0];
          *(v58 - 1) =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
                  .n64_u32[0];
          v74 = (float32x4_t*)(v50 + 32LL * *v60);
          v75 = vminq_f32(v69, *v74);
          v76 = vmaxq_f32(v70, v74[1]);
          v77 = vsubq_f32(v76, v75);
          LANES64(v78).n64_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t,
                             LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v66).n128_u64[0] =
              LANES64_OF(vext_s8(v78,
                                 COERCE_AS(int8x8_t, LANES128(v77).n128_u64[0]),
                                 4u))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v66).n128_i8[8] =
              vext_s8(COERCE_AS(int8x8_t, LANES128(v77).n128_u64[0]), v78, 4u);
          v79 = vmulq_f32(v77, v66);
          LANES128(v79).n128_u64[0] =
              LANES128_OF(vpaddq_f32(v79, v79)).n128_u64[0];
          *(_DWORD*)v58 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
                  .n64_u32[0];
          v80 = v60[1];
          v60 += 4;
          v81 = (float32x4_t*)(v50 + 32 * v80);
          v52 = vminq_f32(v75, *v81);
          v53 = vmaxq_f32(v76, v81[1]);
          v82 = vsubq_f32(v53, v52);
          LANES64(v83).n64_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t,
                             LANES128_OF(vextq_s8(v82, v82, 8u)).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v66).n128_u64[0] =
              LANES64_OF(vext_s8(v83,
                                 COERCE_AS(int8x8_t, LANES128(v82).n128_u64[0]),
                                 4u))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v66).n128_i8[8] =
              vext_s8(COERCE_AS(int8x8_t, LANES128(v82).n128_u64[0]), v83, 4u);
          v84 = vmulq_f32(v82, v66);
          LANES128(v84).n128_u64[0] =
              LANES128_OF(vpaddq_f32(v84, v84)).n128_u64[0];
          v58[1] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0])))
                  .n64_u32[0];
          v58 += 4;
        } while (v17 != v59);
        v57 = v13 - v59;
        v56 = -v59;
        if ((((_BYTE)f_.v224 + 1) & 3) != 0) {
          goto LABEL_45;
        }
      }
    LABEL_47:
      v94 = (float32x4_t*)(v50 + 32LL * v23[f_.v234]);
      v95 = *v94;
      v96 = v94[1];
      if ((int)f_.v239 <= (int)v14) {
        goto LABEL_56;
      }
      v97 = f_.v227;
      if (f_.v227 == 0) {
        v98 = f_.v239;
        if (f_.v226 > 0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_56;
        }
      LABEL_54:
        v101 = &v23[v98];
        do {
          v98 -= 8;
          v102 = (float32x4_t*)(v50 + 32LL * *v101);
          v103 = *v102;
          v104 = v102[1];
          v105 = (float32x4_t*)(v50 + 32LL * *(v101 - 1));
          v106 = vmaxq_f32(v96, v104);
          v107 = v105[1];
          v108 = vminq_f32(vminq_f32(v95, v103), *v105);
          v109 = (float32x4_t*)(v50 + 32LL * *(v101 - 2));
          v110 = vmaxq_f32(v106, v107);
          v111 = *v109;
          v112 = v109[1];
          v113 = (float32x4_t*)(v50 + 32LL * *(v101 - 3));
          v114 = vmaxq_f32(v110, v112);
          v115 = v113[1];
          v116 = vminq_f32(vminq_f32(v108, v111), *v113);
          v117 = (float32x4_t*)(v50 + 32LL * *(v101 - 4));
          v118 = vmaxq_f32(v114, v115);
          v119 = *v117;
          v120 = v117[1];
          v121 = (float32x4_t*)(v50 + 32LL * *(v101 - 5));
          v122 = vmaxq_f32(v118, v120);
          v123 = v121[1];
          v124 = vminq_f32(vminq_f32(v116, v119), *v121);
          v125 = *(v101 - 7);
          v126 = (float32x4_t*)(v50 + 32LL * *(v101 - 6));
          v127 = vmaxq_f32(v122, v123);
          v101 -= 8;
          v128 = *v126;
          v129 = v126[1];
          v130 = (float32x4_t*)(v50 + 32 * v125);
          v95 = vminq_f32(vminq_f32(v124, v128), *v130);
          v96 = vmaxq_f32(vmaxq_f32(v127, v129), v130[1]);
        } while (v98 > v14);
        goto LABEL_56;
      }
      v98 = f_.v239;
      do {
        v99 = v23[v98--];
        --v97;
        v100 = (float32x4_t*)(v50 + 32 * v99);
        v95 = vminq_f32(v95, *v100);
        v96 = vmaxq_f32(v96, v100[1]);
      } while (v97 != 0);
      if (f_.v226 <= 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_54;
      }
    LABEL_56:
      f_.v241 = v10;
      if ((int)v14 >= (int)v13) {
        v131 = *(_QWORD*)(a1 + 32);
        if (f_.v240 >= 3) {
          v134 = (_DWORD*)(v131 + 8);
          v133 = 0;
          v135 = &v23[f_.v238 - 1];
          do {
            v133 += 4;
            v136 = (float32x4_t*)(v50 + 32LL * v135[1]);
            v137 = vminq_f32(v95, *v136);
            v138 = vmaxq_f32(v96, v136[1]);
            v139 = vsubq_f32(v138, v137);
            LANES64(v140).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v139, v139, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v141).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v140,
                            COERCE_AS(int8x8_t, LANES128(v139).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v141).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v139).n128_u64[0]), v140, 4u);
            v142 = vmulq_f32(v139, v141);
            LANES128(v142).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v142, v142)).n128_u64[0];
            *(v134 - 2) =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0])))
                    .n64_u32[0];
            v143 = (float32x4_t*)(v50 + 32LL * *v135);
            v144 = vminq_f32(v137, *v143);
            v145 = vmaxq_f32(v138, v143[1]);
            v146 = vsubq_f32(v145, v144);
            LANES64(v147).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v146, v146, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v141).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v147,
                            COERCE_AS(int8x8_t, LANES128(v146).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v141).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v146).n128_u64[0]), v147, 4u);
            v148 = vmulq_f32(v146, v141);
            LANES128(v148).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v148, v148)).n128_u64[0];
            *(v134 - 1) =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
                    .n64_u32[0];
            v149 = (float32x4_t*)(v50 + 32LL * *(v135 - 1));
            v150 = vminq_f32(v144, *v149);
            v151 = vmaxq_f32(v145, v149[1]);
            v152 = vsubq_f32(v151, v150);
            LANES64(v153).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v152, v152, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v141).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v153,
                            COERCE_AS(int8x8_t, LANES128(v152).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v141).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v152).n128_u64[0]), v153, 4u);
            v154 = vmulq_f32(v152, v141);
            LANES128(v154).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v154, v154)).n128_u64[0];
            *(_DWORD*)v134 =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0])))
                    .n64_u32[0];
            v155 = *(v135 - 2);
            v135 -= 4;
            v156 = (float32x4_t*)(v50 + 32 * v155);
            v95 = vminq_f32(v150, *v156);
            v96 = vmaxq_f32(v151, v156[1]);
            v157 = vsubq_f32(v96, v95);
            LANES64(v158).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v157, v157, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v141).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v158,
                            COERCE_AS(int8x8_t, LANES128(v157).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v141).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v157).n128_u64[0]), v158, 4u);
            v159 = vmulq_f32(v157, v141);
            LANES128(v159).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v159, v159)).n128_u64[0];
            v134[1] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
                    .n64_u32[0];
            v134 += 4;
          } while (v16 != v133);
          v132 = f_.v238 - v133;
          if ((((_BYTE)f_.v224 + 1) & 3) == 0) {
            goto LABEL_65;
          }
        LABEL_63:
          v160 = (_DWORD*)(v131 + 4 * v133);
          v161 = ((_BYTE)f_.v224 + 1) & 3;
          v162 = &v23[v132];
          do {
            v163 = *v162--;
            --v161;
            v164 = (float32x4_t*)(v50 + 32LL * v163);
            v95 = vminq_f32(v95, *v164);
            v96 = vmaxq_f32(v96, v164[1]);
            v165 = vsubq_f32(v96, v95);
            LANES64(v166).n64_u64[0] =
                LANES64_OF(
                    vrev64_s32(COERCE_AS(
                        int32x2_t,
                        LANES128_OF(vextq_s8(v165, v165, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v167).n128_u64[0] =
                LANES64_OF(
                    vext_s8(v166,
                            COERCE_AS(int8x8_t, LANES128(v165).n128_u64[0]),
                            4u))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v167).n128_i8[8] = vext_s8(
                COERCE_AS(int8x8_t, LANES128(v165).n128_u64[0]), v166, 4u);
            v168 = vmulq_f32(v165, v167);
            LANES128(v168).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v168, v168)).n128_u64[0];
            *(_DWORD*)v160++ =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
                    .n64_u32[0];
          } while (v161 != 0);
          goto LABEL_65;
        }
        v132 = f_.v238;
        v133 = 0;
        if ((((_BYTE)f_.v224 + 1) & 3) != 0) {
          goto LABEL_63;
        }
      }
    LABEL_65:
      if (f_.v233 < 0) {
        v20 = 0;
        v21 = 0x1.fffffe0000000p+127f;
      }
      else {
        if (f_.v240 >= 3) {
          v178 = v6;
          v169 = 0;
          v20 = 0;
          v21 = 0x1.fffffe0000000p+127f;
          do {
            v179 =
                (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(a1 + 32) +
                                                 4LL * (int)(f_.v243 + v178)) *
                                       (float)(int)(f_.v244 + v178))) +
                (float)((float)(unsigned int)(v13 + v169) *
                        *(float*)(*(_QWORD*)(a1 + 24) + 4 * v169));
            if (v179 < v21 ||
                v179 <= v21 &&
                    (v180 = GameRoutine_1a0cd30_alt1(f_.v235 + v169)) <
                        GameRoutine_1a0cd30_alt1(v20 - f_.v242)) {
              v21 = v179;
              v20 = v13 + v169;
            }
            v181 =
                (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(a1 + 32) +
                                                 4LL * (int)(f_.v246 + v178)) *
                                       (float)(int)(f_.v245 + v178))) +
                (float)((float)(unsigned int)(v13 + v169 + 1) *
                        *(float*)(*(_QWORD*)(a1 + 24) + 4 * v169 + 4));
            if (v181 < v21 ||
                v181 <= v21 &&
                    (v182 = GameRoutine_1a0cd30_alt1(f_.v235 + v169 + 1)) <
                        GameRoutine_1a0cd30_alt1(v20 - f_.v242)) {
              v21 = v181;
              v20 = v13 + v169 + 1;
            }
            v183 =
                (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(a1 + 32) +
                                                 4LL * (int)(f_.v248 + v178)) *
                                       (float)(int)(f_.v247 + v178))) +
                (float)((float)(unsigned int)(v13 + v169 + 2) *
                        *(float*)(*(_QWORD*)(a1 + 24) + 4 * v169 + 8));
            if (v183 < v21 ||
                v183 <= v21 &&
                    (v184 = GameRoutine_1a0cd30_alt1(f_.v235 + v169 + 2)) <
                        GameRoutine_1a0cd30_alt1(v20 - f_.v242)) {
              v21 = v183;
              v20 = v13 + v169 + 2;
            }
            v185 =
                (float)(PSEUDO_UNFUSED(*(float*)(*(_QWORD*)(a1 + 32) +
                                                 4LL * (int)(f_.v250 + v178)) *
                                       (float)(int)(f_.v249 + v178))) +
                (float)((float)(unsigned int)(v13 + v169 + 3) *
                        *(float*)(*(_QWORD*)(a1 + 24) + 4 * v169 + 12));
            if (v185 < v21 ||
                v185 <= v21 &&
                    (v186 = GameRoutine_1a0cd30_alt1(f_.v235 + v169 + 3)) <
                        GameRoutine_1a0cd30_alt1(v20 - f_.v242)) {
              v21 = v185;
              v20 = v13 + v169 + 3;
            }
            v169 += 4;
            v178 -= 4;
          } while (v16 != v169);
        }
        else {
          v169 = 0;
          v20 = 0;
          v21 = 0x1.fffffe0000000p+127f;
        }
        if ((((_BYTE)f_.v224 + 1) & 3) != 0) {
          v170 = 4 * v169;
          v171 = 0;
          v172 = f_.v224 - v169;
          v173 = f_.v236 + v169;
          v174 = a3 - (f_.v236 + v169);
          v175 = f_.v235 + v169;
          do {
            v176 = (float)(PSEUDO_UNFUSED(
                       *(float*)(*(_QWORD*)(a1 + 32) + 4LL * v172) *
                       (float)v174)) +
                   (float)((float)(unsigned int)(v173 + v171) *
                           *(float*)(*(_QWORD*)(a1 + 24) + v170 + 4 * v171));
            if (v176 < v21 ||
                v176 <= v21 && (v177 = GameRoutine_1a0cd30_alt1(v175 + v171)) <
                                   GameRoutine_1a0cd30_alt1(v20 - f_.v242)) {
              v21 = v176;
              v20 = v173 + v171;
            }
            ++v171;
            --v172;
            --v174;
          } while ((((_BYTE)f_.v224 + 1) & 3) != v171);
        }
      }
      v6 = a3;
      v13 = f_.v236;
      *(float*)&f_.v259[f_.v241] = v21;
      v18 = f_.v231;
      v14 = f_.v232;
      v19 = f_.v229;
      v16 = f_.v230;
      *(_DWORD*)&f_.v257[4 * f_.v241] = v20;
      v17 = f_.v228;
      v10 = f_.v241 + 1;
      if (f_.v241 == 2) {
        if (*(float*)f_.v259 <= f_.v260 & *(float*)f_.v259 <= f_.v261) {
          v189 = f_.v257;
          v188 = &f_.v254;
          v191 = f_.v251;
          if (*(_DWORD*)(a1 + 96) != a3) {
            goto LABEL_107;
          }
        LABEL_103:
          v192 = a3 & 7;
          if (a3 >= 8) {
            v198 = (_DWORD*)(v191 + 16);
            v199 = 0;
            v200 = (_DWORD*)(a2 + 16);
            do {
              v199 -= 8;
              *(v200 - 4) = *(v198 - 4);
              *(v200 - 3) = *(v198 - 3);
              *(v200 - 2) = *(v198 - 2);
              *(v200 - 1) = *(v198 - 1);
              *(_DWORD*)v200 = *(_DWORD*)v198;
              v200[1] = v198[1];
              v200[2] = v198[2];
              v201 = v198[3];
              v198 += 8;
              v200[3] = v201;
              v200 += 8;
            } while (-(__int64)(a3 & 0xFFFFFFF8) != v199);
            v193 = -v199;
            if ((a3 & 7) == 0) {
              goto LABEL_129;
            }
          }
          else {
            v193 = 0;
            if ((a3 & 7) == 0) {
              goto LABEL_129;
            }
          }
          v202 = (_DWORD*)(a2 + 4 * v193);
          v203 = (int*)(v191 + 4 * v193);
          do {
            v204 = *v203++;
            --v192;
            *(_DWORD*)v202++ = v204;
          } while (v192 != 0);
          goto LABEL_129;
        }
        v188 = &f_.v256;
        v189 = (char*)&f_.v258 + 4;
        v190 = &f_.v253;
        if (f_.v260 <= f_.v261) {
          v188 = &f_.v255;
          v190 = &f_.v252;
          v189 = (char*)&f_.v258;
        }
        v191 = *v190;
        if (*(_DWORD*)(a1 + 96) == a3) {
          goto LABEL_103;
        }
      LABEL_107:
        v194 = *v188;
        v195 = *(_QWORD*)(a1 + 88);
        v196 = a3 & 7;
        if (a3 >= 8) {
          v205 = (_DWORD*)(v195 + 16);
          v206 = 0;
          v207 = (unsigned int*)(a2 + 16);
          do {
            v206 -= 8;
            *(v205 - 4) = *(_DWORD*)(v194 + 4LL * *(v207 - 4));
            *(v205 - 3) = *(_DWORD*)(v194 + 4LL * *(v207 - 3));
            *(v205 - 2) = *(_DWORD*)(v194 + 4LL * *(v207 - 2));
            *(v205 - 1) = *(_DWORD*)(v194 + 4LL * *(v207 - 1));
            *(_DWORD*)v205 = *(_DWORD*)(v194 + 4LL * *v207);
            v205[1] = *(_DWORD*)(v194 + 4LL * v207[1]);
            v205[2] = *(_DWORD*)(v194 + 4LL * v207[2]);
            v208 = v207[3];
            v207 += 8;
            v205[3] = *(_DWORD*)(v194 + 4 * v208);
            v205 += 8;
          } while (-(__int64)(a3 & 0xFFFFFFF8) != v206);
          v197 = -v206;
          if ((a3 & 7) != 0) {
            goto LABEL_119;
          }
        }
        else {
          v197 = 0;
          if ((a3 & 7) == 0) {
            goto LABEL_121;
          }
        LABEL_119:
          v209 = (_DWORD*)(v195 + 4 * v197);
          v210 = (unsigned int*)(a2 + 4 * v197);
          do {
            v211 = *v210++;
            --v196;
            *(_DWORD*)v209++ = *(_DWORD*)(v194 + 4LL * v211);
          } while (v196 != 0);
        }
      LABEL_121:
        GameRoutine_362560_alt1(v195, a3, (__int64)f_.v263, (__int64)&f_.v262,
                                0x20u);
        v212 = *(_QWORD*)(a1 + 88);
        v213 = a3 & 7;
        if (a3 >= 8) {
          v215 = (unsigned int*)(v212 + 16);
          v216 = 0;
          v217 = (_DWORD*)(a2 + 16);
          do {
            v216 -= 8;
            *(v217 - 4) = *(_DWORD*)(v191 + 4LL * *(v215 - 4));
            *(v217 - 3) = *(_DWORD*)(v191 + 4LL * *(v215 - 3));
            *(v217 - 2) = *(_DWORD*)(v191 + 4LL * *(v215 - 2));
            *(v217 - 1) = *(_DWORD*)(v191 + 4LL * *(v215 - 1));
            *(_DWORD*)v217 = *(_DWORD*)(v191 + 4LL * *v215);
            v217[1] = *(_DWORD*)(v191 + 4LL * v215[1]);
            v217[2] = *(_DWORD*)(v191 + 4LL * v215[2]);
            v218 = v215[3];
            v215 += 8;
            v217[3] = *(_DWORD*)(v191 + 4 * v218);
            v217 += 8;
          } while (-(__int64)(a3 & 0xFFFFFFF8) != v216);
          v214 = -v216;
          if ((a3 & 7) == 0) {
            goto LABEL_129;
          }
        }
        else {
          v214 = 0;
          if ((a3 & 7) == 0) {
          LABEL_129:
            if (*(_DWORD*)v189 == 0 & a3 == 3) {
              return 1;
            }
            else {
              return *(unsigned int*)v189;
            }
          }
        }
        v219 = (unsigned int*)(v212 + 4 * v214);
        v220 = (_DWORD*)(a2 + 4 * v214);
        do {
          v221 = *v219++;
          --v213;
          *(_DWORD*)v220++ = *(_DWORD*)(v191 + 4LL * v221);
        } while (v213 != 0);
        goto LABEL_129;
      }
    }
    v34 = (unsigned int*)(a2 + 16);
    v35 = (_DWORD*)(v25 + 16);
    v36 = 0;
    do {
      v36 -= 8;
      *(v35 - 4) = *(_DWORD*)(v26 + 4LL * *(v34 - 4));
      *(v35 - 3) = *(_DWORD*)(v26 + 4LL * *(v34 - 3));
      *(v35 - 2) = *(_DWORD*)(v26 + 4LL * *(v34 - 2));
      *(v35 - 1) = *(_DWORD*)(v26 + 4LL * *(v34 - 1));
      *(_DWORD*)v35 = *(_DWORD*)(v26 + 4LL * *v34);
      v35[1] = *(_DWORD*)(v26 + 4LL * v34[1]);
      v35[2] = *(_DWORD*)(v26 + 4LL * v34[2]);
      v37 = v34[3];
      v34 += 8;
      v35[3] = *(_DWORD*)(v26 + 4 * v37);
      v35 += 8;
    } while (v19 != v36);
    v27 = -v36;
    if (v18 == 0) {
      goto LABEL_28;
    }
  LABEL_26:
    v38 = (_DWORD*)(v25 + 4 * v27);
    v39 = (unsigned int*)(a2 + 4 * v27);
    for (k = v18; k != 0; --k) {
      v41 = *v39++;
      *(_DWORD*)v38++ = *(_DWORD*)(v26 + 4LL * v41);
    }
    goto LABEL_28;
  }
  return result;
}

#pragma GCC visibility pop
