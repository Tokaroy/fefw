#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c9568();
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_SleepThread_plt(_QWORD);
__attribute__((swiftcall)) void nn_am_1c94cc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nn_am_1c95d8(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void nn_am_1c94cc(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64* v6;

  v2 = SdkRoutine_1c9568();
  *a1 = 0;
  v6 = a1;
  v3 = v2;
  for (result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 96LL))(
           v2, (__int64)&v6);
       ; result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 96LL))(
             v3, (__int64)&v6)) {
    v5 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v5);
    }
    if (*a1 != 0) {
      break;
    }
    nn_os_SleepThread_plt(100000000);
    if (*a1 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*a1 + 8LL))(*a1);
    }
    *a1 = 0;
    v6 = a1;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nn_am_1c95d8(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;
  _QWORD* v7;

  v3 = SdkRoutine_1c9568();
  *a1 = 0;
  v7 = a1;
  v4 = v3;
  for (result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 128LL))(
           v3, (__int64)&v7);
       ; result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 128LL))(
             v4, (__int64)&v7)) {
    v6 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v6);
    }
    if (*a1 != 0) {
      break;
    }
    nn_os_SleepThread_plt(100000000);
    v7 = a1;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
