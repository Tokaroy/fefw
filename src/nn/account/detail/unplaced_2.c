#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_e6db0(__int64, __int64, __int64, __int64, __int64,
                         unsigned int);
__int64 SdkRoutine_e6f80(__int64, __int64, __int64, __int64, __int64,
                         unsigned int);
__int64 nn_account_detail_f0a10(__int64 a1, __int64 a2, __int64* a3,
                                __int64 a4);
__int64 nn_account_detail_f0a30(__int64 a1, __int64 a2, __int64* a3,
                                __int64 a4);

__int64 nn_account_detail_f0a10(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  return SdkRoutine_e6db0(a1 + 8, a2, *a3, a3[1], a4, 0x14u);
}

__int64 nn_account_detail_f0a30(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  return SdkRoutine_e6f80(a1 + 8, a2, *a3, a3[1], a4, 0x15u);
}

#pragma GCC visibility pop
