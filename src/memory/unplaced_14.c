#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
float memory_10c7260();

float memory_10c7260()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int128 v1;
  __int128 v2;
  int v3;
  __int64 v4;
  float result;
  __int64 v6;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)(v0 + 16) = 0;
  *(_DWORD*)(v0 + 24) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v6 = v0;
    v3 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v0 = v6;
    if (v3 != 0) {
      v4 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v4;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v0 = v6;
    }
  }
  v1 = GameData_21a6120;
  *(_QWORD*)(v0 + 32) = GameData_21a6120;
  v2 = *(_OWORD*)(v0 + 32);
  *((_QWORD*)&v2 + 1) = DWORD2(v1);
  *(_OWORD*)(v0 + 32) = v2;
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v1;
    result = z_;
  }
  return result;
}

#pragma GCC visibility pop
