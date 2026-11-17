#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
float ui_15614b0();

float ui_15614b0()
{

#pragma clang fp contract(off)
  __int64* v0;
  int v1;
  float result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int32x4_t* v12;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  result = 0x0.0p+0f;
  if (v0[2] == 0) {
    return result;
  }
  v3 = v0;
  v4 = v0[1];
  if (v4 == 0) {
    return result;
  }
  v5 = std___1___shared_weak_count_lock(v4),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v5 == 0) {
    goto LABEL_11;
  }
  v6 = *v3;
  if (*v3 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != v3[2];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_11:
      v9 = v3[1];
      result = 0x0.0p+0f;
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return result;
      }
      goto LABEL_16;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1___shared_weak_count___release_weak(v10),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v8) {
      goto LABEL_11;
    }
  }
  result = 0x0.0p+0f;
  if ((v1 & 1) == 0) {
    return result;
  }
LABEL_16:
  v11 = v3[2];
  if (v11 != 0) {
    v12 = *(int32x4_t**)(v11 + 24);
    if (v12 != nullptr) {
      __typeof__(result) z_ = (__typeof__(result)){0};
      LODWORD(z_) = LANES128_OF(vdupq_laneq_s32(v12[7], 3)).n128_u32[0];
      result = z_;
    }
  }
  return result;
}

#pragma GCC visibility pop
