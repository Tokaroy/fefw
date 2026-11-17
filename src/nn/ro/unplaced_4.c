#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(__int64, unsigned __int64);
__int64 nn_lmem_CreateExpHeap_plt(__int64, unsigned __int64, int);
__int64 nn_os_16cb60(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_GetCurrentProcessHandle_plt(__int64);
__int64 nn_os_InitializeMutex_plt(__int64, bool, int);
__int64 nn_os_InitializeReaderWriterLock_plt(__int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nn_sf_hipc_ConnectToHipcService_plt(__int64, const char*);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(__int64);
extern _UNKNOWN SdkData_eb80a0;
extern _UNKNOWN SdkData_eb80d8;
extern _UNKNOWN SdkData_eb8100;
extern __int64 (*SdkData_e52218)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e521b0[])();
extern __int64 SdkData_e86f98;
extern __int64 SdkData_e86fa0;
extern __int64 SdkData_eb8098;
extern __int64 SdkData_eb80d0;
extern char nn_ro_detail_g_RuntimeState;
extern void (*SdkData_e86fa8[258])();
__int64 nn_ro_173fc0(void* this_, const char* a2);

__int64 nn_ro_173fc0(void* this_, const char* a2)
{
  unsigned __int8 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  struct {
    unsigned int v12;
    char v13;
  } v12_;

  v3 = atomic_load((unsigned __int8*)&nn_ro_detail_g_RuntimeState);
  if ((v3 & 1) == 0) {
    nn_os_InitializeReaderWriterLock_plt((__int64)&SdkData_eb80a0);
    nn_os_16cb60(SdkData_e86f98);
    __builtin_arm_dmb(0xBu);
    atomic_store(1u, (unsigned __int8*)&nn_ro_detail_g_RuntimeState);
    **(_QWORD**)SdkData_e86fa8[0] = SdkData_e86fa0;
  }
  SdkData_eb80d0 =
      nn_lmem_CreateExpHeap_plt((__int64)&SdkData_eb8100, 0x400u, 0);
  v4 = nn_os_InitializeMutex_plt((__int64)&SdkData_eb80d8, false, 0);
  v12_.v12 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
  v5 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v12_.v12,
                                           (const char*)this_);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
  if (v5 != 0) {
  LABEL_14:
    v12_.v12 = v5;
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v12_.v12);
  }
  v6 = v12_.v12;
  nn_os_LockMutex_plt((__int64)&SdkData_eb80d8);
  v7 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_eb80d0, 0x20u);
  nn_os_UnlockMutex_plt((__int64)&SdkData_eb80d8);
  if (v7 != 0) {
    *(_DWORD*)(v7 + 24) = 1;
    *(_DWORD*)(v7 + 8) = 1;
    *(_DWORD*)(v7 + 12) = v6;
    *(_QWORD*)v7 = nn_aoc_detail_AddProxyReference_ptr_e521b0;
    *(_QWORD*)(v7 + 16) = &SdkData_e52218;
  }
  v8 = SdkData_eb8098;
  SdkData_eb8098 = v7;
  if (v8 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    v7 = SdkData_eb8098;
  }
  v12_.v12 = nn_os_GetCurrentProcessHandle_plt(v8);
  v12_.v13 = 0;
  result = (*(__int64 (**)(__int64, _QWORD, unsigned int*))(
      *(_QWORD*)v7 + 64LL))(v7, 0, &v12_.v12);
  v5 = result;
  if (v12_.v13 == 1) {
    result = nn_os_CloseNativeHandle_plt(v12_.v12);
  }
  if (v5 != 0) {
    v10 = SdkData_eb8098;
    SdkData_eb8098 = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
      v11 = SdkData_eb8098;
      SdkData_eb8098 = 0;
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      }
    }
    goto LABEL_14;
  }
  return result;
}

#pragma GCC visibility pop
