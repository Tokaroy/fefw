#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_65f150(__int64, _DWORD*, _DWORD*);
__int64 SdkRoutine_691990(__int64 result, __int64);
bool SdkRoutine_65f080(__int64, __int128*, __int128*, int);
bool SdkRoutine_65f240(__int64, unsigned int, _OWORD*, _OWORD*, _DWORD*);
extern _UNKNOWN* SdkData_e89ba0;
int8x16_t* nn_691a40(int8x16_t* result);
__int64 nn_6913c0_alt1(__int64 a1, unsigned int* a2, unsigned int a3, char a4);
__int64 SdkRoutine_691990_alt1(int, __int64);
float nn_691a40_alt1(int8x16_t* result);
__int64 nn_6913c0(__int64 a1, unsigned int* a2, int a3, char a4);

__int64 nn_6913c0(__int64 a1, unsigned int* a2, int a3, char a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  char* v10;
  bool v11;
  bool v12;
  _BOOL4 v13;
  int v14;
  bool v15;
  __int64 result;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _DWORD* i;
  int8x16_t v21;
  struct {
    __int128 v22;
    __int64 v23;
  } v22_;
  struct {
    unsigned int v24;
    unsigned int v25;
  } v24_;

  v4 = *a2;
  v5 = a2[1];
  v7 = a2[2];
  v6 = a2[3];
  v22_.v23 = 0;
  v21 = (__typeof__(v21)){0};
  *(_QWORD*)&v22_.v22 = __PAIR64__(v5, v4);
  *((_QWORD*)&v22_.v22 + 1) = __PAIR64__(v6, v7);
  v10 = (char*)SdkData_e89ba0 + 48 * a3;
  if (v4 == 0 &&
      (v10[11] != 0 ? (v11 = v5 == 0) : (v11 = true),
       v11 && (v10[12] != 0 ? (v12 = v7 == 0) : (v12 = true), v12))) {
    if (v10[13] == 0) {
      if ((v10[17] & 1) == 0) {
        return 0xFFFFFFFFLL;
      }
      goto LABEL_17;
    }
    v13 = v6 == 0;
    if ((v10[17] & 1) == 0) {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    v13 = false;
    if ((v10[17] & 1) == 0) {
      return 0xFFFFFFFFLL;
    }
  }
  if (v13) {
  LABEL_17:
    v14 = 1;
    v21 = (__typeof__(v21)){0};
    LODWORD(v22_.v23) = 1;
    goto LABEL_26;
  }
  if (v10[20] == 1) {
    DWORDn(v22_.v22, sizeof(v22_.v22) / 4 - 1) = 0;
  }
  if ((unsigned int)(a3 - 13) < 0xC) {
    goto LABEL_23;
  }
  if ((unsigned int)(a3 - 1) <= 0xB) {
    DWORD1(v22_.v22) = v4;
    v5 = v4;
  LABEL_23:
    *((_QWORD*)&v22_.v22 + 1) = __PAIR64__(v5, v4);
  }
  if ((unsigned __int8)SdkRoutine_691990_alt1(a3, (__int64)&v21) == 0) {
    return 0xFFFFFFFFLL;
  }
  nn_691a40_alt1(&v21);
  v14 = v22_.v23;
LABEL_26:
  v15 = SdkRoutine_65f080(a1 + 2520, (__int128*)&v21, &v22_.v22, v14);
  result = (unsigned int)v15 - 1;
  if ((a4 & 1) == 0 || !v15) {
    return result;
  }
  if ((SdkRoutine_65f150(a1 + 2520, &v24_.v25, &v24_.v24) & 1) == 0) {
    return 0xFFFFFFFFLL;
  }
  v17 = v24_.v25;
  if (v24_.v24 >= 0x1F) {
    v18 = 31;
  }
  else {
    v18 = v24_.v24;
  }
  if (v24_.v25 >= v18) {
  LABEL_40:
    if (v24_.v25 < v24_.v24) {
      for (i = (_DWORD*)(a1 + 36LL * v24_.v25 + 7844);; i += 9) {
        if (*(_DWORD*)i == 0) {
          if (SdkRoutine_65f240(a1 + 2520, v17, (_OWORD*)i - 2, (_OWORD*)i - 1,
                                i)) {
            if (*(i - 8) == LANES128(v21).n128_u32[0] &&
                *(_QWORD*)(i - 7) ==
                    *(unsigned __int64*)((char*)LANES128(v21).n128_u64 + 4) &&
                *(i - 5) == LANES128(v21).n128_u32[3]) {
              return (unsigned int)v17;
            }
          }
          else {
            *(_DWORD*)i = 0;
          }
        }
        if (++v17 >= (unsigned __int64)v24_.v24) {
          return 0xFFFFFFFFLL;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  result = v24_.v25;
  v19 = a1 + 36LL * v24_.v25 + 7812;
  while (*(_DWORD*)(v19 + 32) == 0 ||
         *(_DWORD*)v19 != LANES128(v21).n128_u32[0] ||
         *(_QWORD*)(v19 + 4) !=
             *(unsigned __int64*)((char*)LANES128(v21).n128_u64 + 4) ||
         *(_DWORD*)(v19 + 12) != LANES128(v21).n128_u32[3]) {
    result = (unsigned int)(result + 1);
    v19 += 36;
    if (v18 == (_DWORD)result) {
      goto LABEL_40;
    }
  }
  return result;
}

#pragma GCC visibility pop
