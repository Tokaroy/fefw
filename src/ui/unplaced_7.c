#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* llvm_libcxx_21_libcxx_include___vector_d9e140(float*, unsigned __int8*,
                                                      __int64, __int64**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 LayoutAccessor_1563030(__int64 result, const char*, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 LayoutAccessor_1567000(__int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_1567d70(__int64, char);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 GameData_2258a48;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_footer_animations_;
float LayoutAccessor_15638b0(__int64*, const char*, char);
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_874520();
void __attribute__((noreturn)) String_60a1d0();
void game_templates_156e100(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_1566440(__int64 a1, char a2);

void ui_1566440(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  char* v29;
  char* v30;
  char* v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  float v51;
  __int64 v52;
  char* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64* v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v66;
  __int64* v67;
  unsigned __int64 v68;
  char* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v78;
  struct {
    __int64 v79;
    unsigned __int64 v80;
    char* v81;
  } v79_;
  struct {
    __int64 v82;
    unsigned __int64 v83;
    char* v84;
  } v82_;
  struct {
    _QWORD* v85;
    _QWORD* v86;
    unsigned __int64 v87;
  } v85_;
  __int64* v88;

  v2 = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ == 0) {
    return;
  }
  if (a1 == 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 1);
    return;
  }
  v3 = *(_QWORD**)a1;
  v4 = *(_QWORD**)(a1 + 8);
  v85_.v86 = nullptr;
  v85_.v87 = 0;
  v85_.v85 = nullptr;
  if (v3 == v4) {
    game_templates_156e100((__int64*)&v85_.v85);
    v7 = 0;
    goto LABEL_28;
  }
  v78 = game_gameui_Footer_instance_;
  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do {
    if ((unsigned __int64)v5 < v8) {
      *(_QWORD*)v5 = *v3;
      v10 = v3[1];
      v11 = v3[2];
      v12 = v3[4];
      *((_QWORD*)v5 + 3) = v3[3];
      *((_QWORD*)v5 + 4) = v12;
      *((_QWORD*)v5 + 1) = v10;
      *((_QWORD*)v5 + 2) = v11;
      v5 += 40;
    }
    else {
      v13 = (__int64)&v5[-v9];
      v14 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)&v5[-v9] >> 3) + 1;
      if (v14 > 0x666666666666666LL) {
        GameRoutine_874520();
      }
      v15 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v9) >> 3);
      if (2 * v15 > v14) {
        v14 = 2 * v15;
      }
      if (v15 >= 0x333333333333333LL) {
        v16 = 0x666666666666666LL;
      }
      else {
        v16 = v14;
      }
      if (v16 != 0) {
        if (v16 > 0x666666666666666LL) {
          GameRoutine_60a210();
        }
        v17 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v16,
                                             16, 0);
      }
      else {
        v17 = 0;
      }
      v18 = (char*)(v17 + v13);
      v6 = v17 + 40 * v16;
      v19 = (unsigned __int64)&v5[-v9];
      v5 = (char*)(v17 + v13 + 40);
      *(_QWORD*)v18 = *v3;
      v20 = v3[2];
      v21 = v3[3];
      v22 = v3[4];
      *((_QWORD*)v18 + 1) = v3[1];
      *((_QWORD*)v18 + 2) = v20;
      *((_QWORD*)v18 + 3) = v21;
      *((_QWORD*)v18 + 4) = v22;
      v7 = v17 + v13 + 40 * (v13 / -40);
      GameRoutine_1a0b950(v7, v9, v19);
      if (v9 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v9);
      }
      v8 = v6;
      v9 = v7;
    }
    v3 += 5;
  } while (v3 != v4);
  v85_.v86 = v5;
  v85_.v87 = v6;
  v85_.v85 = (_QWORD*)v7;
  game_templates_156e100((__int64*)&v85_.v85);
  if ((char*)v7 == v5) {
  LABEL_28:
    LayoutAccessor_1567000(v2, 1);
    if (v7 == 0) {
      return;
    }
    goto LABEL_29;
  }
  ui_1567d70(v78, 1);
  v24 = std___1___shared_weak_count_lock(*(_QWORD*)(v78 + 176));
  v25 = v78;
  if (v24 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = v24;
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v27);
    }
    v25 = v78;
  }
  (*(void (**)(_QWORD))(**(_QWORD**)(v25 + 184) + 72LL))(*(_QWORD*)(v25 + 184));
  v28 = game_util_Format("L_KeyHelp%02d", 0);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)v28, 0);
  v29 = game_util_Format("L_KeyHelp%02d", 1);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)v29, 0);
  v30 = game_util_Format("L_KeyHelp%02d", 2);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)v30, 0);
  v31 = game_util_Format("L_KeyHelp%02d", 3);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)v31, 0);
  v32 = game_util_Format("L_KeyHelp%02d", 4);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)v32, 0);
  ui_LayoutAccessor_SetPaneVisible(v25 + 168, (__int64)"L_Guide", 0);
  v33 = v25;
  if (v85_.v86 != v85_.v85) {
    v34 = 0;
    while (1) {
      v35 = game_util_Format("L_KeyHelp%02d", v34);
      v36 = GameRoutine_1a09c70(v35);
      if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_142:
        String_60a1d0();
      }
      v37 = v36;
      if (v36 >= 0x17) {
        break;
      }
      v38 = (char*)&v82_.v82 + 1;
      LOBYTE(v82_.v82) = 2 * v36;
      if (v36 != 0) {
        goto LABEL_46;
      }
    LABEL_47:
      v40 = (__int64)v85_.v85;
      v38[v37] = 0;
      v41 = v40 + 40 * v34;
      if (*(_BYTE*)(v41 + 28) == 4) {
        v42 = *(const char**)v41;
        v43 = GameRoutine_1a09c70(*(const char**)v41);
        if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_142;
        }
        v44 = v43;
        if (v43 >= 0x17) {
          if ((v43 | 7) == 0x17) {
            v57 = 26;
          }
          else {
            v57 = (v43 | 7) + 1;
          }
          v45 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v57, 16, 0);
          v79_.v80 = v44;
          v79_.v81 = v45;
          v79_.v79 = v57 | 1;
        }
        else {
          v45 = (char*)&v79_.v79 + 1;
          LOBYTE(v79_.v79) = 2 * v43;
          if (v43 == 0) {
          LABEL_76:
            v45[v44] = 0;
            v88 = &v79_.v79;
            v58 = llvm_libcxx_21_libcxx_include___vector_d9e140(
                      (float*)(v33 + 496), (unsigned __int8*)&v79_.v79,
                      (__int64)std___1_piecewise_construct_ptr, &v88) +
                  5;
            if (v58 != &v82_.v82) {
              if ((*(_BYTE*)v58 & 1) == 0) {
                if ((v82_.v82 & 1) != 0) {
                  GameRoutine_64df20(v58, (__int64)v82_.v84, v82_.v83);
                  if ((v79_.v79 & 1) == 0) {
                    goto LABEL_93;
                  }
                }
                else {
                  v59 = v82_.v83;
                  *v58 = v82_.v82;
                  v58[1] = v59;
                  v58[2] = (__int64)v82_.v84;
                  if ((v79_.v79 & 1) == 0) {
                    goto LABEL_93;
                  }
                }
                goto LABEL_89;
              }
              if ((v82_.v82 & 1) != 0) {
                v60 = v82_.v84;
              }
              else {
                v60 = (char*)&v82_.v82 + 1;
              }
              if ((v82_.v82 & 1) != 0) {
                v61 = v82_.v83;
              }
              else {
                v61 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
              }
              SpineModel_64dde0(v58, (__int64)v60, v61);
            }
            if ((v79_.v79 & 1) == 0) {
            LABEL_93:
              v63 = LayoutAccessor_155fbe0((__int64*)(v33 + 168), "L_Guide");
              game_gameui_1593d90(v63, v41);
              goto LABEL_94;
            }
          LABEL_89:
            if (v79_.v81 != nullptr) {
              v62 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                  (__int64)v79_.v81);
            }
            goto LABEL_93;
          }
        }
        GameRoutine_1a0b940((__int64)v45, (__int64)v42, v44);
        goto LABEL_76;
      }
      if ((v82_.v82 & 1) != 0) {
        v46 = v82_.v84;
      }
      else {
        v46 = (char*)&v82_.v82 + 1;
      }
      LayoutAccessor_1560070((void*)(&v79_.v79), (__int64*)(v33 + 168), v46);
      if (v79_.v80 != 0) {
        v47 = std___1___shared_weak_count_lock(v79_.v80);
        v48 = (__int64*)v79_.v79;
        if (v79_.v80 != 0) {
          std___1___shared_weak_count___release_weak(v79_.v80);
        }
        if (v47 == 0 || v48 == nullptr) {
          goto LABEL_128;
        }
        v49 = (__int64*)game_gameui_footer_animations_;
        if (game_gameui_footer_animations_ != GameData_2258a48) {
          do {
            while ((LayoutAccessor_1563280(v48, *v49, 1) & 1) == 0) {
              if (++v49 == (__int64*)GameData_2258a48) {
                goto LABEL_67;
              }
            }
            v50 = *v49;
            v51 = LayoutAccessor_15638b0(v48, (const char*)*v49, 0);
            LayoutAccessor_15636c0((__int64)v48, v50, 0, v51);
            LayoutAccessor_1563030((__int64)v48, (const char*)*v49, 0);
            v52 = GameData_2258a48 - (_QWORD)(v49 + 1);
            if ((__int64*)GameData_2258a48 != v49 + 1) {
              GameRoutine_1a0b940((__int64)v49, (__int64)(v49 + 1),
                                  GameData_2258a48 - (_QWORD)(v49 + 1));
            }
            GameData_2258a48 = (__int64)v49 + v52;
          } while (v49 != (__int64*)((char*)v49 + v52));
        }
      LABEL_67:
        v53 = *(const char**)v41;
        v54 = GameRoutine_1a09c70(*(const char**)v41);
        if (v54 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_142;
        }
        v55 = v54;
        if (v54 >= 0x17) {
          if ((v54 | 7) == 0x17) {
            v66 = 26;
          }
          else {
            v66 = (v54 | 7) + 1;
          }
          v56 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v66, 16, 0);
          v79_.v80 = v55;
          v79_.v81 = v56;
          v79_.v79 = v66 | 1;
        }
        else {
          v56 = (char*)&v79_.v79 + 1;
          LOBYTE(v79_.v79) = 2 * v54;
          if (v54 == 0) {
          LABEL_110:
            v56[v55] = 0;
            v88 = &v79_.v79;
            v67 = llvm_libcxx_21_libcxx_include___vector_d9e140(
                      (float*)(v33 + 496), (unsigned __int8*)&v79_.v79,
                      (__int64)std___1_piecewise_construct_ptr, &v88) +
                  5;
            if (v67 != &v82_.v82) {
              if ((*(_BYTE*)v67 & 1) == 0) {
                if ((v82_.v82 & 1) != 0) {
                  GameRoutine_64df20(v67, (__int64)v82_.v84, v82_.v83);
                  if ((v79_.v79 & 1) != 0) {
                    goto LABEL_123;
                  }
                }
                else {
                  v68 = v82_.v83;
                  *v67 = v82_.v82;
                  v67[1] = v68;
                  v67[2] = (__int64)v82_.v84;
                  if ((v79_.v79 & 1) == 0) {
                    goto LABEL_127;
                  }
                LABEL_123:
                  if (v79_.v81 != nullptr) {
                    v71 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v71 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71,
                        (__int64)v79_.v81);
                  }
                }
              LABEL_127:
                game_gameui_1593d90(v48, v41);
              LABEL_128:
                if (v47 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
                  std___1___shared_weak_count___release_weak(v47);
                }
                goto LABEL_94;
              }
              if ((v82_.v82 & 1) != 0) {
                v69 = v82_.v84;
              }
              else {
                v69 = (char*)&v82_.v82 + 1;
              }
              if ((v82_.v82 & 1) != 0) {
                v70 = v82_.v83;
              }
              else {
                v70 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
              }
              SpineModel_64dde0(v67, (__int64)v69, v70);
            }
            if ((v79_.v79 & 1) == 0) {
              goto LABEL_127;
            }
            goto LABEL_123;
          }
        }
        GameRoutine_1a0b940((__int64)v56, (__int64)v53, v55);
        goto LABEL_110;
      }
    LABEL_94:
      if ((v82_.v82 & 1) != 0 && v82_.v84 != nullptr) {
        v64 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v64 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, (__int64)v82_.v84);
      }
      if (0xCCCCCCCCCCCCCCCDLL * (v85_.v86 - v85_.v85) > v34 + 1 && v34++ < 4) {
        continue;
      }
      goto LABEL_133;
    }
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v39, 16, 0);
    v82_.v83 = v37;
    v82_.v84 = v38;
    v82_.v82 = v39 | 1;
  LABEL_46:
    GameRoutine_1a0b940((__int64)v38, (__int64)v35, v37);
    goto LABEL_47;
  }
LABEL_133:
  v72 = ui_LayoutAccessor_FindAlignment((__int64*)(v33 + 168),
                                        (__int64)"A_KeyHelp");
  if (v72 != 0) {
    Alignment_56b600(v72);
    v73 = *(_QWORD*)(v33 + 176);
    if (v73 != 0) {
      v74 = std___1___shared_weak_count_lock(v73);
      if (v74 != 0) {
        v75 = v74;
        v76 = *(_QWORD*)(v33 + 168);
        if (v76 != 0) {
          ControlCreator_13633c0(v76);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
          std___1___shared_weak_count___release_weak(v75);
        }
      }
    }
  }
  LayoutAccessor_1563030(v33 + 168, "In", 0);
  ui_1567d70(v33, a2 & 1);
  v7 = (__int64)v85_.v85;
  if (v85_.v85 != nullptr) {
  LABEL_29:
    v85_.v86 = (_QWORD*)v7;
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v7);
  }
}

#pragma GCC visibility pop
