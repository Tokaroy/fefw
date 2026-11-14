#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_8412e0(__int64, __int64**, unsigned int);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_841430(__int64,
                                                                      __int64);
__int64 llvm_libcxx_libcxxabi_src_833e70(__int64);
__int64 llvm_libcxx_libcxxabi_src_835780(unsigned __int8**, __int64, __int64);
__int64 malloc_plt(unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 realloc_plt(__int64, unsigned __int64);
char* SdkRoutine_8393e0(unsigned __int16**);
extern __int64 (*SdkData_e839a0[])();
extern __int64 (*SdkData_e83a18[])();
extern __int64 (*SdkData_e83a90[])();
extern __int64 (*SdkData_e83b08[])();
unsigned __int128
anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
    _QWORD* a1, unsigned __int64 a2);
void __attribute__((noreturn)) llvm_libcxx_libcxxabi_src_84c1f0(__int64, ...);
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void abort_plt();
void free_plt(__int64);
__int64 llvm_libcxx_libcxxabi_src_840a60(__int64 a1, __int64* a2, __int64 a3);

__int64 llvm_libcxx_libcxxabi_src_840a60(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64 v4;
  __int64 result;
  unsigned __int8* v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int16 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  signed __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  char* v50;
  unsigned __int128 v51;
  _QWORD* v52;
  __int64 v53;
  __int16 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58[3];
  _QWORD v59[8];
  __int64* v60;

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v3 = *(unsigned __int8**)a1;
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v60 = a2;
  if ((unsigned __int64)(v4 - (_QWORD)v3) < 2) {
    return 0;
  }
  switch (*(_WORD*)v3) {
  case 0x7954:
    *(_QWORD*)a1 = v3 + 2;
    v9 = SdkRoutine_8412e0(a1, &v60, 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v10 = *(_QWORD**)(a1 + 4912);
      __asm__ volatile("" ::"r"(v10));
    }
    v11 = v9;
    {
      v12 = v10[1];
      __asm__ volatile("" ::"r"(v12));
    }
    if ((unsigned __int64)(v12 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v13 = (_QWORD*)malloc_plt(0x1000u),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v13 == nullptr) {
        goto LABEL_63;
      }
      v12 = 0;
      *v13 = v10;
      v13[1] = 0;
      v10 = v13;
      *(_QWORD*)(a1 + 4912) = v13;
    }
    v10[1] = v12 + 32;
    *(_QWORD*)((char*)v10 + v12 + 16) = SdkData_e839a0;
    result = (__int64)v10 + v12 + 16;
    *(_BYTE*)(result + 8) = 35;
    {
      v14 = *(_WORD*)((char*)v10 + v12 + 25);
      __asm__ volatile("" ::"r"(v14));
    }
    *(_QWORD*)(result + 16) = v11;
    *(_WORD*)(result + 9) = v14 & 0xF000 | 0x500;
    return result;
  case 0x6B54: {
    v15 = *(_BYTE*)(a1 + 778);
    __asm__ volatile("" ::"r"(v15));
  }
    *(_QWORD*)a1 = v3 + 2;
    *(_BYTE*)(a1 + 778) = 1;
    v16 = llvm_libcxx_libcxxabi_src_835780((unsigned __int8**)a1, 0, a3),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v16 == 0) {
      *(_BYTE*)(a1 + 778) = v15;
      return 0;
    }
    v17 = SdkRoutine_8412e0(a1, &v60, 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v18 = *(_QWORD**)(a1 + 4912);
      __asm__ volatile("" ::"r"(v18));
    }
    v19 = v17;
    {
      v20 = v18[1];
      __asm__ volatile("" ::"r"(v20));
    }
    if ((unsigned __int64)(v20 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v13 = (_QWORD*)malloc_plt(0x1000u),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v13 == nullptr) {
        goto LABEL_63;
      }
      v20 = 0;
      *v13 = v18;
      v13[1] = 0;
      v18 = v13;
      *(_QWORD*)(a1 + 4912) = v13;
    }
    v18[1] = v20 + 32;
    *(_QWORD*)((char*)v18 + v20 + 16) = SdkData_e83a18;
    result = (__int64)v18 + v20 + 16;
    *(_BYTE*)(result + 8) = 36;
    {
      v21 = *(_WORD*)((char*)v18 + v20 + 25);
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(result + 16) = v16;
    *(_QWORD*)(result + 24) = v19;
    *(_WORD*)(result + 9) = v21 & 0xF000 | 0x500;
    *(_BYTE*)(a1 + 778) = v15;
    return result;
  case 0x6E54:
    *(_QWORD*)a1 = v3 + 2;
    v22 = SdkRoutine_8412e0(a1, &v60, 1u),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = llvm_libcxx_libcxxabi_src_833e70(a1),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (result == 0) {
      return result;
    }
    {
      v23 = *(_QWORD**)(a1 + 4912);
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = result;
    {
      v25 = v23[1];
      __asm__ volatile("" ::"r"(v25));
    }
    if ((unsigned __int64)(v25 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v13 = (_QWORD*)malloc_plt(0x1000u),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v13 == nullptr) {
        goto LABEL_63;
      }
      v25 = 0;
      *v13 = v23;
      v13[1] = 0;
      v23 = v13;
      *(_QWORD*)(a1 + 4912) = v13;
    }
    v23[1] = v25 + 32;
    *(_QWORD*)((char*)v23 + v25 + 16) = SdkData_e83a90;
    result = (__int64)v23 + v25 + 16;
    *(_BYTE*)(result + 8) = 37;
    {
      v26 = *(_WORD*)((char*)v23 + v25 + 25);
      __asm__ volatile("" ::"r"(v26));
    }
    *(_QWORD*)(result + 16) = v22;
    *(_QWORD*)(result + 24) = v24;
    *(_WORD*)(result + 9) = v26 & 0xF000 | 0x500;
    return result;
  case 0x7454:
    *(_QWORD*)a1 = v3 + 2;
    v27 = SdkRoutine_8412e0(a1, &v60, 2u),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v29 = *(_QWORD*)(a1 + 664);
      __asm__ volatile("" ::"r"(v29));
    }
    {
      v30 = *(_QWORD**)(a1 + 672);
      __asm__ volatile("" ::"r"(v30));
    }
    {
      v31 = *(_QWORD*)(a1 + 16);
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v32 = *(_QWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v32));
    }
    v33 = v27;
    v34 = (signed __int64)v30 - v29;
    v58[0] = (__int64)v59;
    v58[1] = (__int64)v59;
    v57 = ((__int64)v30 - v29) >> 3;
    v58[2] = (__int64)&v60;
    memset(v59, 0, sizeof(v59));
    if (v30 == *(_QWORD**)(a1 + 680)) {
      if (v29 == a1 + 688) {
        v35 = malloc_plt(2 * v34),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v35 == 0) {
          goto LABEL_62;
        }
        if (v30 != (_QWORD*)v29) {
          v36 = v35;
          memmove_plt(v35, v29, v34),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v35 = v36;
        }
        *(_QWORD*)(a1 + 664) = v35;
      }
      else {
        v35 = realloc_plt(v29, 2 * v34),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        *(_QWORD*)(a1 + 664) = v35;
        if (v35 == 0) {
        LABEL_62:
          abort_plt(),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v30 = (_QWORD*)(v35 + v34);
      *(_QWORD*)(a1 + 680) = v35 + 8 * (v34 >> 2);
    }
    v37 = v32 - v31;
    v38 = (_QWORD*)(a1 + 40);
    v39 = v37 >> 3;
    {
      v40 = *(unsigned __int8**)a1;
      __asm__ volatile("" ::"r"(v40));
    }
    {
      v41 = *(unsigned __int8**)(a1 + 8);
      __asm__ volatile("" ::"r"(v41));
    }
    *v30 = v58;
    *(_QWORD*)(a1 + 672) = v30 + 1;
    do {
      if (v40 != v41 && *v40 == 69) {
        v50 = nullptr;
        goto LABEL_54;
      }
      result = llvm_libcxx_libcxxabi_src_840a60(a1, v58, v28),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (result == 0) {
        goto LABEL_58;
      }
      {
        v42 = *(_QWORD**)(a1 + 24);
        __asm__ volatile("" ::"r"(v42));
      }
      if (v42 == *(_QWORD**)(a1 + 32)) {
        {
          v43 = *(_QWORD*)(a1 + 16);
          __asm__ volatile("" ::"r"(v43));
        }
        v44 = result;
        v45 = (signed __int64)v42 - v43;
        if ((_QWORD*)v43 == v38) {
          v46 = malloc_plt(2 * ((_QWORD)v42 - v43)),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v46 == 0) {
            goto LABEL_62;
          }
          if (v42 != v38) {
            v47 = v46;
            memmove_plt(v46, v43, v45),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v46 = v47;
          }
          *(_QWORD*)(a1 + 16) = v46;
        }
        else {
          v46 = realloc_plt(*(_QWORD*)(a1 + 16), 2 * ((_QWORD)v42 - v43)),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          *(_QWORD*)(a1 + 16) = v46;
          if (v46 == 0) {
            goto LABEL_62;
          }
        }
        v42 = (_QWORD*)(v46 + v45);
        v48 = v46 + 8 * (v45 >> 2);
        result = v44;
        *(_QWORD*)(a1 + 32) = v48;
      }
      {
        v40 = *(unsigned __int8**)a1;
        __asm__ volatile("" ::"r"(v40));
      }
      {
        v41 = *(unsigned __int8**)(a1 + 8);
        __asm__ volatile("" ::"r"(v41));
      }
      *v42 = result;
      *(_QWORD*)(a1 + 24) = v42 + 1;
    } while (v40 == v41 || *v40 != 81);
    {
      v49 = *(_BYTE*)(a1 + 778);
      __asm__ volatile("" ::"r"(v49));
    }
    *(_QWORD*)a1 = v40 + 1;
    *(_BYTE*)(a1 + 778) = 1;
    v50 = SdkRoutine_8393e0((unsigned __int16**)a1),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    *(_BYTE*)(a1 + 778) = v49;
    if (v50 == nullptr ||
        (v40 = *(unsigned __int8**)a1, *(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) ||
        *v40 != 69) {
      result = 0;
      goto LABEL_58;
    }
  LABEL_54:
    *(_QWORD*)a1 = v40 + 1;
    v51 =
        anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
            (_QWORD*)a1, v39),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v52 = *(_QWORD**)(a1 + 4912);
      __asm__ volatile("" ::"r"(v52));
    }
    {
      v53 = v52[1];
      __asm__ volatile("" ::"r"(v53));
    }
    if ((unsigned __int64)(v53 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
    LABEL_57:
      v52[1] = v53 + 48;
      *(_QWORD*)((char*)v52 + v53 + 16) = SdkData_e83b08;
      result = (__int64)v52 + v53 + 16;
      *(_BYTE*)(result + 8) = 38;
      {
        v54 = *(_WORD*)((char*)v52 + v53 + 25);
        __asm__ volatile("" ::"r"(v54));
      }
      *(_QWORD*)(result + 16) = v33;
      *(_OWORD*)(result + 24) = v51;
      *(_QWORD*)(result + 40) = v50;
      *(_WORD*)(result + 9) = v54 & 0xF000 | 0x500;
    LABEL_58:
      {
        v55 = *(_QWORD*)(a1 + 664);
        __asm__ volatile("" ::"r"(v55));
      }
      if (v57 > (signed __int64)(*(_QWORD*)(a1 + 672) - v55) >> 3) {
        llvm_libcxx_libcxxabi_src_84c1f0((__int64)"libc++abi: "),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      *(_QWORD*)(a1 + 672) = v55 + 8 * v57;
      if ((_QWORD*)v58[0] != v59) {
        v56 = result;
        free_plt(v58[0]),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return v56;
      }
      return result;
    }
    v13 = (_QWORD*)malloc_plt(0x1000u),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v13 != nullptr) {
      v53 = 0;
      *v13 = v52;
      v13[1] = 0;
      v52 = v13;
      *(_QWORD*)(a1 + 4912) = v13;
      goto LABEL_57;
    }
  LABEL_63:
    std_terminate_plt(v13),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  default:
    break;
  }
  {
    v8 = *(unsigned __int16*)v3;
    __asm__ volatile("" ::"r"(v8));
  }
  v7 = v3 + 2;
  if (v8 != 28756) {
    return 0;
  }
  *(_QWORD*)a1 = v7;
  result = llvm_libcxx_libcxxabi_src_840a60(a1, a2, a3),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (result != 0) {
    return anonymous_itanium_demangle_AbstractManglingParser_make_841430(
        a1, result);
  }
  return result;
}

#pragma GCC visibility pop
