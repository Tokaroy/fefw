#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6b6370(__int64, __int64, unsigned int, __int64);
__int64 SdkRoutine_6b7130();
__int64 nn_chat_6b73c0(__int64, unsigned int);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gs_sdk_CalculateNativeImageHandle_plt(_QWORD, _QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD);
__int64 nn_gsv_GetUserSession_plt_alt1(void);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt_alt1(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt_alt1(__int64);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
__int64 nn_vi2_5e59a0(__int64);
__int64 nn_vi2_5e6180(__int64, unsigned int*);
__int64 nn_vi2_5e6400(__int64);
__int64 nn_vi2_5e66a0(__int64, unsigned int);
extern __int64 SdkData_1046808;
extern __int64 nn_chat_gsv_detail_g_ImageSession;
extern void (*SdkData_e87798[4])();
void SdkRoutine_5e2c90();
void nn_sm_detail_CloseSession(unsigned int* result);
__int64 nn_chat_6b5e30(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4,
                       unsigned int a5, __int64 a6, char a7, __int64 a8,
                       __int64 a9, __int64 a10);
__int64 nn_chat_6b5f40(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nn_chat_6b60d0(_QWORD* a1, __int64 a2, char a3);
__int64 nn_chat_6b6200(__int64* a1, __int64 a2);
__int64 nn_chat_6b6810(_QWORD* a1, __int64 a2);
__int64 nn_chat_6b68f0(__int64 a1, _DWORD* a2, __int64* a3, unsigned __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nn_chat_6b6a30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nn_chat_6b6b00(__int64 a1, __int64 a2, unsigned int a3);
__int64 nn_chat_6b6c50(__int64 a1);
__int64 nn_chat_6b6e90(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nn_chat_6b7030(__int64 a1, unsigned int** a2);
__int64 nn_chat_6b7170(__int64 a1);
__int64 nn_chat_6b7240(__int64 a1, __int64* a2, __int64 a3);
__int64 nn_chat_6b76e0(unsigned int* a1, __int64* a2, __int64 a3, __int64 a4);

__int64 nn_chat_6b5e30(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4,
                       unsigned int a5, __int64 a6, char a7, __int64 a8,
                       __int64 a9, __int64 a10)
{
  int v15;
  __int64 v16;
  int v17;
  unsigned int* v18;
  unsigned __int64 StatusReg;
  unsigned int v20;
  void (*explicit)(_QWORD);
  __int64 v23;
  __int64 v24;

  v15 = nn_gs_sdk_CalculateNativeImageHandle_plt(*(unsigned int*)(a3 + 4), a5);
  v16 = *a1;
  v17 = v15;
  nn_os_SdkMutexType_Lock_plt(a4);
  v18 = *(unsigned int**)(a4 + 16);
  if (v18 != nullptr) {
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 16) = v17;
    *(_QWORD*)(StatusReg + 20) = a6;
    *(_BYTE*)(StatusReg + 28) = a7;
    *(_QWORD*)StatusReg = 0xA00000083LL;
    *(_QWORD*)(StatusReg + 8) = v16;
    *(_QWORD*)(StatusReg + 32) = a9;
    *(_QWORD*)(StatusReg + 40) = a10;
    v20 = nn_sm_detail_SendSessionRequest(v18);
    if (v20 == 0) {
      v20 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x500000083LL;
      if (v20 == 0) {
        v23 = *(_QWORD*)(StatusReg + 20);
        v24 = *(_QWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(a4);
        a1[2] = v24;
        a1[3] = v23;
        *a2 = v24;
        a2[1] = v23;
        return v20;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v20);
    }
  }
  else {
    v20 = 511602;
  }
  nn_os_SdkMutexType_Unlock_plt(a4);
  return v20;
}

__int64 nn_chat_6b5f40(__int64* a1, __int64* a2, __int64* a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8;
  __int64 v12;
  unsigned __int64 StatusReg;
  unsigned int v14;
  void (*explicit)(_QWORD);
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;

  v8 = a4;
  v12 = nn_gsv_GetUserSession_plt(a1, a2, a3, a4, a5, a6, a7, a8);
  v24 = a3[4];
  v25 = a3[5];
  v26 = a3[6];
  v27 = a3[7];
  v20 = *a3;
  v21 = a3[1];
  v22 = a3[2];
  v23 = a3[3];
  nn_os_SdkMutexType_Lock_plt(v12);
  if (*(_DWORD*)(v12 + 4) != 0) {
    v28 = *(_DWORD*)(v12 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = v8;
    *(_QWORD*)(StatusReg + 48) = v25;
    *(_QWORD*)(StatusReg + 56) = v26;
    *(_QWORD*)(StatusReg + 64) = v27;
    *(_QWORD*)StatusReg = 0x110000051BLL;
    *(_QWORD*)(StatusReg + 8) = v20;
    *(_QWORD*)(StatusReg + 16) = v21;
    *(_QWORD*)(StatusReg + 24) = v22;
    *(_QWORD*)(StatusReg + 32) = v23;
    *(_QWORD*)(StatusReg + 40) = v24;
    v14 = nn_sm_detail_SendSessionRequest(&v28);
    if (v14 != 0 || (v14 = *(_DWORD*)(StatusReg + 8),
                     *(_QWORD*)StatusReg = 0x50000051BLL, v14 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v14);
      }
      nn_os_SdkMutexType_Unlock_plt(v12);
    }
    else {
      v17 = *(_QWORD*)(StatusReg + 20);
      v18 = *(_QWORD*)(StatusReg + 12);
      nn_os_SdkMutexType_Unlock_plt(v12);
      v19 = 4096;
      if (v17 > 0x1000) {
        v19 = v17;
      }
      *a1 = (v18 + v19 - 1) & -v19;
      *a2 = v19;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v12);
    return 199411;
  }
  return v14;
}

__int64 nn_chat_6b60d0(_QWORD* a1, __int64 a2, char a3)
{
  unsigned int* v6;
  unsigned __int64 StatusReg;
  unsigned int v8;
  void (*explicit)(_QWORD);
  __int64 v11;

  nn_os_SdkMutexType_Lock_plt(&nn_chat_gsv_detail_g_ImageSession);
  v6 = (unsigned int*)SdkData_1046808;
  if (SdkData_1046808 != 0) {
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_BYTE*)(StatusReg + 16) = a3;
    *(_QWORD*)StatusReg = 0x3000000F7LL;
    *(_QWORD*)(StatusReg + 8) = a2;
    v8 = nn_sm_detail_SendSessionRequest(v6);
    if (v8 != 0 || (v8 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x3000000F7LL, v8 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v8);
      }
      nn_os_SdkMutexType_Unlock_plt(&nn_chat_gsv_detail_g_ImageSession);
    }
    else {
      v11 = *(_QWORD*)(StatusReg + 12);
      nn_os_SdkMutexType_Unlock_plt(&nn_chat_gsv_detail_g_ImageSession);
      *a1 = v11;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(&nn_chat_gsv_detail_g_ImageSession);
    return 511602;
  }
  return v8;
}

__int64 nn_chat_6b6200(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned int* v5;
  _QWORD* StatusReg;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  char v10;
  char v11;
  unsigned __int64 v12;
  __int64 result;
  __int64 (*explicit)(_QWORD);
  void (*v15)(__int64*, __int64);
  __int64 v16;

  v2 = *a1;
  nn_os_SdkMutexType_Lock_plt(a2 + 536);
  v5 = *(unsigned int**)(a2 + 552);
  if (v5 != nullptr) {
    StatusReg = (_QWORD*)__builtin_arm_rsr64("tpidrro_el0");
    *StatusReg = 0x200000076LL;
    StatusReg[1] = v2;
    v7 = nn_sm_detail_SendSessionRequest(v5);
    if ((_DWORD)v7 != 0 || (v7 = *((unsigned int*)StatusReg + 2),
                            *StatusReg = 0x100000076LL, (_DWORD)v7 != 0)) {
      explicit = (__int64 (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        v7 = explicit((unsigned int)v7);
      }
      nn_diag_detail_AbortImpl_plt_856170(v7);
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a2 + 536);
  do {
    v8 = *((_DWORD*)a1 + 2);
    nn_os_SdkMutexType_Lock_plt(a2 + 520);
    v9 = *(_QWORD*)(a2 + 528);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 64), 1u,
                                memory_order_relaxed);
    }
    nn_os_SdkMutexType_Unlock_plt(a2 + 520);
    v10 = SdkRoutine_6b6370(a2 + 136, v9, v8, 1000000000);
    if (v9 != 0 && atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 64),
                                             0xFFFFFFFFFFFFFFFFLL,
                                             memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v11 = v10;
      v15 = *(void (**)(__int64*, __int64))(v9 + 48);
      v16 = *(_QWORD*)(v9 + 56);
      v15(&v16, v9);
      v10 = v11;
    }
  } while ((v10 & 1) == 0);
  v12 = *((unsigned int*)a1 + 2);
  result = nn_vi2_5e66a0(a2 + 152, *((_DWORD*)a1 + 2));
  atomic_fetch_and_explicit(
      (atomic_uint* volatile)(a2 + ((v12 >> 3) & 0x1FFFFFFC) + 8), ~(1 << v12),
      memory_order_release);
  *a1 = 0;
  *((_DWORD*)a1 + 2) = 0;
  return result;
}

__int64 nn_chat_6b6810(_QWORD* a1, __int64 a2)
{
  unsigned int* v2;
  __int64 v3;
  unsigned int* v5;
  unsigned __int64 StatusReg;
  __int64 v7;
  __int64 (*explicit)(_QWORD);

  v2 = (unsigned int*)(a1 + 1);
  v3 = *a1;
  nn_os_SdkMutexType_Lock_plt(*a1);
  v5 = *(unsigned int**)(v3 + 16);
  if (v5 != nullptr) {
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 16777253;
    *(_DWORD*)(StatusReg + 16) = ((unsigned __int64)v2 >> 34) & 0x3FFFFFFC |
                                 ((unsigned __int64)v2 >> 4) & 0xF0000000;
    *(_DWORD*)(StatusReg + 8) = 128;
    *(_DWORD*)(StatusReg + 12) = (_DWORD)v2;
    v7 = nn_sm_detail_SendSessionRequest(v5);
    if ((_DWORD)v7 != 0 ||
        (v7 = *(unsigned int*)(StatusReg + 8),
         *(_QWORD*)StatusReg = 0x100000025LL, (_DWORD)v7 != 0)) {
      explicit = (__int64 (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        v7 = explicit((unsigned int)v7);
      }
      nn_diag_detail_AbortImpl_plt_856170(v7);
    }
    nn_os_SdkMutexType_Unlock_plt(v3);
    return nn_vi2_5e6180(a2, v2);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v3);
    return nn_vi2_5e6400(a2);
  }
}

__int64 nn_chat_6b68f0(__int64 a1, _DWORD* a2, __int64* a3, unsigned __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8;
  int v9;
  __int64 v12;
  unsigned __int64 StatusReg;
  unsigned int v14;
  unsigned int v15;
  void (*explicit)(_QWORD);
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;

  if (HIDWORD(a4) != 0) {
    return 65779;
  }
  v8 = a5;
  v9 = a4;
  v12 = nn_gsv_GetUserSession_plt(a1, a2, a3, a4, a5, a6, a7, a8);
  nn_os_SdkMutexType_Lock_plt(v12);
  if (*(_DWORD*)(v12 + 4) != 0) {
    v27 = *(_DWORD*)(v12 + 4);
    v23 = a3[4];
    v24 = a3[5];
    v25 = a3[6];
    v26 = a3[7];
    v19 = *a3;
    v20 = a3[1];
    v21 = a3[2];
    v22 = a3[3];
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = v9;
    *(_DWORD*)(StatusReg + 76) = v8;
    *(_QWORD*)(StatusReg + 48) = v24;
    *(_QWORD*)(StatusReg + 56) = v25;
    *(_QWORD*)(StatusReg + 64) = v26;
    *(_QWORD*)StatusReg = 0x12000004CBLL;
    *(_QWORD*)(StatusReg + 8) = v19;
    *(_QWORD*)(StatusReg + 16) = v20;
    *(_QWORD*)(StatusReg + 24) = v21;
    *(_QWORD*)(StatusReg + 32) = v22;
    *(_QWORD*)(StatusReg + 40) = v23;
    v14 = nn_sm_detail_SendSessionRequest(&v27);
    if (v14 != 0) {
      v15 = v14;
    }
    else {
      v15 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x2000004CBLL;
      if (v15 == 0) {
        v18 = *(_DWORD*)(StatusReg + 12);
        nn_os_SdkMutexType_Unlock_plt(v12);
        *a2 = v18;
        return v15;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v15);
    }
    nn_os_SdkMutexType_Unlock_plt(v12);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(v12);
    return 199411;
  }
  return v15;
}

__int64 nn_chat_6b6a30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8;
  __int64 v9;
  unsigned __int64 StatusReg;
  unsigned int v11;
  unsigned int v12;
  void (*explicit)(_QWORD);
  int v15;
  unsigned int v16;

  v8 = a2;
  v9 = nn_gsv_GetUserSession_plt(a1, a2, a3, a4, a5, a6, a7, a8);
  nn_os_SdkMutexType_Lock_plt(v9);
  if (*(_DWORD*)(v9 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v9);
    v15 = 199411;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v16 = *(_DWORD*)(v9 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_DWORD*)(StatusReg + 8) = v8;
  *(_QWORD*)StatusReg = 0x1000004CCLL;
  v11 = nn_sm_detail_SendSessionRequest(&v16);
  if (v11 != 0) {
    v12 = v11;
  LABEL_7:
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v12);
    }
    nn_os_SdkMutexType_Unlock_plt(v9);
    v15 = v12;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v12 = *(_DWORD*)(StatusReg + 8);
  *(_QWORD*)StatusReg = 0x1000004CCLL;
  if (v12 != 0) {
    goto LABEL_7;
  }
  return nn_os_SdkMutexType_Unlock_plt(v9);
}

__int64 nn_chat_6b6b00(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int* v6;
  _QWORD* StatusReg;
  __int64 v8;
  __int64 v9;
  char v10;
  char v11;
  __int64 result;
  __int64 (*explicit)(_QWORD);
  void (*v14)(__int64*, __int64);
  __int64 v15;

  nn_os_SdkMutexType_Lock_plt(a1 + 536);
  v6 = *(unsigned int**)(a1 + 552);
  if (v6 != nullptr) {
    StatusReg = (_QWORD*)__builtin_arm_rsr64("tpidrro_el0");
    *StatusReg = 0x20000008ALL;
    StatusReg[1] = a2;
    v8 = nn_sm_detail_SendSessionRequest(v6);
    if ((_DWORD)v8 != 0 || (v8 = *((unsigned int*)StatusReg + 2),
                            *StatusReg = 0x10000008ALL, (_DWORD)v8 != 0)) {
      explicit = (__int64 (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        v8 = explicit((unsigned int)v8);
      }
      nn_diag_detail_AbortImpl_plt_856170(v8);
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 536);
  do {
    nn_os_SdkMutexType_Lock_plt(a1 + 520);
    v9 = *(_QWORD*)(a1 + 528);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 64), 1u,
                                memory_order_relaxed);
    }
    nn_os_SdkMutexType_Unlock_plt(a1 + 520);
    v10 = SdkRoutine_6b6370(a1 + 136, v9, a3, 1000000000);
    if (v9 != 0 && atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 64),
                                             0xFFFFFFFFFFFFFFFFLL,
                                             memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v11 = v10;
      v14 = *(void (**)(__int64*, __int64))(v9 + 48);
      v15 = *(_QWORD*)(v9 + 56);
      v14(&v15, v9);
      v10 = v11;
    }
  } while ((v10 & 1) == 0);
  result = nn_vi2_5e66a0(a1 + 152, a3);
  atomic_fetch_and_explicit((atomic_uint* volatile)(a1 + 4LL * (a3 >> 5) + 8),
                            ~(1 << a3), memory_order_release);
  return result;
}

__int64 nn_chat_6b6c50(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  unsigned int* v4;
  unsigned __int64 StatusReg;
  __int64 v6;
  void (*explicit)(_QWORD);
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    char gap8_[4];
    unsigned int v18;
    void (*v19)(__int64*);
  } v18_;
  __int64 v20;

  if ((atomic_exchange_explicit((atomic_uchar* volatile)(a1 + 440), 1u,
                                memory_order_acquire) &
       1) != 0) {
    return 2674;
  }
  v2 = a1 + 536;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  nn_os_SdkMutexType_Lock_plt(a1 + 536);
  v4 = *(unsigned int**)(a1 + 552);
  if (v4 == nullptr) {
    v1 = 511602;
  LABEL_9:
    v8 = nn_os_SdkMutexType_Unlock_plt(v2);
  LABEL_10:
    if ((*(_BYTE*)(a1 + 440) & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v8);
    }
    atomic_store(0, (unsigned __int8*)(a1 + 440));
    return v1;
  }
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 17;
  v6 = nn_sm_detail_SendSessionRequest(v4);
  v1 = v6;
  if ((_DWORD)v6 != 0 || (v1 = *(_DWORD*)(StatusReg + 8),
                          *(_QWORD*)StatusReg = 0x200000011LL, v1 != 0)) {
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v1);
    }
    goto LABEL_9;
  }
  v10 = *(unsigned int*)(StatusReg + 12);
  if ((unsigned int)v10 > 0x3FF) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  v11 = a1 + 448;
  nn_os_SdkMutexType_Unlock_plt(v2);
  v18_.v18 = 0;
  v1 = ((__int64 (*)(__int64, unsigned int*, _QWORD))SdkRoutine_5e2c90)(
      v2, &v18_.v18, (unsigned int)v10);
  if (v1 != 0) {
    v12 = a1 + 448;
  }
  else {
    v13 = v18_.v18;
    v18_.v18 = 0;
    v14 = nn_os_AttachReadableHandleToSystemEvent_plt(a1 + 448, v13, 1, 0);
    if ((*(_BYTE*)(a1 + 440) & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v14);
    }
    *(_QWORD*)(a1 + 512) = 1;
    *(_QWORD*)(a1 + 496) = SdkRoutine_6b7130;
    *(_QWORD*)(a1 + 504) = a1;
    nn_vi2_5e59a0(a1 + 152);
    *(_QWORD*)(a1 + 304) = v2;
    nn_os_SdkMutexType_Lock_plt(a1 + 136);
    *(_QWORD*)(a1 + 144) = a1 + 304;
    nn_os_SdkMutexType_Unlock_plt(a1 + 136);
    *(_QWORD*)a1 = (unsigned __int64)(v10 + 32) >> 5;
    nn_os_SdkMutexType_Lock_plt(a1 + 520);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 512), 1u,
                              memory_order_relaxed);
    v15 = *(_QWORD*)(a1 + 528);
    *(_QWORD*)(a1 + 528) = v11;
    if (v15 != 0 && atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v15 + 64),
                        0xFFFFFFFFFFFFFFFFLL, memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v16 = *(_QWORD*)(v15 + 56);
      v18_.v19 = *(void (**)(__int64*))(v15 + 48);
      v20 = v16;
      v18_.v19(&v20);
    }
    nn_os_SdkMutexType_Unlock_plt(a1 + 520);
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 512),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v17 = *(_QWORD*)(a1 + 504);
      v18_.v19 = *(void (**)(__int64*))(a1 + 496);
      v20 = v17;
      ((void (*)(__int64*, __int64))v18_.v19)(&v20, a1 + 448);
    }
    v12 = 0;
  }
  v8 = v18_.v18;
  if (v18_.v18 != 0) {
    v8 = nn_os_CloseNativeHandle_plt(v18_.v18);
  }
  if (v1 != 0 && v12 != 0) {
    if (v12 != v11) {
      nn_diag_detail_AbortImpl_plt_856170(v8);
    }
    goto LABEL_10;
  }
  return v1;
}

__int64 nn_chat_6b6e90(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9;
  unsigned __int64 StatusReg;
  unsigned int v11;
  void (*v12)(_QWORD);
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned int v35;
  void (*explicit)(_QWORD);
  unsigned int* v37;
  unsigned int v38;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v9 = nn_gsv_GetUserSession_plt(a1, a2, a3, a4, a5, a6, a7, a8),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nn_os_SdkMutexType_Lock_plt(v9),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (*(_DWORD*)(v9 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v9),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return 199411;
  }
  LODWORD(v37) = *(_DWORD*)(v9 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 1217;
  v11 = nn_sm_detail_SendSessionRequest((unsigned int*)&v37),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v11 == 0) {
    v11 = *(_DWORD*)(StatusReg + 8);
    *(_QWORD*)StatusReg = 0x1000004C1LL;
    if (v11 == 0) {
      v15 = nn_os_SdkMutexType_Unlock_plt(v9),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v38 = 0;
      v23 = nn_gsv_GetUserSession_plt(v15, v16, v17, v18, v19, v20, v21, v22),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v37 = &v38;
      v24 = nn_chat_6b7030(v23, &v37),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v32 = v38;
      if ((_DWORD)v24 != 0) {
        v11 = v24;
        if (v38 == 0) {
          goto LABEL_14;
        }
      }
      else {
        nn_os_SdkMutexType_Lock_plt(a1 + 12),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (*(_BYTE*)(a1 + 4) != 1) {
          *(_DWORD*)(a1 + 8) = v32;
          *(_BYTE*)(a1 + 4) = 1;
          nn_os_SdkMutexType_Unlock_plt(a1 + 12),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v11 = 0;
          *(_QWORD*)(a1 + 16) = a1 + 8;
          return v11;
        }
        v24 = nn_os_SdkMutexType_Unlock_plt(a1 + 12),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v32 = v38;
        v11 = 6258;
        if (v38 == 0) {
          goto LABEL_14;
        }
      }
      v24 = nn_os_CloseNativeHandle_plt(v32),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LABEL_14:
      v33 = nn_gsv_GetUserSession_plt(v24, v25, v26, v27, v28, v29, v30, v31),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      nn_os_SdkMutexType_Lock_plt(v33),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (*(_DWORD*)(v33 + 4) != 0) {
        LODWORD(v37) = *(_DWORD*)(v33 + 4);
        v34 = __builtin_arm_rsr64("tpidrro_el0");
        *(_QWORD*)v34 = 1219;
        v35 = nn_sm_detail_SendSessionRequest((unsigned int*)&v37),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v35 != 0 || (v35 = *(_DWORD*)(v34 + 8),
                         *(_QWORD*)v34 = 0x1000004C3LL, v35 != 0)) {
          explicit = (void (*)(_QWORD))atomic_load_explicit(
              (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (explicit != nullptr) {
            explicit(v35);
          }
        }
      }
      v13 = v33;
      goto LABEL_7;
    }
  }
  v12 = (void (*)(_QWORD))atomic_load_explicit(
      (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v12 != nullptr) {
    v12(v11),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v13 = v9;
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt(v13),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  return v11;
}

__int64 nn_chat_6b7030(__int64 a1, unsigned int** a2)
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
  *(_QWORD*)StatusReg = 1218;
  v5 = nn_sm_detail_SendSessionRequest(&v11);
  if ((_DWORD)v5 != 0) {
    v6 = v5;
    v7 = 0;
    goto LABEL_6;
  }
  v7 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x80000001000004C2LL;
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

__int64 nn_chat_6b7170(__int64 a1)
{
  unsigned int* v1;
  unsigned int* v3;
  __int64 v5;
  unsigned __int64 StatusReg;
  unsigned int v7;
  void (*explicit)(_QWORD);
  unsigned int v10;

  v1 = *(unsigned int**)(a1 + 16);
  if (v1 != nullptr) {
    nn_os_SdkMutexType_Lock_plt_alt1(a1 + 12);
    v3 = (unsigned int*)(a1 + 8);
    if (*(_BYTE*)(a1 + 4) == 1 && v3 == v1) {
      nn_sm_detail_CloseSession(v3);
      *(_BYTE*)(a1 + 4) = 0;
    }
    nn_os_SdkMutexType_Unlock_plt_alt1(a1 + 12);
    *(_QWORD*)(a1 + 16) = 0;
  }
  v5 = nn_gsv_GetUserSession_plt_alt1();
  nn_os_SdkMutexType_Lock_plt_alt1(v5);
  if (*(_DWORD*)(v5 + 4) != 0) {
    v10 = *(_DWORD*)(v5 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 1219;
    v7 = nn_sm_detail_SendSessionRequest(&v10);
    if (v7 != 0 || (v7 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x1000004C3LL, v7 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v7);
      }
    }
  }
  return nn_os_SdkMutexType_Unlock_plt_alt1(v5);
}

__int64 nn_chat_6b7240(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int* v14;
  unsigned __int64 StatusReg;
  unsigned int v16;
  void (*explicit)(_QWORD);

  v4 = a2 + 1;
  v3 = *a2;
  if (*a2 != 0) {
    v7 = 0;
    while (1) {
      v8 = *((_DWORD*)v4 + v7);
      if (v8 != -1) {
        break;
      }
    LABEL_3:
      if (++v7 == v3) {
        return 6258;
      }
    }
    v9 = *((_DWORD*)v4 + v7);
    while (1) {
      v10 = __clz(__rbit32(~v8));
      v11 = 1 << v10;
      atomic_compare_exchange_strong_explicit(
          (atomic_uint* volatile)((char*)v4 + 4 * v7), (unsigned int*)&v9,
          (1 << v10) | v8, memory_order_acquire, memory_order_acquire);
      if (v9 == v8) {
        break;
      }
      v8 = v9;
      if (v9 == -1) {
        goto LABEL_3;
      }
    }
    v12 = v10 | (32 * v7);
    nn_chat_6b73c0((__int64)a2, v12);
    nn_os_SdkMutexType_Lock_plt(a2 + 67);
    v14 = (unsigned int*)a2[69];
    if (v14 != nullptr) {
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_DWORD*)(StatusReg + 16) = v12;
      *(_QWORD*)StatusReg = 0x300000077LL;
      *(_QWORD*)(StatusReg + 8) = a3;
      v16 = nn_sm_detail_SendSessionRequest(v14);
      if (v16 == 0) {
        v16 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x100000077LL;
        if (v16 == 0) {
          nn_os_SdkMutexType_Unlock_plt(a2 + 67);
          *(_QWORD*)a1 = a3;
          *(_DWORD*)(a1 + 8) = v12;
          return v16;
        }
      }
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v16);
      }
    }
    else {
      v16 = 511602;
    }
    nn_os_SdkMutexType_Unlock_plt(a2 + 67);
    nn_vi2_5e66a0((__int64)(a2 + 19), v12);
    atomic_fetch_and_explicit(
        (atomic_uint* volatile)((char*)v4 + 4 * (v7 & 0x7FFFFFF)), ~v11,
        memory_order_release);
  }
  else {
    return 6258;
  }
  return v16;
}

__int64 nn_chat_6b76e0(unsigned int* a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int* v16;
  unsigned __int64 StatusReg;
  unsigned int v18;
  void (*explicit)(_QWORD);

  v5 = a2 + 1;
  v4 = *a2;
  if (*a2 != 0) {
    v9 = 0;
    while (1) {
      v10 = *((_DWORD*)v5 + v9);
      if (v10 != -1) {
        break;
      }
    LABEL_3:
      if (++v9 == v4) {
        return 6258;
      }
    }
    v11 = *((_DWORD*)v5 + v9);
    while (1) {
      v12 = __clz(__rbit32(~v10));
      v13 = 1 << v12;
      atomic_compare_exchange_strong_explicit(
          (atomic_uint* volatile)((char*)v5 + 4 * v9), (unsigned int*)&v11,
          (1 << v12) | v10, memory_order_acquire, memory_order_acquire);
      if (v11 == v10) {
        break;
      }
      v10 = v11;
      if (v11 == -1) {
        goto LABEL_3;
      }
    }
    v14 = v12 | (32 * v9);
    nn_chat_6b73c0((__int64)a2, v14);
    nn_os_SdkMutexType_Lock_plt(a2 + 67);
    v16 = (unsigned int*)a2[69];
    if (v16 != nullptr) {
      StatusReg = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)(StatusReg + 16) = a4;
      *(_DWORD*)(StatusReg + 24) = v14;
      *(_QWORD*)StatusReg = 0x500000089LL;
      *(_QWORD*)(StatusReg + 8) = a3;
      v18 = nn_sm_detail_SendSessionRequest(v16);
      if (v18 == 0) {
        v18 = *(_DWORD*)(StatusReg + 8);
        *(_QWORD*)StatusReg = 0x100000089LL;
        if (v18 == 0) {
          nn_os_SdkMutexType_Unlock_plt(a2 + 67);
          *a1 = v14;
          return v18;
        }
      }
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v18);
      }
    }
    else {
      v18 = 511602;
    }
    nn_os_SdkMutexType_Unlock_plt(a2 + 67);
    nn_vi2_5e66a0((__int64)(a2 + 19), v14);
    atomic_fetch_and_explicit(
        (atomic_uint* volatile)((char*)v5 + 4 * (v9 & 0x7FFFFFF)), ~v13,
        memory_order_release);
  }
  else {
    return 6258;
  }
  return v18;
}

#pragma GCC visibility pop
