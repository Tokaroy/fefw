#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5a32e0(__int64, __int64, char, unsigned int);
__int64 SdkRoutine_5c3630(__int64, _DWORD*, __int64, __int64, unsigned int);
__int64 nn_hid_detail_6f48f0(__int64 a1, _DWORD* a2, __int64* a3);
__int64 nn_hid_detail_6f49e0(__int64 a1, __int64 a2, char a3);

__int64 nn_hid_detail_6f48f0(__int64 a1, _DWORD* a2, __int64* a3)
{
  return SdkRoutine_5c3630(a1 + 8, a2, *a3, 8 * a3[1], 0xF8u);
}

__int64 nn_hid_detail_6f49e0(__int64 a1, __int64 a2, char a3)
{
  return SdkRoutine_5a32e0(a1 + 8, a2, a3, 0x10Cu);
}

#pragma GCC visibility pop
