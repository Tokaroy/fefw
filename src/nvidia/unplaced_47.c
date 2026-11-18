#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* NgxRoutine_36f0(_DWORD* result, unsigned int*, unsigned int);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
_DWORD* nvidia_4900(__int64 a1);
_DWORD* nvidia_4f00(__int64 a1);
_DWORD* nvidia_5380(__int64 a1);
_DWORD* nvidia_62e0(__int64 a1);
__int64 nvidia_28a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     char a6);

_DWORD* nvidia_4900(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_4f00(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 3;
  v4 = v1 < -3;
  v6 = v1 + 6;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 2);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 64;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_5380(__int64 a1)
{
  int v1;
  int v2;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  _DWORD* result;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  int v24;

  v1 = *(_DWORD*)(a1 + 100);
  v2 = *(_DWORD*)(a1 + 104);
  v5 = v1 + 7;
  v4 = v1 < -7;
  v6 = v1 + 14;
  if (!v4) {
    v6 = v5;
  }
  v7 = v2 + 7;
  v4 = v2 < -7;
  v8 = v2 + 14;
  if (!v4) {
    v8 = v7;
  }
  v9 = v8 >> 3;
  v10 = v9 * (v6 >> 3);
  *(_DWORD*)(a1 + 308) = v9;
  *(_DWORD*)(a1 + 304) = v10;
  NgxRoutine_36f0((_DWORD*)(a1 + 312), (unsigned int*)(a1 + 316), v10);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 320), (unsigned int*)(a1 + 324),
                           *(_DWORD*)(a1 + 308));
  *(_QWORD*)(a1 + 160) = 32;
  v12 = *(int*)(a1 + 120) * *(int*)(a1 + 116);
  v13 = *(int*)(a1 + 92);
  v14 = v12 - 1;
  v15 = v12 - 2;
  if (v12 >= 2) {
    v16 = 2 * v13;
    v17 = v14 & 7;
    if (v15 < 7) {
      v18 = 0;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    v19 = (__int64*)(a1 + 224);
    v20 = 0;
    do {
      *(v19 - 7) = v16;
      *(v19 - 6) = v16;
      *(v19 - 5) = v16;
      *(v19 - 4) = v16;
      v20 -= 8;
      *(v19 - 3) = v16;
      *(v19 - 2) = v16;
      *(v19 - 1) = v16;
      *v19 = v16;
      v19 += 8;
    } while (-(__int64)(v14 & 0x7FFFFFF8) != v20);
    v18 = -v20;
    if ((v14 & 7) != 0) {
    LABEL_12:
      v21 = (__int64*)(a1 + 8 * v18 + 168);
      do {
        *v21++ = v16;
        --v17;
      } while (v17 != 0);
    }
  }
LABEL_14:
  *(_QWORD*)(a1 + 8LL * v14 + 168) = 64 - 2LL * (int)v13 * v14;
  v22 = v13 + 31;
  v4 = (int)v13 < -31;
  v23 = v13 + 62;
  if (!v4) {
    v23 = v22;
  }
  v24 = (v23 >> 5) - 1;
  *(_DWORD*)(a1 + 352) = v24;
  *(_DWORD*)(a1 + 356) = 32 * v24;
  return result;
}

_DWORD* nvidia_62e0(__int64 a1)
{
  int v1;
  _QWORD* v2;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  _DWORD* result;
  int v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  int v32;
  int v33;

  v1 = *(_DWORD*)(a1 + 312);
  v2 = (_QWORD*)(a1 + 356);
  *(_DWORD*)(a1 + 16) *= *(_DWORD*)(a1 + 28);
  v4 = *(_DWORD*)(a1 + 100);
  v5 = *(_DWORD*)(a1 + 104);
  v7 = v4 + 3;
  v6 = v4 < -3;
  v8 = v4 + 6;
  if (!v6) {
    v8 = v7;
  }
  v9 = v5 + 15;
  v6 = v5 < -15;
  v10 = v5 + 30;
  if (!v6) {
    v10 = v9;
  }
  v11 = *(_DWORD*)(a1 + 320);
  v12 = v10 >> 4;
  v13 = v12 * (v8 >> 2);
  *(_DWORD*)(a1 + 352) = v12;
  *(_DWORD*)(a1 + 348) = v13;
  *(_DWORD*)(a1 + 324) = v1 * v11;
  NgxRoutine_36f0((_DWORD*)(a1 + 356), (unsigned int*)(a1 + 360), v13);
  NgxRoutine_36f0((_DWORD*)(a1 + 364), (unsigned int*)(a1 + 368),
                  *(_DWORD*)(a1 + 352));
  v14 = *(_DWORD*)(a1 + 352);
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(a1 + 348);
  *(_DWORD*)(a1 + 124) = v14;
  v15 = *(_DWORD*)(a1 + 368);
  *(_QWORD*)(a1 + 128) = *v2;
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a1 + 364);
  *(_DWORD*)(a1 + 140) = v15;
  *(_QWORD*)(a1 + 152) = 2LL * *(int*)(a1 + 16);
  v16 = *(_DWORD*)(a1 + 100);
  v17 = *(_DWORD*)(a1 + 104);
  *(_DWORD*)(a1 + 188) = v16 / 2;
  *(_DWORD*)(a1 + 192) = v17 / 2;
  v18 = v17 / 2 + 14;
  if (v17 / 2 >= -7) {
    v18 = v17 / 2 + 7;
  }
  v19 = v18 >> 3;
  v20 = v19 * ((v16 / 2 + 1) / 2);
  *(_DWORD*)(a1 + 208) = v20;
  *(_DWORD*)(a1 + 212) = v19;
  NgxRoutine_36f0((_DWORD*)(a1 + 216), (unsigned int*)(a1 + 220), v20);
  result = NgxRoutine_36f0((_DWORD*)(a1 + 224), (unsigned int*)(a1 + 228),
                           *(_DWORD*)(a1 + 212));
  *(_QWORD*)(a1 + 232) = 64;
  v22 = *(int*)(a1 + 60) * *(int*)(a1 + 56);
  v23 = *(int*)(a1 + 48);
  v24 = v22 - 1;
  v25 = v22 - 2;
  if (v22 >= 2) {
    v26 = 2 * v23;
    v27 = v24 & 7;
    if (v25 < 7) {
      v28 = 0;
      if ((v24 & 7) == 0) {
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    v29 = (__int64*)(a1 + 296);
    v30 = 0;
    do {
      *(v29 - 7) = v26;
      *(v29 - 6) = v26;
      *(v29 - 5) = v26;
      *(v29 - 4) = v26;
      v30 -= 8;
      *(v29 - 3) = v26;
      *(v29 - 2) = v26;
      *(v29 - 1) = v26;
      *v29 = v26;
      v29 += 8;
    } while (-(__int64)(v24 & 0x7FFFFFF8) != v30);
    v28 = -v30;
    if ((v24 & 7) != 0) {
    LABEL_14:
      v31 = (__int64*)(a1 + 8 * v28 + 240);
      do {
        *v31++ = v26;
        --v27;
      } while (v27 != 0);
    }
  }
LABEL_16:
  *(_QWORD*)(a1 + 8LL * v24 + 240) = 64 - 2LL * (int)v23 * v24;
  v32 = v23 + 31;
  v6 = (int)v23 < -31;
  v33 = v23 + 62;
  if (!v6) {
    v33 = v32;
  }
  *(_DWORD*)(a1 + 328) = (v33 >> 5) - 1;
  return result;
}

__int64 nvidia_28a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     char a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;

  v6 = a1;
  if (a1 != 0) {
    v7 = *(_QWORD*)(a5 + 24);
    if (a3 - a2 >= 1 && (*(__int64 (**)(__int64, __int64, __int64))(
                            *(_QWORD*)a1 + 96LL))(a1, a2, a3 - a2) != a3 - a2) {
      return 0;
    }
    v13 = a4 - a2;
    if (v7 <= a4 - a2) {
    LABEL_22:
      v23 = a4 - a3;
      if (v23 < 1 || (*(__int64 (**)(__int64, __int64, __int64))(
                         *(_QWORD*)v6 + 96LL))(v6, a3, v23) == v23) {
        *(_QWORD*)(a5 + 24) = 0;
        return v6;
      }
      return 0;
    }
    v14 = v7 - v13;
    if ((unsigned __int64)(v7 - v13) >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v14 | 7) + 1;
      }
      v15 = (char*)NgxRoutine_420(v20);
      v25_.v25[1] = v14;
      v25_.v26 = v15;
      v25_.v25[0] = v20 | 1;
      v16 = v7 + a2;
      v17 = v14 & 7;
      v18 = v15;
      v19 = v14;
      if ((v14 & 7) == 0) {
      LABEL_14:
        if ((unsigned __int64)(a4 - v16) <= 0xFFFFFFFFFFFFFFF8LL) {
          do {
            *v18 = a6;
            v18[1] = a6;
            v19 -= 8;
            v18[2] = a6;
            v18[3] = a6;
            v18[4] = a6;
            v18[5] = a6;
            v18[6] = a6;
            v18[7] = a6;
            v18 += 8;
          } while (v19 != 0);
        }
        v15[v14] = 0;
        if ((v25_.v25[0] & 1) != 0) {
          v21 = v25_.v26;
        }
        else {
          v21 = (char*)v25_.v25 + 1;
        }
        v22 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 96LL))(
            v6, (__int64)v21, v14);
        if ((v25_.v25[0] & 1) != 0) {
          NgxRoutine_430(v25_.v26, v25_.v25[0] & 0xFFFFFFFFFFFFFFFELL);
        }
        if (v22 != v14) {
          return 0;
        }
        goto LABEL_22;
      }
    }
    else {
      LOBYTE(v25_.v25[0]) = 2 * v14;
      v15 = (char*)v25_.v25 + 1;
      v16 = v7 + a2;
      v17 = v14 & 7;
      v18 = (char*)v25_.v25 + 1;
      v19 = v14;
      if ((v14 & 7) == 0) {
        goto LABEL_14;
      }
    }
    v18 = v15;
    v19 = v14;
    do {
      *v18++ = a6;
      --v19;
      --v17;
    } while (v17 != 0);
    goto LABEL_14;
  }
  return v6;
}

#pragma GCC visibility pop
