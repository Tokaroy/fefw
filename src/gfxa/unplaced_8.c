#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1999be0(__int64, __int64*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 PrimitiveDrawManager_1995020(__int64 result, _DWORD*);
__int64 PrimitiveDrawManager_19953e0(__int64*, __int64);
__int64 PrimitiveDrawManager_1999ce0(float32x4_t*, float32x4_t*);
bool GameRoutine_930fd0(unsigned __int8*, unsigned __int8*);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c960;
extern __int128 GameData_1a83190;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_1999780(__int64*, __int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_1995140();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_1993840(__int64 a1);
__int64 gfxa_1994460(__int64 result);

void gfxa_1993840(__int64 a1)
{
  __int64 v1;
  int v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _DWORD* v17;
  char* v18;
  char* v19;
  _DWORD* v20;
  _DWORD* v21;
  int v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int128 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int128 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
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
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  char v96;
  unsigned __int64 v97;
  __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  _QWORD* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  _QWORD* v115;
  _QWORD* v116;
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
  char v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  bool v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  _QWORD* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  struct {
    __int64 v163;
    _QWORD v164[5];
    __int128 v165;
    int v166;
    char gap68_[4];
    __int64 v167;
    __int64 v168;
    __int128 v169;
    __int64 v170;
    __int128 v171;
    __int64 v172;
    __int64 v173;
    __int64 v174;
    __int64 v175;
    __int64 v176;
    __int64 v177;
    __int64 v178;
    __int64 v179;
    __int64 v180;
    __int64 v181;
    __int64 v182;
    __int64 v183;
    __int64 v184;
    __int64 v185;
    __int64 v186;
    char gap248_[8];
    _QWORD v187[133];
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int64 v194;
    __int64 v195;
    __int64 v196;
    __int64 v197;
    __int64 v198;
    __int64 v199;
    __int64 v200;
    _QWORD v201[2];
  } f_;

  v1 = a1 + 0x4000;
  v3 = *(_DWORD*)(a1 + 17280);
  v4 = (int*)(a1 + 17280);
  v5 = *(_QWORD*)(a1 + 18736) + 1440LL * v3;
  v6 = *(int*)(v5 + 256);
  if (*(_DWORD*)(v5 + 4 * v6 + 260) != 0) {
    *(_DWORD*)(v5 + 256) = v6 + 1;
    v3 = *v4;
  }
  v7 = *(_DWORD**)(a1 + 19112);
  v8 = *(_QWORD*)(a1 + 19120);
  if ((unsigned __int64)v7 >= v8) {
    v10 = *(_QWORD*)(a1 + 19104);
    v11 = (__int64)v7 - v10;
    v12 = (v11 >> 2) + 1;
    if (v12 >> 62 != 0) {
      GameRoutine_1995140();
    }
    v13 = v8 - v10;
    v14 = v13 >> 1;
    if (v13 >> 1 <= v12) {
      v14 = (v11 >> 2) + 1;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFFCLL) {
      v15 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v14;
    }
    if (v15 >> 62 != 0) {
      GameRoutine_60a210();
    }
    v16 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(a1 + 19128) + 16LL))(*(_QWORD*)(a1 + 19128), 4 * v15, 4);
    v17 = (_DWORD*)(v16 + v11);
    *(_DWORD*)v17 = v3;
    v9 = v16 + v11 + 4;
    v18 = *(char**)(a1 + 19112);
    v19 = *(char**)(a1 + 19104);
    v20 = (_DWORD*)((char*)v17 + ((char*)v19 - (char*)v18));
    if (v18 != v19) {
      v21 = v20;
      do {
        v22 = *(_DWORD*)v19;
        v19 += 4;
        *(_DWORD*)v21++ = v22;
      } while (v19 != v18);
      v19 = *(char**)(a1 + 19104);
    }
    *(_QWORD*)(a1 + 19104) = v20;
    v23 = *(_QWORD*)(a1 + 19120);
    *(_QWORD*)(a1 + 19112) = v9;
    *(_QWORD*)(a1 + 19120) = v16 + 4 * v15;
    if (v19 != nullptr) {
      (*(void (**)(_QWORD, char*, __int64, __int64))(
          **(_QWORD**)(a1 + 19128) + 24LL))(*(_QWORD*)(a1 + 19128), v19,
                                            v23 - (_QWORD)v19, 4);
    }
  }
  else {
    *(_DWORD*)v7 = v3;
    v9 = (__int64)(v7 + 1);
  }
  *(_QWORD*)&v24 = 0x3F8000003F800000LL;
  *((_QWORD*)&v24 + 1) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 19112) = v9;
  memset((char*)f_.v164 + 4, 0, 28);
  f_.v170 = 1056964608;
  f_.v163 = 0x200000000LL;
  f_.v167 = 0;
  f_.v168 = 0;
  *(_QWORD*)&f_.v169 = 0;
  *(_QWORD*)((char*)&f_.v169 + 6) = 0;
  LODWORD(f_.v172) = 0;
  f_.v174 = 0;
  f_.v175 = 0;
  f_.v176 = 0;
  LOBYTE(f_.v179) = 0;
  LODWORD(f_.v164[0]) = 2;
  f_.v166 = 1065353216;
  f_.v178 = 0x3F80000000000000LL;
  DWORDn(f_.v179, sizeof(f_.v179) / 4 - 1) = 1065353216;
  f_.v165 = v24;
  f_.v171 = GameData_1a83190;
  f_.v182 = 0;
  LOBYTE(f_.v183) = 0;
  DWORDn(f_.v183, sizeof(f_.v183) / 4 - 1) = 0;
  v26 = *(_QWORD*)GameData_212c960;
  v25 = *((_QWORD*)GameData_212c960 + 1);
  LOWORD(f_.v184) = 0;
  f_.v180 = v26;
  f_.v181 = v25;
  GameRoutine_1a0ba50((__int64)f_.v187, 0, 0x405u);
  v27 = *(_QWORD*)(a1 + 18744);
  v28 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
  v30 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
  v31 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2a0);
  v32 = *(_QWORD*)GameData_212c2a0;
  v33 = *((_QWORD*)GameData_212c2a0 + 1);
  v34 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
  f_.v188 =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
  f_.v196 = f_.v188;
  f_.v189 = v28;
  f_.v190 = v29;
  f_.v191 = v30;
  f_.v192 = v31;
  f_.v187[130] = v32;
  f_.v187[131] = v33;
  f_.v187[132] = v34;
  f_.v200 = v31;
  f_.v199 = v30;
  f_.v198 = v29;
  f_.v197 = v28;
  f_.v195 = v34;
  f_.v194 = v33;
  f_.v193 = v32;
  *(_DWORD*)((char*)f_.v201 + 7) = 0;
  v35 = *(_QWORD*)(a1 + 18752);
  f_.v201[0] = 0;
  if (v27 >= v35) {
    v60 =
        PrimitiveDrawManager_19953e0((__int64*)(a1 + 18736), (__int64)&f_.v163);
    v61 = f_.v184;
    *(_QWORD*)(a1 + 18744) = v60;
    if ((v61 & 1) != 0 && f_.v186 != 0) {
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, f_.v186);
    }
  }
  else {
    v36 = f_.v165;
    v37 = f_.v166;
    *(_QWORD*)(v27 + 72) = 0;
    *(_QWORD*)(v27 + 80) = 0;
    f_.v167 = 0;
    f_.v168 = 0;
    *(_QWORD*)&f_.v169 = 0;
    *(_OWORD*)(v27 + 48) = v36;
    v38 = f_.v164[1];
    v39 = f_.v164[2];
    v41 = f_.v163;
    v40 = f_.v164[0];
    v43 = f_.v164[3];
    v42 = f_.v164[4];
    *(_DWORD*)(v27 + 64) = v37;
    *(_QWORD*)(v27 + 16) = v38;
    *(_QWORD*)(v27 + 24) = v39;
    *(_QWORD*)(v27 + 32) = v43;
    *(_QWORD*)(v27 + 40) = v42;
    *(_QWORD*)v27 = v41;
    *(_QWORD*)(v27 + 8) = v40;
    v44 = f_.v180;
    v45 = f_.v182;
    v46 = f_.v183;
    v47 = f_.v178;
    v48 = f_.v179;
    *(_QWORD*)(v27 + 200) = f_.v181;
    *(_QWORD*)(v27 + 208) = v45;
    v49 = f_.v176;
    v50 = f_.v177;
    *(_QWORD*)(v27 + 184) = v48;
    *(_QWORD*)(v27 + 192) = v44;
    *(_QWORD*)(v27 + 168) = v50;
    *(_QWORD*)(v27 + 176) = v47;
    v51 = f_.v172;
    v52 = f_.v174;
    v53 = f_.v175;
    *(_QWORD*)(v27 + 136) = f_.v173;
    *(_QWORD*)(v27 + 144) = v52;
    *(_QWORD*)(v27 + 152) = v53;
    *(_QWORD*)(v27 + 160) = v49;
    v54 = *((_QWORD*)&f_.v169 + 1);
    v55 = f_.v170;
    *(_QWORD*)(v27 + 88) = 0;
    *(_QWORD*)(v27 + 96) = v54;
    v56 = f_.v171;
    *(_QWORD*)(v27 + 104) = v55;
    *(_OWORD*)(v27 + 112) = v56;
    *(_QWORD*)(v27 + 128) = v51;
    v57 = f_.v184;
    v58 = f_.v185;
    *(_QWORD*)(v27 + 216) = v46;
    *(_QWORD*)(v27 + 224) = v57;
    v59 = f_.v186;
    *(_QWORD*)(v27 + 232) = v58;
    *(_QWORD*)(v27 + 240) = v59;
    GameRoutine_1a0b950(v27 + 256, (__int64)f_.v187, 0x49Bu);
    *(_QWORD*)(a1 + 18744) = v27 + 1440;
  }
  v63 = f_.v167;
  if (f_.v167 != 0) {
    v64 = f_.v168;
    if (f_.v167 != f_.v168) {
      v65 = fw_memory_g_heap_manager_ptr;
      do {
        if ((*(_BYTE*)(v64 - 32) & 1) != 0) {
          v66 = *(_QWORD*)(v64 - 16);
          if (v66 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v65 + 200LL) != 0) {
              v67 = 128;
            }
            else {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v65 + v67, v66);
          }
        }
        v64 -= 40;
      } while (v64 != v63);
    }
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                                  v63);
  }
  *v4 = -1 -
        1527099483 * ((*(_QWORD*)(a1 + 18744) - *(_QWORD*)(a1 + 18736)) >> 5);
  PrimitiveDrawManager_1995020(a1 + 18768, v4);
  v69 = *(_QWORD*)(a1 + 18736);
  v70 = *v4;
  v71 = v69 + 1440LL * v3;
  v72 = v69 + 1440LL * *v4;
  v73 = *(_QWORD*)(v71 + 8);
  v74 = *(_QWORD*)(v71 + 16);
  v75 = *(_QWORD*)(v71 + 32);
  *(_QWORD*)(v72 + 24) = *(_QWORD*)(v71 + 24);
  *(_QWORD*)(v72 + 32) = v75;
  *(_QWORD*)(v72 + 8) = v73;
  *(_QWORD*)(v72 + 16) = v74;
  v77 = *(_QWORD*)(v71 + 48);
  v76 = *(_QWORD*)(v71 + 56);
  v78 = *(_QWORD*)(v71 + 40);
  *(_DWORD*)(v72 + 64) = *(_DWORD*)(v71 + 64);
  *(_QWORD*)(v72 + 48) = v77;
  *(_QWORD*)(v72 + 56) = v76;
  *(_QWORD*)(v72 + 40) = v78;
  *(_QWORD*)v72 = *(_QWORD*)v71;
  if (v70 == v3) {
    v79 = *(_QWORD*)(v71 + 216);
    *(_QWORD*)(v72 + 200) = *(_QWORD*)(v71 + 200);
    *(_QWORD*)(v72 + 216) = v79;
    v80 = *(_QWORD*)(v71 + 184);
    *(_QWORD*)(v72 + 168) = *(_QWORD*)(v71 + 168);
    *(_QWORD*)(v72 + 184) = v80;
    v81 = *(_QWORD*)(v71 + 152);
    *(_QWORD*)(v72 + 136) = *(_QWORD*)(v71 + 136);
    *(_QWORD*)(v72 + 152) = v81;
    v82 = *(_QWORD*)(v71 + 120);
    *(_QWORD*)(v72 + 104) = *(_QWORD*)(v71 + 104);
    *(_QWORD*)(v72 + 120) = v82;
    v83 = *(_QWORD*)(v71 + 96);
    *(_QWORD*)(v72 + 112) = *(_QWORD*)(v71 + 112);
    *(_QWORD*)(v72 + 96) = v83;
    v84 = *(_QWORD*)(v71 + 128);
    *(_QWORD*)(v72 + 144) = *(_QWORD*)(v71 + 144);
    *(_QWORD*)(v72 + 128) = v84;
    v85 = *(_QWORD*)(v71 + 160);
    *(_QWORD*)(v72 + 176) = *(_QWORD*)(v71 + 176);
    *(_QWORD*)(v72 + 160) = v85;
    v86 = *(_QWORD*)(v71 + 192);
    *(_QWORD*)(v72 + 208) = *(_QWORD*)(v71 + 208);
    *(_QWORD*)(v72 + 192) = v86;
  }
  else {
    GameRoutine_1999780(
        (__int64*)(v72 + 72), *(_QWORD*)(v71 + 72), *(_QWORD*)(v71 + 80),
        0xCCCCCCCCCCCCCCCDLL *
            ((__int64)(*(_QWORD*)(v71 + 80) - *(_QWORD*)(v71 + 72)) >> 3));
    v87 = *(_QWORD*)(v71 + 216);
    *(_QWORD*)(v72 + 200) = *(_QWORD*)(v71 + 200);
    *(_QWORD*)(v72 + 216) = v87;
    v88 = *(_QWORD*)(v71 + 184);
    *(_QWORD*)(v72 + 168) = *(_QWORD*)(v71 + 168);
    *(_QWORD*)(v72 + 184) = v88;
    v89 = *(_QWORD*)(v71 + 152);
    *(_QWORD*)(v72 + 136) = *(_QWORD*)(v71 + 136);
    *(_QWORD*)(v72 + 152) = v89;
    v90 = *(_QWORD*)(v71 + 120);
    *(_QWORD*)(v72 + 104) = *(_QWORD*)(v71 + 104);
    *(_QWORD*)(v72 + 120) = v90;
    v91 = *(_QWORD*)(v71 + 96);
    *(_QWORD*)(v72 + 112) = *(_QWORD*)(v71 + 112);
    *(_QWORD*)(v72 + 96) = v91;
    v92 = *(_QWORD*)(v71 + 128);
    *(_QWORD*)(v72 + 144) = *(_QWORD*)(v71 + 144);
    *(_QWORD*)(v72 + 128) = v92;
    v93 = *(_QWORD*)(v71 + 160);
    *(_QWORD*)(v72 + 176) = *(_QWORD*)(v71 + 176);
    *(_QWORD*)(v72 + 160) = v93;
    v94 = *(_QWORD*)(v71 + 192);
    *(_QWORD*)(v72 + 208) = *(_QWORD*)(v71 + 208);
    *(_QWORD*)(v72 + 192) = v94;
    v96 = *(_BYTE*)(v72 + 224);
    v95 = (__int64*)(v72 + 224);
    v97 = *(unsigned __int8*)(v71 + 224);
    if ((v96 & 1) != 0) {
      v99 = (v97 & 1) == 0;
      v100 = v97 >> 1;
      if (v99) {
        v101 = v71 + 225;
      }
      else {
        v101 = *(_QWORD*)(v71 + 240);
      }
      if (v99) {
        v102 = v100;
      }
      else {
        v102 = *(_QWORD*)(v71 + 232);
      }
      SpineModel_64dde0(v95, v101, v102);
    }
    else if ((v97 & 1) != 0) {
      GameRoutine_64df20(v95, *(_QWORD*)(v71 + 240), *(_QWORD*)(v71 + 232));
    }
    else {
      v95[1] = *(_QWORD*)(v71 + 232);
      v98 = *(_QWORD*)(v71 + 224);
      v95[2] = *(_QWORD*)(v71 + 240);
      *v95 = v98;
    }
  }
  v103 = *(_QWORD*)(a1 + 18736) + 1440LL * *(int*)(v1 + 896);
  *(_DWORD*)(v103 + 4LL * *(int*)(v103 + 256) + 772) = *(int*)(v1 + 2816) + 1;
  v104 = *(_QWORD*)(a1 + 18736);
  v105 = (_QWORD*)(v104 + 1440LL * v3);
  v106 = (_QWORD*)(v104 + 1440LL * *(int*)(v1 + 896));
  v107 = v105[166];
  v108 = v105[167];
  v109 = v105[169];
  v106[168] = v105[168];
  v106[166] = v107;
  v110 = v105[165];
  v111 = v105[163];
  v112 = v105[162];
  v113 = v105[164];
  v106[169] = v109;
  v106[167] = v108;
  v106[164] = v113;
  v106[162] = v112;
  v106[163] = v111;
  v106[165] = v110;
  v114 = *(_QWORD*)(a1 + 18736);
  v115 = (_QWORD*)(v114 + 1440LL * v3);
  v116 = (_QWORD*)(v114 + 1440LL * *(int*)(v1 + 896));
  v117 = v115[171];
  v118 = v115[173];
  v119 = v115[170];
  v116[172] = v115[172];
  v116[170] = v119;
  v116[173] = v118;
  v116[171] = v117;
  v120 = v115[175];
  v121 = v115[177];
  v122 = v115[174];
  v116[176] = v115[176];
  v116[174] = v122;
  v116[177] = v121;
  v116[175] = v120;
  *(_BYTE*)(*(_QWORD*)(a1 + 18736) + 1440LL * *(int*)(v1 + 896) + 1284) =
      *(_BYTE*)(*(_QWORD*)(a1 + 18736) + 1440LL * v3 + 1284);
  v123 = *(_QWORD*)(a1 + 18736) + 1440LL * *(int*)(v1 + 896);
  *(_QWORD*)(a1 + 17296) = *(_QWORD*)v123;
  v124 = *(_QWORD*)(v123 + 8);
  v125 = *(_QWORD*)(v123 + 16);
  v126 = *(_QWORD*)(v123 + 24);
  *(_QWORD*)(a1 + 17328) = *(_QWORD*)(v123 + 32);
  *(_QWORD*)(a1 + 17312) = v125;
  *(_QWORD*)(a1 + 17320) = v126;
  *(_QWORD*)(a1 + 17304) = v124;
  v127 = *(_QWORD*)(v123 + 56);
  LODWORD(v125) = *(_DWORD*)(v123 + 64);
  v128 = *(_QWORD*)(v123 + 40);
  *(_QWORD*)(a1 + 17344) = *(_QWORD*)(v123 + 48);
  *(_DWORD*)(a1 + 17360) = v125;
  *(_QWORD*)(a1 + 17352) = v127;
  *(_QWORD*)(a1 + 17336) = v128;
  if (a1 + 17296 == v123) {
    v141 = *(_QWORD*)(v123 + 216);
    *(_QWORD*)(a1 + 17496) = *(_QWORD*)(v123 + 200);
    *(_QWORD*)(a1 + 17512) = v141;
    v142 = *(_QWORD*)(v123 + 184);
    *(_QWORD*)(a1 + 17464) = *(_QWORD*)(v123 + 168);
    *(_QWORD*)(a1 + 17480) = v142;
    v143 = *(_QWORD*)(v123 + 152);
    *(_QWORD*)(a1 + 17432) = *(_QWORD*)(v123 + 136);
    *(_QWORD*)(a1 + 17448) = v143;
    v144 = *(_QWORD*)(v123 + 120);
    *(_QWORD*)(a1 + 17400) = *(_QWORD*)(v123 + 104);
    *(_QWORD*)(a1 + 17416) = v144;
    v145 = *(_QWORD*)(v123 + 96);
    *(_QWORD*)(a1 + 17408) = *(_QWORD*)(v123 + 112);
    *(_QWORD*)(a1 + 17392) = v145;
    v146 = *(_QWORD*)(v123 + 128);
    *(_QWORD*)(a1 + 17440) = *(_QWORD*)(v123 + 144);
    *(_QWORD*)(a1 + 17424) = v146;
    v147 = *(_QWORD*)(v123 + 160);
    *(_QWORD*)(a1 + 17472) = *(_QWORD*)(v123 + 176);
    *(_QWORD*)(a1 + 17456) = v147;
    v148 = *(_QWORD*)(v123 + 192);
    *(_QWORD*)(a1 + 17504) = *(_QWORD*)(v123 + 208);
    *(_QWORD*)(a1 + 17488) = v148;
  }
  else {
    GameRoutine_1999780(
        (__int64*)(a1 + 17368), *(_QWORD*)(v123 + 72), *(_QWORD*)(v123 + 80),
        0xCCCCCCCCCCCCCCCDLL *
            ((__int64)(*(_QWORD*)(v123 + 80) - *(_QWORD*)(v123 + 72)) >> 3));
    v129 = *(_QWORD*)(v123 + 216);
    v130 = *(_BYTE*)(v1 + 1136);
    v131 = (__int64*)(v1 + 1136);
    *(_QWORD*)(a1 + 17496) = *(_QWORD*)(v123 + 200);
    *(_QWORD*)(a1 + 17512) = v129;
    v132 = *(_QWORD*)(v123 + 184);
    *(_QWORD*)(a1 + 17464) = *(_QWORD*)(v123 + 168);
    *(_QWORD*)(a1 + 17480) = v132;
    v133 = *(_QWORD*)(v123 + 152);
    *(_QWORD*)(a1 + 17432) = *(_QWORD*)(v123 + 136);
    *(_QWORD*)(a1 + 17448) = v133;
    v134 = *(_QWORD*)(v123 + 120);
    *(_QWORD*)(a1 + 17400) = *(_QWORD*)(v123 + 104);
    *(_QWORD*)(a1 + 17416) = v134;
    v135 = *(_QWORD*)(v123 + 96);
    *(_QWORD*)(a1 + 17408) = *(_QWORD*)(v123 + 112);
    *(_QWORD*)(a1 + 17392) = v135;
    v136 = *(_QWORD*)(v123 + 128);
    *(_QWORD*)(a1 + 17440) = *(_QWORD*)(v123 + 144);
    *(_QWORD*)(a1 + 17424) = v136;
    v137 = *(_QWORD*)(v123 + 160);
    *(_QWORD*)(a1 + 17472) = *(_QWORD*)(v123 + 176);
    *(_QWORD*)(a1 + 17456) = v137;
    v138 = *(_QWORD*)(v123 + 192);
    *(_QWORD*)(a1 + 17504) = *(_QWORD*)(v123 + 208);
    *(_QWORD*)(a1 + 17488) = v138;
    v139 = *(unsigned __int8*)(v123 + 224);
    if ((v130 & 1) != 0) {
      v149 = (v139 & 1) == 0;
      v150 = v139 >> 1;
      if (v149) {
        v151 = v123 + 225;
      }
      else {
        v151 = *(_QWORD*)(v123 + 240);
      }
      if (v149) {
        v152 = v150;
      }
      else {
        v152 = *(_QWORD*)(v123 + 232);
      }
      SpineModel_64dde0(v131, v151, v152);
    }
    else if ((v139 & 1) != 0) {
      GameRoutine_64df20(v131, *(_QWORD*)(v123 + 240), *(_QWORD*)(v123 + 232));
    }
    else {
      *(_QWORD*)(v1 + 1144) = *(_QWORD*)(v123 + 232);
      v140 = *(_QWORD*)(v123 + 224);
      *(_QWORD*)(v1 + 1152) = *(_QWORD*)(v123 + 240);
      *v131 = v140;
    }
  }
  v153 = (_QWORD*)(*(_QWORD*)(a1 + 18736) + 1440LL * *v4);
  v154 = v153[165];
  *(_QWORD*)(a1 + 18600) = v153[163];
  *(_QWORD*)(a1 + 18616) = v154;
  v155 = v153[162];
  *(_QWORD*)(a1 + 18608) = v153[164];
  *(_QWORD*)(a1 + 18592) = v155;
  v156 = v153[167];
  v157 = v153[169];
  v158 = v153[166];
  *(_QWORD*)(a1 + 18640) = v153[168];
  *(_QWORD*)(a1 + 18624) = v158;
  *(_QWORD*)(a1 + 18648) = v157;
  *(_QWORD*)(a1 + 18632) = v156;
  v159 = v153[177];
  *(_QWORD*)(a1 + 18696) = v153[175];
  *(_QWORD*)(a1 + 18712) = v159;
  v160 = v153[173];
  *(_QWORD*)(a1 + 18664) = v153[171];
  *(_QWORD*)(a1 + 18680) = v160;
  v161 = v153[172];
  *(_QWORD*)(a1 + 18656) = v153[170];
  *(_QWORD*)(a1 + 18672) = v161;
  v162 = v153[176];
  *(_QWORD*)(a1 + 18688) = v153[174];
  *(_QWORD*)(a1 + 18704) = v162;
}

__int64 gfxa_1994460(__int64 result)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  float32x4_t* v2;
  float32x4_t* v3;
  unsigned __int32 v4;
  unsigned __int32 v5;
  int16x4_t v6;
  int16x4_t v7;
  int16x4_t v8;
  int16x4_t v9;
  int16x4_t v10;
  int16x4_t v11;
  int16x4_t v12;
  int16x4_t v13;
  int16x4_t v14;
  int16x4_t v15;
  int16x4_t v16;
  float32x4_t* v17;
  __int128 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int128 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int128 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  bool v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  struct {
    __int64 v122;
    _QWORD v123[5];
    __int128 v124;
    int v125;
    char gap68_[4];
    __int64 v126;
    __int64 v127;
    __int128 v128;
    __int64 v129;
    __int128 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
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
    char gap248_[8];
    _QWORD v146[133];
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    _QWORD v160[2];
  } f_;

  v1 = (float32x4_t*)(result + 0x4000);
  v2 = (float32x4_t*)result;
  v3 = (float32x4_t*)(*(_QWORD*)(result + 18736) +
                      1440LL * *(int*)(result + 17280));
  v4 = *(_DWORD*)(result + 17296);
  v5 = LANES128(*(v3)).n128_u32[0];
  f_.v122 = (__int64)v3;
  if (v5 == v4 && LANES128(*(v3)).n128_u32[2] == *(_DWORD*)(result + 17304) &&
      LANES128(v3[6]).n128_u8[0] == *(unsigned __int8*)(result + 17392)) {
    LANES64(v6).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(v3[3], *(float32x4_t*)(result + 17344))))
            .n64_u64[0];
    if ((LANES64(v6).n64_u8[0] & 1) != 0 && (LANES64(v6).n64_u8[2] & 1) != 0 &&
        (LANES64(v6).n64_u8[4] & 1) != 0 && (LANES64(v6).n64_u8[6] & 1) != 0 &&
        LANES128(v3[1]).n128_u32[0] == *(_DWORD*)(result + 17312) &&
        LANES128(v3[1]).n128_u32[2] == *(_DWORD*)(result + 17320) &&
        LANES128(v3[4]).n128_f32[0] == *(float*)(result + 17360) &&
        LANES128(v3[2]).n128_u32[0] == *(_DWORD*)(result + 17328) &&
        LANES128(v3[2]).n128_u32[1] == *(_DWORD*)(result + 17332)) {
      result =
          GameRoutine_1999be0((__int64)&f_.v122, (__int64*)(result + 17368));
      if ((result & 1) != 0 &&
          LANES128(*(v3)).n128_u32[3] == LANES128(v1[57]).n128_u32[3] &&
          LANES128(v3[1]).n128_u32[1] == LANES128(v1[58]).n128_u32[1] &&
          LANES128(*(v3)).n128_u32[1] == LANES128(v1[57]).n128_u32[1] &&
          LANES128(v3[6]).n128_u8[1] == LANES128(v1[63]).n128_u8[1] &&
          LANES128(v3[6]).n128_u8[2] == LANES128(v1[63]).n128_u8[2] &&
          LANES128(v3[6]).n128_f32[2] == LANES128(v1[63]).n128_f32[2] &&
          LANES128(v3[6]).n128_u8[3] == LANES128(v1[63]).n128_u8[3] &&
          LANES128(v3[6]).n128_u8[4] == LANES128(v1[63]).n128_u8[4] &&
          LANES128(v3[6]).n128_u8[5] == LANES128(v1[63]).n128_u8[5] &&
          LANES128(v3[1]).n128_u32[3] == LANES128(v1[58]).n128_u32[3] &&
          LANES128(v3[6]).n128_u32[3] == LANES128(v1[63]).n128_u32[3]) {
        LANES64(v7).n64_u64[0] =
            LANES64_OF(vmovn_s32(vceqq_f32(v3[7], v2[1088]))).n64_u64[0];
        if ((LANES64(v7).n64_u8[0] & 1) != 0 &&
            (LANES64(v7).n64_u8[2] & 1) != 0 &&
            (LANES64(v7).n64_u8[4] & 1) != 0 &&
            (LANES64(v7).n64_u8[6] & 1) != 0 &&
            LANES128(v3[8]).n128_u32[0] == LANES128(v1[65]).n128_u32[0]) {
          LANES64(v8).n64_u64[0] =
              LANES64_OF(vmovn_s32(vceqq_f32(v3[9], v2[1090]))).n64_u64[0];
          if ((LANES64(v8).n64_u8[0] & 1) != 0 &&
              (LANES64(v8).n64_u8[2] & 1) != 0 &&
              (LANES64(v8).n64_u8[4] & 1) != 0 &&
              LANES128(v3[10]).n128_u64[0] == LANES128(v2[1091]).n128_u64[0]) {
            result = PrimitiveDrawManager_1999ce0(v3 + 11, v2 + 1092);
            if ((result & 1) != 0 &&
                LANES128(v3[13]).n128_u64[0] ==
                    LANES128(v2[1094]).n128_u64[0] &&
                LANES128(v3[13]).n128_u8[8] == LANES128(v1[70]).n128_u8[8] &&
                LANES128(v3[13]).n128_u32[3] == LANES128(v1[70]).n128_u32[3]) {
              result = ((__int64 (*)(unsigned __int8*,
                                     unsigned __int8*))GameRoutine_930fd0)(
                  (unsigned __int8*)&v3[14], (unsigned __int8*)&v2[1095]);
              if ((result & 1) != 0) {
                LANES64(v9).n64_u64[0] =
                    LANES64_OF(vmovn_s32(vceqq_f32(v3[81], v2[1162])))
                        .n64_u64[0];
                if ((LANES64(v9).n64_u8[0] & 1) != 0 &&
                    (LANES64(v9).n64_u8[2] & 1) != 0 &&
                    (LANES64(v9).n64_u8[4] & 1) != 0) {
                  LANES64(v10).n64_u64[0] =
                      LANES64_OF(vmovn_s32(vceqq_f32(v3[82], v2[1163])))
                          .n64_u64[0];
                  if ((LANES64(v10).n64_u8[0] & 1) != 0 &&
                      (LANES64(v10).n64_u8[2] & 1) != 0 &&
                      (LANES64(v10).n64_u8[4] & 1) != 0) {
                    LANES64(v11).n64_u64[0] =
                        LANES64_OF(vmovn_s32(vceqq_f32(v3[83], v2[1164])))
                            .n64_u64[0];
                    if ((LANES64(v11).n64_u8[0] & 1) != 0 &&
                        (LANES64(v11).n64_u8[2] & 1) != 0 &&
                        (LANES64(v11).n64_u8[4] & 1) != 0) {
                      LANES64(v12).n64_u64[0] =
                          LANES64_OF(vmovn_s32(vceqq_f32(v3[84], v2[1165])))
                              .n64_u64[0];
                      if ((LANES64(v12).n64_u8[0] & 1) != 0 &&
                          (LANES64(v12).n64_u8[2] & 1) != 0 &&
                          (LANES64(v12).n64_u8[4] & 1) != 0) {
                        LANES64(v13).n64_u64[0] =
                            LANES64_OF(vmovn_s32(vceqq_f32(v3[85], v2[1166])))
                                .n64_u64[0];
                        if ((LANES64(v13).n64_u8[0] & 1) != 0 &&
                            (LANES64(v13).n64_u8[2] & 1) != 0 &&
                            (LANES64(v13).n64_u8[4] & 1) != 0) {
                          LANES64(v14).n64_u64[0] =
                              LANES64_OF(vmovn_s32(vceqq_f32(v3[86], v2[1167])))
                                  .n64_u64[0];
                          if ((LANES64(v14).n64_u8[0] & 1) != 0 &&
                              (LANES64(v14).n64_u8[2] & 1) != 0 &&
                              (LANES64(v14).n64_u8[4] & 1) != 0) {
                            LANES64(v15).n64_u64[0] =
                                LANES64_OF(
                                    vmovn_s32(vceqq_f32(v3[87], v2[1168])))
                                    .n64_u64[0];
                            if ((LANES64(v15).n64_u8[0] & 1) != 0 &&
                                (LANES64(v15).n64_u8[2] & 1) != 0 &&
                                (LANES64(v15).n64_u8[4] & 1) != 0) {
                              LANES64(v16).n64_u64[0] =
                                  LANES64_OF(
                                      vmovn_s32(vceqq_f32(v3[88], v2[1169])))
                                      .n64_u64[0];
                              if ((LANES64(v16).n64_u8[0] & 1) != 0 &&
                                  (LANES64(v16).n64_u8[2] & 1) != 0 &&
                                  (LANES64(v16).n64_u8[4] & 1) != 0 &&
                                  LANES128(v3[80]).n128_u8[4] ==
                                      LANES128(v1[137]).n128_u8[4]) {
                                return result;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v17 = v1 + 57;
  if (LANES128(v3[16]).n128_u32[LANES128(v3[16]).n128_i32[0] + 1] != 0) {
    *(_QWORD*)&v18 = 0x3F8000003F800000LL;
    *((_QWORD*)&v18 + 1) = 0x3F8000003F800000LL;
    memset((char*)f_.v123 + 4, 0, 28);
    f_.v129 = 1056964608;
    f_.v122 = 0x200000000LL;
    f_.v126 = 0;
    f_.v127 = 0;
    *(_QWORD*)&f_.v128 = 0;
    *(_QWORD*)((char*)&f_.v128 + 6) = 0;
    LODWORD(f_.v131) = 0;
    f_.v133 = 0;
    f_.v134 = 0;
    f_.v135 = 0;
    LOBYTE(f_.v138) = 0;
    LODWORD(f_.v123[0]) = 2;
    f_.v125 = 1065353216;
    f_.v137 = 0x3F80000000000000LL;
    DWORDn(f_.v138, sizeof(f_.v138) / 4 - 1) = 1065353216;
    f_.v124 = v18;
    f_.v130 = GameData_1a83190;
    f_.v141 = 0;
    LOBYTE(f_.v142) = 0;
    DWORDn(f_.v142, sizeof(f_.v142) / 4 - 1) = 0;
    LOWORD(f_.v143) = 0;
    v19 = *((_QWORD*)GameData_212c960 + 1);
    f_.v139 = *(_QWORD*)GameData_212c960;
    f_.v140 = v19;
    GameRoutine_1a0ba50((__int64)f_.v146, 0, 0x405u);
    v20 = LANES128(v2[1171]).n128_u64[1];
    v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    v23 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
    v24 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    v25 = *(_QWORD*)GameData_212c2a0;
    v26 = *((_QWORD*)GameData_212c2a0 + 1);
    v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    f_.v147 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    f_.v155 = f_.v147;
    f_.v148 = v21;
    f_.v149 = v22;
    f_.v150 = v23;
    f_.v151 = v24;
    f_.v146[130] = v25;
    f_.v146[131] = v26;
    f_.v146[132] = v27;
    f_.v159 = v24;
    f_.v158 = v23;
    f_.v157 = v22;
    f_.v156 = v21;
    f_.v154 = v27;
    f_.v153 = v26;
    f_.v152 = v25;
    *(_DWORD*)((char*)f_.v160 + 7) = 0;
    v28 = LANES128(v2[1172]).n128_u64[0];
    f_.v160[0] = 0;
    if (v20 >= v28) {
      v76 =
          PrimitiveDrawManager_19953e0((__int64*)&v2[1171], (__int64)&f_.v122);
      v77 = f_.v143;
      LANES128(v2[1171]).n128_u64[1] = v76;
      if ((v77 & 1) != 0 && f_.v145 != 0) {
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, f_.v145);
      }
    }
    else {
      v29 = f_.v124;
      v30 = f_.v125;
      *(_QWORD*)(v20 + 72) = 0;
      *(_QWORD*)(v20 + 80) = 0;
      f_.v126 = 0;
      f_.v127 = 0;
      *(_QWORD*)&f_.v128 = 0;
      *(_OWORD*)(v20 + 48) = v29;
      v31 = f_.v123[1];
      v32 = f_.v123[2];
      v34 = f_.v122;
      v33 = f_.v123[0];
      v36 = f_.v123[3];
      v35 = f_.v123[4];
      *(_DWORD*)(v20 + 64) = v30;
      *(_QWORD*)(v20 + 16) = v31;
      *(_QWORD*)(v20 + 24) = v32;
      *(_QWORD*)(v20 + 32) = v36;
      *(_QWORD*)(v20 + 40) = v35;
      *(_QWORD*)v20 = v34;
      *(_QWORD*)(v20 + 8) = v33;
      v37 = f_.v139;
      v38 = f_.v141;
      v39 = f_.v142;
      v40 = f_.v137;
      v41 = f_.v138;
      *(_QWORD*)(v20 + 200) = f_.v140;
      *(_QWORD*)(v20 + 208) = v38;
      v42 = f_.v135;
      v43 = f_.v136;
      *(_QWORD*)(v20 + 184) = v41;
      *(_QWORD*)(v20 + 192) = v37;
      *(_QWORD*)(v20 + 168) = v43;
      *(_QWORD*)(v20 + 176) = v40;
      v44 = f_.v131;
      v45 = f_.v133;
      v46 = f_.v134;
      *(_QWORD*)(v20 + 136) = f_.v132;
      *(_QWORD*)(v20 + 144) = v45;
      *(_QWORD*)(v20 + 152) = v46;
      *(_QWORD*)(v20 + 160) = v42;
      v47 = *((_QWORD*)&f_.v128 + 1);
      v48 = f_.v129;
      *(_QWORD*)(v20 + 88) = 0;
      *(_QWORD*)(v20 + 96) = v47;
      v49 = f_.v130;
      *(_QWORD*)(v20 + 104) = v48;
      *(_OWORD*)(v20 + 112) = v49;
      *(_QWORD*)(v20 + 128) = v44;
      v50 = f_.v143;
      v51 = f_.v144;
      *(_QWORD*)(v20 + 216) = v39;
      *(_QWORD*)(v20 + 224) = v50;
      v52 = f_.v145;
      *(_QWORD*)(v20 + 232) = v51;
      *(_QWORD*)(v20 + 240) = v52;
      GameRoutine_1a0b950(v20 + 256, (__int64)f_.v146, 0x49Bu);
      LANES128(v2[1171]).n128_u64[1] = v20 + 1440;
    }
    v79 = f_.v126;
    if (f_.v126 != 0) {
      v80 = f_.v127;
      if (f_.v126 != f_.v127) {
        v81 = fw_memory_g_heap_manager_ptr;
        do {
          if ((*(_BYTE*)(v80 - 32) & 1) != 0) {
            v82 = *(_QWORD*)(v80 - 16);
            if (v82 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v81 + 200LL) != 0) {
                v83 = 128;
              }
              else {
                v83 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v81 + v83, v82);
            }
          }
          v80 -= 40;
        } while (v80 != v79);
      }
      v84 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v84 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v79);
    }
    LANES128(v1[56]).n128_u32[0] =
        -1 - 1527099483 * ((LANES128(v2[1171]).n128_u64[1] -
                            LANES128(v2[1171]).n128_u64[0]) >>
                           5);
    result = PrimitiveDrawManager_1995020((__int64)&v2[1173], &v1[56]);
    v3 = (float32x4_t*)(LANES128(v2[1171]).n128_u64[0] +
                        1440LL * LANES128(v1[56]).n128_i32[0]);
    LANES128(v3[48]).n128_u32[LANES128(v3[16]).n128_i32[0] + 1] =
        LANES128(v1[176]).n128_u32[0] + 1;
    v85 = LANES128(v2[1162]).n128_u64[1];
    LANES128(v3[82]).n128_u64[1] = LANES128(v2[1163]).n128_u64[1];
    LANES128(v3[81]).n128_u64[1] = v85;
    v86 = LANES128(v2[1165]).n128_u64[1];
    LANES128(v3[83]).n128_u64[1] = LANES128(v2[1164]).n128_u64[1];
    LANES128(v3[84]).n128_u64[1] = v86;
    v87 = LANES128(v2[1162]).n128_u64[0];
    LANES128(v3[82]).n128_u64[0] = LANES128(v2[1163]).n128_u64[0];
    LANES128(v3[81]).n128_u64[0] = v87;
    v88 = LANES128(v2[1164]).n128_u64[0];
    LANES128(v3[84]).n128_u64[0] = LANES128(v2[1165]).n128_u64[0];
    LANES128(v3[83]).n128_u64[0] = v88;
    v89 = LANES128(v2[1166]).n128_u64[1];
    v90 = LANES128(v2[1167]).n128_u64[1];
    v91 = LANES128(v2[1166]).n128_u64[0];
    LANES128(v3[86]).n128_u64[0] = LANES128(v2[1167]).n128_u64[0];
    LANES128(v3[85]).n128_u64[0] = v91;
    LANES128(v3[86]).n128_u64[1] = v90;
    LANES128(v3[85]).n128_u64[1] = v89;
    v92 = LANES128(v2[1168]).n128_u64[1];
    v93 = LANES128(v2[1169]).n128_u64[1];
    v94 = LANES128(v2[1169]).n128_u64[0];
    LANES128(v3[87]).n128_u64[0] = LANES128(v2[1168]).n128_u64[0];
    LANES128(v3[88]).n128_u64[0] = v94;
    LANES128(v3[88]).n128_u64[1] = v93;
    LANES128(v3[87]).n128_u64[1] = v92;
    LANES128(*(v3)).n128_u64[0] = LANES128(*(v17)).n128_u64[0];
    v95 = LANES128(v1[57]).n128_u64[1];
    v96 = LANES128(v1[58]).n128_u64[0];
    v97 = LANES128(v1[59]).n128_u64[0];
    LANES128(v3[1]).n128_u64[1] = LANES128(v1[58]).n128_u64[1];
    LANES128(v3[2]).n128_u64[0] = v97;
    LANES128(*(v3)).n128_u64[1] = v95;
    LANES128(v3[1]).n128_u64[0] = v96;
    v98 = LANES128(v1[59]).n128_u64[1];
    v99 = LANES128(v1[60]).n128_u64[0];
    v100 = LANES128(v1[60]).n128_u64[1];
    LANES128(v3[4]).n128_u32[0] = LANES128(v1[61]).n128_u32[0];
    LANES128(v3[3]).n128_u64[0] = v99;
    LANES128(v3[3]).n128_u64[1] = v100;
    LANES128(v3[2]).n128_u64[1] = v98;
    if (v3 != v17) {
      GameRoutine_1999780(
          &LANES128(v3[4]).n128_i64[1], LANES128(v2[1085]).n128_i64[1],
          LANES128(v2[1086]).n128_i64[0],
          0xCCCCCCCCCCCCCCCDLL * ((__int64)(LANES128(v2[1086]).n128_u64[0] -
                                            LANES128(v2[1085]).n128_u64[1]) >>
                                  3));
      v101 = LANES128(v2[1094]).n128_u64[1];
      LANES128(v3[12]).n128_u64[1] = LANES128(v2[1093]).n128_u64[1];
      LANES128(v3[13]).n128_u64[1] = v101;
      v102 = LANES128(v2[1092]).n128_u64[1];
      LANES128(v3[10]).n128_u64[1] = LANES128(v2[1091]).n128_u64[1];
      LANES128(v3[11]).n128_u64[1] = v102;
      v103 = LANES128(v2[1090]).n128_u64[1];
      LANES128(v3[8]).n128_u64[1] = LANES128(v2[1089]).n128_u64[1];
      LANES128(v3[9]).n128_u64[1] = v103;
      v104 = LANES128(v2[1088]).n128_u64[1];
      LANES128(v3[6]).n128_u64[1] = LANES128(v2[1087]).n128_u64[1];
      LANES128(v3[7]).n128_u64[1] = v104;
      v105 = LANES128(v2[1087]).n128_u64[0];
      LANES128(v3[7]).n128_u64[0] = LANES128(v2[1088]).n128_u64[0];
      LANES128(v3[6]).n128_u64[0] = v105;
      v106 = LANES128(v2[1089]).n128_u64[0];
      LANES128(v3[9]).n128_u64[0] = LANES128(v2[1090]).n128_u64[0];
      LANES128(v3[8]).n128_u64[0] = v106;
      v107 = LANES128(v2[1091]).n128_u64[0];
      LANES128(v3[11]).n128_u64[0] = LANES128(v2[1092]).n128_u64[0];
      LANES128(v3[10]).n128_u64[0] = v107;
      v108 = LANES128(v2[1093]).n128_u64[0];
      LANES128(v3[13]).n128_u64[0] = LANES128(v2[1094]).n128_u64[0];
      LANES128(v3[12]).n128_u64[0] = v108;
      result = (__int64)&v3[14];
      v75 = LANES128(v1[71]).n128_u8[0];
      if ((LANES128(v3[14]).n128_u8[0] & 1) == 0) {
        if ((v75 & 1) == 0) {
          goto LABEL_92;
        }
        goto LABEL_70;
      }
      goto LABEL_94;
    }
  }
  else {
    v53 = LANES128(v2[1165]).n128_u64[1];
    LANES128(v3[83]).n128_u64[1] = LANES128(v2[1164]).n128_u64[1];
    LANES128(v3[84]).n128_u64[1] = v53;
    v54 = LANES128(v2[1163]).n128_u64[1];
    LANES128(v3[81]).n128_u64[1] = LANES128(v2[1162]).n128_u64[1];
    LANES128(v3[82]).n128_u64[1] = v54;
    v55 = LANES128(v2[1162]).n128_u64[0];
    LANES128(v3[82]).n128_u64[0] = LANES128(v2[1163]).n128_u64[0];
    LANES128(v3[81]).n128_u64[0] = v55;
    v56 = LANES128(v2[1164]).n128_u64[0];
    LANES128(v3[84]).n128_u64[0] = LANES128(v2[1165]).n128_u64[0];
    LANES128(v3[83]).n128_u64[0] = v56;
    v57 = LANES128(v2[1169]).n128_u64[1];
    LANES128(v3[87]).n128_u64[1] = LANES128(v2[1168]).n128_u64[1];
    LANES128(v3[88]).n128_u64[1] = v57;
    v58 = LANES128(v2[1167]).n128_u64[1];
    LANES128(v3[85]).n128_u64[1] = LANES128(v2[1166]).n128_u64[1];
    LANES128(v3[86]).n128_u64[1] = v58;
    v59 = LANES128(v2[1167]).n128_u64[0];
    LANES128(v3[85]).n128_u64[0] = LANES128(v2[1166]).n128_u64[0];
    LANES128(v3[86]).n128_u64[0] = v59;
    v60 = LANES128(v2[1169]).n128_u64[0];
    LANES128(v3[87]).n128_u64[0] = LANES128(v2[1168]).n128_u64[0];
    LANES128(v3[88]).n128_u64[0] = v60;
    LANES128(*(v3)).n128_u64[0] = LANES128(*(v17)).n128_u64[0];
    v61 = LANES128(v1[57]).n128_u64[1];
    v62 = LANES128(v1[58]).n128_u64[0];
    v63 = LANES128(v1[59]).n128_u64[0];
    LANES128(v3[1]).n128_u64[1] = LANES128(v1[58]).n128_u64[1];
    LANES128(v3[2]).n128_u64[0] = v63;
    LANES128(*(v3)).n128_u64[1] = v61;
    LANES128(v3[1]).n128_u64[0] = v62;
    v64 = LANES128(v1[59]).n128_u64[1];
    v65 = LANES128(v1[60]).n128_u64[0];
    v66 = LANES128(v1[60]).n128_u64[1];
    LANES128(v3[4]).n128_u32[0] = LANES128(v1[61]).n128_u32[0];
    LANES128(v3[3]).n128_u64[0] = v65;
    LANES128(v3[3]).n128_u64[1] = v66;
    LANES128(v3[2]).n128_u64[1] = v64;
    if (v3 != v17) {
      GameRoutine_1999780(
          &LANES128(v3[4]).n128_i64[1], LANES128(v2[1085]).n128_i64[1],
          LANES128(v2[1086]).n128_i64[0],
          0xCCCCCCCCCCCCCCCDLL * ((__int64)(LANES128(v2[1086]).n128_u64[0] -
                                            LANES128(v2[1085]).n128_u64[1]) >>
                                  3));
      v67 = LANES128(v2[1094]).n128_u64[1];
      LANES128(v3[12]).n128_u64[1] = LANES128(v2[1093]).n128_u64[1];
      LANES128(v3[13]).n128_u64[1] = v67;
      v68 = LANES128(v2[1092]).n128_u64[1];
      LANES128(v3[10]).n128_u64[1] = LANES128(v2[1091]).n128_u64[1];
      LANES128(v3[11]).n128_u64[1] = v68;
      v69 = LANES128(v2[1090]).n128_u64[1];
      LANES128(v3[8]).n128_u64[1] = LANES128(v2[1089]).n128_u64[1];
      LANES128(v3[9]).n128_u64[1] = v69;
      v70 = LANES128(v2[1088]).n128_u64[1];
      LANES128(v3[6]).n128_u64[1] = LANES128(v2[1087]).n128_u64[1];
      LANES128(v3[7]).n128_u64[1] = v70;
      v71 = LANES128(v2[1087]).n128_u64[0];
      LANES128(v3[7]).n128_u64[0] = LANES128(v2[1088]).n128_u64[0];
      LANES128(v3[6]).n128_u64[0] = v71;
      v72 = LANES128(v2[1089]).n128_u64[0];
      LANES128(v3[9]).n128_u64[0] = LANES128(v2[1090]).n128_u64[0];
      LANES128(v3[8]).n128_u64[0] = v72;
      v73 = LANES128(v2[1091]).n128_u64[0];
      LANES128(v3[11]).n128_u64[0] = LANES128(v2[1092]).n128_u64[0];
      LANES128(v3[10]).n128_u64[0] = v73;
      v74 = LANES128(v2[1093]).n128_u64[0];
      LANES128(v3[13]).n128_u64[0] = LANES128(v2[1094]).n128_u64[0];
      LANES128(v3[12]).n128_u64[0] = v74;
      result = (__int64)&v3[14];
      v75 = LANES128(v1[71]).n128_u8[0];
      if ((LANES128(v3[14]).n128_u8[0] & 1) == 0) {
        if ((v75 & 1) == 0) {
        LABEL_92:
          *(_QWORD*)(result + 8) = LANES128(v1[71]).n128_u64[1];
          v109 = LANES128(v1[71]).n128_u64[0];
          *(_QWORD*)(result + 16) = LANES128(v1[72]).n128_u64[0];
          *(_QWORD*)result = v109;
          goto LABEL_101;
        }
      LABEL_70:
        result = (__int64)GameRoutine_64df20((_QWORD*)result,
                                             LANES128(v2[1096]).n128_i64[0],
                                             LANES128(v2[1095]).n128_u64[1]);
      LABEL_101:
        LANES128(v3[80]).n128_u8[4] = LANES128(v1[137]).n128_u8[4];
        return result;
      }
    LABEL_94:
      v118 = (v75 & 1) == 0;
      v119 = v75 >> 1;
      if (v118) {
        v120 = (__int64)LANES128(v2[1095]).n128_i64 + 1;
      }
      else {
        v120 = LANES128(v2[1096]).n128_i64[0];
      }
      if (v118) {
        v121 = v119;
      }
      else {
        v121 = LANES128(v2[1095]).n128_u64[1];
      }
      result = (__int64)SpineModel_64dde0((__int64*)result, v120, v121);
      goto LABEL_101;
    }
  }
  v110 = LANES128(v2[1094]).n128_u64[1];
  LANES128(v3[12]).n128_u64[1] = LANES128(v2[1093]).n128_u64[1];
  LANES128(v3[13]).n128_u64[1] = v110;
  v111 = LANES128(v2[1092]).n128_u64[1];
  LANES128(v3[10]).n128_u64[1] = LANES128(v2[1091]).n128_u64[1];
  LANES128(v3[11]).n128_u64[1] = v111;
  v112 = LANES128(v2[1090]).n128_u64[1];
  LANES128(v3[8]).n128_u64[1] = LANES128(v2[1089]).n128_u64[1];
  LANES128(v3[9]).n128_u64[1] = v112;
  v113 = LANES128(v2[1088]).n128_u64[1];
  LANES128(v3[6]).n128_u64[1] = LANES128(v2[1087]).n128_u64[1];
  LANES128(v3[7]).n128_u64[1] = v113;
  v114 = LANES128(v2[1087]).n128_u64[0];
  LANES128(v3[7]).n128_u64[0] = LANES128(v2[1088]).n128_u64[0];
  LANES128(v3[6]).n128_u64[0] = v114;
  v115 = LANES128(v2[1089]).n128_u64[0];
  LANES128(v3[9]).n128_u64[0] = LANES128(v2[1090]).n128_u64[0];
  LANES128(v3[8]).n128_u64[0] = v115;
  v116 = LANES128(v2[1091]).n128_u64[0];
  LANES128(v3[11]).n128_u64[0] = LANES128(v2[1092]).n128_u64[0];
  LANES128(v3[10]).n128_u64[0] = v116;
  v117 = LANES128(v2[1093]).n128_u64[0];
  LANES128(v3[13]).n128_u64[0] = LANES128(v2[1094]).n128_u64[0];
  LANES128(v3[12]).n128_u64[0] = v117;
  goto LABEL_101;
}

#pragma GCC visibility pop
