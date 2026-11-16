#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_uncaught_exception_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 llvm_libcxx_libcxxabi_src_84baa0(__int64 result, __int64 a2, __int64 a3,
                                         void (*a4)(__int64),
                                         __int64 (*a5)(__int64));
__int64 llvm_libcxx_libcxxabi_src_84bba0(__int64 result, __int64 a2, __int64 a3,
                                         void (*a4)(__int64),
                                         __int64 (*a5)(__int64, __int64));

__int64 llvm_libcxx_libcxxabi_src_84baa0(__int64 result, __int64 a2, __int64 a3,
                                         void (*a4)(__int64),
                                         __int64 (*a5)(__int64))
{
  __int64 v5;
  __int64 (*v7)(__int64);
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (result != 0) {
    v5 = result - a3;
    if (a3 != 0 && a4 != nullptr) {
      v7 = a5;
      v9 = result;
      v13 = *(_QWORD*)(result - 8);
      __cxa_uncaught_exception_plt(result, a2, a3, a4, a5);
      for (i = v9 + a2 * (v13 - 1);; i = v12) {
        v11 = v13--;
        if (v11 == 0) {
          break;
        }
        v12 = i - a2;
        a4(i);
      }
      a5 = v7;
    }
    return a5(v5);
  }
  return result;
}

__int64 llvm_libcxx_libcxxabi_src_84bba0(__int64 result, __int64 a2, __int64 a3,
                                         void (*a4)(__int64),
                                         __int64 (*a5)(__int64, __int64))
{
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v11;
  __int64 i;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (result != 0) {
    v5 = result - a3;
    if (a3 != 0) {
      v6 = *(_QWORD*)(result - 8);
      v8 = a3 + v6 * a2;
      if (a4 != nullptr) {
        v15 = *(_QWORD*)(result - 8);
        v11 = result;
        __cxa_uncaught_exception_plt(result, a2, a3, a4, a5);
        for (i = v11 + a2 * (v6 - 1);; i = v14) {
          v13 = v15--;
          if (v13 == 0) {
            break;
          }
          v14 = i - a2;
          a4(i);
        }
        return a5(v5, v8);
      }
    }
    else {
      v8 = 0;
    }
    return a5(v5, v8);
  }
  return result;
}

#pragma GCC visibility pop
