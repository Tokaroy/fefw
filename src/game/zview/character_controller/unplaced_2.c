#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 GameData_212d310;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
float game_zview_character_controller_d40d50();

float game_zview_character_controller_d40d50()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  __int128 v11;
  int v12;
  __int64 v13;
  float result;
  __int64 v15;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(v0 + 16) == 1 && *(_BYTE*)(v0 + 17) != 0) {
    *(_BYTE*)(v0 + 17) = 0;
    v1 = *(_QWORD*)GameData_212d310;
    v2 = *(int*)(*(_QWORD*)GameData_212d310 + 40LL) - 1;
    *(_DWORD*)(*(_QWORD*)GameData_212d310 + 40LL) = v2;
    if (v2 == 0) {
      v3 = v0;
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 32) + 8LL))(v1 + 32),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v0 = v3;
    }
  }
  v4 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(v0 + 8) + 8LL) + 632LL);
  v5 = *((unsigned int*)v4 + 4);
  if ((v5 & 2) != 0) {
    v6 = *v4;
    v7 = v5 & 0xFFFFFFFFFFFFFFFDLL;
    *((_DWORD*)v4 + 4) = v7;
    v8 = ((__int64)*(int*)(v6 + 376) << 24) + (v7 << 20);
    if (*(_QWORD*)(v6 + 600) != 0) {
      ++v8;
    }
    v4[1] = v8;
  }
  *(_BYTE*)(v0 + 32) = 0;
  *(_DWORD*)(v0 + 64) = 0;
  *(_QWORD*)(v0 + 20) = 0x3F8000003F800000LL;
  *(_DWORD*)(v0 + 28) = 1065353216;
  *(_QWORD*)(v0 + 48) = *(_QWORD*)(v0 + 40);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v15 = v0;
    v12 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v0 = v15;
    if (v12 != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v0 = v15;
    }
  }
  v9 = GameData_21a6120;
  *(_QWORD*)(v0 + 104) = *(_QWORD*)(v0 + 96);
  v10 = *(_QWORD*)(v0 + 144);
  *(_QWORD*)(v0 + 80) = v9;
  v11 = *(_OWORD*)(v0 + 80);
  *(_QWORD*)(v0 + 152) = v10;
  *((_QWORD*)&v11 + 1) = DWORD2(v9);
  *(_OWORD*)(v0 + 80) = v11;
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v9;
    result = z_;
  }
  return result;
}

#pragma GCC visibility pop
