#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_40e770(__int64, _DWORD*, __int64, __int64, int,
                          unsigned int);
__int64 nn_ssl_detail_5cbb50(__int64 a1, _DWORD* a2, __int64* a3, int a4);

__int64 nn_ssl_detail_5cbb50(__int64 a1, _DWORD* a2, __int64* a3, int a4)
{
  return SdkRoutine_40e770(a1 + 8, a2, *a3, a3[1], a4, 6u);
}

#pragma GCC visibility pop
