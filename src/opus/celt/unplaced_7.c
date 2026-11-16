#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int* SdkData_e877c0;
__int64 opus_celt_2e02c0(_DWORD* a1, unsigned int a2);

__int64 opus_celt_2e02c0(_DWORD* a1, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  char v4;
  unsigned __int64 v5;
  unsigned int v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;

  v2 = a1[8];
  if (a2 < 0x101) {
    v4 = __clz((unsigned int)(a2 & -a2));
    v5 = ((unsigned int)SdkData_e877c0[a2 >> ((-v4) & 63)] *
          (unsigned __int64)(v2 >> ((~v4) & 63))) >>
         32;
    if (v2 - a2 * (int)v5 < a2) {
      v3 = v5;
    }
    else {
      v3 = v5 + 1;
    }
  }
  else {
    v3 = v2 / a2;
  }
  v6 = a1[9];
  a1[10] = v3;
  v7 = v6 / v3 + 1;
  v8 = a2 >= v7;
  v9 = a2 - v7;
  if (v8) {
    return v9;
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
