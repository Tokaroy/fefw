#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 SdkData_bb4740;
extern __int64 SdkData_e89c78;
float nn_659ce0();
float nn_66c9e0();
float nn_69e970();

float nn_659ce0()
{

#pragma clang fp contract(off)
  __int64 v0;
  _OWORD* v1;
  __int128 v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  float result;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_OWORD*)(v0 + 56);
  v3 = *(_OWORD*)(v0 + 72);
  v4 = *(_OWORD*)(v0 + 88);
  v5 = *(_OWORD*)(v0 + 104);
  v6 = *(_OWORD*)(v0 + 120);
  v7 = *(_OWORD*)(v0 + 136);
  v8 = *(_OWORD*)(v0 + 152);
  v9 = *(_OWORD*)(v0 + 168);
  *v1 = v2;
  v1[1] = v3;
  v1[2] = v4;
  v1[3] = v5;
  v1[4] = v6;
  v1[5] = v7;
  v1[6] = v8;
  v1[7] = v9;
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v2;
    result = z_;
  }
  return result;
}

float nn_66c9e0()
{

#pragma clang fp contract(off)
  __int64 v0;
  _OWORD* v1;
  _DWORD* v2;
  __int64 v3;
  _DWORD* v4;
  _OWORD* v5;
  unsigned int v6;
  __int128 v7;
  __int64 v8;
  __int128 v9;
  float result;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = v0;
  v4 = v2;
  v5 = v1;
  v6 = (*(__int64 (**)(__int64, __int64))(**(_QWORD**)SdkData_e89c78 + 16LL))(
      *(_QWORD*)SdkData_e89c78, v0),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 == 2) {
    *(_BYTE*)(v3 + 64) = 1;
  }
  else {
    *(_BYTE*)(v3 + 64) = 0;
    if (v6 <= 1) {
      v8 = v3 + 32LL * *(int*)(v3 + 56);
      v7 = *(_OWORD*)(v8 + 152);
      v9 = *(_OWORD*)(v8 + 168);
      *v5 = v7;
      v5[1] = v9;
      *(_DWORD*)v4 = *(_DWORD*)(v3 + 56);
    }
  }
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v7;
    result = z_;
  }
  return result;
}

float nn_69e970()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  _BOOL4 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  _BOOL4 v19;
  bool v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  _BOOL4 v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v0 != 0 && v1 != 0) {
    v2 = *(_DWORD*)(v0 + 356);
    if ((v2 & 4) != 0) {
      v3 = 221;
    }
    else {
      v3 = 811;
    }
    if ((v2 & 4) != 0) {
      v4 = 255;
    }
    else {
      v4 = 882;
    }
    v6 = v4 + 7 >= v4 | v4 + 77 > v4;
    if (v6) {
      v7 = v4 + 77;
    }
    else {
      v7 = v4;
    }
    if ((v2 & 4) != 0) {
      v8 = 255;
    }
    else {
      v8 = 882;
    }
    v9 = v4 + 228;
    if (v6) {
      v8 = v4 + 77;
    }
    if (v9 <= v7) {
      v10 = v7;
    }
    else {
      v8 = v4 + 228;
      v10 = v4 + 228;
    }
    if (v7 >= v4 + 200 & v7 >= v4 + 225) {
      v9 = v10;
    }
    else {
      v8 = v4 + 228;
    }
    if (v4 + 230 > v9 | v4 + 238 > v9) {
      v9 = v4 + 238;
      v8 = v4 + 238;
    }
    if (v4 + 249 > v9 | v4 + 261 > v9) {
      v9 = v4 + 261;
      v8 = v4 + 261;
    }
    if (v4 + 268 > v9 | v4 + 275 > v9) {
      v9 = v4 + 275;
      v8 = v4 + 275;
    }
    v19 = v4 + 282 > v9 | v4 + 289 > v9;
    v20 = !v19;
    v21 = v4 + 295;
    if (!v20) {
      v9 = v4 + 289;
      v8 = v4 + 289;
    }
    v22 = v4 + 321;
    v23 = v4 + 331;
    v25 = v21 > v9 | v22 > v9;
    if (v25) {
      v9 = v22;
    }
    v26 = v23 > v9 || v25;
    if (v23 > v9) {
      v9 = v23;
    }
    v27 = v3 + 438;
    v20 = v26 == 0;
    v28 = v3 + 433;
    if (!v20) {
      v8 = v9;
    }
    v29 = v3 + 411;
    v30 = v3 + 447;
    if (v30 <= v8) {
      v31 = v8;
    }
    else {
      v31 = v30;
    }
    if (v27 > v8 | v28 > v8 || v29 > v8) {
      v34 = v30;
    }
    else {
      v34 = v31;
    }
    if ((v2 & 4) != 0) {
      v34 = v8;
      v35 = v23;
    }
    else {
      v35 = v29;
    }
    if ((v2 & 4) != 0) {
      v36 = v23;
    }
    else {
      v36 = v30;
    }
    if (v36 + 4 <= v34) {
      v37 = v34;
    }
    else {
      v37 = v36 + 4;
    }
    if (v36 + 2 <= v34) {
      v38 = v37;
    }
    else {
      v38 = v36 + 4;
    }
    if ((v2 & 4) != 0) {
      v40 = 110;
    }
    else {
      v39 = v36 + 18;
      if (v36 + 18 <= v38) {
        v39 = v38;
      }
      if (v23 > v39) {
        v39 = v23;
      }
      if (v35 <= v39) {
        v38 = v39;
      }
      else {
        v38 = v35;
      }
      v40 = 112;
    }
    *(_DWORD*)v1 = v38;
    *(_DWORD*)(v1 + 4) = v40;
    *(_OWORD*)(v1 + 8) = SdkData_bb4740;
    {
      __typeof__(result) z_ = (__typeof__(result)){0};
      LODWORD(z_) = 923;
      result = z_;
    }
  }
  return result;
}

#pragma GCC visibility pop
