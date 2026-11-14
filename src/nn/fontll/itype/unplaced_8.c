#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_439260(_DWORD* result, int*, int*, int*, int*, unsigned int);
_DWORD* nn_fontll_itype_4396d0(_DWORD* a1, __int64 a2);

_DWORD* nn_fontll_itype_4396d0(_DWORD* a1, __int64 a2)
{
  int* v3;
  unsigned int v4;

  {
    v3 = *(int**)a2;
    __asm__ volatile("" ::"r"(v3));
  }
  if (*(_WORD*)(a2 + 80) != 0) {
    v4 = *(unsigned __int16*)(*(_QWORD*)(a2 + 64) + 2LL * *(__int16*)(a2 + 80) -
                              2) -
         **(unsigned __int16**)(a2 + 56) + 9;
  }
  else {
    v4 = 8;
  }
  return SdkRoutine_439260(a1, v3, *(int**)(a2 + 8), *(int**)(a2 + 32),
                           *(int**)(a2 + 40), v4);
}

#pragma GCC visibility pop
