#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nnosAllocateMemoryForThreadLocal_plt(_QWORD);
extern _UNKNOWN SdkData_eadc5c;
extern _UNKNOWN SdkData_eadc64;
extern __int64 SdkData_eadc68;
extern __int64 SdkData_eadc70;
extern __int64 SdkData_eadc78;
extern __int64 SdkData_eadc80;
extern __int64 SdkData_eadc88;
extern int SdkData_eadc3c;
__int64 nnmusl_b7630(__int64* a1);
void nnmusl_b7f20();

__int64 nnmusl_b7630(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  _QWORD* v15;
  __int64 v16;

  v2 = *a1;
  v1 = a1[1];
  v3 = *(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 496);
  v5 = *(_QWORD*)(v3 - 24);
  v4 = (_QWORD*)(v3 - 24);
  v6 = *(_QWORD*)(v5 + 8 * v2);
  if (v6 != 0) {
    return v6 + v1;
  }
  v8 = *a1;
  v9 = a1[1];
  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
  v10 = *(_QWORD**)(SdkData_eadc68 + 8 * v8);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
  if (v10[3] <= 8u) {
    v11 = 8;
  }
  else {
    v11 = v10[3];
  }
  v12 = v10[2] + v11 + 48;
  v13 = (void*)nnosAllocateMemoryForThreadLocal_plt(v12);
  memset_plt(v13, nullptr, v12);
  v15 = (_QWORD*)((char*)v13 + ((-48LL - (_QWORD)v13) & (v11 - 1)));
  v15[2] = v13;
  v15[3] = v12;
  v15[4] = v15 + 6;
  memcpy_plt(v15 + 6, *v10, v10[1]);
  v15[5] = v4;
  nn_os_SdkMutexType_Lock_plt(&SdkData_eadc64);
  *v15 = v10[38];
  v15[1] = 0;
  v16 = v10[38];
  if (v16 != 0) {
    *(_QWORD*)(v16 + 8) = v15;
  }
  v10[38] = v15;
  *(_QWORD*)(*v4 + 8 * v8) = v15[4];
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc64);
  return *(_QWORD*)(*v4 + 8 * v8) + v9;
}

void nnmusl_b7f20()
{
  void* v0;
  int v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v8;
  char* v9;

  if (SdkData_eadc70 != 0) {
    v0 = (void*)nnosAllocateMemoryForThreadLocal_plt(SdkData_eadc78);
    memset_plt(v0, nullptr, SdkData_eadc78);
    v2 = SdkData_eadc88;
    v3 = SdkData_eadc3c;
    *(_QWORD*)v0 = SdkData_eadc88;
    v4 = (_QWORD*)((char*)v0 + 8 * v3 +
                   ((-32 - ((_QWORD)v0 + 8 * v3)) & (SdkData_eadc80 - 1)));
    v5 = v4 + 4;
    if (v2 >= 1) {
      v6 = 1;
      do {
        nn_os_SdkMutexType_Lock_plt(&SdkData_eadc5c);
        v8 = *(_QWORD**)(SdkData_eadc68 + 8 * v6);
        nn_os_SdkMutexType_Unlock_plt(&SdkData_eadc5c);
        if (v8 != nullptr && *v8 != 0) {
          v9 = (char*)v5 + v8[4];
          *((_QWORD*)v0 + v6) = v9;
          memcpy_plt(v9, *v8, v8[1]);
        }
      } while (v6++ < (int)SdkData_eadc88);
    }
    v4[5] = v0;
    v4[1] = v0;
    *(_QWORD*)(__builtin_arm_rsr64("tpidrro_el0") + 496) = v5;
    v4[2] = v0;
    v4[3] = SdkData_eadc78;
    v4[4] = 0;
  }
}

#pragma GCC visibility pop
