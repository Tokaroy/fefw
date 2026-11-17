#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_8c9820(__int64, __int64, unsigned __int8);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_8c7aa0(__int64);
__int64 GameRoutine_9e60d0(unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9cc3b0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_184d360(__int64* a1, __int64* a2);

void game_menu_184d360(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  bool v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  struct __attribute__((packed)) {
    _QWORD v27[2];
    __int64* v28;
    __int64* v29;
    __int64* v30;
    __int64* v31;
    __int64* v32;
  } g_;

  if (*((_BYTE*)a1 + 16) != 0) {
    v2 = *a1;
    v3 = a1[1];
    g_.v28 = nullptr;
    g_.v29 = nullptr;
    g_.v30 = nullptr;
    g_.v31 = nullptr;
    g_.v32 = nullptr;
    v6 = v2 == 0 | v3 == 0;
    v7 = !v6;
    if (!v6) {
      g_.v28 = GameRoutine_8c9820(v2, v3, 0);
      g_.v29 = GameRoutine_8c9820(v2, v3, 1u);
      g_.v30 = GameRoutine_8c9820(v2, v3, 2u);
      g_.v31 = GameRoutine_8c9820(v2, v3, 3u);
      g_.v32 = GameRoutine_8c9820(v2, v3, 4u);
    }
    v8 = 2;
    do {
      if (v7 != 0) {
        v11 = g_.v27[v8];
        if (v11 != 0) {
          v12 = GameRoutine_8c7aa0(g_.v27[v8]);
          if (v12 != 0) {
            v13 = v12;
            if ((game_GameModeData_instance_ == 0 ||
                 (v14 = game_GameVariableTable_Find(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)(*(_QWORD*)(v11 + 24) + 40LL))) == 0 ||
                 *(_DWORD*)(v14 + 32) == 0) &&
                (GameRoutine_9e60d0(*(unsigned int**)(v11 + 24)) & 1) != 0 &&
                ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
                     v11) == 0 ||
                 (unsigned int)game_anonymous_RuntimeTalk_GetCondition(v11) ==
                     256)) {
              v16 = (__int64*)a2[1];
              v15 = a2[2];
              if ((unsigned __int64)v16 < v15) {
                *v16 = v13;
                v9 = (__int64)(v16 + 1);
              }
              else {
                v17 = *a2;
                v18 = a2;
                v19 = (signed __int64)v16 - *a2;
                v20 = (v19 >> 3) + 1;
                if (v20 >> 61 != 0) {
                  GameRoutine_9cc3b0();
                }
                v21 = v15 - v17;
                if (v21 >> 2 > v20) {
                  v20 = v21 >> 2;
                }
                if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v22 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v20;
                }
                if (v22 != 0) {
                  if (v22 >> 61 != 0) {
                    GameRoutine_60a210();
                  }
                  v23 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
                }
                else {
                  v23 = 0;
                }
                v24 = v23 + 8 * v22;
                v25 = v23 + v19 - 8 * (v19 >> 3);
                *(_QWORD*)(v23 + v19) = v13;
                v9 = v23 + v19 + 8;
                GameRoutine_1a0b950(v25, v17, v19);
                a2 = v18;
                *v18 = v25;
                v18[1] = v9;
                v18[2] = v24;
                if (v17 != 0) {
                  v26 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v26 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v17);
                }
              }
              a2[1] = v9;
            }
          }
        }
      }
      v10 = v8 - 2;
      ++v8;
    } while (v10 < *((unsigned __int8*)a1 + 16));
  }
}

#pragma GCC visibility pop
