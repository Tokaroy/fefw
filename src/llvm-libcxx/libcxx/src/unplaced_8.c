#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void locale_7d3820(PSEUDO_X8, const char*, _QWORD*);
__attribute__((swiftcall)) void
llvm_libcxx_libcxx_src_7d3760(PSEUDO_X8 x8_, char* a1, __int64 a2, __int64 a3,
                              __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                              __int64 a8, char a10);
__attribute__((swiftcall)) void

llvm_libcxx_libcxx_src_7d3760(PSEUDO_X8 x8_, char* a1, __int64 a2, __int64 a3,
                              __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                              __int64 a8, char a10)
{
  _QWORD* a9 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  _QWORD v12[7];
  _QWORD v13[4];
  _QWORD v14[7];

  *a9 = 0;
  a9[1] = 0;
  a9[2] = 0;
  v12[0] = a2;
  v12[1] = a3;
  v12[2] = a4;
  v12[3] = a5;
  v12[4] = a6;
  v12[5] = a7;
  v12[6] = a8;
  v14[5] = v12;
  v14[6] = 0xFFFFFF80FFFFFFC8LL;
  v14[3] = &a10;
  v14[4] = v13;
  v13[0] = &a10;
  v13[1] = v13;
  v13[2] = v12;
  v13[3] = 0xFFFFFF80FFFFFFC8LL;
  result = (_QWORD*)X8CALL_X0(__int64, locale_7d3820((void*)(v14), a1, v13));
  qmemcpy(a9, v14, 24);
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
