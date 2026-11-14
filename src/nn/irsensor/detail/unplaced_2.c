#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HeartRateCaptureState_HeartRateCaptureState_plt(_QWORD);

__int64 HeartRateDriver_GetCaptureState_plt(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 memset_plt(void* this_, void*, int);

__int64 nn_irsensor_GetTeraPluginProcessorStates_plt(_QWORD);

__int64 nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(_QWORD);

__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);

__int64 nn_os_LockMutex_plt(_QWORD);

__int64 nn_os_UnlockMutex_plt(_QWORD);

__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);

__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);

__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);

extern _QWORD SdkData_10492f0[9];

extern void (*SdkData_e89210[18])();

__int64 nn_irsensor_detail_742ec0(__int64 a1, __int64 a2);

__int64 nn_irsensor_detail_743f90(__int64 a1);

__int64 nn_irsensor_detail_743f90(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  void(__attribute__((noreturn)) * v5)();

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)nn_sf_hipc_GetMessageBufferOnTls_plt(result);
      *v4 = 2;
      nn_sf_hipc_SendSyncRequest_plt(v3, v4, 256);
      nn_sf_hipc_CloseClientSessionHandle_plt(v3);
    }
    v5 = SdkData_e89210[0];
    nn_os_LockMutex_plt((char*)SdkData_e89210[0] + 8);
    nn_lmem_FreeToExpHeap_plt(*(_QWORD*)v5, a1);
    return nn_os_UnlockMutex_plt((char*)v5 + 8);
  }
  return result;
}

#pragma GCC visibility pop
