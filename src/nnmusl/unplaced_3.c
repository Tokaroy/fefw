#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_ea1838;
extern _UNKNOWN SdkData_eadd68;
extern _UNKNOWN SdkData_eadd90;
extern __int64 (*SdkData_e4cfe0)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e4cfa0[])();
extern __int64 SdkData_eadd58;
extern __int64 SdkData_eadd60;
extern char SdkData_eadd50;
__int64 nnmusl_b8170(void* this_, void* a2);

__int64 nnmusl_b8170(void* this_, void* a2)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  _QWORD v10[2];
  int v11;

  nn_os_LockMutex_plt(&SdkData_ea1838);
  if ((SdkData_eadd50 & 1) == 0) {
    SdkData_eadd60 = nn_lmem_CreateExpHeap_plt(&SdkData_eadd90, 1024, 0);
    v4 = nn_os_InitializeMutex_plt(&SdkData_eadd68, 0, 0);
    LODWORD(v10[0]) = 0;
    nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
    v5 = nn_sf_hipc_ConnectToHipcService_plt(v10, "csrng");
    nn_sf_hipc_FinalizeHipcServiceResolution_plt();
    if (v5 != 0) {
      LODWORD(v10[0]) = v5;
      nn_diag_detail_AbortImpl_plt_858db0(v10);
    }
    v6 = v10[0];
    nn_os_LockMutex_plt(&SdkData_eadd68);
    v7 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_eadd60, 32);
    nn_os_UnlockMutex_plt(&SdkData_eadd68);
    if (v7 != 0) {
      *(_DWORD*)(v7 + 24) = 1;
      *(_DWORD*)(v7 + 8) = 1;
      *(_DWORD*)(v7 + 12) = v6;
      *(_QWORD*)v7 = nn_aoc_detail_AddProxyReference_ptr_e4cfa0;
      *(_QWORD*)(v7 + 16) = &SdkData_e4cfe0;
    }
    v8 = SdkData_eadd58;
    SdkData_eadd58 = v7;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
    SdkData_eadd50 = 1;
  }
  nn_os_UnlockMutex_plt(&SdkData_ea1838);
  v10[0] = this_;
  v10[1] = a2;
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)SdkData_eadd58 + 32LL))(
      SdkData_eadd58, v10);
  v11 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v11);
  }
  return result;
}

#pragma GCC visibility pop
