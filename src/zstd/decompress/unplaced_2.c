#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_24dcc0(unsigned __int8*, __int64, unsigned __int8*,
                                 __int64, __int64);
extern _UNKNOWN CudaDriverData_13b59f8;
unsigned __int64 CudaDriverRoutine_24e080(char*, __int64, unsigned __int16*,
                                          unsigned __int64, _DWORD*, char);
unsigned __int64 CudaDriverRoutine_250220(unsigned __int8*, __int64,
                                          unsigned __int16*, unsigned __int64,
                                          __int64, char);
unsigned __int64 HUF_readDTableX2_wksp(int*, __int64, __int64, _DWORD*,
                                       unsigned __int64);
unsigned __int64 zstd_decompress_24a9a0(_DWORD*, __int64, __int64, _OWORD*,
                                        unsigned __int64);
unsigned __int64 zstd_decompress_24dc10(int* a1, unsigned __int8* a2,
                                        __int64 a3, __int64 a4,
                                        unsigned __int64 a5, _DWORD* a6,
                                        unsigned __int64 a7);
unsigned __int64 zstd_decompress_251bf0(int* a1, unsigned __int8* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        unsigned __int64 a5, _DWORD* a6,
                                        unsigned __int64 a7, char a8);

unsigned __int64 zstd_decompress_24dc10(int* a1, unsigned __int8* a2,
                                        __int64 a3, __int64 a4,
                                        unsigned __int64 a5, _DWORD* a6,
                                        unsigned __int64 a7)
{
  unsigned __int64 result;

  result = HUF_readDTableX2_wksp(a1, a4, a5, a6, a7);
  if (result <= 0xFFFFFFFFFFFFFF88LL) {
    if (a5 <= result) {
      return -72;
    }
    else {
      return CudaDriverRoutine_24dcc0(a2, a3, (unsigned __int8*)(a4 + result),
                                      a5 - result, (__int64)a1);
    }
  }
  return result;
}

unsigned __int64 zstd_decompress_251bf0(int* a1, unsigned __int8* a2,
                                        unsigned __int64 a3, __int64 a4,
                                        unsigned __int64 a5, _DWORD* a6,
                                        unsigned __int64 a7, char a8)
{
  __int64 v8;
  unsigned __int64 result;
  _DWORD* v16;

  if (a3 == 0) {
    return -70;
  }
  if (a5 == 0) {
    return -20;
  }
  if (a5 >= a3) {
    v8 = 15;
  }
  else {
    v8 = (unsigned int)(16 * a5 / a3);
  }
  v16 = (_DWORD*)((char*)&CudaDriverData_13b59f8 + 16 * v8);
  if (v16[2] + v16[3] * (unsigned int)(a3 >> 8) +
          ((v16[2] + v16[3] * (unsigned int)(a3 >> 8)) >> 5) >=
      *(int*)v16 + v16[1] * (unsigned int)(a3 >> 8)) {
    result = HUF_readDTableX2_wksp(a1, a4, a5, a6, a7);
    if (result <= 0xFFFFFFFFFFFFFF88LL) {
      if (a5 > result) {
        return CudaDriverRoutine_250220(a2, a3,
                                        (unsigned __int16*)(a4 + result),
                                        a5 - result, (__int64)a1, a8);
      }
      return -72;
    }
  }
  else {
    result = zstd_decompress_24a9a0(a1, a4, a5, a6, a7);
    if (result <= 0xFFFFFFFFFFFFFF88LL) {
      if (a5 > result) {
        return CudaDriverRoutine_24e080((char*)a2, a3,
                                        (unsigned __int16*)(a4 + result),
                                        a5 - result, a1, a8);
      }
      return -72;
    }
  }
  return result;
}

#pragma GCC visibility pop
