#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_2197c0(__int64 result, int*);
__int64 CudaDriverRoutine_ec740(__int64, __int64, __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_1434ac0;
float nvidia_1a3eb0(__int64 a1);
float nvidia_217850();
float nvidia_219290();
float nvidia_2193a0();

float nvidia_1a3eb0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_DWORD*)(a1 + 32) != 0) {
    v2 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != *(_QWORD*)(a1 + 48)) {
      CudaDriverRoutine_12e340(v2);
    }
  }
  *(_QWORD*)(a1 + 48) = 0;
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  return 0x0.0p+0f;
}

float nvidia_217850()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  float result;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = v0;
  if (v0 != 0 && v1 != 0 && *(_DWORD*)(v0 + 4) == 10) {
    if (*(_QWORD*)(v0 + 1120) != 0) {
      v2 = *(_QWORD*)(v0 + 1120);
    }
    v3 = *(_OWORD*)(v2 + 48);
    v4 = *(_OWORD*)(v2 + 64);
    v5 = *(_OWORD*)(v2 + 80);
    *(_OWORD*)v1 = *(_OWORD*)(v2 + 32);
    *(_OWORD*)(v1 + 16) = v3;
    *(_OWORD*)(v1 + 32) = v4;
    *(_OWORD*)(v1 + 48) = v5;
    v6 = *(_OWORD*)(v2 + 96);
    v7 = *(_OWORD*)(v2 + 112);
    v8 = *(_OWORD*)(v2 + 128);
    *(_QWORD*)(v1 + 112) = *(_QWORD*)(v2 + 144);
    *(_OWORD*)(v1 + 80) = v7;
    *(_OWORD*)(v1 + 96) = v8;
    *(_OWORD*)(v1 + 64) = v6;
  }
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v6;
    result = z_;
  }
  return result;
}

float nvidia_219290()
{

#pragma clang fp contract(off)
  unsigned int v0;
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  int v11;
  _QWORD v12[10];
  int v13[148];

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = v2;
  v4 = v0;
  v5 = v1;
  v8 = (__typeof__(v8)){0};
  v9 = (__typeof__(v9)){0};
  v10 = (__typeof__(v10)){0};
  v11 = 0;
  memset_plt((__int64)v13, 0, 0x250u),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  memset(v12, 0, sizeof(v12));
  if ((v4 & 0x80000000) == 0) {
    v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                    (_QWORD)CudaDriverData_1422118);
    if ((int)v4 < v6 && (v5 & 0x80000000) == 0 && (int)v5 < v6 &&
        (unsigned int)CudaDriverRoutine_ec740(
            *((_QWORD*)CudaDriverData_1422118 + v4 + 35),
            *((_QWORD*)CudaDriverData_1422118 + v5 + 35), (__int64)v13) == 0) {
      CudaDriverRoutine_2197c0((__int64)v12, v13),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v12[4] = __PAIR64__(v5, v4);
      v10 = *(_OWORD*)((char*)&v12[4] + 4);
      v11 = DWORDn(v12[6], sizeof(v12[6]) / 4 - 1);
      v8 = *(_OWORD*)((char*)v12 + 4);
      v9 = *(_OWORD*)((char*)&v12[2] + 4);
    }
  }
  *(_DWORD*)v3 = 80;
  *(_OWORD*)(v3 + 4) = v8;
  *(_OWORD*)(v3 + 20) = v9;
  *(_DWORD*)(v3 + 52) = v11;
  *(_OWORD*)(v3 + 36) = v10;
  return *(float*)&v10;
}

float nvidia_2193a0()
{

#pragma clang fp contract(off)
  int v0;
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  int v9;
  _QWORD v10[10];
  struct {
    int v11[146];
    int v12;
  } v11_;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = v0;
  v3 = v1;
  v6 = (__typeof__(v6)){0};
  v7 = (__typeof__(v7)){0};
  v8 = (__typeof__(v8)){0};
  v9 = 0;
  memset_plt((__int64)v11_.v11, 0, 0x250u),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v10, 0, sizeof(v10));
  if ((v2 & 0x80000000) == 0 && v2 < CudaDriverData_1434ac0 &&
      (unsigned int)CudaDriverRoutine_ec740(
          *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)v2 + 35), 0,
          (__int64)v11_.v11) == 0) {
    CudaDriverRoutine_2197c0((__int64)v10, v11_.v11),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LODWORD(v10[4]) = v2;
    if (v11_.v12 == 64 || v11_.v12 == 33) {
      v4 = v11_.v11[144];
    }
    else {
      v4 = 0;
    }
    DWORDn(v10[4], sizeof(v10[4]) / 4 - 1) = v4;
    v8 = *(_OWORD*)((char*)&v10[4] + 4);
    v9 = DWORDn(v10[6], sizeof(v10[6]) / 4 - 1);
    v6 = *(_OWORD*)((char*)v10 + 4);
    v7 = *(_OWORD*)((char*)&v10[2] + 4);
  }
  *(_DWORD*)v3 = 80;
  *(_OWORD*)(v3 + 4) = v6;
  *(_OWORD*)(v3 + 20) = v7;
  *(_DWORD*)(v3 + 52) = v9;
  *(_OWORD*)(v3 + 36) = v8;
  return *(float*)&v8;
}

#pragma GCC visibility pop
