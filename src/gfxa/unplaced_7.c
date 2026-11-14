#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 (*GameData_1fcc6e0[])();
extern __int64 (*GameData_1fcc770[])();
extern __int64 (*GameData_1fcc800[])();
extern __int64 (*GameData_1fcc848[])();
extern __int64 (*GameData_1fcc8d8[])();
extern __int64 (*GameData_1fcc968[])();
extern __int64 (*GameData_1fcc9b0[])();
extern __int64 (*GameData_1fcca40[])();
extern __int64 (*GameData_1fccad0[])();
extern __int64 (*GameData_1fccb18[])();
extern __int64 (*GameData_1fccba8[])();
extern __int64 (*GameData_1fccc38[])();
extern __int64 (*GameData_1fccc80[])();
extern __int64 (*GameData_1fccd10[])();
extern __int64 (*GameData_1fccda0[])();
extern __int64 (*GameData_1fccde8[])();
extern __int64 (*GameData_1fcce78[])();
extern __int64 (*GameData_1fccf08[])();
extern __int64 (*GameData_1fccf50[])();
extern __int64 (*GameData_1fccfe0[])();
extern __int64 (*GameData_1fcd070[])();
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e550[26];
extern __int64* GameData_212e558[25];
extern __int64* GameData_212e560[24];
extern __int64* GameData_212e568[23];
extern __int64* GameData_212e598[17];
extern __int64* GameData_212e760[2];
extern __int64* GameData_212e8a0;
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void GaussianBlurSetting_Destructor(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a9fd80();
void __attribute__((noreturn)) GameRoutine_aa0e00();
void __attribute__((noreturn)) GameRoutine_ab9110();
void __attribute__((noreturn)) GameRoutine_abae00();
void __attribute__((noreturn)) GameRoutine_b32f30();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_ba1640(_QWORD** a1, __int64 a2, _QWORD* a3, _QWORD* a4);

void gfxa_ba1640(_QWORD** a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int16 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  _QWORD** v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  signed __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD** v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  _QWORD** v80;
  unsigned __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  signed __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD** v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  signed __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD** v113;
  _BYTE* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int64 v123;
  _QWORD** v124;
  unsigned __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  signed __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD** v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  int v145;
  __int64* v146;
  __int64 v147;
  __int64* v148;
  char* v149;
  __int64 (***v150)();
  _QWORD* v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  signed __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  _QWORD** v167;
  __int64 v168;
  __int64 v169;
  int v170;
  __int64* v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 (***v175)();
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  __int64* v180;
  __int64 v181;
  __int64 v182;
  signed __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  _QWORD** v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  int v196;
  __int64* v197;
  __int64 v198;
  _QWORD** v199;
  unsigned __int64 v200;
  __int64* v201;
  __int64 v202;
  __int64 v203;
  signed __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  __int64 v212;
  _QWORD** v213;
  __int64 v214;
  __int64* v215;
  struct {
    __int64 v216[3];
    __int64 v217;
    __int64 v218;
    unsigned __int64 v219;
    __int64* v220;
  } v216_;
  __int64 v221[3];
  char v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int v227;
  __int64 v228;
  __int64 v229[3];
  char v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  int v235;
  __int64* v236;
  __int64 v237[3];
  char v238;
  __int16 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char v243;
  _QWORD* v244;
  _QWORD* v245;
  struct {
    _QWORD v246[4];
    _QWORD* v247;
  } v246_;
  struct {
    __int64 (**v248)();
    _QWORD** v249;
    _QWORD** v250;
    __int64* v251;
    __int64 (***v252)();
  } v248_;

  v4 = *a4;
  v244 = a4;
  v245 = a3;
  v7 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 304LL);
  v215 = GameData_212e548[0] + 2;
  if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
    fw_text_String_CopyTerminated(v216_.v216, *(_QWORD*)(v7 + 24),
                                  *(_QWORD*)(v7 + 16));
  }
  else {
    v8 = *(_QWORD*)(v7 + 8);
    v9 = *(_QWORD*)(v7 + 24);
    v216_.v216[1] = *(_QWORD*)(v7 + 16);
    v216_.v216[2] = v9;
    v216_.v216[0] = v8;
  }
  v216_.v218 = 0;
  v216_.v219 = 0;
  v216_.v217 = 0;
  v11 = *(_QWORD*)(v7 + 32);
  v10 = *(_QWORD*)(v7 + 40);
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = v10 - v11;
  if (v10 != v11) {
    if ((v13 & 0x8000000000000000LL) != 0) {
      GameRoutine_a9fd80();
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v10 - v11, 16, 0);
    v15 = v14 + v13;
    v216_.v217 = v14;
    v216_.v218 = v14;
    v216_.v219 = v14 + v13;
    GameRoutine_1a0b950(v14, v11, v13);
    v216_.v218 = v15;
  }
  v16 = GameData_212e530[0];
  v216_.v220 = (__int64*)(GameData_212e530[0] + 16);
  v17 = *(_BYTE*)(v7 + 64);
  v215 = GameData_212e598[0] + 2;
  if ((v17 & 1) != 0) {
    fw_text_String_CopyTerminated(v221, *(_QWORD*)(v7 + 80),
                                  *(_QWORD*)(v7 + 72));
  }
  else {
    v18 = *(_QWORD*)(v7 + 64);
    v19 = *(_QWORD*)(v7 + 80);
    v221[1] = *(_QWORD*)(v7 + 72);
    v221[2] = v19;
    v221[0] = v18;
  }
  v222 = *(_BYTE*)(v7 + 88);
  v216_.v220 = GameData_212e558[0] + 2;
  v20 = *(_QWORD*)(v7 + 92);
  v225 = 0;
  v226 = 0;
  v224 = 0;
  v223 = v20;
  v22 = *(_QWORD*)(v7 + 104);
  v21 = *(_QWORD*)(v7 + 112);
  v23 = v21 - v22;
  if (v21 != v22) {
    if (0xAAAAAAAAAAAAAAABLL * (v23 >> 2) > 0x1555555555555555LL) {
      GameRoutine_ab9110();
    }
    v24 = fw_memory_HeapManager_Allocate(*v12, v23, 16, 0);
    v25 = v24 + v23;
    v224 = v24;
    v225 = v24;
    v226 = v24 + v23;
    GameRoutine_1a0b950(v24, v22, v23);
    v225 = v25;
  }
  v26 = *(_BYTE*)(v7 + 144);
  v227 = *(_DWORD*)(v7 + 128);
  v216_.v220 = GameData_212e550[0] + 2;
  v228 = v16 + 16;
  if ((v26 & 1) != 0) {
    fw_text_String_CopyTerminated(v229, *(_QWORD*)(v7 + 160),
                                  *(_QWORD*)(v7 + 152));
  }
  else {
    v27 = *(_QWORD*)(v7 + 144);
    v28 = *(_QWORD*)(v7 + 160);
    v229[1] = *(_QWORD*)(v7 + 152);
    v229[2] = v28;
    v229[0] = v27;
  }
  v230 = *(_BYTE*)(v7 + 168);
  v228 = GameData_212e528[0] + 16;
  v29 = *(_QWORD*)(v7 + 172);
  v233 = 0;
  v234 = 0;
  v232 = 0;
  v231 = v29;
  v31 = *(_QWORD*)(v7 + 184);
  v30 = *(_QWORD*)(v7 + 192);
  v32 = v30 - v31;
  if (v30 != v31) {
    if (0xAAAAAAAAAAAAAAABLL * (v32 >> 2) > 0x1555555555555555LL) {
      GameRoutine_aa0e00();
    }
    v33 = fw_memory_HeapManager_Allocate(*v12, v32, 16, 0);
    v34 = v33 + v32;
    v232 = v33;
    v233 = v33;
    v234 = v33 + v32;
    GameRoutine_1a0b950(v33, v31, v32);
    v233 = v34;
  }
  v35 = *(_BYTE*)(v7 + 224);
  v235 = *(_DWORD*)(v7 + 208);
  v228 = GameData_212e520[0] + 16;
  v236 = (__int64*)(v16 + 16);
  if ((v35 & 1) != 0) {
    fw_text_String_CopyTerminated(v237, *(_QWORD*)(v7 + 240),
                                  *(_QWORD*)(v7 + 232));
  }
  else {
    v36 = *(_QWORD*)(v7 + 224);
    v37 = *(_QWORD*)(v7 + 240);
    v237[1] = *(_QWORD*)(v7 + 232);
    v237[2] = v37;
    v237[0] = v36;
  }
  v238 = *(_BYTE*)(v7 + 248);
  v236 = GameData_212e568[0] + 2;
  v38 = *(_WORD*)(v7 + 249);
  v241 = 0;
  v242 = 0;
  v240 = 0;
  v239 = v38;
  v40 = *(_QWORD*)(v7 + 256);
  v39 = *(_QWORD*)(v7 + 264);
  v41 = v39 - v40;
  if (v39 != v40) {
    if (v41 < 0) {
      GameRoutine_abae00();
    }
    v42 = fw_memory_HeapManager_Allocate(*v12, v39 - v40, 16, 0);
    v43 = v42 + v41;
    v240 = v42;
    v241 = v42;
    v242 = v42 + v41;
    GameRoutine_1a0b950(v42, v40, v41 - 2);
    v241 = v43;
  }
  v44 = *(_BYTE*)(v7 + 280);
  v243 = v44;
  v236 = GameData_212e560[0] + 2;
  v45 = 208;
  if (BYTE4(v231) != 0) {
    v45 = 172;
  }
  if (*(float*)((char*)&v216_.v216[-1] + v45) > 0x0.0p+0f) {
    goto LABEL_31;
  }
  if (HIBYTE(v239) != 0) {
    v44 = v239;
  }
  if ((v44 & 1) != 0) {
  LABEL_31:
    v47 = *(_QWORD*)a2;
    v46 = *(_QWORD*)(a2 + 8);
    v48 = *(_DWORD*)(a2 + 96);
    v49 = fw_memory_HeapManager_Allocate(*v12, 208, 16, 0);
    *(_QWORD*)(v49 + 32) = 0;
    *(_QWORD*)(v49 + 40) = 0;
    *(_QWORD*)(v49 + 48) = 0;
    *(_QWORD*)(v49 + 56) = 0;
    *(_QWORD*)(v49 + 64) = 0;
    *(_QWORD*)(v49 + 72) = 0;
    *(_DWORD*)(v49 + 80) = v48;
    *(_QWORD*)(v49 + 96) = 0;
    *(_QWORD*)(v49 + 104) = 0;
    *(_QWORD*)(v49 + 88) = 0;
    *(_QWORD*)(v49 + 168) = a1;
    v248_.v252 = &v248_.v248;
    v248_.v250 = a1;
    v248_.v251 = (__int64*)&v245;
    strcpy((char*)(v49 + 8), "(TaskGaussianBlurPass");
    v248_.v248 = GameData_1fcc6e0;
    v248_.v249 = &v244;
    *(_BYTE*)(v49 + 84) = 1;
    *(_QWORD*)v49 = GameData_1fcc800;
    *(_QWORD*)(v49 + 112) = GameData_1fcc6e0;
    v50 = v248_.v250;
    *(_QWORD*)(v49 + 120) = v248_.v249;
    *(_QWORD*)(v49 + 128) = v50;
    v51 = v248_.v251;
    *(_QWORD*)(v49 + 160) = GameData_1fcc770;
    *(_QWORD*)(v49 + 192) = v49 + 160;
    *(_QWORD*)(v49 + 136) = v51;
    *(_QWORD*)(v49 + 144) = v49 + 112;
    v53 = *(__int64**)(a2 + 8);
    v52 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v53 >= v52) {
      v55 = *(_QWORD*)a2;
      v56 = (signed __int64)v53 - *(_QWORD*)a2;
      v57 = (v56 >> 3) + 1;
      if (v57 >> 61 != 0) {
        goto LABEL_217;
      }
      v58 = v52 - v55;
      if (v58 >> 2 > v57) {
        v57 = v58 >> 2;
      }
      if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
        v59 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v57;
      }
      if (v59 != 0) {
        if (v59 >> 61 != 0) {
          goto LABEL_218;
        }
        v60 = v49;
        v61 = fw_memory_HeapManager_Allocate(*v12, 8 * v59, 16, 0);
        v49 = v60;
      }
      else {
        v61 = 0;
      }
      v69 = v61 + 8 * v59;
      v70 = v61 + v56 - 8 * (v56 >> 3);
      *(_QWORD*)(v61 + v56) = v49;
      v54 = v61 + v56 + 8;
      GameRoutine_1a0b950(v70, v55, v56);
      *(_QWORD*)a2 = v70;
      *(_QWORD*)(a2 + 8) = v54;
      *(_QWORD*)(a2 + 16) = v69;
      if (v55 != 0) {
        v71 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v71, v55);
      }
    }
    else {
      *v53 = v49;
      v54 = (__int64)(v53 + 1);
    }
    *(_QWORD*)(a2 + 8) = v54;
    v72 = *(_QWORD***)(v54 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v72;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v72)[2])(v72, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v46 - v47) & 0x7FFFFFFF8LL)) +
                   104LL);
  }
  else {
    v62 = a1[22];
    v63 = v62[35];
    if (v63 != 0) {
      v64 = *v62;
      v65 = *v62 + 16592;
      v66 = fw_memory_HeapManager_Allocate(*v12, 24, 16, 0);
      *(_DWORD*)(v66 + 8) = 2;
      *(_QWORD*)v66 = GameData_212e8a0 + 2;
      v62[35] = 0;
      *(_QWORD*)(v66 + 16) = v63;
      v67 = (_QWORD*)fw_memory_HeapManager_Allocate(*v12, 24, 16, 0);
      v67[1] = v65;
      v67[2] = v66;
      v68 = *(_QWORD*)(v64 + 16592);
      *v67 = v68;
      *(_QWORD*)(v68 + 8) = v67;
      *(_QWORD*)(v64 + 16592) = v67;
      ++*(_QWORD*)(v64 + 16608);
    }
  }
  v73 = *(_QWORD**)(*v244 + 8LL);
  v74 = v73[22];
  v75 = 128;
  if (*(_BYTE*)(v74 + 96) != 0) {
    v75 = 92;
  }
  if (*(float*)(v74 + v75) > 0x0.0p+0f) {
    v77 = *(_QWORD*)a2;
    v76 = *(_QWORD*)(a2 + 8);
    v78 = *(_DWORD*)(a2 + 96);
    v79 = fw_memory_HeapManager_Allocate(*v12, 272, 16, 0);
    *(_QWORD*)(v79 + 32) = 0;
    *(_QWORD*)(v79 + 40) = 0;
    *(_QWORD*)(v79 + 48) = 0;
    *(_QWORD*)(v79 + 56) = 0;
    *(_QWORD*)(v79 + 64) = 0;
    *(_QWORD*)(v79 + 72) = 0;
    *(_DWORD*)(v79 + 80) = v78;
    *(_QWORD*)(v79 + 152) = 0;
    *(_QWORD*)(v79 + 160) = 0;
    v248_.v250 = &v245;
    v248_.v248 = GameData_1fcc848;
    v248_.v249 = a1;
    v248_.v252 = &v248_.v248;
    *(_QWORD*)(v79 + 136) = 0;
    *(_QWORD*)(v79 + 144) = 0;
    *(_QWORD*)(v79 + 120) = 0;
    *(_QWORD*)(v79 + 128) = 0;
    *(_QWORD*)(v79 + 104) = 0;
    *(_QWORD*)(v79 + 112) = 0;
    *(_QWORD*)(v79 + 88) = 0;
    *(_QWORD*)(v79 + 96) = 0;
    *(_QWORD*)(v79 + 232) = a1;
    *(_BYTE*)(v79 + 8) = 24;
    *(_QWORD*)(v79 + 224) = GameData_1fcc8d8;
    *(_QWORD*)(v79 + 256) = v79 + 224;
    strcpy((char*)(v79 + 9), "BloomGenPass");
    *(_BYTE*)(v79 + 84) = 1;
    *(_QWORD*)v79 = GameData_1fcc968;
    *(_QWORD*)(v79 + 176) = GameData_1fcc848;
    *(_QWORD*)(v79 + 208) = v79 + 176;
    v80 = v248_.v250;
    *(_QWORD*)(v79 + 184) = v248_.v249;
    *(_QWORD*)(v79 + 192) = v80;
    v82 = *(__int64**)(a2 + 8);
    v81 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v82 >= v81) {
      v84 = *(_QWORD*)a2;
      v85 = (signed __int64)v82 - *(_QWORD*)a2;
      v86 = (v85 >> 3) + 1;
      if (v86 >> 61 != 0) {
        goto LABEL_217;
      }
      v87 = v81 - v84;
      if (v87 >> 2 > v86) {
        v86 = v87 >> 2;
      }
      if ((unsigned __int64)v87 >= 0x7FFFFFFFFFFFFFF8LL) {
        v88 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v88 = v86;
      }
      if (v88 != 0) {
        if (v88 >> 61 != 0) {
          goto LABEL_218;
        }
        v89 = v79;
        v90 = fw_memory_HeapManager_Allocate(*v12, 8 * v88, 16, 0);
        v79 = v89;
      }
      else {
        v90 = 0;
      }
      v91 = v90 + 8 * v88;
      v92 = v90 + v85 - 8 * (v85 >> 3);
      *(_QWORD*)(v90 + v85) = v79;
      v83 = v90 + v85 + 8;
      GameRoutine_1a0b950(v92, v84, v85);
      *(_QWORD*)a2 = v92;
      *(_QWORD*)(a2 + 8) = v83;
      *(_QWORD*)(a2 + 16) = v91;
      if (v84 != 0) {
        v93 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v93, v84);
      }
    }
    else {
      *v82 = v79;
      v83 = (__int64)(v82 + 1);
    }
    *(_QWORD*)(a2 + 8) = v83;
    v94 = *(_QWORD***)(v83 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v94;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v94)[2])(v94, &v248_.v248);
    v95 = *v12;
    v245[56] =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v76 - v77) & 0x7FFFFFFF8LL)) +
                   136LL);
    v97 = *(_QWORD*)a2;
    v96 = *(_QWORD*)(a2 + 8);
    v98 = *(_DWORD*)(a2 + 96);
    v99 = fw_memory_HeapManager_Allocate(v95, 208, 16, 0);
    *(_QWORD*)(v99 + 32) = 0;
    *(_QWORD*)(v99 + 40) = 0;
    *(_QWORD*)(v99 + 48) = 0;
    *(_QWORD*)(v99 + 56) = 0;
    *(_QWORD*)(v99 + 64) = 0;
    *(_QWORD*)(v99 + 72) = 0;
    *(_DWORD*)(v99 + 80) = v98;
    *(_QWORD*)(v99 + 88) = 0;
    *(_QWORD*)(v99 + 96) = 0;
    *(_QWORD*)(v99 + 168) = a1;
    *(_BYTE*)(v99 + 8) = 26;
    *(_BYTE*)(v99 + 84) = 1;
    *(_QWORD*)(v99 + 144) = v99 + 112;
    *(_QWORD*)v99 = GameData_1fccad0;
    strcpy((char*)(v99 + 9), "BloomCompPass");
    *(_QWORD*)(v99 + 160) = GameData_1fcca40;
    *(_QWORD*)(v99 + 112) = GameData_1fcc9b0;
    *(_QWORD*)(v99 + 120) = &v245;
    v101 = *(__int64**)(a2 + 8);
    v100 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v99 + 192) = v99 + 160;
    if ((unsigned __int64)v101 >= v100) {
      v103 = *(_QWORD*)a2;
      v104 = (signed __int64)v101 - *(_QWORD*)a2;
      v105 = (v104 >> 3) + 1;
      if (v105 >> 61 != 0) {
        goto LABEL_217;
      }
      v106 = v100 - v103;
      if (v106 >> 2 > v105) {
        v105 = v106 >> 2;
      }
      if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
        v107 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v107 = v105;
      }
      if (v107 != 0) {
        if (v107 >> 61 != 0) {
          goto LABEL_218;
        }
        v108 = v99;
        v109 = fw_memory_HeapManager_Allocate(*v12, 8 * v107, 16, 0);
        v99 = v108;
      }
      else {
        v109 = 0;
      }
      v110 = v109 + 8 * v107;
      v111 = v109 + v104 - 8 * (v104 >> 3);
      *(_QWORD*)(v109 + v104) = v99;
      v102 = v109 + v104 + 8;
      GameRoutine_1a0b950(v111, v103, v104);
      *(_QWORD*)a2 = v111;
      *(_QWORD*)(a2 + 8) = v102;
      *(_QWORD*)(a2 + 16) = v110;
      if (v103 != 0) {
        v112 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v112 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v112, v103);
      }
    }
    else {
      *v101 = v99;
      v102 = (__int64)(v101 + 1);
    }
    *(_QWORD*)(a2 + 8) = v102;
    v113 = *(_QWORD***)(v102 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v113;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v113)[2])(v113, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v96 - v97) & 0x7FFFFFFF8LL)) +
                   96LL);
    v73 = *(_QWORD**)(*v244 + 8LL);
  }
  v114 = (_BYTE*)v73[24];
  v115 = 120;
  if (v114[90] != 0) {
    v115 = 89;
  }
  if ((v114[v115] & 1) != 0) {
    v116 = 408;
    if (v114[376] != 0) {
      v116 = 372;
    }
    if (*(float*)&v114[v116] > 0x0.0p+0f) {
      v117 = 728;
      if (v114[696] != 0) {
        v117 = 692;
      }
      if (*(float*)&v114[v117] > 0x0.0p+0f) {
        goto LABEL_98;
      }
    }
  }
  v118 = v73[23];
  v119 = 120;
  if (*(_BYTE*)(v118 + 90) != 0) {
    v119 = 89;
  }
  if ((*(_BYTE*)(v118 + v119) & 1) != 0) {
  LABEL_98:
    v121 = *(_QWORD*)a2;
    v120 = *(_QWORD*)(a2 + 8);
    v122 = *(_DWORD*)(a2 + 96);
    v123 = fw_memory_HeapManager_Allocate(*v12, 208, 16, 0);
    *(_QWORD*)(v123 + 32) = 0;
    *(_QWORD*)(v123 + 40) = 0;
    *(_QWORD*)(v123 + 48) = 0;
    *(_QWORD*)(v123 + 56) = 0;
    *(_QWORD*)(v123 + 64) = 0;
    *(_QWORD*)(v123 + 72) = 0;
    *(_DWORD*)(v123 + 80) = v122;
    *(_QWORD*)(v123 + 88) = 0;
    *(_QWORD*)(v123 + 96) = 0;
    v248_.v250 = &v245;
    v248_.v248 = GameData_1fccb18;
    v248_.v249 = a1;
    v248_.v252 = &v248_.v248;
    *(_QWORD*)(v123 + 168) = a1;
    strcpy((char*)(v123 + 8), "&GradationFilterPass");
    *(_BYTE*)(v123 + 84) = 1;
    *(_QWORD*)(v123 + 160) = GameData_1fccba8;
    *(_QWORD*)v123 = GameData_1fccc38;
    *(_QWORD*)(v123 + 112) = GameData_1fccb18;
    *(_QWORD*)(v123 + 192) = v123 + 160;
    *(_QWORD*)(v123 + 144) = v123 + 112;
    v124 = v248_.v250;
    *(_QWORD*)(v123 + 120) = v248_.v249;
    *(_QWORD*)(v123 + 128) = v124;
    v126 = *(__int64**)(a2 + 8);
    v125 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v126 >= v125) {
      v128 = *(_QWORD*)a2;
      v129 = (signed __int64)v126 - *(_QWORD*)a2;
      v130 = (v129 >> 3) + 1;
      if (v130 >> 61 != 0) {
        goto LABEL_217;
      }
      v131 = v125 - v128;
      if (v131 >> 2 > v130) {
        v130 = v131 >> 2;
      }
      if ((unsigned __int64)v131 >= 0x7FFFFFFFFFFFFFF8LL) {
        v132 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v132 = v130;
      }
      if (v132 != 0) {
        if (v132 >> 61 != 0) {
          goto LABEL_218;
        }
        v133 = v123;
        v134 = fw_memory_HeapManager_Allocate(*v12, 8 * v132, 16, 0);
        v123 = v133;
      }
      else {
        v134 = 0;
      }
      v135 = v134 + 8 * v132;
      v136 = v134 + v129 - 8 * (v129 >> 3);
      *(_QWORD*)(v134 + v129) = v123;
      v127 = v134 + v129 + 8;
      GameRoutine_1a0b950(v136, v128, v129);
      *(_QWORD*)a2 = v136;
      *(_QWORD*)(a2 + 8) = v127;
      *(_QWORD*)(a2 + 16) = v135;
      if (v128 != 0) {
        v137 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v137 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v137, v128);
      }
    }
    else {
      *v126 = v123;
      v127 = (__int64)(v126 + 1);
    }
    *(_QWORD*)(a2 + 8) = v127;
    v138 = *(_QWORD***)(v127 - 8);
    v248_.v248 = (__int64 (**)(void))a2;
    v248_.v249 = v138;
    ((void (*)(_QWORD**, __int64 (***)(void)))(*v138)[2])(v138, &v248_.v248);
    *v245 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v120 - v121) & 0x7FFFFFFF8LL)) +
                   96LL);
    v73 = *(_QWORD**)(*v244 + 8LL);
  }
  v139 = v73[25];
  v140 = 120;
  if (*(_BYTE*)(v139 + 90) != 0) {
    v140 = 89;
  }
  if ((*(_BYTE*)(v139 + v140) & 1) != 0) {
    goto LABEL_121;
  }
  v141 = v73[35];
  v142 = 120;
  if (*(_BYTE*)(v141 + 90) != 0) {
    v142 = 89;
  }
  if ((*(_BYTE*)(v141 + v142) & 1) != 0) {
  LABEL_121:
    v214 = 0;
    v144 = *(_QWORD*)a2;
    v143 = *(_QWORD*)(a2 + 8);
    v145 = *(_DWORD*)(a2 + 96);
    v146 = (__int64*)fw_memory_g_heap_manager_ptr;
    v147 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
    v248_.v248 = GameData_1fccc80;
    v248_.v252 = &v248_.v248;
    v246_.v246[0] = GameData_1fccd10;
    v246_.v246[1] = a1;
    v246_.v247 = v246_.v246;
    v148 = GameData_212e760[0];
    *(_QWORD*)v147 = GameData_212e760[0] + 2;
    v149 = (char*)fw_memory_HeapManager_Allocate(*v146, 32, 16, 0);
    *(_QWORD*)(v147 + 32) = 0;
    *(_QWORD*)(v147 + 40) = 0;
    *(_QWORD*)(v147 + 48) = 0;
    *(_QWORD*)(v147 + 56) = 0;
    *(_QWORD*)(v147 + 64) = 0;
    *(_QWORD*)(v147 + 72) = 0;
    *(_DWORD*)(v147 + 80) = v145;
    *(_QWORD*)(v147 + 88) = 0;
    *(_QWORD*)(v147 + 16) = 30;
    *(_QWORD*)(v147 + 24) = v149;
    strcpy(v149, "ColorGradingBuildLutLatterPass");
    v150 = v248_.v252;
    *(_BYTE*)(v147 + 84) = 1;
    *(_QWORD*)v147 = GameData_1fccda0;
    *(_QWORD*)(v147 + 8) = 33;
    if (v150 != nullptr) {
      if (v150 != &v248_.v248) {
        *(_QWORD*)(v147 + 128) =
            ((__int64 (*)(__int64 (***)(void)))(*v150)[2])(v150);
        v151 = v246_.v247;
        if (v246_.v247 == nullptr) {
          goto LABEL_129;
        }
      LABEL_126:
        if (v151 == v246_.v246) {
          *(_QWORD*)(v147 + 176) = v147 + 144;
          (*(void (**)(_QWORD*))(*v151 + 24LL))(v151);
        }
        else {
          *(_QWORD*)(v147 + 176) =
              (*(__int64 (**)(_QWORD*))(*v151 + 16LL))(v151);
        }
        if (v246_.v247 == v246_.v246) {
          v152 = 32;
        }
        else {
          if (v246_.v247 == nullptr) {
            goto LABEL_136;
          }
          v152 = 40;
        }
        (*(void (**)(__int64))(*v246_.v247 + v152))((__int64)v246_.v247);
      LABEL_136:
        if (v248_.v252 == &v248_.v248) {
          v153 = 4;
        }
        else {
          if (v248_.v252 == nullptr) {
            goto LABEL_141;
          }
          v153 = 5;
        }
        ((__int64 (*)(__int64))(*v248_.v252)[v153])((__int64)v248_.v252);
      LABEL_141:
        v155 = *(__int64**)(a2 + 8);
        v154 = *(_QWORD*)(a2 + 16);
        if ((unsigned __int64)v155 >= v154) {
          v157 = *(_QWORD*)a2;
          v158 = (signed __int64)v155 - *(_QWORD*)a2;
          v159 = (v158 >> 3) + 1;
          if (v159 >> 61 != 0) {
            goto LABEL_217;
          }
          v160 = v154 - v157;
          if (v160 >> 2 > v159) {
            v159 = v160 >> 2;
          }
          if ((unsigned __int64)v160 >= 0x7FFFFFFFFFFFFFF8LL) {
            v161 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v161 = v159;
          }
          if (v161 != 0) {
            if (v161 >> 61 != 0) {
              goto LABEL_218;
            }
            v162 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v161, 16, 0);
          }
          else {
            v162 = 0;
          }
          v163 = v162 + 8 * v161;
          v164 = v162 + v158 - 8 * (v158 >> 3);
          *(_QWORD*)(v162 + v158) = v147;
          v156 = v162 + v158 + 8;
          GameRoutine_1a0b950(v164, v157, v158);
          *(_QWORD*)a2 = v164;
          *(_QWORD*)(a2 + 8) = v156;
          *(_QWORD*)(a2 + 16) = v163;
          if (v157 != 0) {
            v165 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v165 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v165, v157);
          }
          v148 = GameData_212e760[0];
        }
        else {
          *v155 = v147;
          v156 = (__int64)(v155 + 1);
        }
        *(_QWORD*)(a2 + 8) = v156;
        v166 = v143 - v144;
        v167 = *(_QWORD***)(v156 - 8);
        v248_.v248 = (__int64 (**)(void))a2;
        v248_.v249 = v167;
        ((void (*)(_QWORD**, __int64 (***)(void)))(*v167)[2])(v167,
                                                              &v248_.v248);
        v169 = *(_QWORD*)a2;
        v168 = *(_QWORD*)(a2 + 8);
        v170 = *(_DWORD*)(a2 + 96);
        v214 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + (v166 & 0x7FFFFFFF8LL)) +
                          88LL);
        v171 = (__int64*)fw_memory_g_heap_manager_ptr;
        v172 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
        v173 = *v171;
        v248_.v252 = &v248_.v248;
        v248_.v250 = &v245;
        v248_.v251 = &v214;
        v248_.v248 = GameData_1fccde8;
        v248_.v249 = a1;
        *(_QWORD*)v172 = v148 + 2;
        v246_.v246[0] = GameData_1fcce78;
        v246_.v246[1] = a1;
        v246_.v247 = v246_.v246;
        v174 = (char*)fw_memory_HeapManager_Allocate(v173, 32, 16, 0);
        *(_QWORD*)(v172 + 32) = 0;
        *(_QWORD*)(v172 + 40) = 0;
        *(_QWORD*)(v172 + 48) = 0;
        *(_QWORD*)(v172 + 56) = 0;
        *(_QWORD*)(v172 + 64) = 0;
        *(_QWORD*)(v172 + 72) = 0;
        *(_DWORD*)(v172 + 80) = v170;
        *(_QWORD*)(v172 + 88) = 0;
        *(_QWORD*)(v172 + 96) = 0;
        *(_QWORD*)(v172 + 104) = 0;
        *(_QWORD*)(v172 + 16) = 27;
        *(_QWORD*)(v172 + 24) = v174;
        strcpy(v174, "ColorGradingApplyLatterPass");
        v175 = v248_.v252;
        *(_BYTE*)(v172 + 84) = 1;
        *(_QWORD*)v172 = GameData_1fccf08;
        *(_QWORD*)(v172 + 8) = 33;
        if (v175 != nullptr) {
          if (v175 != &v248_.v248) {
            *(_QWORD*)(v172 + 144) =
                ((__int64 (*)(__int64 (***)(void)))(*v175)[2])(v175);
            v176 = v246_.v247;
            if (v246_.v247 == nullptr) {
              goto LABEL_166;
            }
          LABEL_163:
            if (v176 == v246_.v246) {
              *(_QWORD*)(v172 + 192) = v172 + 160;
              (*(void (**)(_QWORD*))(*v176 + 24LL))(v176);
            }
            else {
              *(_QWORD*)(v172 + 192) =
                  (*(__int64 (**)(_QWORD*))(*v176 + 16LL))(v176);
            }
            if (v246_.v247 == v246_.v246) {
              v177 = 32;
            }
            else {
              if (v246_.v247 == nullptr) {
                goto LABEL_173;
              }
              v177 = 40;
            }
            (*(void (**)(__int64))(*v246_.v247 + v177))((__int64)v246_.v247);
          LABEL_173:
            if (v248_.v252 == &v248_.v248) {
              v178 = 4;
            }
            else {
              if (v248_.v252 == nullptr) {
              LABEL_178:
                v180 = *(__int64**)(a2 + 8);
                v179 = *(_QWORD*)(a2 + 16);
                if ((unsigned __int64)v180 >= v179) {
                  v182 = *(_QWORD*)a2;
                  v183 = (signed __int64)v180 - *(_QWORD*)a2;
                  v184 = (v183 >> 3) + 1;
                  if (v184 >> 61 != 0) {
                    goto LABEL_217;
                  }
                  v185 = v179 - v182;
                  if (v185 >> 2 > v184) {
                    v184 = v185 >> 2;
                  }
                  if ((unsigned __int64)v185 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v186 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v186 = v184;
                  }
                  if (v186 != 0) {
                    if (v186 >> 61 != 0) {
                      goto LABEL_218;
                    }
                    v187 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v186, 16,
                        0);
                  }
                  else {
                    v187 = 0;
                  }
                  v188 = v187 + 8 * v186;
                  v189 = v187 + v183 - 8 * (v183 >> 3);
                  *(_QWORD*)(v187 + v183) = v172;
                  v181 = v187 + v183 + 8;
                  GameRoutine_1a0b950(v189, v182, v183);
                  *(_QWORD*)a2 = v189;
                  *(_QWORD*)(a2 + 8) = v181;
                  *(_QWORD*)(a2 + 16) = v188;
                  if (v182 != 0) {
                    v190 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v190 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v190, v182);
                  }
                }
                else {
                  *v180 = v172;
                  v181 = (__int64)(v180 + 1);
                }
                *(_QWORD*)(a2 + 8) = v181;
                v191 = *(_QWORD***)(v181 - 8);
                v248_.v248 = (__int64 (**)(void))a2;
                v248_.v249 = v191;
                ((void (*)(_QWORD**, __int64 (***)(void)))(*v191)[2])(
                    v191, &v248_.v248);
                *v245 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                              ((v168 - v169) & 0x7FFFFFFF8LL)) +
                                   104LL);
                v73 = *(_QWORD**)(*v244 + 8LL);
                goto LABEL_195;
              }
              v178 = 5;
            }
            ((__int64 (*)(__int64))(*v248_.v252)[v178])((__int64)v248_.v252);
            goto LABEL_178;
          }
          *(_QWORD*)(v172 + 144) = v172 + 112;
          ((void (*)(__int64 (***)(void)))(*v175)[3])(v175);
          v176 = v246_.v247;
          if (v246_.v247 != nullptr) {
            goto LABEL_163;
          }
        }
        else {
          *(_QWORD*)(v172 + 144) = 0;
          v176 = v246_.v247;
          if (v246_.v247 != nullptr) {
            goto LABEL_163;
          }
        }
      LABEL_166:
        *(_QWORD*)(v172 + 192) = 0;
        goto LABEL_173;
      }
      *(_QWORD*)(v147 + 128) = v147 + 96;
      ((void (*)(__int64 (***)(void)))(*v150)[3])(v150);
      v151 = v246_.v247;
      if (v246_.v247 != nullptr) {
        goto LABEL_126;
      }
    }
    else {
      *(_QWORD*)(v147 + 128) = 0;
      v151 = v246_.v247;
      if (v246_.v247 != nullptr) {
        goto LABEL_126;
      }
    }
  LABEL_129:
    *(_QWORD*)(v147 + 176) = 0;
    goto LABEL_136;
  }
LABEL_195:
  v192 = v73[42];
  if (v192 != 0) {
    v193 = 120;
    if (*(_BYTE*)(v192 + 90) != 0) {
      v193 = 89;
    }
    if ((*(_BYTE*)(v192 + v193) & 1) != 0) {
      v195 = *(_QWORD*)a2;
      v194 = *(_QWORD*)(a2 + 8);
      v196 = *(_DWORD*)(a2 + 96);
      v197 = (__int64*)fw_memory_g_heap_manager_ptr;
      v198 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      v248_.v250 = a1;
      *(_QWORD*)(v198 + 32) = 0;
      *(_QWORD*)(v198 + 40) = 0;
      *(_QWORD*)(v198 + 48) = 0;
      *(_QWORD*)(v198 + 56) = 0;
      *(_QWORD*)(v198 + 64) = 0;
      *(_QWORD*)(v198 + 72) = 0;
      *(_DWORD*)(v198 + 80) = v196;
      *(_QWORD*)(v198 + 104) = 0;
      *(_QWORD*)(v198 + 112) = 0;
      v248_.v248 = GameData_1fccf50;
      v248_.v249 = &v245;
      v248_.v252 = &v248_.v248;
      *(_BYTE*)(v198 + 8) = 24;
      *(_QWORD*)(v198 + 88) = 0;
      *(_QWORD*)(v198 + 96) = 0;
      *(_QWORD*)(v198 + 184) = a1;
      *(_QWORD*)v198 = GameData_1fcd070;
      strcpy((char*)(v198 + 9), "PaintingPass");
      *(_QWORD*)(v198 + 176) = GameData_1fccfe0;
      *(_BYTE*)(v198 + 84) = 1;
      *(_QWORD*)(v198 + 208) = v198 + 176;
      *(_QWORD*)(v198 + 128) = GameData_1fccf50;
      *(_QWORD*)(v198 + 160) = v198 + 128;
      v199 = v248_.v250;
      *(_QWORD*)(v198 + 136) = v248_.v249;
      *(_QWORD*)(v198 + 144) = v199;
      v201 = *(__int64**)(a2 + 8);
      v200 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v201 < v200) {
        *v201 = v198;
        v202 = (__int64)(v201 + 1);
      LABEL_215:
        *(_QWORD*)(a2 + 8) = v202;
        v213 = *(_QWORD***)(v202 - 8);
        v248_.v248 = (__int64 (**)(void))a2;
        v248_.v249 = v213;
        ((void (*)(_QWORD**, __int64 (***)(void)))(*v213)[2])(v213,
                                                              &v248_.v248);
        *v245 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                      ((v194 - v195) & 0x7FFFFFFF8LL)) +
                           112LL);
        goto LABEL_216;
      }
      v203 = *(_QWORD*)a2;
      v204 = (signed __int64)v201 - *(_QWORD*)a2;
      v205 = (v204 >> 3) + 1;
      if (v205 >> 61 == 0) {
        v206 = v200 - v203;
        if (v206 >> 2 > v205) {
          v205 = v206 >> 2;
        }
        if ((unsigned __int64)v206 >= 0x7FFFFFFFFFFFFFF8LL) {
          v207 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v207 = v205;
        }
        if (v207 == 0) {
          v209 = 0;
        LABEL_211:
          v210 = v209 + 8 * v207;
          v211 = v209 + v204 - 8 * (v204 >> 3);
          *(_QWORD*)(v209 + v204) = v198;
          v202 = v209 + v204 + 8;
          GameRoutine_1a0b950(v211, v203, v204);
          *(_QWORD*)a2 = v211;
          *(_QWORD*)(a2 + 8) = v202;
          *(_QWORD*)(a2 + 16) = v210;
          if (v203 != 0) {
            v212 = 128;
            if (*(_QWORD*)(*v197 + 200) == 0) {
              v212 = 56;
            }
            nn_mem_StandardAllocator_Free(*v197 + v212, v203);
          }
          goto LABEL_215;
        }
        if (v207 >> 61 == 0) {
          v208 = v198;
          v209 = fw_memory_HeapManager_Allocate(*v197, 8 * v207, 16, 0);
          v198 = v208;
          goto LABEL_211;
        }
      LABEL_218:
        GameRoutine_60a210();
      }
    LABEL_217:
      GameRoutine_b32f30();
    }
  }
LABEL_216:
  GaussianBlurSetting_Destructor((__int64)&v215);
}

#pragma GCC visibility pop
