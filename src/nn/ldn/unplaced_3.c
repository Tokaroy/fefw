#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_1051408;
extern _UNKNOWN SdkData_1051430;
extern _UNKNOWN SdkData_1055434;
extern __int64 (*SdkData_e7d118)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e7d0d8[])();
extern __int64 SdkData_1051400;
extern char SdkData_1055430;
__attribute__((swiftcall)) void nn_ldn_75ff40(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void nn_ldn_75ff40(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  int v10;
  int v11;

  v3 = nn_os_SdkMutexType_Lock_plt(&SdkData_1055434);
  v4 = SdkData_1055430;
  *a1 = 0;
  if ((v4 & 1) == 0) {
    SdkData_1055430 = 1;
    SdkData_1051400 = nn_lmem_CreateExpHeap_plt(&SdkData_1051430, 0x4000, 0);
    v3 = nn_os_InitializeMutex_plt(&SdkData_1051408, 0, 0);
  }
  v11 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v3);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v11, "ldn:m");
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 != 0) {
    v10 = v6;
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  v7 = v11;
  nn_os_LockMutex_plt(&SdkData_1051408);
  v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_1051400, 32);
  nn_os_UnlockMutex_plt(&SdkData_1051408);
  if (v8 != 0) {
    *(_DWORD*)(v8 + 24) = 1;
    *(_DWORD*)(v8 + 8) = 1;
    *(_DWORD*)(v8 + 12) = v7;
    *(_QWORD*)v8 = nn_aoc_detail_AddProxyReference_ptr_e7d0d8;
    *(_QWORD*)(v8 + 16) = &SdkData_e7d118;
  }
  *a1 = v8;
  {
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1055434);
    return;
  }
}

#pragma GCC visibility pop
