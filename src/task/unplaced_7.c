#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_17d7840(PSEUDO_X8, __int64, int,
                                                    unsigned __int8*);
__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8, int, unsigned __int8*,
                                             _QWORD*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameRoutine_17d70b0(unsigned __int8*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_64be60();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1_stoi(__int64, __int64, int);
double std___1_stod(__int64, __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_1c05a80[119];
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__attribute__((swiftcall)) void task_17d7bc0(PSEUDO_X8 x8_, unsigned __int8* a1,
                                             unsigned __int64 a2,
                                             unsigned __int8* a3);

__attribute__((swiftcall)) void task_17d7bc0(PSEUDO_X8 x8_, unsigned __int8* a1,
                                             unsigned __int64 a2,
                                             unsigned __int8* a3)
{

#pragma clang fp contract(off)
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v5;
  char v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  char* v13;
  unsigned __int8* v14;
  int v15;
  int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  double v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  double v30;
  unsigned int v31;
  double v32;
  unsigned int v33;
  double v34;
  double v35;
  char v36;
  __int64 v37;
  char** v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  char** v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  double v54;
  __int64 v55;
  _BYTE* v56;
  double v57;
  double v58;
  double v59;
  double v60;
  __int64 v61;
  char* v62;
  double v63;
  bool v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  char* v69;
  unsigned __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  char* v80;
  unsigned __int64 v81;
  __int64 v82;
  char** v83;
  __int64 v84;
  _BYTE* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD v89[2];
  struct {
    __int64 v90;
    __int64 v91;
    __int64 v92;
  } v90_;
  _DWORD v93[4];
  struct {
    char* v94;
    __int64 v95;
    __int64 v96;
    char gap88_[8];
    char* v97;
    __int64 v98;
    __int64 v99;
  } v94_;
  struct {
    __int64 v100;
    __int64 v101;
    unsigned __int64 v102;
    __int64 (*v103)();
    __int64 v104;
    _BYTE v105[256];
    _BYTE* v106;
    __int64 v107;
    __int64 v108;
    char** v109;
    __int64 v110;
    char v111[8];
    char v112;
    char gap481_[7];
    __int64 v113;
    char* v114;
    char* v115;
    __int64 v116;
    __int64 v117;
  } v100_;

  if (a2 == 0) {
    a4[1] = 0;
    a4[2] = 0;
    *a4 = 0;
    return;
  }
  v5 = *a1;
  if (v5 != 45) {
    if (v5 == 46) {
      v9 = 1;
      goto LABEL_11;
    }
    if ((unsigned int)(v5 - 58) < 0xFFFFFFF6) {
    LABEL_7:
      if (a2 < 0xFFFFFFFFFFFFFFF7LL) {
        if (a2 >= 0x17) {
          if ((a2 | 7) == 0x17) {
            v18 = 26;
          }
          else {
            v18 = (a2 | 7) + 1;
          }
          v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                               16, 0);
          a4[1] = a2;
          a4[2] = v10;
          *a4 = v18 | 1;
        }
        else {
          *(_BYTE*)a4 = 2 * a2;
          v10 = (__int64)a4 + 1;
        }
        memmove(v10, (__int64)a1, a2);
        *(_BYTE*)(v10 + a2) = 0;
        return;
      }
      goto LABEL_163;
    }
  }
  v9 = 0;
LABEL_11:
  v11 = a2 - 1;
  v12 = 0;
  if (a2 != 1) {
    v14 = a1 + 1;
    do {
      v16 = *v14++;
      v15 = v16;
      if (v16 == 46) {
        if ((v9 & 1) != 0) {
          goto LABEL_7;
        }
        v9 = 1;
      }
      else {
        if ((unsigned int)(v15 - 58) < 0xFFFFFFF6) {
          goto LABEL_7;
        }
        v12 += v9 & 1;
      }
      --v11;
    } while (v11 != 0);
  }
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  BYTE4(v89[1]) = 0;
  HIDWORD(v89[0]) = 0;
  LODWORD(v89[1]) = v12;
  LOBYTE(v89[0]) = 2;
  if ((v9 & 1) != 0) {
    if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_163;
    }
    if (a2 >= 0x17) {
      if ((a2 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (a2 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19,
                                                  16, 0);
      v100_.v101 = a2;
      v100_.v102 = (unsigned __int64)v13;
      v100_.v100 = v19 | 1;
    }
    else {
      LOBYTE(v100_.v100) = 2 * a2;
      v13 = (char*)&v100_.v100 + 1;
    }
    memmove((__int64)v13, (__int64)a1, a2);
    v13[a2] = 0;
    v20 = std___1_stod((__int64)&v100_.v100, 0);
    if ((v100_.v100 & 1) != 0 && v100_.v102 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v100_.v102);
    }
    v22 = GameRoutine_17d70b0(a3);
    qmemcpy(v93, v89, 13);
    if (SHIDWORD(v89[0]) <= 8) {
      if ((v89[0] & 0x8000000000000000LL) == 0) {
        goto LABEL_55;
      }
      v23 = 0;
    }
    else {
      v23 = 8;
    }
    v93[1] = v23;
  LABEL_55:
    v28 = v93[2];
    if ((signed __int32)v93[2] <= 8) {
      if ((signed __int32)v93[2] > 0) {
        goto LABEL_60;
      }
      v28 = 1;
    }
    else {
      v28 = 8;
    }
    v93[2] = v28;
  LABEL_60:
    v29 = v28 & 7;
    if ((unsigned int)v28 >= 8) {
      v30 = 0x1.4000000000000p+3;
      v31 = v28 & 0xFFFFFFF8;
      do {
        v31 -= 8;
        v30 = v30 * 0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
              0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
              0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
              0x1.4000000000000p+3 * 0x1.4000000000000p+3;
      } while (v31 != 0);
    }
    else {
      v30 = 0x1.4000000000000p+3;
    }
    if ((v28 & 7) != 0) {
      do {
        v30 = v30 * 0x1.4000000000000p+3;
        --v29;
      } while (v29 != 0);
    }
    v32 = -v20;
    v33 = v22 - 3;
    v34 = 0x1.4000000000000p+2 / v30;
    if (v20 >= 0x0.0p+0) {
      v32 = v20;
    }
    v35 = v32 + v34;
    if (v33 > 9) {
      v36 = 46;
    }
    else {
      v36 = GameData_1c05a80[v33];
    }
    v90_.v91 = 0;
    v90_.v92 = 0;
    v90_.v90 = 0;
    GameRoutine_17d7840((void*)(&v100_.v107), (unsigned int)(int)v35, v22,
                        (unsigned __int8*)v93);
    if ((v100_.v107 & 1) != 0) {
      v40 = v100_.v108;
      v39 = (v100_.v107 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if (v100_.v108 != v39) {
      LABEL_91:
        v44 = v100_.v109;
        v100_.v108 = v40 + 1;
      LABEL_92:
        v48 = (char*)v44 + v40;
        *v48 = v36;
        v48[1] = 0;
        v49 = v100_.v107;
        v50 = v100_.v108;
        v100_.v107 = 0;
        v100_.v108 = 0;
        v94_.v94 = (char*)v49;
        v94_.v95 = v50;
        v51 = (__int64)v100_.v109;
        v100_.v109 = nullptr;
        v94_.v96 = v51;
        v52 = v28 - 1;
        if (v28 < 1) {
          v53 = 0;
        }
        else {
          if (v52 >= 0x1D) {
            v52 = 29;
          }
          v53 = v52 + 1;
          v54 = v35 - (double)(int)v35;
          if ((unsigned int)v28 >= 4) {
            v55 = 0;
            v56 = (char*)&v100_.v100 + 3;
            do {
              v57 = v54 * 0x1.4000000000000p+3;
              v55 += 4;
              *(v56 - 3) = (int)v57 + 48;
              v58 = (v57 - (float)(int)v57) * 0x1.4000000000000p+3;
              *(v56 - 2) = (int)v58 + 48;
              v59 = (v58 - (float)(int)v58) * 0x1.4000000000000p+3;
              *(v56 - 1) = (int)v59 + 48;
              v60 = (v59 - (float)(int)v59) * 0x1.4000000000000p+3;
              *v56 = (int)v60 + 48;
              v56 += 4;
              v54 = v60 - (float)(int)v60;
            } while ((v53 & 0x3C) != v55);
          }
          else {
            v55 = 0;
          }
          if ((v53 & 3) != 0) {
            v61 = -(v53 & 3);
            v62 = (char*)&v100_.v100 + v55;
            do {
              v63 = v54 * 0x1.4000000000000p+3;
              v64 = __CFADD__(v61++, 1);
              *v62++ = (int)v63 + 48;
              v54 = v63 - (float)(int)v63;
            } while (!v64);
          }
        }
        *((_BYTE*)&v100_.v100 + v53) = 0;
        v65 = strlen((const char*)&v100_.v100);
        if (v65 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_163;
        }
        v66 = v65;
        if (v65 >= 0x17) {
          if ((v65 | 7) == 0x17) {
            v68 = 26;
          }
          else {
            v68 = (v65 | 7) + 1;
          }
          v67 = (const char*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, v68, 16, 0);
          v100_.v114 = (char*)v66;
          v100_.v115 = v67;
          v100_.v113 = v68 | 1;
        }
        else {
          LOBYTE(v100_.v113) = 2 * v65;
          v67 = (char*)&v100_.v113 + 1;
          if (v65 == 0) {
          LABEL_113:
            v67[v66] = 0;
            if ((v100_.v113 & 1) != 0) {
              v69 = v100_.v115;
            }
            else {
              v69 = (char*)&v100_.v113 + 1;
            }
            if ((v100_.v113 & 1) != 0) {
              v70 = (unsigned __int64)v100_.v114;
            }
            else {
              v70 = (unsigned __int64)(unsigned __int8)v100_.v113 >> 1;
            }
            v71 = (__int64*)GameRoutine_1a09ce0((__int64)&v94_.v94, v69, v70);
            v72 = *v71;
            v73 = v71[1];
            v74 = v71[2];
            *v71 = 0;
            v71[1] = 0;
            v71[2] = 0;
            v90_.v90 = v72;
            v90_.v91 = v73;
            v90_.v92 = v74;
            if ((v100_.v113 & 1) != 0 && v100_.v115 != nullptr) {
              v75 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v75,
                  (__int64)v100_.v115);
            }
            if (((unsigned __int8)v94_.v94 & 1) != 0 && v94_.v96 != 0) {
              v76 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v94_.v96);
            }
            if ((v100_.v107 & 1) != 0 && v100_.v109 != nullptr) {
              v77 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v77 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                  (__int64)v100_.v109);
            }
            v78 = &GameData_1a9f09e;
            v100_.v104 = 0;
            LODWORD(v100_.v115) = 0;
            v100_.v111[0] = 0;
            v100_.v112 = 0;
            v94_.v94 = &GameData_1a9f09e;
            v94_.v95 = 0;
            if (v20 < 0x0.0p+0) {
              v78 = "-";
            }
            v100_.v100 = (__int64)v100_.v105;
            v100_.v101 = 256;
            v100_.v106 = v100_.v105;
            v100_.v102 = 0;
            v100_.v103 = GameRoutine_64be60;
            v79 = (unsigned __int8)v72 >> 1;
            if ((v72 & 1) != 0) {
              v80 = (char*)v74;
            }
            else {
              v80 = (char*)&v90_.v90 + 1;
            }
            v94_.v96 = (__int64)v78;
            v94_.v97 = v80;
            if ((v72 & 1) != 0) {
              v79 = v73;
            }
            v94_.v98 = v79;
            v94_.v99 = 13709;
            v100_.v113 = (__int64)"{}{}{}";
            v100_.v114 = "";
            v100_.v116 = 0;
            v100_.v117 = 3;
            v100_.v109 = &v94_.v94;
            v100_.v110 = 13709;
            v100_.v107 = (__int64)&v100_.v100;
            v100_.v108 = 3;
            GameRoutine_6380e0((__int64)&v100_.v113, (__int64**)&v100_.v107);
            if (v100_.v112 == 1) {
              std___1_locale_Destroy_locale((__int64)v100_.v111);
            }
            v81 = v100_.v102;
            if (v100_.v102 < 0xFFFFFFFFFFFFFFF7LL) {
              v82 = (__int64)v100_.v106;
              if (v100_.v102 >= 0x17) {
                if ((v100_.v102 | 7) == 0x17) {
                  v84 = 26;
                }
                else {
                  v84 = (v100_.v102 | 7) + 1;
                }
                v83 = (char**)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v84, 16, 0);
                v100_.v108 = v81;
                v100_.v109 = v83;
                v100_.v107 = v84 | 1;
              }
              else {
                LOBYTE(v100_.v107) = 2 * v100_.v102;
                v83 = (char**)((char*)&v100_.v107 + 1);
                if (v100_.v102 == 0) {
                LABEL_152:
                  v85 = v100_.v106;
                  *((_BYTE*)v83 + v81) = 0;
                  if (v85 != v100_.v105 && v85 != nullptr) {
                    v86 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v86 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                        (__int64)v85);
                  }
                  if ((v90_.v90 & 1) != 0 && v90_.v92 != 0) {
                    v87 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v87 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, v90_.v92);
                  }
                  v88 = v100_.v108;
                  *a4 = v100_.v107;
                  a4[1] = v88;
                  a4[2] = (__int64)v100_.v109;
                  return;
                }
              }
              memmove((__int64)v83, v82, v81);
              goto LABEL_152;
            }
          LABEL_163:
            String_60a1d0();
          }
        }
        memcpy((__int64)v67, (__int64)&v100_.v100, v66);
        goto LABEL_113;
      }
      v38 = v100_.v109;
      if (v39 > 0x7FFFFFFFFFFFFFF2LL) {
        v43 = false;
        v37 = -9;
      LABEL_85:
        v40 = v39;
        v45 = fw_memory_g_heap_manager_ptr;
        v46 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v37, 16, 0);
        memmove(v46, (__int64)v38, v40);
        if (!v43 && v38 != nullptr) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v45 + v47, (__int64)v38);
        }
        v28 = v93[2];
        v100_.v109 = (char**)v46;
        v100_.v107 = v37 | 1;
        goto LABEL_91;
      }
      v41 = (2 * v39) | 7;
      if (v41 == 23) {
        v42 = 26;
      }
      else {
        v42 = v41 + 1;
      }
      if (v39 >= 0xC) {
        v37 = v42;
      }
      else {
        v37 = 23;
      }
    }
    else {
      if ((unsigned __int8)v100_.v107 != 44) {
        v40 = (unsigned __int64)(unsigned __int8)v100_.v107 >> 1;
        v44 = (char**)((char*)&v100_.v107 + 1);
        LOBYTE(v100_.v107) = v100_.v107 + 2;
        goto LABEL_92;
      }
      v37 = 48;
      v38 = (char**)((char*)&v100_.v107 + 1);
      v39 = 22;
    }
    v43 = v39 == 22;
    goto LABEL_85;
  }
  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_163;
  }
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (a2 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v24,
                                                16, 0);
    v100_.v101 = a2;
    v100_.v102 = (unsigned __int64)v17;
    v100_.v100 = v24 | 1;
  }
  else {
    LOBYTE(v100_.v100) = 2 * a2;
    v17 = (char*)&v100_.v100 + 1;
  }
  memmove((__int64)v17, (__int64)a1, a2);
  v17[a2] = 0;
  v25 = std___1_stoi((__int64)&v100_.v100, 0, 10);
  if ((v100_.v100 & 1) != 0 && v100_.v102 != 0) {
    v26 = v25;
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v100_.v102);
    v25 = v26;
  }
  task_17d8560((void*)(a4), v25, a3, v89);
}

#pragma GCC visibility pop
