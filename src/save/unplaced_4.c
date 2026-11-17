#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_SendLightMessageQueue(__int64, unsigned __int64);
extern __int64 (*GameData_2109738[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 save_18d4220(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 save_18d4220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v9[2] = a2;
  v9[3] = a3;
  v9[4] = a4;
  *v9 = GameData_2109738;
  v9[1] = a1;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 48, 16, 0);
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v11 = *v8;
  v10[4] = 0;
  v10[5] = 0;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 40, 16, 0);
  v13 = v9[1];
  v14 = v9[2];
  v19_.v20 = v12;
  *v12 = GameData_2109738;
  v12[1] = v13;
  v15 = v9[3];
  v16 = v9[4];
  v12[2] = v14;
  v12[3] = v15;
  v12[4] = v16;
  GameRoutine_654050(v19_.v19, v10);
  if (v19_.v20 == v19_.v19) {
    v17 = 32;
    goto LABEL_5;
  }
  if (v19_.v20 != nullptr) {
    v17 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v19_.v20 + v17))((__int64)v19_.v20);
  }
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue(a1 + 488, (unsigned __int64)v10);
  return (*(__int64 (**)(__int64))(*v9 + 40LL))((__int64)v9);
}

#pragma GCC visibility pop
