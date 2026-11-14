#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);

__int64 nn_gpu_sdk_GetGpuMemoryHandleMax_plt(void);

__int64 nn_gpu_sdk_GetGpuMemoryHandleMin_plt(__int64);

__int64 nn_gpu_sdk_QueryGpuMemoryInfo_plt(__int64, unsigned int, unsigned int,
                                          __int64, __int64);

__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);

__int64 nn_gpu_46d6e0(void* this_);

__int64 fw_rtld_RegisterCrtDestructor();

__int64 memset_plt_alt1(void* this_, void*, int);

__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);

extern _UNKNOWN SdkData_f38eb4;

extern _UNKNOWN SdkData_f38eb8;

extern _UNKNOWN nn_gpu_impl_user_g_KEventPool;

__int64 nn_gpu_46b7f0();

__int64 nn_gpu_46b7f0()
{

  fw_rtld_RegisterCrtDestructor();
  memset_plt_alt1((void*)&nn_gpu_impl_user_g_KEventPool, nullptr, 3112);
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f38eb4);
  memset_plt_alt1((void*)&SdkData_f38eb8, nullptr, 3088);
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
