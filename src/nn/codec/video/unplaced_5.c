#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gs_sdk_DestroyNativeMemory_plt(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern void (*SdkData_e87798[4])();
__int64 nn_codec_video_331a60(unsigned int* a1);
__int64 nn_codec_video_331c10(__int64 result);
__int64 nn_codec_video_331e80(__int64* a1, __int64* a2, __int64* a3, int a4);
__int64 nn_codec_video_3328c0(unsigned int* a1);
__int64 nn_codec_video_332a70(__int64 result);

__int64 nn_codec_video_331a60(unsigned int* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 result;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 StatusReg;
  unsigned int v13;
  unsigned int v14;
  void (*v15)(_QWORD);
  unsigned int v16;
  void (*explicit)(_QWORD);
  unsigned int v18;

  if (*((_QWORD*)a1 + 2) == 0) {
    v9 = nn_gsv_GetUserSession_plt(a1);
    v10 = a1[1];
    v11 = v9;
    nn_os_SdkMutexType_Lock_plt(v9);
    if (*(_DWORD*)(v11 + 4) == 0) {
      nn_os_SdkMutexType_Unlock_plt(v11);
      v18 = 199411;
      nn_diag_detail_AbortImpl_plt_858db0(&v18);
    }
    v18 = *(_DWORD*)(v11 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v10;
    *(_QWORD*)StatusReg = 0x1000003AALL;
    v13 = nn_sm_detail_SendSessionRequest(&v18);
    if (v13 != 0) {
      v16 = v13;
    }
    else {
      *(_QWORD*)StatusReg = 0x1000003AALL;
      if (*(_DWORD*)(StatusReg + 8) == 0) {
        result = nn_os_SdkMutexType_Unlock_plt(v11);
        goto LABEL_10;
      }
      v16 = *(_DWORD*)(StatusReg + 8);
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v16);
    }
    nn_os_SdkMutexType_Unlock_plt(v11);
    v18 = v16;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  v2 = nn_gsv_GetUserSession_plt(a1);
  v3 = a1[1];
  v4 = v2;
  nn_os_SdkMutexType_Lock_plt(v2);
  if (*(_DWORD*)(v4 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v4);
    v18 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  v18 = *(_DWORD*)(v4 + 4);
  v5 = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(v5 + 8) = v3;
  *(_QWORD*)v5 = 0x1000003A0LL;
  v6 = nn_sm_detail_SendSessionRequest(&v18);
  if (v6 != 0) {
    v14 = v6;
    goto LABEL_14;
  }
  v7 = *(_DWORD*)(v5 + 8);
  *(_QWORD*)v5 = 0x1000003A0LL;
  if (v7 != 0) {
    v14 = v7;
  LABEL_14:
    v15 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v15 != nullptr) {
      v15(v14);
    }
    nn_os_SdkMutexType_Unlock_plt(v4);
    v18 = v14;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  nn_os_SdkMutexType_Unlock_plt(v4);
  result = nn_gs_sdk_DestroyNativeMemory_plt(*a1);
LABEL_10:
  *(_QWORD*)a1 = 0;
  a1[2] = 0;
  *((_QWORD*)a1 + 2) = 0;
  return result;
}

__int64 nn_codec_video_331c10(__int64 result)
{
  int* v1;
  __int64 v2;
  int v3;
  unsigned __int64 StatusReg;
  unsigned int v5;
  unsigned int v6;
  void (*explicit)(_QWORD);
  unsigned int v8;
  int v9;
  unsigned int v10;

  if ((**(_BYTE**)result & 1) == 0) {
    v1 = *(int**)(result + 8);
    v2 = nn_gsv_GetUserSession_plt(result);
    nn_os_SdkMutexType_Lock_plt(v2);
    if (*(_DWORD*)(v2 + 4) == 0) {
      nn_os_SdkMutexType_Unlock_plt(v2);
      v9 = 199411;
      nn_diag_detail_AbortImpl_plt_858db0(&v9);
    }
    v10 = *(_DWORD*)(v2 + 4);
    v3 = *v1;
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x1000003A0LL;
    *(_DWORD*)(StatusReg + 8) = v3;
    v5 = nn_sm_detail_SendSessionRequest(&v10);
    if (v5 != 0) {
      v8 = v5;
    }
    else {
      v6 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x1000003A0LL;
      if (v6 == 0) {
        return nn_os_SdkMutexType_Unlock_plt(v2);
      }
      v8 = v6;
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v8);
    }
    nn_os_SdkMutexType_Unlock_plt(v2);
    v9 = v8;
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  return result;
}

__int64 nn_codec_video_331e80(__int64* a1, __int64* a2, __int64* a3, int a4)
{
  __int64 v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  void (*explicit)(_QWORD);
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;

  v8 = nn_gsv_GetUserSession_plt(a1);
  v20 = a3[4];
  v21 = a3[5];
  v22 = a3[6];
  v23 = a3[7];
  v16 = *a3;
  v17 = a3[1];
  v18 = a3[2];
  v19 = a3[3];
  nn_os_SdkMutexType_Lock_plt(v8);
  if (*(_DWORD*)(v8 + 4) != 0) {
    v24 = *(_DWORD*)(v8 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = a4;
    *(_QWORD*)(StatusReg + 48) = v21;
    *(_QWORD*)(StatusReg + 56) = v22;
    *(_QWORD*)(StatusReg + 64) = v23;
    *(_QWORD*)StatusReg = 0x1100000453LL;
    *(_QWORD*)(StatusReg + 8) = v16;
    *(_QWORD*)(StatusReg + 16) = v17;
    *(_QWORD*)(StatusReg + 24) = v18;
    *(_QWORD*)(StatusReg + 32) = v19;
    *(_QWORD*)(StatusReg + 40) = v20;
    v10 = nn_sm_detail_SendSessionRequest(&v24);
    if (v10 != 0 || (v10 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x500000453LL, v10 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v10);
      }
      nn_os_SdkMutexType_Unlock_plt(v8);
    }
    else {
      v13 = *(_QWORD*)(StatusReg + 20);
      v14 = *(_QWORD*)(StatusReg + 12);
      nn_os_SdkMutexType_Unlock_plt(v8);
      v15 = 4096;
      if (v13 > 0x1000) {
        v15 = v13;
      }
      *a1 = (v14 + v15 - 1) & -v15;
      *a2 = v15;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v8);
    return 199411;
  }
  return v10;
}

__int64 nn_codec_video_3328c0(unsigned int* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 result;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 StatusReg;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  void (*v16)(_QWORD);
  void (*explicit)(_QWORD);
  unsigned int v18;

  if (*((_BYTE*)a1 + 8) != 1) {
    v9 = nn_gsv_GetUserSession_plt(a1);
    v10 = a1[1];
    v11 = v9;
    nn_os_SdkMutexType_Lock_plt(v9);
    if (*(_DWORD*)(v11 + 4) == 0) {
      nn_os_SdkMutexType_Unlock_plt(v11);
      v18 = 199411;
      nn_diag_detail_AbortImpl_plt_858db0(&v18);
    }
    v18 = *(_DWORD*)(v11 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v10;
    *(_QWORD*)StatusReg = 0x10000040ELL;
    v13 = nn_sm_detail_SendSessionRequest(&v18);
    if (v13 != 0) {
      v15 = v13;
    }
    else {
      *(_QWORD*)StatusReg = 0x10000040ELL;
      if (*(_DWORD*)(StatusReg + 8) == 0) {
        result = nn_os_SdkMutexType_Unlock_plt(v11);
        goto LABEL_10;
      }
      v15 = *(_DWORD*)(StatusReg + 8);
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v15);
    }
    nn_os_SdkMutexType_Unlock_plt(v11);
    v18 = v15;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  v2 = nn_gsv_GetUserSession_plt(a1);
  v3 = a1[1];
  v4 = v2;
  nn_os_SdkMutexType_Lock_plt(v2);
  if (*(_DWORD*)(v4 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v4);
    v18 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  v18 = *(_DWORD*)(v4 + 4);
  v5 = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(v5 + 8) = v3;
  *(_QWORD*)v5 = 0x100000404LL;
  v6 = nn_sm_detail_SendSessionRequest(&v18);
  if (v6 != 0) {
    v14 = v6;
    goto LABEL_16;
  }
  v7 = *(_DWORD*)(v5 + 8);
  *(_QWORD*)v5 = 0x100000404LL;
  if (v7 != 0) {
    v14 = v7;
  LABEL_16:
    v16 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v16 != nullptr) {
      v16(v14);
    }
    nn_os_SdkMutexType_Unlock_plt(v4);
    v18 = v14;
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
  }
  nn_os_SdkMutexType_Unlock_plt(v4);
  result = nn_gs_sdk_DestroyNativeMemory_plt(*a1);
LABEL_10:
  *((_QWORD*)a1 + 2) = 0;
  *(_QWORD*)a1 = 0;
  *((_BYTE*)a1 + 8) = 0;
  return result;
}

__int64 nn_codec_video_332a70(__int64 result)
{
  int* v1;
  __int64 v2;
  int v3;
  unsigned __int64 StatusReg;
  unsigned int v5;
  unsigned int v6;
  void (*explicit)(_QWORD);
  unsigned int v8;
  int v9;
  unsigned int v10;

  if ((**(_BYTE**)result & 1) == 0) {
    v1 = *(int**)(result + 8);
    v2 = nn_gsv_GetUserSession_plt(result);
    nn_os_SdkMutexType_Lock_plt(v2);
    if (*(_DWORD*)(v2 + 4) == 0) {
      nn_os_SdkMutexType_Unlock_plt(v2);
      v9 = 199411;
      nn_diag_detail_AbortImpl_plt_858db0(&v9);
    }
    v10 = *(_DWORD*)(v2 + 4);
    v3 = *v1;
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x100000404LL;
    *(_DWORD*)(StatusReg + 8) = v3;
    v5 = nn_sm_detail_SendSessionRequest(&v10);
    if (v5 != 0) {
      v8 = v5;
    }
    else {
      v6 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x100000404LL;
      if (v6 == 0) {
        return nn_os_SdkMutexType_Unlock_plt(v2);
      }
      v8 = v6;
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v8);
    }
    nn_os_SdkMutexType_Unlock_plt(v2);
    v9 = v8;
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  return result;
}

#pragma GCC visibility pop
