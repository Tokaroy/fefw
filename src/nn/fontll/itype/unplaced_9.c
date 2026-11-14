#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ScaleFuncCall_plt(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_432e00();

__int64 memset_plt(void* this_, void*, int, unsigned __int64);

__int64 nn_fontll_itype_432db0();

__int64 nn_fontll_itype_432de0();

__int64 nn_fontll_itype_432df0();

__int64 nn_fontll_itype_432e10();

__int64 nn_fontll_itype_432e50();

__int64 setjmp_plt(_QWORD);

__int64 varmul_64_plt(_QWORD, _QWORD, _QWORD);

extern __int64 SdkData_e880d8;

__int64 nn_fontll_itype_432c00(__int64 a1, unsigned __int8* a2,
                               unsigned __int64 a3, unsigned __int64 a4);

__int64 FSS_calloc_plt(__int64, unsigned int);

__int64 FSS_free_plt(__int64, __int64);

__int64 FixSqrt_plt(__int64);

__int64 FsScratchSpace_release_plt(__int64, __int64, __int64);

__int64 fs_cff_args_41e120(__int64, __int64, unsigned int, signed int,
                           unsigned int*);

__int64 nn_fontll_itype_421940(__int64, int, int, _DWORD*);

__int64 nn_fontll_itype_421b40(__int64, int, int, __int64);

__int64 nn_fontll_itype_421c60(__int64, int, int, int, int, int, int, __int64);

__int64 resetCIDdicts_plt(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 ttf_read_buf_plt(__int64, __int64, unsigned int, unsigned int, __int64);

__int64 ttf_read_plt(__int64, __int64, unsigned int, unsigned int);

__int64 unplaced_421e90(__int64, _DWORD*, __int64);

__int64 vardiv_64_plt(__int64, int, char);

__int64 varmul_64_plt_alt1(int, int, char);

extern __int16 SdkData_c3c358;

extern unsigned __int8 SdkData_c3c3dc[224];

__int64 nn_fontll_itype_41efe0(__int64 a1, __int64 a2, unsigned __int8* a3,
                               int a4, __int64 a5);

unsigned __int8* nn_fontll_itype_453be0(__int64 a1, unsigned __int16* a2);

__int64 nn_fontll_itype_41efe0(__int64 a1, __int64 a2, unsigned __int8* a3,
                               int a4, __int64 a5)
{
  __int64 v5;
  _WORD* v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned int v14;
  __int16* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  bool v25;
  int v26;
  __int64 v27;
  int v30;
  int v31;
  int v32;
  int v33;
  __int16* v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  __int16* v41;
  int v42;
  int v43;
  int v44;
  __int64 result;
  int v46;
  unsigned int v47;
  __int16* v48;
  __int64 v49;
  __int64 v51;
  int v52;
  int v53;
  bool v54;
  __int64 v55;
  int v56;
  int v57;
  __int16* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  int v66;
  bool v67;
  int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  unsigned __int16* v80;
  unsigned int v81;
  int v82;
  signed int v83;
  unsigned int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  __int64 v94;
  __int16* v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  int v103;
  int v104;
  int v105;
  int v106;
  bool v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  __int16* v112;
  int v113;
  int v114;
  int v115;
  int v116;
  __int64 v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int16* v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  unsigned int v132;
  __int16* v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  __int16* v142;
  int v143;
  __int64 v144;
  int v145;
  __int64 v146;
  int v147;
  __int64 v148;
  int v149;
  __int16* v150;
  int v151;
  int v152;
  __int64 v153;
  int v154;
  __int64 v155;
  int v156;
  int v157;
  __int64 v158;
  __int64 v159;
  int v160;
  char* v161;
  char* v162;
  __int64 v163;
  unsigned int v164;
  __int64 v165;
  unsigned __int8* v166;
  unsigned __int8* v167;
  int v168;
  int v169;
  char* v170;
  __int64 v171;
  __int64 v172;
  unsigned __int8* v173;
  int v174;
  int v175;
  unsigned __int8* v176;
  __int64 v177;
  unsigned int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  __int64 v184;
  __int64 v185;
  int v186;
  int v187;
  int v188;
  unsigned int v189;
  int v190;
  int v191;
  unsigned int v192;
  int v193;
  unsigned int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  __int16* v199;
  __int64 v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  unsigned int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  unsigned int v216;
  int v217;
  int v218;
  unsigned int v219;
  unsigned int v220;
  int v221;
  unsigned int v222;
  unsigned int v223;
  int v224;
  unsigned int v225;
  unsigned int v226;
  unsigned int v227;
  int v228;
  bool v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  unsigned int v239;
  int v240;
  int v241;
  int v242;
  unsigned int v243;
  int v244;
  unsigned int v245;
  int v246;
  int v247;
  int v248;
  unsigned int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  __int64 v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  __int64 v266;
  int v267;
  int v268;
  int v269;
  unsigned int v270;
  int v271;
  int v272;
  unsigned int v273;
  unsigned int v274;
  int v275;
  unsigned int v276;
  unsigned int v277;
  int v278;
  unsigned int v279;
  unsigned int v280;
  int v281;
  unsigned int v282;
  __int64 v283;
  __int64 v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  _DWORD* v293;
  int* v294;
  int v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  int v301;
  int v302;
  int v303;
  int v304;
  __int64 v305;
  _DWORD* v306;
  int* v307;
  int v308;
  int v309;
  int v310;
  int v311;
  __int64 v312;
  __int64 v313;
  int v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  int v319;
  __int64 v320;
  __int64 v321;
  int v322;
  __int64 v323;
  int v324;
  int v325;
  int v326;
  __int64 v327;
  int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int16* v332;
  __int64 v333;
  int v334;
  int v335;
  unsigned int v336;
  unsigned int v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  int v343;
  unsigned __int8* v345;
  int v346;
  unsigned int v347;
  int v348;
  int v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  int v354;
  unsigned __int8* v356;
  unsigned int v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  _WORD* v367;
  __int16* v368;
  unsigned __int64 v369;
  unsigned __int64 v370;
  unsigned __int64 v371;
  int v372;
  int v373;
  __int64 v375;
  _QWORD v376[2];
  _QWORD v377[22];
  struct {
    unsigned __int64 v378;
    unsigned __int64 v379;
    unsigned __int64 v380;
    unsigned __int64 v381;
    unsigned __int64 v382;
    unsigned __int64 v383;
    __int64 v384;
    int v385;
  } v378_;

  {
    v5 = *(_QWORD*)(a1 + 56);
    __asm__ volatile("" ::"r"(v5));
  }
  v378_.v385 = 0;
  v378_.v383 = 0;
  v378_.v384 = 0;
  {
    v6 = *(_WORD**)(a2 + 264);
    __asm__ volatile("" ::"r"(v6));
  }
  v378_.v381 = 0;
  v378_.v382 = 0;
  v378_.v379 = 0;
  v378_.v380 = 0;
  {
    v8 = *(_DWORD*)(a5 + 208);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v7 = *(_DWORD*)(a5 + 212);
    __asm__ volatile("" ::"r"(v7));
  }
  v378_.v378 = 0;
  {
    v9 = *(_QWORD*)(*(_QWORD*)(v5 + 40) + 16LL);
    __asm__ volatile("" ::"r"(v9));
  }
  *v6 = *(_WORD*)(v9 + 516);
  v6[1] = *(_WORD*)(v9 + 514);
  if (a4 < 1) {
    return 0;
  }
  {
    v10 = &a3[a4];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = a3;
  v12 = a5 + 12;
  v14 = 0;
  v369 = 0;
  v370 = 0;
  v371 = 0;
  v366 = a5 + 40;
  v367 = v6;
  v15 = &SdkData_c3c358;
  v375 = a5 + 12;
  v368 = (__int16*)(a5 + 16);
  v363 = a5 - 4;
  v364 = a5 + 8;
  v365 = a5 + 240;
LABEL_3:
  {
    v16 = *(int*)(a5 + 204);
    __asm__ volatile("" ::"r"(v16));
  }
  v17 = 0;
  v18 = v11;
  v19 = 0xFFFFFFFF00000000LL * v16;
  v20 = v16 - 2;
  {
    v21 = *(_DWORD*)(a5 + 204);
    __asm__ volatile("" ::"r"(v21));
  }
  while (1) {
    {
      v24 = *v11++;
      __asm__ volatile("" ::"r"(v24));
    }
    v23 = v24;
    v25 = v24 == 28;
    if (v24 < 0x1C) {
      break;
    }
    if (v25) {
      v11 = v18 + 3;
      v22 = __rev16(*(unsigned __int16*)(v18 + 1)) << 16;
    }
    else {
      if (v23 < 0x20) {
        break;
      }
      if (v23 > 0xF6) {
        if (v23 > 0xFA) {
          if (v23 == 255) {
            v11 = v18 + 5;
            v22 = __builtin_bswap32((unsigned int)(*(_DWORD*)(v18 + 1)));
          }
          else {
            v11 = v18 + 2;
            {
              v22 = -90963968 - ((v23 << 24) | (v18[1] << 16));
              __asm__ volatile("" ::"r"(v22));
            }
          }
        }
        else {
          v11 = v18 + 2;
          {
            v22 = ((v18[1] << 16) | (v23 << 24)) + 158072832;
            __asm__ volatile("" ::"r"(v22));
          }
        }
      }
      else {
        v22 = (v23 << 16) - 9109504;
      }
    }
    *(_DWORD*)(v12 + 4 * v16 + 4 * v17++) = v22;
    v19 -= 0x100000000LL;
    ++v20;
    v18 = v11;
    if (v11 > v10) {
      return 456;
    }
  }
  v26 = v16 + v17;
  *(_DWORD*)(a5 + 204) = v16 + v17;
  v27 = v16 + v17;
  switch (v23) {
  case 1u:
  case 0x12u:
    if (*(_DWORD*)(a5 + 216) != 0 || (v26 & 1) == 0) {
      v138 = 0;
    }
    else {
      *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
      *(_DWORD*)(a5 + 216) = 1;
      v138 = -1;
    }
    *(_DWORD*)(a5 + 204) = 0;
    *(_DWORD*)(a5 + 228) += (v138 + v21 + (int)v17) / 2;
    goto LABEL_220;
  case 3u:
  case 0x17u:
    if (*(_DWORD*)(a5 + 216) != 0 || (v26 & 1) == 0) {
      v137 = 0;
    }
    else {
      *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
      *(_DWORD*)(a5 + 216) = 1;
      v137 = -1;
    }
    *(_DWORD*)(a5 + 204) = 0;
    *(_DWORD*)(a5 + 232) += (v137 + v21 + (int)v17) / 2;
    goto LABEL_220;
  case 4u:
    v48 = v15;
    v49 = a2;
    if (*(_DWORD*)(a5 + 216) == 0 && v16 + v17 == 2) {
      *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
      *(_DWORD*)(a5 + 216) = 1;
      v51 = 1;
    }
    else {
      v51 = 0;
    }
    v148 = a1;
    {
      v149 = *(__int16*)(v12 + 4 * v51 + 2);
      __asm__ volatile("" ::"r"(v149));
    }
    goto LABEL_194;
  case 5u:
    v360 = a2;
    v61 = 0;
    v62 = -(__int64)v19 >> 32;
    while (v61 < v62) {
      v63 = a5 + 4 * v61;
      v61 += 2;
      v8 += *(__int16*)(v63 + 14);
      v7 += *(__int16*)(v63 + 18);
      result = nn_fontll_itype_421b40(a1, v8, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    goto LABEL_164;
  case 6u:
    v360 = a2;
    v52 = 0;
    while (v52 < v26) {
      v53 = v52 << 31 >> 31;
      v54 = (v52 & 1) == 0;
      v55 = v375 + 4LL * v52;
      if ((v52 & 1) != 0) {
        ++v52;
      }
      else {
        v52 |= 1u;
      }
      {
        v56 = *(__int16*)(v55 + 2);
        __asm__ volatile("" ::"r"(v56));
      }
      v7 += v53 & v56;
      if (v54) {
        v57 = v56;
      }
      else {
        v57 = 0;
      }
      v8 += v57;
      result = nn_fontll_itype_421b40(a1, v8, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    goto LABEL_164;
  case 7u:
    v360 = a2;
    v105 = 0;
    while (v105 < v26) {
      v106 = v105 << 31 >> 31;
      v107 = (v105 & 1) == 0;
      v108 = v375 + 4LL * v105;
      if ((v105 & 1) != 0) {
        ++v105;
      }
      else {
        v105 |= 1u;
      }
      {
        v109 = *(__int16*)(v108 + 2);
        __asm__ volatile("" ::"r"(v109));
      }
      v110 = v106 & v109;
      if (v107) {
        v111 = v109;
      }
      else {
        v111 = 0;
      }
      v7 += v111;
      v8 += v110;
      result = nn_fontll_itype_421b40(a1, v8, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    goto LABEL_164;
  case 8u:
    if (v27 < 1) {
      goto LABEL_160;
    }
    v112 = v368;
    v362 = a2;
    v113 = 0;
    do {
      {
        v14 = *(v112 - 1) + v8;
        __asm__ volatile("" ::"r"(v14));
      }
      {
        v114 = v112[1] + v7;
        __asm__ volatile("" ::"r"(v114));
      }
      {
        v115 = v112[3] + v14;
        __asm__ volatile("" ::"r"(v115));
      }
      {
        v116 = v112[5] + v114;
        __asm__ volatile("" ::"r"(v116));
      }
      {
        v8 = v112[7] + v115;
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v7 = v112[9] + v116;
        __asm__ volatile("" ::"r"(v7));
      }
      result = nn_fontll_itype_421c60(a1, v14, v114, v115, v116, v8, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
      v112 += 12;
      v113 += 6;
    } while (v113 < v26);
    a2 = v362;
    v12 = v375;
    goto LABEL_159;
  case 0xAu:
    v376[0] = 0;
    v360 = a2;
    v68 = v21 + v17 - 1;
    {
      v69 = *(_DWORD*)(v12 + 4LL * v68);
      __asm__ volatile("" ::"r"(v69));
    }
    *(_DWORD*)(a5 + 204) = v68;
    *(_DWORD*)(a5 + 208) = v8;
    *(_DWORD*)(a5 + 212) = v7;
    {
      v70 = *((_DWORD*)v367 + 38) + *(int*)(a2 + 272) + *((_DWORD*)v367 + 44);
      __asm__ volatile("" ::"r"(v70));
    }
    ttf_read_buf_plt(a1, a2, v70, 3u, (__int64)v376);
    {
      result = *(unsigned int*)(a1 + 72);
      __asm__ volatile("" ::"r"(result));
    }
    if ((_DWORD)result != 0) {
      return result;
    }
    v71 = __rev16(LOWORD(v376[0]));
    if (v71 >= 0x846C) {
      v72 = 0x8000;
    }
    else {
      v72 = 1131;
    }
    if (v71 < 0x4D8) {
      v72 = 107;
    }
    v73 = v72 + (v69 >> 16);
    if ((int)v71 < v73) {
      *(_DWORD*)(a1 + 72) = 460;
      return 460;
    }
    {
      v74 = BYTE2(v376[0]);
      __asm__ volatile("" ::"r"(v74));
    }
    ttf_read_buf_plt(a1, v360, v70 + v73 * BYTE2(v376[0]) + 3, 8u,
                     (__int64)v376);
    {
      result = *(unsigned int*)(a1 + 72);
      __asm__ volatile("" ::"r"(result));
    }
    if ((_DWORD)result != 0) {
      return result;
    }
    if ((_DWORD)v74 != 0) {
      if ((unsigned int)v74 >= 8) {
        v170 = (char*)&v375 + 6;
        v171 = 0;
        do {
          v171 -= 8;
          v170 += 8;
        } while (-(__int64)((unsigned __int8)v74 & 0xF8) != v171);
        v75 = -v171;
        v77 = bswap32(*(_DWORD*)(v170 - 2));
        v76 = bswap32(*(_DWORD*)&v170[v74 - 2]);
      }
      else {
        v75 = 0;
        v76 = 0;
        v77 = 0;
      }
      v172 = v74 & 7;
      if ((v74 & 7) != 0) {
        v173 = (unsigned __int8*)v376 + v75;
        do {
          --v172;
          {
            v77 = *v173 | (v77 << 8);
            __asm__ volatile("" ::"r"(v77));
          }
          {
            v174 = v173[v74];
            __asm__ volatile("" ::"r"(v174));
          }
          ++v173;
          v76 = v174 | (v76 << 8);
        } while (v172 != 0);
      }
    }
    else {
      v77 = 0;
      v76 = 0;
    }
    v175 = v76 - v77;
    v176 = (unsigned __int8*)ttf_read_plt(
        a1, v360, v70 + v74 + v74 * v71 + v77 + 2, v76 - v77);
    if (v176 == nullptr) {
      return *(unsigned int*)(a1 + 72);
    }
    v177 = (__int64)v176;
    v178 = nn_fontll_itype_41efe0(a1, v360, v176, v175, a5);
    FSS_free_plt(a1, v177);
    if (v178 != 0) {
      return v178;
    }
    {
      v8 = *(_DWORD*)(a5 + 208);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v7 = *(_DWORD*)(a5 + 212);
      __asm__ volatile("" ::"r"(v7));
    }
  LABEL_217:
    a2 = v360;
  LABEL_218:
    v12 = v375;
    goto LABEL_219;
  case 0xBu:
    goto LABEL_306;
  case 0xCu:
    v11 = v18 + 2;
    switch (v18[1]) {
    case 3u:
      v64 = v16 + v17 - 1;
      v65 = v21 + v17 - 2;
      *(_DWORD*)(a5 + 204) = v64;
      {
        v66 = *(_DWORD*)(v12 + 4LL * v64);
        __asm__ volatile("" ::"r"(v66));
      }
      *(_DWORD*)(a5 + 204) = v65;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v65);
        __asm__ volatile("" ::"r"(v14));
      }
      v67 = v14 == 0 || v66 == 0;
      goto LABEL_258;
    case 4u:
      v64 = v16 + v17 - 1;
      v65 = v21 + v17 - 2;
      *(_DWORD*)(a5 + 204) = v64;
      {
        v252 = *(_DWORD*)(v12 + 4LL * v64);
        __asm__ volatile("" ::"r"(v252));
      }
      *(_DWORD*)(a5 + 204) = v65;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v65);
        __asm__ volatile("" ::"r"(v14));
      }
      v67 = (v14 | v252) == 0;
    LABEL_258:
      v211 = !v67;
      goto LABEL_268;
    case 5u:
      v207 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v207;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v207);
        __asm__ volatile("" ::"r"(v14));
      }
      v208 = v14 == 0;
      goto LABEL_278;
    case 9u:
      v250 = v16 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v250;
      {
        v251 = *(_DWORD*)(v12 + 4LL * v250);
        __asm__ volatile("" ::"r"(v251));
      }
      *(_DWORD*)(a5 + 204) = v26;
      if (v251 >= 0) {
        v14 = v251;
      }
      else {
        v14 = -v251;
      }
      *(_DWORD*)(v12 + 4LL * v250) = v14;
      goto LABEL_220;
    case 0xAu:
      v209 = v21 + v17;
      v64 = v209 - 1;
      v65 = v209 - 2;
      *(_DWORD*)(a5 + 204) = v64;
      {
        v210 = *(_DWORD*)(v12 + 4LL * v64);
        __asm__ volatile("" ::"r"(v210));
      }
      *(_DWORD*)(a5 + 204) = v65;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v65);
        __asm__ volatile("" ::"r"(v14));
      }
      v211 = v14 + v210;
      goto LABEL_268;
    case 0xBu:
      v235 = v21 + v17 - 1;
      v236 = v16 + v17 - 2;
      *(_DWORD*)(a5 + 204) = v235;
      {
        v248 = *(_DWORD*)(v12 + 4LL * v235);
        __asm__ volatile("" ::"r"(v248));
      }
      *(_DWORD*)(a5 + 204) = v236;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v236);
        __asm__ volatile("" ::"r"(v14));
      }
      v239 = v14 - v248;
      goto LABEL_250;
    case 0xCu:
      v199 = v15;
      v200 = a2;
      v253 = v21 + v17 - 1;
      v254 = v16 + v17 - 2;
      *(_DWORD*)(a5 + 204) = v253;
      {
        v255 = *(_DWORD*)(v12 + 4LL * v253);
        __asm__ volatile("" ::"r"(v255));
      }
      *(_DWORD*)(a5 + 204) = v254;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v254);
        __asm__ volatile("" ::"r"(v14));
      }
      v203 = vardiv_64_plt(v14, v255, 16);
      goto LABEL_264;
    case 0xEu:
      v207 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v207;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v207);
        __asm__ volatile("" ::"r"(v14));
      }
      v208 = -v14;
      goto LABEL_278;
    case 0xFu:
      v259 = v21 + v17;
      v64 = v259 - 1;
      v65 = v259 - 2;
      *(_DWORD*)(a5 + 204) = v64;
      {
        v260 = *(_DWORD*)(v12 + 4LL * v64);
        __asm__ volatile("" ::"r"(v260));
      }
      *(_DWORD*)(a5 + 204) = v65;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v65);
        __asm__ volatile("" ::"r"(v14));
      }
      v211 = v14 == v260;
    LABEL_268:
      *(_DWORD*)(a5 + 204) = v64;
      *(_DWORD*)(v12 + 4LL * v65) = v211;
      goto LABEL_220;
    case 0x12u:
      *(_DWORD*)(a5 + 204) = v16 + v17 - 1;
      goto LABEL_220;
    case 0x14u:
      v204 = v16 + v17 - 1;
      v205 = v16 - 2 + v17;
      *(_DWORD*)(a5 + 204) = v204;
      {
        v206 = *(__int16*)(v12 + 4LL * v204 + 2);
        __asm__ volatile("" ::"r"(v206));
      }
      *(_DWORD*)(a5 + 204) = v205;
      if (v206 <= 0x1F) {
        *(_DWORD*)(v365 + 4LL * v206) = *(_DWORD*)(v12 + 4LL * v205);
      }
      goto LABEL_220;
    case 0x15u:
      v207 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v207;
      {
        v249 = *(__int16*)(v12 + 4LL * v207 + 2);
        __asm__ volatile("" ::"r"(v249));
      }
      if (v249 > 0x1F) {
        v208 = 0;
      }
      else {
        v208 = *(_DWORD*)(v365 + 4LL * v249);
        __asm__ volatile("" ::"r"(v208));
      }
    LABEL_278:
      *(_DWORD*)(a5 + 204) = v26;
      *(_DWORD*)(v12 + 4LL * v207) = v208;
      goto LABEL_220;
    case 0x16u:
      v232 = v16 + v17;
      v233 = v21 + v17;
      --v232;
      v234 = v233 - 2;
      v235 = v233 - 3;
      v236 = v233 - 4;
      *(_DWORD*)(a5 + 204) = v232;
      {
        v237 = *(_DWORD*)(v12 + 4LL * v232);
        __asm__ volatile("" ::"r"(v237));
      }
      *(_DWORD*)(a5 + 204) = v234;
      {
        v238 = *(_DWORD*)(v12 + 4LL * v234);
        __asm__ volatile("" ::"r"(v238));
      }
      *(_DWORD*)(a5 + 204) = v235;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v235);
        __asm__ volatile("" ::"r"(v14));
      }
      *(_DWORD*)(a5 + 204) = v236;
      if (v238 <= v237) {
        v239 = v14;
      }
      else {
        v239 = *(_DWORD*)(v12 + 4LL * v236);
        __asm__ volatile("" ::"r"(v239));
      }
    LABEL_250:
      *(_DWORD*)(a5 + 204) = v235;
      *(_DWORD*)(v12 + 4LL * v236) = v239;
      goto LABEL_220;
    case 0x18u:
      v199 = v15;
      v200 = a2;
      v201 = v21 + v17;
      *(_DWORD*)(a5 + 204) = v201 - 1;
      {
        v202 = *(_DWORD*)(v12 + 4LL * (v201 - 1));
        __asm__ volatile("" ::"r"(v202));
      }
      *(_DWORD*)(a5 + 204) = v201 - 2;
      v203 = varmul_64_plt_alt1(v14, v202, 16);
      goto LABEL_264;
    case 0x1Au:
      v199 = v15;
      v200 = a2;
      v256 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v256;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v256);
        __asm__ volatile("" ::"r"(v14));
      }
      v203 = FixSqrt_plt(v14);
    LABEL_264:
      {
        v257 = *(int*)(a5 + 204);
        __asm__ volatile("" ::"r"(v257));
      }
      v12 = v375;
      a2 = v200;
      v15 = v199;
      *(_DWORD*)(a5 + 204) = v257 + 1;
      *(_DWORD*)(v12 + 4 * v257) = v203;
      goto LABEL_220;
    case 0x1Bu:
      v258 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v258;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v258);
        __asm__ volatile("" ::"r"(v14));
      }
      *(_DWORD*)(a5 + 204) = v26;
      *(_DWORD*)(v12 + 4LL * v258) = v14;
      goto LABEL_273;
    case 0x1Cu:
      v263 = v21 + v17;
      v264 = v263 - 1;
      v263 -= 2;
      *(_DWORD*)(a5 + 204) = v264;
      {
        v265 = *(_DWORD*)(v12 + 4LL * v264);
        __asm__ volatile("" ::"r"(v265));
      }
      *(_DWORD*)(a5 + 204) = v263;
      {
        v14 = *(_DWORD*)(v12 + 4LL * v263);
        __asm__ volatile("" ::"r"(v14));
      }
      *(_DWORD*)(a5 + 204) = v264;
      *(_DWORD*)(v12 + 4LL * v263) = v265;
    LABEL_273:
      {
        v266 = *(int*)(a5 + 204);
        __asm__ volatile("" ::"r"(v266));
      }
      *(_DWORD*)(a5 + 204) = v266 + 1;
      *(_DWORD*)(v12 + 4 * v266) = v14;
      goto LABEL_220;
    case 0x1Du:
      v261 = v21 + v17 - 1;
      *(_DWORD*)(a5 + 204) = v261;
      {
        v14 = *(__int16*)(v12 + 4LL * v261 + 2);
        __asm__ volatile("" ::"r"(v14));
      }
      if ((v14 & 0x80000000) == 0 && (int)v14 < v26) {
        {
          v262 = *(_DWORD*)(v12 + 4LL * (v21 - v14 + (unsigned int)v17));
          __asm__ volatile("" ::"r"(v262));
        }
        *(_DWORD*)(a5 + 204) = v26;
        *(_DWORD*)(v12 + 4LL * v261) = v262;
      }
      goto LABEL_220;
    case 0x1Eu:
      v179 = v16 + v17 - 1;
      memset(&v377[14], 0, 64);
      *(_DWORD*)(a5 + 204) = v179;
      v180 = v21 + v17 - 2;
      memset(&v377[8], 0, 48);
      {
        v181 = *(__int16*)(v12 + 4LL * v179 + 2);
        __asm__ volatile("" ::"r"(v181));
      }
      *(_DWORD*)(a5 + 204) = v180;
      {
        v182 = *(_DWORD*)(v12 + 4LL * v180);
        __asm__ volatile("" ::"r"(v182));
      }
      v183 = v182 >> 16;
      memset(v377, 0, 64);
      v376[0] = 0;
      v376[1] = 0;
      if (v182 >> 16 >= 1 && v183 < v26) {
        if ((unsigned int)v183 >= 8) {
          v283 = a2;
          v284 = 0;
          v285 = v16 - 3 + v17;
          v286 = v16 - 4 + v17;
          v287 = v21 - 6 + v17;
          v288 = v21 - 7 + v17;
          v289 = v21 - 8 + v17;
          v290 = v21 - 9 + v17;
          v291 = v21 - 5 + v17;
          v292 = v16 - 10 + v17;
          v293 = v377;
          v294 = (int*)(v363 + 4LL * v20);
          do {
            *(_DWORD*)(a5 + 204) = v285 + v284;
            {
              v295 = v294[3];
              __asm__ volatile("" ::"r"(v295));
            }
            *(_DWORD*)(a5 + 204) = v286 + v284;
            {
              v296 = v294[2];
              __asm__ volatile("" ::"r"(v296));
            }
            *(v293 - 4) = v295;
            *(v293 - 3) = v296;
            *(_DWORD*)(a5 + 204) = v291 + v284;
            {
              v297 = v294[1];
              __asm__ volatile("" ::"r"(v297));
            }
            *(_DWORD*)(a5 + 204) = v287 + v284;
            {
              v298 = *v294;
              __asm__ volatile("" ::"r"(v298));
            }
            *(v293 - 2) = v297;
            *(v293 - 1) = v298;
            *(_DWORD*)(a5 + 204) = v288 + v284;
            {
              v299 = *(v294 - 1);
              __asm__ volatile("" ::"r"(v299));
            }
            *(_DWORD*)(a5 + 204) = v289 + v284;
            {
              v300 = *(v294 - 2);
              __asm__ volatile("" ::"r"(v300));
            }
            *(_DWORD*)v293 = v299;
            v293[1] = v300;
            v301 = v290 + v284;
            v302 = v292 + v284;
            v284 -= 8;
            *(_DWORD*)(a5 + 204) = v301;
            {
              v303 = *(v294 - 3);
              __asm__ volatile("" ::"r"(v303));
            }
            *(_DWORD*)(a5 + 204) = v302;
            {
              v304 = *(v294 - 4);
              __asm__ volatile("" ::"r"(v304));
            }
            v294 -= 8;
            v293[2] = v303;
            v293[3] = v304;
            v293 += 8;
          } while (-(__int64)(v183 & 0x7FFFFFF8) != v284);
          v185 = v284 + v20;
          v184 = -v284;
          a2 = v283;
        }
        else {
          v184 = 0;
          v185 = v180;
        }
        v305 = BYTE2(v182) & 7;
        if ((v182 & 0x70000) != 0) {
          v306 = (_DWORD*)v376 + v184;
          v307 = (int*)(v364 + 4 * v185);
          v308 = v185 - 1;
          do {
            *(_DWORD*)(a5 + 204) = v308--;
            --v305;
            {
              v309 = *v307--;
              __asm__ volatile("" ::"r"(v309));
            }
            *(_DWORD*)v306++ = v309;
          } while (v305 != 0);
        }
        if ((unsigned int)v183 >= 8) {
          v310 = 0;
          do {
            v311 = v181 + v310;
            {
              v312 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v312));
            }
            v310 += 8;
            *(_DWORD*)(a5 + 204) = v312 + 1;
            *(_DWORD*)(v12 + 4 * v312) = *((_DWORD*)v376 + v311 % v183);
            {
              v313 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v313));
            }
            {
              v314 = *((_DWORD*)v376 + (v311 + 1) % v183);
              __asm__ volatile("" ::"r"(v314));
            }
            *(_DWORD*)(a5 + 204) = v313 + 1;
            *(_DWORD*)(v12 + 4 * v313) = v314;
            {
              v315 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v315));
            }
            *(_DWORD*)(a5 + 204) = v315 + 1;
            *(_DWORD*)(v12 + 4 * v315) = *((_DWORD*)v376 + (v311 + 2) % v183);
            {
              v316 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v316));
            }
            {
              v317 = *((_DWORD*)v376 + (v311 + 3) % v183);
              __asm__ volatile("" ::"r"(v317));
            }
            *(_DWORD*)(a5 + 204) = v316 + 1;
            *(_DWORD*)(v12 + 4 * v316) = v317;
            {
              v318 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v318));
            }
            {
              v319 = *((_DWORD*)v376 + (v311 + 4) % v183);
              __asm__ volatile("" ::"r"(v319));
            }
            *(_DWORD*)(a5 + 204) = v318 + 1;
            *(_DWORD*)(v12 + 4 * v318) = v319;
            {
              v320 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v320));
            }
            *(_DWORD*)(a5 + 204) = v320 + 1;
            *(_DWORD*)(v12 + 4 * v320) = *((_DWORD*)v376 + (v311 + 5) % v183);
            {
              v321 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v321));
            }
            {
              v322 = *((_DWORD*)v376 + (v311 + 6) % v183);
              __asm__ volatile("" ::"r"(v322));
            }
            *(_DWORD*)(a5 + 204) = v321 + 1;
            *(_DWORD*)(v12 + 4 * v321) = v322;
            {
              v323 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v323));
            }
            {
              v324 = *((_DWORD*)v376 + (v311 + 7) % v183);
              __asm__ volatile("" ::"r"(v324));
            }
            *(_DWORD*)(a5 + 204) = v323 + 1;
            *(_DWORD*)(v12 + 4 * v323) = v324;
          } while ((v183 & 0x7FFFFFF8) != v310);
        }
        else {
          v310 = 0;
        }
        v325 = HIWORD(v182) & 7;
        if (v325 != 0) {
          v326 = v310 + v181;
          do {
            {
              v327 = *(int*)(a5 + 204);
              __asm__ volatile("" ::"r"(v327));
            }
            --v325;
            *(_DWORD*)(a5 + 204) = v327 + 1;
            v328 = v326 % v183;
            ++v326;
            *(_DWORD*)(v12 + 4 * v327) = *((_DWORD*)v376 + v328);
          } while (v325 != 0);
        }
      }
      goto LABEL_220;
    case 0x22u: {
      v240 = *(__int16*)(a5 + 18);
      __asm__ volatile("" ::"r"(v240));
    }
      {
        v241 = *(__int16*)(a5 + 26);
        __asm__ volatile("" ::"r"(v241));
      }
      v48 = v15;
      v49 = a2;
      {
        v242 = *(__int16*)(a5 + 14) + v8;
        __asm__ volatile("" ::"r"(v242));
      }
      v378_.v378 = __PAIR64__(v7, v8);
      v378_.v379 = __PAIR64__(v7, v242);
      v243 = v240 + v242;
      {
        v244 = *(__int16*)(a5 + 22) + v7;
        __asm__ volatile("" ::"r"(v244));
      }
      v378_.v380 = __PAIR64__(v244, v243);
      v245 = v241 + v243;
      {
        v246 = *(__int16*)(a5 + 30);
        __asm__ volatile("" ::"r"(v246));
      }
      v378_.v381 = __PAIR64__(v244, v245);
      LODWORD(v378_.v382) = v246 + v245;
      DWORDn(v378_.v382, sizeof(v378_.v382) / 4 - 1) = v244;
      {
        v196 = *(__int16*)(a5 + 34) + v246 + v245;
        __asm__ volatile("" ::"r"(v196));
      }
      {
        v198 = *(__int16*)(a5 + 38);
        __asm__ volatile("" ::"r"(v198));
      }
      v378_.v383 = __PAIR64__(v7, v196);
      goto LABEL_247;
    case 0x23u: {
      v267 = *(__int16*)(a5 + 22);
      __asm__ volatile("" ::"r"(v267));
    }
      v48 = v15;
      v49 = a2;
      {
        v268 = *(__int16*)(a5 + 14) + v8;
        __asm__ volatile("" ::"r"(v268));
      }
      {
        v269 = *(__int16*)(a5 + 18) + v7;
        __asm__ volatile("" ::"r"(v269));
      }
      v378_.v378 = __PAIR64__(v7, v8);
      v378_.v379 = __PAIR64__(v269, v268);
      v270 = v267 + v268;
      {
        v271 = *(__int16*)(a5 + 26) + v269;
        __asm__ volatile("" ::"r"(v271));
      }
      {
        v272 = *(__int16*)(a5 + 30);
        __asm__ volatile("" ::"r"(v272));
      }
      v378_.v380 = __PAIR64__(v271, v270);
      v273 = v272 + v270;
      {
        v274 = *(__int16*)(a5 + 34) + v271;
        __asm__ volatile("" ::"r"(v274));
      }
      {
        v275 = *(__int16*)(a5 + 38);
        __asm__ volatile("" ::"r"(v275));
      }
      v378_.v381 = __PAIR64__(v274, v273);
      v276 = v275 + v273;
      {
        v277 = *(__int16*)(a5 + 42) + v274;
        __asm__ volatile("" ::"r"(v277));
      }
      {
        v278 = *(__int16*)(a5 + 46);
        __asm__ volatile("" ::"r"(v278));
      }
      v378_.v382 = __PAIR64__(v277, v276);
      v279 = v278 + v276;
      {
        v280 = *(__int16*)(a5 + 50) + v277;
        __asm__ volatile("" ::"r"(v280));
      }
      {
        v281 = *(__int16*)(a5 + 54);
        __asm__ volatile("" ::"r"(v281));
      }
      v378_.v383 = __PAIR64__(v280, v279);
      {
        v282 = *(__int16*)(a5 + 58) + v280;
        __asm__ volatile("" ::"r"(v282));
      }
      LODWORD(v378_.v384) = v281 + v279;
      DWORDn(v378_.v384, sizeof(v378_.v384) / 4 - 1) = v282;
      {
        v247 = *(__int16*)(a5 + 62);
        __asm__ volatile("" ::"r"(v247));
      }
      goto LABEL_275;
    case 0x24u: {
      v186 = *(__int16*)(a5 + 22);
      __asm__ volatile("" ::"r"(v186));
    }
      v48 = v15;
      v49 = a2;
      {
        v187 = *(__int16*)(a5 + 14) + v8;
        __asm__ volatile("" ::"r"(v187));
      }
      {
        v188 = *(__int16*)(a5 + 18) + v7;
        __asm__ volatile("" ::"r"(v188));
      }
      v378_.v378 = __PAIR64__(v7, v8);
      v378_.v379 = __PAIR64__(v188, v187);
      v189 = v186 + v187;
      {
        v190 = *(__int16*)(a5 + 26) + v188;
        __asm__ volatile("" ::"r"(v190));
      }
      {
        v191 = *(__int16*)(a5 + 30);
        __asm__ volatile("" ::"r"(v191));
      }
      v378_.v380 = __PAIR64__(v190, v189);
      v192 = v191 + v189;
      {
        v193 = *(__int16*)(a5 + 34);
        __asm__ volatile("" ::"r"(v193));
      }
      v378_.v381 = __PAIR64__(v190, v192);
      v194 = v193 + v192;
      {
        v195 = *(__int16*)(a5 + 38);
        __asm__ volatile("" ::"r"(v195));
      }
      v378_.v382 = __PAIR64__(v190, v194);
      v196 = v195 + v194;
      {
        v197 = *(__int16*)(a5 + 42);
        __asm__ volatile("" ::"r"(v197));
      }
      LODWORD(v378_.v383) = v196;
      DWORDn(v378_.v383, sizeof(v378_.v383) / 4 - 1) = v197 + v190;
      {
        v198 = *(__int16*)(a5 + 46);
        __asm__ volatile("" ::"r"(v198));
      }
    LABEL_247:
      LODWORD(v378_.v384) = v198 + v196;
      DWORDn(v378_.v384, sizeof(v378_.v384) / 4 - 1) = v7;
      break;
    case 0x25u: {
      v212 = *(__int16*)(a5 + 22);
      __asm__ volatile("" ::"r"(v212));
    }
      v48 = v15;
      v49 = a2;
      {
        v213 = *(__int16*)(a5 + 14) + v8;
        __asm__ volatile("" ::"r"(v213));
      }
      {
        v214 = *(__int16*)(a5 + 18) + v7;
        __asm__ volatile("" ::"r"(v214));
      }
      {
        v215 = *(__int16*)(a5 + 54);
        __asm__ volatile("" ::"r"(v215));
      }
      v378_.v378 = __PAIR64__(v7, v8);
      v378_.v379 = __PAIR64__(v214, v213);
      v216 = v212 + v213;
      {
        v217 = *(__int16*)(a5 + 26) + v214;
        __asm__ volatile("" ::"r"(v217));
      }
      {
        v218 = *(__int16*)(a5 + 30);
        __asm__ volatile("" ::"r"(v218));
      }
      v378_.v380 = __PAIR64__(v217, v216);
      v219 = v218 + v216;
      {
        v220 = *(__int16*)(a5 + 34) + v217;
        __asm__ volatile("" ::"r"(v220));
      }
      {
        v221 = *(__int16*)(a5 + 38);
        __asm__ volatile("" ::"r"(v221));
      }
      v378_.v381 = __PAIR64__(v220, v219);
      v222 = v221 + v219;
      {
        v223 = *(__int16*)(a5 + 42) + v220;
        __asm__ volatile("" ::"r"(v223));
      }
      {
        v224 = *(__int16*)(a5 + 46);
        __asm__ volatile("" ::"r"(v224));
      }
      v378_.v382 = __PAIR64__(v223, v222);
      v225 = v224 + v222;
      {
        v226 = *(__int16*)(a5 + 50) + v223;
        __asm__ volatile("" ::"r"(v226));
      }
      v227 = v225 - v8;
      v228 = v226 - v7;
      if ((int)(v225 - v8) < 0) {
        v227 = v8 - v225;
      }
      v378_.v383 = __PAIR64__(v226, v225);
      if (v228 < 0) {
        v228 = v7 - v226;
      }
      v229 = v227 > v228;
      if (v227 <= v228) {
        v230 = 0;
      }
      else {
        v230 = v215;
      }
      if (v229) {
        v231 = 0;
      }
      else {
        v231 = v215;
      }
      LODWORD(v378_.v384) = v230 + v225;
      DWORDn(v378_.v384, sizeof(v378_.v384) / 4 - 1) = v231 + v226;
      break;
    default:
      goto LABEL_220;
    }
    v247 = 50;
  LABEL_275:
    v378_.v385 = v247;
    result = unplaced_421e90(a1, &v378_.v378, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    v8 = v378_.v384;
    v7 = DWORDn(v378_.v384, sizeof(v378_.v384) / 4 - 1);
    goto LABEL_196;
  case 0xEu:
    v329 = v16 + v17;
    if (v329 == 1) {
      if (*(_DWORD*)(a5 + 216) == 0) {
        *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
        *(_DWORD*)(a5 + 216) = 1;
      }
    }
    else if (v329 > 3) {
      v330 = v329 - 5;
      if (v329 == 5) {
        LODWORD(v375) = *(__int16*)(v12 + 2);
        v331 = 1;
      }
      else {
        v331 = 0;
        LODWORD(v375) = 0;
      }
      *(_DWORD*)(a5 + 204) = 0;
      v332 = (__int16*)(v12 + 4 * v331);
      {
        v333 = *(_QWORD*)(a2 + 264);
        __asm__ volatile("" ::"r"(v333));
      }
      {
        v334 = v332[1];
        __asm__ volatile("" ::"r"(v334));
      }
      {
        v335 = v332[3];
        __asm__ volatile("" ::"r"(v335));
      }
      {
        v336 = v332[5];
        __asm__ volatile("" ::"r"(v336));
      }
      {
        v337 = v332[7];
        __asm__ volatile("" ::"r"(v337));
      }
      {
        v338 = *(_QWORD*)(v333 + 168);
        __asm__ volatile("" ::"r"(v338));
      }
      if (v338 != 0) {
        {
          v336 = v336 - 256 >= 0xFFFFFF20 ? SdkData_c3c3dc[v336 - 32] : 0;
          __asm__ volatile("" ::"r"(v336));
        }
        if (v336 != *(unsigned __int16*)(v338 + 2LL * v336)) {
          {
            v339 = *(__int16*)(v333 + 160);
            __asm__ volatile("" ::"r"(v339));
          }
          if (v339 < 1) {
            v336 = 0;
          }
          else {
            v340 = 0;
            while (v336 != *(unsigned __int16*)(v338 + 2 * v340)) {
              if (v339 == ++v340) {
                v336 = 0;
                goto LABEL_320;
              }
            }
            v336 = v340;
          }
        }
      }
    LABEL_320:
      v341 = a2;
      v342 = fs_cff_args_41e120(a1, a2, *(int*)(v333 + 136) + *(int*)(a2 + 272),
                                v336, (unsigned int*)v376);
      {
        v343 = v376[0];
        __asm__ volatile("" ::"r"(v343));
      }
      if (v342 == 0 || SLODWORD(v376[0]) < 1) {
        goto LABEL_325;
      }
      v345 = (unsigned __int8*)v342;
      if (*(_WORD*)(v333 + 56) != 0) {
        {
          v346 = v376[0];
          __asm__ volatile("" ::"r"(v346));
        }
        resetCIDdicts_plt(a1, v341, v333, v336);
        v343 = v346;
      }
      v347 = nn_fontll_itype_41efe0(a1, v341, v345, v343, a5);
      FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                 (__int64)v345);
      result = v347;
      if (v347 != 0) {
        goto LABEL_347;
      }
      {
        v348 = *(_DWORD*)(a5 + 236);
        __asm__ volatile("" ::"r"(v348));
      }
      {
        v349 = *(_DWORD*)(a5 + 216);
        __asm__ volatile("" ::"r"(v349));
      }
      *(_DWORD*)(a5 + 236) = 0;
      *(_DWORD*)(a5 + 212) = v335;
      *(_DWORD*)(a5 + 216) = 0;
      *(_DWORD*)(a5 + 208) = v334;
      *(_QWORD*)(a5 + 228) = 0;
      v372 = v349;
      v373 = v348;
      {
        v350 = *(_QWORD*)(v333 + 168);
        __asm__ volatile("" ::"r"(v350));
      }
      if (v350 != 0) {
        {
          v337 = v337 - 256 >= 0xFFFFFF20 ? SdkData_c3c3dc[v337 - 32] : 0;
          __asm__ volatile("" ::"r"(v337));
        }
        if (v337 != *(unsigned __int16*)(v350 + 2LL * v337)) {
          {
            v351 = *(__int16*)(v333 + 160);
            __asm__ volatile("" ::"r"(v351));
          }
          if (v351 < 1) {
          LABEL_338:
            v337 = 0;
          }
          else {
            v352 = 0;
            while (v337 != *(unsigned __int16*)(v350 + 2 * v352)) {
              if (v351 == ++v352) {
                goto LABEL_338;
              }
            }
            v337 = v352;
          }
        }
      }
      v353 = fs_cff_args_41e120(a1, v341,
                                *(int*)(v333 + 136) + *(int*)(v341 + 272), v337,
                                (unsigned int*)v376);
      {
        v354 = v376[0];
        __asm__ volatile("" ::"r"(v354));
      }
      if (v353 == 0 || SLODWORD(v376[0]) < 1) {
      LABEL_325:
        result = 0;
      }
      else {
        v356 = (unsigned __int8*)v353;
        if (*(_WORD*)(v333 + 56) != 0) {
          resetCIDdicts_plt(a1, v341, v333, v337);
        }
        v357 = nn_fontll_itype_41efe0(a1, v341, v356, v354, a5);
        *(_DWORD*)(a5 + 236) = v373;
        *(_DWORD*)(a5 + 216) = v372;
        FsScratchSpace_release_plt(*(_QWORD*)(a1 + 128) + 16792LL, a1,
                                   (__int64)v356);
        result = v357;
      }
    LABEL_347:
      if (v330 == 0) {
        *(_DWORD*)(a5 + 216) = 1;
        *(_DWORD*)(a5 + 236) = v375;
      }
      return result;
    }
  LABEL_306:
    *(_DWORD*)(a5 + 208) = v8;
    *(_DWORD*)(a5 + 212) = v7;
    return 0;
  case 0x13u: {
    v103 = *(_DWORD*)(a5 + 232);
    __asm__ volatile("" ::"r"(v103));
  }
    if (v27 != 0) {
      *(_DWORD*)(a5 + 204) = 0;
      v103 += v26 / 2;
      *(_DWORD*)(a5 + 232) = v103;
    }
    {
      v104 = *(_DWORD*)(a5 + 228);
      __asm__ volatile("" ::"r"(v104));
    }
    goto LABEL_136;
  case 0x14u: {
    v103 = *(_DWORD*)(a5 + 232);
    __asm__ volatile("" ::"r"(v103));
  }
    if (v27 != 0) {
      v103 += v26 / 2;
      *(_DWORD*)(a5 + 232) = v103;
    }
    {
      v104 = *(_DWORD*)(a5 + 228);
      __asm__ volatile("" ::"r"(v104));
    }
    *(_DWORD*)(a5 + 204) = 0;
  LABEL_136:
    v119 = v104 + v103;
    v120 = v119 + 7;
    v121 = v119 + 14;
    if (v120 >= 0) {
      v121 = v120;
    }
    v11 += v121 >> 3;
    goto LABEL_220;
  case 0x15u:
    v48 = v15;
    v49 = a2;
    if (*(_DWORD*)(a5 + 216) == 0 && v27 == 3) {
      *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
      *(_DWORD*)(a5 + 216) = 1;
      v118 = 1;
    }
    else {
      v118 = 0;
    }
    v159 = v12 + 4 * v118;
    v148 = a1;
    {
      v160 = *(__int16*)(v159 + 2);
      __asm__ volatile("" ::"r"(v160));
    }
    {
      v149 = *(__int16*)(v159 + 6);
      __asm__ volatile("" ::"r"(v149));
    }
    v8 += v160;
  LABEL_194:
    v7 += v149;
    goto LABEL_195;
  case 0x16u:
    v48 = v15;
    v49 = a2;
    if (*(_DWORD*)(a5 + 216) == 0 && v16 + v17 == 2) {
      *(_DWORD*)(a5 + 236) = *(__int16*)(a5 + 14);
      *(_DWORD*)(a5 + 216) = 1;
      v94 = 1;
    }
    else {
      v94 = 0;
    }
    v148 = a1;
    v8 += *(__int16*)(v12 + 4 * v94 + 2);
  LABEL_195:
    result = nn_fontll_itype_421940(v148, v8, v7, (_DWORD*)a5);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_196:
    *(_DWORD*)(a5 + 204) = 0;
    goto LABEL_207;
  case 0x18u:
    if (v27 < 3) {
      v102 = a2;
      v101 = 0;
    }
    else {
      v95 = v368;
      v361 = a2;
      v96 = 0;
      v97 = v21 - 2 + v17;
      do {
        {
          v14 = *(v95 - 1) + v8;
          __asm__ volatile("" ::"r"(v14));
        }
        {
          v98 = v95[1] + v7;
          __asm__ volatile("" ::"r"(v98));
        }
        {
          v99 = v95[3] + v14;
          __asm__ volatile("" ::"r"(v99));
        }
        {
          v100 = v95[5] + v98;
          __asm__ volatile("" ::"r"(v100));
        }
        {
          v8 = v95[7] + v99;
          __asm__ volatile("" ::"r"(v8));
        }
        {
          v7 = v95[9] + v100;
          __asm__ volatile("" ::"r"(v7));
        }
        result = nn_fontll_itype_421c60(a1, v14, v98, v99, v100, v8, v7, a5);
        if ((_DWORD)result != 0) {
          return result;
        }
        v95 += 12;
        v96 += 6;
      } while (v97 > v96);
      v101 = v96 & 0xFFFFFFFE;
      v102 = v361;
      v12 = v375;
    }
    v158 = v12 + 4 * v101;
    v8 += *(__int16*)(v158 + 2);
    v7 += *(__int16*)(v158 + 6);
    result = nn_fontll_itype_421b40(a1, v8, v7, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    *(_DWORD*)(a5 + 204) = 0;
    a2 = v102;
    goto LABEL_218;
  case 0x19u:
    v58 = v368;
    v360 = a2;
    v59 = 0;
    v60 = (__int64)(0xFFFFFFFA00000000LL - v19) >> 32;
    while (v59 < v60) {
      v59 += 2;
      v8 += *(v58 - 1);
      v7 += v58[1];
      result = nn_fontll_itype_421b40(a1, v8, v7, a5);
      v58 += 4;
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    {
      v14 = *(v58 - 1) + v8;
      __asm__ volatile("" ::"r"(v14));
    }
    {
      v139 = v58[1] + v7;
      __asm__ volatile("" ::"r"(v139));
    }
    {
      v140 = v58[3] + v14;
      __asm__ volatile("" ::"r"(v140));
    }
    {
      v141 = v58[5] + v139;
      __asm__ volatile("" ::"r"(v141));
    }
    {
      v8 = v58[7] + v140;
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v7 = v58[9] + v141;
      __asm__ volatile("" ::"r"(v7));
    }
    result = nn_fontll_itype_421c60(a1, v14, v139, v140, v141, v8, v7, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_164:
    *(_DWORD*)(a5 + 204) = 0;
    goto LABEL_217;
  case 0x1Au:
    v359 = a2;
    if ((v26 & 1) != 0) {
      {
        v91 = *(__int16*)(v12 + 2);
        __asm__ volatile("" ::"r"(v91));
      }
      v92 = 1;
    }
    else {
      v91 = 0;
      v92 = 0;
    }
    if ((int)v92 >= v26) {
      DWORDn(v370, sizeof(v370) / 4 - 1) = v91;
    }
    else {
      v150 = (__int16*)(v12 + 4LL * v92);
      v14 = v8 + v91;
      {
        v151 = v150[3];
        __asm__ volatile("" ::"r"(v151));
      }
      {
        v152 = v150[1] + v7;
        __asm__ volatile("" ::"r"(v152));
      }
      v8 += v151 + v91;
      DWORDn(v369, sizeof(v369) / 4 - 1) = v150[7];
      LODWORD(v370) = v150[1];
      LODWORD(v371) = v150[5];
      DWORDn(v371, sizeof(v371) / 4 - 1) = v151;
      v7 = v371 + v152 + DWORDn(v369, sizeof(v369) / 4 - 1);
      result = nn_fontll_itype_421c60(a1, v14, v152, v8, (int)v371 + v152,
                                      v151 + v14, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
      v153 = v92;
      if ((v92 | 4LL) < v27) {
        v154 = v92 | 4;
        v155 = v366 + 4 * v153;
        do {
          v14 = v8;
          v156 = v8;
          {
            v157 = *(__int16*)(v155 - 10) + v7;
            __asm__ volatile("" ::"r"(v157));
          }
          v8 += *(__int16*)(v155 - 6);
          DWORDn(v369, sizeof(v369) / 4 - 1) = *(__int16*)(v155 + 2);
          LODWORD(v370) = *(__int16*)(v155 - 10);
          LODWORD(v371) = *(__int16*)(v155 - 2);
          DWORDn(v371, sizeof(v371) / 4 - 1) = *(__int16*)(v155 - 6);
          v7 = v371 + v157 + DWORDn(v369, sizeof(v369) / 4 - 1);
          result = nn_fontll_itype_421c60(a1, v156, v157, v8, (int)v371 + v157,
                                          v8, v7, a5);
          if ((_DWORD)result != 0) {
            return result;
          }
          v155 += 16;
          v154 += 4;
        } while (v154 < v26);
      }
      v12 = v375;
      DWORDn(v370, sizeof(v370) / 4 - 1) = 0;
    }
    LODWORD(v369) = 0;
    goto LABEL_186;
  case 0x1Bu:
    v359 = a2;
    if ((v26 & 1) != 0) {
      {
        v46 = *(__int16*)(v12 + 2);
        __asm__ volatile("" ::"r"(v46));
      }
      v47 = 1;
    }
    else {
      v46 = 0;
      v47 = 0;
    }
    if ((int)v47 >= v26) {
      DWORDn(v369, sizeof(v369) / 4 - 1) = 0;
      LODWORD(v370) = v46;
      goto LABEL_186;
    }
    v142 = (__int16*)(v12 + 4LL * v47);
    v143 = v7 + v46;
    {
      v14 = v142[1] + v8;
      __asm__ volatile("" ::"r"(v14));
    }
    v7 += v142[5] + v46;
    DWORDn(v370, sizeof(v370) / 4 - 1) = v142[1];
    LODWORD(v371) = v142[5];
    DWORDn(v371, sizeof(v371) / 4 - 1) = v142[3];
    LODWORD(v369) = v142[7];
    v8 = v369 + v14 + DWORDn(v371, sizeof(v371) / 4 - 1);
    result = nn_fontll_itype_421c60(a1, v14, v143,
                                    v14 + DWORDn(v371, sizeof(v371) / 4 - 1),
                                    v7, v8, v7, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    v144 = v47;
    if ((v47 | 4LL) >= v27) {
    LABEL_172:
      v12 = v375;
      DWORDn(v369, sizeof(v369) / 4 - 1) = 0;
      LODWORD(v370) = 0;
    LABEL_186:
      a2 = v359;
      *(_DWORD*)(a5 + 204) = 0;
    LABEL_219:
      v15 = &SdkData_c3c358;
      goto LABEL_220;
    }
    v145 = v47 | 4;
    v146 = v366 + 4 * v144;
    while (1) {
      v147 = v7;
      {
        v14 = *(__int16*)(v146 - 10) + v8;
        __asm__ volatile("" ::"r"(v14));
      }
      v7 += *(__int16*)(v146 - 2);
      DWORDn(v370, sizeof(v370) / 4 - 1) = *(__int16*)(v146 - 10);
      LODWORD(v371) = *(__int16*)(v146 - 2);
      DWORDn(v371, sizeof(v371) / 4 - 1) = *(__int16*)(v146 - 6);
      LODWORD(v369) = *(__int16*)(v146 + 2);
      v8 = v369 + v14 + DWORDn(v371, sizeof(v371) / 4 - 1);
      result = nn_fontll_itype_421c60(a1, v14, v147,
                                      v14 + DWORDn(v371, sizeof(v371) / 4 - 1),
                                      v7, v8, v7, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
      v146 += 16;
      v145 += 4;
      if (v145 >= v26) {
        goto LABEL_172;
      }
    }
  case 0x1Du:
    v78 = v16 + v17 - 1;
    *(_DWORD*)(a5 + 204) = v78;
    {
      v79 = *(__int16*)(v12 + 4LL * v78 + 2);
      __asm__ volatile("" ::"r"(v79));
    }
    *(_DWORD*)(a5 + 208) = v8;
    *(_DWORD*)(a5 + 212) = v7;
    {
      v80 = *((unsigned __int16**)v367 + 3);
      __asm__ volatile("" ::"r"(v80));
    }
    v81 = __rev16(*v80);
    if (v81 >= 0x846C) {
      v82 = 0x8000;
    }
    else {
      v82 = 1131;
    }
    if (v81 < 0x4D8) {
      v82 = 107;
    }
    v83 = v82 + v79;
    if ((int)v81 < v83) {
      *(_DWORD*)(a1 + 72) = 460;
      return 460;
    }
    else {
      {
        v84 = *((unsigned __int8*)v80 + 2);
        __asm__ volatile("" ::"r"(v84));
      }
      if (*((_BYTE*)v80 + 2) != 0) {
        v85 = v83 * v84;
        v86 = v85;
        v87 = (int)(v84 + v85);
        if (v84 >= 8) {
          v161 = (char*)v80 + v87;
          v162 = (char*)v80 + v85;
          v163 = 0;
          do {
            v163 -= 8;
            v161 += 8;
            v162 += 8;
          } while (-(__int64)((unsigned __int8)v84 & 0xF8) != v163);
          {
            v164 = *(_DWORD*)(v162 - 1);
            __asm__ volatile("" ::"r"(v164));
          }
          v88 = -v163;
          v48 = v15;
          v90 = bswap32(v164);
          v89 = bswap32(*(_DWORD*)(v161 - 1));
        }
        else {
          v48 = v15;
          v88 = 0;
          v89 = 0;
          v90 = 0;
        }
        v165 = v84 & 7;
        if ((v84 & 7) != 0) {
          v166 = (unsigned __int8*)v80 + v88 + v87 + 3;
          v167 = (unsigned __int8*)v80 + v88 + v86 + 3;
          do {
            {
              v168 = *v167++;
              __asm__ volatile("" ::"r"(v168));
            }
            --v165;
            v90 = v168 | (v90 << 8);
            {
              v169 = *v166++;
              __asm__ volatile("" ::"r"(v169));
            }
            v89 = v169 | (v89 << 8);
          } while (v165 != 0);
        }
      }
      else {
        v48 = v15;
        v90 = 0;
        v89 = 0;
      }
      v49 = a2;
      result = nn_fontll_itype_41efe0(
          a1, a2, (unsigned __int8*)v80 + v84 + v84 * v81 + v90 + 2, v89 - v90,
          a5);
      if ((_DWORD)result == 0) {
        {
          v8 = *(_DWORD*)(a5 + 208);
          __asm__ volatile("" ::"r"(v8));
        }
        {
          v7 = *(_DWORD*)(a5 + 212);
          __asm__ volatile("" ::"r"(v7));
        }
      LABEL_207:
        v12 = v375;
        a2 = v49;
        v15 = v48;
        goto LABEL_220;
      }
    }
    return result;
  case 0x1Eu:
    if (v27 < 1) {
      goto LABEL_160;
    }
    v122 = v16 + v17;
    v358 = a2;
    v123 = 0;
    while (1) {
      v124 = v123 + 4;
      if (v123 + 4 <= 0) {
        v125 = -(-(v123 + 4) & 7);
      }
      else {
        v125 = (v123 + 4) & 7;
      }
      if (v125 != 0) {
        if (v125 == 4) {
          v126 = (__int16*)(v12 + 4LL * v123);
          v127 = 0;
          v128 = 0;
          {
            v129 = v126[1];
            __asm__ volatile("" ::"r"(v129));
          }
          {
            v130 = v126[3];
            __asm__ volatile("" ::"r"(v130));
          }
          {
            v131 = v126[5];
            __asm__ volatile("" ::"r"(v131));
          }
          {
            v132 = v126[7];
            __asm__ volatile("" ::"r"(v132));
          }
          if (v122 - v124 != 1) {
            goto LABEL_155;
          }
        }
        else {
          v131 = v371;
          v130 = DWORDn(v371, sizeof(v371) / 4 - 1);
          v129 = v370;
          v127 = DWORDn(v370, sizeof(v370) / 4 - 1);
          v124 = v123;
          v132 = v369;
          v128 = DWORDn(v369, sizeof(v369) / 4 - 1);
          if (v122 - v123 != 1) {
            goto LABEL_155;
          }
        }
      }
      else {
        v133 = (__int16*)(v12 + 4LL * v123);
        v132 = 0;
        v129 = 0;
        {
          v127 = v133[1];
          __asm__ volatile("" ::"r"(v127));
        }
        {
          v130 = v133[3];
          __asm__ volatile("" ::"r"(v130));
        }
        {
          v131 = v133[5];
          __asm__ volatile("" ::"r"(v131));
        }
        {
          v128 = v133[7];
          __asm__ volatile("" ::"r"(v128));
        }
        if (v122 - v124 != 1) {
          goto LABEL_155;
        }
      }
      if ((v26 & 0x80000007) == 1) {
        v123 = v124 + 1;
        {
          v132 = *(__int16*)(v12 + 4LL * v124 + 2);
          __asm__ volatile("" ::"r"(v132));
        }
      }
      else {
        if ((v26 & 0x80000003) != 1) {
        LABEL_155:
          v123 = v124;
          goto LABEL_156;
        }
        v123 = v124 + 1;
        {
          v128 = *(__int16*)(v12 + 4LL * v124 + 2);
          __asm__ volatile("" ::"r"(v128));
        }
      }
    LABEL_156:
      v14 = v127 + v8;
      v134 = v129 + v7;
      v370 = __PAIR64__(v127, v129);
      v371 = __PAIR64__(v130, v131);
      v135 = v129 + v7 + v131;
      v369 = __PAIR64__(v128, v132);
      v136 = v127 + v8;
      v8 += v132 + v127 + v130;
      v7 = v128 + v135;
      result = nn_fontll_itype_421c60(a1, v136, v134, v14 + v130, v135,
                                      v132 + v14 + v130, v128 + v135, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
      v12 = v375;
      if (v123 >= v26) {
        goto LABEL_158;
      }
    }
  case 0x1Fu:
    if (v27 < 1) {
      goto LABEL_160;
    }
    v30 = v16 + v17;
    v358 = a2;
    v31 = 0;
    break;
  default:
    goto LABEL_220;
  }
  while (1) {
    v32 = v31 + 4;
    if (v31 + 4 <= 0) {
      v33 = -(-(v31 + 4) & 7);
    }
    else {
      v33 = (v31 + 4) & 7;
    }
    if (v33 != 0) {
      if (v33 == 4) {
        v34 = (__int16*)(v12 + 4LL * v31);
        v35 = 0;
        v36 = 0;
        {
          v37 = v34[1];
          __asm__ volatile("" ::"r"(v37));
        }
        {
          v38 = v34[3];
          __asm__ volatile("" ::"r"(v38));
        }
        {
          v39 = v34[5];
          __asm__ volatile("" ::"r"(v39));
        }
        {
          v40 = v34[7];
          __asm__ volatile("" ::"r"(v40));
        }
        if (v30 - v32 != 1) {
          goto LABEL_45;
        }
      }
      else {
        v39 = v371;
        v38 = DWORDn(v371, sizeof(v371) / 4 - 1);
        v36 = v370;
        v37 = DWORDn(v370, sizeof(v370) / 4 - 1);
        v32 = v31;
        v35 = v369;
        v40 = DWORDn(v369, sizeof(v369) / 4 - 1);
        if (v30 - v31 != 1) {
          goto LABEL_45;
        }
      }
    }
    else {
      v41 = (__int16*)(v12 + 4LL * v31);
      v37 = 0;
      v40 = 0;
      {
        v36 = v41[1];
        __asm__ volatile("" ::"r"(v36));
      }
      {
        v38 = v41[3];
        __asm__ volatile("" ::"r"(v38));
      }
      {
        v39 = v41[5];
        __asm__ volatile("" ::"r"(v39));
      }
      {
        v35 = v41[7];
        __asm__ volatile("" ::"r"(v35));
      }
      if (v30 - v32 != 1) {
        goto LABEL_45;
      }
    }
    if ((v26 & 0x80000007) == 1) {
      v31 = v32 + 1;
      {
        v40 = *(__int16*)(v12 + 4LL * v32 + 2);
        __asm__ volatile("" ::"r"(v40));
      }
    }
    else {
      if ((v26 & 0x80000003) != 1) {
      LABEL_45:
        v31 = v32;
        goto LABEL_46;
      }
      v31 = v32 + 1;
      {
        v35 = *(__int16*)(v12 + 4LL * v32 + 2);
        __asm__ volatile("" ::"r"(v35));
      }
    }
  LABEL_46:
    v14 = v37 + v8;
    v42 = v36 + v7;
    v370 = __PAIR64__(v37, v36);
    v371 = __PAIR64__(v38, v39);
    v43 = v36 + v7 + v39;
    v369 = __PAIR64__(v40, v35);
    v44 = v37 + v8;
    v8 += v35 + v37 + v38;
    v7 = v40 + v43;
    result = nn_fontll_itype_421c60(a1, v44, v42, v14 + v38, v43,
                                    v35 + v14 + v38, v40 + v43, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    v12 = v375;
    if (v31 >= v26) {
    LABEL_158:
      a2 = v358;
    LABEL_159:
      v15 = &SdkData_c3c358;
    LABEL_160:
      *(_DWORD*)(a5 + 204) = 0;
    LABEL_220:
      if (v11 >= v10) {
        return 0;
      }
      goto LABEL_3;
    }
  }
}

unsigned __int8* nn_fontll_itype_453be0(__int64 a1, unsigned __int16* a2)
{
  unsigned __int8* result;
  unsigned int v5;
  unsigned int v6;
  _BYTE* v7;
  unsigned int v8;
  _BYTE* v9;
  __int64 v10;
  unsigned __int16* v11;
  _BYTE* v12;
  int v13;
  int v14;
  unsigned __int16* i;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;
  __int16 v19;
  __int16 v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned int v28;
  char v29;
  _BYTE* v30;
  _BYTE* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _BYTE* v35;
  char v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  unsigned __int8 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int8 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _BYTE* v49;
  char v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _BYTE* v56;
  char v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char v60;
  char* v61;
  _BYTE* v62;
  int v63;
  __int16 v64;
  unsigned __int8* v65;
  __int16 v66;
  int v67;
  int v68;
  unsigned int v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int8* v79;
  __int64 v80;
  unsigned __int8 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  char v84;
  __int64 v85;
  unsigned __int64 v86;
  _BYTE* v87;
  __int64 v88;
  unsigned __int8 v89;
  __int16 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int8 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int8* v97;
  __int64 v98;
  unsigned __int8 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  char v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int8* v105;
  __int64 v106;
  unsigned __int8 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  char v110;

  result = (unsigned __int8*)FSS_calloc_plt(a1, 0x89Au);
  if (result == nullptr) {
    return result;
  }
  {
    v5 = a2[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = a2[2];
    __asm__ volatile("" ::"r"(v6));
  }
  result[51] = 0;
  v7 = result + 51;
  v8 = __rev16(v5);
  result[153] = 0;
  v9 = result + 153;
  *result = 0;
  if (v8 == 0) {
    goto LABEL_254;
  }
  v10 = __rev16(v6);
  v11 = a2 + 3;
  v12 = result + 102;
  v13 = 0;
  v14 = 0;
  for (i = a2 + 3;; i += 6) {
    if (__rev16(*i) != 3 || __rev16(i[2]) != 1033) {
      goto LABEL_101;
    }
    {
      v16 = *((unsigned __int8*)i + 8);
      __asm__ volatile("" ::"r"(v16));
    }
    v17 = __rev16(i[3]);
    v18 = (unsigned __int64)&a2[128 *
                                (unsigned __int64)*((unsigned __int8*)i + 10)] +
          v10 + *((unsigned __int8*)i + 11);
    {
      v19 = *((unsigned __int8*)i + 9);
      __asm__ volatile("" ::"r"(v19));
    }
    v20 = (_WORD)v16 << 8;
    {
      v21 = *((unsigned __int8*)i + 9) | (v16 << 8);
      __asm__ volatile("" ::"r"(v21));
    }
    v22 = v21 >> 1;
    if (v17 > 2) {
      if (v17 == 3) {
        if (v21 < 0x64) {
          if (v21 < 2) {
            *v12 = 0;
            if (v13 == 0) {
              goto LABEL_4;
            }
            goto LABEL_102;
          }
        }
        else {
          result[152] = 1;
        }
        v31 = (_BYTE*)(v18 + 1);
        if (v22 <= 1) {
          v22 = 1;
        }
        if (v22 >= 0x31) {
          LOBYTE(v22) = 49;
        }
        if (v21 >= 0x10) {
          v32 = 0;
          v47 = (unsigned __int16)(v20 + v19) >> 1;
          if (v47 <= 1) {
            v47 = 1;
          }
          if (v47 >= 0x31) {
            LOBYTE(v47) = 49;
          }
          v48 = v47 & 0x38;
          do {
            {
              v49 = &v12[v32];
              __asm__ volatile("" ::"r"(v49));
            }
            v32 += 8;
            *v49 = *v31;
            v49[1] = v31[2];
            v49[2] = v31[4];
            v49[3] = v31[6];
            v49[4] = v31[8];
            v49[5] = v31[10];
            v49[6] = v31[12];
            {
              v50 = v31[14];
              __asm__ volatile("" ::"r"(v50));
            }
            v31 += 16;
            v49[7] = v50;
          } while (v48 != v32);
        }
        else {
          v32 = 0;
        }
        if ((v22 & 7) != 0) {
          v51 = (unsigned __int16)(v20 + v19) >> 1;
          if (v51 <= 1) {
            v51 = 1;
          }
          if (v51 >= 0x31) {
            LOBYTE(v51) = 49;
          }
          v52 = v51 & 7;
          do {
            {
              v53 = *v31;
              __asm__ volatile("" ::"r"(v53));
            }
            v31 += 2;
            --v52;
            v12[v32++] = v53;
          } while (v52 != 0);
        }
        v12[v32] = 0;
      }
      else if (v17 == 4) {
        if (v21 >= 0x64) {
          result[50] = 1;
          goto LABEL_34;
        }
        if (v21 >= 2) {
        LABEL_34:
          v27 = (unsigned __int8*)(v18 + 1);
          if (v22 <= 1) {
            v28 = 1;
          }
          else {
            v28 = v21 >> 1;
          }
          if (v28 >= 0x31) {
            v29 = 49;
          }
          else {
            v29 = v28;
          }
          if (v21 >= 0x10) {
            v26 = 0;
            v40 = (unsigned __int16)(v20 + v19) >> 1;
            if (v40 <= 1) {
              v40 = 1;
            }
            if (v40 >= 0x31) {
              LOBYTE(v40) = 49;
            }
            v41 = v40 & 0x38;
            do {
              {
                v42 = &result[v26 + 3];
                __asm__ volatile("" ::"r"(v42));
              }
              v26 += 8;
              *(v42 - 3) = *v27;
              *(v42 - 2) = v27[2];
              *(v42 - 1) = v27[4];
              *v42 = v27[6];
              v42[1] = v27[8];
              v42[2] = v27[10];
              v42[3] = v27[12];
              {
                v43 = v27[14];
                __asm__ volatile("" ::"r"(v43));
              }
              v27 += 16;
              v42[4] = v43;
            } while (v41 != v26);
          }
          else {
            v26 = 0;
          }
          if ((v29 & 7) != 0) {
            v44 = (unsigned __int16)(v20 + v19) >> 1;
            if (v44 <= 1) {
              v44 = 1;
            }
            if (v44 >= 0x31) {
              LOBYTE(v44) = 49;
            }
            v45 = v44 & 7;
            do {
              {
                v46 = *v27;
                __asm__ volatile("" ::"r"(v46));
              }
              v27 += 2;
              --v45;
              result[v26++] = v46;
            } while (v45 != 0);
          }
        }
        else {
          v26 = 0;
        }
        result[v26] = 0;
        {
          v13 = *result;
          __asm__ volatile("" ::"r"(v13));
        }
        if (*result == 0) {
          goto LABEL_4;
        }
        goto LABEL_102;
      }
    LABEL_101:
      if (v13 == 0) {
        goto LABEL_4;
      }
      goto LABEL_102;
    }
    if (v17 == 0) {
      break;
    }
    if (v17 != 1) {
      goto LABEL_101;
    }
    if (v21 < 0x64) {
      if (v21 < 2) {
        *v7 = 0;
        if (v13 == 0) {
          goto LABEL_4;
        }
        goto LABEL_102;
      }
    }
    else {
      result[101] = 1;
    }
    v24 = (_BYTE*)(v18 + 1);
    if (v22 <= 1) {
      v22 = 1;
    }
    if (v22 >= 0x31) {
      LOBYTE(v22) = 49;
    }
    if (v21 >= 0x10) {
      v25 = 0;
      v33 = (unsigned __int16)(v20 + v19) >> 1;
      if (v33 <= 1) {
        v33 = 1;
      }
      if (v33 >= 0x31) {
        LOBYTE(v33) = 49;
      }
      v34 = v33 & 0x38;
      do {
        {
          v35 = &v7[v25];
          __asm__ volatile("" ::"r"(v35));
        }
        v25 += 8;
        *v35 = *v24;
        v35[1] = v24[2];
        v35[2] = v24[4];
        v35[3] = v24[6];
        v35[4] = v24[8];
        v35[5] = v24[10];
        v35[6] = v24[12];
        {
          v36 = v24[14];
          __asm__ volatile("" ::"r"(v36));
        }
        v24 += 16;
        v35[7] = v36;
      } while (v34 != v25);
    }
    else {
      v25 = 0;
    }
    if ((v22 & 7) != 0) {
      v37 = (unsigned __int16)(v20 + v19) >> 1;
      if (v37 <= 1) {
        v37 = 1;
      }
      if (v37 >= 0x31) {
        LOBYTE(v37) = 49;
      }
      v38 = v37 & 7;
      do {
        {
          v39 = *v24;
          __asm__ volatile("" ::"r"(v39));
        }
        v24 += 2;
        --v38;
        v7[v25++] = v39;
      } while (v38 != 0);
    }
    v7[v25] = 0;
    if (v13 == 0) {
      goto LABEL_4;
    }
  LABEL_102:
    if (*v7 == 0) {
      goto LABEL_4;
    }
    if (*v9 != 0) {
      goto LABEL_122;
    }
    if (++v14 >= v8) {
      goto LABEL_122;
    }
  LABEL_5:;
  }
  if (v16 >= 0x10) {
    result[2201] = 1;
  }
  if (v21 >= 2) {
    v30 = (_BYTE*)(v18 + 1);
    if (v22 <= 1) {
      v22 = 1;
    }
    if (v22 >= 0x7FF) {
      LOBYTE(v22) = -1;
    }
    if (v21 >= 0x10) {
      v23 = 0;
      v54 = (unsigned __int16)(v20 + v19) >> 1;
      if (v54 <= 1) {
        v54 = 1;
      }
      if (v54 >= 0x7FF) {
        LOWORD(v54) = 2047;
      }
      v55 = v54 & 0x7F8;
      do {
        {
          v56 = &v9[v23];
          __asm__ volatile("" ::"r"(v56));
        }
        v23 += 8;
        *v56 = *v30;
        v56[1] = v30[2];
        v56[2] = v30[4];
        v56[3] = v30[6];
        v56[4] = v30[8];
        v56[5] = v30[10];
        v56[6] = v30[12];
        {
          v57 = v30[14];
          __asm__ volatile("" ::"r"(v57));
        }
        v30 += 16;
        v56[7] = v57;
      } while (v55 != v23);
    }
    else {
      v23 = 0;
    }
    if ((v22 & 7) != 0) {
      v58 = (unsigned __int16)(v20 + v19) >> 1;
      if (v58 <= 1) {
        v58 = 1;
      }
      if (v58 >= 0x7FF) {
        LOBYTE(v58) = -1;
      }
      v59 = v58 & 7;
      do {
        {
          v60 = *v30;
          __asm__ volatile("" ::"r"(v60));
        }
        v30 += 2;
        --v59;
        v9[v23++] = v60;
      } while (v59 != 0);
    }
  }
  else {
    v23 = 0;
  }
  v9[v23] = 0;
  if (v13 != 0) {
    goto LABEL_102;
  }
LABEL_4:
  if (++v14 < v8) {
    goto LABEL_5;
  }
  if (v13 != 0) {
  LABEL_122:
    if (*v7 != 0 && *v9 != 0) {
      goto LABEL_255;
    }
  }
  v61 = (char*)a2 + (unsigned int)v10;
  v62 = result + 102;
  v63 = 0;
  while (2) {
    if (__rev16(*v11) == 1 &&
        (*((unsigned __int8*)v11 + 5) | *((unsigned __int8*)v11 + 4)) == 0) {
      {
        v64 = *((unsigned __int8*)v11 + 9);
        __asm__ volatile("" ::"r"(v64));
      }
      v65 = (unsigned __int8*)&v61[256 * (unsigned __int64)*(
                                             (unsigned __int8*)v11 + 10) +
                                   *((unsigned __int8*)v11 + 11)];
      {
        v66 = *((unsigned __int8*)v11 + 8) << 8;
        __asm__ volatile("" ::"r"(v66));
      }
      v67 = (__int16)__builtin_bswap16((unsigned short)(v11[4]));
      v68 = __rev16(v11[3]);
      if (v68 <= 2) {
        if (v68 != 0) {
          if (v68 != 1) {
            goto LABEL_129;
          }
          if (v67 < 50) {
            if (v67 < 1) {
              *v7 = 0;
              goto LABEL_129;
            }
          }
          else {
            result[101] = 1;
          }
          if ((unsigned int)v67 <= 1) {
            v69 = 1;
          }
          else {
            v69 = v67;
          }
          if (v69 >= 0x31) {
            LOBYTE(v69) = 49;
          }
          if ((unsigned int)v67 >= 8) {
            v77 = 0;
            if (((v66 + v64) & 0xFFFE) != 0) {
              v78 = (unsigned __int16)(v66 + v64);
            }
            else {
              v78 = 1;
            }
            v79 = result + 58;
            if (v78 >= 0x31) {
              LOBYTE(v78) = 49;
            }
            v80 = -(__int64)(v78 & 0x38);
            do {
              v77 -= 8;
              *(v79 - 7) = *v65;
              *(v79 - 6) = v65[1];
              *(v79 - 5) = v65[2];
              *(v79 - 4) = v65[3];
              *(v79 - 3) = v65[4];
              *(v79 - 2) = v65[5];
              *(v79 - 1) = v65[6];
              {
                v81 = v65[7];
                __asm__ volatile("" ::"r"(v81));
              }
              v65 += 8;
              *v79 = v81;
              v79 += 8;
            } while (v80 != v77);
            v70 = -v77;
            if ((v69 & 7) == 0) {
              goto LABEL_198;
            }
          }
          else {
            v70 = 0;
            if ((v69 & 7) == 0) {
            LABEL_198:
              v7[v70] = 0;
              goto LABEL_129;
            }
          }
          LOWORD(v82) = v66 + v64;
          if ((v82 & 0xFFFE) != 0) {
            v82 = (unsigned __int16)v82;
          }
          else {
            v82 = 1;
          }
          if (v82 >= 0x31) {
            LOBYTE(v82) = 49;
          }
          v83 = v82 & 7;
          do {
            {
              v84 = *v65++;
              __asm__ volatile("" ::"r"(v84));
            }
            --v83;
            v7[v70++] = v84;
          } while (v83 != 0);
          goto LABEL_198;
        }
        if (v67 < 2048) {
          if (v67 < 1) {
            v74 = 0;
          LABEL_251:
            v9[v74] = 0;
            goto LABEL_129;
          }
        }
        else {
          result[2201] = 1;
        }
        if ((unsigned int)v67 <= 1) {
          v73 = 1;
        }
        else {
          v73 = v67;
        }
        if (v73 >= 0x7FF) {
          LOBYTE(v73) = -1;
        }
        if ((unsigned int)v67 >= 8) {
          v95 = 0;
          if (((v66 + v64) & 0xFFFE) != 0) {
            v96 = (unsigned __int16)(v66 + v64);
          }
          else {
            v96 = 1;
          }
          v97 = result + 160;
          if (v96 >= 0x7FF) {
            LOWORD(v96) = 2047;
          }
          v98 = -(__int64)(v96 & 0x7F8);
          do {
            v95 -= 8;
            *(v97 - 7) = *v65;
            *(v97 - 6) = v65[1];
            *(v97 - 5) = v65[2];
            *(v97 - 4) = v65[3];
            *(v97 - 3) = v65[4];
            *(v97 - 2) = v65[5];
            *(v97 - 1) = v65[6];
            {
              v99 = v65[7];
              __asm__ volatile("" ::"r"(v99));
            }
            v65 += 8;
            *v97 = v99;
            v97 += 8;
          } while (v98 != v95);
          v74 = -v95;
          if ((v73 & 7) == 0) {
            goto LABEL_251;
          }
        }
        else {
          v74 = 0;
          if ((v73 & 7) == 0) {
            goto LABEL_251;
          }
        }
        LOWORD(v100) = v66 + v64;
        if ((v100 & 0xFFFE) != 0) {
          v100 = (unsigned __int16)v100;
        }
        else {
          v100 = 1;
        }
        if (v100 >= 0x7FF) {
          LOBYTE(v100) = -1;
        }
        v101 = v100 & 7;
        do {
          {
            v102 = *v65++;
            __asm__ volatile("" ::"r"(v102));
          }
          --v101;
          v9[v74++] = v102;
        } while (v101 != 0);
        goto LABEL_251;
      }
      if (v68 != 3) {
        if (v68 != 4) {
          goto LABEL_129;
        }
        if (v67 < 50) {
          if (v67 < 1) {
            v72 = 0;
          LABEL_249:
            result[v72] = 0;
            {
              v13 = *result;
              __asm__ volatile("" ::"r"(v13));
            }
            goto LABEL_129;
          }
        }
        else {
          result[50] = 1;
        }
        if ((unsigned int)v67 <= 1) {
          v71 = 1;
        }
        else {
          v71 = v67;
        }
        if (v71 >= 0x31) {
          LOBYTE(v71) = 49;
        }
        if ((unsigned int)v67 >= 8) {
          v85 = 0;
          if (((v66 + v64) & 0xFFFE) != 0) {
            v86 = (unsigned __int16)(v66 + v64);
          }
          else {
            v86 = 1;
          }
          v87 = result + 3;
          if (v86 >= 0x31) {
            LOBYTE(v86) = 49;
          }
          v88 = -(__int64)(v86 & 0x38);
          do {
            v85 -= 8;
            *(v87 - 3) = *v65;
            *(v87 - 2) = v65[1];
            *(v87 - 1) = v65[2];
            *v87 = v65[3];
            v87[1] = v65[4];
            v87[2] = v65[5];
            v87[3] = v65[6];
            {
              v89 = v65[7];
              __asm__ volatile("" ::"r"(v89));
            }
            v65 += 8;
            v87[4] = v89;
            v87 += 8;
          } while (v88 != v85);
          v72 = -v85;
          if ((v71 & 7) == 0) {
            goto LABEL_249;
          }
        }
        else {
          v72 = 0;
          if ((v71 & 7) == 0) {
            goto LABEL_249;
          }
        }
        v90 = v66 + v64;
        v91 = (unsigned __int16)(v66 + v64);
        if ((v90 & 0xFFFE) != 0) {
          v92 = v91;
        }
        else {
          v92 = 1;
        }
        if (v92 >= 0x31) {
          LOBYTE(v92) = 49;
        }
        v93 = v92 & 7;
        do {
          {
            v94 = *v65++;
            __asm__ volatile("" ::"r"(v94));
          }
          --v93;
          result[v72++] = v94;
        } while (v93 != 0);
        goto LABEL_249;
      }
      if (v67 < 50) {
        if (v67 < 1) {
          *v62 = 0;
          goto LABEL_129;
        }
      }
      else {
        result[152] = 1;
      }
      if ((unsigned int)v67 <= 1) {
        v75 = 1;
      }
      else {
        v75 = v67;
      }
      if (v75 >= 0x31) {
        LOBYTE(v75) = 49;
      }
      if ((unsigned int)v67 >= 8) {
        v103 = 0;
        if (((v66 + v64) & 0xFFFE) != 0) {
          v104 = (unsigned __int16)(v66 + v64);
        }
        else {
          v104 = 1;
        }
        v105 = result + 109;
        if (v104 >= 0x31) {
          LOBYTE(v104) = 49;
        }
        v106 = -(__int64)(v104 & 0x38);
        do {
          v103 -= 8;
          *(v105 - 7) = *v65;
          *(v105 - 6) = v65[1];
          *(v105 - 5) = v65[2];
          *(v105 - 4) = v65[3];
          *(v105 - 3) = v65[4];
          *(v105 - 2) = v65[5];
          *(v105 - 1) = v65[6];
          {
            v107 = v65[7];
            __asm__ volatile("" ::"r"(v107));
          }
          v65 += 8;
          *v105 = v107;
          v105 += 8;
        } while (v106 != v103);
        v76 = -v103;
        if ((v75 & 7) == 0) {
          goto LABEL_246;
        }
      }
      else {
        v76 = 0;
        if ((v75 & 7) == 0) {
        LABEL_246:
          v62[v76] = 0;
          goto LABEL_129;
        }
      }
      LOWORD(v108) = v66 + v64;
      if ((v108 & 0xFFFE) != 0) {
        v108 = (unsigned __int16)v108;
      }
      else {
        v108 = 1;
      }
      if (v108 >= 0x31) {
        LOBYTE(v108) = 49;
      }
      v109 = v108 & 7;
      do {
        {
          v110 = *v65++;
          __asm__ volatile("" ::"r"(v110));
        }
        --v109;
        v62[v76++] = v110;
      } while (v109 != 0);
      goto LABEL_246;
    }
  LABEL_129:
    if (v13 != 0 && *v7 != 0) {
      if (*v9 != 0) {
        goto LABEL_255;
      }
      if (++v63 >= v8) {
        goto LABEL_255;
      }
    }
    else if (++v63 >= v8) {
      if (v13 == 0) {
      LABEL_254:
        result[8] = 68;
        *(_QWORD*)result = *(_QWORD*)"NOT FOUND";
      }
    LABEL_255:
      if (*v7 != 0) {
        if (*v9 != 0) {
          goto LABEL_257;
        }
      LABEL_260:
        result[161] = 68;
        *(_QWORD*)v9 = *(_QWORD*)"NOT FOUND";
      }
      else {
        result[59] = 68;
        *(_QWORD*)v7 = *(_QWORD*)"NOT FOUND";
        if (*v9 == 0) {
          goto LABEL_260;
        }
      }
    LABEL_257:
      *(_DWORD*)(a1 + 72) = 0;
      return result;
    }
    v11 += 6;
    continue;
  }
}

#pragma GCC visibility pop
