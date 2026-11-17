#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
extern __int64 GameData_21c9608;
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___functional_fa82e0(__int64 a1, __int64* a2);

void llvm_libcxx_21_libcxx_include___functional_fa82e0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  struct __attribute__((packed)) {
    __int128 v11;
    __int64 v12;
  } g_;

  LocatorDispos_db1e20((void*)((__int64*)&g_.v11), a2);
  v3 = GameData_21c9608 + 48;
  if ((*(_BYTE*)(GameData_21c9608 + 48) & 1) != 0) {
    v4 = *(_QWORD*)(GameData_21c9608 + 64);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  *(_OWORD*)v3 = g_.v11;
  *(_QWORD*)(v3 + 16) = g_.v12;
  LocatorDispos_db1f30((void*)((__int64*)&g_.v11), (unsigned __int8*)a2);
  if (*(_BYTE*)(GameData_21c9608 + 40) != 0) {
    v6 = GameData_21c9608 + 48;
  }
  else {
    v6 = 0;
  }
  v8 = *(_BYTE*)(v6 + 24);
  v7 = v6 + 24;
  if ((v8 & 1) != 0) {
    v9 = *(_QWORD*)(GameData_21c9608 + 88);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
    }
  }
  *(_OWORD*)v7 = g_.v11;
  *(_QWORD*)(v7 + 16) = g_.v12;
}

#pragma GCC visibility pop
