#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sm_detail_SendSessionRequest(unsigned int*);
extern void (*SdkData_e87798[4])();
__int64 nn_bcat_detail_2c4190(unsigned int* a1);
__int64 nn_bcat_detail_2c42c0(__int64 a1, unsigned int** a2, __int64* a3);
__int64 nn_bcat_detail_2c43c0(void* this_);
__int64 nn_bcat_detail_2c4450(_QWORD* a1, _QWORD* a2, __int64* a3, int a4);
__int64 nn_bcat_detail_2c4570(_DWORD* a1, __int64* a2, int a3, int a4);
__int64 nn_bcat_detail_2c4690(__int64 a1);
__int64 nn_bcat_detail_2c4740(__int64 a1, int a2);
__int64 nn_bcat_detail_2c4800(__int64 a1);

__int64 nn_bcat_detail_2c4190(unsigned int* a1)
{
  __int64 v1;
  unsigned __int64 StatusReg;
  unsigned int v3;
  void (*explicit)(__int64);
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int* v12;

  v12 = a1;
  v1 = ((__int64 (*)(void))nn_gsv_GetUserSession_plt)();
  nn_os_SdkMutexType_Lock_plt(v1);
  if (*(_DWORD*)(v1 + 4) == 0) {
    nn_os_SdkMutexType_Unlock_plt(v1);
    return 199411;
  }
  LODWORD(v11) = *(_DWORD*)(v1 + 4);
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 617;
  v3 = nn_sm_detail_SendSessionRequest((unsigned int*)&v11);
  if (v3 == 0) {
    v3 = *(_DWORD*)(StatusReg + 8);
    *(_QWORD*)StatusReg = 0x100000269LL;
    if (v3 == 0) {
      v7 = nn_os_SdkMutexType_Unlock_plt(v1);
      v8 = nn_gsv_GetUserSession_plt(v7);
      v11 = 1;
      v9 = nn_bcat_detail_2c42c0(v8, &v12, &v11);
      v3 = v9;
      if ((_DWORD)v9 == 0) {
        return v3;
      }
      v1 = nn_gsv_GetUserSession_plt(v9);
      nn_os_SdkMutexType_Lock_plt(v1);
      if (*(_DWORD*)(v1 + 4) == 0) {
        goto LABEL_7;
      }
      LODWORD(v11) = *(_DWORD*)(v1 + 4);
      v10 = __builtin_arm_rsr64("tpidrro_el0");
      *(_QWORD*)v10 = 619;
      LODWORD(v5) = nn_sm_detail_SendSessionRequest((unsigned int*)&v11);
      if ((_DWORD)v5 == 0) {
        LODWORD(v5) = *(_DWORD*)(v10 + 8);
        *(_QWORD*)v10 = 0x10000026BLL;
        if ((_DWORD)v5 == 0) {
          goto LABEL_7;
        }
      }
      explicit = (void (*)(__int64))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit == nullptr) {
        goto LABEL_7;
      }
      v5 = (unsigned int)v5;
      goto LABEL_6;
    }
  }
  explicit = (void (*)(__int64))atomic_load_explicit(
      (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
  if (explicit != nullptr) {
    v5 = v3;
  LABEL_6:
    explicit(v5);
  }
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt(v1);
  return v3;
}

__int64 nn_bcat_detail_2c42c0(__int64 a1, unsigned int** a2, __int64* a3)
{
  __int64 v6;
  unsigned __int64 StatusReg;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  void (*explicit)(_QWORD);
  __int64 v12;
  unsigned int v14;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (*(_DWORD*)(a1 + 4) == 0) {
    v9 = 199411;
    goto LABEL_11;
  }
  v14 = *(_DWORD*)(a1 + 4);
  v6 = *a3;
  StatusReg = __builtin_arm_rsr64("tpidrro_el0");
  *(_QWORD*)StatusReg = 0x20000026ALL;
  *(_QWORD*)(StatusReg + 8) = v6;
  v8 = nn_sm_detail_SendSessionRequest(&v14);
  if ((_DWORD)v8 != 0) {
    v9 = v8;
    v10 = 0;
    goto LABEL_6;
  }
  v10 = *(_DWORD*)(StatusReg + 12);
  *(_QWORD*)StatusReg = 0x800000010000026ALL;
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

__int64 nn_bcat_detail_2c43c0(void* this_)
{
  __int64 v1;
  unsigned __int64 StatusReg;
  unsigned int v3;
  void (*explicit)(_QWORD);
  unsigned int v6;

  v1 = nn_gsv_GetUserSession_plt(this_);
  nn_os_SdkMutexType_Lock_plt(v1);
  if (*(_DWORD*)(v1 + 4) != 0) {
    v6 = *(_DWORD*)(v1 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_QWORD*)StatusReg = 619;
    v3 = nn_sm_detail_SendSessionRequest(&v6);
    if (v3 != 0 || (v3 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x10000026BLL, v3 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v3);
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v1);
  return 0;
}

__int64 nn_bcat_detail_2c4450(_QWORD* a1, _QWORD* a2, __int64* a3, int a4)
{
  __int64 v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  unsigned int v11;
  void (*explicit)(_QWORD);
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;

  v8 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v8);
  if (*(_DWORD*)(v8 + 4) != 0) {
    v23 = *(_DWORD*)(v8 + 4);
    v19 = a3[4];
    v20 = a3[5];
    v21 = a3[6];
    v22 = a3[7];
    v15 = *a3;
    v16 = a3[1];
    v17 = a3[2];
    v18 = a3[3];
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = a4;
    *(_QWORD*)(StatusReg + 48) = v20;
    *(_QWORD*)(StatusReg + 56) = v21;
    *(_QWORD*)(StatusReg + 64) = v22;
    *(_QWORD*)StatusReg = 0x11000002C3LL;
    *(_QWORD*)(StatusReg + 8) = v15;
    *(_QWORD*)(StatusReg + 16) = v16;
    *(_QWORD*)(StatusReg + 24) = v17;
    *(_QWORD*)(StatusReg + 32) = v18;
    *(_QWORD*)(StatusReg + 40) = v19;
    v10 = nn_sm_detail_SendSessionRequest(&v23);
    if (v10 != 0) {
      v11 = v10;
    }
    else {
      v11 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x5000002C3LL;
      if (v11 == 0) {
        v13 = *(_QWORD*)(StatusReg + 12);
        *a2 = *(_QWORD*)(StatusReg + 20);
        *a1 = v13;
        goto LABEL_9;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v11);
    }
  }
  else {
    v11 = 199411;
  }
LABEL_9:
  nn_os_SdkMutexType_Unlock_plt(v8);
  return v11;
}

__int64 nn_bcat_detail_2c4570(_DWORD* a1, __int64* a2, int a3, int a4)
{
  __int64 v8;
  unsigned __int64 StatusReg;
  unsigned int v10;
  unsigned int v11;
  void (*explicit)(_QWORD);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;

  v8 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v8);
  if (*(_DWORD*)(v8 + 4) != 0) {
    v22 = *(_DWORD*)(v8 + 4);
    v18 = a2[4];
    v19 = a2[5];
    v20 = a2[6];
    v21 = a2[7];
    v14 = *a2;
    v15 = a2[1];
    v16 = a2[2];
    v17 = a2[3];
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 72) = a3;
    *(_DWORD*)(StatusReg + 76) = a4;
    *(_QWORD*)(StatusReg + 48) = v19;
    *(_QWORD*)(StatusReg + 56) = v20;
    *(_QWORD*)(StatusReg + 64) = v21;
    *(_QWORD*)StatusReg = 0x1200000277LL;
    *(_QWORD*)(StatusReg + 8) = v14;
    *(_QWORD*)(StatusReg + 16) = v15;
    *(_QWORD*)(StatusReg + 24) = v16;
    *(_QWORD*)(StatusReg + 32) = v17;
    *(_QWORD*)(StatusReg + 40) = v18;
    v10 = nn_sm_detail_SendSessionRequest(&v22);
    if (v10 != 0) {
      v11 = v10;
    }
    else {
      v11 = *(_DWORD*)(StatusReg + 8);
      *(_QWORD*)StatusReg = 0x200000277LL;
      if (v11 == 0) {
        *a1 = *(_DWORD*)(StatusReg + 12);
        goto LABEL_9;
      }
    }
    explicit = (void (*)(_QWORD))atomic_load_explicit(
        (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
    if (explicit != nullptr) {
      explicit(v11);
    }
  }
  else {
    v11 = 199411;
  }
LABEL_9:
  nn_os_SdkMutexType_Unlock_plt(v8);
  return v11;
}

__int64 nn_bcat_detail_2c4690(__int64 a1)
{
  int v1;
  __int64 v2;
  unsigned __int64 StatusReg;
  unsigned int v4;
  void (*explicit)(_QWORD);
  unsigned int v7;

  v1 = a1;
  v2 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v2);
  if (*(_DWORD*)(v2 + 4) != 0) {
    v7 = *(_DWORD*)(v2 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v1;
    *(_QWORD*)StatusReg = 0x100000274LL;
    v4 = nn_sm_detail_SendSessionRequest(&v7);
    if (v4 != 0 || (v4 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x100000274LL, v4 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v4);
      }
    }
  }
  else {
    v4 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(v2);
  return v4;
}

__int64 nn_bcat_detail_2c4740(__int64 a1, int a2)
{
  int v3;
  __int64 v4;
  unsigned __int64 StatusReg;
  unsigned int v6;
  void (*explicit)(_QWORD);
  unsigned int v9;

  v3 = a1;
  v4 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v4);
  if (*(_DWORD*)(v4 + 4) != 0) {
    v9 = *(_DWORD*)(v4 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v3;
    *(_DWORD*)(StatusReg + 12) = a2;
    *(_QWORD*)StatusReg = 0x200000275LL;
    v6 = nn_sm_detail_SendSessionRequest(&v9);
    if (v6 != 0 || (v6 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x100000275LL, v6 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v6);
      }
    }
  }
  else {
    v6 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(v4);
  return v6;
}

__int64 nn_bcat_detail_2c4800(__int64 a1)
{
  int v1;
  __int64 v2;
  unsigned __int64 StatusReg;
  unsigned int v4;
  void (*explicit)(_QWORD);
  unsigned int v7;

  v1 = a1;
  v2 = nn_gsv_GetUserSession_plt(a1);
  nn_os_SdkMutexType_Lock_plt(v2);
  if (*(_DWORD*)(v2 + 4) != 0) {
    v7 = *(_DWORD*)(v2 + 4);
    StatusReg = __builtin_arm_rsr64("tpidrro_el0");
    *(_DWORD*)(StatusReg + 8) = v1;
    *(_QWORD*)StatusReg = 0x100000276LL;
    v4 = nn_sm_detail_SendSessionRequest(&v7);
    if (v4 != 0 || (v4 = *(_DWORD*)(StatusReg + 8),
                    *(_QWORD*)StatusReg = 0x100000276LL, v4 != 0)) {
      explicit = (void (*)(_QWORD))atomic_load_explicit(
          (atomic_ullong* volatile)SdkData_e87798[0], memory_order_acquire);
      if (explicit != nullptr) {
        explicit(v4);
      }
    }
  }
  else {
    v4 = 199411;
  }
  nn_os_SdkMutexType_Unlock_plt(v2);
  return v4;
}

#pragma GCC visibility pop
