#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 UnitActor_81cda0(__int64, __int128*, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_1adf7b0;
extern _UNKNOWN GameData_1af689f;
extern __int64 GameData_212c638;
extern __int64 game_GameModeData_instance_;
int8x16_t Camera_b3bb60(__int64);
__int64 game_gmap_1340130(float32x4_t* a1);

__int64 game_gmap_1340130(float32x4_t* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _UNKNOWN** v6;
  float32x4_t* v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float32x4_t v11;
  __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  struct {
    float32x4_t v19;
    int8x16_t v20;
    float32x4_t v21;
    char v22;
  } f_;
  float32x4_t v23;

  f_.v21 = a1[4];
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v3 = *(_QWORD*)(v2 + 24);
  v4 = *(_QWORD*)(v2 + 32);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    f_.v20 = Camera_b3bb60(v3);
    f_.v19 = a1[3];
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = LANES128(a1[6]).n128_i64[0];
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  else {
    f_.v20 = Camera_b3bb60(v3);
    f_.v19 = a1[3];
    v5 = LANES128(a1[6]).n128_i64[0];
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if ((unsigned int)*(unsigned __int8*)(v5 + 32) - 3 < 2) {
    v6 = (_UNKNOWN**)&GameData_1af689f;
    v7 = &v23;
    goto LABEL_10;
  }
LABEL_9:
  v6 = &GameData_1adf7b0;
  v7 = (float32x4_t*)&f_.v22;
LABEL_10:
  LANES128(*(v7)).n128_u64[1] = (unsigned __int64)v6;
  v8 = game_HashString((__int64)v6);
  v9 = 0x0.0p+0f;
  LANES128(*(v7)).n128_u64[0] = v8;
  if (game_GameModeData_instance_ == 0) {
    v11 = f_.v21;
    v12 = LANES128(a1[6]).n128_i64[0];
    if (v12 == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v10 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), LANES128(*(v7)).n128_u64);
  v11 = f_.v21;
  v9 = 0x0.0p+0f;
  if (v10 != 0) {
    v9 = (float)*(int*)(v10 + 32);
  }
  v12 = LANES128(a1[6]).n128_i64[0];
  if (v12 != 0) {
  LABEL_14:
    LANES128(v11).n128_f32[0] =
        LANES128(v11).n128_f32[0] + *(float*)(v12 + 120);
    LANES128(v11).n128_f32[2] =
        LANES128(v11).n128_f32[2] + *(float*)(v12 + 124);
    LANES128(v11).n128_u32[3] = 0;
  }
LABEL_15:
  v13 = vsubq_f32(f_.v20, f_.v19);
  v14 = vmulq_f32(v13, v13);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrsqrteq_f32(v14);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
  v17 = vmulq_n_f32(
      vbicq_s8(vmulq_f32(
                   v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
               vceqzq_f32(v14)),
      v9);
  LANES128(v17).n128_u32[3] = 0;
  v23 = vaddq_f32(vaddq_f32(v11, a1[3]), v17);
  return UnitActor_81cda0((__int64)&a1[7], (__int128*)&v23, 0x0.0p+0f);
}

#pragma GCC visibility pop
