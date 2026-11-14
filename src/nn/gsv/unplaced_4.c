#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern void (*SdkData_e87798[4])();
__int64 nn_gsv_490350(void* this_);

__int64 nn_gsv_490350(void* this_)
{
  __int64 v1;
  unsigned __int64 StatusReg;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v11;
  void (*explicit)(_QWORD);
  void (*v13)(_QWORD);
  unsigned int v14;

  v1 = nn_gsv_GetUserSession_plt(this_);
  nn_os_SdkMutexType_Lock_plt(v1);
  if (*(_DWORD*)(v1 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v1);
    v14 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v14 = *(_DWORD*)(v1 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 1517;
  v3 = nn_sm_detail_SendSessionRequest(&v14);
  if (v3 != 0) {
    v11 = v3;
    goto LABEL_11;
  }
  v4 = *(_DWORD*)(StatusReg + 8);
  *(_QWORD*)StatusReg = 0x1000005EDLL;
  if (v4 != 0) {
    v11 = v4;
  LABEL_11:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v11);
    }
    nn_os_SdkMutexType_Unlock_plt(v1);
    v14 = v11;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v5 = nn_os_SdkMutexType_Unlock_plt(v1);
  v6 = nn_gsv_GetUserSession_plt(v5);
  nn_os_SdkMutexType_Lock_plt(v6);
  if (*(_DWORD*)(v6 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v6);
    v14 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v14 = *(_DWORD*)(v6 + 4);
  v7 = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)v7 = 1518;
  v8 = nn_sm_detail_SendSessionRequest(&v14);
  if (v8 != 0) {
    v9 = v8;
  LABEL_16:
    v13 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v13 != nullptr) {
      v13(v9);
    }
    nn_os_SdkMutexType_Unlock_plt(v6);
    v14 = v9;
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v9 = *(_DWORD*)(v7 + 8);
  *(_QWORD*)v7 = 0x1000005EELL;
  if (v9 != 0) {
    goto LABEL_16;
  }
  return nn_os_SdkMutexType_Unlock_plt(v6);
}

#pragma GCC visibility pop
