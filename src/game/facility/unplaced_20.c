#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD** GameRoutine_1469c40(_QWORD** result, __int64, _QWORD*);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, float32x4_t*);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 GameData_21f4000;
float game_facility_1418380();

float game_facility_1418380()
{
  __int64 v0;
  float result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int32 v11;
  __int128 v12;
  float i;
  float32x4_t v14;
  __int64 v15;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_QWORD*)(v0 + 8);
  v3 = v0;
  v4 = *(_QWORD*)(v2 + 144);
  v5 = *(_QWORD*)(v2 + 152);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v4 + 8);
    if (v6 != 0) {
      v7 = *(_QWORD**)(v6 + 8);
      v15 = 0;
      LANES128(v14).n128_u64[0] = (unsigned __int64)&v15;
      GameRoutine_1469c40(&v14, (__int64)&v14, v7),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v8 = v15;
    }
    else {
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      std___1___shared_weak_count___release_weak(v5),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  else {
    v9 = *(_QWORD*)(v4 + 8);
    if (v9 == 0) {
      return result;
    }
    v10 = *(_QWORD**)(v9 + 8);
    v15 = 0;
    LANES128(v14).n128_u64[0] = (unsigned __int64)&v15;
    GameRoutine_1469c40(&v14, (__int64)&v14, v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v8 = v15;
  }
  if (v8 != 0 && *(_BYTE*)(v3 + 40) == 0) {
    game_13f9460((void*)(&v14),
                 *(float32x4_t**)((char*)((_UNKNOWN**)0x8LL) + v8) + 19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v11 = LANES128(v14).n128_u32[2];
    *(_QWORD*)(v3 + 16) = LANES128(v14).n128_u64[0];
    v12 = *(_OWORD*)(v3 + 16);
    *((_QWORD*)&v12 + 1) = v11;
    *(_OWORD*)(v3 + 16) = v12;
    for (i = -(
             float)(*(float*)(GameData_21f4000 + 128) -
                    (float)((*(float**)((char*)((_UNKNOWN**)0x8LL) + v8))[81] *
                            0x1.ca5dc00000000p+5f));
         i < -0x1.6800000000000p+7f; i = i + 0x1.6800000000000p+8f) {
      ;
    }
    for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
      ;
    *(float*)(v3 + 32) = i;
    result = (*(float**)((char*)((_UNKNOWN**)0x8LL) + v8))[88];
    *(float*)(v3 + 36) = result;
  }
  return result;
}

#pragma GCC visibility pop
