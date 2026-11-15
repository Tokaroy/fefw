#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 memcpy(__int64, __int64, unsigned __int64);
extern _DWORD GameData_1b6384c[3];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e7a8[31];
extern __int128 GameData_1a828e0;
extern __int128 GameData_1a829e0;
extern __int128 GameData_1a82a50;
extern __int128 GameData_1a82c60;
extern __int128 GameData_1a82c90;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a82ff0;
extern __int128 GameData_1a83000;
extern __int128 GameData_1a83370;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83530;
extern __int128 GameData_1a83620;
float exp2f(float);
float log2f(float);
float task_649cd0(__int64, float32x4_t*);
float task_649d50(__int64, float32x4_t*);
__int64 gfx_flow_b5d610(_DWORD* a1, __int64 a2, __int64 a3);
__int64 gfx_flow_b68c90(__int64 a1, __int64 a2);

__int64 gfx_flow_b5d610(_DWORD* a1, __int64 a2, __int64 a3)
{
  int v3;
  _DWORD* v4;
  __int64 v5;
  bool v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
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
  __int64 v79;
  __int64 v80;
  int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int32x4_t v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  float v92;
  __int64 v93;
  float32x4_t v94;
  int32x4_t v95;
  float v96;
  __int64 v97;
  int v98;
  float v99;
  float v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  _BYTE* v107;
  char* v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  float v114;
  bool v115;
  __int64 v116;
  float32x4_t v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  int32x4_t v123;
  int32x4_t v124;
  int32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  int32x4_t v129;
  int32x4_t v130;
  int32x4_t v131;
  float32x4_t v132;
  int32x4_t v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  __int128 v141;
  int32x4_t v142;
  int32x4_t v143;
  int32x4_t v144;
  int32x4_t v145;
  int32x4_t v146;
  int32x4_t v147;
  __int128 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  int32x4_t v156;
  int32x4_t v157;
  int32x4_t v158;
  __int64 v159;
  __int64 v160;
  int32x4_t v161;
  int32x4_t v162;
  int32x4_t v163;
  __int128 v164;
  __int128 v165;
  int32x4_t v166;
  int32x4_t v167;
  int32x4_t v168;
  int32x4_t v169;
  int32x4_t v170;
  int32x4_t v171;
  float v172;
  float v173;
  float v174;
  float v175;
  __int64 v176;
  int v177;
  int v178;
  float v179;
  float v180;
  _UNKNOWN** v181;
  int v182;
  __int64 v183;
  float v184;
  int v185;
  float v186;
  float v187;
  float v188;
  int v189;
  int v190;
  __int128 v191;
  float32x4_t* v192;
  __int64 v193;
  float32x4_t v194;
  float32x4_t v195;
  __int128 v196;
  __int64 v197;
  float32x4_t v198;
  float v199;
  unsigned int v200;
  unsigned int v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  int8x16_t v206;
  float v207;
  __int64 v208;
  int v209;
  int v210;
  __int64 v211;
  __int64 v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  __int64 v218;
  __int64 (**v219)(__int64);
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
  int v235;
  int v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  int32x4_t v242;
  int32x4_t v243;
  int32x4_t v244;
  float32x4_t v245;
  float32x4_t v246;
  int32x4_t v247;
  __int128 v248;
  float32x4_t v249;

  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v3 = a1[104];
    __asm__ volatile("" ::"r"(v3));
  }
  v4 = a1 + 100;
  {
    v5 = *(_QWORD*)a1;
    __asm__ volatile("" ::"r"(v5));
  }
  v9 = v3 < -1;
  v10 = ((_BYTE)v3 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  {
    v11 = *(_QWORD*)&v4[2 * v10];
    __asm__ volatile("" ::"r"(v11));
  }
  a1[104] = v10;
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v13 = *(_QWORD*)(a3 + 16);
    __asm__ volatile("" ::"r"(v13));
  }
  v14 = v12;
  if (v13 != 0) {
    {
      v15 = *(_DWORD*)(v13 + 16);
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = *(_QWORD*)(v13 + 8);
      __asm__ volatile("" ::"r"(v16));
    }
    *(_DWORD*)(v12 + 12) = 0;
    *(_QWORD*)v12 = v16;
    *(_DWORD*)(v12 + 8) = v15;
    {
      v17 = *(_QWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = *(_DWORD*)(v17 + 28);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_DWORD*)(v17 + 56);
      __asm__ volatile("" ::"r"(v19));
    }
    *(_QWORD*)(v12 + 16) = *(_QWORD*)(v17 + 20);
    *(_DWORD*)(v12 + 24) = v18;
    *(_DWORD*)(v12 + 28) = v19;
    {
      v20 = *(_QWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = *(_DWORD*)(v20 + 40);
      __asm__ volatile("" ::"r"(v21));
    }
    {
      v22 = *(_DWORD*)(v20 + 60);
      __asm__ volatile("" ::"r"(v22));
    }
    *(_QWORD*)(v12 + 32) = *(_QWORD*)(v20 + 32);
    *(_DWORD*)(v12 + 40) = v21;
    *(_DWORD*)(v12 + 44) = v22;
    {
      v23 = *(_QWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v23));
    }
    {
      v24 = *(_DWORD*)(v23 + 52);
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = *(_DWORD*)(v23 + 64);
      __asm__ volatile("" ::"r"(v25));
    }
    {
      v26 = *(_QWORD*)(v23 + 44);
      __asm__ volatile("" ::"r"(v26));
    }
    *(_DWORD*)(v12 + 64) = 1077936128;
    *(_QWORD*)(v12 + 48) = v26;
    *(_DWORD*)(v12 + 56) = v24;
    *(_DWORD*)(v12 + 60) = v25;
    *(_DWORD*)(v12 + 68) = *(_DWORD*)(*(_QWORD*)(a3 + 16) + 4LL);
  }
  {
    v27 = *(__int64**)(a3 + 24);
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = *v27;
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v29 = v27[1];
    __asm__ volatile("" ::"r"(v29));
  }
  {
    v30 = v27[3];
    __asm__ volatile("" ::"r"(v30));
  }
  *(_QWORD*)(v12 + 224) = v27[2];
  *(_QWORD*)(v12 + 232) = v30;
  *(_QWORD*)(v12 + 208) = v28;
  *(_QWORD*)(v12 + 216) = v29;
  {
    v31 = v27[4];
    __asm__ volatile("" ::"r"(v31));
  }
  {
    v32 = v27[5];
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v34 = v27[6];
    __asm__ volatile("" ::"r"(v34));
  }
  {
    v33 = v27[7];
    __asm__ volatile("" ::"r"(v33));
  }
  *(_QWORD*)(v12 + 256) = v34;
  *(_QWORD*)(v12 + 264) = v33;
  *(_QWORD*)(v12 + 240) = v31;
  *(_QWORD*)(v12 + 248) = v32;
  {
    v35 = *(_QWORD**)(a3 + 24);
    __asm__ volatile("" ::"r"(v35));
  }
  {
    v36 = v35[8];
    __asm__ volatile("" ::"r"(v36));
  }
  {
    v37 = v35[9];
    __asm__ volatile("" ::"r"(v37));
  }
  {
    v38 = v35[11];
    __asm__ volatile("" ::"r"(v38));
  }
  *(_QWORD*)(v12 + 288) = v35[10];
  *(_QWORD*)(v12 + 296) = v38;
  *(_QWORD*)(v12 + 272) = v36;
  *(_QWORD*)(v12 + 280) = v37;
  {
    v39 = v35[12];
    __asm__ volatile("" ::"r"(v39));
  }
  {
    v40 = v35[13];
    __asm__ volatile("" ::"r"(v40));
  }
  {
    v42 = v35[14];
    __asm__ volatile("" ::"r"(v42));
  }
  {
    v41 = v35[15];
    __asm__ volatile("" ::"r"(v41));
  }
  *(_QWORD*)(v12 + 320) = v42;
  *(_QWORD*)(v12 + 328) = v41;
  *(_QWORD*)(v12 + 304) = v39;
  *(_QWORD*)(v12 + 312) = v40;
  {
    v43 = *(_QWORD**)(a3 + 24);
    __asm__ volatile("" ::"r"(v43));
  }
  {
    v44 = v43[16];
    __asm__ volatile("" ::"r"(v44));
  }
  {
    v45 = v43[17];
    __asm__ volatile("" ::"r"(v45));
  }
  {
    v46 = v43[19];
    __asm__ volatile("" ::"r"(v46));
  }
  *(_QWORD*)(v12 + 352) = v43[18];
  *(_QWORD*)(v12 + 360) = v46;
  *(_QWORD*)(v12 + 336) = v44;
  *(_QWORD*)(v12 + 344) = v45;
  {
    v47 = v43[20];
    __asm__ volatile("" ::"r"(v47));
  }
  {
    v48 = v43[21];
    __asm__ volatile("" ::"r"(v48));
  }
  {
    v50 = v43[22];
    __asm__ volatile("" ::"r"(v50));
  }
  {
    v49 = v43[23];
    __asm__ volatile("" ::"r"(v49));
  }
  *(_QWORD*)(v12 + 384) = v50;
  *(_QWORD*)(v12 + 392) = v49;
  *(_QWORD*)(v12 + 368) = v47;
  *(_QWORD*)(v12 + 376) = v48;
  {
    v51 = *(_QWORD**)(a3 + 24);
    __asm__ volatile("" ::"r"(v51));
  }
  {
    v52 = v51[24];
    __asm__ volatile("" ::"r"(v52));
  }
  {
    v53 = v51[25];
    __asm__ volatile("" ::"r"(v53));
  }
  {
    v54 = v51[27];
    __asm__ volatile("" ::"r"(v54));
  }
  *(_QWORD*)(v12 + 416) = v51[26];
  *(_QWORD*)(v12 + 424) = v54;
  *(_QWORD*)(v12 + 400) = v52;
  *(_QWORD*)(v12 + 408) = v53;
  {
    v55 = v51[28];
    __asm__ volatile("" ::"r"(v55));
  }
  {
    v56 = v51[29];
    __asm__ volatile("" ::"r"(v56));
  }
  {
    v58 = v51[30];
    __asm__ volatile("" ::"r"(v58));
  }
  {
    v57 = v51[31];
    __asm__ volatile("" ::"r"(v57));
  }
  *(_QWORD*)(v12 + 448) = v58;
  *(_QWORD*)(v12 + 456) = v57;
  *(_QWORD*)(v12 + 432) = v55;
  *(_QWORD*)(v12 + 440) = v56;
  {
    v59 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v59));
  }
  {
    v61 = *(_QWORD*)(v59 + 352);
    __asm__ volatile("" ::"r"(v61));
  }
  {
    v60 = *(_QWORD*)(v59 + 360);
    __asm__ volatile("" ::"r"(v60));
  }
  *(_QWORD*)(v12 + 176) = v61;
  *(_QWORD*)(v12 + 184) = v60;
  {
    v62 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v62));
  }
  {
    v64 = *(_QWORD*)(v62 + 368);
    __asm__ volatile("" ::"r"(v64));
  }
  {
    v63 = *(_QWORD*)(v62 + 376);
    __asm__ volatile("" ::"r"(v63));
  }
  *(_QWORD*)(v12 + 192) = v64;
  *(_QWORD*)(v12 + 200) = v63;
  {
    v65 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v65));
  }
  {
    v67 = *(_QWORD*)(v65 + 320);
    __asm__ volatile("" ::"r"(v67));
  }
  {
    v66 = *(_QWORD*)(v65 + 328);
    __asm__ volatile("" ::"r"(v66));
  }
  *(_QWORD*)(v12 + 144) = v67;
  *(_QWORD*)(v12 + 152) = v66;
  {
    v68 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v68));
  }
  {
    v70 = *(_QWORD*)(v68 + 336);
    __asm__ volatile("" ::"r"(v70));
  }
  {
    v69 = *(_QWORD*)(v68 + 344);
    __asm__ volatile("" ::"r"(v69));
  }
  *(_QWORD*)(v12 + 160) = v70;
  *(_QWORD*)(v12 + 168) = v69;
  {
    v71 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v71));
  }
  {
    v72 = *(_QWORD*)(v71 + 384);
    __asm__ volatile("" ::"r"(v72));
  }
  *(_QWORD*)(v12 + 552) = *(_QWORD*)(v71 + 392);
  *(_QWORD*)(v12 + 544) = v72;
  {
    v73 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v73));
  }
  {
    v74 = *(_QWORD*)(v73 + 400);
    __asm__ volatile("" ::"r"(v74));
  }
  *(_QWORD*)(v12 + 568) = *(_QWORD*)(v73 + 408);
  *(_QWORD*)(v12 + 560) = v74;
  {
    v75 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v75));
  }
  {
    v76 = *(_QWORD*)(v75 + 416);
    __asm__ volatile("" ::"r"(v76));
  }
  *(_QWORD*)(v12 + 584) = *(_QWORD*)(v75 + 424);
  *(_QWORD*)(v12 + 576) = v76;
  {
    v77 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v77));
  }
  {
    v78 = *(_QWORD*)(v77 + 432);
    __asm__ volatile("" ::"r"(v78));
  }
  *(_QWORD*)(v12 + 600) = *(_QWORD*)(v77 + 440);
  *(_QWORD*)(v12 + 592) = v78;
  {
    v79 = *(_QWORD*)(a3 + 24);
    __asm__ volatile("" ::"r"(v79));
  }
  {
    v80 = *(_QWORD*)(v79 + 448);
    __asm__ volatile("" ::"r"(v80));
  }
  *(_QWORD*)(v12 + 616) = *(_QWORD*)(v79 + 456);
  *(_QWORD*)(v12 + 608) = v80;
  vst4q_f32((float*)(v12 + 464), *(float32x4x4_t*)(a3 + 288));
  {
    v81 = *(_DWORD*)(a3 + 352);
    __asm__ volatile("" ::"r"(v81));
  }
  {
    v82 = *(_DWORD*)(a3 + 356);
    __asm__ volatile("" ::"r"(v82));
  }
  *(_QWORD*)(v12 + 536) = 0;
  *(_DWORD*)(v12 + 528) = v81;
  *(_DWORD*)(v12 + 532) = v82;
  {
    v83 = *(_QWORD*)(a3 + 40);
    __asm__ volatile("" ::"r"(v83));
  }
  v84 = 120;
  if (*(_BYTE*)(v83 + 90) != 0) {
    v84 = 89;
  }
  if ((*(_BYTE*)(v83 + v84) & 1) != 0) {
    {
      v85 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v85));
    }
    v86 = 400;
    if (*(_BYTE*)(v83 + 352) != 0) {
      v86 = 336;
    }
    {
      v249 = *(float32x4_t*)(v83 + v86);
      __asm__ volatile("" ::"w"(v249));
    }
    LANES128(v87).n128_f32[0] = task_649cd0(v85, &v249),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v88 = LANES128_OF(
              vaddq_f32(vdupq_laneq_s32(v87, 2),
                        vaddq_f32(v87, vdupq_lane_s32(
                                           COERCE_AS(int32x2_t,
                                                     LANES128(v87).n128_u64[0]),
                                           1))))
              .n128_f32[0] /
          0x1.8000000000000p+1f;
    if (v88 > 0x1.0000000000000p-23f) {
      v87 = vmulq_n_f32(v87, 0x1.0000000000000p+0f / v88);
      LANES128(v87).n128_u32[3] = 0;
    }
    {
      v89 = *(_QWORD*)(a3 + 40);
      __asm__ volatile("" ::"r"(v89));
    }
    {
      v90 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v90));
    }
    v91 = 280;
    if (*(_BYTE*)(v89 + 248) != 0) {
      v91 = 244;
    }
    {
      v92 = *(float*)(v89 + v91);
      __asm__ volatile("" ::"w"(v92));
    }
    v93 = 768;
    v94 = vmulq_n_f32(v87, v92);
    if (*(_BYTE*)(v89 + 720) != 0) {
      v93 = 704;
    }
    v246 = v94;
    {
      v249 = *(float32x4_t*)(v89 + v93);
      __asm__ volatile("" ::"w"(v249));
    }
    LANES128(v95).n128_f32[0] = task_649cd0(v90, &v249),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v96 = LANES128_OF(
              vaddq_f32(vdupq_laneq_s32(v95, 2),
                        vaddq_f32(v95, vdupq_lane_s32(
                                           COERCE_AS(int32x2_t,
                                                     LANES128(v95).n128_u64[0]),
                                           1))))
              .n128_f32[0] /
          0x1.8000000000000p+1f;
    if (v96 > 0x1.0000000000000p-23f) {
      v95 = vmulq_n_f32(v95, 0x1.0000000000000p+0f / v96);
      LANES128(v95).n128_u32[3] = 0;
    }
    {
      v97 = *(_QWORD*)(a3 + 40);
      __asm__ volatile("" ::"r"(v97));
    }
    {
      v98 = *(unsigned __int8*)(v97 + 608);
      __asm__ volatile("" ::"r"(v98));
    }
    {
      v99 = *(float*)(v97 + 604);
      __asm__ volatile("" ::"w"(v99));
    }
    {
      v100 = *(float*)(v97 + 640);
      __asm__ volatile("" ::"w"(v100));
    }
    *(_DWORD*)(v14 + 632) = LANES128(v246).n128_u32[2];
    *(_QWORD*)(v14 + 624) = LANES128(v246).n128_u64[0];
    *(_QWORD*)(v14 + 636) = 0x3F8000003F800000LL;
    {
      v101 = *(_QWORD*)(a3 + 40);
      __asm__ volatile("" ::"r"(v101));
    }
    v102 = 200;
    if (*(_BYTE*)(v101 + 168) != 0) {
      v102 = 164;
    }
    {
      v103 = *(_DWORD*)(v101 + v102);
      __asm__ volatile("" ::"r"(v103));
    }
    *(_DWORD*)(v14 + 648) = 1065353216;
    *(_DWORD*)(v14 + 644) = v103;
    {
      v104 = *(_QWORD*)(a3 + 40);
      __asm__ volatile("" ::"r"(v104));
    }
    v105 = 488;
    if (*(_BYTE*)(v104 + 456) != 0) {
      v105 = 452;
    }
    {
      v106 = *(_DWORD*)(v104 + v105);
      __asm__ volatile("" ::"r"(v106));
    }
    *(_DWORD*)(v14 + 652) = v106;
    {
      v107 = *(_BYTE**)(a3 + 40);
      __asm__ volatile("" ::"r"(v107));
    }
    v108 = v107 + 529;
    if (v107[530] == 0) {
      v108 = v107 + 560;
    }
    {
      v109 = *v108;
      __asm__ volatile("" ::"r"(v109));
    }
    v110 = 936;
    if (v107[904] != 0) {
      v111 = 900;
    }
    else {
      v111 = 936;
    }
    *(float*)(v14 + 656) = -*(float*)&v107[v111];
    {
      v112 = *(_QWORD*)(a3 + 40);
      __asm__ volatile("" ::"r"(v112));
    }
    v113 = 1016;
    if (*(_BYTE*)(v112 + 984) != 0) {
      v113 = 980;
    }
    if (*(_BYTE*)(v112 + 904) != 0) {
      v110 = 900;
    }
    {
      v114 = *(float*)(v112 + v113) - *(float*)(v112 + v110);
      __asm__ volatile("" ::"w"(v114));
    }
    if (v114 < 0x1.0624de0000000p-10f) {
      v114 = 0x1.0624de0000000p-10f;
    }
    *(float*)(v14 + 660) = 0x1.0000000000000p+0f / v114;
    if ((v109 & 1) != 0) {
      v115 = v98 == 0;
      {
        v116 = *(_QWORD*)(a3 + 40);
        __asm__ volatile("" ::"r"(v116));
      }
      if (v115) {
        v99 = v100;
      }
      v117 = vmulq_n_f32(v95, v99);
      v118 = 1096;
      if (*(_BYTE*)(v116 + 1064) != 0) {
        v118 = 1060;
      }
      *(_DWORD*)(v14 + 664) = *(_DWORD*)(v116 + v118);
      {
        v119 = *(_QWORD*)(a3 + 40);
        __asm__ volatile("" ::"r"(v119));
      }
      v120 = 856;
      if (*(_BYTE*)(v119 + 824) != 0) {
        v120 = 820;
      }
      {
        v121 = *(_DWORD*)(v119 + v120);
        __asm__ volatile("" ::"r"(v121));
      }
      *(_QWORD*)(v14 + 672) = LANES128(v117).n128_u64[0];
      *(_DWORD*)(v14 + 684) = 1065353216;
      *(_DWORD*)(v14 + 680) = LANES128(v117).n128_u32[2];
      *(_DWORD*)(v14 + 668) = v121;
    }
    else {
      *(_DWORD*)(v14 + 664) = 1065353216;
      *(_DWORD*)(v14 + 668) = v106;
      {
        v122 = *(_QWORD*)(v14 + 632);
        __asm__ volatile("" ::"r"(v122));
      }
      *(_QWORD*)(v14 + 672) = *(_QWORD*)(v14 + 624);
      *(_QWORD*)(v14 + 680) = v122;
    }
  }
  else {
    *(_QWORD*)(v12 + 640) = 0;
    *(_QWORD*)(v12 + 624) = 0x3F8000003F800000LL;
    *(_QWORD*)(v12 + 632) = 0x3F8000003F800000LL;
    *(_QWORD*)(v12 + 672) = 0x3F8000003F800000LL;
    *(_QWORD*)(v12 + 680) = 0x3F8000003F800000LL;
    *(_QWORD*)(v12 + 648) = 1065353216;
    *(_QWORD*)(v12 + 664) = 1065353216;
    *(_QWORD*)(v12 + 656) = 0x3F80000000000000LL;
  }
  v242 = COERCE_INT32X4_T(
      ((long double (*)(_QWORD)) *
       (_QWORD*)(**(_QWORD**)(a3 + 8) + 16LL))(*(_QWORD*)(a3 + 8))),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v243 = v123;
  v244 = v124;
  v247 = v125;
  *(long double*)&v126 =
      ((long double (*)(_QWORD)) *
       (_QWORD*)(**(_QWORD**)(a3 + 8) + 24LL))(*(_QWORD*)(a3 + 8)),
         v123 =
             COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v124 =
             COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v125 =
             COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v127 =
             COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v128 =
             COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v132 =
             COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 848) = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v14 + 856) = 1098907648;
  v129 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v242).n128_f32[0]), v127,
                     COERCE_AS(float32x2_t, LANES128(v242).n128_u64[0]), 1),
      v128, v242, 2);
  v130 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v243).n128_f32[0]), v127,
                     COERCE_AS(float32x2_t, LANES128(v243).n128_u64[0]), 1),
      v128, v243, 2);
  v131 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v244).n128_f32[0]), v127,
                     COERCE_AS(float32x2_t, LANES128(v244).n128_u64[0]), 1),
      v128, v244, 2);
  v133 = vaddq_f32(
      v132,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v247).n128_f32[0]), v127,
                         COERCE_AS(float32x2_t, LANES128(v247).n128_u64[0]), 1),
          v128, v247, 2));
  *(_QWORD*)(v14 + 80) = LANES128_OF(vzip2q_s32(v242, v243)).n128_u64[0];
  *(_QWORD*)(v14 + 88) = LANES128_OF(vzip2q_s32(v244, v247)).n128_u64[0];
  *(int32x2_t*)(v14 + 112) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v129).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v130).n128_u64[0]));
  *(int32x2_t*)(v14 + 120) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v131).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v133).n128_u64[0]));
  *(int32x2_t*)(v14 + 128) =
      vzip2_s32(COERCE_AS(int32x2_t, LANES128(v129).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v130).n128_u64[0]));
  *(int32x2_t*)(v14 + 136) =
      vzip2_s32(COERCE_AS(int32x2_t, LANES128(v131).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v133).n128_u64[0]));
  *(_QWORD*)(v14 + 96) =
      LANES128_OF(vuzp2q_s32(vuzp2q_s32(v129, v130), v129)).n128_u64[0];
  *(_QWORD*)(v14 + 104) =
      LANES128_OF(vuzp2q_s32(vuzp2q_s32(v131, v133), v131)).n128_u64[0];
  {
    v134 = *(_DWORD*)(a3 + 48);
    __asm__ volatile("" ::"r"(v134));
  }
  v135 = v134 + 31;
  v9 = v134 < -31;
  v136 = v134 + 62;
  if (!v9) {
    v136 = v135;
  }
  *(_DWORD*)(v14 + 864) = v136 >> 5;
  {
    v137 = *(_DWORD*)(a3 + 52);
    __asm__ volatile("" ::"r"(v137));
  }
  v138 = v137 + 31;
  v9 = v137 < -31;
  v139 = v137 + 62;
  if (!v9) {
    v139 = v138;
  }
  *(_DWORD*)(v14 + 868) = v139 >> 5;
  *(_QWORD*)(v14 + 872) = 16;
  {
    v140 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
    __asm__ volatile("" ::"r"(v140));
  }
  if ((unsigned int)(v140 - 3) > 3) {
    v148 = (__typeof__(v148)){0};
    v149 = 816;
    v150 = 800;
    v151 = 784;
    v152 = 768;
    v153 = 752;
    v154 = 736;
    v155 = 720;
    {
      v156 = *((int32x4_t*)GameData_212c2a0 + 1);
      __asm__ volatile("" ::"w"(v156));
    }
    {
      v157 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      __asm__ volatile("" ::"w"(v157));
    }
    {
      v158 =
          *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
      __asm__ volatile("" ::"w"(v158));
    }
    v159 = 832;
    v160 = 704;
    v161 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v157);
    v162 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v157);
    v163 = vzip1q_s32(v156, v158);
    v145 = vzip1q_s32(v161, v163);
    v147 = vzip2q_s32(v161, v163);
    v146 = vzip1q_s32(v162, vzip2q_s32(v156, v158));
    v144 = v147;
    v143 = v146;
    v142 = v145;
    v164 = (__int128)v147;
    v165 = (__int128)v146;
    *(int32x4_t*)(v14 + 688) = v145;
  }
  else {
    if ((unsigned int)(v140 - 5) >= 2) {
      v141 = (__typeof__(v141)){0};
      {
        v166 = *((int32x4_t*)GameData_212c2a0 + 1);
        __asm__ volatile("" ::"w"(v166));
      }
      {
        v167 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
        __asm__ volatile("" ::"w"(v167));
      }
      {
        v168 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 +
                             16);
        __asm__ volatile("" ::"w"(v168));
      }
      v169 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v167);
      v170 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v167);
      v171 = vzip1q_s32(v166, v168);
      v142 = vzip1q_s32(v170, vzip2q_s32(v166, v168));
      v145 = COERCE_AS(int32x4_t, GameData_1a82d20);
      v144 = vzip1q_s32(v169, v171);
      v143 = vzip2q_s32(v169, v171);
      v146 = COERCE_AS(int32x4_t, GameData_1a834b0);
      v147 = COERCE_AS(int32x4_t, GameData_1a83620);
    }
    else {
      *(_QWORD*)&v141 = 0x3F8000003F800000LL;
      *((_QWORD*)&v141 + 1) = 0x3F8000003F800000LL;
      v142 = COERCE_AS(int32x4_t, GameData_1a829e0);
      v143 = COERCE_AS(int32x4_t, GameData_1a83000);
      v144 = COERCE_AS(int32x4_t, GameData_1a82a50);
      v145 = COERCE_AS(int32x4_t, GameData_1a83530);
      v146 = COERCE_AS(int32x4_t, GameData_1a82c60);
      v147 = COERCE_AS(int32x4_t, GameData_1a82ff0);
    }
    *(_OWORD*)(v14 + 832) = v141;
    v149 = 800;
    v151 = 768;
    v148 = GameData_1a828e0;
    v164 = GameData_1a82c90;
    v150 = 784;
    v152 = 752;
    v153 = 736;
    v165 = GameData_1a83370;
    v159 = 816;
    v154 = 720;
    v155 = 704;
    v160 = 688;
  }
  *(int32x4_t*)(v14 + v160) = v147;
  *(int32x4_t*)(v14 + v155) = v146;
  *(int32x4_t*)(v14 + v154) = v145;
  v172 = 0x0.0p+0f;
  *(int32x4_t*)(v14 + v153) = v144;
  *(int32x4_t*)(v14 + v152) = v143;
  *(int32x4_t*)(v14 + v151) = v142;
  *(_OWORD*)(v14 + v150) = v164;
  *(_OWORD*)(v14 + v149) = v165;
  *(_OWORD*)(v14 + v159) = v148;
  if (*(_BYTE*)(a3 + 56) == 1) {
    {
      v173 = *(float*)(a3 + 60);
      __asm__ volatile("" ::"w"(v173));
    }
    {
      v174 = v173 * (float)(v173 / *(float*)(a3 + 64));
      __asm__ volatile("" ::"w"(v174));
    }
    v175 = (float)(PSEUDO_UNFUSED(*(float*)(a3 + 68) * 0x1.f400000000000p+9f)) -
           v173;
    if (v175 < 0x1.a36e2e0000000p-14f) {
      v175 = 0x1.a36e2e0000000p-14f;
    }
    v172 = v174 / v175;
  }
  *(float*)(v14 + 72) = v172;
  *(_DWORD*)(v14 + 76) = *(_DWORD*)(a3 + 68);
  *(_DWORD*)(v14 + 1072) = *(_DWORD*)(a3 + 240);
  if (*(_BYTE*)(a3 + 224) == 1) {
    {
      v176 = *(unsigned int*)(a3 + 184);
      __asm__ volatile("" ::"r"(v176));
    }
    if ((unsigned int)v176 > 2) {
      v177 = 3;
    }
    else {
      v177 = GameData_1b6384c[v176];
      __asm__ volatile("" ::"r"(v177));
    }
    *(_DWORD*)(v14 + 1076) = v177;
  }
  {
    v178 = *(_DWORD*)(a3 + 360);
    __asm__ volatile("" ::"r"(v178));
  }
  *(_DWORD*)(v14 + 1084) = 0;
  v179 = 0x1.0000000000000p+0f;
  *(_DWORD*)(v14 + 1080) = v178;
  *(_DWORD*)(v14 + 1088) = *(_DWORD*)(a3 + 268);
  *(_DWORD*)(v14 + 1092) = *(_DWORD*)(a3 + 272);
  v180 = 0x0.0p+0f;
  if (*(_QWORD*)(a3 + 32) != 0) {
    v180 = 0x1.0000000000000p+0f;
  }
  *(float*)(v14 + 1096) = v180;
  *(float*)(v14 + 1100) =
      log2f((float)*(int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 32LL) /
            (float)*(int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL)) +
      -0x1.0000000000000p+0f,
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v124 = COERCE_AS(__typeof__(v124),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v125 = COERCE_AS(__typeof__(v125),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v127 = COERCE_AS(__typeof__(v127),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v128 = COERCE_AS(__typeof__(v128),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v181 = GameData_212e4d8[0];
    __asm__ volatile("" ::"r"(v181));
  }
  if (*(_BYTE*)(a3 + 224) == 1) {
    *(_QWORD*)(v14 + 1104) =
        (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
            *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a3 + 200),
            (unsigned int)a1[34]),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1112) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v181)(
        *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a3 + 216),
        (unsigned int)a1[34]),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
    if (*(_DWORD*)(a3 + 184) == 1) {
      if (*(_BYTE*)(a3 + 189) == 1) {
        v179 = exp2f(*(float*)(a3 + 172)) * *(float*)(a3 + 176),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      else {
        v179 = exp2f(*(float*)(a3 + 168) + -0x1.8000000000000p+1f) /
               0x1.9000000000000p+6f,
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
    {
      v182 = *(_DWORD*)(a3 + 136);
      __asm__ volatile("" ::"r"(v182));
    }
    {
      v183 = *(_QWORD*)(a3 + 128);
      __asm__ volatile("" ::"r"(v183));
    }
    *(float*)(v14 + 892) = v179;
    *(_QWORD*)(v14 + 880) = v183;
    *(_DWORD*)(v14 + 888) = v182;
    {
      v184 = *(float*)(a3 + 140);
      __asm__ volatile("" ::"w"(v184));
    }
    {
      v185 = *(_DWORD*)(a3 + 180);
      __asm__ volatile("" ::"r"(v185));
    }
    v186 = -v184;
    {
      v187 = *(float*)(a3 + 144) - v184;
      __asm__ volatile("" ::"w"(v187));
    }
    v188 = 0x1.0000000000000p+0f;
    *(_DWORD*)(v14 + 904) = *(_DWORD*)(a3 + 148);
    *(_DWORD*)(v14 + 908) = v185;
    *(float*)(v14 + 896) = v186;
    *(float*)(v14 + 900) = 0x1.0000000000000p+0f / v187;
    {
      v189 = *(_DWORD*)(a3 + 160);
      __asm__ volatile("" ::"r"(v189));
    }
    {
      v190 = *(_DWORD*)(a3 + 164);
      __asm__ volatile("" ::"r"(v190));
    }
    *(_QWORD*)(v14 + 912) = *(_QWORD*)(a3 + 152);
    *(_DWORD*)(v14 + 920) = v189;
    *(_DWORD*)(v14 + 924) = v190;
    v191 = *(_OWORD*)(a3 + 112);
    if (*(_BYTE*)(a3 + 189) == 0) {
      v188 = 0x0.0p+0f;
    }
    *(_QWORD*)(v14 + 928) = v191;
    *(_DWORD*)(v14 + 936) = DWORD2(v191);
    *(float*)(v14 + 940) = v188;
  }
  {
    v192 = *(float32x4_t**)(a3 + 32);
    __asm__ volatile("" ::"r"(v192));
  }
  if (v192 != nullptr) {
    {
      v193 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v193));
    }
    v194 = vdupq_n_s32(0x3C23D70Au);
    v195 = vmulq_f32(v192[4], v194);
    v245 = v194;
    LANES128(v195).n128_u32[3] = 0;
    v249 = v195;
    *(float*)&v196 = task_649d50(v193, &v249),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v248 = v196;
    {
      v197 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v197));
    }
    v198 = vmulq_f32(*(float32x4_t*)(*(_QWORD*)(a3 + 32) + 80LL), v245);
    LANES128(v198).n128_u32[3] = 0;
    v249 = v198;
    v199 = task_649d50(v197, &v249),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    {
      v202 = *(_QWORD*)(a3 + 32);
      __asm__ volatile("" ::"r"(v202));
    }
    {
      v203 = *(_QWORD*)(v202 + 48);
      __asm__ volatile("" ::"r"(v203));
    }
    {
      v204 = *(unsigned int*)(v202 + 56);
      __asm__ volatile("" ::"r"(v204));
    }
    *(_QWORD*)(v14 + 944) = v203;
    *(_QWORD*)(v14 + 952) = v204;
    {
      v205 = *(unsigned int*)(*(_QWORD*)(a3 + 32) + 96LL);
      __asm__ volatile("" ::"r"(v205));
    }
    *(_QWORD*)(v14 + 960) = v248;
    *(_QWORD*)(v14 + 968) = DWORD2(v248) | (unsigned __int64)(v205 << 32);
    {
      v206 = *(int8x16_t*)(*(_QWORD*)(a3 + 32) + 16LL);
      __asm__ volatile("" ::"w"(v206));
    }
    *(_QWORD*)(v14 + 976) = LANES128(v206).n128_u64[0];
    *(_QWORD*)(v14 + 984) = LANES128_OF(vextq_s8(v206, v206, 8u)).n128_u64[0];
    v207 = 0x0.0p+0f;
    {
      v208 = *(_QWORD*)(a3 + 32);
      __asm__ volatile("" ::"r"(v208));
    }
    if (*(_BYTE*)(v208 + 100) != 0) {
      v207 = 0x1.0000000000000p+0f;
    }
    {
      v209 = *(_DWORD*)(v208 + 104);
      __asm__ volatile("" ::"r"(v209));
    }
    {
      v210 = *(_DWORD*)(v208 + 108);
      __asm__ volatile("" ::"r"(v210));
    }
    *(_DWORD*)(v14 + 1000) = 0;
    *(float*)(v14 + 992) = v207;
    *(_QWORD*)(v14 + 1008) = LODWORD(v199) | ((unsigned __int64)v200 << 32);
    *(_QWORD*)(v14 + 1016) = v201;
    *(_DWORD*)(v14 + 996) = v209;
    *(_DWORD*)(v14 + 1004) = v210;
    {
      v211 = *(_QWORD*)(a3 + 32);
      __asm__ volatile("" ::"r"(v211));
    }
    {
      v212 = *(_QWORD*)(v211 + 32);
      __asm__ volatile("" ::"r"(v212));
    }
    *(_QWORD*)(v14 + 1032) = *(_QWORD*)(v211 + 40);
    *(_QWORD*)(v14 + 1024) = v212;
  }
  {
    v213 = *(_DWORD*)(a3 + 256);
    __asm__ volatile("" ::"r"(v213));
  }
  {
    v214 = *(_DWORD*)(a3 + 260);
    __asm__ volatile("" ::"r"(v214));
  }
  *(_QWORD*)(v14 + 1040) = *(_QWORD*)(a3 + 248);
  *(_DWORD*)(v14 + 1048) = v213;
  *(_DWORD*)(v14 + 1052) = v214;
  {
    v215 = *(_DWORD*)(a3 + 244);
    __asm__ volatile("" ::"r"(v215));
  }
  {
    v216 = *(_DWORD*)(a3 + 264);
    __asm__ volatile("" ::"r"(v216));
  }
  {
    v217 = *(_DWORD*)(*(_QWORD*)(a3 + 24) + 464LL);
    __asm__ volatile("" ::"r"(v217));
  }
  *(_DWORD*)(v14 + 1068) = 0;
  *(_DWORD*)(v14 + 1056) = v215;
  *(_DWORD*)(v14 + 1064) = v216;
  *(_DWORD*)(v14 + 1060) = v217;
  v218 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 40) + 16LL))(
      *(_QWORD*)(a2 + 40)),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v218 + 40LL))(v218),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v219 = (__int64 (**)(__int64))GameData_212e7a8[0],
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 1120) =
      (*(__int64 (**)(__int64))GameData_212e7a8[0])(*(_QWORD*)(v5 + 256) + 8LL),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v124 = COERCE_AS(__typeof__(v124),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v125 = COERCE_AS(__typeof__(v125),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v128 = COERCE_AS(__typeof__(v128),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v132 = COERCE_AS(__typeof__(v132),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v220 = *(_QWORD*)(a2 + 48);
    __asm__ volatile("" ::"r"(v220));
  }
  if (v220 != 0) {
    v221 = (*(__int64 (**)(__int64))(*(_QWORD*)v220 + 16LL))(v220),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v221 + 40LL))(v221),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1152) =
        ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  {
    v222 = *(_QWORD*)(a2 + 56);
    __asm__ volatile("" ::"r"(v222));
  }
  if (v222 != 0) {
    v223 = (*(__int64 (**)(__int64))(*(_QWORD*)v222 + 16LL))(v222),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v223 + 40LL))(v223),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1160) =
        ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  {
    v224 = *(_QWORD*)(a2 + 64);
    __asm__ volatile("" ::"r"(v224));
  }
  if (v224 != 0) {
    v225 = (*(__int64 (**)(__int64))(*(_QWORD*)v224 + 16LL))(v224),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v225 + 40LL))(v225),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1168) =
        ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  {
    v226 = *(_QWORD*)(a2 + 72);
    __asm__ volatile("" ::"r"(v226));
  }
  if (v226 != 0) {
    v227 = (*(__int64 (**)(__int64))(*(_QWORD*)v226 + 16LL))(v226),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v227 + 40LL))(v227),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1176) =
        ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  *(_QWORD*)(v14 + 1136) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v181)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a3 + 80),
      (unsigned int)a1[34]),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v124 = COERCE_AS(__typeof__(v124),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v125 = COERCE_AS(__typeof__(v125),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v128 = COERCE_AS(__typeof__(v128),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v132 = COERCE_AS(__typeof__(v132),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 1144) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v181)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a3 + 96),
      (unsigned int)a1[34]),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v124 = COERCE_AS(__typeof__(v124),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v125 = COERCE_AS(__typeof__(v125),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v128 = COERCE_AS(__typeof__(v128),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v132 = COERCE_AS(__typeof__(v132),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 1128) = 0;
  {
    v228 = *(_QWORD*)(a2 + 96);
    __asm__ volatile("" ::"r"(v228));
  }
  if (v228 != 0) {
    v229 = (*(__int64 (**)(__int64))(*(_QWORD*)v228 + 16LL))(v228),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v229 + 40LL))(v229),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1184) = (*v219)(*(_QWORD*)(v5 + 256) + 8LL);
  }
  {
    v230 = *(_QWORD*)(a2 + 104);
    __asm__ volatile("" ::"r"(v230));
  }
  if (v230 != 0) {
    v231 = (*(__int64 (**)(__int64))(*(_QWORD*)v230 + 16LL))(v230),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)v231 + 40LL))(v231),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_QWORD*)(v14 + 1192) =
        ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  {
    v232 = *(_QWORD*)(a3 + 32);
    __asm__ volatile("" ::"r"(v232));
  }
  if (v232 != 0) {
    *(_QWORD*)(v14 + 1200) = ((__int64 (*)(__int64, _QWORD))*v219)(
        *(_QWORD*)(v5 + 256) + 8LL, *(unsigned int*)(v232 + 8)),
                     v123 = COERCE_AS(__typeof__(v123),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v124 = COERCE_AS(__typeof__(v124),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v125 = COERCE_AS(__typeof__(v125),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v127 = COERCE_AS(__typeof__(v127),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v128 = COERCE_AS(__typeof__(v128),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                     v132 = COERCE_AS(__typeof__(v132),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v233 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 128) + 16LL))(
      *(_QWORD*)(a2 + 128)),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v233 + 40LL))(v233),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 1208) =
      ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v124 = COERCE_AS(__typeof__(v124),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v125 = COERCE_AS(__typeof__(v125),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v128 = COERCE_AS(__typeof__(v128),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v132 = COERCE_AS(__typeof__(v132),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  v234 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 136) + 16LL))(
      *(_QWORD*)(a2 + 136)),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v234 + 40LL))(v234),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v14 + 1216) =
      ((__int64 (*)(__int64))*v181)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL),
                   v123 = COERCE_AS(__typeof__(v123),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v124 = COERCE_AS(__typeof__(v124),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v125 = COERCE_AS(__typeof__(v125),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v127 = COERCE_AS(__typeof__(v127),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                   v128 = COERCE_AS(__typeof__(v128),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                   v132 = COERCE_AS(__typeof__(v132),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v235 = a1[118];
    __asm__ volatile("" ::"r"(v235));
  }
  v9 = v235 < -1;
  v236 = ((_BYTE)v235 + 1) & 1;
  if (v9) {
    v236 = -v236;
  }
  a1[118] = v236;
  {
    v237 = *(_QWORD*)&a1[2 * v236 + 114];
    __asm__ volatile("" ::"r"(v237));
  }
  v238 = (*(__int64 (**)(__int64))(*(_QWORD*)v237 + 56LL))(v237),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  {
    v239 = *(_QWORD*)&v4[2 * (int)a1[104]];
    __asm__ volatile("" ::"r"(v239));
  }
  v240 = (*(__int64 (**)(__int64))(*(_QWORD*)v239 + 56LL))(v239),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  memcpy(v238, v240, 0x4C8u),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_DWORD*)(v238 + 1080) = *(_DWORD*)(a3 + 360);
  *(_DWORD*)(v238 + 1084) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v239 + 64LL))(v239),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v3", "=w"));
  return (*(__int64 (**)(__int64))(*(_QWORD*)v237 + 64LL))(v237);
}

__int64 gfx_flow_b68c90(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  int* v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int128 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  _DWORD* v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int128 v29;
  int v30;
  float v31;
  float v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _DWORD* v43;
  __int64 v44;
  float v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int128 v49;
  __int128 v50;
  __int128 v52;
  __int128 v53;
  int v54;
  __int64 v55;
  __int128 v56;
  struct {
    float32x4_t v57;
    char gap80_[8];
    unsigned __int64 v58;
  } v57_;

  v3 = *(_QWORD*)a1;
  v5 = *(_BYTE**)(a2 + 8);
  v4 = *(_BYTE**)(a2 + 16);
  v6 = *(int**)(v3 + 16616);
  if (v6 == nullptr) {
    v6 = *(int**)(v3 + 16632);
  }
  v7 = *v6;
  v8 = v6[1];
  v9 = *(_DWORD*)(a1 + 104);
  v10 = v9 < -1;
  v54 = v7;
  v11 = ((_BYTE)v9 + 1) & 1;
  if (v10) {
    v11 = -v11;
  }
  *(_DWORD*)(a1 + 104) = v11;
  v12 = 320;
  if (v5[272] != 0) {
    v12 = 256;
  }
  v57_.v57 = *(float32x4_t*)&v5[v12];
  *(float*)&v13 = task_649cd0(v3, &v57_.v57);
  v56 = v13;
  v14 = 120;
  if (v5[90] != 0) {
    v14 = 89;
  }
  if ((v5[v14] & 1) != 0) {
    v15 = 408;
    if (v5[376] != 0) {
      v15 = 372;
    }
    v57_.v58 = (unsigned __int64)*(unsigned int*)&v5[v15] << 32;
  }
  else {
    v57_.v58 = 0;
  }
  v16 = *(_QWORD*)a1;
  v17 = 568;
  if (v5[536] != 0) {
    v17 = 532;
  }
  v18 = *(float*)&v5[v17];
  if (v5[616] != 0) {
    v19 = 612;
  }
  else {
    v19 = 648;
  }
  *(float*)&v20 = v18 + -0x1.0000000000000p-1f;
  v21 = *(float*)&v5[v19] + -0x1.0000000000000p-1f;
  if (v5[696] != 0) {
    v22 = 692;
  }
  else {
    v22 = 728;
  }
  v23 = 808;
  v24 = &v5[v22];
  if (v5[776] != 0) {
    v23 = 772;
  }
  v25 = &v5[v23];
  if (v5[456] != 0) {
    v26 = 452;
  }
  else {
    v26 = 488;
  }
  v27 = *(float*)&v5[v26];
  DWORD2(v20) = *(_DWORD*)v24;
  v28 = 240;
  if (v4[192] != 0) {
    v28 = 176;
  }
  *((float*)&v20 + 1) = -v21;
  DWORDn(v20, sizeof(v20) / 4 - 1) = *(_DWORD*)v25;
  v53 = v20;
  v57_.v57 = *(float32x4_t*)&v4[v28];
  *(float*)&v29 = task_649cd0(v16, &v57_.v57);
  v30 = *(_DWORD*)(a1 + 104);
  v52 = v29;
  v31 = (float)v8;
  v32 = (float)v54;
  v10 = v30 < -1;
  v33 = ((_BYTE)v30 + 1) & 1;
  if (v10) {
    v33 = -v33;
  }
  v34 = 328;
  if (v4[296] != 0) {
    v34 = 292;
  }
  v35 = *(_DWORD*)&v4[v34];
  v36 = 408;
  if (v4[376] != 0) {
    v36 = 372;
  }
  v37 = *(_DWORD*)&v4[v36];
  if (v4[456] != 0) {
    v38 = 452;
  }
  else {
    v38 = 488;
  }
  v39 = *(_DWORD*)&v4[v38];
  v40 = 532;
  if (v4[536] == 0) {
    v40 = 568;
  }
  {
    __typeof__(v41) z_ = (__typeof__(v41)){0};
    LODWORD(z_) = *(_DWORD*)&v4[v40];
    v41 = z_;
  }
  if (v4[616] != 0) {
    v42 = 612;
  }
  else {
    v42 = 648;
  }
  v43 = &v4[v42];
  if (v4[696] != 0) {
    v44 = 692;
  }
  else {
    v44 = 728;
  }
  v45 = *(float*)&v4[v44];
  DWORDn(v41, sizeof(v41) / 4 - 1) = *(_DWORD*)v43;
  *(_DWORD*)(a1 + 104) = v33;
  v46 = *(_QWORD*)(a1 + 8LL * v33 + 88);
  v55 = v41;
  v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 56LL))(v46);
  *(float*)(v47 + 32) = v32;
  *(float*)(v47 + 36) = v31;
  *(_DWORD*)(v47 + 88) = v37;
  *(_DWORD*)(v47 + 92) = v39;
  v48 = v57_.v58;
  *(_QWORD*)&v49 = v56;
  *(_QWORD*)(v47 + 64) = 0x3F8000003F800000LL;
  *((_QWORD*)&v49 + 1) = v48 | DWORD2(v56);
  *(_OWORD*)v47 = v49;
  *(_OWORD*)(v47 + 16) = v53;
  *(float*)(v47 + 40) = 0x1.0000000000000p+0f / v32;
  *(float*)(v47 + 44) = 0x1.0000000000000p+0f / v31;
  v50 = v52;
  DWORDn(v50, sizeof(v50) / 4 - 1) = 0;
  *(float*)(v47 + 80) = v27 * 0x1.1df46a0000000p-6f;
  *(_DWORD*)(v47 + 84) = v35;
  *(_OWORD*)(v47 + 48) = v50;
  *(_QWORD*)(v47 + 72) = v55;
  *(float*)(v47 + 96) =
      (float)((float)((float)(v32 / v31) + -0x1.0000000000000p+0f) * v45) +
      0x1.0000000000000p+0f;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 64LL))(v46);
}

#pragma GCC visibility pop
