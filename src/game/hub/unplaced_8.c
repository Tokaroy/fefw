#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_d9b060(PSEUDO_X8);
__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8, _QWORD*,
                                               unsigned __int8*);
__attribute__((swiftcall)) void game_hub_d99f80(PSEUDO_X8);
__attribute__((swiftcall)) void game_hub_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 as_627e70(__int64, __int64, char, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_hub_Character_RebuildAppearance(__int64);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 llvm_libcxx_21_libcxx_include___memory_d2d4e0();
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1a95d15;
extern __int64 (*GameData_1fdee00[14])();
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212dc50[4];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_2212268;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void CharacterRotate_d519c0(int8x16_t*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
void as_d9b900(__int64, __int64, __int64, __int64, __int64, __int64, __int64,
               __int64*);
void game_hub_d9a500_alt1(__int64, __int64, __int64) __asm__("game_hub_d9a500");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_d99d20(__int64 a1);
void game_hub_d9a500(_QWORD* a1, __int64 a2, __int64 a3);
void game_hub_d9a760(_QWORD* a1);
void game_hub_d9a9c0(_QWORD* a1);
void game_hub_d9ac20(_QWORD* a1);
__int64 game_hub_e1dce0();
__int64 game_hub_f8ad80_alt1(__int64 result);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0_alt1();
void game_zview_d12d30_alt1(__int64, int32x2_t*, char);
float game_hub_fb48a0_alt1();
void game_hub_f8ad80(__int64 a1);

void game_hub_d99d20(__int64 a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 10;
      if (v7 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 10;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"Initialize";
      *((_WORD*)v14 + 4) = 25978;
      if (v13) {
        v15 = (char*)&v26_.v26 + 3;
      }
      else {
        v15 = (char*)(v11 + 10);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500_alt1(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9a500(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v22_;
  struct {
    _QWORD v25[2];
    __int64 v26;
    char gap104_[8];
    __int64 v27;
  } v25_;

  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  GameRoutine_d9b060((void*)(v25_.v25));
  Manager_d9b420((void*)(&v19_.v19), a1, (unsigned __int8*)v25_.v25);
  v7 = v19_.v19;
  v6 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    if ((v25_.v25[0] & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((v25_.v25[0] & 1) == 0) {
    goto LABEL_9;
  }
  if (v25_.v26 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v25_.v26);
  }
LABEL_9:
  v9 = v22_.v22;
  if (v22_.v22 != 0) {
    v10 = v22_.v23;
    if (v22_.v22 == v22_.v23) {
      goto LABEL_16;
    }
    do {
      v11 = *(unsigned int*)(v10 - 8);
      v12 = v10 - 32;
      if ((_DWORD)v11 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_1fdee00[v11])(v25_.v25, v10 - 32);
      }
      *(_DWORD*)(v10 - 8) = -1;
      v10 -= 32;
    } while (v12 != v9);
    v9 = v22_.v22;
    if (v22_.v22 != 0) {
    LABEL_16:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v9);
    }
  }
  if (v7 != 0) {
    v19_.v20 = 0;
    v19_.v21 = 0;
    v19_.v19 = 0;
    v22_.v23 = 0;
    v22_.v24 = 0;
    v22_.v22 = 0;
    as_d9b900((__int64)a1, (__int64)"void", 4, a2, a3, (__int64)&v19_.v19, 0,
              &v22_.v22);
    if (v18 != 0x2000) {
      v14 = &as_g_context_slots[2 * v18];
      v15 = v14[1];
      if (v15 != 0 && *v14 == v17 && *(_DWORD*)(v15 + 52) == 1) {
        v25_.v27 = 0;
        as_627e70(*as_g_script_manager_ptr, v15, 0, (__int64)v25_.v25, 0);
      }
    }
    if ((v22_.v22 & 1) != 0 && v22_.v24 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v22_.v24);
    }
  }
}

void game_hub_d9a760(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 9;
      if (v7 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 9;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"PreReload";
      v14[8] = 100;
      if (v13) {
        v15 = (char*)&v26_.v26 + 2;
      }
      else {
        v15 = (char*)(v11 + 9);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9a9c0(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    unsigned __int64 v26;
    char* v27;
  } v26_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 10;
      if (v7 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v26_.v26 = v7 + 10;
        v26_.v27 = (char*)v11;
        v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v26_.v26 = 0;
        v26_.v27 = nullptr;
        v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25 + 1;
      }
      *(_QWORD*)v14 = *(_QWORD*)"PostReload";
      *((_WORD*)v14 + 4) = 25697;
      if (v13) {
        v15 = (char*)&v26_.v26 + 3;
      }
      else {
        v15 = (char*)(v11 + 10);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25 & 1) != 0) {
        v16 = v26_.v27;
      }
      else {
        v16 = (char*)&v25 + 1;
      }
      if ((v25 & 1) != 0) {
        v17 = v26_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25 & 1) != 0 && v26_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v26_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_d9ac20(_QWORD* a1)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  char* v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;
  struct {
    unsigned __int8* v28;
    unsigned __int8* v29;
  } v28_;

  game_hub_d99f80((void*)((__int64*)&v28_.v28));
  v2 = v28_.v28;
  v3 = v28_.v29;
  if (v28_.v28 != v28_.v29) {
    do {
      v4 = *v2;
      v5 = (v4 & 1) == 0;
      v6 = v4 >> 1;
      if (v5) {
        v7 = v6;
      }
      else {
        v7 = *((_QWORD*)v2 + 1);
      }
      if (v5) {
        v8 = (__int64)(v2 + 1);
      }
      else {
        v8 = *((_QWORD*)v2 + 2);
      }
      v9 = v7 + 5;
      if (v7 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (v9 > 0x16) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16,
                                             0);
        v25_.v26 = v7 + 5;
        v25_.v27 = (char*)v11;
        v25_.v25 = v12 | 1;
        v10 = v12 | 1;
      }
      else {
        v10 = 2 * v9;
        v11 = 0;
        v25_.v26 = 0;
        v25_.v27 = nullptr;
        v25_.v25 = (unsigned __int8)(2 * v9);
      }
      v13 = (v10 & 1) == 0;
      if ((v10 & 1) != 0) {
        v14 = (char*)v11;
      }
      else {
        v14 = (char*)&v25_.v25 + 1;
      }
      v14[4] = 114;
      *(_DWORD*)v14 = 1702129221;
      if (v13) {
        v15 = (char*)&v25_.v25 + 6;
      }
      else {
        v15 = (char*)(v11 + 5);
      }
      if (v7 != 0) {
        memmove((__int64)v15, v8, v7);
      }
      v15[v7] = 0;
      if ((v25_.v25 & 1) != 0) {
        v16 = v25_.v27;
      }
      else {
        v16 = (char*)&v25_.v25 + 1;
      }
      if ((v25_.v25 & 1) != 0) {
        v17 = v25_.v26;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
      }
      game_hub_d9a500(a1, (__int64)v16, v17);
      if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v25_.v27);
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = v28_.v28;
  }
  if (v2 != nullptr) {
    v19 = v28_.v29;
    if (v2 == v28_.v29) {
      goto LABEL_48;
    }
    v20 = v28_.v29;
    do {
      v21 = *(v20 - 24);
      v20 -= 24;
      if ((v21 & 1) != 0) {
        v22 = *((_QWORD*)v19 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v23, v22);
        }
      }
      v19 = v20;
    } while (v20 != v2);
    v28_.v29 = v2;
    v2 = v28_.v28;
    if (v28_.v28 != nullptr) {
    LABEL_48:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v2);
    }
  }
}

void game_hub_f8ad80(__int64 a1)
{
  int v2;
  int v3;
  __int64 v5;
  float32x4_t* v6;
  __int64 v7;
  __int64 v8;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  __int64 v13;
  unsigned int v14;
  float32x4_t v15;
  _QWORD* v16;
  float v17;
  __int64 v18;
  int8x16_t* v19;
  int v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  bool v29;
  float v30;
  float v31;
  float v32;
  float v33;
  unsigned int v34;
  float32x4_t v35;
  bool v36;
  float32x4_t v37;
  float v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  __int128 v42;
  struct {
    float32x4_t v43;
    char gap16_[16];
    int32x2_t v44;
    void* v45;
    float v46;
  } f_;

  if ((*(_BYTE*)(a1 + 168) & 1) == 0) {
    if ((*(_BYTE*)(GameData_2212268 + 24) & 1) == 0) {
      GameRoutine_8123d0();
    }
    v2 = *(unsigned __int8*)(GameData_2212268 + 12);
    v3 = *(_DWORD*)(GameData_2212268 + 16);
    if (v2 != 9 & v3 != 3 && v3 == 2) {
      f_.v45 = &GameData_1a95d15;
      LANES64(f_.v44).n64_u64[0] = game_HashString((__int64)&GameData_1a95d15);
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            LANES64(f_.v44).n64_u64);
      }
    }
    game_hub_fb48a0_alt1();
    v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v5 == 0) {
      goto LABEL_54;
    }
    v6 = *(float32x4_t**)(GameData_21ec7c0 + 72);
    v7 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    std___1___shared_weak_count___release_weak(v5);
    if (v8 == 0 | v6 == nullptr) {
      if (v8 == 0) {
      LABEL_54:
        *(_BYTE*)(a1 + 168) = 1;
        return;
      }
    LABEL_52:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      goto LABEL_54;
    }
    v10 = f_.v46;
    game_zview_d12d30_alt1(*(_QWORD*)(LANES128(v6[1]).n128_u64[1] + 16),
                           &f_.v44, 1);
    v11 = vsubq_f32(
        v6[79],
        *(float32x4_t*)(*(_QWORD*)(LANES128(v6[1]).n128_u64[1] + 16) + 560LL));
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_f32[0] > 0x1.0000000000000p-23f) {
      v13 = *(_QWORD*)(GameData_21ec7c0 + 120);
      if ((*(_BYTE*)(v13 + 12) & 1) == 0) {
        *(_BYTE*)(v13 + 12) = 1;
      }
    }
    v14 = (unsigned int)f_.v45;
    LANES128(v6[79]).n128_u64[0] = LANES64(f_.v44).n64_u64[0];
    v15 = v6[79];
    LANES128(v15).n128_u64[1] = v14;
    v6[79] = v15;
    HubCharacterNatives_cabfc0((__int64)v6, 1);
    if ((LANES128(v6[83]).n128_u8[1] & 1) == 0) {
      LANES128(v6[83]).n128_u8[1] = 1;
    }
    v16 = *(_QWORD**)(LANES128(v6[1]).n128_u64[1] + 16);
    v17 = v10 * 0x1.1df46a0000000p-6f;
    if (v16[107] != 0) {
      v18 = v16[108];
      v16[107] = 0;
      v16[108] = 0;
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
    }
    v19 = (int8x16_t*)v16[61];
    v20 = LANES128(v19[11]).n128_u8[4];
    LANES128(v19[2]).n128_f32[0] = v17;
    LANES128(v19[2]).n128_f32[1] = v17;
    if (v20 == 1) {
      LANES128(v19[11]).n128_u8[4] = 0;
    }
    CharacterRotate_d519c0(v19);
    v21 = *(_QWORD*)(LANES128(v6[1]).n128_u64[1] + 24);
    if (*(_BYTE*)(v21 + 96) == 1) {
      *(_BYTE*)(v21 + 96) = 0;
    }
    *(_BYTE*)(v21 + 25) = 0;
    v22 = v10 +
          (float)(roundf(v10 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v22 <= 0x1.921fb60000000p+0f) {
      v24 = v22;
      if (v22 >= -0x1.921fb60000000p+0f) {
      LABEL_38:
        v25 =
            v24 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v24 *
                                                                                                          v24))) *
                                                                                  (float)(v24 *
                                                                                          v24))) *
                                                               (float)(v24 *
                                                                       v24))) *
                                               (float)(v24 * v24))) *
                            (float)(v24 * v24)) +
                    0x1.0000000000000p+0f);
        if (v22 < -0x1.921fb60000000p+0f) {
          v26 = -0x1.0000000000000p+0f;
        }
        else {
          v26 = 0x1.0000000000000p+0f;
        }
        v27 = -0x1.921fb60000000p+1f - v22;
        if (v22 >= -0x1.921fb60000000p+0f) {
          v27 = v22;
        }
        v28 = 0x1.921fb60000000p+1f - v22;
        v29 = v22 <= 0x1.921fb60000000p+0f;
        if (v22 > 0x1.921fb60000000p+0f) {
          v30 = -0x1.0000000000000p+0f;
        }
        else {
          v30 = v26;
        }
        if (v29) {
          v31 = v27;
        }
        else {
          v31 = v28;
        }
        v32 = v31 * v31;
        v33 = *(float*)(LANES128(v6[1]).n128_u64[1] + 548);
        *(float*)&v34 =
            v30 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v32)) *
                                                                                  v32)) *
                                                               v32)) *
                                               v32)) *
                            v32) +
                    0x1.0000000000000p+0f);
        LANES128(v35).n128_u64[0] = LODWORD(v25);
        LANES128(v35).n128_u64[1] = v34;
        f_.v43 = v35;
        v36 = llvm_libcxx_21_libcxx_include___memory_d2d4e0_alt1();
        LANES128(v37).n128_u32[0] = 0;
        LANES128(v37).n128_u64[1] = 0;
        v38 = v33 * 0x1.3333340000000p-1f;
        if (!v36) {
          v38 = v33;
        }
        LANES128(v37).n128_f32[1] = v38;
        v39 = vaddq_f32(
            v37, *(float32x4_t*)(*(_QWORD*)(LANES128(v6[1]).n128_u64[1] + 16) +
                                 560LL));
        LANES128(v40).n128_u64[0] = 0x41F0000041F00000LL;
        LANES128(v40).n128_u64[1] = 0x41F0000041F00000LL;
        v41 = vaddq_f32(vmulq_f32(f_.v43, v40), v39);
        *(_QWORD*)(a1 + 176) = LANES128(v41).n128_u64[0];
        v42 = *(_OWORD*)(a1 + 176);
        *((_QWORD*)&v42 + 1) = LANES128(v41).n128_u32[2];
        *(_OWORD*)(a1 + 176) = v42;
        goto LABEL_52;
      }
      v23 = -0x1.921fb60000000p+1f;
    }
    else {
      v23 = 0x1.921fb60000000p+1f;
    }
    v24 = v23 - v22;
    goto LABEL_38;
  }
}

#pragma GCC visibility pop
