#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0a690(const char*, int);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
extern __int64 (*GameData_20c26a0[])();
extern __int64 (*GameData_20c2720[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_telop_177ba70(__int64 a1, unsigned __int64 a2, char a3);

__int64 game_telop_177ba70(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  unsigned int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  _QWORD* v22;
  char* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 (**v33)();
    unsigned __int64 v34;
    __int64 v35;
    char gap24_[8];
    __int64 (***v36)();
    char gap40_[16];
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
  } f_;
  unsigned __int64 v40[2];

  v3 = 0;
  if (a1 == 0 || a2 == 0) {
    return v3;
  }
  if ((a3 & 1) != 0) {
    v5 = *(const char**)(a2 + 8);
    v6 = a1;
    if (v5 != nullptr) {
      v7 = GameRoutine_1a0a690(*(const char**)(a2 + 8), 95);
      if (v7 != 0) {
        v5 = (const char*)(v7 + 1);
      }
    }
    v8 = GameRoutine_1a09c70(v5);
    if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_72;
    }
    v9 = v8;
    if (v8 >= 0x17) {
      if ((v8 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v8 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                  16, 0);
      f_.v34 = v9;
      f_.v35 = (__int64)v10;
      f_.v33 = (__int64 (**)(void))(v12 | 1);
    }
    else {
      LOBYTE(f_.v33) = 2 * v8;
      v10 = (char*)&f_.v33 + 1;
      if (v8 == 0) {
      LABEL_17:
        v10[v9] = 0;
        v13 = (char)f_.v33;
        v14 = f_.v35;
        if (((unsigned __int8)f_.v33 & 1) != 0) {
          v15 = (char*)f_.v35;
        }
        else {
          v15 = (char*)&f_.v33 + 1;
        }
        if (((unsigned __int8)f_.v33 & 1) != 0) {
          v16 = f_.v34;
        }
        else {
          v16 = (unsigned __int64)(unsigned __int8)f_.v33 >> 1;
        }
        v17 = v16 + 13;
        if (v16 + 13 < 0xFFFFFFFFFFFFFFF7LL) {
          if (v17 > 0x16) {
            if ((v17 | 7) == 0x17) {
              v20 = 26;
            }
            else {
              v20 = (v17 | 7) + 1;
            }
            v19 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                 16, 0);
            f_.v38 = v16 + 13;
            f_.v39 = (char*)v19;
            f_.v37 = v20 | 1;
            v18 = v20 | 1;
          }
          else {
            v18 = 2 * v17;
            v19 = 0;
            f_.v38 = 0;
            f_.v39 = nullptr;
            f_.v37 = (unsigned __int8)(2 * v17);
          }
          v21 = (v18 & 1) == 0;
          if ((v18 & 1) != 0) {
            v22 = (_QWORD*)v19;
          }
          else {
            v22 = (__int64*)((char*)&f_.v37 + 1);
          }
          *v22 = 0x8FE59AAEE59099E9LL;
          *(_QWORD*)((char*)v22 + 5) = 0x5FA688E6828FE59ALL;
          if (v21) {
            v23 = (char*)&f_.v38 + 6;
          }
          else {
            v23 = (char*)(v19 + 13);
          }
          if (v16 != 0) {
            GameRoutine_1a0b940((__int64)v23, (__int64)v15, v16);
          }
          v23[v16] = 0;
          if ((f_.v37 & 1) != 0) {
            v24 = f_.v39;
          }
          else {
            v24 = (char*)&f_.v37 + 1;
          }
          v40[1] = (unsigned __int64)v24;
          v40[0] = game_HashString((__int64)v24);
          if (game_GameModeData_instance_ != 0) {
            v25 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48), v40);
            v11 = 1;
            if (v25 != 0) {
              if (*(_DWORD*)(v25 + 32) != 0) {
                v11 = 2;
              }
              else {
                v11 = 1;
              }
            }
          }
          else {
            v11 = 1;
          }
          a1 = v6;
          if ((f_.v37 & 1) != 0 && f_.v39 != nullptr) {
            v26 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)f_.v39);
            a1 = v6;
          }
          if ((v13 & 1) != 0 && v14 != 0) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v14);
            a1 = v6;
          }
          goto LABEL_57;
        }
      LABEL_72:
        String_60a1d0();
      }
    }
    GameRoutine_1a0b940((__int64)v10, (__int64)v5, v9);
    goto LABEL_17;
  }
  v11 = 0;
LABEL_57:
  v28 = ProcList_9bd480(a1);
  if (v28 != 0) {
    f_.v35 = v11;
    f_.v33 = GameData_20c26a0;
    f_.v34 = a2;
    f_.v36 = &f_.v33;
    v29 = v28;
    game_ProcList_Call_9bcfa0(v28, (__int64)&f_.v33);
    if (f_.v36 == &f_.v33) {
      v30 = 4;
    }
    else {
      if (f_.v36 == nullptr) {
        goto LABEL_64;
      }
      v30 = 5;
    }
    ((void (*)(__int64))(*f_.v36)[v30])((__int64)f_.v36);
  LABEL_64:
    if (v11 == 2) {
      f_.v33 = GameData_20c2720;
      f_.v36 = &f_.v33;
      game_ProcList_Call_9bcfa0(v29, (__int64)&f_.v33);
      if (f_.v36 == &f_.v33) {
        v31 = 4;
        goto LABEL_69;
      }
      if (f_.v36 != nullptr) {
        v31 = 5;
      LABEL_69:
        ((void (*)(__int64))(*f_.v36)[v31])((__int64)f_.v36);
      }
    }
    return v29;
  }
  return 0;
}

#pragma GCC visibility pop
