#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* game_8450e0(__int64, __int16, __int16);
__int64 GameRoutine_844950(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1ff2e90[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_844ee0(__int64);
__int64 llvm_libcxx_21_libcxx_include___functional_f29200(__int64 a1,
                                                          _DWORD* a2, int* a3);

__int64 llvm_libcxx_21_libcxx_include___functional_f29200(__int64 a1,
                                                          _DWORD* a2, int* a3)
{
  char v3;
  int v4;
  __int64** v5;
  __int16 v6;
  __int16 v7;
  __int64 v8;
  __int16* v9;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  struct __attribute__((packed)) {
    char v16;
    char v17;
    char v18;
    __int16 v19;
    char v20;
    __int16 v21;
    int v22;
  } g_;

  v3 = *(_DWORD*)a2;
  v4 = *a3;
  v5 = *(__int64***)(a1 + 8);
  g_.v16 = 0;
  g_.v22 = 0;
  g_.v20 = 0;
  g_.v21 = -1;
  g_.v19 = 9;
  g_.v17 = v3;
  g_.v18 = v4;
  if (**v5 == 0) {
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
    v12 = v11 + 3;
    v13 = v11;
    v11[1] = 0;
    v11[2] = 0;
    *v11 = GameData_1ff2e90;
    GameRoutine_844ee0((__int64)(v11 + 3));
    v14 = *v5;
    v15 = (*v5)[1];
    *v14 = (__int64)v12;
    v14[1] = (__int64)v13;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
  }
  v6 = g_.v17;
  v7 = g_.v18;
  v8 = **v5;
  *(_DWORD*)(v8 + 12336) |= g_.v22;
  v9 = game_8450e0(v8, v6, v7);
  return GameRoutine_844950((__int64)v9, (__int64)&g_.v16);
}

#pragma GCC visibility pop
