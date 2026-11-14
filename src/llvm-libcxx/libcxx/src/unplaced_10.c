#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_801970(_QWORD);
__int64 SdkRoutine_807eb0(_QWORD);
__int64 SdkRoutine_815340();
__int64 SdkRoutine_81add0(_QWORD);
__int64 SdkRoutine_81b480(_QWORD);
__int64 SdkRoutine_829dc0(_QWORD);
__int64 SdkRoutine_82ad70(_QWORD*);
__int64 SdkRoutine_82dd20(__int64*);
__int64 SdkRoutine_82f620(_QWORD);
__int64 SdkRoutine_830970(_QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_87cb10(_QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_begin_catch_plt(_QWORD);
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 __cxa_rethrow_plt(_QWORD);
__int64 free_plt(_QWORD);
__int64 llvm_libcxx_libcxx_src_806ce0(_QWORD);
__int64 locale_82f740(_QWORD);
__int64 locale_830290(_WORD*);
__int64 std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(__int64*);
__int64 std___1___shared_count_Destroy___shared_count_plt(_QWORD);
__int64 std___1___time_get_Destroy___time_get(_QWORD*);
__int64 std___1_ctype_byname_Destroy_ctype_byname(__int64);
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
__int64 std___1_locale_locale_81b330(_QWORD);
__int64 std___1_locale_name(_QWORD);
__int64 std___1_money_put_do_put_812320(_QWORD);
__int64 std___1_num_put_do_put_802c40(_QWORD);
__int64 std___1_num_put_do_put_802f80(_QWORD);
__int64 std___1_num_put_do_put_804140(_QWORD);
__int64 std___1_num_put_do_put_804490(_QWORD);
__int64 std___1_num_put_do_put_8047d0(_QWORD);
extern _UNKNOWN SdkData_1060b80;
extern _UNKNOWN SdkData_1060b90;
extern _UNKNOWN SdkData_1060ba0;
void __attribute__((noreturn)) SdkRoutine_7cd620();
__int64 llvm_libcxx_libcxx_src_801910(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_802c2c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
__int64 llvm_libcxx_libcxx_src_802f6c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_803960(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_803e3c(__int64 a1);
__int64 llvm_libcxx_libcxx_src_804104(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12);
__int64 llvm_libcxx_libcxx_src_80447c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
__int64 llvm_libcxx_libcxx_src_8047bc(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8051e0(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8056bc(__int64 a1);
__int64 llvm_libcxx_libcxx_src_806c8c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12,
                                      __int64 a13, __int64 a14, __int64 a15,
                                      __int64 a16);
__int64 llvm_libcxx_libcxx_src_807e9c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, char a11);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_809df4(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_80b358(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_80f6d0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12,
    __int64 a13, __int64 a14, __int64 a15, __int64 a16, __int64 a17,
    __int64 a18, void (*a19)(__int64), __int64 a20, __int64 a21, __int64 a22,
    __int64 a23, __int64 a24, __int64 a25, __int64 a26, __int64 a27,
    __int64 a28, __int64 a29, __int64 a30, __int64 a31, __int64 a32,
    __int64 a33, __int64 a34, __int64 a35, __int64 a36, __int64 a37,
    __int64 a38, __int64 a39, __int64 a40, __int64 a41);
__int64 llvm_libcxx_libcxx_src_8122f8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_812e88(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8158d0(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816ad0(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816d10(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816f40(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_817120(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_817db0(__int64 a1);
__int64 llvm_libcxx_libcxx_src_81adb8(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81b25c(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_81b318(__int64 a1);
__int64 llvm_libcxx_libcxx_src_81b398(__int64 a1);
__int64 llvm_libcxx_libcxx_src_81b468(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81dd40(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81de08(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e488(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e83c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81ec28(__int64 a1);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_822ab8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_822e78(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_823008(__int64 a1);
__int64 llvm_libcxx_libcxx_src_829d70(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_829e70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_82a58c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
__int64 llvm_libcxx_libcxx_src_82abec(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_82ae98(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_82f608(__int64 a1);
__int64 llvm_libcxx_libcxx_src_82f728(__int64 a1);
__int64 llvm_libcxx_libcxx_src_83027c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10);
__int64 llvm_libcxx_libcxx_src_83095c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eaf8();
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eb10();

__int64 llvm_libcxx_libcxx_src_801910(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return SdkRoutine_801970(v13);
}

__int64 llvm_libcxx_libcxx_src_802c2c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;

  std___1_locale_Destroy_locale_plt(&a9);
  v10 = _Unwind_Resume_plt(a1);
  return std___1_num_put_do_put_802c40(v10);
}

__int64 llvm_libcxx_libcxx_src_802f6c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;

  std___1_locale_Destroy_locale_plt(&a9);
  v10 = _Unwind_Resume_plt(a1);
  return std___1_num_put_do_put_802f80(v10);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_803960(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_803e3c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_804104(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  std___1_locale_Destroy_locale_plt(&a12);
  v13 = _Unwind_Resume_plt(a1);
  if ((a9 & 1) != 0) {
    SdkRoutine_857220(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL);
  }
  v14 = _Unwind_Resume_plt(v13);
  return std___1_num_put_do_put_804140(v14);
}

__int64 llvm_libcxx_libcxx_src_80447c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;

  std___1_locale_Destroy_locale_plt(&a9);
  v10 = _Unwind_Resume_plt(a1);
  return std___1_num_put_do_put_804490(v10);
}

__int64 llvm_libcxx_libcxx_src_8047bc(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;

  std___1_locale_Destroy_locale_plt(&a9);
  v10 = _Unwind_Resume_plt(a1);
  return std___1_num_put_do_put_8047d0(v10);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8051e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8056bc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&SdkData_1060b80);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_806c8c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12,
                                      __int64 a13, __int64 a14, __int64 a15,
                                      __int64 a16)
{
  __int64 v17;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  v17 = _Unwind_Resume_plt(a1);
  return llvm_libcxx_libcxx_src_806ce0(v17);
}

__int64 llvm_libcxx_libcxx_src_807e9c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, char a11)
{
  __int64 v12;

  std___1_locale_Destroy_locale_plt(&a11);
  v12 = _Unwind_Resume_plt(a1);
  return SdkRoutine_807eb0(v12);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_809df4(__int64 a1)
{
  __int64 v1;

  std___1_locale_Destroy_locale_plt(v1 - 32);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_80b358(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_80f6d0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12,
    __int64 a13, __int64 a14, __int64 a15, __int64 a16, __int64 a17,
    __int64 a18, void (*a19)(__int64), __int64 a20, __int64 a21, __int64 a22,
    __int64 a23, __int64 a24, __int64 a25, __int64 a26, __int64 a27,
    __int64 a28, __int64 a29, __int64 a30, __int64 a31, __int64 a32,
    __int64 a33, __int64 a34, __int64 a35, __int64 a36, __int64 a37,
    __int64 a38, __int64 a39, __int64 a40, __int64 a41)
{
  __int64 v41;

  if ((a27 & 1) != 0) {
    SdkRoutine_857220(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  SdkRoutine_857220(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  SdkRoutine_857220(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  SdkRoutine_857220(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      _Unwind_Resume_plt(a1);
      SdkRoutine_7cd620();
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  SdkRoutine_857220(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

__int64 llvm_libcxx_libcxx_src_8122f8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, (4 * a10) & 0xFFFFFFFFFFFFFFF8LL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return std___1_money_put_do_put_812320(v13);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_812e88(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  std___1___shared_count_Destroy___shared_count_plt(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 304),
                      *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_815340();
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8158d0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;

  __cxa_guard_abort_plt(&SdkData_1060b90);
  v3 = __cxa_begin_catch_plt(a1);
  v4 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v1 + 24) != v4) {
    goto LABEL_3;
  }
  while (1) {
    __cxa_rethrow_plt(v3);
  LABEL_3:
    v5 = 1;
    v6 = 0;
    do {
      v3 = *(_QWORD*)(v4 + 8 * v6);
      if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      }
      v4 = *(_QWORD*)(v1 + 16);
      v6 = v5++;
    } while (v6 < (*(_QWORD*)(v1 + 24) - v4) >> 3);
  }
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816ad0(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      std___1___shared_count_Destroy___shared_count_plt(v1);
      _Unwind_Resume_plt(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816d10(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      std___1___shared_count_Destroy___shared_count_plt(v1);
      _Unwind_Resume_plt(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_816f40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_817120(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_817db0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;

  SdkRoutine_857220(v2, 24);
  v4 = __cxa_begin_catch_plt(a1);
  v5 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v1 + 24) != v5) {
    goto LABEL_3;
  }
  while (1) {
    __cxa_rethrow_plt(v4);
  LABEL_3:
    v6 = 1;
    v7 = 0;
    do {
      v4 = *(_QWORD*)(v5 + 8 * v7);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      }
      v5 = *(_QWORD*)(v1 + 16);
      v7 = v6++;
    } while (v7 < (*(_QWORD*)(v1 + 24) - v5) >> 3);
  }
}

__int64 llvm_libcxx_libcxx_src_81adb8(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060ba0);
  v2 = _Unwind_Resume_plt(a1);
  return SdkRoutine_81add0(v2);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_81b25c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
    SdkRoutine_857220(v12, 312);
    a1 = _Unwind_Resume_plt(a1);
  }
  SdkRoutine_857220(v12, 312);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_81b318(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_857220(v1, 312);
  v3 = _Unwind_Resume_plt(a1);
  return std___1_locale_locale_81b330(v3);
}

__int64 llvm_libcxx_libcxx_src_81b398(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_857220(v1, 312);
  v3 = _Unwind_Resume_plt(a1);
  return std___1_locale_name(v3);
}

__int64 llvm_libcxx_libcxx_src_81b468(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_857220(v1, 312);
  v3 = _Unwind_Resume_plt(a1);
  return SdkRoutine_81b480(v3);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81dd40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81de08(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e488(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81e83c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eaf8()
{
  __int64 v0;

  SdkRoutine_82dd20((__int64*)(v0 + 24));
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81eb10()
{
  __int64 v0;

  SdkRoutine_82dd20((__int64*)(v0 + 24));
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_81ec28(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_822ab8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13)
{
  __int64 v13;
  __int64 v15;

  SdkRoutine_82dd20(&a13);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8));
  v15 = _Unwind_Resume_plt(a1);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8));
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_822e78(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13)
{
  __int64 v13;
  __int64 v15;

  SdkRoutine_82dd20(&a13);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8));
  v15 = _Unwind_Resume_plt(a1);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(
      (__int64*)(v13 - 8));
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_823008(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_829d70(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_82dd20(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_82dd20(&a9);
  v11 = _Unwind_Resume_plt(v10);
  SdkRoutine_82dd20(&a9);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_82dd20(&a9);
  v13 = _Unwind_Resume_plt(v12);
  return SdkRoutine_829dc0(v13);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_829e70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_46;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_47;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_49:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_89;
      }
    LABEL_45:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_46:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_49;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_50;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_45;
  }
LABEL_89:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  std___1___time_get_Destroy___time_get((_QWORD*)v10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_82a58c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_47;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_48;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_89:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_45;
      }
    LABEL_46:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_48:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_50;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_89;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_46;
  }
LABEL_45:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  goto LABEL_46;
}

__int64 llvm_libcxx_libcxx_src_82abec(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10)
{
  _QWORD* v10;
  _QWORD* v12;

  SdkRoutine_82ad70(&a10);
  SdkRoutine_87cb10(v10 + 130);
  SdkRoutine_87cb10(v10 + 127);
  SdkRoutine_87cb10(v10 + 124);
  SdkRoutine_87cb10(v10 + 121);
  SdkRoutine_87cb10(v10 + 118);
  SdkRoutine_87cb10(v10 + 115);
  SdkRoutine_87cb10(v10 + 112);
  SdkRoutine_87cb10(v10 + 109);
  SdkRoutine_87cb10(v10 + 106);
  SdkRoutine_87cb10(v10 + 103);
  SdkRoutine_87cb10(v10 + 100);
  SdkRoutine_87cb10(v10 + 97);
  SdkRoutine_87cb10(v10 + 94);
  SdkRoutine_87cb10(v10 + 91);
  SdkRoutine_87cb10(v10 + 88);
  SdkRoutine_87cb10(v10 + 85);
  SdkRoutine_87cb10(v10 + 82);
  SdkRoutine_87cb10(v10 + 79);
  SdkRoutine_87cb10(v10 + 76);
  SdkRoutine_87cb10(v10 + 73);
  SdkRoutine_87cb10(v10 + 70);
  SdkRoutine_87cb10(v10 + 67);
  SdkRoutine_87cb10(v10 + 64);
  SdkRoutine_87cb10(v10 + 61);
  SdkRoutine_87cb10(v10 + 58);
  SdkRoutine_87cb10(v10 + 55);
  SdkRoutine_87cb10(v10 + 52);
  SdkRoutine_87cb10(v10 + 49);
  SdkRoutine_87cb10(v10 + 46);
  SdkRoutine_87cb10(v10 + 43);
  SdkRoutine_87cb10(v10 + 40);
  SdkRoutine_87cb10(v10 + 37);
  SdkRoutine_87cb10(v10 + 34);
  SdkRoutine_87cb10(v10 + 31);
  SdkRoutine_87cb10(v10 + 28);
  SdkRoutine_87cb10(v10 + 25);
  SdkRoutine_87cb10(v10 + 22);
  SdkRoutine_87cb10(v10 + 19);
  SdkRoutine_87cb10(v10 + 16);
  SdkRoutine_87cb10(v10 + 13);
  SdkRoutine_87cb10(v10 + 10);
  SdkRoutine_87cb10(v10 + 7);
  SdkRoutine_87cb10(v10 + 4);
  SdkRoutine_87cb10(v10 + 1);
  std___1___time_get_Destroy___time_get(v10);
  v12 = (_QWORD*)_Unwind_Resume_plt(a1);
  return SdkRoutine_82ad70(v12);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_82ae98(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12)
{
  _QWORD* v12;
  __int64 v14;
  __int64 v15;

  SdkRoutine_82ad70(&a10);
  SdkRoutine_87cb10(v12 + 130);
  SdkRoutine_87cb10(v12 + 127);
  SdkRoutine_87cb10(v12 + 124);
  SdkRoutine_87cb10(v12 + 121);
  SdkRoutine_87cb10(v12 + 118);
  SdkRoutine_87cb10(v12 + 115);
  SdkRoutine_87cb10(v12 + 112);
  SdkRoutine_87cb10(v12 + 109);
  SdkRoutine_87cb10(v12 + 106);
  SdkRoutine_87cb10(v12 + 103);
  SdkRoutine_87cb10(v12 + 100);
  SdkRoutine_87cb10(v12 + 97);
  SdkRoutine_87cb10(v12 + 94);
  SdkRoutine_87cb10(v12 + 91);
  SdkRoutine_87cb10(v12 + 88);
  SdkRoutine_87cb10(v12 + 85);
  SdkRoutine_87cb10(v12 + 82);
  SdkRoutine_87cb10(v12 + 79);
  SdkRoutine_87cb10(v12 + 76);
  SdkRoutine_87cb10(v12 + 73);
  SdkRoutine_87cb10(v12 + 70);
  SdkRoutine_87cb10(v12 + 67);
  SdkRoutine_87cb10(v12 + 64);
  SdkRoutine_87cb10(v12 + 61);
  SdkRoutine_87cb10(v12 + 58);
  SdkRoutine_87cb10(v12 + 55);
  SdkRoutine_87cb10(v12 + 52);
  SdkRoutine_87cb10(v12 + 49);
  SdkRoutine_87cb10(v12 + 46);
  SdkRoutine_87cb10(v12 + 43);
  SdkRoutine_87cb10(v12 + 40);
  SdkRoutine_87cb10(v12 + 37);
  SdkRoutine_87cb10(v12 + 34);
  SdkRoutine_87cb10(v12 + 31);
  SdkRoutine_87cb10(v12 + 28);
  SdkRoutine_87cb10(v12 + 25);
  SdkRoutine_87cb10(v12 + 22);
  SdkRoutine_87cb10(v12 + 19);
  SdkRoutine_87cb10(v12 + 16);
  SdkRoutine_87cb10(v12 + 13);
  SdkRoutine_87cb10(v12 + 10);
  SdkRoutine_87cb10(v12 + 7);
  SdkRoutine_87cb10(v12 + 4);
  SdkRoutine_87cb10(v12 + 1);
  std___1___time_get_Destroy___time_get(v12);
  v14 = _Unwind_Resume_plt(a1);
  v15 = v14;
  if ((a10 & 1) == 0) {
    _Unwind_Resume_plt(v14);
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(v15);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_82f608(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v2 = _Unwind_Resume_plt(a1);
  return SdkRoutine_82f620(v2);
}

__int64 llvm_libcxx_libcxx_src_82f728(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v2 = _Unwind_Resume_plt(a1);
  return locale_82f740(v2);
}

__int64 llvm_libcxx_libcxx_src_83027c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10)
{
  _WORD* v11;

  std___1_locale_Destroy_locale_plt(&a10);
  v11 = (_WORD*)_Unwind_Resume_plt(a1);
  return locale_830290(v11);
}

__int64 llvm_libcxx_libcxx_src_83095c(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_82dd20((__int64*)(v1 - 40));
  v3 = _Unwind_Resume_plt(a1);
  return SdkRoutine_830970(v3);
}

#pragma GCC visibility pop
