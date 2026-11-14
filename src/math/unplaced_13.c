#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_879ef0(PSEUDO_X8, _QWORD);

__attribute__((swiftcall)) void SdkRoutine_87a270(PSEUDO_X8, _QWORD, _QWORD);

__attribute__((swiftcall)) void SdkRoutine_87a2e0(PSEUDO_X8, _QWORD, _QWORD);

__attribute__((swiftcall)) void SdkRoutine_87a2f0(PSEUDO_X8, _QWORD, _QWORD);

__attribute__((swiftcall)) void
math_702080_alt1(PSEUDO_X8, __int64, __int64*, __int64*) __asm__("math_702080");

__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8, __int64, _QWORD*,
                                            __int64, unsigned __int64);

__int64 SdkRoutine_87a260(__int64);

__int64 SdkRoutine_87a2d0(_QWORD);

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);

__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");

__int64 memset_plt(void* this_, void*, int, unsigned __int64);

__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");

unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);

__attribute__((swiftcall)) void math_702080(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4);

_QWORD* math_7022a0(_QWORD* a1, _QWORD* a2);

_QWORD* math_717820(unsigned __int64* a1, __int64* a2);

__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2);

#pragma GCC visibility pop
