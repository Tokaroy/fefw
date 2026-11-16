#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_629f20(PSEUDO_X8, __int64 result,
                                               const char*, __int64,
                                               const char*, unsigned int, int,
                                               char);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_62cf40(__int64, __int64, __int64);
__int64 GameRoutine_62d1a0(__int64 result, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 as_627e70(__int64, __int64, char, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
extern _QWORD as_g_context_slots[16384];
extern __int64 (*GameData_1f8e7e0[])();
extern __int64 (*GameData_2015028[3])();
extern __int64 (*decltype_c81af0_ptr_2015010[6])();
extern __int64* as_g_script_manager_ptr;
extern __int64 as_g_script_manager;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_25eca0(__int64*, const char*);
void GameRoutine_1196aa0(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_1195900(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                     __int64* a5, __int64 a6);
__int64 game_1841f10(__int64 result, int a2, char a3);

__int64 game_1195900(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                     __int64* a5, __int64 a6)
{

#pragma clang fp contract(off)
  char* v6;
  __int64 (***v7)();
  __int64 v8;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 (**v18)();
  char* v19;
  char* v20;
  __int64* v21;
  __int64 v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  signed __int64 v26;
  __int64 v27;
  char* v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  signed __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  signed __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  signed __int64 v62;
  char* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 (**v78)();
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  __int64 v95;
  _BYTE* v96;
  char* v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 i;
  unsigned int v122;
  __int64 (*v123)();
  __int64 v124;
  char* v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  _QWORD* v130;
  char* v131;
  bool v132;
  __int64 v133;
  char* v134;
  char* v135;
  __int64 (**v136)();
  __int64 v137;
  __int64 (***v139)();
  __int64 (**v140)();
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 (*v145)();
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  char* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v155;
  __int64 v158[3];
  struct {
    char gap0_[64];
    __int64 v159[2];
    char* v160;
    __int64 (***v161)();
    unsigned __int64 v162;
    __int64 v163;
    __int64 (**v164)();
    __int64 v165;
    char* v166;
    unsigned int v167;
    char gap140_[4];
    __int64 (***v168)();
  } f_;

  v7 = *(__int64 (****)())(a1 + 40);
  v6 = *(char**)(a1 + 48);
  v8 = a6;
  v11 = a3;
  v12 = (__int64*)a1;
  v13 = v6 - (char*)v7;
  v14 = (v6 - (char*)v7) >> 3;
  if (v6 == (char*)v7) {
    v15 = 0;
  }
  else {
    v15 = 17 * (v14 + ((v6 - (char*)v7) >> 2)) - 1;
  }
  v16 = *(_QWORD*)(a1 + 64);
  v17 = *(_QWORD*)(a1 + 72) + v16;
  if (v15 == v17) {
    v155 = a2;
    if (v16 >= 0x33) {
      *(_QWORD*)(a1 + 64) = v16 - 51;
      v18 = *v7;
      *(_QWORD*)(a1 + 40) = v7 + 1;
      f_.v164 = v18;
      GameRoutine_1196aa0((__int64*)(a1 + 32), &f_.v164);
    LABEL_79:
      v7 = (__int64 (***)(void))v12[5];
      v17 = v12[9] + v12[8];
      a2 = v155;
      goto LABEL_80;
    }
    v19 = *(char**)(a1 + 56);
    v20 = *(char**)(a1 + 32);
    if (v13 >= v19 - v20) {
      if (v19 == v20) {
        v30 = 1;
      }
      else {
        v30 = (v19 - v20) >> 2;
      }
      if (v30 >> 61 == 0) {
        v31 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v30, 16, 0);
        v32 = (char*)(v31 + v13);
        v33 = (char*)(v31 + 8 * v30);
        v34 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
        if (v13 == 8 * v30) {
          v12 = (__int64*)a1;
          if (v6 == (char*)v7) {
            v39 = v34;
            v40 = fw_memory_g_heap_manager_ptr;
            v32 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v33 = v32 + 8;
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) == 0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v41, v31);
            v34 = v39;
            v7 = *(__int64 (****)())(a1 + 40);
            v6 = *(char**)(a1 + 48);
            v31 = (__int64)v32;
          }
          else {
            v32 -= 8 * ((v14 + 1 + ((unsigned __int64)(v14 + 1) >> 63)) >> 1);
          }
        }
        else {
          v12 = (__int64*)a1;
        }
        *(_QWORD*)v32 = v34;
        v42 = v32 + 8;
        if (v6 != (char*)v7) {
          while (1) {
            if (v32 == (char*)v31) {
              if (v42 >= v33) {
                if (v33 == v32) {
                  v50 = 1;
                }
                else {
                  v50 = (v33 - v32) >> 2;
                }
                if (v50 >> 61 != 0) {
                  goto LABEL_225;
                }
                v51 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v50, 16, 0);
                v52 = v51;
                v46 = (char*)(v51 + ((2 * v50 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v53 = v42 - v32;
                v89 = v42 == v32;
                v42 = v46;
                if (!v89) {
                  v42 = &v46[v53];
                  v54 = (_QWORD*)(v51 + ((2 * v50 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v55 = *(_QWORD*)v32;
                    v32 += 8;
                    v53 -= 8LL;
                    *v54++ = v55;
                  } while (v53 != 0);
                }
                v33 = (char*)(v51 + 8 * v50);
                v56 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v56 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v31);
                v31 = v52;
                v12 = (__int64*)a1;
              }
              else {
                v48 = v42 - v32;
                v49 = v42 - v32;
                v89 = v42 == v32;
                v42 +=
                    8 * ((((v33 - v42) >> 3) + 1 +
                          ((unsigned __int64)(((v33 - v42) >> 3) + 1) >> 63)) >>
                         1);
                v46 = &v42[-v48];
                if (!v89) {
                  GameRoutine_1a0b940((__int64)&v42[-v48], (__int64)v32, v49);
                }
              }
            }
            else {
              v46 = v32;
            }
            v47 = *((_QWORD*)v6 - 1);
            v6 -= 8;
            *((_QWORD*)v46 - 1) = v47;
            v43 = v46 - 8;
            v32 = v43;
            if (v6 == (char*)v12[5]) {
              goto LABEL_28;
            }
          }
        }
        v43 = v32;
      LABEL_28:
        v44 = v12[4];
        v12[4] = v31;
        v12[5] = (__int64)v43;
        v12[6] = (__int64)v42;
        v12[7] = (__int64)v33;
        v8 = a6;
        v11 = a3;
        if (v44 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v44);
        }
        goto LABEL_79;
      }
    }
    else {
      v21 = (__int64*)fw_memory_g_heap_manager_ptr;
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      if (v19 == v6) {
        v36 = v12[4];
        v35 = v12[5];
        if (v35 == v36) {
          v58 = v12[6];
          v57 = v12[7];
          if (v58 >= v57) {
            v67 = v57 - v35;
            v89 = v67 == 0;
            v68 = v67 >> 2;
            if (v89) {
              v69 = 1;
            }
            else {
              v69 = v68;
            }
            if (v69 >> 61 != 0) {
              goto LABEL_225;
            }
            v70 = fw_memory_HeapManager_Allocate(*v21, 8 * v69, 16, 0);
            v71 = v58 - v35;
            v38 = v70 + ((2 * v69 + 6) & 0xFFFFFFFFFFFFFFF8LL);
            v72 = v38;
            if (v58 != v35) {
              v72 = v38 + v71;
              v73 = (_QWORD*)(v70 + ((2 * v69 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              v74 = (__int64*)v35;
              do {
                v75 = *v74++;
                v71 -= 8LL;
                *v73++ = v75;
              } while (v71 != 0);
            }
            v37 = (__int64*)a1;
            *(_QWORD*)(a1 + 32) = v70;
            *(_QWORD*)(a1 + 40) = v38;
            *(_QWORD*)(a1 + 48) = v72;
            *(_QWORD*)(a1 + 56) = v70 + 8 * v69;
            if (v35 != 0) {
              v76 = 128;
              if (*(_QWORD*)(*v21 + 200) == 0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free(*v21 + v76, v36);
              v38 = *(_QWORD*)(a1 + 40);
            }
          }
          else {
            v59 = (((__int64)(v57 - v58) >> 3) + 1) / 2;
            v38 = 8 * v59 + v35;
            if (v58 == v35) {
              v37 = (__int64*)a1;
            }
            else {
              GameRoutine_1a0b940(8 * v59 + v35, v35, v58 - v35);
              v37 = (__int64*)a1;
              v58 = *(_QWORD*)(a1 + 48);
            }
            v37[5] = v38;
            v37[6] = v58 + 8 * v59;
          }
        }
        else {
          v37 = v12;
          v38 = v12[5];
        }
        *(_QWORD*)(v38 - 8) = v22;
        v77 = v37[5];
        v37[5] = v77 - 8;
        v78 = *(__int64 (***)(void))(v77 - 8);
        v37[5] = v77;
        f_.v164 = v78;
        GameRoutine_1196aa0(v37 + 4, &f_.v164);
        v8 = a6;
        v11 = a3;
        v12 = v37;
        goto LABEL_79;
      }
      v23 = (char*)v12[6];
      if (v23 != (char*)v12[7]) {
      LABEL_75:
        *(_QWORD*)v23 = v22;
        v8 = a6;
        v11 = a3;
        v12[6] += 8;
        goto LABEL_79;
      }
      v25 = v12[4];
      v24 = (char*)v12[5];
      if ((unsigned __int64)v24 > v25) {
        v26 = v23 - v24;
        v27 = ((__int64)&v24[-v25] >> 3) + 1;
        v28 = &v24[-8 * (v27 / 2)];
        if (v23 == v24) {
          v29 = (__int64*)a1;
        }
        else {
          GameRoutine_1a0b940((__int64)&v24[-8 * (v27 / 2)], (__int64)v24,
                              v23 - v24);
          v29 = (__int64*)a1;
          v24 = *(char**)(a1 + 40);
        }
        v23 = &v28[v26];
        v12 = v29;
        v29[5] = (__int64)&v24[8 * (v27 / -2)];
        v29[6] = (__int64)v23;
        goto LABEL_75;
      }
      if (v23 == (char*)v25) {
        v60 = 1;
      }
      else {
        v60 = (__int64)&v23[-v25] >> 2;
      }
      if (v60 >> 61 == 0) {
        v61 = fw_memory_HeapManager_Allocate(*v21, 8 * v60, 16, 0);
        v62 = v23 - v24;
        v89 = v23 == v24;
        v63 = (char*)(v61 + 8 * (v60 >> 2));
        v23 = v63;
        if (!v89) {
          v23 = &v63[v62];
          v64 = (_QWORD*)(v61 + 8 * (v60 >> 2));
          do {
            v65 = *(_QWORD*)v24;
            v24 += 8;
            v62 -= 8LL;
            *v64++ = v65;
          } while (v62 != 0);
        }
        v12[4] = v61;
        v12[5] = (__int64)v63;
        v12[6] = (__int64)v23;
        v12[7] = v61 + 8 * v60;
        if (v25 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*v21 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(*v21 + v66, v25);
          v23 = (char*)v12[6];
        }
        goto LABEL_75;
      }
    }
  LABEL_225:
    GameRoutine_60a210();
  }
LABEL_80:
  v79 = (unsigned __int64)&v7[v17 / 0x33][10 * (v17 % 0x33)];
  *(_QWORD*)(v79 + 32) = 0;
  *(_QWORD*)(v79 + 40) = 0;
  *(_QWORD*)(v79 + 16) = 0;
  *(_QWORD*)(v79 + 24) = 0;
  *(_QWORD*)v79 = 0;
  *(_QWORD*)(v79 + 8) = 0;
  *(_DWORD*)(v79 + 56) = 0x2000;
  *(_QWORD*)(v79 + 48) = 0;
  *(_QWORD*)(v79 + 64) = 0;
  v80 = v12[9];
  v81 = v80 + 1;
  v82 = v12[8] + v80;
  v83 = v12[5];
  v12[9] = v81;
  v84 = *(_QWORD*)(v83 + 8 * (v82 / 0x33)) + 80 * (v82 % 0x33);
  *(_QWORD*)(v84 + 72) = a2;
  v85 = game_GameModeData_instance_;
  v86 = game_HashString(v11);
  if (v86 != 0) {
    v87 = *(_QWORD**)(v85 + 48);
    v88 = v87[2];
    v89 = v88 == 0 | v87[4] == 0;
    if (!v89) {
      v90 = v88 - 1;
      if ((v88 & (v88 - 1)) != 0) {
        v91 = v86;
        if (v86 >= v88) {
          v91 = v86 % v88;
        }
      }
      else {
        v91 = v90 & v86;
      }
      v92 = *(_QWORD**)(v87[1] + 8 * v91);
      if (v92 != nullptr) {
        v93 = (_QWORD*)*v92;
        if (v93 != nullptr) {
          if ((v88 & v90) == 0) {
            while (1) {
              v95 = v93[1];
              if (v86 == v95) {
                if (v93[2] == v86) {
                  return 0;
                }
              }
              else if ((v95 & v90) != v91) {
                goto LABEL_105;
              }
              v93 = (_QWORD*)*v93;
              if (v93 == nullptr) {
                goto LABEL_105;
              }
            }
          }
          do {
            v94 = v93[1];
            if (v86 == v94) {
              if (v93[2] == v86) {
                return 0;
              }
            }
            else {
              if (v94 >= v88) {
                v94 %= v88;
              }
              if (v94 != v91) {
                break;
              }
            }
            v93 = (_QWORD*)*v93;
          } while (v93 != nullptr);
        }
      }
    }
  }
LABEL_105:
  if ((*(_BYTE*)v84 & 1) != 0) {
    v96 = *(_BYTE**)(v84 + 16);
    *(_QWORD*)(v84 + 8) = 0;
  }
  else {
    *(_BYTE*)v84 = 0;
    v96 = (_BYTE*)(v84 + 1);
  }
  *v96 = 0;
  if (v8 == 0) {
    if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_224:
      String_60a1d0();
    }
    if (a4 >= 0x17) {
      v104 = v11;
      if ((a4 | 7) == 0x17) {
        v105 = 26;
      }
      else {
        v105 = (a4 | 7) + 1;
      }
      v106 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v105, 16, 0);
      v107 = v105 | 1;
      v98 = (char*)v106;
      f_.v162 = a4;
      f_.v163 = v106;
      v11 = v104;
      f_.v161 = (__int64 (***)(void))v107;
    }
    else {
      LOBYTE(f_.v161) = 2 * a4;
      v98 = (char*)&f_.v161 + 1;
      if (a4 == 0) {
        goto LABEL_128;
      }
    }
    GameRoutine_1a0b940((__int64)v98, v11, a4);
  LABEL_128:
    v103 = "void ";
    v98[a4] = 0;
    goto LABEL_129;
  }
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_224;
  }
  if (a4 >= 0x17) {
    v99 = v11;
    if ((a4 | 7) == 0x17) {
      v100 = 26;
    }
    else {
      v100 = (a4 | 7) + 1;
    }
    v101 =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v100, 16, 0);
    v102 = v100 | 1;
    v97 = (char*)v101;
    f_.v162 = a4;
    f_.v163 = v101;
    v11 = v99;
    f_.v161 = (__int64 (***)(void))v102;
  }
  else {
    LOBYTE(f_.v161) = 2 * a4;
    v97 = (char*)&f_.v161 + 1;
    if (a4 == 0) {
      goto LABEL_122;
    }
  }
  GameRoutine_1a0b940((__int64)v97, v11, a4);
LABEL_122:
  v97[a4] = 0;
  v103 = "bool ";
LABEL_129:
  v108 = GameRoutine_1a0a680((__int64)&f_.v161, 0, v103, 5u);
  v110 = *(_QWORD*)(v108 + 8);
  v109 = *(_QWORD*)(v108 + 16);
  f_.v164 = *(__int64 (***)(void))v108;
  f_.v165 = v110;
  f_.v166 = (const char*)v109;
  *(_QWORD*)(v108 + 8) = 0;
  *(_QWORD*)(v108 + 16) = 0;
  *(_QWORD*)v108 = 0;
  v111 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v164, "(", 1u);
  v112 = *v111;
  v113 = v111[1];
  v114 = v111[2];
  *v111 = 0;
  v111[1] = 0;
  v111[2] = 0;
  if ((*(_BYTE*)(v84 + 24) & 1) != 0) {
    v115 = *(_QWORD*)(v84 + 40);
    if (v115 != 0) {
      v116 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v116 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v115);
    }
  }
  *(_QWORD*)(v84 + 24) = v112;
  *(_QWORD*)(v84 + 32) = v113;
  *(_QWORD*)(v84 + 40) = v114;
  if (((unsigned __int8)f_.v164 & 1) != 0 && f_.v166 != nullptr) {
    v117 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v117 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v117,
                                  (__int64)f_.v166);
  }
  if (((unsigned __int8)f_.v161 & 1) != 0 && f_.v163 != 0) {
    v118 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v118,
                                  f_.v163);
  }
  v119 = *a5;
  if (a5[1] != *a5) {
    v120 = 0;
    for (i = 0; i < (a5[1] - *a5) >> 5; ++i) {
      LOBYTE(f_.v164) = 0;
      f_.v167 = -1;
      v122 = *(_DWORD*)(v119 + v120 + 24);
      if (v122 != -1) {
        v123 = GameData_2015028[v122];
        f_.v161 = &f_.v164;
        ((void (*)(__int64 (****)()))v123)(&f_.v161);
        f_.v167 = v122;
        switch (v122) {
        case 2u:
          v124 = v84 + 24;
          v125 = "string";
          v126 = 6;
          goto LABEL_154;
        case 1u:
          v124 = v84 + 24;
          v125 = "float";
          v126 = 5;
          goto LABEL_154;
        case 0u:
          v124 = v84 + 24;
          v125 = "int";
          v126 = 3;
        LABEL_154:
          GameRoutine_1a09ce0(v124, v125, v126);
          break;
        default:
          break;
        }
      }
      if (((a5[1] - *a5) >> 5) - 1 > i) {
        GameRoutine_1a09ce0(v84 + 24, ",", 1u);
      }
      if (f_.v167 != -1) {
        ((void (*)(__int64 (****)(), __int64 (***)(void)))
             decltype_c81af0_ptr_2015010[f_.v167])(&f_.v161, &f_.v164);
      }
      v119 = *a5;
      v120 += 32;
    }
  }
  GameRoutine_1a09ce0(v84 + 24, ")", 1u);
  if ((*(_BYTE*)(v84 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(f_.v159, *(_QWORD*)(v84 + 40),
                                  *(_QWORD*)(v84 + 32));
  }
  else {
    v127 = *(_QWORD*)(v84 + 24);
    v128 = *(_QWORD*)(v84 + 40);
    f_.v159[1] = *(_QWORD*)(v84 + 32);
    f_.v160 = (char*)v128;
    f_.v159[0] = v127;
  }
  v129 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v129 != 0x2000) {
    v130 = &as_g_context_slots[2 * v129];
    if (v130[1] != 0 && *v130 == *(_QWORD*)(a1 + 8)) {
      if ((f_.v159[0] & 1) != 0) {
        v131 = f_.v160;
      }
      else {
        v131 = (char*)f_.v159 + 1;
      }
      v132 = GameRoutine_62cf40(*as_g_script_manager_ptr, a1 + 8,
                                (__int64)v131) != 0;
      if ((f_.v159[0] & 1) == 0) {
        goto LABEL_175;
      }
    LABEL_171:
      if (f_.v160 != nullptr) {
        v133 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v133 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v133, (__int64)f_.v160);
      }
      goto LABEL_175;
    }
  }
  v132 = false;
  if ((f_.v159[0] & 1) != 0) {
    goto LABEL_171;
  }
LABEL_175:
  if (!v132) {
    return 0;
  }
  if ((*(_BYTE*)v84 & 1) != 0) {
    v134 = *(const char**)(v84 + 16);
  }
  else {
    v134 = (const char*)(v84 + 1);
  }
  if ((*(_BYTE*)(v84 + 24) & 1) != 0) {
    v135 = *(const char**)(v84 + 40);
  }
  else {
    v135 = (const char*)(v84 + 25);
  }
  Manager_629f20((void*)((__int64)&f_.v164), *as_g_script_manager_ptr, v134,
                 a1 + 8, v135, 0, 0x8000, 2);
  v136 = f_.v164;
  *(_QWORD*)(v84 + 48) = f_.v164;
  v137 = (unsigned int)f_.v165;
  *(_DWORD*)(v84 + 56) = f_.v165;
  if ((_DWORD)v137 == 0x2000) {
    *(_QWORD*)(v84 + 64) = 0;
    return 0;
  }
  v139 = (__int64 (***)(void))&as_g_context_slots[2 * v137];
  v140 = v139[1];
  if (v140 != nullptr && *v139 != v136) {
    v140 = nullptr;
  }
  *(_QWORD*)(v84 + 64) = v140;
  if (v139[1] == nullptr || *v139 != v136) {
    return 0;
  }
  v141 = *a5;
  if (a5[1] != *a5) {
    v142 = 0;
    v143 = 0;
    while (1) {
      LOBYTE(f_.v164) = 0;
      f_.v167 = -1;
      v144 = *(unsigned int*)(v141 + v142 + 24);
      if ((_DWORD)v144 == -1) {
        goto LABEL_193;
      }
      v145 = GameData_2015028[v144];
      f_.v161 = &f_.v164;
      ((void (*)(__int64 (****)()))v145)(&f_.v161);
      f_.v167 = v144;
      if ((_DWORD)v144 == 2) {
        break;
      }
      if ((_DWORD)v144 == 1) {
        v147 =
            *(_QWORD*)(as_g_context_slots[2 * *(unsigned int*)(v84 + 56) + 1] +
                       24LL);
        (*(void (**)(__int64, _QWORD, float))(*(_QWORD*)v147 + 136LL))(
            v147, (unsigned int)v143, *(float*)&f_.v164);
        goto LABEL_208;
      }
      if ((_DWORD)v144 == 0) {
        v146 =
            *(_QWORD*)(as_g_context_slots[2 * *(unsigned int*)(v84 + 56) + 1] +
                       24LL);
        (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v146 + 120LL))(
            v146, (unsigned int)v143, (unsigned int)f_.v164);
        goto LABEL_208;
      }
    LABEL_192:
      ((void (*)(__int64 (****)(), __int64 (***)(void)))
           decltype_c81af0_ptr_2015010[v144])(&f_.v161, &f_.v164);
    LABEL_193:
      v141 = *a5;
      ++v143;
      v142 += 32;
      if (v143 >= (a5[1] - *a5) >> 5) {
        goto LABEL_210;
      }
    }
    v148 = *(unsigned int*)(v84 + 56);
    if ((_DWORD)v148 == 0x2000) {
      v149 = 0;
    }
    else {
      v149 = as_g_context_slots[2 * v148 + 1];
    }
    if (((unsigned __int8)f_.v164 & 1) != 0) {
      v150 = f_.v166;
    }
    else {
      v150 = (char*)&f_.v164 + 1;
    }
    GameRoutine_25eca0(v158, v150);
    (*(void (**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v149 + 24) + 160LL))(
        *(_QWORD*)(v149 + 24), (unsigned int)v143, v158);
    if ((v158[0] & 1) != 0) {
      GameRoutine_25ec90(v158[2], v158[0] & 0xFFFFFFFFFFFFFFFELL);
    }
  LABEL_208:
    v144 = f_.v167;
    if (f_.v167 == -1) {
      goto LABEL_193;
    }
    goto LABEL_192;
  }
LABEL_210:
  if (a6 != 0) {
    v151 = *(unsigned int*)(v84 + 56);
    if ((_DWORD)v151 == 0x2000 ||
        *(_DWORD*)(as_g_context_slots[2 * v151 + 1] + 52LL) != 1) {
      return 1;
    }
    if (as_g_context_slots[2 * v151] == *(_QWORD*)(v84 + 48)) {
      v152 = as_g_context_slots[2 * v151 + 1];
    }
    else {
      v152 = 0;
    }
    f_.v164 = GameData_1f8e7e0;
    f_.v165 = a6;
    f_.v168 = &f_.v164;
    as_627e70(as_g_script_manager, v152, 0, (__int64)&f_.v164, 0);
    if (f_.v168 == &f_.v164) {
      v153 = 4;
      goto LABEL_222;
    }
    if (f_.v168 != nullptr) {
      v153 = 5;
    LABEL_222:
      ((__int64 (*)(__int64))(*f_.v168)[v153])((__int64)f_.v168);
    }
  }
  else {
    GameRoutine_62d1a0(as_g_script_manager, v84 + 48);
  }
  return 1;
}

__int64 game_1841f10(__int64 result, int a2, char a3)
{
  char* v3;
  char* v4;
  char* v5;

  if (result != 0) {
    if (a2 > 1) {
      switch (a2) {
      case 2:
        v3 = "IconPosStart";
        return Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u, v3);
      case 3:
        v3 = "IconPosBanquet";
        return Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u, v3);
      case 4:
        v3 = "IconPosPerch";
        return Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u, v3);
      default:
        break;
      }
    LABEL_17:
      v3 = &GameData_1a9f09e;
      return Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u, v3);
    }
    if (a2 != 0) {
      if (a2 != 1) {
        goto LABEL_17;
      }
      v4 = "IconPosExit";
      v5 = "IconPosExit_Impassable";
    }
    else {
      v4 = "IconPos";
      v5 = "IconPos_Impassable";
    }
    if ((a3 & 1) != 0) {
      v3 = (char*)v5;
    }
    else {
      v3 = (char*)v4;
    }
    return Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u, v3);
  }
  return result;
}

#pragma GCC visibility pop
