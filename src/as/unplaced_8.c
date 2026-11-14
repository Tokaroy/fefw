#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_d9b060(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8, _QWORD*,
                                               unsigned __int8*);
__int64* GameHr_cb2b00(__int64* result, __int64, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fdee00[14])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void GameRoutine_d9bc80(__int64, __int64*, __int64*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void as_d9bf20(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          unsigned __int64 a3, __int64* a4);

__attribute__((swiftcall)) void as_d9bf20(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          unsigned __int64 a3, __int64* a4)
{
  _BYTE* a5 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int8* v38;
  int v39;
  _BYTE* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 i;
  __int64 v45;
  __int64 v46;
  unsigned __int8* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  bool v58;
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
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  char* v87;
  char* v88;
  char* v89;
  unsigned __int64 v90;
  char* v91;
  __int64 v92;
  _QWORD* v93;
  _BYTE* v94;
  struct {
    __int64 v95;
    unsigned __int64 v96;
    char* v97;
  } v95_;
  struct {
    unsigned __int64 v98[2];
    char* v99;
  } v98_;
  struct {
    unsigned __int64 v100;
    unsigned __int64 v101;
    char* v102;
  } v100_;
  struct {
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    bool v107;
  } v103_;
  struct {
    unsigned __int64 v108;
    unsigned __int64 v109;
    char* v110;
  } v108_;
  struct {
    __int64 v111;
    __int64 v112;
    __int64 v113;
  } v111_;

  if (a3 == 0) {
    *a5 = 0;
    a5[64] = 0;
    return;
  }
  v103_.v106 = 0;
  v103_.v107 = false;
  v108_.v108 = 0;
  v108_.v109 = 0;
  v108_.v110 = nullptr;
  v111_.v111 = 0;
  v111_.v112 = 0;
  v111_.v113 = 0;
  v103_.v104 = 0;
  v103_.v105 = 0;
  v103_.v103 = 0;
  GameRoutine_d9bc80(a1, &v103_.v103, a4);
  GameHr_cb2b00(&v111_.v111, v103_.v103, v103_.v104,
                (v103_.v104 - v103_.v103) >> 5);
  v10 = *(unsigned __int8*)a2;
  v100_.v101 = 0;
  v100_.v102 = nullptr;
  v100_.v100 = 0;
  v93 = (_QWORD*)a1;
  v94 = a5;
  v103_.v107 = v10 == 33;
  if (v10 != 33) {
    GameRoutine_60a060((char*)&v100_.v100, (__int64)a2, a3);
    goto LABEL_30;
  }
  v11 = strlen(a2);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_162:
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v14, 16, 0);
    v98_.v98[1] = v12;
    v98_.v99 = v13;
    v98_.v98[0] = v14 | 1;
    goto LABEL_13;
  }
  LOBYTE(v98_.v98[0]) = 2 * v11;
  v13 = (char*)v98_.v98 + 1;
  if (v11 != 0) {
  LABEL_13:
    memmove((__int64)v13, (__int64)a2, v12);
  }
  v13[v12] = 0;
  GameRoutine_a539c0((unsigned __int8*)v98_.v98, 0, 1u);
  if ((v100_.v100 & 1) != 0) {
    if ((v98_.v98[0] & 1) != 0) {
      v15 = v98_.v99;
    }
    else {
      v15 = (char*)v98_.v98 + 1;
    }
    if ((v98_.v98[0] & 1) != 0) {
      v16 = v98_.v98[1];
    }
    else {
      v16 = (unsigned __int64)LOBYTE(v98_.v98[0]) >> 1;
    }
    SpineModel_64dde0((__int64*)&v100_.v100, (__int64)v15, v16);
    if ((v98_.v98[0] & 1) == 0) {
      goto LABEL_30;
    }
    goto LABEL_26;
  }
  if ((v98_.v98[0] & 1) == 0) {
    v100_.v100 = v98_.v98[0];
    v100_.v101 = v98_.v98[1];
    v100_.v102 = v98_.v99;
    goto LABEL_30;
  }
  GameRoutine_64df20(&v100_.v100, (__int64)v98_.v99, v98_.v98[1]);
  if ((v98_.v98[0] & 1) != 0) {
  LABEL_26:
    if (v98_.v99 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v98_.v99);
    }
  }
LABEL_30:
  LOBYTE(v98_.v98[0]) = 24;
  strcpy((char*)v98_.v98 + 1, "AnalysisHash");
  if ((v100_.v100 & 1) != 0) {
    v18 = v100_.v102;
  }
  else {
    v18 = (char*)&v100_.v100 + 1;
  }
  if ((v100_.v100 & 1) != 0) {
    v19 = v100_.v101;
  }
  else {
    v19 = (unsigned __int64)(unsigned __int8)v100_.v100 >> 1;
  }
  GameRoutine_1a09ce0((__int64)v98_.v98, v18, v19);
  v20 = (unsigned __int8*)*a4;
  v21 = (unsigned __int8*)a4[1];
  if ((unsigned __int8*)*a4 != v21) {
    do {
      v22 = *v20;
      v23 = (v22 & 1) == 0;
      v24 = v22 >> 1;
      if (v23) {
        v25 = v24;
      }
      else {
        v25 = *((_QWORD*)v20 + 1);
      }
      if (v23) {
        v26 = (__int64)(v20 + 1);
      }
      else {
        v26 = *((_QWORD*)v20 + 2);
      }
      v27 = v25 + 1;
      if (v25 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_162;
      }
      if (v27 >= 0x17) {
        if ((v27 | 7) == 0x17) {
          v29 = 26;
        }
        else {
          v29 = (v27 | 7) + 1;
        }
        v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v29, 16, 0);
        v95_.v96 = v25 + 1;
        v95_.v97 = v30;
        *v30 = 59;
        v28 = v30 + 1;
        v95_.v95 = v29 | 1;
      }
      else {
        v95_.v96 = 0;
        v95_.v97 = nullptr;
        v95_.v95 = 15104;
        v28 = (char*)&v95_.v95 + 2;
        LOBYTE(v95_.v95) = 2 * v27;
        if (v25 == 0) {
          goto LABEL_54;
        }
      }
      memmove((__int64)v28, v26, v25);
    LABEL_54:
      v28[v25] = 0;
      if ((v95_.v95 & 1) != 0) {
        v31 = v95_.v97;
      }
      else {
        v31 = (char*)&v95_.v95 + 1;
      }
      if ((v95_.v95 & 1) != 0) {
        v32 = v95_.v96;
      }
      else {
        v32 = (unsigned __int64)(unsigned __int8)v95_.v95 >> 1;
      }
      GameRoutine_1a09ce0((__int64)v98_.v98, v31, v32);
      if ((v95_.v95 & 1) != 0 && v95_.v97 != nullptr) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v95_.v97);
      }
      v20 += 24;
    } while (v20 != v21);
  }
  v34 = (__int64)v98_.v98 + 1;
  if ((v98_.v98[0] & 1) != 0) {
    v34 = (__int64)v98_.v99;
    LODWORD(v35) = v98_.v98[1];
  }
  else {
    v35 = (unsigned __int64)LOBYTE(v98_.v98[0]) >> 1;
  }
  if (v34 != 0) {
    v36 = 0xCBF29CE484222325LL;
    if ((int)v35 < 8) {
      v39 = 0;
    }
    else {
      v37 = 7;
      do {
        v38 = (unsigned __int8*)(v34 + v37);
        v37 += 8LL;
        v36 = (0x100000001B3LL *
               ((0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v36) ^ *(v38 - 7))) ^
                          *(v38 - 6))) ^
                        *(v38 - 5))) ^
                      *(v38 - 4))) ^
                    *(v38 - 3))) ^
                  *(v38 - 2))) ^
                *(v38 - 1))) ^
              *v38;
      } while (v37 < (v35 & 0x7FFFFFFF));
      v39 = v35 & 0x7FFFFFF8;
    }
    v40 = v94;
    if (v39 < (int)v35) {
      v41 = (unsigned int)v39;
      v42 = (unsigned int)v35;
      v43 = v35 & 7;
      for (i = v41; v43 != 0; v36 = (0x100000001B3LL * v36) ^ v45) {
        v45 = *(unsigned __int8*)(v34 + i++);
        --v43;
      }
      if ((unsigned __int64)(v41 - v42) <= 0xFFFFFFFFFFFFFFF8LL) {
        v46 = v42 - i;
        v47 = (unsigned __int8*)(i + v34 + 3);
        do {
          v46 -= 8;
          v48 = (0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * v36) ^ *(v47 - 3))) ^
                          *(v47 - 2))) ^
                        *(v47 - 1))) ^
                      *v47)) ^
                    v47[1])) ^
                  v47[2])) ^
                v47[3];
          v49 = v47[4];
          v47 += 8;
          v36 = (0x100000001B3LL * v48) ^ v49;
        } while (v46 != 0);
      }
    }
    if (v36 != 0) {
      v34 = v36;
    }
    else {
      v34 = -1;
    }
  }
  else {
    v40 = v94;
  }
  v103_.v106 = v34;
  if ((v98_.v98[0] & 1) != 0 && v98_.v99 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  (__int64)v98_.v99);
  }
  if ((v100_.v100 & 1) != 0) {
    v51 = v100_.v102;
  }
  else {
    v51 = (char*)&v100_.v100 + 1;
  }
  if ((v100_.v100 & 1) != 0) {
    v52 = v100_.v101;
  }
  else {
    v52 = (unsigned __int64)(unsigned __int8)v100_.v100 >> 1;
  }
  GameRoutine_d9b060((void*)(v98_.v98), v93, "bool", 4, v51, v52, &v111_.v111,
                     6);
  if ((v108_.v108 & 1) != 0 && v108_.v110 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  (__int64)v108_.v110);
  }
  v108_.v108 = v98_.v98[0];
  v108_.v109 = v98_.v98[1];
  v108_.v110 = v98_.v99;
  Manager_d9b420((void*)(v98_.v98), v93, (unsigned __int8*)&v108_.v108);
  v54 = v98_.v98[0];
  v55 = v98_.v98[1];
  if (v98_.v98[1] == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(v98_.v98[1] + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v54 != 0) {
      goto LABEL_103;
    }
  LABEL_135:
    v76 = *a4;
    v75 = a4[1];
    LOWORD(v98_.v98[0]) = 0;
    if (v75 != v76) {
      GameRoutine_1a09ce0((__int64)v98_.v98, "(", 1u);
      v77 = *(unsigned __int8*)*a4;
      if ((v77 & 1) != 0) {
        v78 = *(const char**)(*a4 + 16);
      }
      else {
        v78 = (const char*)(*a4 + 1);
      }
      if ((v77 & 1) != 0) {
        v79 = *(_QWORD*)(*a4 + 8);
      }
      else {
        v79 = v77 >> 1;
      }
      GameRoutine_1a09ce0((__int64)v98_.v98, v78, v79);
      if (a4[1] - *a4 == 24) {
        v80 = ")";
      }
      else {
        v80 = ",";
      }
      GameRoutine_1a09ce0((__int64)v98_.v98, v80, 1u);
      v81 = *a4;
      if (0xAAAAAAAAAAAAAAABLL * ((a4[1] - *a4) >> 3) >= 2) {
        v82 = 1;
        v83 = 0;
        do {
          v84 = v81 + v83;
          v85 = *(unsigned __int8*)(v84 + 24);
          v86 = *(_QWORD*)(v84 + 32);
          v87 = *(const char**)(v84 + 40);
          v88 = (const char*)(v84 + 25);
          if ((v85 & 1) != 0) {
            v89 = v87;
          }
          else {
            v89 = v88;
          }
          if ((v85 & 1) != 0) {
            v90 = v86;
          }
          else {
            v90 = v85 >> 1;
          }
          GameRoutine_1a09ce0((__int64)v98_.v98, v89, v90);
          if (v82 == -1 - 0x5555555555555555LL * ((a4[1] - *a4) >> 3)) {
            v91 = ")";
          }
          else {
            v91 = ",";
          }
          GameRoutine_1a09ce0((__int64)v98_.v98, v91, 1u);
          v81 = *a4;
          ++v82;
          v83 += 24;
        } while (0xAAAAAAAAAAAAAAABLL * ((a4[1] - *a4) >> 3) > v82);
      }
      if ((v98_.v98[0] & 1) != 0 && v98_.v99 != nullptr) {
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, (__int64)v98_.v99);
      }
    }
    goto LABEL_103;
  }
  (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
  std___1___shared_weak_count___release_weak(v55);
  if (v54 == 0) {
    goto LABEL_135;
  }
LABEL_103:
  v56 = v108_.v108;
  v57 = v108_.v109;
  v108_.v108 = 0;
  v108_.v109 = 0;
  *(_QWORD*)v40 = v103_.v106;
  v58 = v103_.v107;
  *((_QWORD*)v40 + 2) = v56;
  *((_QWORD*)v40 + 3) = v57;
  v59 = v111_.v111;
  v60 = v111_.v112;
  v40[8] = v58;
  v61 = (__int64)v108_.v110;
  v108_.v110 = nullptr;
  v111_.v111 = 0;
  *((_QWORD*)v40 + 4) = v61;
  *((_QWORD*)v40 + 5) = v59;
  v62 = v111_.v113;
  v111_.v112 = 0;
  v111_.v113 = 0;
  *((_QWORD*)v40 + 6) = v60;
  *((_QWORD*)v40 + 7) = v62;
  v40[64] = 1;
  if ((v100_.v100 & 1) != 0 && v100_.v102 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  (__int64)v100_.v102);
  }
  v64 = v103_.v103;
  if (v103_.v103 != 0) {
    v65 = v103_.v104;
    if (v103_.v103 == v103_.v104) {
      goto LABEL_115;
    }
    do {
      v66 = *(unsigned int*)(v65 - 8);
      v67 = v65 - 32;
      if ((_DWORD)v66 != -1) {
        ((void (*)(unsigned __int64*, __int64))GameData_1fdee00[v66])(
            &v100_.v100, v65 - 32);
      }
      *(_DWORD*)(v65 - 8) = -1;
      v65 -= 32;
    } while (v67 != v64);
    v103_.v104 = v64;
    v64 = v103_.v103;
    if (v103_.v103 != 0) {
    LABEL_115:
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v64);
    }
  }
  v69 = v111_.v111;
  if (v111_.v111 != 0) {
    v70 = v111_.v112;
    if (v111_.v111 == v111_.v112) {
      goto LABEL_125;
    }
    do {
      v71 = *(unsigned int*)(v70 - 8);
      v72 = v70 - 32;
      if ((_DWORD)v71 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdee00[v71])(&v103_.v103,
                                                             v70 - 32);
      }
      *(_DWORD*)(v70 - 8) = -1;
      v70 -= 32;
    } while (v72 != v69);
    v111_.v112 = v69;
    v69 = v111_.v111;
    if (v111_.v111 != 0) {
    LABEL_125:
      v73 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v69);
    }
  }
  if ((v108_.v108 & 1) != 0 && v108_.v110 != nullptr) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                                  (__int64)v108_.v110);
  }
}

#pragma GCC visibility pop
