#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 llvm_libcxx_21_libcxx_include___functional_129f440(__int64 result,
                                                           __int64 a2, int* a3,
                                                           int* a4, float* a5);

__int64 llvm_libcxx_21_libcxx_include___functional_129f440(__int64 result,
                                                           __int64 a2, int* a3,
                                                           int* a4, float* a5)
{

#pragma clang fp contract(off)
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;

  v5 = *a3;
  v6 = *a4;
  if ((*(_DWORD*)&a5[5] & 0x80000000) != 0) {
    v7 = v5 + 32 * v6;
  }
  else {
    v7 = v5 + 32 * v6;
    if (v7 >= 0x400) {
      v8 = 0;
    }
    else {
      v8 = v7;
    }
    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 8LL * v8) =
        *(unsigned int*)a5 |
        ((unsigned __int64)(float)(a5[2] * 0x1.9000000000000p+7f) << 32) |
        0x20000000000LL;
  }
  if (v7 >= 0x400) {
    v7 = 0;
  }
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 8LL * v7) |=
      0x10000000000uLL;
  return result;
}

#pragma GCC visibility pop
