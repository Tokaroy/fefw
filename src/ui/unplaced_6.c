#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Layout_1364900(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_9be300(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_202f148[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void ui_1364230(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2);

__attribute__((swiftcall)) void ui_1364230(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  _QWORD v14[2];
  char v15;
  _QWORD* v16;

  if (a2 != 0 && *(_QWORD*)(a2 + 56) != 0) {
    v4 = result;
    v14[0] = *(_QWORD*)(a2 + 48);
    v14[1] = strlen(v14[0]);
    v16 = v14;
    v6 = Layout_1364900(v4 + 2384, v14, std___1_piecewise_construct_ptr, &v16,
                        &v15);
    v7 = *(_QWORD*)(v6 + 40);
    *a3 = 0;
    a3[1] = 0;
    if (v7 != 0) {
      result = std___1___shared_weak_count_lock(v7);
      a3[1] = result;
      if (result != 0) {
        v8 = *(_QWORD*)(v6 + 32);
        *a3 = v8;
        if (v8 != 0) {
          result;
          return;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v9 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         72, 16, 0);
    *(_QWORD*)(v10 + 24) = 0;
    v11 = v10 + 24;
    v12 = v10;
    *(_QWORD*)(v10 + 16) = 0;
    v13 = (atomic_ullong*)(v10 + 16);
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)v10 = GameData_202f148;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_DWORD*)(v10 + 56) = 1065353216;
    game_9be300(v10 + 24, a2);
    *a3 = v11;
    a3[1] = v12;
    atomic_fetch_add_explicit(v13, 1u, memory_order_relaxed);
    result = *(_QWORD*)(v6 + 40);
    *(_QWORD*)(v6 + 32) = v11;
    *(_QWORD*)(v6 + 40) = v12;
    if (result != 0) {
      std___1___shared_weak_count___release_weak(result);
      return;
    }
  }
  else {
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
