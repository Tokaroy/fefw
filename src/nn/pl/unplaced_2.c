#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a31d0(__int64, __int64, char, unsigned int);
__int64 SdkRoutine_5a32e0(__int64, __int64, char, unsigned int);
__int64 SdkRoutine_5a33e0(__int64, __int64, int, char, unsigned int);
__int64 nn_pl_5a3120(__int64 a1, __int64 a2, char a3);
__int64 nn_pl_5a3130(__int64 a1, __int64 a2, char a3);
__int64 nn_pl_5a3140(__int64 a1, __int64 a2, int a3, char a4);

__int64 nn_pl_5a3120(__int64 a1, __int64 a2, char a3)
{
  return SdkRoutine_5a31d0(a1 + 8, a2, a3, 0x64u);
}

__int64 nn_pl_5a3130(__int64 a1, __int64 a2, char a3)
{
  return SdkRoutine_5a32e0(a1 + 8, a2, a3, 0x65u);
}

__int64 nn_pl_5a3140(__int64 a1, __int64 a2, int a3, char a4)
{
  return SdkRoutine_5a33e0(a1 + 8, a2, a3, a4, 0x66u);
}

#pragma GCC visibility pop
