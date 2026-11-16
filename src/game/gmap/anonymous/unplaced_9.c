#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_21f1658;
extern __int64 msg_MessageManager_instance_;
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void GameRoutine_156c5d0(__int64, __int64, char);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_gmap_anonymous_1542880(__int64 a1);

__int64 game_gmap_anonymous_1542880(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned int* v3;
  unsigned __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float v19;
  float v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v26;
  _QWORD v27[2];
  float32x4_t v28[4];
  struct {
    _QWORD v29[4];
    __int128 v30;
    __int128 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v29_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v1 = *(_QWORD*)(a1 + 168);
  v27[0] = *(_QWORD*)(a1 + 160);
  v27[1] = v1;
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 176), v27),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak(v1),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 176), v27),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v3 = game_gmap_SpotMgr_GetCurrentSpot(),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (v3 != nullptr) {
    if (*(_BYTE*)(a1 + 285) == 1) {
      v4 = (unsigned __int64*)(v3 + 8);
    }
    else {
      v4 = (unsigned __int64*)(*(_QWORD*)(GameData_21f1658 + 16) + 80LL);
    }
    v6 = *v4;
    v5 = v4[1];
    LANES128(v26).n128_u64[0] = v6;
    LANES128(v26).n128_u64[1] = v5;
    v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
    v9 = *(_QWORD*)(v7 + 24);
    v8 = *(_QWORD*)(v7 + 32);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(_OWORD*)v29_.v29 = v10;
    *(_OWORD*)&v29_.v29[2] = v11;
    v29_.v30 = v12;
    v29_.v31 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v28[0] = v14;
    v28[1] = v15;
    v28[2] = v16;
    v28[3] = v17;
    LANES128(v18).n128_u64[0] =
        LANES64_OF(GameRoutine_a6c440(&v26, (__int128*)v29_.v29, v28))
            .n64_u64[0],
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v19 = LANES128(v18).n128_f32[2];
    v26 = v18;
    if (LANES128(v18).n128_f32[2] <= 0x0.0p+0f) {
      v26 = COERCE_AS(float32x4_t, LANES128(v18).n128_u64[0]);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak(v8),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (v19 > 0x0.0p+0f) {
        goto LABEL_22;
      }
    }
    else if (LANES128(v18).n128_f32[2] > 0x0.0p+0f) {
      goto LABEL_22;
    }
    if (LANES128(v26).n128_f32[0] >= 0x0.0p+0f &&
        LANES128(v26).n128_f32[0] <= 0x1.e000000000000p+10f &&
        LANES128(v26).n128_f32[1] >= 0x0.0p+0f &&
        LANES128(v26).n128_f32[1] <= 0x1.0e00000000000p+10f) {
      v20 = LANES128(v26).n128_f32[1] + *(float*)(a1 + 152);
      LODWORD(v29_.v29[1]) = LANES128(v26).n128_u32[2];
      *(float*)v29_.v29 = LANES128(v26).n128_f32[0] + -0x1.e000000000000p+9f;
      *((float*)v29_.v29 + 1) = 0x1.0e00000000000p+9f - v20;
      ui_LayoutAccessor_SetTranslate((__int64*)(a1 + 176), (__int64)v29_.v29),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
LABEL_22:
  LayoutAccessor_155e830(a1 + 176, 1),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (*(_BYTE*)(a1 + 285) != 0) {
    v21 = "MID_Gmap_StartDefense";
  }
  else {
    v21 = "MID_Gmap_Encount_Enemy";
  }
  *((_QWORD*)&v29_.v30 + 1) = -1;
  *(_QWORD*)&v29_.v31 = -1;
  *((_QWORD*)&v29_.v31 + 1) = -1;
  v29_.v32 = -1;
  v29_.v33 = -1;
  v29_.v34 = -1;
  v29_.v35 = -1;
  v29_.v36 = -1;
  v29_.v37 = -1;
  v29_.v38 = -1;
  v29_.v39 = -1;
  v29_.v40 = -1;
  v29_.v29[0] = msg_TagSelector_vtable;
  v29_.v29[1] = 0xFFFF0001FFFF0000LL;
  v29_.v29[2] = 0xFFFF0004FFFF0002LL;
  v29_.v29[3] = 0xFFFF0006FFFF0005LL;
  v29_.v41 = 8;
  *(_QWORD*)&v29_.v30 = 0xFFFF0008FFFF0007LL;
  v22 = GameRoutine_a4dbe0(msg_MessageManager_instance_, v21, 0),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (v22 != nullptr) {
    v23 = (__int64)v22;
    v24 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 176), "T_Title"),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if (v24 != 0) {
      GameRoutine_156c5d0(v24, v23, 0),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  LayoutAccessor_1562680(a1 + 176, "In", 0x1.0000000000000p+0f),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_DWORD*)(a1 + 280) = 1;
  snd_Fade_Fade_10c830((__int64)v29_.v29, 0x0.0p+0f),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  snd_play_ff2d0((__int64)"SE_SYS_GMAP_Telop_Battle",
                 (__int64)"SE_SYS_GMAP_Telop_Battle", (__int64)v29_.v29, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w"));
  return snd_Fade_Destroy_Fade(v29_.v29);
}

#pragma GCC visibility pop
