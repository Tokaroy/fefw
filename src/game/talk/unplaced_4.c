#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Seq_11326e0(PSEUDO_X8, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 memory_a19f00(__int64 result, __int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212fa30;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212fa28;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_talk_1134ae0(__int64 a1, __int64 a2);

void game_talk_1134ae0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 v14[3];
    char gap32_[24];
    __int64 v15;
  } v14_;

  Seq_11326e0((void*)(v14_.v14), a1);
  v3 = (__int64*)v14_.v14[0];
  v4 = v14_.v14[1];
  if (v14_.v14[0] != v14_.v14[1]) {
    v5 = (atomic_uchar*)GameData_212fa30;
    v6 = GameData_212fa28;
    do {
      v7 = *v3;
      if (*v3 != 0) {
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
          v14_.v15 = v7;
          v12 = __cxa_guard_acquire((__int64)v5);
          v7 = v14_.v15;
          if (v12 != 0) {
            *v6 = wld_Crc32(0, "CharacterFacialController", 0x19u);
            __cxa_guard_release((__int64)v5);
            v7 = v14_.v15;
          }
        }
        v8 = *(_QWORD*)(v7 + 512);
        v9 = v8;
        do {
          v10 = *(_DWORD*)(v9 - 16);
          v9 -= 16;
          v8 -= 16;
        } while (v10 != *v6);
        v11 = *(_QWORD*)(v8 + 8);
        if (*(_DWORD*)(v11 + 96) <= 1u) {
          GameRoutine_112180(v11 + 320, a2);
          memory_a19f00(v11 + 272, v11 + 320);
        }
      }
      ++v3;
    } while (v3 != (__int64*)v4);
    v3 = (__int64*)v14_.v14[0];
  }
  if (v3 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v3);
  }
}

#pragma GCC visibility pop
