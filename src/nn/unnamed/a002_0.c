#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 SdkRoutine_810f00(int, int, int, int, int, void*);
__int64 SdkRoutine_812100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_830290(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ee60(_QWORD);
struct PseudoSret SdkRoutine_87cd90(_QWORD);
__int64 SdkRoutine_87d080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
struct PseudoThunk SdkRoutine_802920(long long a1, long long a2, long long a3,
                                     long long a4, long long a5, long long a6,
                                     long long a7, long long a8, double f1,
                                     double f2, double f3, double f4, double f5,
                                     double f6, double f7, double f8);
struct PseudoThunk SdkRoutine_804ae0(long long a1, long long a2, long long a3,
                                     long long a4, long long a5, long long a6,
                                     long long a7, long long a8, double f1,
                                     double f2, double f3, double f4, double f5,
                                     double f6, double f7, double f8);
struct PseudoThunk SdkHr_802900(long long a1, long long a2, long long a3,
                                long long a4, long long a5, long long a6,
                                long long a7, long long a8, double f1,
                                double f2, double f3, double f4, double f5,
                                double f6, double f7, double f8);
struct PseudoThunk SdkHr_804ad0(long long a1, long long a2, long long a3,
                                long long a4, long long a5, long long a6,
                                long long a7, long long a8, double f1,
                                double f2, double f3, double f4, double f5,
                                double f6, double f7, double f8);

struct PseudoThunk SdkHr_802900(long long a1, long long a2, long long a3,
                                long long a4, long long a5, long long a6,
                                long long a7, long long a8, double f1,
                                double f2, double f3, double f4, double f5,
                                double f6, double f7, double f8)
{

#pragma clang fp contract(on)

  return SdkRoutine_802920(a1, a2, a3, a4, a5, a6, a7, a8, f1, f2, f3, f4, f5,
                           f6, f7, f8);
}

struct PseudoThunk SdkHr_804ad0(long long a1, long long a2, long long a3,
                                long long a4, long long a5, long long a6,
                                long long a7, long long a8, double f1,
                                double f2, double f3, double f4, double f5,
                                double f6, double f7, double f8)
{

#pragma clang fp contract(on)

  return SdkRoutine_804ae0(a1, a2, a3, a4, a5, a6, a7, a8, f1, f2, f3, f4, f5,
                           f6, f7, f8);
}

#pragma GCC visibility pop
