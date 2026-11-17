#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
float game_hub_10c3ca0();

float game_hub_10c3ca0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  float v9;
  __int64 v10;
  float result;
  __int128 v12;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = v0[3];
  v2 = *(_QWORD*)(*(_QWORD*)(v0[1] + 24LL) + 16LL);
  v3 = *(float*)(v2 + 292);
  v4 = *(float*)(v2 + 296);
  if (v1 != 0) {
    v5 = v0[2];
    v6 = v0[3];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v1),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 != 0) {
      if (v5 != 0) {
        v8 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL) + 560LL);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 != 0) {
          goto LABEL_11;
        }
      }
      else {
        v12 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v7),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v8 = v12;
        if (v5 != 0) {
          goto LABEL_11;
        }
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v10 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v10;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v8 = GameData_21a6120;
LABEL_11:
  *(float*)&v8 = *(float*)&v8 - v3;
  v9 = *((float*)&v8 + 2) - v4;
  if (*(float*)&v8 != 0x0.0p+0f || v9 != 0x0.0p+0f) {
    *(float*)&v8 = *(float*)&v8 / sqrtf((float)(PSEUDO_UNFUSED(v9 * v9)) +
                                        (float)(*(float*)&v8 * *(float*)&v8));
  }
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = v8;
    result = z_;
  }
  return result;
}

#pragma GCC visibility pop
