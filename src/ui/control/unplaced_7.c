#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Pane_58f8a0(__int64);
__int64 ui_control_18899f0(__int64 a1);

__int64 ui_control_18899f0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  float v8;
  float v9;
  __int16 v11;
  __int16 v12;
  unsigned __int64 v13;

  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s0", "=w")),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)a1 + 112LL))(a1),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s0", "=w")),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  if (*(float*)(a1 + 100) < 0x0.0p+0f || *(float*)(a1 + 104) < 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 112LL))(a1),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s0", "=w")),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
    v4 = *(_QWORD*)(a1 + 80);
    if (v4 != 0) {
      v5 = Pane_58f8a0(v4),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s0", "=w")),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
      (*(void (**)(__int64))(**(_QWORD**)(*(_QWORD*)(v5 + 24) + 8LL) + 32LL))(
          *(_QWORD*)(*(_QWORD*)(v5 + 24) + 8LL)),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s0", "=w")),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
      {
        __typeof__(v6) z_ = (__typeof__(v6)){0};
        LOWORD(z_) = v11;
        v6 = z_;
      }
      {
        __typeof__(v7) z_ = (__typeof__(v7)){0};
        LOWORD(z_) = v12;
        v7 = z_;
      }
      v2 = (float)v6;
      v3 = (float)v7;
    }
    v8 = *(float*)(a1 + 100);
    v9 = *(float*)(a1 + 104);
    if (v8 >= 0x0.0p+0f || v9 >= 0x0.0p+0f) {
      if (v8 >= 0x0.0p+0f) {
        LODWORD(v13) = *(_DWORD*)(a1 + 100);
        *((float*)&v13 + 1) = v3 * (float)(v8 / v2);
      }
      else {
        *(float*)&v13 = v2 * (float)(v9 / v3);
        *((float*)&v13 + 1) = v9;
      }
    }
    else {
      v13 = __PAIR64__(LODWORD(v3), LODWORD(v2));
    }
  }
  else {
    v13 = *(_QWORD*)(a1 + 100);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 120LL))(
      a1, (__int64)&v13);
}

#pragma GCC visibility pop
