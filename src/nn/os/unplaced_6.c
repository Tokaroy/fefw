#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_168420(_QWORD*, _QWORD*, _DWORD*, char, __int64,
                          unsigned int, __int64, __int64, int);
__int64 SdkRoutine_1a5550(void);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_16de50(__int64, _DWORD*, __int64, __int64, __int64, __int64,
                     unsigned int);
__int64 nn_os_detail_InternalCriticalSection_Enter_plt(void* this_);
__int64 nn_os_detail_InternalCriticalSection_Leave_plt(void* this_);
__int64 nn_os_168280(__int64 a1, _QWORD* a2, _DWORD* a3, char a4, __int64 a5,
                     unsigned int a6, __int64 a7, __int64 a8, int a9);
__int64 nn_os_169290(__int64 result);
atomic_uint* nn_os_16cb80(atomic_uint* result);
atomic_uint* nn_os_16cc50(atomic_uint* result);

__int64 nn_os_168280(__int64 a1, _QWORD* a2, _DWORD* a3, char a4, __int64 a5,
                     unsigned int a6, __int64 a7, __int64 a8, int a9)
{
  unsigned __int64 StatusReg;
  __int64 v10;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v30;
  __int64 v31;

  *(_QWORD*)(a1 + 16) = 0;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  v10 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 36) = *(_DWORD*)(*(_QWORD*)(StatusReg + 504) + 432LL);
  v18 = (_DWORD*)(a1 + 36);
  if (v10 == a1) {
    v19 = 0;
  }
  else {
    v19 = 0;
    do {
      v21 = *(_QWORD*)(v10 - 8);
      v20 = v10 - 8;
      if ((*(unsigned int (**)(__int64))(v21 + 8))(v20) == 1 && v19 == 0) {
        v19 = v20;
      }
      v10 = *(_QWORD*)(v20 + 16);
    } while (v10 != a1);
  }
  nn_os_detail_InternalCriticalSection_Enter_plt((void*)(a1 + 32));
  if (*(_QWORD*)(a1 + 16) != 0) {
    v19 = *(_QWORD*)(a1 + 16);
  }
  v31 = v19;
  nn_os_detail_InternalCriticalSection_Leave_plt((void*)(a1 + 32));
  if (v19 != 0) {
    if (a6 != 0) {
      v30 = 0;
      a6 = nn_os_16de50((__int64)v18, &v30, 0, 0, 0, 0, a6);
      if (a6 != 0) {
        v31 = 0;
      }
    }
    v23 = *(_QWORD*)(a1 + 8);
  }
  else {
    v24 = SdkRoutine_168420((_QWORD*)a1, &v31, a3, a4 & 1, a5, a6, a7, a8, a9);
    v23 = *(_QWORD*)(a1 + 8);
    a6 = v24;
  }
  while (v23 != a1) {
    v26 = *(_QWORD*)(v23 - 8);
    v25 = v23 - 8;
    (*(void (**)(__int64))(v26 + 16))(v25);
    v23 = *(_QWORD*)(v25 + 16);
  }
  v27 = v31;
  *v18 = 0;
  *a2 = v27;
  return a6;
}

__int64 nn_os_169290(__int64 result)
{
  int v1;

  if (result == 0) {
    return *(_QWORD*)(*(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 504) +
                      120LL);
  }
  v1 = *(unsigned __int8*)(result + 32);
  if (v1 != 1) {
    if (v1 != 2) {
      if (v1 == 4) {
        nn_diag_detail_AbortImpl_plt_856170(result);
      }
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  return result;
}

atomic_uint* nn_os_16cb80(atomic_uint* result)
{
  unsigned __int64 StatusReg;
  atomic_uint* v2;
  __int16 v3;
  __int16 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  v2 = result;
  v3 = *(_WORD*)(StatusReg + 256);
  v4 = v3 + 1;
  if (v3 != 0) {
    while (1) {
      *(_WORD*)(StatusReg + 256) = v4;
      v5 = *(_DWORD*)result;
      if (BYTE2(v5) == HIBYTE(v5)) {
        v6 = *(_DWORD*)result;
        atomic_compare_exchange_strong_explicit(
            result, &v6, v5 + 1, memory_order_acquire, memory_order_acquire);
        if (v6 == v5) {
          break;
        }
      }
      *(_WORD*)(StatusReg + 256) = v3;
    }
  }
  else {
    while (1) {
      *(_WORD*)(StatusReg + 256) = v4;
      v7 = *(_DWORD*)v2;
      if (BYTE2(v7) == HIBYTE(v7)) {
        v8 = *(_DWORD*)v2;
        atomic_compare_exchange_strong_explicit(
            v2, &v8, v7 + 1, memory_order_acquire, memory_order_acquire);
        if (v8 == v7) {
          break;
        }
      }
      *(_WORD*)(StatusReg + 256) = 0;
      if (*(_WORD*)(StatusReg + 258) != 0) {
        result = (atomic_uint*)SdkRoutine_1a5550();
      }
    }
  }
  return result;
}

atomic_uint* nn_os_16cc50(atomic_uint* result)
{
  unsigned __int64 StatusReg;
  int v2;

  atomic_fetch_add_explicit(result, 0xFFFFFFFF, memory_order_release);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  v2 = *(unsigned __int16*)(StatusReg + 256) - 1;
  *(_WORD*)(StatusReg + 256) = v2;
  if (v2 == 0 && *(_WORD*)(StatusReg + 258) != 0) {
    return (atomic_uint*)SdkRoutine_1a5550();
  }
  return result;
}

#pragma GCC visibility pop
