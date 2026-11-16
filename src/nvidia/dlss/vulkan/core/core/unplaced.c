#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NGXStoreCallToReleaseFeature(__int64, __int64*);
__int64 nvidia_dlss_rel_source_common_b4b90(__int64, __int64, __int64, __int64,
                                            ...);
extern __int64 NgxData_2b70a48;
__int64 nvidia_dlss_vulkan_core_core_b0000(__int64 a1);

__int64 nvidia_dlss_vulkan_core_core_b0000(__int64 a1)
{
  __int64 v1;
  __int64 (*v2)(__int64);
  __int64 result;
  unsigned int v5;

  v1 = NgxData_2b70a48;
  if (NgxData_2b70a48 == 0) {
    return 3134193671LL;
  }
  if (a1 != 0) {
    v2 = *(__int64 (**)(__int64))(NgxData_2b70a48 +
                                  120LL * *(unsigned int*)(a1 + 4) + 32896);
    if (v2 != nullptr) {
      result = v2(a1);
      if ((result & 0xFFF00000) != 0xBAD00000) {
        v5 = result;
        NGXStoreCallToReleaseFeature(v1, (__int64*)a1);
        return v5;
      }
    }
    else {
      return 3134193668LL;
    }
  }
  else {
    nvidia_dlss_rel_source_common_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
        590, (__int64)"NVSDK_NGX_ReleaseFeature",
        (__int64)"error: invalid handle provided nothing to release");
    return 3134193669LL;
  }
  return result;
}

#pragma GCC visibility pop
