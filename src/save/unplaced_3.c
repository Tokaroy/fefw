#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_SendLightMessageQueue(__int64, unsigned __int64);
extern __int64 (*GameData_2109938[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 save_18d4880(__int64 a1, __int64 a2);

__int64 save_18d4880(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  _BYTE* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
    char gap56_[8];
    __int64 v19;
  } v17_;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;

  v17_.v19 = a1;
  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v20_.v21 = v20_.v20;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3,
                                                            (__int64)v20_.v20);
      v5 = v17_.v19;
      v4 = v20_.v21;
    }
    else {
      v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      v20_.v21 = v4;
      v5 = a1;
    }
    if (v4 != nullptr) {
      if (v4 == v20_.v20) {
        v17_.v18 = v17_.v17;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(
            (__int64)v4, (__int64)v17_.v17);
        v6 = v17_.v18;
      }
      else {
        v6 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(
            (__int64)v4);
        v17_.v18 = v6;
      }
      goto LABEL_10;
    }
  }
  else {
    v20_.v21 = nullptr;
    v5 = a1;
  }
  v6 = nullptr;
  v17_.v18 = nullptr;
LABEL_10:
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v9 = (__int64)v8;
  v8[2] = v5;
  *v8 = GameData_2109938;
  if (v6 != nullptr) {
    if (v6 == v17_.v17) {
      v8[8] = v8 + 4;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))((__int64)v6,
                                                            (__int64)(v8 + 4));
    }
    else {
      v8[8] = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))((__int64)v6);
    }
  }
  else {
    v8[8] = 0;
  }
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 48, 16, 0);
  v11 = *(_QWORD*)v9;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v12 = v10;
  v10[4] = 0;
  v10[5] = 0;
  v22_.v23 = (_QWORD*)(*(__int64 (**)(__int64))(v11 + 16))(v9);
  GameRoutine_654050(v22_.v22, v12);
  if (v22_.v23 == v22_.v22) {
    v13 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_20;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v13))((__int64)v22_.v23);
LABEL_20:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue(a1 + 488, (unsigned __int64)v12);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
  if (v17_.v18 == v17_.v17) {
    v14 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_25;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17_.v18 + v14))((__int64)v17_.v18);
LABEL_25:
  result = (__int64)v20_.v21;
  if (v20_.v21 == v20_.v20) {
    v16 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v20_.v21 + v16))(
      (__int64)v20_.v21);
}

#pragma GCC visibility pop
