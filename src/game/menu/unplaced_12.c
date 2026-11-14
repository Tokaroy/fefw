#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* RouteMenuItem_166e340(__int64, __int64, _QWORD*, _QWORD*, _QWORD*,
                              __int64, __int64, __int64, __int64);
_QWORD* RouteMenuItem_166e450(__int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 Impl_717e30(char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameConverge_8ea350(__int64, unsigned int, __int64);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_2131a38;
extern __int64 (*CompareInfo_Destructor_ptr[])();
extern __int64 (*GameData_207c958[])();
extern __int64 (*GameData_207c9d8[])();
extern __int64 (*GameData_207ca58[])();
extern __int64 (*game_menu_CompareInfo_vtable[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_225d700;
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void BasicInfo_15e5b50(__int64, __int64*, __int64);
void GameRoutine_717660();
void Impl_717b40();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_166d2e0(unsigned __int64 a1);

__int64 game_menu_166d2e0(unsigned __int64 a1)
{
  __int64 v1;
  __int64 v3;
  char* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  char** v33;
  char* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  char* v39;
  __int64* v40;
  char** v41;
  char* v42;
  char* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  void* v58;
  char* v59;
  char* v60;
  char* v61;
  __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  __int64 v67;
  char v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  char* v78;
  char* v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  struct {
    _QWORD v92[2];
    char* v93;
    char gap40_[8];
    _QWORD* v94;
  } v92_;
  struct {
    _QWORD v95[4];
    _QWORD* v96;
  } v95_;
  struct {
    __int64 (**v97)();
    unsigned __int64 v98;
    char* v99;
    char gap136_[8];
    __int64 (***v100)();
  } v97_;
  char* v101;
  char* v102;
  char* v103;
  char* v104;
  struct {
    _QWORD v105[2];
    char* v106;
  } v105_;
  struct {
    __int64 (**v107)();
    unsigned __int64 v108;
    unsigned __int64 v109;
    unsigned __int64 v110;
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
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
  } v107_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return 1;
  }
  GameRoutine_717660();
  Impl_717e30(*(_BYTE*)(a1 + 96));
  if (!GameConverge_8ea350(*(_QWORD*)(v1 + 176), *(unsigned __int8*)(a1 + 96),
                           *(_QWORD*)(*(_QWORD*)(a1 + 88) + 392LL))) {
    v6 = *(_QWORD*)(a1 + 8);
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)(v6 + 152) != 0) {
      v8 = *(_QWORD*)(v6 + 152);
    }
    else {
      v8 = *(_QWORD*)(a1 + 8);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        248, 16, 0);
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_QWORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 152) = 0;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    v107_.v107 = nullptr;
    v107_.v108 = 0;
    BasicInfo_15e5b50(v9, (__int64*)&v107_.v107, 0);
    v10 = v107_.v108;
    if (v107_.v108 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v107_.v108 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if (GameData_225d6f8 == 0) {
      GameData_225d6f8 = v9;
      GameData_225d700 = 1;
    }
    *(_BYTE*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)v9 = game_menu_CompareInfo_vtable;
    *(_QWORD*)(v9 + 208) = CompareInfo_Destructor_ptr;
    if (v8 != 0) {
      v11 = *(_QWORD*)(v8 + 40);
      if (v11 != 0) {
        *(_QWORD*)(v11 + 48) = v9;
        *(_QWORD*)(v9 + 56) = *(_QWORD*)(v8 + 40);
      }
      *(_QWORD*)(v8 + 40) = v9;
      *(_QWORD*)(v9 + 24) = "CompareInfo";
      *(_QWORD*)(v9 + 32) = v8;
      *(_DWORD*)(v9 + 140) = (unsigned int)game_HashString32("CompareInfo");
      *(_QWORD*)(v9 + 64) = 0;
      *(_QWORD*)(v9 + 72) = 24;
      *(_QWORD*)(v9 + 80) = 1;
      v12 = GameData_2131a38;
      *(_QWORD*)(v9 + 8) = GameData_2131a38;
      *(_QWORD*)(v9 + 16) = v12;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
          (*(_WORD*)(v9 + 136) & 0x100) == 0) {
        *(_WORD*)(v9 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v9 + 136) & 1) == 0) {
      ProcInst_657a50(v9, 1);
    }
    v23 = *(unsigned __int8*)(a1 + 96);
    v24 = *(_QWORD*)(a1 + 88);
    *(_BYTE*)(v9 + 216) = v23;
    *(_QWORD*)(v9 + 224) = v24;
    *(_QWORD*)(v9 + 232) = v24;
    if (v23 == 10) {
      v25 = nullptr;
    }
    else {
      v25 = GameData_20660e0[v23];
    }
    v26 = game_util_Format("MCID_episode_%s", v25);
    v27 = strlen(v26);
    if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_175;
    }
    v28 = v27;
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (v27 | 7) + 1;
      }
      v29 = (const char*)fw_memory_HeapManager_Allocate(*v7, v30, 16, 0);
      v97_.v98 = v28;
      v97_.v99 = v29;
      v97_.v97 = (__int64 (**)(void))(v30 | 1);
    }
    else {
      LOBYTE(v97_.v97) = 2 * v27;
      v29 = (char*)&v97_.v97 + 1;
      if (v27 == 0) {
      LABEL_53:
        v29[v28] = 0;
        v31 = msg_MessageManager_instance__ptr[0];
        v32 = GameData_212e348;
        v33 = (const char**)msg_MessageManager_empty_text__ptr;
        if (((unsigned __int8)v97_.v97 & 1) != 0) {
          v34 = v97_.v99;
        }
        else {
          v34 = (char*)&v97_.v97 + 1;
        }
        if (v34 != nullptr && *v34 != 0) {
          v35 = *msg_MessageManager_instance__ptr[0];
          v107_.v112 = -1;
          v107_.v113 = -1;
          v107_.v114 = -1;
          v107_.v115 = -1;
          v107_.v116 = -1;
          v107_.v117 = -1;
          v107_.v118 = -1;
          v107_.v119 = -1;
          v107_.v120 = -1;
          v107_.v121 = -1;
          v107_.v122 = -1;
          v107_.v123 = -1;
          v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
          v107_.v108 = 0xFFFF0001FFFF0000LL;
          v107_.v109 = 0xFFFF0004FFFF0002LL;
          v107_.v110 = 0xFFFF0006FFFF0005LL;
          v107_.v124 = 8;
          v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
          v36 = GameRoutine_a4dbe0(v35, v34, 0);
        }
        else {
          v36 = *msg_MessageManager_empty_text__ptr;
        }
        v37 = *(_QWORD*)(a1 + 88);
        if (*(_BYTE*)(v37 + 2136) != 0) {
          v38 = (const char*)game_97b2f0(v37 + 2104);
        }
        else {
          v38 = GameHr_67ed20(*(_QWORD**)(v37 + 392));
        }
        v59 = v38;
        if (v36 != nullptr) {
          v60 = v36;
        }
        else {
          v60 = *v33;
        }
        GameRoutine_60a020(*v31 + 14704, v60);
        if (v59 != nullptr) {
          v61 = v59;
        }
        else {
          v61 = *v33;
        }
        GameRoutine_60a020(*v31 + 14728, v61);
        v62 = *v31;
        v107_.v112 = -1;
        v107_.v113 = -1;
        v107_.v114 = -1;
        v107_.v115 = -1;
        v107_.v116 = -1;
        v107_.v117 = -1;
        v107_.v118 = -1;
        v107_.v119 = -1;
        v107_.v120 = -1;
        v107_.v121 = -1;
        v107_.v122 = -1;
        v107_.v123 = -1;
        v107_.v107 = (__int64 (**)(void))(v32 + 2);
        v107_.v108 = 0xFFFF0001FFFF0000LL;
        v107_.v109 = 0xFFFF0004FFFF0002LL;
        v107_.v110 = 0xFFFF0006FFFF0005LL;
        v107_.v124 = 8;
        v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
        v63 = GameRoutine_a4dbe0(v62, "MID_RouteSelectMenu_Confirm", 0);
        v64 = strlen(v63);
        if (v64 < 0xFFFFFFFFFFFFFFF7LL) {
          v65 = v64;
          if (v64 >= 0x17) {
            if ((v64 | 7) == 0x17) {
              v67 = 26;
            }
            else {
              v67 = (v64 | 7) + 1;
            }
            v66 = (char*)fw_memory_HeapManager_Allocate(*v7, v67, 16, 0);
            v92_.v92[1] = v65;
            v92_.v93 = v66;
            v92_.v92[0] = v67 | 1;
          }
          else {
            LOBYTE(v92_.v92[0]) = 2 * v64;
            v66 = (char*)v92_.v92 + 1;
            if (v64 == 0) {
              goto LABEL_113;
            }
          }
          memmove((__int64)v66, (__int64)v63, v65);
        LABEL_113:
          v68 = (char)v97_.v97;
          v66[v65] = 0;
          if ((v68 & 1) != 0 && v97_.v99 != nullptr) {
            v69 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v69, (__int64)v97_.v99);
          }
          v70 = *(_QWORD*)(a1 + 8);
          v95_.v96 = v95_.v95;
          if ((v92_.v92[0] & 1) != 0) {
            v71 = v92_.v93;
          }
          else {
            v71 = (char*)v92_.v92 + 1;
          }
          v105_.v105[0] = v71;
          v97_.v100 = &v97_.v97;
          v107_.v107 = GameData_207c9d8;
          v107_.v108 = a1;
          v107_.v111 = (__int64*)&v107_.v107;
          v97_.v97 = GameData_207ca58;
          v95_.v95[0] = GameData_207ca58;
          v72 = RouteMenuItem_166e450(v70, (__int64)v105_.v105,
                                      (__int64)&v107_.v107, (__int64)&v97_.v97,
                                      (__int64)v95_.v95);
          if (v95_.v96 == v95_.v95) {
            v73 = 32;
          }
          else {
            if (v95_.v96 == nullptr) {
              goto LABEL_134;
            }
            v73 = 40;
          }
          (*(void (**)(__int64))(*v95_.v96 + v73))((__int64)v95_.v96);
        LABEL_134:
          if (v97_.v100 == &v97_.v97) {
            v82 = 4;
          }
          else {
            if (v97_.v100 == nullptr) {
              goto LABEL_144;
            }
            v82 = 5;
          }
          ((__int64 (*)(__int64))(*v97_.v100)[v82])((__int64)v97_.v100);
        LABEL_144:
          if (v107_.v111 == (__int64*)&v107_.v107) {
            v84 = 32;
          }
          else {
            if (v107_.v111 == nullptr) {
            LABEL_154:
              if (v72 != nullptr) {
                v86 = *((_DWORD*)v72 + 89);
                *((_DWORD*)v72 + 93) = 0;
                *((_DWORD*)v72 + 89) = v86 | 1;
                *(_QWORD*)((char*)v72 + 364) = 0xC35C000000000000LL;
              }
              if ((v92_.v92[0] & 1) == 0) {
                goto LABEL_174;
              }
              v87 = (__int64)v92_.v93;
              if (v92_.v93 == nullptr) {
                goto LABEL_174;
              }
              v88 = *v7;
              goto LABEL_171;
            }
            v84 = 40;
          }
          (*(void (**)(__int64))(*v107_.v111 + v84))((__int64)v107_.v111);
          goto LABEL_154;
        }
      LABEL_175:
        String_60a1d0();
      }
    }
    memmove((__int64)v29, (__int64)v26, v28);
    goto LABEL_53;
  }
  v3 = *(unsigned __int8*)(a1 + 96);
  if (v3 == 10) {
    v4 = nullptr;
  }
  else {
    v4 = GameData_20660e0[v3];
  }
  v13 = game_util_Format("MCID_episode_%s", v4);
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    v97_.v98 = v15;
    v97_.v99 = v16;
    v97_.v97 = (__int64 (**)(void))(v17 | 1);
    goto LABEL_29;
  }
  LOBYTE(v97_.v97) = 2 * v14;
  v16 = (char*)&v97_.v97 + 1;
  if (v14 != 0) {
  LABEL_29:
    memmove((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  if (((unsigned __int8)v97_.v97 & 1) != 0) {
    v18 = v97_.v99;
  }
  else {
    v18 = (char*)&v97_.v97 + 1;
  }
  if (v18 != nullptr && *v18 != 0) {
    v107_.v112 = -1;
    v107_.v113 = -1;
    v107_.v114 = -1;
    v107_.v115 = -1;
    v19 = *msg_MessageManager_instance__ptr[0];
    v107_.v116 = -1;
    v107_.v117 = -1;
    v107_.v118 = -1;
    v107_.v119 = -1;
    v107_.v120 = -1;
    v107_.v121 = -1;
    v107_.v122 = -1;
    v107_.v123 = -1;
    v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
    v107_.v108 = 0xFFFF0001FFFF0000LL;
    v107_.v109 = 0xFFFF0004FFFF0002LL;
    v107_.v110 = 0xFFFF0006FFFF0005LL;
    v107_.v124 = 8;
    v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
    v20 = GameRoutine_a4dbe0(v19, v18, 0);
  }
  else {
    v20 = *msg_MessageManager_empty_text__ptr;
  }
  v21 = *(_QWORD*)(a1 + 88);
  if (*(_BYTE*)(v21 + 2136) != 0) {
    v22 = (const char*)game_97b2f0(v21 + 2104);
  }
  else {
    v22 = GameHr_67ed20(*(_QWORD**)(v21 + 392));
  }
  v39 = v22;
  v40 = msg_MessageManager_instance__ptr[0];
  v41 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v20 != nullptr) {
    v42 = v20;
  }
  else {
    v42 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v42);
  if (v39 != nullptr) {
    v43 = v39;
  }
  else {
    v43 = *v41;
  }
  GameRoutine_60a020(*v40 + 14728, v43);
  v44 = *v40;
  v107_.v112 = -1;
  v107_.v113 = -1;
  v107_.v114 = -1;
  v107_.v115 = -1;
  v107_.v116 = -1;
  v107_.v117 = -1;
  v107_.v118 = -1;
  v107_.v119 = -1;
  v107_.v120 = -1;
  v107_.v121 = -1;
  v107_.v122 = -1;
  v107_.v123 = -1;
  v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
  v107_.v108 = 0xFFFF0001FFFF0000LL;
  v107_.v109 = 0xFFFF0004FFFF0002LL;
  v107_.v110 = 0xFFFF0006FFFF0005LL;
  v107_.v124 = 8;
  v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
  v45 = GameRoutine_a4dbe0(v44, "MID_RouteSelectMenu_AutoGrow_Confirm", 0);
  v46 = strlen(v45);
  if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v47 = v46;
  if (v46 >= 0x17) {
    if ((v46 | 7) == 0x17) {
      v49 = 26;
    }
    else {
      v49 = (v46 | 7) + 1;
    }
    v48 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v49, 16, 0);
    v105_.v105[1] = v47;
    v105_.v106 = v48;
    v105_.v105[0] = v49 | 1;
  }
  else {
    LOBYTE(v105_.v105[0]) = 2 * v46;
    v48 = (char*)v105_.v105 + 1;
    if (v46 == 0) {
      goto LABEL_78;
    }
  }
  memmove((__int64)v48, (__int64)v45, v47);
LABEL_78:
  v50 = (char)v97_.v97;
  v48[v47] = 0;
  if ((v50 & 1) != 0 && v97_.v99 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  (__int64)v97_.v99);
  }
  v52 = *(_QWORD*)(a1 + 8);
  v53 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(v52 + 152) != 0) {
    v54 = *(_QWORD*)(v52 + 152);
  }
  else {
    v54 = *(_QWORD*)(a1 + 8);
  }
  v55 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       248, 16, 0);
  *(_QWORD*)v55 = 0;
  *(_QWORD*)(v55 + 8) = 0;
  *(_QWORD*)(v55 + 16) = 0;
  *(_QWORD*)(v55 + 24) = 0;
  *(_QWORD*)(v55 + 32) = 0;
  *(_QWORD*)(v55 + 40) = 0;
  *(_QWORD*)(v55 + 48) = 0;
  *(_QWORD*)(v55 + 56) = 0;
  *(_QWORD*)(v55 + 64) = 0;
  *(_QWORD*)(v55 + 72) = 0;
  *(_QWORD*)(v55 + 80) = 0;
  *(_QWORD*)(v55 + 88) = 0;
  *(_QWORD*)(v55 + 96) = 0;
  *(_QWORD*)(v55 + 104) = 0;
  *(_QWORD*)(v55 + 112) = 0;
  *(_QWORD*)(v55 + 120) = 0;
  *(_QWORD*)(v55 + 128) = 0;
  *(_QWORD*)(v55 + 136) = 0;
  *(_QWORD*)(v55 + 144) = 0;
  *(_QWORD*)(v55 + 152) = 0;
  *(_QWORD*)(v55 + 160) = 0;
  *(_QWORD*)(v55 + 168) = 0;
  *(_QWORD*)(v55 + 176) = 0;
  *(_QWORD*)(v55 + 184) = 0;
  *(_QWORD*)(v55 + 192) = 0;
  *(_QWORD*)(v55 + 200) = 0;
  *(_QWORD*)(v55 + 208) = 0;
  *(_QWORD*)(v55 + 216) = 0;
  *(_QWORD*)(v55 + 224) = 0;
  *(_QWORD*)(v55 + 232) = 0;
  *(_QWORD*)(v55 + 240) = 0;
  v107_.v107 = nullptr;
  v107_.v108 = 0;
  BasicInfo_15e5b50(v55, (__int64*)&v107_.v107, 0);
  v56 = v107_.v108;
  if (v107_.v108 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v107_.v108 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak(v56);
  }
  if (GameData_225d6f8 == 0) {
    GameData_225d6f8 = v55;
    GameData_225d700 = 1;
  }
  *(_BYTE*)(v55 + 216) = 0;
  *(_QWORD*)(v55 + 224) = 0;
  *(_QWORD*)(v55 + 232) = 0;
  *(_QWORD*)(v55 + 240) = 0;
  *(_QWORD*)v55 = game_menu_CompareInfo_vtable;
  *(_QWORD*)(v55 + 208) = CompareInfo_Destructor_ptr;
  if (v54 != 0) {
    v57 = *(_QWORD*)(v54 + 40);
    if (v57 != 0) {
      *(_QWORD*)(v57 + 48) = v55;
      *(_QWORD*)(v55 + 56) = *(_QWORD*)(v54 + 40);
    }
    *(_QWORD*)(v54 + 40) = v55;
    *(_QWORD*)(v55 + 24) = "CompareInfo";
    *(_QWORD*)(v55 + 32) = v54;
    *(_DWORD*)(v55 + 140) = (unsigned int)game_HashString32("CompareInfo");
    *(_QWORD*)(v55 + 64) = 0;
    *(_QWORD*)(v55 + 72) = 24;
    *(_QWORD*)(v55 + 80) = 1;
    v58 = GameData_2131a38;
    *(_QWORD*)(v55 + 8) = GameData_2131a38;
    *(_QWORD*)(v55 + 16) = v58;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 32LL))(v55);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v55 + 136LL))(v55) & 1) != 0 &&
        (*(_WORD*)(v55 + 136) & 0x100) == 0) {
      *(_WORD*)(v55 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v55 + 136) & 1) == 0) {
    ProcInst_657a50(v55, 1);
  }
  v74 = *(_QWORD*)(a1 + 8);
  v107_.v111 = (__int64*)&v107_.v107;
  v75 = *(_QWORD*)(a1 + 88);
  v102 = "MID_RouteSelectMenu_AutoGrow_Yes_NotGrow";
  v103 = "MID_RouteSelectMenu_AutoGrow_Yes";
  v76 = v105_.v105[0];
  v101 = "MID_RouteSelectMenu_AutoGrow_No";
  v77 = *(_QWORD*)(v75 + 392);
  *(_BYTE*)(v55 + 216) = *(_BYTE*)(a1 + 96);
  v78 = v105_.v106;
  *(_QWORD*)(v55 + 240) = v77;
  if ((v76 & 1) != 0) {
    v79 = v78;
  }
  else {
    v79 = (char*)v105_.v105 + 1;
  }
  v97_.v97 = GameData_207c9d8;
  v97_.v98 = a1;
  v92_.v94 = v92_.v92;
  v104 = v79;
  v97_.v100 = &v97_.v97;
  v107_.v107 = GameData_207c958;
  v107_.v108 = a1;
  v95_.v95[0] = GameData_207ca58;
  v95_.v96 = v95_.v95;
  v92_.v92[0] = GameData_207ca58;
  v80 = RouteMenuItem_166e340(v74, (__int64)&v104, &v103, &v102, &v101,
                              (__int64)&v107_.v107, (__int64)&v97_.v97,
                              (__int64)v95_.v95, (__int64)v92_.v92);
  if (v92_.v94 == v92_.v92) {
    v81 = 32;
  }
  else {
    if (v92_.v94 == nullptr) {
      goto LABEL_139;
    }
    v81 = 40;
  }
  (*(void (**)(__int64))(*v92_.v94 + v81))((__int64)v92_.v94);
LABEL_139:
  if (v95_.v96 == v95_.v95) {
    v83 = 32;
  }
  else {
    if (v95_.v96 == nullptr) {
      goto LABEL_149;
    }
    v83 = 40;
  }
  (*(void (**)(__int64))(*v95_.v96 + v83))((__int64)v95_.v96);
LABEL_149:
  if (v97_.v100 == &v97_.v97) {
    v85 = 4;
  }
  else {
    if (v97_.v100 == nullptr) {
      goto LABEL_161;
    }
    v85 = 5;
  }
  ((__int64 (*)(__int64))(*v97_.v100)[v85])((__int64)v97_.v100);
LABEL_161:
  if (v107_.v111 == (__int64*)&v107_.v107) {
    v89 = 32;
    goto LABEL_165;
  }
  if (v107_.v111 != nullptr) {
    v89 = 40;
  LABEL_165:
    (*(void (**)(__int64))(*v107_.v111 + v89))((__int64)v107_.v111);
  }
  if (v80 != nullptr) {
    v90 = *((_DWORD*)v80 + 89);
    *((_DWORD*)v80 + 93) = 0;
    *((_DWORD*)v80 + 89) = v90 | 1;
    *(_QWORD*)((char*)v80 + 364) = 0xC35C000000000000LL;
  }
  if ((v105_.v105[0] & 1) != 0) {
    v87 = (__int64)v105_.v106;
    if (v105_.v106 == nullptr) {
      goto LABEL_174;
    }
    v88 = *v53;
  LABEL_171:
    v91 = 128;
    if (*(_QWORD*)(v88 + 200) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(v88 + v91, v87);
  }
LABEL_174:
  Impl_717b40();
  return 12;
}

#pragma GCC visibility pop
