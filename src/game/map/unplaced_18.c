#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_7fb7c0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 IDeploy_7480e0(__int64, int, int, int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_GetJobUnknown30(__int64);
__int64 game_Unit_GetParam(__int64);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
bool game_Unit_IsImmobile(__int64);
bool game_Unit_IsLocked(__int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f95338[])();
extern __int64 (*GameData_1f953b8[])();
extern __int64* GameData_212c880[5];
extern __int64 GameData_21ca2f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_749500(__int64, __int64, int*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_map_748f80(__int64 a1, __int64 a2, int a3, int a4, int a5,
                        unsigned int* a6);
bool game_map_11ddc40(char* a1);

__int64 game_map_748f80(__int64 a1, __int64 a2, int a3, int a4, int a5,
                        unsigned int* a6)
{
  unsigned int v6;
  int v7;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  char v22;
  char v23;
  char v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  char* v48;
  char* v49;
  _QWORD* v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  struct {
    char gap0_[4];
    char v55;
    char gap5_[3];
    int v56;
    int v57;
    unsigned int v58;
    char v59;
    char v60;
    char gap22_[2];
    int v61;
    int v62;
    int v63;
    char gap36_[4];
    __int64 v64;
    __int64 v65;
    __int64 v66;
    int v67;
    char gap68_[8];
    unsigned int v68;
    _QWORD v69[2];
    __int64 v70;
    char gap104_[8];
    _QWORD* v71;
    char gap120_[16];
    int v72;
    int v73;
  } f_;

  v6 = *a6;
  f_.v68 = *a6;
  if (a2 == 0) {
    v23 = 0;
    return v23 & 1;
  }
  v7 = a5;
  if (a5 < 0) {
    LOBYTE(f_.v58) = 10;
    v7 = game_Unit_GetParam(a2);
  }
  v12 = game_g_shared_system_skills_ptr;
  v13 = *(_QWORD*)(a2 + 1744);
  v14 = *(unsigned int*)((char*)((__int128*)0x10LL) +
                         game_g_shared_system_skills_ptr + 8);
  v15 = *(_QWORD*)(a2 + 1752) - v13;
  f_.v58 = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                      game_g_shared_system_skills_ptr + 8) &
           0xFFF;
  if (((v14 >> 5) & 0x7F) + 1 <= v15 >> 2 &&
      ((*(_DWORD*)(v13 + 4 * ((v14 >> 5) & 0x7F)) >> v14) & 1) != 0 &&
      game_HasActiveSkill_843420(&f_.v58, a2 + 1744)) {
    v6 |= 0x8000u;
    f_.v68 = v6;
  }
  if (game_Unit_IsLocked(a2)) {
    v6 &= 0xFFCFFFFF;
    f_.v68 = v6;
  }
  v16 = game_Unit_IsImmobile(a2);
  v17 = *(_QWORD*)(a2 + 1744);
  v18 = *(unsigned int*)((char*)((_UNKNOWN*)0xE8LL) + v12);
  if (v16 && (v6 & 0x2000) == 0) {
    v19 = 0;
  }
  else {
    v19 = v7;
  }
  v20 = *(_QWORD*)(a2 + 1752) - v17;
  f_.v58 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE8LL) + v12) & 0xFFF;
  if (((v18 >> 5) & 0x7F) + 1 <= v20 >> 2 &&
      ((*(_DWORD*)(v17 + 4 * ((v18 >> 5) & 0x7F)) >> v18) & 1) != 0 &&
      game_HasActiveSkill_843420(&f_.v58, a2 + 1744)) {
    v6 = v6 & 0xFFFFBFFD | 0x4000;
    f_.v68 = v6;
  }
  f_.v65 = 0;
  f_.v66 = 0;
  f_.v64 = 0;
  v21 = *(_QWORD*)(a2 + 440);
  f_.v58 = 0;
  f_.v61 = 0;
  f_.v63 = 0;
  f_.v67 = 0;
  if (v21 != 0) {
    v22 = *(_BYTE*)(v21 + 16);
  }
  else {
    v22 = 9;
  }
  f_.v59 = v22;
  v24 = game_Unit_GetJobUnknown30(a2);
  v25 = *(_DWORD*)(a2 + 592);
  f_.v60 = v24;
  f_.v62 = v25;
  f_.v63 = 0;
  if (&f_.v64 != (__int64*)(a2 + 1744)) {
    GameRoutine_7fb7c0(
        &f_.v64, *(_QWORD*)(a2 + 1744), *(_QWORD*)(a2 + 1752),
        (__int64)(*(_QWORD*)(a2 + 1752) - *(_QWORD*)(a2 + 1744)) >> 2);
  }
  f_.v67 = *(_DWORD*)(a2 + 1768);
  if ((*(_BYTE*)(a2 + 1835) & 8) == 0) {
    goto LABEL_36;
  }
  v26 = f_.v69;
  f_.v70 = a2;
  f_.v69[0] = GameData_1f953b8;
  f_.v69[1] = &f_.v58;
  v27 = *(_QWORD*)(a2 + 1784);
  v28 = *(_QWORD*)(a2 + 1776);
  f_.v71 = f_.v69;
  if ((int)((unsigned __int64)(v27 - v28) >> 2) >= 1) {
    v29 = 0;
    v30 = 0;
    v31 = GameData_212c880[0];
    v32 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v32 + 64) +
                               8LL * (*(_DWORD*)(v28 + v29) & 0xFFF)) +
                    250LL) == 27) {
        if (f_.v71 == nullptr) {
        LABEL_30:
          GameRoutine_60a310();
        }
        (*(void (**)(__int64, __int64))(*f_.v71 + 48LL))((__int64)f_.v71,
                                                         v28 + v29);
        v32 = *v31;
        v27 = *(_QWORD*)(a2 + 1784);
        v28 = *(_QWORD*)(a2 + 1776);
      }
      ++v30;
      v29 += 4;
    } while (v30 < (int)((unsigned __int64)(v27 - v28) >> 2));
    v26 = f_.v71;
    if (f_.v71 != f_.v69) {
      if (f_.v71 != nullptr) {
        v33 = 40;
      LABEL_35:
        (*(void (**)(__int64))(*v26 + v33))((__int64)v26);
      }
    LABEL_36:
      f_.v61 = v19;
      f_.v58 = v6;
      f_.v55 = IDeploy_7480e0(a1, a3, a4, (int*)&f_.v58);
      if ((v6 & 0x1F00000) != 0) {
        GameRoutine_749500(a1, a2, (int*)&f_.v68);
      }
      if ((v6 & 0x1000) == 0) {
        goto LABEL_39;
      }
      v36 = *(_QWORD*)(a2 + 440);
      if (v36 != 0) {
        v37 = *(unsigned __int8*)(v36 + 16);
      }
      else {
        v37 = 9;
      }
      if (v37 != *(unsigned __int8*)(GameData_21ca2f8 + 24) &&
          game_Unit_IsImmobile(a2)) {
        LODWORD(v38) = *(char*)(a2 + 584) + 32 * *(char*)(a2 + 585);
        if ((unsigned int)v38 >= 0x400) {
          v38 = 0;
        }
        else {
          v38 = (unsigned int)v38;
        }
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v38 + 64) = -1;
        LODWORD(v38) = *(char*)(a2 + 584) + 32 * *(char*)(a2 + 585);
        if ((unsigned int)v38 >= 0x400) {
          v38 = 0;
        }
        else {
          v38 = (unsigned int)v38;
        }
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v38 + 1096) = 0;
      }
      v39 = *(_QWORD*)(a1 + 8);
      v40 = *(_DWORD*)(v39 + 2672);
      v41 = *(_DWORD*)(v39 + 2668);
      f_.v57 = *(_DWORD*)(v39 + 2664);
      v42 = v40 + f_.v57;
      v43 = *(_DWORD*)(v39 + 2676);
      f_.v56 = v43 + v41;
      if (*(int*)(v39 + 12) <= 1) {
        if (v43 >= 1 && v40 >= 1) {
          v52 = 32 * v41;
          do {
            v53 = f_.v57;
            do {
              if ((unsigned int)(v52 + v53) >= 0x400) {
                v54 = 0;
              }
              else {
                v54 = v52 + v53;
              }
              if (*(unsigned __int8*)(v39 + 64 + v54) != 255 &&
                  (unsigned int)GameRoutine_747df0(v39, v53, v41,
                                                   *(_BYTE*)(v39 + 5)) != 255) {
                *(_DWORD*)(v39 + 2504 + 4LL * ((v52 + v53) >> 5)) |= 1 << v53;
              }
              ++v53;
            } while (v53 < v42);
            ++v41;
            v52 += 32;
          } while (v41 < f_.v56);
        }
        goto LABEL_39;
      }
      if (v43 < 1 || v40 < 1) {
        goto LABEL_39;
      }
      while (2) {
        v44 = f_.v57;
        v45 = 32 * v41;
        do {
          v47 = v44 + v45;
          if ((unsigned int)(v44 + v45) >= 0x400) {
            v47 = 0;
          }
          if (*(unsigned __int8*)(v39 + 64 + v47) != 255 &&
              (unsigned int)GameRoutine_747df0(v39, v44, v41,
                                               *(_BYTE*)(v39 + 5)) != 255) {
            v48 = *(char**)(v39 + 2640);
            v49 = *(char**)(v39 + 2648);
            v50 = f_.v69;
            f_.v69[0] = GameData_1f95338;
            f_.v69[1] = v39 + 2504;
            f_.v70 = v39;
            f_.v71 = f_.v69;
            if (v48 == v49) {
              goto LABEL_63;
            }
            do {
              v51 = v44 + *v48;
              f_.v72 = v41 + v48[1];
              f_.v73 = v51;
              if (f_.v71 == nullptr) {
                goto LABEL_30;
              }
              (*(void (**)(__int64, __int64, __int64))(*f_.v71 + 48LL))(
                  (__int64)f_.v71, (__int64)&f_.v73, (__int64)&f_.v72);
              v48 += 4;
            } while (v48 != v49);
            v50 = f_.v71;
            if (f_.v71 == f_.v69) {
            LABEL_63:
              v46 = 32;
            LABEL_64:
              (*(void (**)(__int64))(*v50 + v46))((__int64)v50);
              goto LABEL_65;
            }
            if (f_.v71 != nullptr) {
              v46 = 40;
              goto LABEL_64;
            }
          }
        LABEL_65:
          ++v44;
        } while (v44 < v42);
        if (++v41 < f_.v56) {
          continue;
        }
        break;
      }
    LABEL_39:
      if (f_.v64 != 0) {
        f_.v65 = f_.v64;
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, f_.v64);
      }
      v23 = f_.v55;
      return v23 & 1;
    }
  }
  v33 = 32;
  goto LABEL_35;
}

bool game_map_11ddc40(char* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  _QWORD* v15;
  char* v16;
  char* v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
    unsigned __int64 v26[2];
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } f_;

  v2 = GameRoutine_1a09c70(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_49;
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    f_.v28 = v3;
    f_.v29 = v4;
    f_.v27 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(f_.v27) = 2 * v2;
  v4 = (char*)&f_.v27 + 1;
  if (v2 != 0) {
  LABEL_9:
    GameRoutine_1a0b950((__int64)v4, (__int64)a1, v3);
  }
  v4[v3] = 0;
  v6 = f_.v27;
  v7 = (__int64)f_.v29;
  if ((f_.v27 & 1) != 0) {
    v8 = f_.v29;
  }
  else {
    v8 = (char*)&f_.v27 + 1;
  }
  if ((f_.v27 & 1) != 0) {
    v9 = f_.v28;
  }
  else {
    v9 = (unsigned __int64)(unsigned __int8)f_.v27 >> 1;
  }
  v10 = v9 + 13;
  if (v9 + 13 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_49:
    String_60a1d0();
  }
  if (v10 > 0x16) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
    f_.v24 = v9 + 13;
    f_.v25 = (char*)v12;
    f_.v23 = v13 | 1;
    v11 = v13 | 1;
  }
  else {
    v11 = 2 * v10;
    v12 = 0;
    f_.v24 = 0;
    f_.v25 = nullptr;
    f_.v23 = (unsigned __int8)(2 * v10);
  }
  v14 = (v11 & 1) == 0;
  if ((v11 & 1) != 0) {
    v15 = (_QWORD*)v12;
  }
  else {
    v15 = (__int64*)((char*)&f_.v23 + 1);
  }
  *v15 = 0x8FE59AAEE59099E9LL;
  *(_QWORD*)((char*)v15 + 5) = 0x5FA688E6828FE59ALL;
  if (v14) {
    v16 = (char*)&f_.v24 + 6;
  }
  else {
    v16 = (char*)(v12 + 13);
  }
  if (v9 != 0) {
    GameRoutine_1a0b940((__int64)v16, (__int64)v8, v9);
  }
  v16[v9] = 0;
  if ((f_.v23 & 1) != 0) {
    v17 = f_.v25;
  }
  else {
    v17 = (char*)&f_.v23 + 1;
  }
  f_.v26[1] = (unsigned __int64)v17;
  f_.v26[0] = game_HashString((__int64)v17);
  if (game_GameModeData_instance_ != 0 &&
      (v18 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), f_.v26)) != 0) {
    v19 = *(_DWORD*)(v18 + 32) != 0;
    if ((f_.v23 & 1) == 0) {
      goto LABEL_43;
    }
  }
  else {
    v19 = false;
    if ((f_.v23 & 1) == 0) {
      goto LABEL_43;
    }
  }
  if (f_.v25 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  (__int64)f_.v25);
  }
LABEL_43:
  if ((v6 & 1) != 0 && v7 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v7);
  }
  return v19;
}

#pragma GCC visibility pop
