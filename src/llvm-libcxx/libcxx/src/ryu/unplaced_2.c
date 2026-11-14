#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 llvm_libcxx_libcxx_src_ryu_7dbcf0(_QWORD);
void std_exception_Destroy_exception_plt_87c890();
__int64 llvm_libcxx_libcxx_src_ryu_7dbcdc(__int64 a1);

__int64 llvm_libcxx_libcxx_src_ryu_7dbcdc(__int64 a1)
{
  __int64 v3;

  std_exception_Destroy_exception_plt_87c890();
  v3 = _Unwind_Resume_plt(a1);
  return llvm_libcxx_libcxx_src_ryu_7dbcf0(v3);
}

#pragma GCC visibility pop
