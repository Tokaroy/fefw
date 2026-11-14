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
__int64 nn_sf_hipc_client_DuplicateSessionEx_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(_QWORD);
__int64 strcmp_plt(void* this_, const char*);
extern _UNKNOWN SdkData_eb8cb8;
extern _UNKNOWN SdkData_eb8cd0;
extern _UNKNOWN SdkData_eb8cd4;
extern _UNKNOWN SdkData_eb8cf8;
extern _UNKNOWN SdkData_eb8ec8;
extern __int64 (*SdkData_e52cd8)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr_e52b30[])();
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e52da0[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e52f48)();
extern __int64 SdkData_eb8cd8;
extern __int64 SdkData_eb8ce0;
extern __int64 SdkData_eb8ec0;
extern int SdkData_eb8cf0;
extern int SdkData_eb8cf4;
__int64 nn_socket_detail_194840(__int64* a1, void* a2);
__attribute__((swiftcall)) void nn_socket_detail_1949e0(PSEUDO_X8 x8_,
                                                        void* this_, void* a2);

__int64 nn_socket_detail_194840(__int64* a1, void* a2)
{
  __int64 v4;
  int v5;
  __int64 result;
  int v7;
  __int64 v8;
  __int64 v10;
  __int64 (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;

  v16 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v4 = nn_sf_hipc_ConnectToHipcService_plt(&v16, a2);
  v5 = v4;
  result = nn_sf_hipc_FinalizeHipcServiceResolution_plt(v4);
  if (v5 != 0) {
    *a1 = 0;
    return result;
  }
  v7 = v16;
  nn_os_LockMutex_plt(&SdkData_eb8ec8);
  v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_eb8ec0, 32);
  nn_os_UnlockMutex_plt(&SdkData_eb8ec8);
  if (v8 == 0) {
    result = strcmp_plt(a2, "bsd:s");
    if ((_DWORD)result == 0) {
      goto LABEL_8;
    }
  LABEL_7:
    *a1 = v8;
    return result;
  }
  *(_DWORD*)(v8 + 24) = 1;
  *(_DWORD*)(v8 + 8) = 1;
  *(_DWORD*)(v8 + 12) = v7;
  *(_QWORD*)v8 = nn_aoc_detail_AddProxyReference_ptr_e52b30;
  *(_QWORD*)(v8 + 16) = &SdkData_e52cd8;
  result = strcmp_plt(a2, "bsd:s");
  if ((_DWORD)result != 0) {
    goto LABEL_7;
  }
  nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(v8 + 24);
LABEL_8:
  v10 = *(_QWORD*)v8;
  v17 = 0;
  v11 = (__int64 (***)(_QWORD))(*(__int64 (**)(__int64))(v10 + 16))(v8);
  v12 = (**v11)(v11);
  if ((unsigned int)nn_sf_hipc_client_DuplicateSessionEx_plt(
          &v17, *(unsigned int*)(v12 + 4), 1) != 0) {
    v13 = 0;
  }
  else {
    v14 = v17;
    nn_os_LockMutex_plt(&SdkData_eb8ec8);
    v13 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_eb8ec0, 32);
    nn_os_UnlockMutex_plt(&SdkData_eb8ec8);
    if (v13 != 0) {
      *(_DWORD*)(v13 + 24) = 1;
      *(_DWORD*)(v13 + 8) = 1;
      *(_DWORD*)(v13 + 12) = v14;
      *(_QWORD*)v13 = nn_aoc_detail_AddProxyReference_ptr_e52b30;
      *(_QWORD*)(v13 + 16) = &SdkData_e52cd8;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  v15 = *(_QWORD*)v8;
  *a1 = v13;
  return (*(__int64 (**)(__int64))(v15 + 8))(v8);
}

__attribute__((swiftcall)) void nn_socket_detail_1949e0(PSEUDO_X8 x8_,
                                                        void* this_, void* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v4;
  __int64 v6;
  __int64 (***v7)(_QWORD);
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (***v14)(_QWORD);
  __int64 v15;
  int v16;
  __int64 v18;
  int v19;

  v4 = (int)this_;
  nn_socket_detail_194840(&v18, a2);
  v6 = v18;
  v7 = (__int64 (***)(_QWORD))(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(
      v18);
  v8 = *(unsigned int*)((**v7)(v7) + 4);
  *a3 = 0;
  v19 = 0;
  v9 = nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
      &SdkData_eb8cb8, &v19, v8);
  if (v9 != 0) {
    v19 = v9;
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
  }
  v10 = v19;
  nn_os_LockMutex_plt(&SdkData_eb8ec8);
  v11 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_eb8ec0, 48);
  nn_os_UnlockMutex_plt(&SdkData_eb8ec8);
  if (v11 != 0) {
    *(_QWORD*)(v11 + 16) = &SdkData_eb8cb8;
    *(_DWORD*)(v11 + 24) = v10;
    *(_DWORD*)(v11 + 28) = 0;
    *(_DWORD*)(v11 + 40) = 1;
    *(_BYTE*)(v11 + 8) = 1;
    *(_QWORD*)v11 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e52da0;
    *(_QWORD*)(v11 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e52f48;
  }
  *a3 = v11;
  nn_os_SdkMutexType_Lock_plt(&SdkData_eb8cd0);
  v12 = SdkData_eb8cd8;
  v13 = SdkData_eb8ce0;
  SdkData_eb8ce0 = *(_QWORD*)(SdkData_eb8ce0 + 8);
  *(_QWORD*)(v13 + 8) = SdkData_eb8cd8;
  SdkData_eb8cd8 = v13;
  *(_DWORD*)v13 = v8;
  if (v12 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_eb8cd4);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eb8cd0);
  ++SdkData_eb8cf4;
  v14 = (__int64 (***)(_QWORD))(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(
      v6);
  *(_BYTE*)(**v14)(v14) = 0;
  v15 = nn_os_SdkMutexType_Lock_plt(&SdkData_eb8cf8);
  if (v4 > SdkData_eb8cf0) {
    nn_diag_detail_AbortImpl_plt_856170(v15);
  }
  v16 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_eb8cb8, v4);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eb8cf8);
  v19 = v16;
  if (v16 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
  }
  {
    (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    return;
  }
}

#pragma GCC visibility pop
