#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_113c480(__int64, unsigned __int8*, __int64**);
_QWORD* GameRoutine_113cb60(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_87dcb0(_QWORD* result, _QWORD*);
__int64 GameRoutine_113a550();
__int64 GameRoutine_113a660();
__int64 GameRoutine_143e400();
__int64 GameRoutine_19577f0(__int64, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_113a800();
__int64 game_113a8c0();
__int64 game_113a9b0();
__int64 game_113aaa0();
__int64 game_113ac00();
__int64 game_113ad60();
__int64 game_113ae10();
__int64 game_113aec0();
__int64 game_113aee0();
__int64 game_113af00();
__int64 game_113af20();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1afac00;
extern __int64 (*GameData_2011bd0[])();
extern __int64 (*GameData_20379c0[])();
extern __int64 (*GameData_2037a40[])();
extern __int64 (*GameData_20a1b58[])();
extern __int64 (*GameData_20e8ba8[])();
extern __int64 (*GameData_20e8c28[])();
extern __int64 (*GameData_2114408[])();
extern __int64 (*GameData_211c9a0[])();
extern __int64 (*GameData_211ca20[])();
extern __int64 (*GameData_2131348[2])();
extern __int64 (*game_menu_LegionDialog_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a19f0[])();
extern __int64* GameData_2131b80;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_22445b8;
extern __int64 GameData_225c918;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern char* msg_MessageManager_empty_text_;
extern char GameData_1a96a7f[];
extern char GameData_1a9a7ac[];
extern char GameData_1a9a7b9[];
extern char GameData_1aaa01d[];
extern char GameData_1ac15f9[];
extern char GameData_1ac160e[];
extern char GameData_1ac4c5b[];
extern char GameData_1ae0271[];
extern char GameData_1af2ec9[];
extern int GameData_1c01998[3];
extern int GameData_1c0db74[11];
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_1647b80(__int64, const char**);
void GameRoutine_1957ca0(int, __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___functional_1139a00(_QWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___functional_13fabb0(__int64 a1);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___functional_163f8c0(PSEUDO_X8 x8_, __int64 a1,
                                                   int* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_16f7830(__int64 a1,
                                                           char** a2);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___functional_1791870(PSEUDO_X8 x8_,
                                                   __int64 unused_int0,
                                                   _DWORD* a1);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___functional_1832520(PSEUDO_X8 x8_,
                                                   __int64 unused_int0,
                                                   _DWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___functional_1852350(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_192c620(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_197ddc0(__int64 a1);

void llvm_libcxx_21_libcxx_include___functional_1139a00(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  struct {
    char gap0_[8];
    __int64 v55[3];
    __int64* v56[4];
    __int64** v57;
  } f_;

  if (a1[15] != 0) {
    v2 = (_QWORD*)a1[14];
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (__int64)v2;
        v2 = (_QWORD*)*v2;
        v6 = *(_QWORD**)(v5 + 80);
        if (v6 == (_QWORD*)(v5 + 48)) {
          v7 = 32;
        }
        else {
          if (v6 == nullptr) {
            goto LABEL_13;
          }
          v7 = 40;
        }
        (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
      LABEL_13:
        if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          v8 = *(_QWORD*)(v5 + 32);
          if (v8 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v8);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v5);
      } while (v2 != nullptr);
    }
    v10 = a1[13];
    a1[14] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[12] + 8 * v12) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[12] + 8 * v12 + 48) = 0;
          v14 = a1[12] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[12] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[15] = 0;
  }
  LOBYTE(f_.v55[0]) = 8;
  strcpy((char*)f_.v55 + 1, "Play");
  f_.v56[0] = f_.v55;
  v16 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)GameRoutine_113a550;
  GameRoutine_113cb60(f_.v56, v16 + 6);
  if (f_.v57 == f_.v56) {
    v17 = 4;
    goto LABEL_32;
  }
  if (f_.v57 != nullptr) {
    v17 = 5;
  LABEL_32:
    ((void (*)(__int64))(*f_.v57)[v17])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  f_.v55[2]);
  }
  LOBYTE(f_.v55[0]) = 30;
  strcpy((char*)f_.v55 + 1, "PlayByVoiceLang");
  f_.v56[0] = f_.v55;
  v19 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)GameRoutine_113a660;
  GameRoutine_113cb60(f_.v56, v19 + 6);
  if (f_.v57 == f_.v56) {
    v20 = 4;
    goto LABEL_42;
  }
  if (f_.v57 != nullptr) {
    v20 = 5;
  LABEL_42:
    ((void (*)(__int64))(*f_.v57)[v20])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  f_.v55[2]);
  }
  LOBYTE(f_.v55[0]) = 8;
  strcpy((char*)f_.v55 + 1, "Stop");
  f_.v56[0] = f_.v55;
  v22 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113a800;
  GameRoutine_113cb60(f_.v56, v22 + 6);
  if (f_.v57 == f_.v56) {
    v23 = 4;
    goto LABEL_52;
  }
  if (f_.v57 != nullptr) {
    v23 = 5;
  LABEL_52:
    ((void (*)(__int64))(*f_.v57)[v23])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "\nPause");
  f_.v56[0] = f_.v55;
  v25 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113a8c0;
  GameRoutine_113cb60(f_.v56, v25 + 6);
  if (f_.v57 == f_.v56) {
    v26 = 4;
    goto LABEL_62;
  }
  if (f_.v57 != nullptr) {
    v26 = 5;
  LABEL_62:
    ((void (*)(__int64))(*f_.v57)[v26])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  f_.v55[2]);
  }
  LOBYTE(f_.v55[0]) = 12;
  strcpy((char*)f_.v55 + 1, "Resume");
  f_.v56[0] = f_.v55;
  v28 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113a9b0;
  GameRoutine_113cb60(f_.v56, v28 + 6);
  if (f_.v57 == f_.v56) {
    v29 = 4;
    goto LABEL_72;
  }
  if (f_.v57 != nullptr) {
    v29 = 5;
  LABEL_72:
    ((void (*)(__int64))(*f_.v57)[v29])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  f_.v55[2]);
  }
  LOBYTE(f_.v55[0]) = 12;
  strcpy((char*)f_.v55 + 1, "SetVol");
  f_.v56[0] = f_.v55;
  v31 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113aaa0;
  GameRoutine_113cb60(f_.v56, v31 + 6);
  if (f_.v57 == f_.v56) {
    v32 = 4;
    goto LABEL_82;
  }
  if (f_.v57 != nullptr) {
    v32 = 5;
  LABEL_82:
    ((void (*)(__int64))(*f_.v57)[v32])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  f_.v55[2]);
  }
  LOBYTE(f_.v55[0]) = 20;
  strcpy((char*)f_.v55 + 1, "SetSlotVol");
  f_.v56[0] = f_.v55;
  v34 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113ac00;
  GameRoutine_113cb60(f_.v56, v34 + 6);
  if (f_.v57 == f_.v56) {
    v35 = 4;
    goto LABEL_92;
  }
  if (f_.v57 != nullptr) {
    v35 = 5;
  LABEL_92:
    ((void (*)(__int64))(*f_.v57)[v35])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "\"EnableSignalSound");
  f_.v56[0] = f_.v55;
  v37 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113ad60;
  GameRoutine_113cb60(f_.v56, v37 + 6);
  if (f_.v57 == f_.v56) {
    v38 = 4;
    goto LABEL_102;
  }
  if (f_.v57 != nullptr) {
    v38 = 5;
  LABEL_102:
    ((void (*)(__int64))(*f_.v57)[v38])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "$DisableSignalSound");
  f_.v56[0] = f_.v55;
  v40 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113ae10;
  GameRoutine_113cb60(f_.v56, v40 + 6);
  if (f_.v57 == f_.v56) {
    v41 = 4;
    goto LABEL_112;
  }
  if (f_.v57 != nullptr) {
    v41 = 5;
  LABEL_112:
    ((void (*)(__int64))(*f_.v57)[v41])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "(EnableSignalSoundAll");
  f_.v56[0] = f_.v55;
  v43 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113aec0;
  GameRoutine_113cb60(f_.v56, v43 + 6);
  if (f_.v57 == f_.v56) {
    v44 = 4;
    goto LABEL_122;
  }
  if (f_.v57 != nullptr) {
    v44 = 5;
  LABEL_122:
    ((void (*)(__int64))(*f_.v57)[v44])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "*DisableSignalSoundAll");
  f_.v56[0] = f_.v55;
  v46 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113aee0;
  GameRoutine_113cb60(f_.v56, v46 + 6);
  if (f_.v57 == f_.v56) {
    v47 = 4;
    goto LABEL_132;
  }
  if (f_.v57 != nullptr) {
    v47 = 5;
  LABEL_132:
    ((void (*)(__int64))(*f_.v57)[v47])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "(EnableGameFadeVolume");
  f_.v56[0] = f_.v55;
  v49 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113af00;
  GameRoutine_113cb60(f_.v56, v49 + 6);
  if (f_.v57 == f_.v56) {
    v50 = 4;
    goto LABEL_142;
  }
  if (f_.v57 != nullptr) {
    v50 = 5;
  LABEL_142:
    ((void (*)(__int64))(*f_.v57)[v50])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  f_.v55[2]);
  }
  strcpy((char*)f_.v55, "*DisableGameFadeVolume");
  f_.v56[0] = f_.v55;
  v52 =
      GameRoutine_113c480((__int64)(a1 + 12), (unsigned __int8*)f_.v55, f_.v56);
  f_.v57 = f_.v56;
  f_.v56[0] = (__int64*)GameData_2011bd0;
  f_.v56[1] = (__int64*)game_113af20;
  GameRoutine_113cb60(f_.v56, v52 + 6);
  if (f_.v57 == f_.v56) {
    v53 = 4;
    goto LABEL_152;
  }
  if (f_.v57 != nullptr) {
    v53 = 5;
  LABEL_152:
    ((void (*)(__int64))(*f_.v57)[v53])((__int64)f_.v57);
  }
  if ((f_.v55[0] & 1) != 0 && f_.v55[2] != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                                  f_.v55[2]);
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_13fabb0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
  } v6_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v1 = *(_QWORD*)(a1 + 8);
  v6_.v9 = 0;
  v6_.v10 = 0;
  v6_.v7 = nullptr;
  v6_.v8 = 0;
  memset(v6_.v6, 0, sizeof(v6_.v6));
  v11_.v11[0] = GameData_20379c0;
  v11_.v12 = v11_.v11;
  GameRoutine_87dcb0(v11_.v11, v6_.v6);
  if (v11_.v12 == v11_.v11) {
    v2 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v2))((__int64)v11_.v12);
LABEL_6:
  GameRoutine_19577f0(v1, (__int64)v6_.v6);
  v11_.v11[0] = GameData_2037a40;
  v11_.v11[1] = v1;
  v11_.v12 = v11_.v11;
  GameRoutine_1957ca0(2, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v3 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_11;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v3))((__int64)v11_.v12);
LABEL_11:
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
    goto LABEL_15;
  }
  if (v6_.v7 != nullptr) {
    v4 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  }
  return 2;
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___functional_163f8c0(PSEUDO_X8 x8_, __int64 a1,
                                                   int* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  char* v5;
  char* v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL) + *a2);
  if (v4 <= 3) {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL) + *a2) == 0) {
      v5 = "MID_TutorialMenu_PickUp";
      if (GameData_1a96a7f[0] == 0) {
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    if (v4 != 2) {
      if (v4 == 3) {
        v5 = "MID_TutorialMenu_Hub";
        if (GameData_1ac15f9[0] == 0) {
          goto LABEL_22;
        }
        goto LABEL_20;
      }
    LABEL_13:
      v5 = "MID_Menu_All";
      if (GameData_1a9a7ac[0] == 0) {
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    v5 = "MID_TutorialMenu_Battle";
    if (GameData_1af2ec9[0] != 0) {
      goto LABEL_20;
    }
  }
  else {
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL) + *a2) <=
        5u) {
      if (v4 == 4) {
        v5 = "MID_TutorialMenu_Gmap";
        if (GameData_1ac160e[0] == 0) {
          goto LABEL_22;
        }
      }
      else {
        v5 = "MID_TutorialMenu_Dungeon";
        if (GameData_1a9a7b9[0] == 0) {
          goto LABEL_22;
        }
      }
    LABEL_20:
      v6 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v5, 0);
      goto LABEL_23;
    }
    if (v4 == 6) {
      v5 = "MID_TutorialMenu_System";
      if (GameData_1ac4c5b[0] != 0) {
        goto LABEL_20;
      }
    }
    else if (v4 != 7) {
      goto LABEL_13;
    }
  }
LABEL_22:
  v6 = msg_MessageManager_empty_text_;
LABEL_23:
  result = GameRoutine_1a09c70(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (result | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    a3[1] = v8;
    a3[2] = v11;
    *a3 = v10 | 1;
    v9 = v11;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v9 = (__int64)a3 + 1;
    if (result == 0) {
      goto LABEL_32;
    }
  }
  result = GameRoutine_1a0b940(v9, (__int64)v6, v8);
LABEL_32:
  *(_BYTE*)(v9 + v8) = 0;
  {
    result;
    return;
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_16f7830(__int64 a1,
                                                           char** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    char* v10[4];
    char** v11;
  } v10_;

  if (a1 != 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1584, 16, 0);
    v10_.v10[0] = *a2;
    GameRoutine_1647b80(v4, v10_.v10);
    *(_WORD*)(v4 + 1496) = 0;
    *(_QWORD*)(v4 + 1520) = 0;
    *(_QWORD*)(v4 + 1528) = 0;
    *(_QWORD*)(v4 + 1536) = 0;
    *(_QWORD*)v4 = game_menu_LegionDialog_vtable;
    *(_QWORD*)(v4 + 1544) = 0;
    *(_QWORD*)(v4 + 1552) = 0;
    *(_QWORD*)(v4 + 1560) = 0;
    *(_BYTE*)(v4 + 1568) = 0;
    *(_QWORD*)(v4 + 1576) = 0;
    *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20a19f0;
    *(_DWORD*)(v4 + 1572) = -1;
    ProcInst_657850(v4, (__int64)GameData_212c730, (__int64)"T", 1, a1);
    v10_.v11 = v10_.v10;
    v8_.v8[0] = GameData_20a1b58;
    v8_.v9 = v8_.v8;
    v10_.v10[0] = (const char*)GameData_20a1b58;
    GameRoutine_654050(v10_.v10, (_QWORD*)(v4 + 1200));
    if (v10_.v11 == v10_.v10) {
      v5 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        goto LABEL_8;
      }
      v5 = 40;
    }
    (*(void (**)(__int64)) & (*v10_.v11)[v5])((__int64)v10_.v11);
  LABEL_8:
    if (v8_.v9 == v8_.v8) {
      v6 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
      LABEL_13:
        *(_BYTE*)(v4 + 1080) = 1;
        return v4;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
    goto LABEL_13;
  }
  return 0;
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___functional_1791870(PSEUDO_X8 x8_,
                                                   __int64 unused_int0,
                                                   _DWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  char* v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *a1 - 1;
  if (v3 > 2) {
    v4 = "MID_TroopList_Page1";
    if (GameData_1ae0271[0] != 0) {
      goto LABEL_3;
    }
  }
  else {
    v4 = (char*)GameData_1c01998 + GameData_1c01998[v3];
    if (*v4 != 0) {
    LABEL_3:
      v5 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v4, 0);
      goto LABEL_6;
    }
  }
  v5 = msg_MessageManager_empty_text_;
LABEL_6:
  result = GameRoutine_1a09c70(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_15;
    }
  }
  result = GameRoutine_1a0b940(v8, (__int64)v5, v7);
LABEL_15:
  *(_BYTE*)(v8 + v7) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___functional_1832520(PSEUDO_X8 x8_,
                                                   __int64 unused_int0,
                                                   _DWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v3;
  char* v4;
  char* v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *a1 - 1;
  if (v3 > 0xA) {
    v4 = "MID_SysMenu_Item";
    if (GameData_1aaa01d[0] != 0) {
      goto LABEL_3;
    }
  }
  else {
    v4 = (char*)GameData_1c0db74 + GameData_1c0db74[v3];
    if (*v4 != 0) {
    LABEL_3:
      v5 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v4, 0);
      goto LABEL_6;
    }
  }
  v5 = msg_MessageManager_empty_text_;
LABEL_6:
  result = GameRoutine_1a09c70(v5);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v10;
    *a2 = v9 | 1;
    v8 = v10;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v8 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_15;
    }
  }
  result = GameRoutine_1a0b940(v8, (__int64)v5, v7);
LABEL_15:
  *(_BYTE*)(v8 + v7) = 0;
  {
    result;
    return;
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_1852350(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
  } v7_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v2 = *(_QWORD*)(a1 + 8);
  v1 = *(_QWORD*)(a1 + 16);
  v7_.v10 = 0;
  v7_.v11 = 0;
  v7_.v8 = nullptr;
  v7_.v9 = 0;
  memset(v7_.v7, 0, sizeof(v7_.v7));
  v12_.v13 = v12_.v12;
  v12_.v12[0] = GameData_20e8ba8;
  v12_.v12[1] = v1;
  GameRoutine_87dcb0(v12_.v12, v7_.v7);
  if (v12_.v13 == v12_.v12) {
    v3 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v3))((__int64)v12_.v13);
LABEL_6:
  BYTE1(v7_.v10) = 1;
  GameRoutine_19577f0(v2, (__int64)v7_.v7);
  v12_.v12[0] = GameData_20e8c28;
  v12_.v12[1] = v2;
  v12_.v13 = v12_.v12;
  GameRoutine_1957ca0(2, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v4 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v4))((__int64)v12_.v13);
LABEL_11:
  if (v7_.v8 == v7_.v7) {
    v5 = 32;
    goto LABEL_15;
  }
  if (v7_.v8 != nullptr) {
    v5 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v7_.v8 + v5))((__int64)v7_.v8);
  }
  return 2;
}

__int64 llvm_libcxx_21_libcxx_include___functional_192c620(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
  } v6_;
  struct {
    __int64 (*v11[4])();
    __int64 (**v12)();
  } v11_;

  v6_.v9 = 0;
  v6_.v10 = 0;
  v6_.v7 = nullptr;
  v6_.v8 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  memset(v6_.v6, 0, sizeof(v6_.v6));
  v11_.v12 = v11_.v11;
  v11_.v11[0] = (__int64 (*)())(GameData_2131b80 + 2);
  v11_.v11[1] = GameData_2131348[0];
  GameRoutine_87dcb0(v11_.v11, v6_.v6);
  if (v11_.v12 == v11_.v11) {
    v2 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))((char*)*v11_.v12 + v2))((__int64)v11_.v12);
LABEL_6:
  GameRoutine_19577f0(v1, (__int64)v6_.v6);
  v11_.v11[0] = (__int64 (*)())GameData_2114408;
  v11_.v11[1] = (__int64 (*)())v1;
  v11_.v12 = v11_.v11;
  GameRoutine_1957ca0(2, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v3 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_11;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))((char*)*v11_.v12 + v3))((__int64)v11_.v12);
LABEL_11:
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
    goto LABEL_15;
  }
  if (v6_.v7 != nullptr) {
    v4 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  }
  return 2;
}

__int64 llvm_libcxx_21_libcxx_include___functional_197ddc0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64** v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v24_;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;

  v1 = *(_QWORD*)(a1 + 8);
  if (game_GameModeData_instance_ == 0 ||
      (v2 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&game_kVariableHubFacilityForced)) == 0 ||
      *(_DWORD*)(v2 + 32) == 0) {
    v24_.v27 = 0;
    v24_.v28 = 0;
    v24_.v25 = nullptr;
    v24_.v26 = 0;
    memset(v24_.v24, 0, sizeof(v24_.v24));
    v29_.v29[0] = GameData_211c9a0;
    v29_.v30 = v29_.v29;
    GameRoutine_87dcb0(v29_.v29, v24_.v24);
    if (v29_.v30 == v29_.v29) {
      v6 = 32;
    }
    else {
      if (v29_.v30 == nullptr) {
      LABEL_15:
        v7 = GameData_225c918;
        if (GameData_225c918 != 0 ||
            (v7 = GameData_22445b8, GameData_22445b8 != 0)) {
          v8 = (__int64*)(v7 + 216);
        }
        else {
          v20 = GameRoutine_143e400();
          v8 = **(__int64***)(v20 + 40);
          if ((int)((*(_QWORD*)(*(_QWORD*)(v20 + 40) + 8LL) - (_QWORD)v8) >>
                    3) < 1) {
            goto LABEL_26;
          }
        }
        v9 = *v8;
        if (*v8 != 0) {
          v10 = GameRoutine_143e400();
          if (v10 != 0) {
            v11 = v10;
            game_HashString((__int64)&GameData_1afac00);
            v12 = *(__int64***)(v11 + 40);
            v13 = *v12;
            v14 = v12[1];
            if (*v12 == v14) {
            LABEL_23:
              v15 = 0;
            }
            else {
              while (1) {
                v16 = *v13++;
                v15 = v16;
                v17 = *(_QWORD*)(v16 + 32);
                v18 = game_HashString((__int64)&GameData_1afac00);
                if (v18 == game_HashString(v17)) {
                  break;
                }
                if (v13 == v14) {
                  goto LABEL_23;
                }
              }
            }
            v19 = v9 == v15;
          LABEL_27:
            BYTE1(v24_.v27) = v19;
            GameRoutine_19577f0(v1, (__int64)v24_.v24);
            v29_.v29[0] = GameData_211ca20;
            v29_.v29[1] = v1;
            v29_.v30 = v29_.v29;
            GameRoutine_1957ca0(2, (__int64)v29_.v29);
            if (v29_.v30 == v29_.v29) {
              v21 = 32;
            }
            else {
              if (v29_.v30 == nullptr) {
                goto LABEL_32;
              }
              v21 = 40;
            }
            (*(void (**)(__int64))(*v29_.v30 + v21))((__int64)v29_.v30);
          LABEL_32:
            if (v24_.v25 == v24_.v24) {
              v22 = 32;
            }
            else {
              if (v24_.v25 == nullptr) {
                return 2;
              }
              v22 = 40;
            }
            (*(void (**)(__int64))(*v24_.v25 + v22))((__int64)v24_.v25);
            return 2;
          }
        }
      LABEL_26:
        v19 = false;
        goto LABEL_27;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v29_.v30 + v6))((__int64)v29_.v30);
    goto LABEL_15;
  }
  v3 = GameData_225c918;
  if (GameData_225c918 != 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&game_kVariableHubFacilityForced);
      v5 = 2;
      if (v4 != 0) {
        if (*(_DWORD*)(v4 + 32) != 0) {
          v5 = 5;
        }
        else {
          v5 = 2;
        }
      }
      goto LABEL_40;
    }
  LABEL_39:
    v5 = 2;
  LABEL_40:
    *(_DWORD*)(v3 + 152) = v5;
    return 4;
  }
  v3 = GameData_22445b8;
  if (GameData_22445b8 != 0) {
    goto LABEL_39;
  }
  return 4;
}

#pragma GCC visibility pop
