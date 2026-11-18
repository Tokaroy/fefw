#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_dlss_rel_source_common_b4b90(__int64, __int64, __int64, __int64,
                                            ...);
extern __int64 NgxData_2b70a48;
__int64 nvidia_dlss_vulkan_core_core_b00e0(__int64 a1, __int64 a2, __int64 a3);

__int64 nvidia_dlss_vulkan_core_core_b00e0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 (*v4)(void);

  v3 = -1160773628;
  if (NgxData_2b70a48 == 0) {
    return (unsigned int)-1160773625;
  }
  if (a2 != 0 && a3 != 0) {
    v4 = *(__int64 (**)(void))(NgxData_2b70a48 +
                               120LL * *(unsigned int*)(a2 + 4) + 32888);
    if (v4 != nullptr) {
      return v4();
    }
    return v3;
  }
  nvidia_dlss_rel_source_common_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/vulkan\\core/core/nvngx_generic_api.h",
      615, (__int64)"NVSDK_NGX_EvaluateFeature_Validate",
      (__int64)"error: invalid handle or parameters interface");
  return 3134193669LL;
}

#pragma GCC visibility pop
