#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void LocatorDispos_db2c40(PSEUDO_X8,
                                                     unsigned __int8* result);
__int64* GameRoutine_d8bae0(__int64**, unsigned __int8*, __int64, __int64**);
__int64 GameRoutine_1028300(__int64, __int64*);
__int64 GameRoutine_1379b20(__int64, __int64);
__int64 GameRoutine_1433140(__int64, __int64);
__int64 GameRoutine_1433640(__int64, __int64);
__int64 GameRoutine_162aea0(__int64, _QWORD*);
__int64 GameRoutine_16ae780(__int64, __int64, __int16*);
__int64 GameRoutine_1712520(__int64, int, char);
__int64 GameRoutine_175d3a0(__int64, __int64, __int64);
__int64 GameRoutine_177ba70(__int64, unsigned __int64, char);
__int64 GameRoutine_187d070(__int64, __int64);
__int64 GameRoutine_187d680(__int64, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_8b03f0(__int64, int, char);
__int64 GameRoutine_cdfa20(__int64);
__int64 GameRoutine_d85900(__int64 result);
__int64 GameRoutine_d859a0(__int64);
__int64 GameRoutine_d8b9c0(__int64, unsigned __int8*);
__int64 GameRoutine_e1e440(__int64 result, char);
__int64 GameRoutine_f6bb90(__int64, __int64*, int, char, char);
__int64 GameRoutine_f9b190(__int64, __int64);
__int64 GameRoutine_fbc160(__int64, int);
__int64 GameRoutine_fbc550(__int64);
__int64 GameRoutine_fc28c0(__int64, _QWORD*);
__int64 GameRoutine_fc2c40(__int64, _QWORD*);
__int64 GameSubquestData_1257620(__int64 result, char);
__int64 GameSubquestData_125b8e0(_QWORD*, __int64);
__int64 Manager_d554e0(__int64 result, char);
__int64 MapManager_d6ec60(__int64, __int64, int);
__int64 ObeliskDestinyMenuItem_1a070b0(__int64, int, __int64);
__int64 ProcHubSeq_d85570(__int64);
__int64 ProcInst_657b10(__int64);
__int64 ProcNextSeq_16af0a0(__int64, __int64);
__int64 SpotMgr_132ffa0(unsigned int*);
__int64 as_string_c_str(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 game_telop_176df00(__int64 result, _BYTE**, __int64);
__int64 game_telop_1778700(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1acbbd3;
extern _UNKNOWN GameData_1ad393e;
extern __int64 (*GameData_1fe1818[])();
extern __int64 (*game_hub_CharacterBehaviorStack_StackMove_vtable[])();
extern __int64* GameData_212c868;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212cd08[38];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebc0[5];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_2245ac8;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_kVariableHubFacilityForced;
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_887920(_QWORD*, __int64);
void GameRoutine_15f2260(__int64);
void Se_80e330(__int64, const char*);
void StateMoveTo_d42860(__int64*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_df5ca0();
void __attribute__((noreturn)) String_60a1d0();
void game_hub_d799f0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_script_cc0b50();
_QWORD* game_script_cc0d30();
void game_script_cc1700(__int64 a1);
void game_script_cc7620(__int64 a1);
void game_script_cc9d20();
void game_script_cca2e0(__int64 a1);
void game_script_cdc420(__int64 a1);
void game_script_df5280(_QWORD* a1, __int64* a2, double a3);
void game_script_e0ef40();
void game_script_ec7920(__int64 a1);
void game_script_ec7c80();
void game_script_ec8000(__int64 a1);
void game_script_ec8300(__int64 a1);
void game_script_ec8ca0(__int64 a1);
void game_script_ec9000(__int64 a1);
void game_script_ec9580();
void game_script_ec97e0();
void game_script_ec9a60(__int64 a1, __int64 a2);
void game_script_ec9ce0();
void game_script_ec9fc0();
void game_script_eca340(__int64 a1);
void game_script_ecb380(__int64 a1);
void game_script_ecb6c0(__int64 a1, __int64 a2);
void game_script_10db040(int a1);
void game_script_10db5c0(int a1);
void game_script_10db960(__int64 a1);
void game_script_10dbe60(__int64 a1);
void game_script_10dc380(char* a1);
void game_script_10dc600(_DWORD* a1, char* a2);
void game_script_10dc960(__int64 a1);
void game_script_10dce60(__int64 a1);

_QWORD* game_script_cc0b50()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (*v5)(void);
  _QWORD* result;
  __int64 v7;

  v0 = *(_QWORD*)(*(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408) + 40LL);
  v1 = as_g_script_manager;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  v4 = *(_QWORD*)(v3 + 24);
  v5 = *(__int64 (**)(void))(*(_QWORD*)v4 + 448LL);
  if (v0 != 0) {
    return (_QWORD*)v5();
  }
  ((void (*)(__int64, __int64))v5)(v4, 1);
  result = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (result == (_QWORD*)(v3 + 2208)) {
    v7 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
}

_QWORD* game_script_cc0d30()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (*v13)(void);
  _QWORD* result;
  __int64 v15;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = game_ProcGameSkipView_instance_;
  if ((v4 & 1) == 0) {
    if (game_ProcGameSkipView_instance_ != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    v8 = false;
    goto LABEL_12;
  }
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_11;
  }
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
LABEL_6:
  if ((unsigned int)*(unsigned __int8*)(v5 + 152) - 1 > 2) {
    goto LABEL_11;
  }
  v6 = *(_DWORD*)(v5 + 156);
  if ((v6 & 8) != 0) {
    v7 = 2;
  }
  else {
    v7 = 3;
  }
  v8 = (v7 & v6) == 0;
LABEL_12:
  v9 = *v0;
  v10 = *(
      _QWORD*)(v9 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v10 != 0) {
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 472LL))(v10);
  }
  else {
    v11 = 0;
  }
  v12 = *(_QWORD*)(v11 + 24);
  v13 = *(__int64 (**)(void))(*(_QWORD*)v12 + 448LL);
  if (v8) {
    return (_QWORD*)v13();
  }
  ((void (*)(__int64, __int64))v13)(v12, 1);
  result = *(_QWORD**)(v11 + 2240);
  *(_QWORD*)(v11 + 2240) = 0;
  if (result == (_QWORD*)(v11 + 2208)) {
    v15 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
}

void game_script_cc1700(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, __int64);
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  struct {
    char v28;
    _BYTE v29[23];
  } v28_;
  __int64 v30;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    v7 = game_HashString(v6);
    if (v7 != 0) {
      v8 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v8 != 0 & *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v10 = v8 - 1;
        if ((v8 & (v8 - 1)) != 0) {
          v11 = v7;
          if (v7 >= v8) {
            v11 = v7 % v8;
          }
        }
        else {
          v11 = v10 & v7;
        }
        v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v11);
        if (v12 != nullptr) {
          v13 = (_QWORD*)*v12;
          if (v13 != nullptr) {
            if ((v8 & v10) == 0) {
              while (1) {
                v15 = v13[1];
                if (v15 == v7) {
                  if (v13[2] == v7) {
                    goto LABEL_30;
                  }
                }
                else if ((v15 & v10) != v11) {
                  goto LABEL_41;
                }
                v13 = (_QWORD*)*v13;
                if (v13 == nullptr) {
                  goto LABEL_41;
                }
              }
            }
            do {
              v14 = v13[1];
              if (v14 == v7) {
                if (v13[2] == v7) {
                LABEL_30:
                  if (v13[3] != 0) {
                    v30 = v13[3];
                    if (game_hub_ProcHubSeqView_instance_ != 0) {
                      v16 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
                      do {
                        v17 = v16;
                        v16 = *(_QWORD*)(v16 + 40);
                      } while (v16 != 0);
                    }
                    else {
                      v17 = 0;
                    }
                    GameRoutine_f6bb90(v17, &v30, 0, 0, 0);
                    v28_.v28 = 30;
                    strcpy(v28_.v29, "JoinPersonScout");
                    GameRoutine_d85900((__int64)&v28_.v28);
                    if ((v28_.v28 & 1) != 0 && *(_QWORD*)&v28_.v29[15] != 0) {
                      v18 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v18 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                          *(__int64*)&v28_.v29[15]);
                    }
                  }
                  break;
                }
              }
              else {
                if (v14 >= v8) {
                  v14 %= v8;
                }
                if (v14 != v11) {
                  break;
                }
              }
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
          }
        }
      }
    }
  }
LABEL_41:
  v28_.v28 = 30;
  strcpy(v28_.v29, "JoinPersonScout");
  v19 = GameRoutine_d859a0((__int64)&v28_.v28);
  v20 = *v2;
  v21 = *(
      _QWORD*)(v20 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v21 != 0) {
    v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
  }
  else {
    v22 = 0;
  }
  v23 = *(_QWORD*)(v22 + 24);
  v24 = *(void (**)(__int64, __int64))(*(_QWORD*)v23 + 448LL);
  if ((v19 & 1) == 0) {
    v24(v23, 1);
    v25 = *(_QWORD**)(v22 + 2240);
    *(_QWORD*)(v22 + 2240) = 0;
    if (v25 == (_QWORD*)(v22 + 2208)) {
      v26 = 32;
    }
    else {
      if (v25 == nullptr) {
        goto LABEL_51;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    goto LABEL_51;
  }
  v24(v23, 0);
LABEL_51:
  if ((v28_.v28 & 1) != 0 && *(_QWORD*)&v28_.v29[15] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  *(__int64*)&v28_.v29[15]);
  }
}

void game_script_cc7620(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  struct {
    _BYTE v29[16];
    __int64 v30;
  } v29_;
  struct {
    _QWORD v31[2];
    char* v32;
  } v31_;
  struct {
    char v33;
    char v34[15];
    char* v35;
  } v33_;
  __int64* v36;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_43;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(const char**)(a1 + 16);
  }
  else {
    v6 = (const char*)(a1 + 1);
  }
  v7 = GameRoutine_1a09c70(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v31_.v31[1] = v8;
    v31_.v32 = v9;
    v31_.v31[0] = v10 | 1;
    goto LABEL_13;
  }
  LOBYTE(v31_.v31[0]) = 2 * v7;
  v9 = (char*)v31_.v31 + 1;
  if (v7 != 0) {
  LABEL_13:
    GameRoutine_1a0b940((__int64)v9, (__int64)v6, v8);
  }
  v9[v8] = 0;
  LocatorDispos_db2c40((void*)((__int64)&v33_.v33), (unsigned __int8*)v31_.v31);
  if ((v31_.v31[0] & 1) != 0 && v31_.v32 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v31_.v32);
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v12 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v13 = v12;
      v12 = *(_QWORD*)(v12 + 40);
    } while (v12 != 0);
  }
  else {
    v13 = 0;
  }
  if ((v33_.v33 & 1) != 0) {
    v14 = v33_.v35;
  }
  else {
    v14 = v33_.v34;
  }
  if (GameRoutine_187d680(v13, (__int64)v14) != 0) {
    v15 = game_hub_ProcHubSeqView_instance_;
    v29_.v29[0] = 26;
    strcpy(&v29_.v29[1], "SideStoryInfo");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v29_.v29);
      v16 = *(_QWORD*)(*(_QWORD*)(v15 + 416) + 40LL);
      if (v16 != 0) {
        v17 = 0;
        do {
          v16 = *(_QWORD*)(v16 + 40);
          ++v17;
        } while (v16 != 0);
        v36 = (__int64*)v29_.v29;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v15 + 424), v29_.v29,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      &v36) +
          14) = v17;
      }
    }
    if ((v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v29_.v30);
    }
  }
  if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v33_.v35);
  }
LABEL_43:
  v33_.v33 = 26;
  strcpy(v33_.v34, "SideStoryInfo");
  v20 = GameRoutine_d859a0((__int64)&v33_.v33);
  v21 = *v2;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  v24 = *(_QWORD*)(v23 + 24);
  v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
  if ((v20 & 1) == 0) {
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_53;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_53;
  }
  v25(v24, 0);
LABEL_53:
  if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v33_.v35);
  }
}

void game_script_cc9d20()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (*v20)(__int64, __int64);
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24[3];
  __int64* v25;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  (*(void (**)(__int64, __int64))(**(_QWORD**)(v3 + 24) + 448LL))(
      *(_QWORD*)(v3 + 24), 1);
  v4 = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (v4 == (_QWORD*)(v3 + 2208)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_9:
  v6 = *v0;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v8 + 24) + 456LL))(
           *(_QWORD*)(v8 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v10 = v9;
        v9 = *(_QWORD*)(v9 + 40);
      } while (v9 != 0);
      if (ProcHubSeq_d85570(v10) == 0) {
        return;
      }
    }
    else if (ProcHubSeq_d85570(0) == 0) {
      return;
    }
    v11 = game_hub_ProcHubSeqView_instance_;
    strcpy((char*)v24, " PushWorldPrepare");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                         (unsigned __int8*)v24);
      v12 = *(_QWORD*)(*(_QWORD*)(v11 + 416) + 40LL);
      if (v12 != 0) {
        v13 = 0;
        do {
          v12 = *(_QWORD*)(v12 + 40);
          ++v13;
        } while (v12 != 0);
        v25 = v24;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v11 + 424), (unsigned __int8*)v24,
              (__int64)std___1_piecewise_construct_ptr, &v25) +
          14) = v13;
      }
    }
    if ((v24[0] & 1) != 0 && v24[2] != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v24[2]);
    }
  }
  strcpy((char*)v24, " PushWorldPrepare");
  v15 = GameRoutine_d859a0((__int64)v24);
  v16 = *v0;
  v17 = *(
      _QWORD*)(v16 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v17 != 0) {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
  }
  else {
    v18 = 0;
  }
  v19 = *(_QWORD*)(v18 + 24);
  v20 = *(void (**)(__int64, __int64))(*(_QWORD*)v19 + 448LL);
  if ((v15 & 1) == 0) {
    v20(v19, 1);
    v21 = *(_QWORD**)(v18 + 2240);
    *(_QWORD*)(v18 + 2240) = 0;
    if (v21 == (_QWORD*)(v18 + 2208)) {
      v22 = 32;
    }
    else {
      if (v21 == nullptr) {
        goto LABEL_36;
      }
      v22 = 40;
    }
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
    goto LABEL_36;
  }
  v20(v19, 0);
LABEL_36:
  if ((v24[0] & 1) != 0 && v24[2] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v24[2]);
  }
}

void game_script_cca2e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void (*v26)(__int64, __int64);
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30[3];
  __int64* v31;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(__int64, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  v6 = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (v6 == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_9:
  v8 = *v2;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) == 0) {
    goto LABEL_33;
  }
  v11 = *(_QWORD**)GameData_212c7b0[0];
  if ((*(_BYTE*)a1 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 16);
  }
  else {
    v12 = a1 + 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v13 = GameSubquestData_125b8e0(v11, v12);
    if (v13 == 0) {
      goto LABEL_33;
    }
  }
  else {
    v13 = GameSubquestData_125b8e0(v11, v12);
    if (v13 == 0) {
      goto LABEL_33;
    }
  }
  v14 = v13;
  GameSubquestData_1257620(v13, 0);
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v15 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v16 = v15;
      v15 = *(_QWORD*)(v15 + 40);
    } while (v15 != 0);
  }
  else {
    v16 = 0;
  }
  if (GameRoutine_187d070(v16, v14) != 0) {
    v17 = game_hub_ProcHubSeqView_instance_;
    strcpy((char*)v30, ",RunTalkSelectQuestMenu");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                         (unsigned __int8*)v30);
      v18 = *(_QWORD*)(*(_QWORD*)(v17 + 416) + 40LL);
      if (v18 != 0) {
        v19 = 0;
        do {
          v18 = *(_QWORD*)(v18 + 40);
          ++v19;
        } while (v18 != 0);
        v31 = v30;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v17 + 424), (unsigned __int8*)v30,
              (__int64)std___1_piecewise_construct_ptr, &v31) +
          14) = v19;
      }
    }
    if ((v30[0] & 1) != 0 && v30[2] != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v30[2]);
    }
  }
LABEL_33:
  strcpy((char*)v30, ",RunTalkSelectQuestMenu");
  v21 = GameRoutine_d859a0((__int64)v30);
  v22 = *v2;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v23 != 0) {
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  }
  else {
    v24 = 0;
  }
  v25 = *(_QWORD*)(v24 + 24);
  v26 = *(void (**)(__int64, __int64))(*(_QWORD*)v25 + 448LL);
  if ((v21 & 1) == 0) {
    v26(v25, 1);
    v27 = *(_QWORD**)(v24 + 2240);
    *(_QWORD*)(v24 + 2240) = 0;
    if (v27 == (_QWORD*)(v24 + 2208)) {
      v28 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_43;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    goto LABEL_43;
  }
  v26(v25, 0);
LABEL_43:
  if ((v30[0] & 1) != 0 && v30[2] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  v30[2]);
  }
}

void game_script_cdc420(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void (*v26)(__int64, __int64);
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30[3];
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;
  __int64* v33[3];

  v3 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v3 == 0x4000) {
    return;
  }
  v33[1] = v1;
  v33[2] = v2;
  v4 = util_g_handle_slots_ptr[0];
  v5 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                 16 * v3);
  if (v5[1] == 0 || *v5 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  v7 = as_g_script_manager_ptr;
  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) != 0) {
    v11 = *(__int64**)(*GameData_212d458[0] + 24);
    v12 = *(__int64**)(*GameData_212d458[0] + 32);
    if (v11 == v12) {
    LABEL_8:
      v13 = 0;
      v14 = 0;
    }
    else {
      while (1) {
        v13 = *v11;
        if (*(_QWORD*)(*v11 + 264) ==
            *(_QWORD*)(*(_QWORD*)(v4[*(unsigned int*)(a1 + 20)] +
                                  16LL * *(unsigned int*)(a1 + 16) + 8) +
                       264LL)) {
          break;
        }
        v11 += 2;
        if (v11 == v12) {
          goto LABEL_8;
        }
      }
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v15 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v16 = v15;
        v15 = *(_QWORD*)(v15 + 40);
      } while (v15 != 0);
      v31_.v31 = v13;
      v31_.v32 = v14;
      if (v14 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v16 = 0;
      v31_.v31 = v13;
      v31_.v32 = v14;
      if (v14 == 0) {
        goto LABEL_16;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  LABEL_16:
    GameRoutine_1028300(v16, &v31_.v31);
    if (v31_.v32 != 0) {
      std___1___shared_weak_count___release_weak(v31_.v32);
    }
    v17 = game_hub_ProcHubSeqView_instance_;
    strcpy((char*)v30, "\"BeginDngTalkSetup");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                         (unsigned __int8*)v30);
      v18 = *(_QWORD*)(*(_QWORD*)(v17 + 416) + 40LL);
      if (v18 != 0) {
        v19 = 0;
        do {
          v18 = *(_QWORD*)(v18 + 40);
          ++v19;
        } while (v18 != 0);
        v33[0] = v30;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v17 + 424), (unsigned __int8*)v30,
              (__int64)std___1_piecewise_construct_ptr, v33) +
          14) = v19;
      }
    }
    if ((v30[0] & 1) != 0 && v30[2] != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v30[2]);
    }
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
  }
  strcpy((char*)v30, "\"BeginDngTalkSetup");
  v21 = GameRoutine_d859a0((__int64)v30);
  v22 = *v7;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v23 != 0) {
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  }
  else {
    v24 = 0;
  }
  v25 = *(_QWORD*)(v24 + 24);
  v26 = *(void (**)(__int64, __int64))(*(_QWORD*)v25 + 448LL);
  if ((v21 & 1) == 0) {
    v26(v25, 1);
    v27 = *(_QWORD**)(v24 + 2240);
    *(_QWORD*)(v24 + 2240) = 0;
    if (v27 == (_QWORD*)(v24 + 2208)) {
      v28 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_42;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    goto LABEL_42;
  }
  v26(v25, 0);
LABEL_42:
  if ((v30[0] & 1) != 0 && v30[2] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  v30[2]);
  }
}

void game_script_df5280(_QWORD* a1, __int64* a2, double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int8x16_t v12;
  int8x16_t v13;
  unsigned int v14;
  int8x16_t v15;
  __int64 v16;
  int8x16_t v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  int8x16_t v35;
  int8x16_t v36;
  char v37;

  v3 = a1[3];
  v4 = a1[4];
  v5 = LODWORD(a3);
  if (v4 == v3) {
    v16 = a1[2];
    LANES128(v17).n128_u64[0] = *(_QWORD*)(v16 + 392);
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LODWORD(z_) = *(_DWORD*)(v16 + 400);
      a3 = z_;
    }
    LANES128(v17).n128_f64[1] = a3;
    v35 = v17;
  }
  else {
    v8 = *(_QWORD*)(v4 - 16);
    if (*(_DWORD*)(v8 + 8) == 0 && *(float*)(v8 + 96) == *(float*)&a3) {
      StateMoveTo_d42860((__int64*)(v8 + 48), a2);
      return;
    }
    v9 = a1[2];
    v10 = 0;
    v11 = 0;
    LANES128(v12).n128_u64[0] = *(_QWORD*)(v9 + 392);
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LODWORD(z_) = *(_DWORD*)(v9 + 400);
      a3 = z_;
    }
    LANES128(v12).n128_f64[1] = a3;
    v35 = v12;
    do {
      (*(void (**)(__int64))(**(_QWORD**)(v3 + v10) + 48LL))(
          *(_QWORD*)(v3 + v10));
      v13 = v36;
      ++v11;
      v10 += 16;
      LANES128(v13).n128_u32[3] = 0;
      if (v37 != 0) {
        v14 = -1;
      }
      else {
        v14 = 0;
      }
      v15 = vdupq_n_s32(v14);
      v3 = a1[3];
      v35 = vbslq_s8(v15, v13, v35);
    } while (v11 < (signed __int64)(a1[4] - v3) >> 4);
  }
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       144, 16, 0);
  *(_QWORD*)(v19 + 16) = 0;
  *(_DWORD*)(v19 + 40) = 0;
  *(_QWORD*)(v19 + 48) = a1;
  *(_QWORD*)(v19 + 88) = 0;
  *(_QWORD*)(v19 + 96) = 0;
  *(_QWORD*)(v19 + 104) = 0;
  *(_QWORD*)(v19 + 112) = 0;
  *(_QWORD*)v19 = GameData_1fe1818;
  *(_QWORD*)(v19 + 120) = 0;
  *(_QWORD*)(v19 + 8) = 0;
  *(_DWORD*)(v19 + 128) = v5;
  *(_QWORD*)(v19 + 32) = game_hub_CharacterBehaviorStack_StackMove_vtable;
  v20 = v19 + 32;
  *(int8x16_t*)(v19 + 64) = v35;
  *(_QWORD*)(v19 + 80) = 0;
  StateMoveTo_d42860((__int64*)(v19 + 80), a2);
  v21 = (__int64*)a1[4];
  v22 = a1[5];
  if ((unsigned __int64)v21 >= v22) {
    v24 = a1[3];
    v25 = (unsigned __int64)v21 - v24;
    v26 = ((__int64)v21 - v24) >> 4;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 60 != 0) {
      GameRoutine_df5ca0();
    }
    v28 = v22 - v24;
    if (v28 >> 3 > v27) {
      v27 = v28 >> 3;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF0LL) {
      v29 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v30 = fw_memory_HeapManager_Allocate(*v18, 16 * v29, 16, 0);
    v31 = (__int64*)(v30 + v25);
    v32 = v30 + 16 * v29;
    *v31 = v20;
    v31[1] = v19;
    v33 = v30 + v25 - 16 * v26;
    v23 = v30 + v25 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1a0b950(v33, v24, v25);
    a1[3] = v33;
    a1[4] = v23;
    a1[5] = v32;
    if (v24 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v18 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*v18 + v34, v24);
    }
  }
  else {
    *v21 = v20;
    v21[1] = v19;
    v23 = (__int64)(v21 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[4] = v23;
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
}

void game_script_e0ef40()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (*v13)(__int64, __int64);
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  struct {
    unsigned __int8 v17[16];
    __int64 v18;
  } v17_;
  unsigned __int8* v19;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) != 0) {
    v17_.v17[0] = 22;
    strcpy((char*)&v17_.v17[1], "DebugDialog");
    v4 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v17_.v17);
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 416) + 40LL);
      if (v5 != 0) {
        v6 = 0;
        do {
          v5 = *(_QWORD*)(v5 + 40);
          ++v6;
        } while (v5 != 0);
        v19 = v17_.v17;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v4 + 424), v17_.v17,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      (__int64**)&v19) +
          14) = v6;
      }
    }
    if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v17_.v18);
    }
  }
  v17_.v17[0] = 22;
  strcpy((char*)&v17_.v17[1], "DebugDialog");
  v8 = GameRoutine_d859a0((__int64)v17_.v17);
  v9 = *v0;
  v10 = *(
      _QWORD*)(v9 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v10 != 0) {
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 472LL))(v10);
  }
  else {
    v11 = 0;
  }
  v12 = *(_QWORD*)(v11 + 24);
  v13 = *(void (**)(__int64, __int64))(*(_QWORD*)v12 + 448LL);
  if ((v8 & 1) == 0) {
    v13(v12, 1);
    v14 = *(_QWORD**)(v11 + 2240);
    *(_QWORD*)(v11 + 2240) = 0;
    if (v14 == (_QWORD*)(v11 + 2208)) {
      v15 = 32;
    }
    else {
      if (v14 == nullptr) {
        goto LABEL_22;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
    goto LABEL_22;
  }
  v13(v12, 0);
LABEL_22:
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v17_.v18);
  }
}

void game_script_ec7920(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, __int64);
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28[3];
  __int64* v29;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_35;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(const char**)(a1 + 16);
  }
  else {
    v6 = (const char*)(a1 + 1);
  }
  v7 = GameRoutine_1a09c70(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v28[1] = v8;
    v28[2] = (__int64)v9;
    v28[0] = v10 | 1;
  }
  else {
    LOBYTE(v28[0]) = 2 * v7;
    v9 = (char*)v28 + 1;
    if (v7 == 0) {
      goto LABEL_14;
    }
  }
  GameRoutine_1a0b940((__int64)v9, (__int64)v6, v8);
LABEL_14:
  v9[v8] = 0;
  v11 = GameRoutine_fbc550((__int64)v28);
  if ((v28[0] & 1) != 0 && v28[2] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v28[2]);
  }
  if (DWORDn(v11, sizeof(v11) / 4 - 1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v13 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v14 = v13;
        v13 = *(_QWORD*)(v13 + 40);
      } while (v13 != 0);
    }
    else {
      v14 = 0;
    }
    GameRoutine_fbc160(v14, v11);
    v15 = game_hub_ProcHubSeqView_instance_;
    strcpy((char*)v28, "$TalkTempleAudience");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                         (unsigned __int8*)v28);
      v16 = *(_QWORD*)(*(_QWORD*)(v15 + 416) + 40LL);
      if (v16 != 0) {
        v17 = 0;
        do {
          v16 = *(_QWORD*)(v16 + 40);
          ++v17;
        } while (v16 != 0);
        v29 = v28;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v15 + 424), (unsigned __int8*)v28,
              (__int64)std___1_piecewise_construct_ptr, &v29) +
          14) = v17;
      }
    }
    if ((v28[0] & 1) != 0 && v28[2] != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v28[2]);
    }
  LABEL_35:
    strcpy((char*)v28, "$TalkTempleAudience");
    v19 = GameRoutine_d859a0((__int64)v28);
    v20 = *v2;
    v21 = *(_QWORD*)(v20 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v21 != 0) {
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 472LL))(v21);
    }
    else {
      v22 = 0;
    }
    v23 = *(_QWORD*)(v22 + 24);
    v24 = *(void (**)(__int64, __int64))(*(_QWORD*)v23 + 448LL);
    if ((v19 & 1) != 0) {
      v24(v23, 0);
    LABEL_45:
      if ((v28[0] & 1) != 0 && v28[2] != 0) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v28[2]);
      }
      return;
    }
    v24(v23, 1);
    v25 = *(_QWORD**)(v22 + 2240);
    *(_QWORD*)(v22 + 2240) = 0;
    if (v25 == (_QWORD*)(v22 + 2208)) {
      v26 = 32;
    }
    else {
      if (v25 == nullptr) {
        goto LABEL_45;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    goto LABEL_45;
  }
}

void game_script_ec7c80()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29[3];
  __int64* v30;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) == 0) {
    goto LABEL_44;
  }
  v4 = game_HashString((__int64)&GameData_1ad393e);
  if (v4 == 0) {
    goto LABEL_26;
  }
  v5 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v5 == 0 | *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_26;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v8);
  if (v9 == nullptr || (v10 = (_QWORD*)*v9) == nullptr) {
  LABEL_26:
    v12 = 0;
    goto LABEL_27;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_60;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_26;
      }
      v10 = (_QWORD*)*v10;
      v12 = 0;
      if (v10 == nullptr) {
        goto LABEL_27;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_26;
    }
  LABEL_16:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_26;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_16;
  }
LABEL_60:
  v12 = v10[3];
LABEL_27:
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v14 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v15 = v14;
      v14 = *(_QWORD*)(v14 + 40);
    } while (v14 != 0);
  }
  else {
    v15 = 0;
  }
  game_VariableManager_SetFlag((__int64)&game_kVariableHubFacilityForced, 1);
  GameRoutine_1433140(v15, v12);
  if (GameData_2245ac8 == 0) {
    game_VariableManager_SetFlag((__int64)&game_kVariableHubFacilityForced, 0);
  }
  v16 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v29, "(RunLessonInstruction");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v29);
    v17 = *(_QWORD*)(*(_QWORD*)(v16 + 416) + 40LL);
    if (v17 != 0) {
      v18 = 0;
      do {
        v17 = *(_QWORD*)(v17 + 40);
        ++v18;
      } while (v17 != 0);
      v30 = v29;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v16 + 424), (unsigned __int8*)v29,
            (__int64)std___1_piecewise_construct_ptr, &v30) +
        14) = v18;
    }
  }
  if ((v29[0] & 1) != 0 && v29[2] != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  v29[2]);
  }
LABEL_44:
  strcpy((char*)v29, "(RunLessonInstruction");
  v20 = GameRoutine_d859a0((__int64)v29);
  v21 = *v0;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  v24 = *(_QWORD*)(v23 + 24);
  v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
  if ((v20 & 1) == 0) {
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_54;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_54;
  }
  v25(v24, 0);
LABEL_54:
  if ((v29[0] & 1) != 0 && v29[2] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v29[2]);
  }
}

void game_script_ec8000(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29[3];

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_41;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 16);
  }
  else {
    v6 = a1 + 1;
  }
  v7 = game_HashString(v6);
  if (v7 == 0) {
    return;
  }
  v8 = *(_QWORD*)(*GameData_212cd08[0] + 96);
  if (v8 == 0 | *(_QWORD*)(*GameData_212cd08[0] + 112) == 0) {
    return;
  }
  v10 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v11 = v7;
    if (v7 >= v8) {
      v11 = v7 % v8;
    }
  }
  else {
    v11 = v10 & v7;
  }
  v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212cd08[0] + 88) + 8 * v11);
  if (v12 == nullptr) {
    return;
  }
  v13 = (_QWORD*)*v12;
  if (v13 == nullptr) {
    return;
  }
  if ((v8 & v10) == 0) {
    while (1) {
      v15 = v13[1];
      if (v15 == v7) {
        if (v13[2] == v7) {
          goto LABEL_30;
        }
      }
      else if ((v15 & v10) != v11) {
        return;
      }
      v13 = (_QWORD*)*v13;
      if (v13 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v14 = v13[1];
    if (v14 == v7) {
      break;
    }
    if (v14 >= v8) {
      v14 %= v8;
    }
    if (v14 != v11) {
      return;
    }
  LABEL_19:
    v13 = (_QWORD*)*v13;
    if (v13 == nullptr) {
      return;
    }
  }
  if (v13[2] != v7) {
    goto LABEL_19;
  }
LABEL_30:
  v16 = v13[3];
  if (v16 != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v17 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v18 = v17;
        v17 = *(_QWORD*)(v17 + 40);
      } while (v17 != 0);
    }
    else {
      v18 = 0;
    }
    GameRoutine_1433640(v18, v16);
    strcpy((char*)v29, " RunLessonSuccess");
    GameRoutine_d85900((__int64)v29);
    if ((v29[0] & 1) != 0 && v29[2] != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v29[2]);
    }
  LABEL_41:
    strcpy((char*)v29, " RunLessonSuccess");
    v20 = GameRoutine_d859a0((__int64)v29);
    v21 = *v2;
    v22 = *(_QWORD*)(v21 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v22 != 0) {
      v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
    }
    else {
      v23 = 0;
    }
    v24 = *(_QWORD*)(v23 + 24);
    v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
    if ((v20 & 1) != 0) {
      v25(v24, 0);
      goto LABEL_51;
    }
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    LABEL_50:
      (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    }
    else if (v26 != nullptr) {
      v27 = 40;
      goto LABEL_50;
    }
  LABEL_51:
    if ((v29[0] & 1) != 0 && v29[2] != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v29[2]);
    }
  }
}

void game_script_ec8300(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29[3];

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_41;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 16);
  }
  else {
    v6 = a1 + 1;
  }
  v7 = game_HashString(v6);
  if (v7 == 0) {
    return;
  }
  v8 = *(_QWORD*)(*GameData_212cc60[0] + 96);
  if (v8 == 0 | *(_QWORD*)(*GameData_212cc60[0] + 112) == 0) {
    return;
  }
  v10 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v11 = v7;
    if (v7 >= v8) {
      v11 = v7 % v8;
    }
  }
  else {
    v11 = v10 & v7;
  }
  v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212cc60[0] + 88) + 8 * v11);
  if (v12 == nullptr) {
    return;
  }
  v13 = (_QWORD*)*v12;
  if (v13 == nullptr) {
    return;
  }
  if ((v8 & v10) == 0) {
    while (1) {
      v15 = v13[1];
      if (v15 == v7) {
        if (v13[2] == v7) {
          goto LABEL_30;
        }
      }
      else if ((v15 & v10) != v11) {
        return;
      }
      v13 = (_QWORD*)*v13;
      if (v13 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v14 = v13[1];
    if (v14 == v7) {
      break;
    }
    if (v14 >= v8) {
      v14 %= v8;
    }
    if (v14 != v11) {
      return;
    }
  LABEL_19:
    v13 = (_QWORD*)*v13;
    if (v13 == nullptr) {
      return;
    }
  }
  if (v13[2] != v7) {
    goto LABEL_19;
  }
LABEL_30:
  v16 = v13[3];
  if (v16 != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v17 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v18 = v17;
        v17 = *(_QWORD*)(v17 + 40);
      } while (v17 != 0);
    }
    else {
      v18 = 0;
    }
    GameRoutine_f9b190(v18, v16);
    strcpy((char*)v29, "(RunReturnTempleTrial");
    GameRoutine_d85900((__int64)v29);
    if ((v29[0] & 1) != 0 && v29[2] != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v29[2]);
    }
  LABEL_41:
    strcpy((char*)v29, "(RunReturnTempleTrial");
    v20 = GameRoutine_d859a0((__int64)v29);
    v21 = *v2;
    v22 = *(_QWORD*)(v21 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v22 != 0) {
      v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
    }
    else {
      v23 = 0;
    }
    v24 = *(_QWORD*)(v23 + 24);
    v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
    if ((v20 & 1) != 0) {
      v25(v24, 0);
      goto LABEL_51;
    }
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    LABEL_50:
      (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    }
    else if (v26 != nullptr) {
      v27 = 40;
      goto LABEL_50;
    }
  LABEL_51:
    if ((v29[0] & 1) != 0 && v29[2] != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v29[2]);
    }
  }
}

void game_script_ec8ca0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  void (*v23)(__int64, __int64);
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[3];
  __int64* v28;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_34;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
  }
  else {
    v7 = 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(const char**)(a1 + 16);
  }
  else {
    v8 = (const char*)(a1 + 1);
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v27[1] = v10;
    v27[2] = (__int64)v11;
    v27[0] = v12 | 1;
    goto LABEL_18;
  }
  LOBYTE(v27[0]) = 2 * v9;
  v11 = (char*)v27 + 1;
  if (v9 != 0) {
  LABEL_18:
    GameRoutine_1a0b940((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  GameRoutine_fc28c0(v7, v27);
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v27[2]);
  }
  v14 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v27, "(RunDitChallengeBegin");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v27);
    v15 = *(_QWORD*)(*(_QWORD*)(v14 + 416) + 40LL);
    if (v15 != 0) {
      v16 = 0;
      do {
        v15 = *(_QWORD*)(v15 + 40);
        ++v16;
      } while (v15 != 0);
      v28 = v27;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v14 + 424), (unsigned __int8*)v27,
            (__int64)std___1_piecewise_construct_ptr, &v28) +
        14) = v16;
    }
  }
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v27[2]);
  }
LABEL_34:
  strcpy((char*)v27, "(RunDitChallengeBegin");
  v18 = GameRoutine_d859a0((__int64)v27);
  v19 = *v2;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v20 != 0) {
    v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  }
  else {
    v21 = 0;
  }
  v22 = *(_QWORD*)(v21 + 24);
  v23 = *(void (**)(__int64, __int64))(*(_QWORD*)v22 + 448LL);
  if ((v18 & 1) == 0) {
    v23(v22, 1);
    v24 = *(_QWORD**)(v21 + 2240);
    *(_QWORD*)(v21 + 2240) = 0;
    if (v24 == (_QWORD*)(v21 + 2208)) {
      v25 = 32;
    }
    else {
      if (v24 == nullptr) {
        goto LABEL_44;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    goto LABEL_44;
  }
  v23(v22, 0);
LABEL_44:
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v27[2]);
  }
}

void game_script_ec9000(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  void (*v23)(__int64, __int64);
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[3];
  __int64* v28;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_34;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
  }
  else {
    v7 = 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(const char**)(a1 + 16);
  }
  else {
    v8 = (const char*)(a1 + 1);
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v27[1] = v10;
    v27[2] = (__int64)v11;
    v27[0] = v12 | 1;
    goto LABEL_18;
  }
  LOBYTE(v27[0]) = 2 * v9;
  v11 = (char*)v27 + 1;
  if (v9 != 0) {
  LABEL_18:
    GameRoutine_1a0b940((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  GameRoutine_fc2c40(v7, v27);
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v27[2]);
  }
  v14 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v27, "(RunDitChallengeAfter");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v27);
    v15 = *(_QWORD*)(*(_QWORD*)(v14 + 416) + 40LL);
    if (v15 != 0) {
      v16 = 0;
      do {
        v15 = *(_QWORD*)(v15 + 40);
        ++v16;
      } while (v15 != 0);
      v28 = v27;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v14 + 424), (unsigned __int8*)v27,
            (__int64)std___1_piecewise_construct_ptr, &v28) +
        14) = v16;
    }
  }
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v27[2]);
  }
LABEL_34:
  strcpy((char*)v27, "(RunDitChallengeAfter");
  v18 = GameRoutine_d859a0((__int64)v27);
  v19 = *v2;
  v20 = *(
      _QWORD*)(v19 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v20 != 0) {
    v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 472LL))(v20);
  }
  else {
    v21 = 0;
  }
  v22 = *(_QWORD*)(v21 + 24);
  v23 = *(void (**)(__int64, __int64))(*(_QWORD*)v22 + 448LL);
  if ((v18 & 1) == 0) {
    v23(v22, 1);
    v24 = *(_QWORD**)(v21 + 2240);
    *(_QWORD*)(v21 + 2240) = 0;
    if (v24 == (_QWORD*)(v21 + 2208)) {
      v25 = 32;
    }
    else {
      if (v24 == nullptr) {
        goto LABEL_44;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    goto LABEL_44;
  }
  v23(v22, 0);
LABEL_44:
  if ((v27[0] & 1) != 0 && v27[2] != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v27[2]);
  }
}

void game_script_ec9580()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void (*v15)(__int64, __int64);
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  struct {
    _BYTE v19[16];
    __int64 v20;
  } v19_;
  __int64* v21;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v4 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v5 = v4;
        v4 = *(_QWORD*)(v4 + 40);
      } while (v4 != 0);
    }
    else {
      v5 = 0;
    }
    MapManager_d6ec60(v5, *(_QWORD*)GameData_212dbc0[0],
                      *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 88LL));
    v6 = game_hub_ProcHubSeqView_instance_;
    v19_.v19[0] = 24;
    strcpy(&v19_.v19[1], "RunMapReload");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v19_.v19);
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 416) + 40LL);
      if (v7 != 0) {
        v8 = 0;
        do {
          v7 = *(_QWORD*)(v7 + 40);
          ++v8;
        } while (v7 != 0);
        v21 = (__int64*)v19_.v19;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v6 + 424), v19_.v19,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      &v21) +
          14) = v8;
      }
    }
    if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v19_.v20);
    }
  }
  v19_.v19[0] = 24;
  strcpy(&v19_.v19[1], "RunMapReload");
  v10 = GameRoutine_d859a0((__int64)v19_.v19);
  v11 = *v0;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v12 != 0) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  }
  else {
    v13 = 0;
  }
  v14 = *(_QWORD*)(v13 + 24);
  v15 = *(void (**)(__int64, __int64))(*(_QWORD*)v14 + 448LL);
  if ((v10 & 1) == 0) {
    v15(v14, 1);
    v16 = *(_QWORD**)(v13 + 2240);
    *(_QWORD*)(v13 + 2240) = 0;
    if (v16 == (_QWORD*)(v13 + 2208)) {
      v17 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_27;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
    goto LABEL_27;
  }
  v15(v14, 0);
LABEL_27:
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v19_.v20);
  }
}

void game_script_ec97e0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (*v17)(__int64, __int64);
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21[3];
  __int64* v22;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) == 0) {
    goto LABEL_19;
  }
  v21[1] = (__int64)&GameData_1acbbd3;
  v21[0] = game_HashString((__int64)&GameData_1acbbd3);
  v4 = SpotMgr_132ffa0((unsigned int*)v21);
  if (v4 == 0) {
    goto LABEL_19;
  }
  v5 = v4;
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
    if (GameRoutine_1379b20(v7, v5) == 0) {
      goto LABEL_19;
    }
  }
  else if (GameRoutine_1379b20(0, v4) == 0) {
    goto LABEL_19;
  }
  v8 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v21, "\"ShowGmapSpotCrown");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v21);
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 416) + 40LL);
    if (v9 != 0) {
      v10 = 0;
      do {
        v9 = *(_QWORD*)(v9 + 40);
        ++v10;
      } while (v9 != 0);
      v22 = v21;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v8 + 424), (unsigned __int8*)v21,
            (__int64)std___1_piecewise_construct_ptr, &v22) +
        14) = v10;
    }
  }
  if ((v21[0] & 1) != 0 && v21[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v21[2]);
  }
LABEL_19:
  strcpy((char*)v21, "\"ShowGmapSpotCrown");
  v12 = GameRoutine_d859a0((__int64)v21);
  v13 = *v0;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v14 != 0) {
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  }
  else {
    v15 = 0;
  }
  v16 = *(_QWORD*)(v15 + 24);
  v17 = *(void (**)(__int64, __int64))(*(_QWORD*)v16 + 448LL);
  if ((v12 & 1) == 0) {
    v17(v16, 1);
    v18 = *(_QWORD**)(v15 + 2240);
    *(_QWORD*)(v15 + 2240) = 0;
    if (v18 == (_QWORD*)(v15 + 2208)) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_29;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
    goto LABEL_29;
  }
  v17(v16, 0);
LABEL_29:
  if ((v21[0] & 1) != 0 && v21[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v21[2]);
  }
}

void game_script_ec9a60(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  void (*v21)(__int64, __int64);
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  struct {
    _BYTE v25[16];
    __int64 v26;
  } v25_;
  __int64* v27;

  v4 = as_g_script_manager_ptr;
  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v7 + 24) + 456LL))(
           *(_QWORD*)(v7 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v9 = v8;
        v8 = *(_QWORD*)(v8 + 40);
      } while (v8 != 0);
    }
    else {
      v9 = 0;
    }
    v10 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    v11 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
    if ((GameRoutine_175d3a0(v9, v10, v11) & 1) != 0) {
      v12 = game_hub_ProcHubSeqView_instance_;
      v25_.v25[0] = 28;
      strcpy(&v25_.v25[1], "CrownJIDWindow");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v25_.v25);
        v13 = *(_QWORD*)(*(_QWORD*)(v12 + 416) + 40LL);
        if (v13 != 0) {
          v14 = 0;
          do {
            v13 = *(_QWORD*)(v13 + 40);
            ++v14;
          } while (v13 != 0);
          v27 = (__int64*)v25_.v25;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v12 + 424), v25_.v25,
                (__int64)std___1_piecewise_construct_ptr, &v27) +
            14) = v14;
        }
      }
      if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v25_.v26);
      }
    }
  }
  v25_.v25[0] = 28;
  strcpy(&v25_.v25[1], "CrownJIDWindow");
  v16 = GameRoutine_d859a0((__int64)v25_.v25);
  v17 = *v4;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  v20 = *(_QWORD*)(v19 + 24);
  v21 = *(void (**)(__int64, __int64))(*(_QWORD*)v20 + 448LL);
  if ((v16 & 1) == 0) {
    v21(v20, 1);
    v22 = *(_QWORD**)(v19 + 2240);
    *(_QWORD*)(v19 + 2240) = 0;
    if (v22 == (_QWORD*)(v19 + 2208)) {
      v23 = 32;
    }
    else {
      if (v22 == nullptr) {
        goto LABEL_34;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*v22 + v23))((__int64)v22);
    goto LABEL_34;
  }
  v21(v20, 0);
LABEL_34:
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v25_.v26);
  }
}

void game_script_ec9ce0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (*v17)(__int64, __int64);
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22[3];
  __int64* v23;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = GameData_212dbb8[0];
  if ((v4 & 1) == 0) {
    goto LABEL_18;
  }
  Manager_d554e0(*(_QWORD*)GameData_212dbb8[0], 1);
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
    if (GameRoutine_cdfa20(v7) == 0) {
      goto LABEL_18;
    }
  }
  else if (GameRoutine_cdfa20(0) == 0) {
    goto LABEL_18;
  }
  v8 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v22, "(ShowLegionDeployMenu");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v22);
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 416) + 40LL);
    if (v9 != 0) {
      v10 = 0;
      do {
        v9 = *(_QWORD*)(v9 + 40);
        ++v10;
      } while (v9 != 0);
      v23 = v22;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v8 + 424), (unsigned __int8*)v22,
            (__int64)std___1_piecewise_construct_ptr, &v23) +
        14) = v10;
    }
  }
  if ((v22[0] & 1) != 0 && v22[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v22[2]);
  }
LABEL_18:
  strcpy((char*)v22, "(ShowLegionDeployMenu");
  v12 = GameRoutine_d859a0((__int64)v22);
  v13 = *v0;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v14 != 0) {
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  }
  else {
    v15 = 0;
  }
  v16 = *(_QWORD*)(v15 + 24);
  v17 = *(void (**)(__int64, __int64))(*(_QWORD*)v16 + 448LL);
  if ((v12 & 1) == 0) {
    v17(v16, 1);
    v18 = *(_QWORD**)(v15 + 2240);
    *(_QWORD*)(v15 + 2240) = 0;
    if (v18 == (_QWORD*)(v15 + 2208)) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_28;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
    goto LABEL_28;
  }
  v17(v16, 0);
LABEL_28:
  if ((v22[0] & 1) != 0 && v22[2] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v22[2]);
  }
  if ((v12 & 1) == 0) {
    v21 = *(_QWORD*)v5;
    if (*(_BYTE*)(*(_QWORD*)v5 + 770LL) == 1) {
      if (game_hub_ProcHubSeqView_instance_ != 0 &&
          (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
        ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      }
      *(_BYTE*)(v21 + 770) = 0;
    }
    GameRoutine_e1e440(*(_QWORD*)GameData_212ebf8[0], 1);
  }
}

void game_script_ec9fc0()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  float v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void (*v26)(__int64, __int64);
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v31;
    __int64 v32;
    char* v33;
  } v31_;
  __int64* v34;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(__int64))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = (__int64*)GameData_212ebf8[0];
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v4 & 1) != 0) {
    v7 = *(_QWORD*)GameData_212ebf8[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212ebf8[0] + 8LL) != 0 &&
        *(_BYTE*)(v7 + 9) != 0) {
      *(_BYTE*)(v7 + 9) = 0;
      v8 = game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0) {
        v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        if ((v9 & 0x10) == 0) {
          v10 = *(float*)(game_ProcGameSkipView_instance_ + 224);
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
              v9 & 0xFFFFFFE2 | 1;
          if (v10 > 0x0.0p+0f) {
            *(_DWORD*)(v8 + 224) = 0;
          }
        }
      }
    }
    v11 = *GameData_212ebc0[0];
    if (*(_BYTE*)(*GameData_212ebc0[0] + 162) != 0) {
      v12 = *(_DWORD*)(v11 + 192);
      *(_BYTE*)(v11 + 162) = 0;
      *(_DWORD*)(v11 + 192) = --v12;
      if (v12 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v11 + 184) + 8LL))(v11 + 184);
      }
      game_hub_d799f0(v11);
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v13 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v14 = v13;
        v13 = *(_QWORD*)(v13 + 40);
      } while (v13 != 0);
    }
    else {
      v14 = 0;
    }
    GameRoutine_15f2260(v14);
    v15 = (char*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    v16 = game_hub_ProcHubSeqView_instance_;
    v31_.v31 = 33;
    v31_.v32 = 25;
    v31_.v33 = v15;
    strcpy(v15, "ShowBattleHintInstruction");
    if (v16 != 0) {
      GameRoutine_d8b9c0(v16 + 424, (unsigned __int8*)&v31_.v31);
      v17 = *(_QWORD*)(*(_QWORD*)(v16 + 416) + 40LL);
      if (v17 != 0) {
        v18 = 0;
        do {
          v17 = *(_QWORD*)(v17 + 40);
          ++v18;
        } while (v17 != 0);
        v34 = &v31_.v31;
        *((_DWORD*)GameRoutine_d8bae0(
              (__int64**)(v16 + 424), (unsigned __int8*)&v31_.v31,
              (__int64)std___1_piecewise_construct_ptr, &v34) +
          14) = v18;
      }
    }
    if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v19, (__int64)v31_.v33);
    }
  }
  v20 = (char*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  v31_.v31 = 33;
  v31_.v32 = 25;
  v31_.v33 = v20;
  strcpy(v20, "ShowBattleHintInstruction");
  v21 = GameRoutine_d859a0((__int64)&v31_.v31);
  v22 = *v0;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v23 != 0) {
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  }
  else {
    v24 = 0;
  }
  v25 = *(_QWORD*)(v24 + 24);
  v26 = *(void (**)(__int64, __int64))(*(_QWORD*)v25 + 448LL);
  if ((v21 & 1) == 0) {
    v26(v25, 1);
    v27 = *(_QWORD**)(v24 + 2240);
    *(_QWORD*)(v24 + 2240) = 0;
    if (v27 == (_QWORD*)(v24 + 2208)) {
      v28 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_37;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    goto LABEL_37;
  }
  v26(v25, 0);
LABEL_37:
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v29, (__int64)v31_.v33);
  }
  if ((v21 & 1) == 0) {
    v30 = *(_QWORD*)GameData_212dbb8[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 770LL) == 1) {
      if (game_hub_ProcHubSeqView_instance_ != 0 &&
          (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
        ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      }
      *(_BYTE*)(v30 + 770) = 0;
    }
    GameRoutine_e1e440(*v5, 1);
  }
}

void game_script_eca340(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v12;
  int v13;
  int v15;
  __int64 v16;
  int v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  void (*v30)(__int64, __int64);
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35[3];
  __int64* v36;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  v6 = (*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
      *(_QWORD*)(v5 + 24));
  v7 = GameData_212dbb8[0];
  if ((v6 & 1) == 0) {
    goto LABEL_46;
  }
  v8 = *(_BYTE*)a1 >> 1;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(__int64**)(a1 + 16);
  }
  else {
    v9 = (__int64*)(a1 + 1);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 8);
  }
  switch (v8) {
  case 10LL:
    v16 = *v9;
    v17 = *((unsigned __int16*)v9 + 4);
    if (v16 == 0x6948656C74746142LL & v17 == 29806) {
      v15 = 4;
      break;
    }
    goto LABEL_30;
  case 8LL:
    if (*v9 != 0x7261646E656C6143LL) {
    LABEL_30:
      v15 = 0;
      break;
    }
    v15 = 3;
    break;
  case 5LL:
    if (*(_DWORD*)v9 == 1684632903 & *((_BYTE*)v9 + 4) == 101) {
      goto LABEL_30;
    }
    if (*(_DWORD*)v9 == 1869508424 & *((_BYTE*)v9 + 4) == 114) {
      v15 = 1;
      break;
    }
    v12 = *(_DWORD*)v9;
    v13 = *((unsigned __int8*)v9 + 4);
    if (v12 != 1936029009 | v13 != 116) {
      goto LABEL_30;
    }
    v15 = 2;
    break;
  default:
    goto LABEL_30;
  }
  Manager_d554e0(*(_QWORD*)GameData_212dbb8[0], 1);
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v20 = v19;
      v19 = *(_QWORD*)(v19 + 40);
    } while (v19 != 0);
  }
  else {
    v20 = 0;
  }
  GameRoutine_1712520(v20, v15, 1);
  v21 = game_hub_ProcHubSeqView_instance_;
  strcpy((char*)v35, " ShowGuideTopMenu");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v35);
    v22 = *(_QWORD*)(*(_QWORD*)(v21 + 416) + 40LL);
    if (v22 != 0) {
      v23 = 0;
      do {
        v22 = *(_QWORD*)(v22 + 40);
        ++v23;
      } while (v22 != 0);
      v36 = v35;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v21 + 424), (unsigned __int8*)v35,
            (__int64)std___1_piecewise_construct_ptr, &v36) +
        14) = v23;
    }
  }
  if ((v35[0] & 1) != 0 && v35[2] != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v35[2]);
  }
LABEL_46:
  strcpy((char*)v35, " ShowGuideTopMenu");
  v25 = GameRoutine_d859a0((__int64)v35);
  v26 = *v2;
  v27 = *(
      _QWORD*)(v26 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v27 != 0) {
    v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 472LL))(v27);
  }
  else {
    v28 = 0;
  }
  v29 = *(_QWORD*)(v28 + 24);
  v30 = *(void (**)(__int64, __int64))(*(_QWORD*)v29 + 448LL);
  if ((v25 & 1) == 0) {
    v30(v29, 1);
    v31 = *(_QWORD**)(v28 + 2240);
    *(_QWORD*)(v28 + 2240) = 0;
    if (v31 == (_QWORD*)(v28 + 2208)) {
      v32 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_56;
      }
      v32 = 40;
    }
    (*(void (**)(__int64))(*v31 + v32))((__int64)v31);
    goto LABEL_56;
  }
  v30(v29, 0);
LABEL_56:
  if ((v35[0] & 1) != 0 && v35[2] != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v35[2]);
  }
  if ((v25 & 1) == 0) {
    v34 = *(_QWORD*)v7;
    if (*(_BYTE*)(*(_QWORD*)v7 + 770LL) == 1) {
      if (game_hub_ProcHubSeqView_instance_ != 0 &&
          (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
        ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      }
      *(_BYTE*)(v34 + 770) = 0;
    }
    GameRoutine_e1e440(*(_QWORD*)GameData_212ebf8[0], 1);
  }
}

void game_script_ecb380(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  void (*v29)(__int64, __int64);
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
    char* v35;
  } v33_;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  v6 = (*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
      *(_QWORD*)(v5 + 24));
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v6 & 1) != 0) {
    v8 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    v9 = game_HashString(v8);
    if (v9 != 0) {
      v10 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v10 != 0 & *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v12 = v10 - 1;
        if ((v10 & (v10 - 1)) != 0) {
          v13 = v9;
          if (v9 >= v10) {
            v13 = v9 % v10;
          }
        }
        else {
          v13 = v12 & v9;
        }
        v14 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v13);
        if (v14 != nullptr) {
          v15 = (_QWORD*)*v14;
          if (v15 != nullptr) {
            if ((v10 & v12) == 0) {
              while (1) {
                v17 = v15[1];
                if (v17 == v9) {
                  if (v15[2] == v9) {
                    goto LABEL_30;
                  }
                }
                else if ((v17 & v12) != v13) {
                  goto LABEL_41;
                }
                v15 = (_QWORD*)*v15;
                if (v15 == nullptr) {
                  goto LABEL_41;
                }
              }
            }
            do {
              v16 = v15[1];
              if (v16 == v9) {
                if (v15[2] == v9) {
                LABEL_30:
                  v18 = v15[3];
                  if (v18 != 0) {
                    if (game_hub_ProcHubSeqView_instance_ != 0) {
                      v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
                      do {
                        v20 = v19;
                        v19 = *(_QWORD*)(v19 + 40);
                      } while (v19 != 0);
                    }
                    else {
                      v20 = 0;
                    }
                    GameRoutine_177ba70(v20, v18, 1);
                    v21 = (char*)fw_memory_HeapManager_Allocate(*v7, 26, 16, 0);
                    v33_.v33 = 27;
                    v33_.v34 = 23;
                    v33_.v35 = v21;
                    strcpy(v21, "TelopScoutSuccessResult");
                    GameRoutine_d85900((__int64)&v33_.v33);
                    if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
                      v22 = 128;
                      if (*(_QWORD*)(*v7 + 200) == 0) {
                        v22 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v7 + v22,
                                                    (__int64)v33_.v35);
                    }
                  }
                  break;
                }
              }
              else {
                if (v16 >= v10) {
                  v16 %= v10;
                }
                if (v16 != v13) {
                  break;
                }
              }
              v15 = (_QWORD*)*v15;
            } while (v15 != nullptr);
          }
        }
      }
    }
  }
LABEL_41:
  v23 = (char*)fw_memory_HeapManager_Allocate(*v7, 26, 16, 0);
  v33_.v33 = 27;
  v33_.v34 = 23;
  v33_.v35 = v23;
  strcpy(v23, "TelopScoutSuccessResult");
  v24 = GameRoutine_d859a0((__int64)&v33_.v33);
  v25 = *v2;
  v26 = *(
      _QWORD*)(v25 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v26 != 0) {
    v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
  }
  else {
    v27 = 0;
  }
  v28 = *(_QWORD*)(v27 + 24);
  v29 = *(void (**)(__int64, __int64))(*(_QWORD*)v28 + 448LL);
  if ((v24 & 1) == 0) {
    v29(v28, 1);
    v30 = *(_QWORD**)(v27 + 2240);
    *(_QWORD*)(v27 + 2240) = 0;
    if (v30 == (_QWORD*)(v27 + 2208)) {
      v31 = 32;
    }
    else {
      if (v30 == nullptr) {
        goto LABEL_51;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
    goto LABEL_51;
  }
  v29(v28, 0);
LABEL_51:
  if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v32, (__int64)v33_.v35);
  }
}

void game_script_ecb6c0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void (*v28)(__int64, __int64);
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _BYTE* v32[3];

  v4 = as_g_script_manager_ptr;
  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v7 + 24) + 456LL))(
           *(_QWORD*)(v7 + 24)) &
       1) != 0) {
    v8 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
    v9 = game_HashString(v8);
    if (v9 != 0) {
      v10 = *(_QWORD*)(*GameData_212c868 + 96);
      if (v10 != 0 & *(_QWORD*)(*GameData_212c868 + 112) != 0) {
        v12 = v10 - 1;
        if ((v10 & (v10 - 1)) != 0) {
          v13 = v9;
          if (v9 >= v10) {
            v13 = v9 % v10;
          }
        }
        else {
          v13 = v12 & v9;
        }
        v14 = *(_QWORD**)(*(_QWORD*)(*GameData_212c868 + 88) + 8 * v13);
        if (v14 != nullptr) {
          v15 = (_QWORD*)*v14;
          if (v15 != nullptr) {
            if ((v10 & v12) == 0) {
              while (1) {
                v17 = v15[1];
                if (v17 == v9) {
                  if (v15[2] == v9) {
                    goto LABEL_30;
                  }
                }
                else if ((v17 & v12) != v13) {
                  goto LABEL_45;
                }
                v15 = (_QWORD*)*v15;
                if (v15 == nullptr) {
                  goto LABEL_45;
                }
              }
            }
            do {
              v16 = v15[1];
              if (v16 == v9) {
                if (v15[2] == v9) {
                LABEL_30:
                  v18 = v15[3];
                  if (v18 != 0) {
                    if (game_hub_ProcHubSeqView_instance_ != 0) {
                      v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
                      do {
                        v20 = v19;
                        v19 = *(_QWORD*)(v19 + 40);
                      } while (v19 != 0);
                    }
                    else {
                      v20 = 0;
                    }
                    v21 = (*(_BYTE*)a1 & 1) != 0 ? *(_BYTE**)(a1 + 16)
                                                 : (_BYTE*)(a1 + 1);
                    v32[0] = v21;
                    if (game_telop_176df00(v20, v32, v18) != 0) {
                      strcpy((char*)v32, "*ShowTelopNoticeNewJob");
                      GameRoutine_d85900((__int64)v32);
                      if (((__int64)v32[0] & 1) != 0 && v32[2] != nullptr) {
                        v22 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v22 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                            (__int64)v32[2]);
                      }
                    }
                  }
                  break;
                }
              }
              else {
                if (v16 >= v10) {
                  v16 %= v10;
                }
                if (v16 != v13) {
                  break;
                }
              }
              v15 = (_QWORD*)*v15;
            } while (v15 != nullptr);
          }
        }
      }
    }
  }
LABEL_45:
  strcpy((char*)v32, "*ShowTelopNoticeNewJob");
  v23 = GameRoutine_d859a0((__int64)v32);
  v24 = *v4;
  v25 = *(
      _QWORD*)(v24 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v25 != 0) {
    v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 472LL))(v25);
  }
  else {
    v26 = 0;
  }
  v27 = *(_QWORD*)(v26 + 24);
  v28 = *(void (**)(__int64, __int64))(*(_QWORD*)v27 + 448LL);
  if ((v23 & 1) == 0) {
    v28(v27, 1);
    v29 = *(_QWORD**)(v26 + 2240);
    *(_QWORD*)(v26 + 2240) = 0;
    if (v29 == (_QWORD*)(v26 + 2208)) {
      v30 = 32;
    }
    else {
      if (v29 == nullptr) {
        goto LABEL_55;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v29 + v30))((__int64)v29);
    goto LABEL_55;
  }
  v28(v27, 0);
LABEL_55:
  if (((__int64)v32[0] & 1) != 0 && v32[2] != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  (__int64)v32[2]);
  }
}

void game_script_10db040(int a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  void (*v19)(__int64, __int64);
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  struct {
    _BYTE v23[16];
    __int64 v24;
  } v23_;
  __int64* v25;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_26;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
    if (a1 == 0) {
      goto LABEL_26;
    }
  }
  else {
    v7 = 0;
    if (a1 == 0) {
      goto LABEL_26;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v8 = (*(int*)(game_GameModeData_instance_ + 72) + a1) &
         ~((signed __int32)(*(int*)(game_GameModeData_instance_ + 72) + a1) >>
           31);
    if (v8 >= 9999999) {
      v8 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v8;
  }
  if (v7 != 0) {
    v9 = ObeliskDestinyMenuItem_1a070b0(v7, a1, 0);
    Se_80e330(v9, "FF_Positive1");
    v10 = game_hub_ProcHubSeqView_instance_;
    strcpy(&v23_.v23[1], "GainGold");
    v23_.v23[0] = 16;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v23_.v23);
      v11 = *(_QWORD*)(*(_QWORD*)(v10 + 416) + 40LL);
      if (v11 != 0) {
        v12 = 0;
        do {
          v11 = *(_QWORD*)(v11 + 40);
          ++v12;
        } while (v11 != 0);
        v25 = (__int64*)v23_.v23;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v10 + 424), v23_.v23,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      &v25) +
          14) = v12;
      }
    }
    if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v23_.v24);
    }
  }
LABEL_26:
  strcpy(&v23_.v23[1], "GainGold");
  v23_.v23[0] = 16;
  v14 = GameRoutine_d859a0((__int64)v23_.v23);
  v15 = *v2;
  v16 = *(
      _QWORD*)(v15 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v16 != 0) {
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 472LL))(v16);
  }
  else {
    v17 = 0;
  }
  v18 = *(_QWORD*)(v17 + 24);
  v19 = *(void (**)(__int64, __int64))(*(_QWORD*)v18 + 448LL);
  if ((v14 & 1) == 0) {
    v19(v18, 1);
    v20 = *(_QWORD**)(v17 + 2240);
    *(_QWORD*)(v17 + 2240) = 0;
    if (v20 == (_QWORD*)(v17 + 2208)) {
      v21 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_36;
      }
      v21 = 40;
    }
    (*(void (**)(__int64))(*v20 + v21))((__int64)v20);
    goto LABEL_36;
  }
  v19(v18, 0);
LABEL_36:
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v23_.v24);
  }
}

void game_script_10db5c0(int a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (*v17)(__int64, __int64);
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  struct {
    _BYTE v21[16];
    __int64 v22;
  } v21_;
  __int64* v23;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v7 = v6;
        v6 = *(_QWORD*)(v6 + 40);
      } while (v6 != 0);
    }
    else {
      v7 = 0;
    }
    if (GameRoutine_8b03f0(v7, a1, 0) != 0) {
      v8 = game_hub_ProcHubSeqView_instance_;
      v21_.v21[0] = 18;
      strcpy(&v21_.v21[1], "GainHonor");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v21_.v21);
        v9 = *(_QWORD*)(*(_QWORD*)(v8 + 416) + 40LL);
        if (v9 != 0) {
          v10 = 0;
          do {
            v9 = *(_QWORD*)(v9 + 40);
            ++v10;
          } while (v9 != 0);
          v23 = (__int64*)v21_.v21;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v8 + 424), v21_.v21,
                (__int64)std___1_piecewise_construct_ptr, &v23) +
            14) = v10;
        }
      }
      if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v21_.v22);
      }
    }
  }
  v21_.v21[0] = 18;
  strcpy(&v21_.v21[1], "GainHonor");
  v12 = GameRoutine_d859a0((__int64)v21_.v21);
  v13 = *v2;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v14 != 0) {
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  }
  else {
    v15 = 0;
  }
  v16 = *(_QWORD*)(v15 + 24);
  v17 = *(void (**)(__int64, __int64))(*(_QWORD*)v16 + 448LL);
  if ((v12 & 1) == 0) {
    v17(v16, 1);
    v18 = *(_QWORD**)(v15 + 2240);
    *(_QWORD*)(v15 + 2240) = 0;
    if (v18 == (_QWORD*)(v15 + 2208)) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_31;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
    goto LABEL_31;
  }
  v17(v16, 0);
LABEL_31:
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v21_.v22);
  }
}

void game_script_10db960(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void (*v18)(__int64, __int64);
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[2];
    __int64 v23;
  } v22_;
  __int64* v24;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v7 = v6;
        v6 = *(_QWORD*)(v6 + 40);
      } while (v6 != 0);
    }
    else {
      v7 = 0;
    }
    v8 = as_string_c_str(a1);
    GameRoutine_887920(v22_.v22, v8);
    if (GameRoutine_162aea0(v7, v22_.v22) != 0) {
      v9 = game_hub_ProcHubSeqView_instance_;
      LOBYTE(v22_.v22[0]) = 24;
      strcpy((char*)v22_.v22 + 1, "TutorialInfo");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                           (unsigned __int8*)v22_.v22);
        v10 = *(_QWORD*)(*(_QWORD*)(v9 + 416) + 40LL);
        if (v10 != 0) {
          v11 = 0;
          do {
            v10 = *(_QWORD*)(v10 + 40);
            ++v11;
          } while (v10 != 0);
          v24 = v22_.v22;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v9 + 424), (unsigned __int8*)v22_.v22,
                (__int64)std___1_piecewise_construct_ptr, &v24) +
            14) = v11;
        }
      }
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v22_.v23);
      }
    }
  }
  LOBYTE(v22_.v22[0]) = 24;
  strcpy((char*)v22_.v22 + 1, "TutorialInfo");
  v13 = GameRoutine_d859a0((__int64)v22_.v22);
  v14 = *v2;
  v15 = *(
      _QWORD*)(v14 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v15 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15);
  }
  else {
    v16 = 0;
  }
  v17 = *(_QWORD*)(v16 + 24);
  v18 = *(void (**)(__int64, __int64))(*(_QWORD*)v17 + 448LL);
  if ((v13 & 1) == 0) {
    v18(v17, 1);
    v19 = *(_QWORD**)(v16 + 2240);
    *(_QWORD*)(v16 + 2240) = 0;
    if (v19 == (_QWORD*)(v16 + 2208)) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_28;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    goto LABEL_28;
  }
  v18(v17, 0);
LABEL_28:
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v22_.v23);
  }
}

void game_script_10dbe60(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (*v20)(__int64, __int64);
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v24[2];
    __int64 v25;
    char gap24_[8];
    _QWORD* v26;
  } v24_;
  __int64* v27;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    goto LABEL_26;
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 40);
    } while (v6 != 0);
  }
  else {
    v7 = 0;
  }
  v8 = (*(_BYTE*)a1 & 1) != 0 ? *(__int64**)(a1 + 16) : (__int64*)(a1 + 1);
  v27 = v8;
  v9 = game_menu_Dialog__CreateBind_game_menu_Dialog(v7, (__int64)&v27);
  if (v9 == 0) {
    goto LABEL_26;
  }
  v24_.v26 = nullptr;
  GameRoutine_6680e0(v24_.v24, (_QWORD*)(v9 + 1248));
  if (v24_.v26 == v24_.v24) {
    v10 = 32;
  }
  else {
    if (v24_.v26 == nullptr) {
      goto LABEL_16;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v24_.v26 + v10))((__int64)v24_.v26);
LABEL_16:
  v11 = game_hub_ProcHubSeqView_instance_;
  LOBYTE(v24_.v24[0]) = 12;
  strcpy((char*)v24_.v24 + 1, "Dialog");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                       (unsigned __int8*)v24_.v24);
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 416) + 40LL);
    if (v12 != 0) {
      v13 = 0;
      do {
        v12 = *(_QWORD*)(v12 + 40);
        ++v13;
      } while (v12 != 0);
      v27 = v24_.v24;
      *((_DWORD*)GameRoutine_d8bae0(
            (__int64**)(v11 + 424), (unsigned __int8*)v24_.v24,
            (__int64)std___1_piecewise_construct_ptr, &v27) +
        14) = v13;
    }
  }
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v24_.v25);
  }
LABEL_26:
  LOBYTE(v24_.v24[0]) = 12;
  strcpy((char*)v24_.v24 + 1, "Dialog");
  v15 = GameRoutine_d859a0((__int64)v24_.v24);
  v16 = *v2;
  v17 = *(
      _QWORD*)(v16 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v17 != 0) {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
  }
  else {
    v18 = 0;
  }
  v19 = *(_QWORD*)(v18 + 24);
  v20 = *(void (**)(__int64, __int64))(*(_QWORD*)v19 + 448LL);
  if ((v15 & 1) == 0) {
    v20(v19, 1);
    v21 = *(_QWORD**)(v18 + 2240);
    *(_QWORD*)(v18 + 2240) = 0;
    if (v21 == (_QWORD*)(v18 + 2208)) {
      v22 = 32;
    }
    else {
      if (v21 == nullptr) {
        goto LABEL_36;
      }
      v22 = 40;
    }
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
    goto LABEL_36;
  }
  v20(v19, 0);
LABEL_36:
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v24_.v25);
  }
}

void game_script_10dc380(char* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (*v20)(__int64, __int64);
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  struct {
    _BYTE v24[16];
    __int64 v25;
  } v24_;
  struct {
    __int64 v26;
    int v27;
  } v26_;
  __int64* v28;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v7 = v6;
        v6 = *(_QWORD*)(v6 + 40);
      } while (v6 != 0);
    }
    else {
      v7 = 0;
    }
    v8 = *a1;
    v9 = *((char**)a1 + 2);
    v26_.v26 = 0;
    v26_.v27 = 0;
    v10 = (__int64)((v8 & 1) != 0 ? v9 : a1 + 1);
    if (GameRoutine_16ae780(v7, v10, (__int16*)&v26_.v26) != 0) {
      v11 = game_hub_ProcHubSeqView_instance_;
      v24_.v24[0] = 18;
      strcpy(&v24_.v24[1], "MainQuest");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v24_.v24);
        v12 = *(_QWORD*)(*(_QWORD*)(v11 + 416) + 40LL);
        if (v12 != 0) {
          v13 = 0;
          do {
            v12 = *(_QWORD*)(v12 + 40);
            ++v13;
          } while (v12 != 0);
          v28 = (__int64*)v24_.v24;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v11 + 424), v24_.v24,
                (__int64)std___1_piecewise_construct_ptr, &v28) +
            14) = v13;
        }
      }
      if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v24_.v25);
      }
    }
  }
  v24_.v24[0] = 18;
  strcpy(&v24_.v24[1], "MainQuest");
  v15 = GameRoutine_d859a0((__int64)v24_.v24);
  v16 = *v2;
  v17 = *(
      _QWORD*)(v16 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v17 != 0) {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
  }
  else {
    v18 = 0;
  }
  v19 = *(_QWORD*)(v18 + 24);
  v20 = *(void (**)(__int64, __int64))(*(_QWORD*)v19 + 448LL);
  if ((v15 & 1) == 0) {
    v20(v19, 1);
    v21 = *(_QWORD**)(v18 + 2240);
    *(_QWORD*)(v18 + 2240) = 0;
    if (v21 == (_QWORD*)(v18 + 2208)) {
      v22 = 32;
    }
    else {
      if (v21 == nullptr) {
        goto LABEL_31;
      }
      v22 = 40;
    }
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
    goto LABEL_31;
  }
  v20(v19, 0);
LABEL_31:
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v24_.v25);
  }
}

void game_script_10dc600(_DWORD* a1, char* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  char* v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  struct {
    _BYTE v29[16];
    __int64 v30;
  } v29_;
  __int16 v31[7];
  __int64* v32;

  v4 = as_g_script_manager_ptr;
  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v7 + 24) + 456LL))(
           *(_QWORD*)(v7 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v9 = v8;
        v8 = *(_QWORD*)(v8 + 40);
      } while (v8 != 0);
    }
    else {
      v9 = 0;
    }
    v10 = *a2;
    v11 = *((char**)a2 + 2);
    v12 = a1[3];
    v31[2] = a1[2];
    v31[3] = v12;
    v13 = (__int64)((v10 & 1) != 0 ? v11 : a2 + 1);
    v14 = a1[1];
    v31[0] = *(_DWORD*)a1;
    v31[1] = v14;
    v15 = a1[5];
    v31[4] = a1[4];
    v31[5] = v15;
    if (GameRoutine_16ae780(v9, v13, v31) != 0) {
      v16 = game_hub_ProcHubSeqView_instance_;
      v29_.v29[0] = 18;
      strcpy(&v29_.v29[1], "MainQuest");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v29_.v29);
        v17 = *(_QWORD*)(*(_QWORD*)(v16 + 416) + 40LL);
        if (v17 != 0) {
          v18 = 0;
          do {
            v17 = *(_QWORD*)(v17 + 40);
            ++v18;
          } while (v17 != 0);
          v32 = (__int64*)v29_.v29;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v16 + 424), v29_.v29,
                (__int64)std___1_piecewise_construct_ptr, &v32) +
            14) = v18;
        }
      }
      if ((v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v29_.v30);
      }
    }
  }
  v29_.v29[0] = 18;
  strcpy(&v29_.v29[1], "MainQuest");
  v20 = GameRoutine_d859a0((__int64)v29_.v29);
  v21 = *v4;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  v24 = *(_QWORD*)(v23 + 24);
  v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
  if ((v20 & 1) == 0) {
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_31;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_31;
  }
  v25(v24, 0);
LABEL_31:
  if ((v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v29_.v30);
  }
}

void game_script_10dc960(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void (*v18)(__int64, __int64);
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  struct {
    _BYTE v22[16];
    __int64 v23;
  } v22_;
  __int64* v24;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v7 = v6;
        v6 = *(_QWORD*)(v6 + 40);
      } while (v6 != 0);
    }
    else {
      v7 = 0;
    }
    v8 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
    if (ProcNextSeq_16af0a0(v7, v8) != 0) {
      v9 = game_hub_ProcHubSeqView_instance_;
      v22_.v22[0] = 18;
      strcpy(&v22_.v22[1], "SideStory");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, v22_.v22);
        v10 = *(_QWORD*)(*(_QWORD*)(v9 + 416) + 40LL);
        if (v10 != 0) {
          v11 = 0;
          do {
            v10 = *(_QWORD*)(v10 + 40);
            ++v11;
          } while (v10 != 0);
          v24 = (__int64*)v22_.v22;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v9 + 424), v22_.v22,
                (__int64)std___1_piecewise_construct_ptr, &v24) +
            14) = v11;
        }
      }
      if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v22_.v23);
      }
    }
  }
  v22_.v22[0] = 18;
  strcpy(&v22_.v22[1], "SideStory");
  v13 = GameRoutine_d859a0((__int64)v22_.v22);
  v14 = *v2;
  v15 = *(
      _QWORD*)(v14 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v15 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15);
  }
  else {
    v16 = 0;
  }
  v17 = *(_QWORD*)(v16 + 24);
  v18 = *(void (**)(__int64, __int64))(*(_QWORD*)v17 + 448LL);
  if ((v13 & 1) == 0) {
    v18(v17, 1);
    v19 = *(_QWORD**)(v16 + 2240);
    *(_QWORD*)(v16 + 2240) = 0;
    if (v19 == (_QWORD*)(v16 + 2208)) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_31;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    goto LABEL_31;
  }
  v18(v17, 0);
LABEL_31:
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v22_.v23);
  }
}

void game_script_10dce60(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(__int64, __int64);
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29[3];
  char v30[8];

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = as_string_c_str(a1);
    v7 = game_HashString(v6);
    if (v7 != 0) {
      v8 = *(_QWORD*)(*GameData_212c998[0] + 96);
      if (v8 != 0 & *(_QWORD*)(*GameData_212c998[0] + 112) != 0) {
        v10 = v8 - 1;
        if ((v8 & (v8 - 1)) != 0) {
          v11 = v7;
          if (v7 >= v8) {
            v11 = v7 % v8;
          }
        }
        else {
          v11 = v10 & v7;
        }
        v12 = *(_QWORD**)(*(_QWORD*)(*GameData_212c998[0] + 88) + 8 * v11);
        if (v12 != nullptr) {
          v13 = (_QWORD*)*v12;
          if (v13 != nullptr) {
            if ((v8 & v10) == 0) {
              while (1) {
                v15 = v13[1];
                if (v15 == v7) {
                  if (v13[2] == v7) {
                    goto LABEL_27;
                  }
                }
                else if ((v15 & v10) != v11) {
                  goto LABEL_38;
                }
                v13 = (_QWORD*)*v13;
                if (v13 == nullptr) {
                  goto LABEL_38;
                }
              }
            }
            do {
              v14 = v13[1];
              if (v14 == v7) {
                if (v13[2] == v7) {
                LABEL_27:
                  v16 = v13[3];
                  if (v16 != 0) {
                    v29[0] = *(unsigned __int8*)(v16 + 16);
                    LegionPool_936f60(
                        (void*)((__int64)v30),
                        *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                        (unsigned __int8*)v29, 0);
                    if (game_hub_ProcHubSeqView_instance_ != 0) {
                      v17 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
                      do {
                        v18 = v17;
                        v17 = *(_QWORD*)(v17 + 40);
                      } while (v17 != 0);
                    }
                    else {
                      v18 = 0;
                    }
                    game_telop_1778700(v18, v16);
                    strcpy((char*)v29, " RunRecruitResult");
                    GameRoutine_d85900((__int64)v29);
                    if ((v29[0] & 1) != 0 && v29[2] != 0) {
                      v19 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v19 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v29[2]);
                    }
                  }
                  break;
                }
              }
              else {
                if (v14 >= v8) {
                  v14 %= v8;
                }
                if (v14 != v11) {
                  break;
                }
              }
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
          }
        }
      }
    }
  }
LABEL_38:
  strcpy((char*)v29, " RunRecruitResult");
  v20 = GameRoutine_d859a0((__int64)v29);
  v21 = *v2;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  v24 = *(_QWORD*)(v23 + 24);
  v25 = *(void (**)(__int64, __int64))(*(_QWORD*)v24 + 448LL);
  if ((v20 & 1) == 0) {
    v25(v24, 1);
    v26 = *(_QWORD**)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (v26 == (_QWORD*)(v23 + 2208)) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_48;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_48;
  }
  v25(v24, 0);
LABEL_48:
  if ((v29[0] & 1) != 0 && v29[2] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v29[2]);
  }
}

#pragma GCC visibility pop
