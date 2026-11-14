#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_3ab80(__int64*, unsigned __int64);
__int64 NgxRoutine_2b0();
__int64 NgxRoutine_3acf0(_QWORD, _QWORD);
extern _UNKNOWN NgxData_2b6acf8;
extern __int64 NgxData_2b6ad00;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
_QWORD* nvidia_dlss_rel_source_5d770(unsigned __int64 a1);

_QWORD* nvidia_dlss_rel_source_5d770(unsigned __int64 a1)
{
  unsigned __int64 v1;
  int v3;

  v1 = a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acf8,
                            memory_order_acquire) &
       1) == 0) {
    v3 = __cxa_guard_acquire_plt((__int64)&NgxData_2b6acf8);
    v1 = a1;
    if (v3 != 0) {
      NgxRoutine_3acf0(&NgxData_2b6ad00, a1);
      NgxRoutine_2b0();
      __cxa_guard_release_plt((__int64)&NgxData_2b6acf8);
      v1 = a1;
    }
  }
  return NgxRoutine_3ab80(&NgxData_2b6ad00, v1);
}

#pragma GCC visibility pop
