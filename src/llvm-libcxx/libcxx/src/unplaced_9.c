#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87cb90(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_7e6b70(_QWORD);
__int64 SdkRoutine_7ee190(_QWORD);
__int64 SdkRoutine_7ee260(_QWORD);
__int64 SdkRoutine_7f3820(_QWORD);
__int64 SdkRoutine_7f38f0(_QWORD);
__int64 SdkRoutine_7f3b80(_QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_86ee80(_QWORD);
__int64 SdkRoutine_87cb10(_QWORD);
__int64 SdkRoutine_87cba0(_QWORD);
__int64 SdkRoutine_87cbb0(_QWORD);
__int64 SdkRoutine_87ce80(_QWORD);
__int64 SdkRoutine_87cef0(_QWORD);
__int64 SdkRoutine_87cf40(_QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 call_once_7cd5d0(__int64 result, char);
__int64 fclose_plt(void* this_, void*);
__int64 llvmlibcxx_libcxx_7d58e0(__int64 result);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1___throw_system_error_plt(_QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
__int64 std___1_mutex_unlock_plt(_QWORD);
__int64 std___1_stod_7e1c80(_QWORD);
__int64 std___1_stol_7e0c50(_QWORD);
__int64 std___1_stol_7e15f0(_QWORD);
__int64 std___1_stold_7e1de0(_QWORD);
__int64 std___1_to_wstring_7e3d60(_QWORD);
__int64 std___1_to_wstring_7e3ee0(_QWORD);
__int64 std_runtime_error_runtime_error_7dbea0(_QWORD);
extern char SdkData_bbbd5c;
void __attribute__((noreturn)) SdkRoutine_7cd620();
void std___1_system_error_Destroy_system_error_7e50b0(void* this_);
void std_exception_Destroy_exception_plt_87c890();
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7cd5b4(__int64 a1);
__int64 llvm_libcxx_libcxx_src_7d4000(void* this_);
__int64 llvm_libcxx_libcxx_src_7d4f60(unsigned __int8* a1, __int64 a2,
                                      __int64 a3);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7f50(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7fd0(__int64 a1);
__int64 llvm_libcxx_libcxx_src_7dbe8c(__int64 a1);
__int64 llvm_libcxx_libcxx_src_7e0c20(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7e14f4(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, char a12);
__int64 llvm_libcxx_libcxx_src_7e15c0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12);
__int64 llvm_libcxx_libcxx_src_7e1c4c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12);
__int64 llvm_libcxx_libcxx_src_7e1dac(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7e1f20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, char a12);
__int64 llvm_libcxx_libcxx_src_7e3d24(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10);
__int64 llvm_libcxx_libcxx_src_7e3ea4(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7e4dfc(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7e4f8c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11);
void llvm_libcxx_libcxx_src_7e508c(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, __int64 a11, __int64 a12);
__int64 llvm_libcxx_libcxx_src_7e6b4c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12);
void llvm_libcxx_libcxx_src_7e8090(__int64 a1, __int64 a2);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7eb3dc(__int64 a1);
__int64 llvm_libcxx_libcxx_src_7ee168(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
__int64 llvm_libcxx_libcxx_src_7ee238(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f0a5c(__int64 a1);
__int64 llvm_libcxx_libcxx_src_7f37f8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
__int64 llvm_libcxx_libcxx_src_7f38c8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9);
__int64 llvm_libcxx_libcxx_src_7f3b6c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, char a11);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f5604(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f5934(__int64 a1,
                                                             void* a2);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f6fd0(__int64 a1);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7f780c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7f801c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7f8960(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13, __int64 a14);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f9500(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f9bc0(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fa280(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fa940(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fb000(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fb6c0(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fbce4(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fc304(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fc924(__int64 a1);
void __attribute__((noreturn))
llvm_libcxx_libcxx_src_7fd3d8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fdf3c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fe5fc(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fecbc(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7ff37c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7ffa3c(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8000fc(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_800720(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_800d40(__int64 a1);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_801360(__int64 a1);

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7cd5b4(__int64 a1)
{
  __int64 v1;

  call_once_7cd5d0(v1, 0);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7d4000(void* this_)
{
  unsigned __int64 v1;
  char* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  int v6;
  struct {
    _QWORD v8[2];
    __int64 v9;
    __int64 v10;
    unsigned __int8 v11;
  } v8_;

  v1 = *(unsigned __int8*)this_;
  v3 = *((_QWORD*)this_ + 1);
  v2 = *((char**)this_ + 2);
  v4 = (v1 & 1) == 0;
  v5 = v1 >> 1;
  v8_.v9 = 0;
  v8_.v10 = 0;
  if (v4) {
    v2 = (char*)this_ + 1;
  }
  if (!v4) {
    v5 = v3;
  }
  v8_.v8[0] = v2;
  v8_.v8[1] = v5;
  v8_.v11 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
  v6 = v8_.v11;
  if (v8_.v11 <= 3u) {
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
      v6 = v8_.v11;
    } while (v8_.v11 < 4u);
  }
  if (v6 == 6) {
    return 0;
  }
  else {
    return v8_.v9;
  }
}

__int64 llvm_libcxx_libcxx_src_7d4f60(unsigned __int8* a1, __int64 a2,
                                      __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v11;
  unsigned __int64 v12;
  unsigned int v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 result;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int i;
  int v23;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  const char* v29;
  __int64 v30;
  struct {
    _QWORD v32[2];
    char* v33;
    unsigned __int64 v34;
    unsigned __int8 v35;
  } v32_;
  struct {
    _QWORD v36[2];
    char* v37;
    unsigned __int64 v38;
    unsigned __int8 v39;
  } v36_;

  v3 = *a1;
  v5 = *((_QWORD*)a1 + 1);
  v4 = *((unsigned __int8**)a1 + 2);
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  v36_.v37 = nullptr;
  v36_.v38 = 0;
  v36_.v39 = 1;
  if (v8) {
    v4 = a1 + 1;
  }
  if (!v8) {
    v9 = v5;
  }
  v36_.v36[0] = v4;
  v36_.v36[1] = v9;
  llvmlibcxx_libcxx_7d58e0((__int64)v36_.v36);
  v32_.v32[0] = a2;
  v32_.v32[1] = a3;
  v32_.v33 = nullptr;
  v32_.v34 = 0;
  v32_.v35 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v32_.v32);
  v10 = v36_.v39;
  if (v36_.v39 == 2) {
    v11 = v36_.v37;
    v12 = v36_.v38;
    v13 = v32_.v35;
    if (v32_.v35 != 2) {
      v14 = &SdkData_bbbd5c;
      v15 = 0;
      goto LABEL_12;
    }
  }
  else {
    v13 = v32_.v35;
    if (v32_.v35 != 2) {
      goto LABEL_34;
    }
    v11 = &SdkData_bbbd5c;
    v12 = 0;
  }
  v14 = v32_.v33;
  v15 = v32_.v34;
  v13 = 2;
LABEL_12:
  if (v15 >= v12) {
    v16 = v12;
  }
  else {
    v16 = v15;
  }
  LODWORD(result) = memcmp_plt(v11, v14, v16);
  if (v12 < v15) {
    v18 = -1;
  }
  else {
    v18 = 1;
  }
  if (v12 == v15) {
    v18 = 0;
  }
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = v18;
  }
  if (v10 > 2) {
    if (v13 > 2) {
      goto LABEL_27;
    }
  LABEL_30:
    v20 = result;
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v32_.v32);
      v13 = v32_.v35;
    } while (v32_.v35 < 3u);
    result = v20;
    if (v20 != 0) {
      return result;
    }
    goto LABEL_33;
  }
  v19 = result;
  do {
    llvmlibcxx_libcxx_7d58e0((__int64)v36_.v36);
  } while (v36_.v39 < 3u);
  v13 = v32_.v35;
  result = v19;
  if (v32_.v35 <= 2u) {
    goto LABEL_30;
  }
LABEL_27:
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_33:
  v10 = v36_.v39;
LABEL_34:
  if (v10 == 3) {
    if (v13 != 3) {
      return 1;
    }
  }
  else {
    if (v13 == 3) {
      return 0xFFFFFFFFLL;
    }
    if (v10 > 3) {
      goto LABEL_41;
    }
  }
  do {
    llvmlibcxx_libcxx_7d58e0((__int64)v36_.v36);
  } while (v36_.v39 < 4u);
  v13 = v32_.v35;
LABEL_41:
  if (v13 <= 3) {
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v32_.v32);
    } while (v32_.v35 < 4u);
  }
  for (i = v36_.v39; v36_.v39 != 1 && v36_.v39 != 6; i = v36_.v39) {
    v23 = v32_.v35;
    if (v32_.v35 == 1 || v32_.v35 == 6) {
      goto LABEL_84;
    }
    if (i > 3) {
      if (i == 4) {
      LABEL_61:
        v26 = v36_.v37;
        v25 = v36_.v38;
        if (v32_.v35 > 3u) {
          goto LABEL_57;
        }
        goto LABEL_62;
      }
      v25 = 0;
      v26 = &SdkData_bbbd5c;
      if (v32_.v35 > 3u) {
        goto LABEL_57;
      }
    }
    else {
      if (i == 2) {
        goto LABEL_61;
      }
      v25 = 1;
      if (*v36_.v37 == 92) {
        v26 = "\\";
      }
      else {
        v26 = "/";
      }
      if (v32_.v35 > 3u) {
      LABEL_57:
        if (v32_.v35 != 4) {
          v27 = 0;
          result = memcmp_plt(v26, &SdkData_bbbd5c, 0);
          if ((_DWORD)result != 0) {
            return result;
          }
          goto LABEL_77;
        }
      LABEL_63:
        v27 = v32_.v34;
        if (v32_.v34 >= v25) {
          v28 = v25;
        }
        else {
          v28 = v32_.v34;
        }
        result = memcmp_plt(v26, v32_.v33, v28);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_77;
      }
    }
  LABEL_62:
    if (v32_.v35 == 2) {
      goto LABEL_63;
    }
    v27 = 1;
    if (*v32_.v33 == 92) {
      v29 = "\\";
    }
    else {
      v29 = "/";
    }
    if (v25 <= 1) {
      v30 = v25;
    }
    else {
      v30 = 1;
    }
    result = memcmp_plt(v26, v29, v30);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_77:
    if (v25 != v27) {
      if (v25 < v27) {
        return 0xFFFFFFFFLL;
      }
      else {
        return 1;
      }
    }
    llvmlibcxx_libcxx_7d58e0((__int64)v36_.v36);
    llvmlibcxx_libcxx_7d58e0((__int64)v32_.v32);
  }
  v23 = v32_.v35;
LABEL_84:
  if (i == 6) {
    if (v23 != 6) {
      return 0xFFFFFFFFLL;
    }
  }
  else if (v23 == 6) {
    return 1;
  }
  return 0;
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7f50(__int64 a1)
{
  __int64 v1;

  std___1_mutex_unlock_plt(v1 + 8);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7d7fd0(__int64 a1)
{
  __int64 v1;

  std___1_mutex_unlock_plt(v1 + 8);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7dbe8c(__int64 a1)
{
  __int64 v3;

  std_exception_Destroy_exception_plt_87c890();
  v3 = _Unwind_Resume_plt(a1);
  return std_runtime_error_runtime_error_7dbea0(v3);
}

__int64 llvm_libcxx_libcxx_src_7e0c20(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stol_7e0c50(v14);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7e14f4(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v12;

  SdkRoutine_87cba0(v12 - 24);
  SdkRoutine_87cba0(&a12);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7e15c0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stol_7e15f0(v14);
}

__int64 llvm_libcxx_libcxx_src_7e1c4c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stod_7e1c80(v14);
}

__int64 llvm_libcxx_libcxx_src_7e1dac(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stold_7e1de0(v14);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7e1f20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;

  SdkRoutine_87cba0(v12 - 24);
  SdkRoutine_87cba0(&a12);
  v14 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a12);
  _Unwind_Resume_plt(v14);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7e3d24(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cbb0(&a10);
  v11 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cbb0(&a10);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_87cbb0(&a10);
  v13 = _Unwind_Resume_plt(v12);
  return std___1_to_wstring_7e3d60(v13);
}

__int64 llvm_libcxx_libcxx_src_7e3ea4(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      char a10)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cbb0(&a10);
  v11 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cbb0(&a10);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_87cbb0(&a10);
  v13 = _Unwind_Resume_plt(v12);
  return std___1_to_wstring_7e3ee0(v13);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7e4dfc(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7e4f8c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void llvm_libcxx_libcxx_src_7e508c(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, __int64 a11, __int64 a12)
{
  void* v13;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = (void*)_Unwind_Resume_plt(a1);
  std___1_system_error_Destroy_system_error_7e50b0(v13);
}

__int64 llvm_libcxx_libcxx_src_7e6b4c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return SdkRoutine_7e6b70(v13);
}

void llvm_libcxx_libcxx_src_7e8090(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  bool v6;
  char* v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    char* v10;
  } v9_;

  v2 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)a2 & 1) == 0) {
    v2 = *(_BYTE*)a2 >> 1;
  }
  if (v2 != 12 ||
      ((*(_BYTE*)a2 & 1) == 0 ? (v3 = (__int64*)(a2 + 1))
                              : (v3 = *(__int64**)(a2 + 16)),
       (v4 = *v3, v5 = *((_DWORD*)v3 + 2), v4 == 0x6172752F7665642FLL)
           ? (v6 = v5 == 1836016750)
           : (v6 = false),
       !v6)) {
    SdkRoutine_87cb90((void*)(v9_.v9), "random device not supported ");
    if ((v9_.v9[0] & 1) != 0) {
      v7 = v9_.v10;
    }
    else {
      v7 = (char*)v9_.v9 + 1;
    }
    v8 = std___1___throw_system_error_plt(2, v7);
    if ((v9_.v9[0] & 1) != 0) {
      SdkRoutine_857220(v9_.v10, v9_.v9[0] & 0xFFFFFFFFFFFFFFFELL);
    }
    _Unwind_Resume_plt(v8);
    __udf(0);
  }
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7eb3dc(__int64 a1)
{
  __int64 v1;

  std___1_locale_Destroy_locale_plt(v1 + 24);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7ee168(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_87ce80(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_87ce80(&a9);
  v11 = _Unwind_Resume_plt(v10);
  return SdkRoutine_7ee190(v11);
}

__int64 llvm_libcxx_libcxx_src_7ee238(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_87ce80(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_87ce80(&a9);
  v11 = _Unwind_Resume_plt(v10);
  return SdkRoutine_7ee260(v11);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f0a5c(__int64 a1)
{
  __int64 v1;

  std___1_locale_Destroy_locale_plt(v1 + 24);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 llvm_libcxx_libcxx_src_7f37f8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_87cf40(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cf40(&a9);
  v11 = _Unwind_Resume_plt(v10);
  return SdkRoutine_7f3820(v11);
}

__int64 llvm_libcxx_libcxx_src_7f38c8(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_87cf40(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cf40(&a9);
  v11 = _Unwind_Resume_plt(v10);
  return SdkRoutine_7f38f0(v11);
}

__int64 llvm_libcxx_libcxx_src_7f3b6c(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6,
                                      __int64 a7, __int64 a8, __int64 a9,
                                      __int64 a10, char a11)
{
  __int64 v12;

  std___1_locale_Destroy_locale_plt(&a11);
  v12 = _Unwind_Resume_plt(a1);
  return SdkRoutine_7f3b80(v12);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f5604(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;

  std___1_locale_Destroy_locale_plt(v3 + 24);
  *v1 = v2 + 16;
  std___1_locale_Destroy_locale_plt(v1 + 1);
  v5 = _Unwind_Resume_plt(a1);
  *v1 = v2 + 16;
  std___1_locale_Destroy_locale_plt(v1 + 1);
  _Unwind_Resume_plt(v5);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f5934(__int64 a1,
                                                             void* a2)
{
  void* v2;

  fclose_plt(v2, a2);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f6fd0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  SdkRoutine_87cef0(v4 + 8);
  v7 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cef0(v1 + 8);
  v8 = _Unwind_Resume_plt(v7);
  SdkRoutine_87cef0(v2 + 8);
  v9 = _Unwind_Resume_plt(v8);
  SdkRoutine_86ee80(v5 + 8);
  v10 = _Unwind_Resume_plt(v9);
  SdkRoutine_86ee80(v4 + 8);
  v11 = _Unwind_Resume_plt(v10);
  SdkRoutine_86ee80(v3 + 8);
  _Unwind_Resume_plt(v11);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7f780c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  _QWORD* v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a10);
  *v10 = v11;
  std___1_locale_Destroy_locale_plt(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7f801c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, char a10)
{
  _QWORD* v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a10);
  *v10 = v11;
  std___1_locale_Destroy_locale_plt(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7f8960(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                              __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  v16 = _Unwind_Resume_plt(a1);
  v17 = _Unwind_Resume_plt(v16);
  std___1_locale_Destroy_locale_plt(v14 - 32);
  v18 = _Unwind_Resume_plt(v17);
  std___1_locale_Destroy_locale_plt(v14 - 32);
  _Unwind_Resume_plt(v18);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f9500(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7f9bc0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fa280(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fa940(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fb000(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fb6c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fbce4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fc304(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fc924(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn))

llvm_libcxx_libcxx_src_7fd3d8(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  SdkRoutine_87cb10(v9 + 24);
  SdkRoutine_87cb10(&a9);
  v12 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cb10(&a9);
  v13 = _Unwind_Resume_plt(v12);
  v14 = _Unwind_Resume_plt(v13);
  std___1_locale_Destroy_locale_plt(v10 - 32);
  v15 = _Unwind_Resume_plt(v14);
  std___1_locale_Destroy_locale_plt(v10 - 32);
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fdf3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fe5fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7fecbc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7ff37c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7ffa3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_8000fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_800720(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_800d40(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_801360(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
