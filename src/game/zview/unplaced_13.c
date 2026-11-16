#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_d47980(__int64*, _QWORD*);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__int16* GameRoutine_dacf80(__int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterAppearance_10743e0(__int64);
__int64 CharacterController_d48b40(_QWORD*, __int64, float, float, float);
__int64 GameRoutine_d1cf60(__int64, int);
__int64 Signal_d30a60(int*, const char*, __int64, __int64);
__int64 StateActionBase_Unknown3(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a020(char*, const char*);
double GameRoutine_d1cbc0(__int64, int);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1ad3c32;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern __int64 (*GameData_1fdbe70[])();
extern __int64 (*GameData_1fdbec0[])();
extern __int64 (*GameData_1fdbf40[])();
extern __int64 (*GameData_1fdc000[])();
extern __int64 GameData_220b6f0;
extern __int64 GameData_22110c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** GameData_212fed8;
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_22110ac __attribute__((aligned(4)));
extern GameAlign_22110ac GameData_22110ac;
void CharacterController_d449c0(__int64);
void CharacterController_d48660(__int64, unsigned __int32, int*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_zview_d43ba0(__int64 a1);

void game_zview_d43ba0(__int64 a1)
{
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int16* v7;
  _QWORD* v8;
  __int16* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int32 v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  __int64* v38;
  _QWORD* v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  _QWORD* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  bool v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  int v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  float v83;
  __int64 v84;
  float v85;
  float v86;
  __int64 v87;
  __int64 v88;
  float v90;
  double v91;
  float v92;
  char v93;
  unsigned __int64 v94;
  __int64 v95;
  bool v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  float v104;
  float v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
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
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float* v131;
  float v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  _QWORD* v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  int* v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  int v156;
  int v157;
  __int64 v158;
  __int64 v159;
  float v160;
  int v161;
  __int64 v162;
  int v163;
  __int64 v164;
  int v165;
  struct {
    __int64 v166;
    __int64 v167;
    int v168;
    char v169;
    char gap21_[3];
    char v170;
    char gap25_[3];
    char v171;
    char gap29_[3];
    int v172;
    char v173;
    char gap37_[3];
    char v174;
    char gap41_[3];
    char v175;
    char gap45_[3];
    __int64 (**v176)();
    __int64 v177;
    char gap64_[16];
    __int64 (***v178)();
    char gap88_[16];
    char v179;
    char v180[15];
    __int64 v181;
    char gap128_[8];
    __int64 v182;
  } f_;

  StateActionBase_Unknown3(a1);
  HubCharacterNatives_ceca80(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 8LL),
                             0x8000000000LL, 1);
  v2 = *(unsigned __int8*)(a1 + 128);
  v3 = (v2 & 1) == 0;
  v4 = v2 >> 1;
  if (v3) {
    v5 = a1 + 129;
  }
  else {
    v5 = *(_QWORD*)(a1 + 144);
  }
  if (v3) {
    v6 = v4;
  }
  else {
    v6 = *(_QWORD*)(a1 + 136);
  }
  v7 = GameRoutine_dacf80(v5, v6);
  v8 = (_QWORD*)(a1 + 160);
  v9 = v7;
  if ((__int16*)(a1 + 160) != v7) {
    v10 = *(unsigned __int8*)v7;
    if ((*(_BYTE*)v8 & 1) != 0) {
      v13 = (v10 & 1) == 0;
      v14 = v10 >> 1;
      if (v13) {
        v15 = (__int64)v7 + 1;
      }
      else {
        v15 = *((_QWORD*)v7 + 2);
      }
      if (v13) {
        v16 = v14;
      }
      else {
        v16 = *((_QWORD*)v7 + 1);
      }
      SpineModel_64dde0((__int64*)(a1 + 160), v15, v16);
    }
    else if ((v10 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 160), *((_QWORD*)v7 + 2),
                         *((_QWORD*)v7 + 1));
    }
    else {
      v11 = *(_QWORD*)v7;
      v12 = *((_QWORD*)v7 + 2);
      *(_QWORD*)(a1 + 168) = *((_QWORD*)v7 + 1);
      *(_QWORD*)(a1 + 176) = v12;
      *v8 = v11;
    }
    v17 = (__int64*)(a1 + 184);
    v18 = *((unsigned __int8*)v9 + 24);
    if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
      v21 = (v18 & 1) == 0;
      v22 = v18 >> 1;
      if (v21) {
        v23 = (__int64)v9 + 25;
      }
      else {
        v23 = *((_QWORD*)v9 + 5);
      }
      if (v21) {
        v24 = v22;
      }
      else {
        v24 = *((_QWORD*)v9 + 4);
      }
      SpineModel_64dde0(v17, v23, v24);
    }
    else if ((v18 & 1) != 0) {
      GameRoutine_64df20(v17, *((_QWORD*)v9 + 5), *((_QWORD*)v9 + 4));
    }
    else {
      v19 = *((_QWORD*)v9 + 3);
      v20 = *((_QWORD*)v9 + 5);
      *(_QWORD*)(a1 + 192) = *((_QWORD*)v9 + 4);
      *(_QWORD*)(a1 + 200) = v20;
      *v17 = v19;
    }
  }
  v26 = *((_QWORD*)v9 + 6);
  v25 = *((_QWORD*)v9 + 7);
  f_.v170 = 0;
  f_.v171 = 0;
  f_.v174 = 0;
  f_.v175 = 0;
  f_.v168 = 0;
  f_.v169 = 1;
  f_.v173 = 1;
  *(_QWORD*)(a1 + 208) = v26;
  *(_QWORD*)(a1 + 216) = v25;
  v27 = *((_QWORD*)v9 + 9);
  v28 = *((_QWORD*)v9 + 10);
  v29 = *((_QWORD*)v9 + 11);
  v30 = *(_DWORD*)(a1 + 220);
  *(_QWORD*)(a1 + 224) = *((_QWORD*)v9 + 8);
  *(_QWORD*)(a1 + 232) = v27;
  *(_QWORD*)(a1 + 240) = v28;
  *(_QWORD*)(a1 + 248) = v29;
  f_.v172 = *(_DWORD*)(a1 + 224);
  CharacterController_d48660(a1, v30, &f_.v168);
  v31 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  v32 = 0x0.0p+0f;
  v33 = 0x0.0p+0f;
  if (v31 != 0 && *(_DWORD*)(v31 + 8) != 0) {
    if (*(float*)(v31 + 24) >= *(float*)(v31 + 92)) {
      v33 = *(float*)(v31 + 24);
    }
    else {
      v33 = *(float*)(v31 + 92);
    }
  }
  v34 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  if (v34 != 0) {
    v35 = *(_QWORD*)(v34 + 48);
    if (*(_QWORD*)(v34 + 40) == v35) {
      v36 = 0x0.0p+0f;
    }
    else {
      v36 = *(float*)(v35 - 4);
    }
    if (v36 >= *(float*)(v34 + 36)) {
      v32 = v36;
    }
    else {
      v32 = *(float*)(v34 + 36);
    }
  }
  if ((float)(v32 - v33) <= 0x1.99999a0000000p-3f) {
    v37 = v32 - v33;
  }
  else {
    v37 = 0x1.99999a0000000p-3f;
  }
  if (v37 > 0x0.0p+0f) {
    CharacterController_d48b40((_QWORD*)a1,
                               *(unsigned int*)(*(_QWORD*)(a1 + 8) + 364LL) |
                                   0x100000000LL,
                               *(float*)(a1 + 152), *(float*)(a1 + 156), v37);
  }
  v38 = (__int64*)fw_memory_g_heap_manager_ptr;
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v40 = *(_QWORD*)(a1 + 336);
  v39[1] = 0;
  v39[2] = 0;
  v39[5] = 0;
  v39[6] = 0;
  v39[7] = 0;
  v39[8] = 0;
  v39[9] = 0;
  v39[10] = 0;
  v39[11] = 0;
  v39[12] = 0;
  v39[13] = 0;
  v39[14] = 0;
  v39[15] = 0;
  v39[16] = 0;
  v39[17] = 0;
  v39[18] = 0;
  v39[18] = 0;
  v39[19] = 0;
  *v39 = GameData_1fdbe70;
  v39[19] = 0;
  v39[20] = 0;
  v39[20] = 0;
  v39[21] = 0;
  v39[22] = 0;
  v39[23] = 0;
  *(_QWORD*)((char*)v39 + 100) = 0;
  *(_QWORD*)((char*)v39 + 108) = 0;
  *(_QWORD*)((char*)v39 + 116) = 0;
  *(_QWORD*)((char*)v39 + 121) = 0;
  *(_QWORD*)(a1 + 336) = v39;
  *((_DWORD*)v39 + 24) = 1065353216;
  v39[4] = 0;
  *(_QWORD*)(a1 + 328) = v39 + 4;
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v40);
  }
  v41 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL) + 36LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22110c8) != 0) {
    GameData_22110c0 = 0x3F80000000000000LL;
    __cxa_guard_release((__int64)&GameData_22110c8);
  }
  v42 = v41 +
        (float)(roundf(v41 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v42 <= 0x1.921fb60000000p+0f) {
    v44 = 0x1.0000000000000p+0f;
    if (v42 >= -0x1.921fb60000000p+0f) {
      goto LABEL_56;
    }
    v43 = -0x1.921fb60000000p+1f;
  }
  else {
    v43 = 0x1.921fb60000000p+1f;
  }
  v42 = v43 - v42;
  v44 = -0x1.0000000000000p+0f;
LABEL_56:
  v45 =
      v42 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v42 *
                                                                                                    v42))) *
                                                                            (float)(v42 *
                                                                                    v42))) *
                                                         (float)(v42 * v42))) *
                                         (float)(v42 * v42))) *
                      (float)(v42 * v42)) +
              0x1.0000000000000p+0f);
  v46 = *(_QWORD*)(a1 + 328);
  v47 =
      v44 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            (float)(v42 *
                                                                                                    v42))) *
                                                                            (float)(v42 *
                                                                                    v42))) *
                                                         (float)(v42 * v42))) *
                                         (float)(v42 * v42))) *
                      (float)(v42 * v42)) +
              0x1.0000000000000p+0f);
  v48 = (float)(PSEUDO_UNFUSED(v45 * *((float*)&GameData_22110c0 + 1))) +
        (float)(*(float*)&GameData_22110c0 * v47);
  v49 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v47)) -
        (float)(*(float*)&GameData_22110c0 * v45);
  if ((*(_BYTE*)(v46 + 104) & 1) == 0) {
    *(_BYTE*)(v46 + 104) = 1;
  }
  *(float*)(v46 + 96) = v48;
  *(float*)(v46 + 100) = v49;
  v50 = *(_QWORD**)(a1 + 328);
  if (v50 != v8) {
    v51 = *(unsigned __int8*)v8;
    if ((*(_BYTE*)v50 & 1) != 0) {
      v54 = (v51 & 1) == 0;
      v55 = v51 >> 1;
      if (v54) {
        v56 = a1 + 161;
      }
      else {
        v56 = *(_QWORD*)(a1 + 176);
      }
      if (v54) {
        v57 = v55;
      }
      else {
        v57 = *(_QWORD*)(a1 + 168);
      }
      SpineModel_64dde0(*(__int64**)(a1 + 328), v56, v57);
    }
    else if ((v51 & 1) != 0) {
      GameRoutine_64df20(*(_QWORD**)(a1 + 328), *(_QWORD*)(a1 + 176),
                         *(_QWORD*)(a1 + 168));
    }
    else {
      v52 = *v8;
      v53 = *(_QWORD*)(a1 + 176);
      v50[1] = *(_QWORD*)(a1 + 168);
      v50[2] = v53;
      *v50 = v52;
    }
    v58 = v50 + 3;
    v59 = *(unsigned __int8*)(a1 + 184);
    if ((v50[3] & 1) != 0) {
      v62 = (v59 & 1) == 0;
      v63 = v59 >> 1;
      if (v62) {
        v64 = a1 + 185;
      }
      else {
        v64 = *(_QWORD*)(a1 + 200);
      }
      if (v62) {
        v65 = v63;
      }
      else {
        v65 = *(_QWORD*)(a1 + 192);
      }
      SpineModel_64dde0(v58, v64, v65);
    }
    else if ((v59 & 1) != 0) {
      GameRoutine_64df20(v58, *(_QWORD*)(a1 + 200), *(_QWORD*)(a1 + 192));
    }
    else {
      v60 = *(_QWORD*)(a1 + 184);
      v61 = *(_QWORD*)(a1 + 200);
      v50[4] = *(_QWORD*)(a1 + 192);
      v50[5] = v61;
      *v58 = v60;
    }
  }
  v66 = *(_QWORD*)(a1 + 216);
  v50[6] = *(_QWORD*)(a1 + 208);
  v50[7] = v66;
  v67 = *(_QWORD*)(a1 + 224);
  v68 = *(_QWORD*)(a1 + 232);
  v69 = *(_QWORD*)(a1 + 248);
  v50[10] = *(_QWORD*)(a1 + 240);
  v50[11] = v69;
  v50[8] = v67;
  v50[9] = v68;
  v70 = *(_QWORD*)(a1 + 328);
  if ((*(_BYTE*)(v70 + 112) & 1) != 0) {
    *(_QWORD*)(v70 + 120) = 5;
    v71 = *(char**)(v70 + 128);
  }
  else {
    *(_BYTE*)(v70 + 112) = 10;
    v71 = (char*)(v70 + 113);
  }
  strcpy(v71, "Punch");
  v72 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   232LL);
  if (v72 != 0) {
    v74 = *(_QWORD*)(v72 + 392);
    v73 = *(_QWORD*)(v72 + 400);
    if (v73 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v74 == 0) {
      goto LABEL_98;
    }
    v75 = *(unsigned __int8*)(v74 + 472);
    v76 = (v75 & 1) != 0 ? *(_QWORD*)(v74 + 480) : v75 >> 1;
    if (v76 == 0) {
      v77 = *(unsigned __int8*)(v74 + 400);
      v78 = (v77 & 1) != 0 ? *(_QWORD*)(v74 + 408) : v77 >> 1;
      if (v78 == 0) {
        goto LABEL_98;
      }
    }
    v79 = CharacterAppearance_10743e0(v74);
    v80 = *(const char**)(v74 + 11712);
    if (v80 == nullptr) {
      if (v79 > 3) {
        if (v79 == 4) {
          v80 = "Arrow";
        }
        else if (v79 == 5) {
          v80 = "Punch";
        }
        else if (v79 != 8 || (unsigned int)(*(int*)(v74 + 11784) + 1) > 0x24 ||
                 (v80 =
                      GameData_212fed8[2 * (unsigned int)(*(int*)(v74 + 11784) +
                                                          1)]) == nullptr) {
        LABEL_98:
          if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak(v73);
          }
          goto LABEL_101;
        }
      }
      else {
        switch (v79) {
        case 1:
          v80 = "Sword";
          break;
        case 2:
          v80 = "Spear";
          break;
        case 3:
          v80 = (const char*)&GameData_1ad3c32;
          break;
        default:
          goto LABEL_98;
        }
      }
    }
    GameRoutine_60a020((char*)(*(_QWORD*)(a1 + 328) + 112LL), v80);
    goto LABEL_98;
  }
LABEL_101:
  v81 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  if (v81 != 0) {
    v82 = *(_QWORD*)(v81 + 48);
    if (*(_QWORD*)(v81 + 40) == v82) {
      v83 = 0x0.0p+0f;
    }
    else {
      v83 = *(float*)(v82 - 4);
    }
    if (v83 < *(float*)(v81 + 36)) {
      v83 = *(float*)(v81 + 36);
    }
  }
  else {
    v83 = 0x0.0p+0f;
  }
  v84 = *(_QWORD*)(a1 + 8);
  v85 = v83 - v33;
  *(float*)(a1 + 352) = v85;
  v86 = v85 + 0x1.99999a0000000p-5f;
  v87 = *(_QWORD*)(*(_QWORD*)(v84 + 8) + 32LL);
  if (*(float*)(v87 + 388) >= v86) {
    v86 = *(float*)(v87 + 388);
  }
  *(float*)(v87 + 388) = v86;
  v88 = GameRoutine_d1cf60(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                 344LL),
      *(_DWORD*)(a1 + 36));
  if (v88 != 0 && *(_DWORD*)(v88 + 8) != 0) {
    v90 = *(float*)(v88 + 32);
    if (*(float*)(v88 + 12) < v90) {
      v90 = *(float*)(v88 + 12);
    }
  }
  else {
    v91 = GameRoutine_d1cbc0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                   344LL),
        *(_DWORD*)(a1 + 36));
    v90 = *(float*)&v91 / 0x1.e000000000000p+5f;
  }
  v92 = v90 - v33;
  v93 = *(_BYTE*)(a1 + 384);
  *(_BYTE*)(a1 + 368) = 1;
  v94 = *(unsigned __int8*)(a1 + 128);
  if (v92 < 0x1.0000000000000p-2f) {
    v92 = 0x1.0000000000000p-2f;
  }
  *(float*)(a1 + 356) = v92;
  *(_DWORD*)(a1 + 360) = *(_DWORD*)(a1 + 352);
  if ((v93 & 1) != 0) {
    v96 = (v94 & 1) == 0;
    v97 = v94 >> 1;
    if (v96) {
      v98 = a1 + 129;
    }
    else {
      v98 = *(_QWORD*)(a1 + 144);
    }
    if (v96) {
      v99 = v97;
    }
    else {
      v99 = *(_QWORD*)(a1 + 136);
    }
    SpineModel_64dde0((__int64*)(a1 + 384), v98, v99);
  }
  else if ((v94 & 1) != 0) {
    GameRoutine_64df20((_QWORD*)(a1 + 384), *(_QWORD*)(a1 + 144),
                       *(_QWORD*)(a1 + 136));
  }
  else {
    v95 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 384) = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 392) = v95;
    *(_QWORD*)(a1 + 400) = *(_QWORD*)(a1 + 144);
  }
  v100 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 376) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 76LL);
  *(_DWORD*)(a1 + 372) = *(_DWORD*)(a1 + 352);
  v101 = *(_QWORD*)(*(_QWORD*)(v100 + 8) + 32LL);
  v102 = *(_QWORD*)(v101 + 16);
  v103 = 0;
  if (*(float*)(*(_QWORD*)(*(_QWORD*)(v102 + 8) + 8LL) + 228LL) > 0x0.0p+0f &&
      *(float*)(*(_QWORD*)(v102 + 504) + 80LL) <= 0x0.0p+0f &&
      *(float*)(v102 + 820) <= 0x0.0p+0f &&
      *(float*)(v101 + 384) <= 0x0.0p+0f) {
    v103 = *(_QWORD*)(v101 + 32);
  }
  v104 = *((float*)&v103 + 1);
  v105 = *(float*)&v103;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v160 = *((float*)&v103 + 1);
    v161 = __cxa_guard_acquire((__int64)&GameData_22110b8);
    v104 = v160;
    if (v161 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release((__int64)&GameData_22110b8);
      v104 = v160;
    }
  }
  if ((float)((float)(PSEUDO_UNFUSED(v104 * v104)) + (float)(v105 * v105)) ==
      0x0.0p+0f) {
    v106 = *(_QWORD*)(a1 + 88);
    if (v106 != 0) {
      v107 = *(_QWORD*)(v106 + 16);
      v108 = *(_QWORD*)(a1 + 8);
      v105 = *(float*)(v107 + 292) - *(float*)(v108 + 292);
      v104 = *(float*)(v107 + 296) - *(float*)(v108 + 296);
      if (v105 != 0x0.0p+0f || v104 != 0x0.0p+0f) {
        v109 =
            sqrtf((float)(PSEUDO_UNFUSED(v104 * v104)) + (float)(v105 * v105));
        v105 = v105 / v109;
        v104 = v104 / v109;
      }
    }
  }
  if (v105 != 0x0.0p+0f || (v110 = v105, v111 = v104, v104 != 0x0.0p+0f)) {
    v112 = sqrtf((float)(PSEUDO_UNFUSED(v104 * v104)) + (float)(v105 * v105));
    v110 = v105 / v112;
    v111 = v104 / v112;
  }
  v113 = *(float*)(a1 + 152);
  v114 = *(float*)(a1 + 156);
  if (v113 != 0x0.0p+0f || (v115 = *(float*)(a1 + 152),
                            v116 = *(float*)(a1 + 156), v114 != 0x0.0p+0f)) {
    v117 = sqrtf((float)(PSEUDO_UNFUSED(v114 * v114)) + (float)(v113 * v113));
    v115 = v113 / v117;
    v116 = v114 / v117;
  }
  v118 = *(float*)(*(_QWORD*)(a1 + 8) + 368LL);
  v119 = (float)(PSEUDO_UNFUSED(v111 * v116)) + (float)(v110 * v115);
  v120 = sqrtf((float)(PSEUDO_UNFUSED(v104 * v104)) + (float)(v105 * v105));
  if (v119 < 0x0.0p+0f) {
    v119 = 0x0.0p+0f;
  }
  v121 = v113 * v119;
  v122 = v114 * v119;
  v123 = fw_memory_HeapManager_Allocate(*v38, 48, 16, 0);
  *(_QWORD*)(v123 + 8) = 0;
  *(_QWORD*)(v123 + 16) = 0;
  v124 = v123 + 24;
  *(_QWORD*)v123 = GameData_1fdc000;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    f_.v182 = v123;
    v162 = v123 + 24;
    v163 = __cxa_guard_acquire((__int64)&GameData_22110b8);
    v123 = f_.v182;
    v124 = v162;
    if (v163 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release((__int64)&GameData_22110b8);
      v123 = f_.v182;
      v124 = v162;
    }
  }
  v125 = GameData_22110ac;
  v126 = *(_QWORD*)(a1 + 320);
  v127 = v120 * v121;
  v128 = v120 * v122;
  *(_DWORD*)(v123 + 40) = 0;
  *(_QWORD*)(a1 + 312) = v124;
  *(_QWORD*)(a1 + 320) = v123;
  v129 = v118 * 0x1.8000000000000p+1f;
  *(_QWORD*)(v123 + 24) = v125;
  *(_QWORD*)(v123 + 32) = 1065353216;
  if (v126 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v126 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v126 + 16LL))(v126);
    std___1___shared_weak_count___release_weak(v126);
  }
  v130 = *(float*)(a1 + 216);
  v131 = *(float**)(a1 + 312);
  *v131 = (float)(v129 * v127) * v130;
  v131[1] = (float)(v129 * v128) * v130;
  *(_DWORD*)(*(_QWORD*)(a1 + 312) + 8LL) = 1045220557;
  v132 = *(float*)(a1 + 352);
  v133 = *(_QWORD*)(a1 + 312);
  if (v132 < 0x1.0000000000000p-2f) {
    v132 = 0x1.0000000000000p-2f;
  }
  *(float*)(v133 + 12) = v132;
  *(float*)(v133 + 16) = v132;
  v134 = *(_QWORD*)(a1 + 320);
  v135 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL);
  f_.v166 = *(_QWORD*)(a1 + 312);
  f_.v167 = v134;
  if (v134 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v134 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_d47980((__int64*)(v135 + 8), &f_.v166);
  v136 = f_.v167;
  if (f_.v167 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v167 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v136 + 16LL))(v136);
    std___1___shared_weak_count___release_weak(v136);
  }
  v137 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL);
  if (v137 != 0) {
    *(_BYTE*)(*(_QWORD*)(v137 + 336) + 68LL) = 1;
  }
  v138 = *(_QWORD*)(a1 + 88);
  if (v138 == 0) {
    if (*(_BYTE*)(a1 + 112) != 1) {
      goto LABEL_179;
    }
    goto LABEL_170;
  }
  v139 = *(_QWORD**)(GameData_220b6f0 + 8);
  v140 = *(_QWORD**)(GameData_220b6f0 + 16);
  if (v139 != v140) {
    while (*v139 != v138) {
      v139 += 2;
      if (v139 == v140) {
        v139 = *(_QWORD**)(GameData_220b6f0 + 16);
        break;
      }
    }
  }
  if (v139 != v140 || (*(_BYTE*)(a1 + 112) & 1) != 0) {
  LABEL_170:
    v141 = fw_memory_HeapManager_Allocate(*v38, 48, 16, 0);
    *(_QWORD*)(v141 + 8) = 0;
    *(_QWORD*)(v141 + 16) = 0;
    *(_QWORD*)v141 = GameData_1fdc000;
    v142 = v141 + 24;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0) {
      v164 = v141;
      v165 = __cxa_guard_acquire((__int64)&GameData_22110b8);
      v141 = v164;
      if (v165 != 0) {
        GameData_22110ac = 0;
        __cxa_guard_release((__int64)&GameData_22110b8);
        v141 = v164;
      }
    }
    v143 = GameData_22110ac;
    v144 = *(_QWORD*)(a1 + 304);
    *(_DWORD*)(v141 + 40) = 0;
    *(_QWORD*)(a1 + 296) = v142;
    *(_QWORD*)(a1 + 304) = v141;
    *(_QWORD*)(v141 + 24) = v143;
    *(_QWORD*)(v141 + 32) = 1065353216;
    if (v144 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v144 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v144 + 16LL))(v144);
      std___1___shared_weak_count___release_weak(v144);
    }
    **(_QWORD**)(a1 + 296) = 0;
    *(_DWORD*)(*(_QWORD*)(a1 + 296) + 8LL) = 1036831949;
    v145 = *(_QWORD*)(a1 + 296);
    v146 = *(_DWORD*)(a1 + 352);
    *(_DWORD*)(v145 + 12) = v146;
    *(_DWORD*)(v145 + 16) = v146;
    v147 = *(_QWORD*)(a1 + 304);
    v148 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL);
    f_.v176 = *(__int64 (***)(void))(a1 + 296);
    f_.v177 = v147;
    if (v147 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d47980((__int64*)(v148 + 8), &f_.v176);
    v149 = f_.v177;
    if (f_.v177 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v177 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v149 + 16LL))(v149);
      std___1___shared_weak_count___release_weak(v149);
    }
  }
LABEL_179:
  v150 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 8LL) +
                    232LL);
  if (v150 == 0) {
    goto LABEL_200;
  }
  v151 = *(int**)(v150 + 320);
  f_.v176 = GameData_1fdbec0;
  f_.v177 = a1;
  f_.v178 = &f_.v176;
  f_.v179 = 20;
  strcpy(f_.v180, "Signal_Hit");
  v152 = Signal_d30a60(v151, f_.v180, 10, (__int64)&f_.v176);
  if ((f_.v179 & 1) != 0 && f_.v181 != 0) {
    v153 = v152;
    v154 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v154 = 56;
    }
    nn_mem_StandardAllocator_Free(*v38 + v154, f_.v181);
    v152 = v153;
  }
  *(_DWORD*)(a1 + 408) = v152;
  if (f_.v178 == &f_.v176) {
    v155 = 4;
  }
  else {
    if (f_.v178 == nullptr) {
      goto LABEL_190;
    }
    v155 = 5;
  }
  ((void (*)(__int64 (***)(void)))(*f_.v178)[v155])(f_.v178);
LABEL_190:
  f_.v176 = GameData_1fdbf40;
  f_.v177 = a1;
  f_.v178 = &f_.v176;
  f_.v179 = 24;
  strcpy(f_.v180, "Signal_Shoot");
  v156 = Signal_d30a60(v151, f_.v180, 12, (__int64)&f_.v176);
  if ((f_.v179 & 1) != 0 && f_.v181 != 0) {
    v157 = v156;
    v158 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v158 = 56;
    }
    nn_mem_StandardAllocator_Free(*v38 + v158, f_.v181);
    v156 = v157;
  }
  *(_DWORD*)(a1 + 412) = v156;
  if (f_.v178 == &f_.v176) {
    v159 = 4;
    goto LABEL_199;
  }
  if (f_.v178 != nullptr) {
    v159 = 5;
  LABEL_199:
    ((void (*)(__int64 (***)(void)))(*f_.v178)[v159])(f_.v178);
  }
LABEL_200:
  CharacterController_d449c0(a1);
}

#pragma GCC visibility pop
