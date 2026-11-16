#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e888e8;
extern __int64 SdkData_e897b0;
void SdkRoutine_85c8b0(void*, void*);
void std___1_locale_Destroy_locale_plt(__int64);
void llvm_libcxx_libcxx_src_831b30(void* this_, void* a2);

void llvm_libcxx_libcxx_src_831b30(void* this_, void* a2)
{
  void* v3;
  void (*v4)(__int64);

  *(_QWORD*)this_ = SdkData_e897b0 + 16;
  v3 = *((void**)this_ + 2);
  if (v3 != nullptr && (*((_DWORD*)this_ + 16) & 9) == 1) {
    v4 = *((void (**)(__int64))this_ + 11);
    if (v4 != nullptr) {
      v4((__int64)v3);
    }
    else {
      SdkRoutine_85c8b0(v3, a2);
    }
  }
  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_Destroy_locale_plt((__int64)this_ + 8);
}

#pragma GCC visibility pop
