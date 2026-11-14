#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1df250(__int64, _QWORD*, __int64, __int64, __int64,
                          unsigned int);
__int64 nn_settings_detail_4006d0(__int64 a1, _QWORD* a2, __int64 a3,
                                  __int64* a4);

__int64 nn_settings_detail_4006d0(__int64 a1, _QWORD* a2, __int64 a3,
                                  __int64* a4)
{
  return SdkRoutine_1df250(a1 + 8, a2, a3, *a4, a4[1], 2u);
}

#pragma GCC visibility pop
