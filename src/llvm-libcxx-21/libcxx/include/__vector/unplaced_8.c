#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 llvm_libcxx_21_libcxx_include___vector_7f2320(__int64* a1, __int64 a2);

__int64 llvm_libcxx_21_libcxx_include___vector_7f2320(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char v5;
  char v6;
  __int64 (*v7)(__int64, __int64);
  __int64 v8;
  _QWORD* v9;

  v2 = *a1;
  v3 = a1[1];
  if (*a1 == v3) {
    v5 = 0;
  }
  else {
    v5 = 0;
    do {
      v7 = *(__int64 (**)(__int64, __int64))(v2 + 128);
      v8 = *(_QWORD*)(v2 + 136);
      v9 = (_QWORD*)(v2 + (v8 >> 1));
      if ((v8 & 1) != 0) {
        v6 = (*(__int64 (**)(__int64, __int64))((char*)v7 + *v9))((__int64)v9,
                                                                  a2);
      }
      else {
        v6 = v7((__int64)v9, a2);
      }
      v2 += 144;
      v5 |= v6;
    } while (v2 != v3);
  }
  return v5 & 1;
}

#pragma GCC visibility pop
