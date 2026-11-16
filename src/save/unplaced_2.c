#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_SendLightMessageQueue(__int64, unsigned __int64);
extern __int64 (*GameData_21093b8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* save_18d3a00(__int64 a1);

_QWORD* save_18d3a00(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
    char gap40_[8];
    _QWORD v8[4];
    _QWORD* v9;
  } f_;

  f_.v6[0] = GameData_21093b8;
  f_.v6[1] = a1;
  f_.v7 = f_.v6;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  f_.v8[0] = GameData_21093b8;
  f_.v8[1] = a1;
  f_.v9 = f_.v8;
  GameRoutine_654050(f_.v8, v2);
  if (f_.v9 == f_.v8) {
    v3 = 32;
  }
  else {
    if (f_.v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*f_.v9 + v3))((__int64)f_.v9);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue(a1 + 488, (unsigned __int64)v2);
  result = f_.v7;
  if (f_.v7 == f_.v6) {
    v5 = 32;
  }
  else {
    if (f_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*f_.v7 + v5))((__int64)f_.v7);
}

#pragma GCC visibility pop
