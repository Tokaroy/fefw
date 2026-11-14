#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetGraphicsSupervisor_plt(_QWORD);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_GetCurrentProcessHandle_plt(_QWORD);
__int64 nn_os_GetRemoteMemoryUsage_plt(void);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern _UNKNOWN SdkData_f3f054;
extern _UNKNOWN nn_gsv_g_UserSession;
extern __int64 SdkData_f3f058;
extern char nn_gsv_g_IsInitialized;
extern void (*SdkData_e87798[4])();
__int64 nn_gs_48eb10(__int64 result);
__int64 nn_gs_48fae0(__int64 a1, unsigned int** a2);
__int64 nn_gs_4901b0(__int64* a1, __int64* a2, __int64* a3, int a4);
__int64 nn_gs_490580(__int64 a1, _DWORD* a2, __int64 a3, char a4, __int64 a5,
                     __int64* a6, __int64* a7);
__int64 nn_gs_4906c0(void* a1);
__int64 nn_gs_4908c0(__int64 a1, _DWORD* a2, __int64 a3);
__int64 nn_gs_490a70(unsigned int a1, __int64 a2, char a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                     __int64 a9);

__int64 nn_gs_48eb10(__int64 result)
{
  __int64 v1;
  int* v2;
  int v3;
  unsigned __int64 StatusReg;
  unsigned int v5;
  unsigned int v6;
  void (*explicit)(_QWORD);
  unsigned int v8;
  int v9;
  unsigned int v10;

  if (*(_BYTE*)(result + 24) == 1 && (**(_BYTE**)result & 1) == 0) {
    v1 = *(_QWORD*)(result + 8);
    v2 = *(int**)(result + 16);
    nn_os_SdkMutexType_Lock_plt(v1);
    if (*(_DWORD*)(v1 + 4) == 0) {
      nn_os_SdkMutexType_Unlock_plt(v1);
      v9 = 199411;
      nn_diag_detail_AbortImpl_plt_858db0(&v9);
    }
    v10 = *(_DWORD*)(v1 + 4);
    v3 = *v2;
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x10000008CLL;
    *(_DWORD*)(StatusReg + 8) = v3;
    v5 = nn_sm_detail_SendSessionRequest(&v10);
    if (v5 != 0) {
      v8 = v5;
    }
    else {
      v6 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x10000008CLL;
      if (v6 == 0) {
        return nn_os_SdkMutexType_Unlock_plt(v1);
      }
      v8 = v6;
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v8);
    }
    nn_os_SdkMutexType_Unlock_plt(v1);
    v9 = v8;
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  return result;
}

__int64 nn_gs_48fae0(__int64 a1, unsigned int** a2)
{
  unsigned __int64 StatusReg;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  void (*explicit)(_QWORD);
  __int64 v9;
  unsigned int v11;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v6 = 199411;
    goto LABEL_11;
  }
  v11 = *(_DWORD*)(a1 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 1137;
  v5 = nn_sm_detail_SendSessionRequest(&v11);
  if ((_DWORD)v5 != 0) {
    v6 = v5;
    v7 = 0;
    goto LABEL_6;
  }
  v7 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x8000000100000471LL;
  *(_DWORD*)(StatusReg + 8) = 32;
  nn_os_CloseNativeHandle_plt(v5);
  nn_os_CloseNativeHandle_plt(0);
  v6 = *(_DWORD*)(StatusReg + 16);
  if (v6 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v7);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v6);
    }
    goto LABEL_11;
  }
  v9 = **a2;
  **a2 = v7;
  if ((_DWORD)v9 != 0) {
    nn_os_CloseNativeHandle_plt(v9);
  }
  nn_os_CloseNativeHandle_plt(0);
  v6 = 0;
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v6;
}

__int64 nn_gs_4901b0(__int64* a1, __int64* a2, __int64* a3, int a4)
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
    *(_QWORD*)StatusReg = 0x11000005F6LL;
    *(_QWORD*)(StatusReg + 8) = v16;
    *(_QWORD*)(StatusReg + 16) = v17;
    *(_QWORD*)(StatusReg + 24) = v18;
    *(_QWORD*)(StatusReg + 32) = v19;
    *(_QWORD*)(StatusReg + 40) = v20;
    v10 = nn_sm_detail_SendSessionRequest(&v24);
    if (v10 != 0 || (v10 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x5000005F6LL, v10 != 0)) {
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

__int64 nn_gs_490580(__int64 a1, _DWORD* a2, __int64 a3, char a4, __int64 a5,
                     __int64* a6, __int64* a7)
{
  __int64 result;
  int v8;
  int v10;
  unsigned __int64 StatusReg;
  unsigned __int64 v12;
  void (*explicit)(_QWORD);
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;

  if (*(_QWORD*)(a1 + 8) != 0) {
    return 131315;
  }
  v8 = *(_DWORD*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = *a2;
  *a2 = v8;
  *(_QWORD*)(a1 + 8) = a3;
  result = nn_gs_490a70(*(_DWORD*)(a1 + 4), a3, a4, 0x8000000000000007LL, 0, 0,
                        0, *a6, *a7);
  if ((_DWORD)result == 0) {
    v17 = *(_DWORD*)(a1 + 4);
    v10 = nn_os_GetCurrentProcessHandle_plt(result);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x800000000000001BLL;
    *(_DWORD*)(StatusReg + 8) = 2;
    *(_DWORD*)(StatusReg + 12) = v10;
    result = nn_sm_detail_SendSessionRequest(&v17);
    if ((_DWORD)result == 0) {
      result = *(unsigned int*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x10000001BLL;
      if ((_DWORD)result == 0) {
        v18 = *(_DWORD*)(a1 + 4);
        v12 = __builtin_arm_rsr64("tpidrro_el0");
        *(_QWORD*)v12 = 117;
        result = nn_sm_detail_SendSessionRequest(&v18);
        if ((_DWORD)result == 0) {
          result = *(unsigned int*)(v12 + 8);
          *(_QWORD*)v12 = 0x100000075LL;
          if ((_DWORD)result == 0) {
            return result;
          }
        }
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      v14 = result;
      explicit((unsigned int)result);
      result = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = 0;
  if (v15 != 0) {
    v16 = result;
    nn_os_CloseNativeHandle_plt(v15);
    result = v16;
  }
  *(_QWORD*)(a1 + 8) = 0;
  return result;
}

__int64 nn_gs_4906c0(void* a1)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int* v6;
  int v7;
  unsigned __int64 StatusReg;
  unsigned int v9;
  int v10;
  __int64 v11;
  int* v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 result;
  void (*explicit)(_QWORD);
  void (*v18)(_QWORD);
  unsigned int v19;
  __int64 v20;

  v1 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_uchar* volatile)&nn_gsv_g_IsInitialized, (unsigned __int8*)&v1,
      1u, memory_order_acquire, memory_order_acquire);
  if (v1 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v2 = nn_applet_GetAppletResourceUserId_plt(a1);
  v20 = 0;
  while ((unsigned int)nn_am_GetGraphicsSupervisor_plt(&v20) != 0) {
    nn_os_SleepThread_plt(100000000);
  }
  v19 = v20;
  v3 = nn_gs_4908c0((__int64)&nn_gsv_g_UserSession, &v19, v2);
  if ((_DWORD)v3 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v3);
  }
  v4 = SdkData_f3f058;
  v5 = 199411;
  nn_os_SdkMutexType_Lock_plt(&nn_gsv_g_UserSession);
  v6 = (int*)&SdkData_f3f054;
  if (v4 == 0) {
    v6 = (int*)((__int64*)0x4LL);
  }
  v7 = *v6;
  if (v7 == 0) {
  LABEL_26:
    nn_os_SdkMutexType_Unlock_plt(&nn_gsv_g_UserSession);
    LODWORD(v20) = v5;
    nn_diag_detail_AbortImpl_plt_858db0(&v20);
  }
  LODWORD(v20) = v7;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 142;
  v9 = nn_sm_detail_SendSessionRequest((unsigned int*)&v20);
  if (v9 != 0) {
    v5 = v9;
    goto LABEL_24;
  }
  *(_QWORD*)StatusReg = 0x20000008ELL;
  if (*(_DWORD*)(StatusReg + 8) != 0) {
    v5 = *(_DWORD*)(StatusReg + 8);
  LABEL_24:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v5);
    }
    goto LABEL_26;
  }
  v10 = *(_DWORD*)(StatusReg + 12);
  nn_os_SdkMutexType_Unlock_plt(&nn_gsv_g_UserSession);
  if (v10 != 1) {
    goto LABEL_17;
  }
  v11 = SdkData_f3f058;
  nn_os_SdkMutexType_Lock_plt(&nn_gsv_g_UserSession);
  v12 = (int*)&SdkData_f3f054;
  if (v11 == 0) {
    v12 = (int*)((__int64*)0x4LL);
  }
  v13 = *v12;
  if (v13 == 0) {
  LABEL_30:
    nn_os_SdkMutexType_Unlock_plt(&nn_gsv_g_UserSession);
    LODWORD(v20) = v5;
    nn_diag_detail_AbortImpl_plt_858db0(&v20);
  }
  LODWORD(v20) = v13;
  v14 = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)v14 = 136;
  v15 = nn_sm_detail_SendSessionRequest((unsigned int*)&v20);
  if (v15 != 0) {
    v5 = v15;
  LABEL_28:
    v18 = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (v18 != nullptr) {
      v18(v5);
    }
    goto LABEL_30;
  }
  v5 = *(_DWORD*)(v14 + 8);
  *(_QWORD*)v14 = 0x100000088LL;
  if (v5 != 0) {
    goto LABEL_28;
  }
  nn_os_SdkMutexType_Unlock_plt(&nn_gsv_g_UserSession);
LABEL_17:
  result = v19;
  if (v19 != 0) {
    return nn_os_CloseNativeHandle_plt(v19);
  }
  return result;
}

__int64 nn_gs_4908c0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 result;
  int v6;
  __int64 v9;
  int v10;
  unsigned __int64 StatusReg;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  void (*explicit)(_QWORD);
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;

  if (*(_QWORD*)(a1 + 8) != 0) {
    return 131315;
  }
  v6 = *(_DWORD*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = *a2;
  *a2 = v6;
  *(_QWORD*)(a1 + 8) = a3;
  v19 = *(_DWORD*)(a1 + 4);
  v9 = nn_os_GetRemoteMemoryUsage_plt();
  v10 = nn_os_GetCurrentProcessHandle_plt(v9);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)(StatusReg + 32) = 0;
  *(_QWORD*)(StatusReg + 40) = 0;
  *(_QWORD*)(StatusReg + 48) = 0;
  *(_QWORD*)(StatusReg + 56) = v9;
  *(_QWORD*)StatusReg = 0x8000000C00000014LL;
  *(_DWORD*)(StatusReg + 8) = 2;
  *(_DWORD*)(StatusReg + 12) = v10;
  *(_QWORD*)(StatusReg + 16) = a3;
  *(_QWORD*)(StatusReg + 24) = 0x8000000000000007LL;
  result = nn_sm_detail_SendSessionRequest(&v19);
  if ((_DWORD)result != 0) {
    goto LABEL_9;
  }
  result = *(unsigned int*)(StatusReg + 8);
  *(_QWORD*)StatusReg = 0x100000014LL;
  if ((_DWORD)result != 0) {
    goto LABEL_9;
  }
  v20 = *(_DWORD*)(a1 + 4);
  v12 = nn_os_GetCurrentProcessHandle_plt(result);
  v13 = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)v13 = 0x800000000000001BLL;
  *(_DWORD*)(v13 + 8) = 2;
  *(_DWORD*)(v13 + 12) = v12;
  result = nn_sm_detail_SendSessionRequest(&v20);
  if ((_DWORD)result != 0) {
    goto LABEL_9;
  }
  result = *(unsigned int*)(v13 + 8);
  *(_QWORD*)v13 = 0x10000001BLL;
  if ((_DWORD)result != 0 ||
      (v21 = *(_DWORD*)(a1 + 4), v14 = __builtin_arm_rsr64("tpidrro_el0"),
       *(_QWORD*)v14 = 117,
       (_DWORD)(result = nn_sm_detail_SendSessionRequest(&v21)) != 0) ||
      (result = *(unsigned int*)(v14 + 8), *(_QWORD*)v14 = 0x100000075LL,
       (_DWORD)result != 0)) {
  LABEL_9:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      v16 = result;
      explicit((unsigned int)result);
      result = v16;
    }
    v17 = *(_DWORD*)(a1 + 4);
    *(_DWORD*)(a1 + 4) = 0;
    if (v17 != 0) {
      v18 = result;
      nn_os_CloseNativeHandle_plt(v17);
      result = v18;
    }
    *(_QWORD*)(a1 + 8) = 0;
  }
  return result;
}

__int64 nn_gs_490a70(unsigned int a1, __int64 a2, char a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 result;
  unsigned int v16;
  __int64 v17;
  int v18;
  unsigned __int64 StatusReg;
  unsigned int v20;
  void (*explicit)(_QWORD);
  unsigned int v22;
  _QWORD v23[8];
  unsigned int v24;

  v24 = a1;
  memset(v23, 0, sizeof(v23));
  result = nn_os_CreateTransferMemory_plt(v23, a8, a9, 0);
  if ((_DWORD)result == 0) {
    v16 = nn_os_DetachTransferMemory_plt(v23);
    v17 = nn_os_DestroyTransferMemory_plt(v23);
    v18 = nn_os_GetCurrentProcessHandle_plt(v17);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 16) = v16;
    *(_QWORD*)(StatusReg + 20) = a2;
    *(_BYTE*)(StatusReg + 28) = a3;
    *(_QWORD*)(StatusReg + 32) = a4;
    *(_QWORD*)(StatusReg + 40) = a5;
    *(_QWORD*)(StatusReg + 48) = a6;
    *(_QWORD*)(StatusReg + 56) = a7;
    *(_QWORD*)(StatusReg + 64) = a9;
    *(_QWORD*)StatusReg = 0x8000000D00000012LL;
    *(_DWORD*)(StatusReg + 8) = 4;
    *(_DWORD*)(StatusReg + 12) = v18;
    v20 = nn_sm_detail_SendSessionRequest(&v24);
    if (v20 != 0 || (v20 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x100000012LL, v20 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        v22 = v20;
        explicit(v20);
        if (v16 == 0) {
          return v22;
        }
      }
      else {
        v22 = v20;
        if (v16 == 0) {
          return v22;
        }
      }
    }
    else {
      v22 = 0;
      if (v16 == 0) {
        return v22;
      }
    }
    nn_os_CloseNativeHandle_plt(v16);
    return v22;
  }
  return result;
}

#pragma GCC visibility pop
