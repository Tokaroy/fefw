#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern __int64 (*SdkData_f656c0)(void);
extern __int64 SdkData_f656b0;
extern void (*SdkData_e87798[4])();
__int64 nvsrv_596650(__int64 a1, unsigned int** a2, int* a3, __int64* a4,
                     char* a5);
__int64 nvsrv_596840(__int64 a1, unsigned int** a2);
__int64 nvsrv_596940(__int64 a1);
__int64 nvsrv_596a50(void* this_, unsigned __int64* a2, unsigned __int64* a3,
                     unsigned __int64* a4);

__int64 nvsrv_596650(__int64 a1, unsigned int** a2, int* a3, __int64* a4,
                     char* a5)
{
  int v10;
  __int64 v11;
  char v12;
  unsigned __int64 StatusReg;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  void (*explicit)(_QWORD);
  __int64 v18;
  unsigned int v20;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v15 = 199411;
    goto LABEL_11;
  }
  v20 = *(_DWORD*)(a1 + 4);
  v10 = *a3;
  v11 = *a4;
  v12 = *a5;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x8000000300000589LL;
  *(_DWORD*)(StatusReg + 8) = 2;
  *(_DWORD*)(StatusReg + 12) = v10;
  *(_QWORD*)(StatusReg + 16) = v11;
  *(_BYTE*)(StatusReg + 24) = v12;
  v14 = nn_sm_detail_SendSessionRequest(&v20);
  if ((_DWORD)v14 != 0) {
    v15 = v14;
    v16 = 0;
    goto LABEL_6;
  }
  v16 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x8000000100000589LL;
  *(_DWORD*)(StatusReg + 8) = 32;
  nn_os_CloseNativeHandle_plt(v14);
  nn_os_CloseNativeHandle_plt(0);
  v15 = *(_DWORD*)(StatusReg + 16);
  if (v15 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v16);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v15);
    }
    goto LABEL_11;
  }
  v18 = **a2;
  **a2 = v16;
  if ((_DWORD)v18 != 0) {
    nn_os_CloseNativeHandle_plt(v18);
  }
  nn_os_CloseNativeHandle_plt(0);
  v15 = 0;
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v15;
}

__int64 nvsrv_596840(__int64 a1, unsigned int** a2)
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
  *(_QWORD*)StatusReg = 1418;
  v5 = nn_sm_detail_SendSessionRequest(&v11);
  if ((_DWORD)v5 != 0) {
    v6 = v5;
    v7 = 0;
    goto LABEL_6;
  }
  v7 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x800000010000058ALL;
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

__int64 nvsrv_596940(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  __int64 v7;
  unsigned __int64 StatusReg;
  unsigned int v9;
  void (*explicit)(_QWORD);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (SdkData_f656c0 != nullptr) {
    v2 = SdkData_f656c0();
    v4 = v2 - v3;
    v5 = v2 - v3;
  LABEL_3:
    *(_DWORD*)a1 = v4;
    *(_DWORD*)(a1 + 4) = v4;
    *(_DWORD*)(a1 + 8) = v5;
    *(_DWORD*)(a1 + 12) = v5;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    return 0;
  }
  v7 = SdkData_f656b0;
  nn_os_SdkMutexType_Lock_plt(SdkData_f656b0),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_DWORD*)(v7 + 4) != 0) {
    v14 = *(_DWORD*)(v7 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 1427;
    v9 = nn_sm_detail_SendSessionRequest(&v14),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v9 == 0) {
      v9 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x700000593LL;
      if (v9 == 0) {
        v11 = *(_QWORD*)(StatusReg + 28);
        v12 = *(_QWORD*)(StatusReg + 20);
        v13 = *(_QWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(v7),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v4 = v13 - v12;
        v5 = 0x7FFFFFFF;
        if ((unsigned __int64)(v13 - v12) >= 0x7FFFFFFF) {
          v4 = 0x7FFFFFFF;
        }
        if ((unsigned __int64)(v13 - v11) < 0x7FFFFFFF) {
          v5 = v13 - v11;
        }
        goto LABEL_3;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (explicit != nullptr) {
      explicit(v9);
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v7),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return 8;
}

__int64 nvsrv_596a50(void* this_, unsigned __int64* a2, unsigned __int64* a3,
                     unsigned __int64* a4)
{
  __int64 v7;
  unsigned __int64 StatusReg;
  unsigned int v9;
  void (*explicit)(_QWORD);
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int v15;

  v7 = SdkData_f656b0;
  nn_os_SdkMutexType_Lock_plt(SdkData_f656b0);
  if (*(_DWORD*)(v7 + 4) != 0) {
    v15 = *(_DWORD*)(v7 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 1427;
    v9 = nn_sm_detail_SendSessionRequest(&v15);
    if (v9 == 0) {
      v9 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x700000593LL;
      if (v9 == 0) {
        v12 = *(_QWORD*)(StatusReg + 28);
        v13 = *(_QWORD*)(StatusReg + 20);
        v14 = *(_QWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(v7);
        *(_QWORD*)this_ = v14;
        *a2 = v13;
        *a3 = v12;
        return 1;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v9);
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v7);
  return 0;
}

#pragma GCC visibility pop
