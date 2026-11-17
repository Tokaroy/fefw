#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
float gfx_light_c547f0();

float gfx_light_c547f0()
{
  __int64 v0;
  __int64 v1;
  float32x4_t v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float32x4_t* v12;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = v0;
  v4 = *(_QWORD*)(v0 + 16);
  if (v4 != 0) {
    v5 = v1;
    v6 = std___1___shared_weak_count_lock(v4),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v6 != 0) {
      v7 = *(_QWORD*)(v3 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v7 != 0) {
        *(_OWORD*)(*(_QWORD*)(v3 + 32) + 16LL) = *(_OWORD*)(v5 + 48);
        v9 = vsubq_f32(
            vmlaq_f32(vmulq_f32(*(float32x4_t*)v5, COERCE_AS(float32x4_t, 0)),
                      COERCE_AS(float32x4_t, 0), *(float32x4_t*)(v5 + 16)),
            *(float32x4_t*)(v5 + 32));
        v10 = vmulq_f32(v9, v9);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        v11 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
                .n64_f32[0];
        if (v11 < 0x1.47ae140000000p-7f) {
          v11 = 0x1.47ae140000000p-7f;
        }
        *(float*)(*(_QWORD*)(v3 + 32) + 32LL) = v11;
        v12 = *(float32x4_t**)(v3 + 32);
        v2 = vmulq_n_f32(v9,
                         0x1.0000000000000p+0f / LANES128(v12[2]).n128_f32[0]);
        LANES128(v2).n128_u32[3] = 0;
        v12[16] = v2;
      }
    }
  }
  return LANES128(v2).n128_f32[0];
}

#pragma GCC visibility pop
