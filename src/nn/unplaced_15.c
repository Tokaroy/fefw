#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_audio_GetOutputRecorderStatistics_plt(PSEUDO_X8, _QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_audio_CloseOutputRecorder_plt(__int64);
__int64 nn_audio_GetOutputRecorderFilledFrameCount_plt(__int64);
__int64 nn_audio_GetOutputRecorderState_plt(__int64);
__int64 nn_audio_IsVirtualCaptureDeviceStreamFormatSupported_plt(__int64,
                                                                 __int64);
__int64 nn_audio_OpenOutputRecorder_plt(__int64, __int64, __int64,
                                        unsigned __int64, __int64, __int64, int,
                                        int);
__int64 nn_audio_ReadOutputRecorder_plt(__int64, __int64, __int64, int);
__int64 nn_audio_SetOutputRecorderName_plt(__int64, __int64);
__int64 nn_audio_StartOutputRecorder_plt(__int64);
__int64
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformResponse_plt(
    __int64, __int64, __int64, __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_ClearSystemEvent_plt(__int64);
__int64 nn_os_DestroySystemEvent_plt(__int64);
__int64 nn_os_FinalizeMultiWaitHolder_plt(__int64);
__int64 nn_os_FinalizeMultiWait_plt(__int64);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(__int64, __int64);
__int64 nn_os_InitializeMultiWait_plt(__int64);
__int64 nn_os_LinkMultiWaitHolder_plt(__int64, __int64);
__int64 nn_os_TimedWaitAny_plt(__int64, __int64);
__int64 nn_os_UnlinkMultiWaitHolder_plt(__int64);
extern _UNKNOWN* SdkData_ea7e60;
extern _UNKNOWN* SdkData_ea7e78;
extern _UNKNOWN* SdkData_ea7e90;
extern _UNKNOWN* SdkData_ea7ea8;
extern _UNKNOWN* SdkData_ea7ec0;
extern _UNKNOWN* SdkData_ea7ed8;
extern _UNKNOWN* SdkData_ea7ef0;
extern _UNKNOWN* SdkData_ea7f08;
extern _UNKNOWN* SdkData_ea7f20;
extern _UNKNOWN* SdkData_ea7f38;
extern _UNKNOWN* SdkData_ea7f50;
extern _UNKNOWN* SdkData_ea7f68;
extern _UNKNOWN* SdkData_ea7f80;
extern _UNKNOWN* SdkData_ea7f98;
extern __int64 SdkData_e876c0;
extern __int64 SdkData_e876c8;
extern __int64 SdkData_e876d0;
extern __int64 SdkData_e876d8;
extern __int64 SdkData_e876e0;
extern __int64 SdkData_e876e8;
__int64 nn_27a2e0(void* this_);
_UNKNOWN** nn_673540(int a1, int a2);

__int64 nn_27a2e0(void* this_)
{
  int v2;
  __int64 v3;
  __int64 result;
  __int64* v5;
  int v6;
  struct {
    __int64 v7[10];
    _QWORD v8[5];
    __int64 v9;
    _BYTE v10[848];
    _BYTE v11[256];
  } f_;
  _QWORD v12[6];

  {
    v2 = *((_DWORD*)this_ + 14336);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 <= 1) {
    if (v2 == 1) {
      v3 = SdkData_e876c8;
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  switch (v2) {
  case 2:
    v3 = SdkData_e876d8;
    break;
  case 3:
    v3 = SdkData_e876e0;
    break;
  case 4:
    v3 = SdkData_e876c0;
    break;
  default:
  LABEL_8:
    v3 = SdkData_e876d0;
    break;
  }
LABEL_11:
  memcpy_plt((__int64)f_.v11, v3, 0x100u);
  result = nn_audio_IsVirtualCaptureDeviceStreamFormatSupported_plt(
      (__int64)f_.v11, SdkData_e876e8);
  if ((_DWORD)result == 0) {
    memset_plt((__int64)f_.v10, 0, 0x350u);
    f_.v9 = 0;
    memset(f_.v8, 0, sizeof(f_.v8));
    LODWORD(f_.v7[0]) = nn_audio_OpenOutputRecorder_plt(
        (__int64)f_.v10, (__int64)f_.v8, (__int64)this_ + 4096, 0xD000u,
        (__int64)f_.v11, SdkData_e876e8, 3840, 960);
    if (LODWORD(f_.v7[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)f_.v7);
    }
    strcpy((char*)f_.v7, "SystemAudioCaptureServer");
    f_.v7[8] = (__int64)f_.v7;
    f_.v7[9] = 24;
    nn_audio_SetOutputRecorderName_plt((__int64)f_.v10, (__int64)f_.v7);
    if ((unsigned int)nn_audio_StartOutputRecorder_plt((__int64)f_.v10) == 0) {
      while (1) {
        do {
          memset(v12, 0, sizeof(v12));
          nn_os_InitializeMultiWait_plt((__int64)v12);
          memset(f_.v7, 0, 64);
          nn_os_InitializeMultiWaitHolder_plt_8591f0((__int64)f_.v7,
                                                     (__int64)f_.v8);
          nn_os_LinkMultiWaitHolder_plt((__int64)v12, (__int64)f_.v7);
          v5 = (__int64*)nn_os_TimedWaitAny_plt((__int64)v12, 3000000000LL);
          nn_os_UnlinkMultiWaitHolder_plt((__int64)f_.v7);
          nn_os_FinalizeMultiWaitHolder_plt((__int64)f_.v7);
          nn_os_FinalizeMultiWait_plt((__int64)v12);
        } while (f_.v7 != v5);
        nn_os_ClearSystemEvent_plt((__int64)f_.v8);
        if ((unsigned __int64)(12LL *
                               (int)
                                   nn_audio_GetOutputRecorderFilledFrameCount_plt(
                                       (__int64)f_.v10)) >>
            8 >= 0x2D) {
          f_.v7[0] = 0;
          v6 = nn_audio_ReadOutputRecorder_plt(
              (__int64)f_.v10, (__int64)this_ + 72964, (__int64)f_.v7, 960);
          if ((nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformResponse_plt(
                   (__int64)this_, (__int64)this_ + 72964, 12LL * v6,
                   f_.v7[0]) &
               1) == 0) {
            break;
          }
        }
      }
      memset(f_.v7, 0, 24);
      nn_audio_GetOutputRecorderStatistics_plt((void*)(f_.v7), f_.v10, 0);
    }
    nn_audio_CloseOutputRecorder_plt((__int64)f_.v10);
    if ((_BYTE)f_.v9 != 0) {
      nn_os_DestroySystemEvent_plt((__int64)f_.v8);
    }
    result = nn_audio_GetOutputRecorderState_plt((__int64)f_.v10);
    if ((_DWORD)result != 0) {
      return nn_audio_CloseOutputRecorder_plt((__int64)f_.v10);
    }
  }
  return result;
}

_UNKNOWN** nn_673540(int a1, int a2)
{
  unsigned int v2;
  _UNKNOWN** v4;

  if (a2 == 2056) {
    v2 = 0;
  }
  else {
    v2 = -1;
  }
  if (a2 != 2056) {
    return nullptr;
  }
  switch (a1) {
  case 0:
    v4 = &SdkData_ea7e60;
    break;
  case 1:
    v4 = &SdkData_ea7e78;
    break;
  case 2:
    v4 = &SdkData_ea7e90;
    break;
  case 3:
    v4 = &SdkData_ea7ea8;
    break;
  case 4:
    v4 = &SdkData_ea7ec0;
    break;
  case 5:
    v4 = &SdkData_ea7ed8;
    break;
  case 6:
    v4 = &SdkData_ea7ef0;
    break;
  case 7:
    v4 = &SdkData_ea7f08;
    break;
  case 8:
    v4 = &SdkData_ea7f20;
    break;
  case 9:
    v4 = &SdkData_ea7f38;
    break;
  case 10:
    v4 = &SdkData_ea7f50;
    break;
  case 11:
    v4 = &SdkData_ea7f68;
    break;
  case 12:
    v4 = &SdkData_ea7f80;
    break;
  case 13:
    v4 = &SdkData_ea7f98;
    break;
  default:
    return nullptr;
  }
  return &v4[3 * v2];
}

#pragma GCC visibility pop
