#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_TimedWaitSystemEvent_plt(_QWORD, _QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 nn_os_WaitSystemEvent_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
__int64 nn_syncpt_5d2520(_QWORD*, __int64);
__int64 syncpt_api_5d2150(__int64, __int64, _DWORD*, unsigned __int64);
__int64 syncpt_api_5d3c00(__int64, __int64);
extern _UNKNOWN SdkData_f6e82c;
extern __int64 SdkData_f6e830;
extern char SdkData_f6e828;
extern void (*SdkData_e87798[4])();
__int64 nn_syncpt_5d1ec0(__int64 a1, unsigned __int64 a2, __int64 a3, char a4);
__int64 nn_syncpt_5d2050(__int64 a1, unsigned int** a2);
__int64 nn_syncpt_5d2380(__int64 a1, unsigned int** a2, unsigned int** a3,
                         int* a4, int* a5, int* a6, __int64* a7, int* a8,
                         __int64* a9);
__int64 nn_syncpt_5d2db0(__int64 a1, int a2, unsigned __int64 a3, char a4);
__int64 nn_syncpt_5d3060(__int64 a1, __int64 a2, int* a3, unsigned int a4);
__int64 nn_syncpt_5d3160(__int64 a1, unsigned int** a2, int* a3);
__int64 nn_syncpt_5d38e0(__int64 a1, __int64 a2, int* a3, unsigned int a4,
                         __int64 a5);
__int64 nn_syncpt_5d3ac0(__int64 a1, unsigned int* a2);
__int64 nn_syncpt_5d3d50(__int64 result, __int64 a2, __int64 a3);
__int64 nn_syncpt_5d4060(__int64 a1, _DWORD* a2);
__int64 nn_syncpt_5d4910(unsigned __int64 a1);
__int64 nn_syncpt_5d4a80(_QWORD* a1, _QWORD* a2, __int64 a3);
__int64 nn_syncpt_5d4b70(__int64 a1);

__int64 nn_syncpt_5d1ec0(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  unsigned __int64 v11;
  unsigned int v12;
  _DWORD* v13;
  _DWORD* v14;
  __int64 v15;
  __int64 result;
  unsigned int v17;
  void (*explicit)(_QWORD);
  unsigned int* v19;
  int v20;
  unsigned int v21;

  v8 = nn_gsv_GetUserSession_plt(a1);
  v21 = 0;
  nn_os_SdkMutexType_Lock_plt(v8);
  if (*(_DWORD*)(v8 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v8);
    LODWORD(v19) = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
  }
  LODWORD(v19) = *(_DWORD*)(v8 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 217;
  v10 = nn_sm_detail_SendSessionRequest((unsigned int*)&v19);
  if (v10 != 0) {
    v17 = v10;
    goto LABEL_15;
  }
  *(_QWORD*)StatusReg = 0x1000000D9LL;
  if (*(_DWORD*)(StatusReg + 8) != 0) {
    v17 = *(_DWORD*)(StatusReg + 8);
  LABEL_15:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v17);
    }
    nn_os_SdkMutexType_Unlock_plt(v8);
    LODWORD(v19) = v17;
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
  }
  nn_os_SdkMutexType_Unlock_plt(v8);
  v19 = &v21;
  v20 = nn_syncpt_5d2050(v8, &v19);
  if (v20 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v20);
  }
  v11 = a3 + a2;
  nn_os_SdkMutexType_Lock_plt(a1);
  v12 = *(_DWORD*)(a1 + 4);
  *(_DWORD*)(a1 + 4) = v21;
  v21 = v12;
  nn_os_SdkMutexType_Unlock_plt(a1);
  if ((a4 & 1) != 0) {
    v13 = (_DWORD*)((a2 + 4095) & 0xFFFFFFFFFFFFF000LL);
    v14 = v13 + 3072;
    if ((unsigned __int64)(v13 + 3072) <= v11) {
      syncpt_api_5d2150(a1 + 8, v8, v13, 0x3000u);
      a2 = (unsigned __int64)v14;
    }
  }
  *(_QWORD*)(a1 + 176) = a1;
  *(_QWORD*)(a1 + 184) = a1 + 8;
  v15 = nn_syncpt_5d2520((_QWORD*)(a1 + 192), a1);
  if (a2 > v11) {
    nn_diag_detail_AbortImpl_plt_856170(v15);
  }
  result = v21;
  if (v21 != 0) {
    return nn_os_CloseNativeHandle_plt(v21);
  }
  return result;
}

__int64 nn_syncpt_5d2050(__int64 a1, unsigned int** a2)
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
  *(_QWORD*)StatusReg = 218;
  v5 = nn_sm_detail_SendSessionRequest(&v11);
  if ((_DWORD)v5 != 0) {
    v6 = v5;
    v7 = 0;
    goto LABEL_6;
  }
  v7 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x80000001000000DALL;
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

__int64 nn_syncpt_5d2380(__int64 a1, unsigned int** a2, unsigned int** a3,
                         int* a4, int* a5, int* a6, __int64* a7, int* a8,
                         __int64* a9)
{
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned __int64 StatusReg;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  void (*explicit)(_QWORD);
  __int64 v29;
  __int64 v30;
  unsigned int v32;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v25 = 199411;
    goto LABEL_13;
  }
  v32 = *(_DWORD*)(a1 + 4);
  v17 = *a4;
  v18 = *a5;
  v19 = *a6;
  v20 = *a7;
  v21 = *a8;
  v22 = *a9;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x80000006000000DCLL;
  *(_DWORD*)(StatusReg + 16) = v21;
  *(_DWORD*)(StatusReg + 20) = v17;
  *(_DWORD*)(StatusReg + 24) = v18;
  *(_QWORD*)(StatusReg + 28) = v20;
  *(_DWORD*)(StatusReg + 8) = 4;
  *(_DWORD*)(StatusReg + 12) = v19;
  *(_QWORD*)(StatusReg + 36) = v22;
  v24 = nn_sm_detail_SendSessionRequest(&v32);
  if ((_DWORD)v24 != 0) {
    v25 = v24;
    v26 = 0;
    v27 = 0;
    goto LABEL_6;
  }
  v26 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x80000001000000DCLL;
  *(_DWORD*)(StatusReg + 8) = 64;
  nn_os_CloseNativeHandle_plt(v24);
  nn_os_CloseNativeHandle_plt(0);
  v27 = *(_DWORD*)(StatusReg + 16);
  nn_os_CloseNativeHandle_plt(0);
  nn_os_CloseNativeHandle_plt(0);
  v25 = *(_DWORD*)(StatusReg + 20);
  if (v25 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v27);
    nn_os_CloseNativeHandle_plt(v26);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v25);
    }
    goto LABEL_13;
  }
  v29 = **a3;
  **a3 = v27;
  if ((_DWORD)v29 != 0) {
    nn_os_CloseNativeHandle_plt(v29);
  }
  nn_os_CloseNativeHandle_plt(0);
  v30 = **a2;
  **a2 = v26;
  if ((_DWORD)v30 != 0) {
    nn_os_CloseNativeHandle_plt(v30);
  }
  nn_os_CloseNativeHandle_plt(0);
  v25 = 0;
LABEL_13:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v25;
}

__int64 nn_syncpt_5d2db0(__int64 a1, int a2, unsigned __int64 a3, char a4)
{
  int v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  void (*explicit)(_QWORD);
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    goto LABEL_6;
  }
  v8 = ~a2;
  v16 = *(_DWORD*)(a1 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x100000077LL;
  *(_DWORD*)(StatusReg + 8) = v8;
  v10 = nn_sm_detail_SendSessionRequest(&v16);
  if (v10 != 0 || (v10 = *(_DWORD*)(StatusReg + 8),
                   *(_QWORD*)StatusReg = 0x400000077LL, v10 != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v10);
    }
  LABEL_6:
    nn_os_SdkMutexType_Unlock_plt(a1);
    return 1;
  }
  v13 = *(unsigned __int8*)(StatusReg + 20);
  v14 = *(_QWORD*)(StatusReg + 12);
  nn_os_SdkMutexType_Unlock_plt(a1);
  if (a4 == 1 && v13 == 1) {
    v15 = v14 < a3;
  }
  else {
    v15 = (unsigned int)(v14 - a3) >> 31;
  }
  return v15 ^ 1;
}

__int64 nn_syncpt_5d3060(__int64 a1, __int64 a2, int* a3, unsigned int a4)
{
  int v8;
  __int64 v9;
  char v10;
  unsigned __int64 StatusReg;
  unsigned int v12;
  void (*explicit)(_QWORD);
  unsigned int v15;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    return nn_os_SdkMutexType_Unlock_plt(a1);
  }
  v15 = *(_DWORD*)(a1 + 4);
  v8 = *a3;
  v9 = *((_QWORD*)a3 + 1);
  v10 = *((_BYTE*)a3 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x5000000D9LL;
  *(_DWORD*)(StatusReg + 8) = a4;
  *(_DWORD*)(StatusReg + 12) = v8;
  *(_QWORD*)(StatusReg + 16) = v9;
  *(_BYTE*)(StatusReg + 24) = v10;
  v12 = nn_sm_detail_SendSessionRequest(&v15);
  if (v12 != 0 || (v12 = *(_DWORD*)(StatusReg + 8),
                   *(_QWORD*)StatusReg = 0x1000000D9LL, v12 != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v12);
    }
    return nn_os_SdkMutexType_Unlock_plt(a1);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a1);
    return nn_os_WaitSystemEvent_plt(a2 + 48LL * a4 + 80);
  }
}

__int64 nn_syncpt_5d3160(__int64 a1, unsigned int** a2, int* a3)
{
  int v6;
  unsigned __int64 StatusReg;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  void (*explicit)(_QWORD);
  __int64 v12;
  unsigned int v14;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v9 = 164083;
    goto LABEL_11;
  }
  v14 = *(_DWORD*)(a1 + 4);
  v6 = *a3;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x100000026LL;
  *(_DWORD*)(StatusReg + 8) = v6;
  v8 = nn_sm_detail_SendSessionRequest(&v14);
  if ((_DWORD)v8 != 0) {
    v9 = v8;
    v10 = 0;
    goto LABEL_6;
  }
  v10 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x8000000100000026LL;
  *(_DWORD*)(StatusReg + 8) = 32;
  nn_os_CloseNativeHandle_plt(v8);
  nn_os_CloseNativeHandle_plt(0);
  v9 = *(_DWORD*)(StatusReg + 16);
  if (v9 != 0) {
  LABEL_6:
    nn_os_CloseNativeHandle_plt(v10);
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v9);
    }
    goto LABEL_11;
  }
  v12 = **a2;
  **a2 = v10;
  if ((_DWORD)v12 != 0) {
    nn_os_CloseNativeHandle_plt(v12);
  }
  nn_os_CloseNativeHandle_plt(0);
  v9 = 0;
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v9;
}

__int64 nn_syncpt_5d38e0(__int64 a1, __int64 a2, int* a3, unsigned int a4,
                         __int64 a5)
{
  int v10;
  __int64 v11;
  char v12;
  unsigned __int64 StatusReg;
  unsigned int v14;
  void (*explicit)(_QWORD);
  __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  void (*v20)(_QWORD);
  unsigned int v21;
  unsigned int v22;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    goto LABEL_6;
  }
  v21 = *(_DWORD*)(a1 + 4);
  v10 = *a3;
  v11 = *((_QWORD*)a3 + 1);
  v12 = *((_BYTE*)a3 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x5000000D9LL;
  *(_DWORD*)(StatusReg + 8) = a4;
  *(_DWORD*)(StatusReg + 12) = v10;
  *(_QWORD*)(StatusReg + 16) = v11;
  *(_BYTE*)(StatusReg + 24) = v12;
  v14 = nn_sm_detail_SendSessionRequest(&v21);
  if (v14 != 0 || (v14 = *(_DWORD*)(StatusReg + 8),
                   *(_QWORD*)StatusReg = 0x1000000D9LL, v14 != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v14);
    }
  LABEL_6:
    nn_os_SdkMutexType_Unlock_plt(a1);
    return 1;
  }
  nn_os_SdkMutexType_Unlock_plt(a1);
  v17 = a2 + 48LL * a4;
  if ((nn_os_TimedWaitSystemEvent_plt(v17 + 80, a5) & 1) != 0) {
    return 1;
  }
  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) != 0) {
    v22 = *(_DWORD*)(a1 + 4);
    v18 = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)v18 = 0x1000000DALL;
    *(_DWORD*)(v18 + 8) = a4;
    v19 = nn_sm_detail_SendSessionRequest(&v22);
    if (v19 != 0 ||
        (v19 = *(_DWORD*)(v18 + 8), *(_QWORD*)v18 = 0x1000000DALL, v19 != 0)) {
      v20 = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (v20 != nullptr) {
        v20(v19);
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1);
  nn_os_WaitSystemEvent_plt(v17 + 80);
  return 0;
}

__int64 nn_syncpt_5d3ac0(__int64 a1, unsigned int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  int v6;
  unsigned __int64 StatusReg;
  unsigned int v8;
  void (*explicit)(_QWORD);
  unsigned int v10;

  v2 = *(_QWORD*)(a1 + 176);
  v4 = a1 + 192;
  result = nn_os_TryWaitSystemEvent_plt(*((_QWORD*)a2 + 1));
  if ((result & 1) == 0) {
    nn_os_SdkMutexType_Lock_plt(v2);
    if (*(_DWORD*)(v2 + 4) != 0) {
      v10 = *(_DWORD*)(v2 + 4);
      v6 = *a2;
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)StatusReg = 0x1000000DALL;
      *(_DWORD*)(StatusReg + 8) = v6;
      v8 = nn_sm_detail_SendSessionRequest(&v10);
      if (v8 != 0 || (v8 = *(_DWORD*)(StatusReg + 8),
                      *(_QWORD*)StatusReg = 0x1000000DALL, v8 != 0)) {
        explicit = (void (*)(_QWORD))atomic_load_explicit(
            (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
        if (explicit != nullptr) {
          explicit(v8);
        }
      }
    }
    nn_os_SdkMutexType_Unlock_plt(v2);
    do {
      result = nn_os_TimedWaitSystemEvent_plt(*((_QWORD*)a2 + 1), 1000000000);
    } while ((result & 1) == 0);
  }
  atomic_fetch_and_explicit(
      (atomic_ullong* volatile)(v4 +
                                (((unsigned __int64)*a2 >> 3) & 0x1FFFFFF8) +
                                8),
      ~(1LL << *a2), memory_order_release);
  *a2 = 0;
  *((_QWORD*)a2 + 1) = 0;
  *((_QWORD*)a2 + 2) = 0;
  return result;
}

__int64 nn_syncpt_5d3d50(__int64 result, __int64 a2, __int64 a3)
{
  unsigned int v5;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 explicit;
  __int64 v14;
  unsigned __int8 v15;
  unsigned __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  atomic_ullong* v23;
  int v24;
  unsigned __int64 StatusReg;
  unsigned int v26;
  void (*v27)(_QWORD);
  int v28;
  unsigned __int64 v29;
  unsigned int v30;
  void (*v31)(_QWORD);
  int v32;
  unsigned __int64 v33;
  unsigned int v34;
  void (*v35)(_QWORD);
  unsigned __int64 v36;
  bool v37;
  int v38;
  char v39;
  bool v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;

  v5 = *(unsigned __int8*)(a3 + 4);
  if (*(_DWORD*)a3 != 0 || v5 != 0) {
    if (v5 > 1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(result);
    }
    v8 = *(_QWORD*)(a3 + 8);
    v9 = ~*(_DWORD*)a3;
    v10 = *(_QWORD*)(result + 176);
    v11 = a2;
    v12 = *(_QWORD*)(result + 184);
  LABEL_11:
    explicit = atomic_load_explicit((atomic_ullong* volatile)(v11 + 16),
                                    memory_order_acquire);
    if ((explicit & 2) != 0) {
    LABEL_15:
      nn_diag_detail_AbortImpl_plt_856170(v12);
    }
    v14 = (unsigned int)~v9;
    v15 = v5;
    v16 = v8;
    v17 = v9;
    v18 = v11;
    v19 = v10;
    v20 = v12;
    v21 = explicit;
    while (1) {
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v11 + 16), &v21, explicit | 2,
          memory_order_acquire, memory_order_acquire);
      if (v21 == explicit) {
        break;
      }
      explicit = v21;
      if ((v21 & 2) != 0) {
        goto LABEL_15;
      }
    }
    result = syncpt_api_5d3c00(v12, v11);
    if ((result & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    v22 = *(_QWORD*)(v18 + 16);
    if ((*(_BYTE*)v20 & 1) != 0 && *(_QWORD*)(v20 + 16) != 0 &&
        v17 <= *(_DWORD*)(v20 + 4)) {
      v36 = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(v20 + 24) + 8LL * v17),
          memory_order_acquire);
      if (v36 == -1) {
        goto LABEL_36;
      }
      v37 = v36 >= v16;
      v38 = v36 - v16;
      v39 = v37;
      v40 = v38 > -1;
      if (v15 == 1) {
        v40 = v39;
      }
      if (v40) {
        goto LABEL_36;
      }
    }
    nn_os_SdkMutexType_Lock_plt(v19);
    v23 = (atomic_ullong*)SdkData_e87798[0];
    if (*(_DWORD*)(v19 + 4) != 0) {
      v41 = *(_DWORD*)(v19 + 4);
      v24 = *(_DWORD*)v18;
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)StatusReg = 0x5000000D9LL;
      *(_QWORD*)(StatusReg + 16) = v16;
      *(_BYTE*)(StatusReg + 24) = v15;
      *(_DWORD*)(StatusReg + 8) = v24;
      *(_DWORD*)(StatusReg + 12) = v14;
      v26 = nn_sm_detail_SendSessionRequest(&v41);
      if (v26 == 0) {
        v26 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x1000000D9LL;
        if (v26 == 0) {
          goto LABEL_47;
        }
      }
      v27 = (void (*)(_QWORD))atomic_load_explicit(v23, memory_order_acquire);
      if (v27 != nullptr) {
        v27(v26);
      }
    }
    nn_os_SdkMutexType_Unlock_plt(v19);
    nn_os_SdkMutexType_Lock_plt(v19);
    if (*(_DWORD*)(v19 + 4) != 0) {
      v42 = *(_DWORD*)(v19 + 4);
      v28 = *(_DWORD*)v18;
      v29 = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)v29 = 0x1000000DALL;
      *(_DWORD*)(v29 + 8) = v28;
      v30 = nn_sm_detail_SendSessionRequest(&v42);
      if (v30 != 0 || (v30 = *(_DWORD*)(v29 + 8), *(_QWORD*)v29 = 0x1000000DALL,
                       v30 != 0)) {
        v31 = (void (*)(_QWORD))atomic_load_explicit(v23, memory_order_acquire);
        if (v31 != nullptr) {
          v31(v30);
        }
      }
    }
    nn_os_SdkMutexType_Unlock_plt(v19);
    while ((nn_os_TimedWaitSystemEvent_plt(*(_QWORD*)(v18 + 8), 1000000000) &
            1) == 0)
      ;
    nn_os_SdkMutexType_Lock_plt(v19);
    if (*(_DWORD*)(v19 + 4) == 0) {
      goto LABEL_35;
    }
    v43 = *(_DWORD*)(v19 + 4);
    v32 = *(_DWORD*)v18;
    v33 = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)v33 = 0x5000000D9LL;
    *(_QWORD*)(v33 + 16) = v16;
    *(_BYTE*)(v33 + 24) = v15;
    *(_DWORD*)(v33 + 8) = v32;
    *(_DWORD*)(v33 + 12) = v14;
    v34 = nn_sm_detail_SendSessionRequest(&v43);
    if (v34 != 0 ||
        (v34 = *(_DWORD*)(v33 + 8), *(_QWORD*)v33 = 0x1000000D9LL, v34 != 0)) {
      v35 = (void (*)(_QWORD))atomic_load_explicit(v23, memory_order_acquire);
      if (v35 != nullptr) {
        v35(v34);
      }
    LABEL_35:
      result = nn_os_SdkMutexType_Unlock_plt(v19);
    LABEL_36:
      atomic_store(v22 & 0xFFFFFFFFFFFFFFFDLL, (unsigned __int64*)(v18 + 16));
      __builtin_arm_dmb(0xBu);
      return result;
    }
  LABEL_47:
    result = nn_os_SdkMutexType_Unlock_plt(v19);
    *(_QWORD*)(v18 + 24) = v14 | ((unsigned __int64)v15 << 32);
    *(_QWORD*)(v18 + 32) = v16;
    v22 = (v22 & 0xFFFFFFFFFFFFFFFELL) + 4;
    goto LABEL_36;
  }
  v8 = *(_QWORD*)(a3 + 8);
  if (v8 != 0) {
    v9 = -1;
    v10 = *(_QWORD*)(result + 176);
    v11 = a2;
    v12 = *(_QWORD*)(result + 184);
    goto LABEL_11;
  }
  return result;
}

__int64 nn_syncpt_5d4060(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  __int64 result;
  unsigned __int64 explicit;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 StatusReg;
  unsigned int v18;
  void (*v19)(_QWORD);
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v24;
  bool v25;
  int v26;
  __int64 v27;
  char v28;
  bool v29;
  unsigned int v30;

  v3 = *(_QWORD*)(a1 + 176);
  result = *(_QWORD*)(a1 + 184);
  explicit = atomic_load_explicit((atomic_ullong* volatile)(a2 + 4),
                                  memory_order_acquire);
  if ((explicit & 1) == 0) {
    v6 = explicit & 0xFFFFFFFFFFFFFFFCLL;
    v7 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 6),
                              memory_order_acquire);
    v8 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 8),
                              memory_order_acquire);
    v9 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 4),
                              memory_order_acquire);
    v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = v9 & 1;
    if (v10 == v6 && v11 == 0) {
      if ((*(_BYTE*)result & 1) == 0 || *(_QWORD*)(result + 16) == 0 ||
          *(_DWORD*)(result + 4) < (unsigned int)~(_DWORD)v7) {
        goto LABEL_8;
      }
      v24 = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(result + 24) +
                                    8LL * (unsigned int)~(_DWORD)v7),
          memory_order_acquire);
      if (v24 != -1) {
        v25 = v24 >= v8;
        v26 = v24 - v8;
        v27 = v7 & 0xFF00000000LL;
        v28 = v25;
        v29 = v26 > -1;
        if (v27 == 0x100000000LL) {
          v29 = v28;
        }
        if (!v29) {
        LABEL_8:
          v13 = a2;
          v14 = v3;
          nn_os_SdkMutexType_Lock_plt(v3);
          v15 = v14;
          if (*(_DWORD*)(v14 + 4) != 0) {
            v30 = *(_DWORD*)(v14 + 4);
            v16 = *v13;
            StatusReg = __builtin_arm_rsr64("tpidrro_el0");
            *(_QWORD*)StatusReg = 0x1000000DALL;
            *(_DWORD*)(StatusReg + 8) = v16;
            v18 = nn_sm_detail_SendSessionRequest(&v30);
            if (v18 != 0 || (v18 = *(_DWORD*)(StatusReg + 8),
                             *(_QWORD*)StatusReg = 0x1000000DALL, v18 != 0)) {
              v19 = (void (*)(_QWORD))atomic_load_explicit(
                  (atomic_ullong* volatile)SdkData_e87798[0],
                  memory_order_acquire);
              if (v19 != nullptr) {
                v19(v18);
              }
            }
            v15 = v14;
          }
          result = nn_os_SdkMutexType_Unlock_plt(v15);
          a2 = v13;
        }
      }
      v20 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 4),
                                 memory_order_acquire);
      if ((v20 & 0xFFFFFFFFFFFFFFFCLL) == v6 && (v20 & 1) == 0) {
        v22 = v20;
        do {
          atomic_compare_exchange_strong((atomic_ullong* volatile)(a2 + 4),
                                         &v22, v20 | 1);
          if (v22 == v20) {
            break;
          }
          v20 = v22;
        } while ((v22 & 0xFFFFFFFFFFFFFFFCLL) == v6 && (v22 & 1) == 0);
      }
    }
  }
  return result;
}

__int64 nn_syncpt_5d4910(unsigned __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  unsigned __int64 StatusReg;
  unsigned int v6;
  unsigned int v7;
  void (*explicit)(_QWORD);
  unsigned int v9;

  v1 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)&SdkData_f6e830, (unsigned __int64*)&v1, a1,
      memory_order_acquire, memory_order_acquire);
  if (v1 != 0) {
    return 131315;
  }
  v2 = nn_os_SdkMutexType_Lock_plt(&SdkData_f6e82c);
  if ((SdkData_f6e828 & 1) != 0) {
  LABEL_3:
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6e82c);
    return 0;
  }
  v4 = nn_gsv_GetUserSession_plt(v2);
  nn_os_SdkMutexType_Lock_plt(v4);
  if (*(_DWORD*)(v4 + 4) != 0) {
    v9 = *(_DWORD*)(v4 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 227;
    v6 = nn_sm_detail_SendSessionRequest(&v9);
    if (v6 == 0) {
      v6 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x1000000E3LL;
      if (v6 == 0) {
        nn_os_SdkMutexType_Unlock_plt(v4);
        SdkData_f6e828 = 1;
        goto LABEL_3;
      }
    }
    v7 = v6;
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v6);
    }
    nn_os_SdkMutexType_Unlock_plt(v4);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v4);
    v7 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f6e82c);
  atomic_store(0, (unsigned __int64*)&SdkData_f6e830);
  return v7;
}

__int64 nn_syncpt_5d4a80(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 StatusReg;
  unsigned int v8;
  void (*explicit)(_QWORD);
  __int64 v11;
  int v12;
  unsigned int v13;

  v6 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v6);
  if (*(_DWORD*)(v6 + 4) != 0) {
    v13 = *(_DWORD*)(v6 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x1000000E5LL;
    *(_DWORD*)(StatusReg + 8) = 1;
    v8 = nn_sm_detail_SendSessionRequest(&v13);
    if (v8 != 0 || (v8 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x4000000E5LL, v8 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v8);
      }
      nn_os_SdkMutexType_Unlock_plt(v6);
    }
    else {
      v11 = *(_QWORD*)(StatusReg + 16);
      v12 = *(_DWORD*)(StatusReg + 12);
      nn_os_SdkMutexType_Unlock_plt(v6);
      *a2 = a3;
      a2[1] = 0;
      *((_DWORD*)a2 + 2) = v12;
      *a1 = v11;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v6);
    return 199411;
  }
  return v8;
}

__int64 nn_syncpt_5d4b70(__int64 a1)
{
  __int64 v2;
  int v3;
  unsigned __int64 StatusReg;
  unsigned int v5;
  void (*explicit)(_QWORD);
  unsigned int v8;

  v2 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v2);
  if (*(_DWORD*)(v2 + 4) != 0) {
    v8 = *(_DWORD*)(v2 + 4);
    v3 = *(_DWORD*)(a1 + 8);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 0x2000000E6LL;
    *(_DWORD*)(StatusReg + 8) = v3;
    *(_DWORD*)(StatusReg + 12) = 1;
    v5 = nn_sm_detail_SendSessionRequest(&v8);
    if (v5 != 0 || (v5 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x1000000E6LL, v5 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v5);
      }
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(v2);
}

#pragma GCC visibility pop
