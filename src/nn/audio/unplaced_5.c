#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
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
extern _UNKNOWN SdkData_f17e98;
extern _UNKNOWN SdkData_f17ec0;
extern _UNKNOWN SdkData_f1bec0;
extern _UNKNOWN SdkData_f1bed0;
extern __int64 (*SdkData_e5dcf8)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e5dc98[])();
extern __int64 SdkData_f17e90;
extern __int64 SdkData_f1bec8;
__attribute__((swiftcall)) void nn_audio_234940(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void nn_audio_234940(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  void (***v3)(_QWORD);
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  int v11;
  int v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f1bed0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f1bed0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f1bed0);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f1bec0);
  v3 = (void (***)(_QWORD))SdkData_f1bec8;
  if (SdkData_f1bec8 != 0) {
    *a1 = SdkData_f1bec8;
  LABEL_10:
    (**v3)(v3);
    {
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f1bec0);
      return;
    }
  }
  SdkData_f17e90 = nn_lmem_CreateExpHeap_plt(&SdkData_f17ec0, 0x4000, 0);
  v4 = nn_os_InitializeMutex_plt(&SdkData_f17e98, 0, 0);
  v12 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v12, "audren:u");
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 != 0) {
    v11 = v6;
    nn_diag_detail_AbortImpl_plt_858db0(&v11);
  }
  v7 = v12;
  nn_os_LockMutex_plt(&SdkData_f17e98);
  v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f17e90, 32);
  nn_os_UnlockMutex_plt(&SdkData_f17e98);
  v3 = (void (***)(_QWORD))v8;
  if (v8 != 0) {
    *(_DWORD*)(v8 + 24) = 1;
    *(_DWORD*)(v8 + 8) = 1;
    *(_DWORD*)(v8 + 12) = v7;
    *(_QWORD*)v8 = nn_aoc_detail_AddProxyReference_ptr_e5dc98;
    *(_QWORD*)(v8 + 16) = &SdkData_e5dcf8;
  }
  v9 = (_QWORD*)SdkData_f1bec8;
  SdkData_f1bec8 = v8;
  if (v9 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v9 + 8LL))(
        (void*)(v9), v9);
    v3 = (void (***)(_QWORD))SdkData_f1bec8;
  }
  *a1 = v3;
  if (v3 != nullptr) {
    goto LABEL_10;
  }
  {
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f1bec0);
    return;
  }
}

#pragma GCC visibility pop
