#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
llvm_libcxx_libcxx_src_7d3760(PSEUDO_X8, __int64, __int64, __int64, __int64,
                              __int64, __int64, __int64, __int64);
__int64 SdkRoutine_1bcc60(__int64, __int64*, __int64, __int64, __int64, __int64,
                          unsigned int);
__int64 SdkRoutine_5a32e0(__int64, __int64, char, unsigned int);
__int64 SdkRoutine_5a34f0(__int64, _DWORD*, __int64, char, unsigned int);
__int64 SdkRoutine_6581c0(__int64 result, __int64);
__int64 SdkRoutine_664890(__int64 result);
__int64 SdkRoutine_69c720(__int64, char, __int64, unsigned int, __int64,
                          unsigned int);
__int64 SdkRoutine_69cc00(__int64, __int64);
__int64 SdkRoutine_6a0ba0(__int64 result);
__int64 SdkRoutine_7e0410(__int64*, __int64, unsigned __int64);
__int64 SdkRoutine_857220(__int64, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_859ba0(const char*, const char*,
                                            const char*, int);
__int64 nvidia_64b2a0(__int64 result, __int64, __int64);
__int64 std_runtime_error_what_plt(void);
bool SdkRoutine_66eaa0(__int64, int, __int64);
int* SdkRoutine_6a0b30(int* result);
void SdkRoutine_64b940();
__int64 nn_1bca20(__int64 a1, __int64* a2, __int64 a3, __int64* a4);
__int64 nn_5a3170(__int64 a1, __int64 a2, char a3);
__int64 nn_5a3180(__int64 a1, _DWORD* a2, __int64 a3, char a4);
_QWORD* nn_64b0b0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_658370(__int64 a1, __int64 a2);
_QWORD* nn_664a50(_QWORD* result, char a2);
__int64 nn_69d180(__int64 a1);
__int64 nn_69d3b0(__int64 a1);
__int64 nn_69d810(__int64 a1);
unsigned __int128 nn_6a1f80(__int64 a1);
__int64 nn_6f4860(__int64 a1, __int64 a2, char a3);
__int64 nn_7d3630(void* this_, int a2);
__attribute__((swiftcall)) void nn_812790(PSEUDO_X8 x8_, __int64 unused_int0,
                                          __int64 unused_int1,
                                          __int64 unused_int2,
                                          __int64 unused_int3, __int64 a1);

__int64 nn_1bca20(__int64 a1, __int64* a2, __int64 a3, __int64* a4)
{
  return SdkRoutine_1bcc60(a1 + 8, a2, a3, 128, *a4, a4[1], 0x65u);
}

__int64 nn_5a3170(__int64 a1, __int64 a2, char a3)
{
  return SdkRoutine_5a32e0(a1 + 8, a2, a3, 0x68u);
}

__int64 nn_5a3180(__int64 a1, _DWORD* a2, __int64 a3, char a4)
{
  return SdkRoutine_5a34f0(a1 + 8, a2, a3, a4, 0x69u);
}

_QWORD* nn_64b0b0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  bool v16;
  char v17;
  void (*v18)(void);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;

  {
    v4 = result[9];
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *result - v4;
    __asm__ volatile("" ::"r"(v5));
  }
  if (*result == v4) {
    goto LABEL_18;
  }
  {
    v6 = result[7];
    __asm__ volatile("" ::"r"(v6));
  }
  result[9] = *result;
  {
    v7 = result[5];
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = v5 >> 2;
  v9 = v4 - v6;
  {
    v10 = result[11];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = v9 + result[12];
    __asm__ volatile("" ::"r"(v11));
  }
  if (v10 == 0 ||
      ((v12 = *(unsigned int*)(v7 - 8), v13 = *(_QWORD*)(v7 - 24) + 4 * v12,
        v14 = v12 + v8, v15 = (unsigned int)(v12 + v8) >> 21, v13 == v11)
           ? (v16 = v15 == 0)
           : (v16 = false),
       !v16 || ((v17 = *(_BYTE*)(v7 - 4)) & 1) == 0)) {
    if ((unsigned __int64)(v7 + 32) > result[6] &&
        *((_BYTE*)result + 21) != 0) {
      v18 = (void (*)(void))result[15];
      if (v18 != nullptr) {
        v19 = a4;
        v20 = a2;
        v21 = a3;
        v22 = result;
        v18();
        {
          v7 = v22[5];
          __asm__ volatile("" ::"r"(v7));
        }
        if ((signed __int64)(v22[6] - v7 + 16) >= 48) {
          {
            v10 = v22[11];
            __asm__ volatile("" ::"r"(v10));
          }
          result = v22;
          a3 = v21;
          a2 = v20;
          a4 = v19;
          goto LABEL_14;
        }
        v28 = "CommandBuffer out-of-memory callback didn't add enough control "
              "memory.";
      }
      else {
        v28 = "CommandBuffer has run out of control memory with no "
              "out-of-memory callback.";
      }
      nn_diag_detail_AbortImpl_plt_859ba0(v28, nullptr, nullptr, 0);
    }
  LABEL_14:
    if (v10 != 0) {
      *(_DWORD*)(v10 + 4) =
          (((unsigned __int64)*(unsigned int*)(v10 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 24) = 0;
      *(_QWORD*)v7 = 0x100000003LL;
      result[11] = v7;
      v7 += 8;
    }
    *(_QWORD*)v7 = v11;
    *(_QWORD*)(v7 + 8) = v4;
    *(_DWORD*)(v7 + 16) = v8;
    *(_BYTE*)(v7 + 20) = 3;
    result[5] = v7 + 24;
  LABEL_18:
    if (*(_DWORD*)a2 != 0) {
      goto LABEL_22;
    }
    goto LABEL_19;
  }
  *(_DWORD*)(v7 - 8) = v14;
  *(_BYTE*)(v7 - 4) = v17 | 2;
  if (*(_DWORD*)a2 == 0) {
  LABEL_19:
    if ((*(_BYTE*)(a2 + 16) & 1) != 0) {
      v23 = 0;
      goto LABEL_23;
    }
  }
LABEL_22:
  {
    v23 = *(_QWORD*)(a2 + 48);
    __asm__ volatile("" ::"r"(v23));
  }
LABEL_23:
  {
    v24 = *((unsigned int*)result + 26);
    __asm__ volatile("" ::"r"(v24));
  }
  v25 = v23 + a3;
  result[7] = v25;
  result[9] = v25;
  v26 = v25 + a4 - 4 * v24;
  v27 = v25 - 4 * v24 + 8388604;
  result[4] = v26;
  if (v26 >= v27) {
    v26 = v27;
  }
  *result = v25;
  result[1] = v26;
  result[12] = *(_QWORD*)(a2 + 24) + a3;
  return result;
}

__int64 nn_658370(__int64 a1, __int64 a2)
{
  return SdkRoutine_6581c0(a1 + 11240, a2);
}

_QWORD* nn_664a50(_QWORD* result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  bool v17;
  char v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  bool v21;

  {
    v2 = result[1405];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = result[1414];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v5 = result[1410];
    __asm__ volatile("" ::"r"(v5));
  }
  if (v2 != v3 | v5 != result[1415]) {
    v7 = (__int64)result;
    if (v2 != v3 && (a2 & 1) != 0) {
      {
        v8 = result[1412];
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = result[1417];
        __asm__ volatile("" ::"r"(v9));
      }
      v10 = (unsigned __int64)(v2 - v3) >> 2;
      result[1414] = v2;
      v11 = v3 - v8 + v9;
      {
        v12 = result[1416];
        __asm__ volatile("" ::"r"(v12));
      }
      if (v12 != 0 &&
          ((v13 = *(unsigned int*)(v5 - 8), v14 = *(_QWORD*)(v5 - 24) + 4 * v13,
            v15 = v13 + v10, v16 = (unsigned int)(v13 + v10) >> 21, v14 == v11)
               ? (v17 = v16 == 0)
               : (v17 = false),
           v17 && ((v18 = *(_BYTE*)(v5 - 4)) & 1) != 0)) {
        *(_DWORD*)(v5 - 8) = v15;
        *(_BYTE*)(v5 - 4) = v18 | 2;
      }
      else {
        if ((unsigned __int64)(v5 + 32) > result[1411]) {
          ((void (*)(_QWORD*))SdkRoutine_64b940)(result + 1405);
          {
            v5 = *(_QWORD*)(v7 + 11280);
            __asm__ volatile("" ::"r"(v5));
          }
          {
            v12 = *(_QWORD*)(v7 + 11328);
            __asm__ volatile("" ::"r"(v12));
          }
        }
        if (v12 != 0) {
          *(_DWORD*)(v12 + 4) =
              (((unsigned __int64)*(unsigned int*)(v12 + 4) << 32) +
               0x100000000LL) >>
              32;
        }
        else {
          *(_QWORD*)(v5 + 8) = 0;
          *(_QWORD*)(v5 + 16) = 0;
          *(_QWORD*)(v5 + 24) = 0;
          *(_QWORD*)v5 = 0x100000003LL;
          *(_QWORD*)(v7 + 11328) = v5;
          v5 += 8;
        }
        *(_QWORD*)v5 = v11;
        *(_QWORD*)(v5 + 8) = v3;
        *(_DWORD*)(v5 + 16) = v10;
        *(_BYTE*)(v5 + 20) = 3;
        *(_QWORD*)(v7 + 11280) = v5 + 24;
      }
    }
    {
      v19 = *(unsigned __int64**)(v7 + 11320);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *v19;
      __asm__ volatile("" ::"r"(v20));
    }
    *(_BYTE*)(v7 + 11448) = 1;
    *(_QWORD*)v7 += 8 * HIDWORD(v20);
    v21 = SdkRoutine_66eaa0(v7 + 40, SHIDWORD(v20), (__int64)(v19 + 1));
    result = (_QWORD*)nvidia_64b2a0(v7 + 11240, v7 + 9648, 512);
    *(_QWORD*)(v7 + 11320) = *(_QWORD*)(v7 + 11280);
    if (v21) {
      return (_QWORD*)SdkRoutine_664890(v7);
    }
  }
  return result;
}

__int64 nn_69d180(__int64 a1)
{
  __int64 v2;

  v2 = SdkRoutine_6a0ba0(*(_QWORD*)(a1 + 8));
  return SdkRoutine_69c720(v2, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL) == 7,
                           *(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 32),
                           *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL),
                           *(_DWORD*)(a1 + 36));
}

__int64 nn_69d3b0(__int64 a1)
{
  int* v1;
  __int64 v3;

  {
    v1 = *(int**)(a1 + 8);
    __asm__ volatile("" ::"r"(v1));
  }
  if (SdkRoutine_6a0b30(v1) == nullptr) {
    return 5;
  }
  v3 = SdkRoutine_6a0ba0((__int64)v1);
  return SdkRoutine_69c720(v3, *(_BYTE*)(*(_QWORD*)(a1 + 16) + 16LL),
                           *(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 32),
                           *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL),
                           *(_DWORD*)(a1 + 36));
}

__int64 nn_69d810(__int64 a1)
{
  __int64* v1;
  __int64 v3;

  {
    v1 = *(__int64**)(a1 + 16);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 != nullptr) {
    v3 = *v1;
    __asm__ volatile("" ::"r"(v3));
  }
  else {
    v3 = 0;
  }
  return SdkRoutine_69cc00(v3, a1);
}

unsigned __int128 nn_6a1f80(__int64 a1)
{
  __int64 v1;
  unsigned __int128 result;

  {
    v1 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v1));
  }
  *(_QWORD*)&result = *(_QWORD*)(a1 + 10784) + *(unsigned int*)(a1 + 11048);
  if ((*(_BYTE*)(v1 + 9) & 3) != 0) {
    *((_QWORD*)&result + 1) = 14336;
  }
  else {
    *((_QWORD*)&result + 1) = 3584;
  }
  return result;
}

__int64 nn_6f4860(__int64 a1, __int64 a2, char a3)
{
  return SdkRoutine_5a32e0(a1 + 8, a2, a3, 0xEEu);
}

__int64 nn_7d3630(void* this_, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  void* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  _QWORD v23[3];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v4 = std_runtime_error_what_plt(),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if (a2 != 2) {
    if (a2 == 1) {
      {
        v11 = *((_QWORD*)this_ + 4);
        __asm__ volatile("" ::"r"(v11));
      }
      if ((*(_BYTE*)v11 & 1) != 0) {
        v12 = *(_QWORD*)(v11 + 16);
        __asm__ volatile("" ::"r"(v12));
      }
      else {
        v12 = v11 + 1;
      }
      result = (__int64)X8CALL_X0(
          _QWORD*, llvm_libcxx_libcxx_src_7d3760(
                       (void*)(v23), (__int64)"filesystem error: %s [\"%s\"]",
                       v4, v12, v6, v7, v8, v9, v10)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      {
        v14 = *((_QWORD*)this_ + 4);
        __asm__ volatile("" ::"r"(v14));
      }
      v15 = (void*)(v14 + 48);
      if ((*(_BYTE*)(v14 + 48) & 1) == 0) {
        goto LABEL_16;
      }
    }
    else {
      result = (__int64)X8CALL_X0(_QWORD*, llvm_libcxx_libcxx_src_7d3760(
                                               (void*)(v23),
                                               (__int64)"filesystem error: %s",
                                               v4, v5, v6, v7, v8, v9, v10)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
      {
        v14 = *((_QWORD*)this_ + 4);
        __asm__ volatile("" ::"r"(v14));
      }
      v15 = (void*)(v14 + 48);
      if ((*(_BYTE*)(v14 + 48) & 1) == 0) {
        goto LABEL_16;
      }
    }
  LABEL_15:
    result = SdkRoutine_857220(*(_QWORD*)(v14 + 64),
                               *(_QWORD*)(v14 + 48) & 0xFFFFFFFFFFFFFFFELL),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    goto LABEL_16;
  }
  {
    v16 = *((_QWORD*)this_ + 4);
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = *(_BYTE*)(v16 + 24);
    __asm__ volatile("" ::"r"(v17));
  }
  if ((*(_BYTE*)v16 & 1) != 0) {
    v18 = *(_QWORD*)(v16 + 16);
    __asm__ volatile("" ::"r"(v18));
  }
  else {
    v18 = v16 + 1;
  }
  {
    v19 = *(_QWORD*)(v16 + 40);
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = v16 + 25;
  if ((v17 & 1) != 0) {
    v21 = v19;
  }
  else {
    v21 = v20;
  }
  result = (__int64)X8CALL_X0(
      _QWORD*,
      llvm_libcxx_libcxx_src_7d3760(
          (void*)(v23), (__int64)"filesystem error: %s [\"%s\"] [\"%s\"]", v4,
          v18, v21, v7, v8, v9, v10)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  {
    v14 = *((_QWORD*)this_ + 4);
    __asm__ volatile("" ::"r"(v14));
  }
  v15 = (void*)(v14 + 48);
  if ((*(_BYTE*)(v14 + 48) & 1) != 0) {
    goto LABEL_15;
  }
LABEL_16:
  qmemcpy(v15, v23, 24);
  return result;
}

__attribute__((swiftcall)) void nn_812790(PSEUDO_X8 x8_, __int64 unused_int0,
                                          __int64 unused_int1,
                                          __int64 unused_int2,
                                          __int64 unused_int3, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a1 & 1) != 0) {
    SdkRoutine_7e0410(a2, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  *a2 = *(_QWORD*)a1;
  a2[1] = v2;
  a2[2] = *(_QWORD*)(a1 + 16);
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
