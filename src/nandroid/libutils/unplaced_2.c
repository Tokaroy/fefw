#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN SdkData_f4fd58;
extern _UNKNOWN SdkData_f53da4;
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e6cad8[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6cb18)();
extern __int64 SdkData_f4fd50;
extern __int64 SdkData_f53d88;
extern __int64 SdkData_f53da8;
extern __int64 SdkData_f53db0;
extern __int64 SdkData_f53dc0;
extern __int64 nn_nfc_client_g_SystemInterface;
extern int SdkData_f53da0;
extern int SdkData_f53dc8;
__int64 nandroid_libutils_57e050(void* this_);

__int64 nandroid_libutils_57e050(void* this_)
{
  __int64 v1;
  unsigned int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v11;
  unsigned int v12;
  __int64* v13;

  nn_sf_hipc_InitializeHipcServiceResolution_plt(this_);
  v12 = 0;
  v1 = nn_sf_hipc_ConnectToHipcService_plt(&v12, "nfc:sys");
  if ((_DWORD)v1 != 0 ||
      (v2 = v12, LODWORD(v13) = 0,
       (_DWORD)(v1 =
                    nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                        &SdkData_f53d88, &v13, v12)) != 0)) {
    v11 = v1;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v1);
    LODWORD(v13) = v11;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v3 = (int)v13;
  nn_os_LockMutex_plt(&SdkData_f4fd58);
  v4 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f4fd50, 48);
  nn_os_UnlockMutex_plt(&SdkData_f4fd58);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 16) = &SdkData_f53d88;
    *(_DWORD*)(v4 + 24) = v3;
    *(_DWORD*)(v4 + 28) = 0;
    *(_DWORD*)(v4 + 40) = 1;
    *(_BYTE*)(v4 + 8) = 1;
    *(_QWORD*)v4 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e6cad8;
    *(_QWORD*)(v4 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6cb18;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f53da0);
  v5 = SdkData_f53da8;
  v6 = SdkData_f53db0;
  SdkData_f53db0 = *(_QWORD*)(SdkData_f53db0 + 8);
  *(_QWORD*)(v6 + 8) = SdkData_f53da8;
  SdkData_f53da8 = v6;
  *(_DWORD*)v6 = v2;
  if (v5 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_f53da4);
  }
  v7 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f53da0);
  ++HIDWORD(SdkData_f53dc0);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v7);
  v8 = nn_os_SdkMutexType_Lock_plt(&SdkData_f53dc8);
  if ((int)SdkData_f53dc0 <= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  v9 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f53d88, 5);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f53dc8);
  LODWORD(v13) = v9;
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v13 = &nn_nfc_client_g_SystemInterface;
  LODWORD(v13) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v4 + 32LL))(v4, &v13);
  if ((_DWORD)v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
}

#pragma GCC visibility pop
