#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 cmif_client_struct_message_5a3820();
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
extern _UNKNOWN SdkData_f53ed8;
extern _UNKNOWN SdkData_f57f24;
extern _UNKNOWN SdkData_f5c1e8;
extern _UNKNOWN SdkData_f60234;
extern _UNKNOWN SdkData_f662a0;
extern _UNKNOWN SdkData_f662b8;
extern __int64 (*SdkData_e6ef38)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e6eea8[])();
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e6cda8[])();
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e6d3c8[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6cde8)();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6d408)();
extern __int64 SdkData_f53ed0;
extern __int64 SdkData_f57f08;
extern __int64 SdkData_f57f28;
extern __int64 SdkData_f57f30;
extern __int64 SdkData_f57f40;
extern __int64 SdkData_f5c1e0;
extern __int64 SdkData_f60210;
extern __int64 SdkData_f60218;
extern __int64 SdkData_f60238;
extern __int64 SdkData_f60240;
extern __int64 SdkData_f60250;
extern __int64 SdkData_f662b0;
extern __int64 nn_nfc_client_g_UserInterface;
extern int SdkData_f57f20;
extern int SdkData_f57f48;
extern int SdkData_f60230;
extern int SdkData_f60258;
__int64 nn_sf_cmif_client_57f570(void* this_);
__int64 nn_sf_cmif_client_584d80(void* this_);
__attribute__((swiftcall)) void nn_sf_cmif_client_5a3730(PSEUDO_X8 x8_,
                                                         void* this_);

__int64 nn_sf_cmif_client_57f570(void* this_)
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
  v1 = nn_sf_hipc_ConnectToHipcService_plt(&v12, "nfc:user");
  if ((_DWORD)v1 != 0 ||
      (v2 = v12, LODWORD(v13) = 0,
       (_DWORD)(v1 =
                    nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                        &SdkData_f57f08, &v13, v12)) != 0)) {
    v11 = v1;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v1);
    LODWORD(v13) = v11;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v3 = (int)v13;
  nn_os_LockMutex_plt(&SdkData_f53ed8);
  v4 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f53ed0, 48);
  nn_os_UnlockMutex_plt(&SdkData_f53ed8);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 16) = &SdkData_f57f08;
    *(_DWORD*)(v4 + 24) = v3;
    *(_DWORD*)(v4 + 28) = 0;
    *(_DWORD*)(v4 + 40) = 1;
    *(_BYTE*)(v4 + 8) = 1;
    *(_QWORD*)v4 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e6cda8;
    *(_QWORD*)(v4 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6cde8;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f57f20);
  v5 = SdkData_f57f28;
  v6 = SdkData_f57f30;
  SdkData_f57f30 = *(_QWORD*)(SdkData_f57f30 + 8);
  *(_QWORD*)(v6 + 8) = SdkData_f57f28;
  SdkData_f57f28 = v6;
  *(_DWORD*)v6 = v2;
  if (v5 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_f57f24);
  }
  v7 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f57f20);
  ++HIDWORD(SdkData_f57f40);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v7);
  v8 = nn_os_SdkMutexType_Lock_plt(&SdkData_f57f48);
  if ((int)SdkData_f57f40 <= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  v9 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f57f08, 5);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f57f48);
  LODWORD(v13) = v9;
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v13 = &nn_nfc_client_g_UserInterface;
  LODWORD(v13) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v4 + 32LL))(v4, &v13);
  if ((_DWORD)v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
}

__int64 nn_sf_cmif_client_584d80(void* this_)
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
  v1 = nn_sf_hipc_ConnectToHipcService_plt(&v12, "nfp:sys");
  if ((_DWORD)v1 != 0 ||
      (v2 = v12, LODWORD(v13) = 0,
       (_DWORD)(v1 =
                    nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                        &SdkData_f60218, &v13, v12)) != 0)) {
    v11 = v1;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v1);
    LODWORD(v13) = v11;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v3 = (int)v13;
  nn_os_LockMutex_plt(&SdkData_f5c1e8);
  v4 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f5c1e0, 48);
  nn_os_UnlockMutex_plt(&SdkData_f5c1e8);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 16) = &SdkData_f60218;
    *(_DWORD*)(v4 + 24) = v3;
    *(_DWORD*)(v4 + 28) = 0;
    *(_DWORD*)(v4 + 40) = 1;
    *(_BYTE*)(v4 + 8) = 1;
    *(_QWORD*)v4 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e6d3c8;
    *(_QWORD*)(v4 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e6d408;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f60230);
  v5 = SdkData_f60238;
  v6 = SdkData_f60240;
  SdkData_f60240 = *(_QWORD*)(SdkData_f60240 + 8);
  *(_QWORD*)(v6 + 8) = SdkData_f60238;
  SdkData_f60238 = v6;
  *(_DWORD*)v6 = v2;
  if (v5 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_f60234);
  }
  v7 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f60230);
  ++HIDWORD(SdkData_f60250);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v7);
  v8 = nn_os_SdkMutexType_Lock_plt(&SdkData_f60258);
  if ((int)SdkData_f60250 <= 3) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  v9 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f60218, 4);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f60258);
  LODWORD(v13) = v9;
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v13 = &SdkData_f60210;
  LODWORD(v13) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v4 + 32LL))(v4, &v13);
  if ((_DWORD)v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
}

__attribute__((swiftcall)) void nn_sf_cmif_client_5a3730(PSEUDO_X8 x8_,
                                                         void* this_)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 result;
  int v8;
  int v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f662a0,
                            memory_order_acquire) &
       1) == 0) {
    this_ = (void*)__cxa_guard_acquire_plt(&SdkData_f662a0);
    if ((_DWORD)this_ != 0) {
      cmif_client_struct_message_5a3820();
      this_ = (void*)__cxa_guard_release_plt(&SdkData_f662a0);
    }
  }
  *a2 = 0;
  v9 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(this_);
  v3 = nn_sf_hipc_ConnectToHipcService_plt(&v9, "pl:u");
  v4 = v3;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
  if (v4 != 0) {
    v8 = v4;
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  v5 = v9;
  nn_os_LockMutex_plt(&SdkData_f662b8);
  v6 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f662b0, 32);
  result = nn_os_UnlockMutex_plt(&SdkData_f662b8);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 24) = 1;
    *(_DWORD*)(v6 + 8) = 1;
    *(_DWORD*)(v6 + 12) = v5;
    *(_QWORD*)v6 = nn_aoc_detail_AddProxyReference_ptr_e6eea8;
    *(_QWORD*)(v6 + 16) = &SdkData_e6ef38;
  }
  *a2 = v6;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
