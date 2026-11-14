#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a3040();
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_f65e60;
extern _UNKNOWN SdkData_f65e78;
extern __int64 (*SdkData_e6ede0)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e6ed60[])();
extern __int64 SdkData_f65e70;
__attribute__((swiftcall)) void nn_pl_5a2f50(PSEUDO_X8 x8_, void* this_);

__attribute__((swiftcall)) void nn_pl_5a2f50(PSEUDO_X8 x8_, void* this_)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 result;
  int v8;
  int v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f65e60,
                            memory_order_acquire) &
       1) == 0) {
    this_ = (void*)__cxa_guard_acquire_plt(&SdkData_f65e60);
    if ((_DWORD)this_ != 0) {
      SdkRoutine_5a3040();
      this_ = (void*)__cxa_guard_release_plt(&SdkData_f65e60);
    }
  }
  *a2 = 0;
  v9 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(this_);
  v3 = nn_sf_hipc_ConnectToHipcService_plt(&v9, "pl:s");
  v4 = v3;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
  if (v4 != 0) {
    v8 = v4;
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  v5 = v9;
  nn_os_LockMutex_plt(&SdkData_f65e78);
  v6 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f65e70, 32);
  result = nn_os_UnlockMutex_plt(&SdkData_f65e78);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 24) = 1;
    *(_DWORD*)(v6 + 8) = 1;
    *(_DWORD*)(v6 + 12) = v5;
    *(_QWORD*)v6 = nn_aoc_detail_AddProxyReference_ptr_e6ed60;
    *(_QWORD*)(v6 + 16) = &SdkData_e6ede0;
  }
  *a2 = v6;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
