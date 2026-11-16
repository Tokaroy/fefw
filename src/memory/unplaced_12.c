#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal(_QWORD* result,
                                                             _QWORD*, __int64,
                                                             __int64);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__int64 CharacterTrailModule_d3d630(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_109d740(__int64 result, __int64, _QWORD*, unsigned int);
__int64 GameRoutine_2b0();
__int64 GameRoutine_fc5020(__int64 result, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_109d2e0(__int64 result, __int64, const char*, __int64,
                     unsigned int);
__int64 game_14a0820(_QWORD*);
__int64 game_character_IKChariot_IKChariot(__int64 result, _QWORD*, __int64);
__int64 game_character_IKSlopeCargo_IKSlopeCargo(__int64, _QWORD*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c840;
extern __int128 GameData_1a83610;
extern __int64 (*GameData_200bfd0[])();
extern __int64 (*GameData_200c050[])();
extern __int64 (*GameData_200e420[])();
extern __int64 (*game_character_IKSlopeBiped2_vtable[])();
extern __int64 (*game_character_IKSlopeCrawling_vtable[])();
extern __int64* GameData_212c838;
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2235720;
float GameRoutine_5eaef0(__int64, float32x4_t*, float, float, float, float,
                         double, double);
int __cxa_guard_acquire(__int64);
void GameRoutine_10e33a0(__int64*, _QWORD*);
void GameRoutine_112ca50(__int64);
void IKSlopeCrawling_DeletingDestructor(_QWORD*);
void __cxa_guard_release(__int64);
void game_character_IKFoot_IKFoot(__int64, _QWORD*, __int64);
void game_character_IKLeftArm_IKLeftArm(__int64, _QWORD*, __int64);
void gfxa_b40ac0(__int64, _QWORD*);
__int64 memory_a60de0(__int64 result);
void memory_b40670(__int64 a1, _QWORD* a2);
__int64 memory_10e1fe0(__int64 result);

__int64 memory_a60de0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int8 explicit;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  void (*v6)(__int64, __int64, __int64);
  __int64 v7;
  __n128* v8;
  __n128 v9;
  __n128 v10;
  __n128 v11;
  float32x4_t* v12;
  unsigned __int32 v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  __int64 v18;
  __int128 v19;
  unsigned int v23;
  __int128 v24;
  __int64 v25;
  int v26;
  __int128 v27;
  struct {
    __int128 v28;
    unsigned __int64 v29;
    unsigned __int32 v30;
  } v28_;

  v1 = result;
  if (*(_QWORD*)(result + 24) != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                    memory_order_acquire);
    v3 = GameData_212c838;
    if ((explicit & 1) == 0) {
      v26 = __cxa_guard_acquire((__int64)GameData_212c840);
      v3 = GameData_212c838;
      if (v26 != 0) {
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = 0;
        *v3 = 0;
        v3[1] = 0;
        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v3) = 0;
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3) = 0;
        *((_BYTE*)((char*)0x40LL) + (_QWORD)v3) = 0;
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v3) = 0;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v3) =
            (_UNKNOWN*)1065353216;
        game_14a0820(GameData_212c838);
        GameRoutine_2b0();
        __cxa_guard_release((__int64)GameData_212c840);
        v3 = GameData_212c838;
      }
    }
    v4 = *(__int64**)(*v3 + 32);
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 952LL))(*v4, 0, 0);
    v5 = *(_QWORD*)(v1 + 24);
    if (v5 != 0) {
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
    }
    v6 = *(void (**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 88LL);
    if (*(_BYTE*)(v1 + 32) == 1) {
      v7 = v5;
      v6(v5, 8, 1);
      v8 = *(__n128**)(v1 + 8);
      v9 = v8[21];
      v10 = v8[19];
      v11 = vextq_s8(v9, v9, 8u);
      v28_.v29 = LANES128(v8[19]).n128_u64[0];
      v28_.v30 = LANES128(v10).n128_u32[2];
      *(_QWORD*)&v28_.v28 = LANES128(v9).n128_u64[0];
      *((_QWORD*)&v28_.v28 + 1) = LANES128(v11).n128_u64[0];
      (*(void (**)(__int64, __int64, __int64, __n128, __n128, __n128))(
          *(_QWORD*)v7 + 184LL))(v7, (__int64)&v28_.v28, 1, v10, v9, v11);
    }
    else {
      v6(v5, 8, 0);
      v12 = *(float32x4_t**)(v1 + 8);
      (*(void (**)(__int64))(**(_QWORD**)(*(_QWORD*)(v1 + 24) + 16LL) + 176LL))(
          *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL));
      v13 = v28_.v30;
      LANES128(v14).n128_u64[0] = v28_.v29;
      LANES128(v14).n128_u64[1] = v28_.v30;
      v15 = vsubq_f32(v12[19], v14);
      v16 = vmulq_f32(v15, v15);
      LANES128(v16).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v12[19]).n128_u64[0] = v28_.v29;
        v17 = v12[19];
        LANES128(v12[18]).n128_u32[2] |= 1u;
        LANES128(v17).n128_u64[1] = v13;
        v12[19] = v17;
      }
      v18 = *(_QWORD*)(v1 + 8);
      (*(void (**)(__int64))(**(_QWORD**)(*(_QWORD*)(v1 + 24) + 16LL) + 176LL))(
          *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL));
      v19 = v28_.v28;
      v27 = v28_.v28;
      if (COERCE_FLOAT(*(_OWORD*)(v18 + 336)) != *(float*)&v28_.v28 |
              COERCE_FLOAT(DWORDn(*(_QWORD*)(v18 + 336),
                                  sizeof(*(_QWORD*)(v18 + 336)) / 4 - 1)) !=
                  *((float*)&v28_.v28 + 1) ||
          COERCE_FLOAT(*(_QWORD*)(v18 + 344)) != *((float*)&v28_.v28 + 2) ||
          COERCE_FLOAT(DWORDn(*(_OWORD*)(v18 + 336),
                              sizeof(*(_OWORD*)(v18 + 336)) / 4 - 1)) !=
              *((float*)&v28_.v28 + 3)) {
        *(_DWORD*)(v18 + 336) = v28_.v28;
        *(int8x8_t*)(v18 + 340) =
            vext_s8(*(int8x8_t*)&v19, *(int8x8_t*)((char*)&v19 + 8), 4u);
        *(_DWORD*)(v18 + 348) = DWORDn(v19, sizeof(v19) / 4 - 1);
        *(_DWORD*)(v18 + 296) |= 1u;
        math_622ac0((void*)(&v28_.v28), (float32x2_t*)&v27);
        v23 = DWORD2(v28_.v28);
        *(_QWORD*)(v18 + 320) = v28_.v28;
        v24 = *(_OWORD*)(v18 + 320);
        *((_QWORD*)&v24 + 1) = v23;
        *(_OWORD*)(v18 + 320) = v24;
      }
      if (*(_BYTE*)(v1 + 33) == 1) {
        v25 = *(_QWORD*)(v1 + 80);
        if (v25 != 0) {
          *(_QWORD*)&v28_.v28 = v1;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 48LL))(
              v25, (__int64)&v28_.v28);
        }
      }
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)*v4 + 960LL))(*v4);
  }
  *(_BYTE*)(v1 + 33) = 0;
  return result;
}

void memory_b40670(__int64 a1, _QWORD* a2)
{
  __int64 v9;
  int v10;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  float32x4_t v57;
  int8x16_t v58;
  int8x16_t v59;
  __int64 v60;
  float* v61;
  __int64 v62;
  float v63;
  float v64;
  unsigned int v65;
  float v66;
  float v67;
  float32x4_t v68[4];

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v9 = *(_QWORD*)(a1 + 32);
  if (*(_BYTE*)(v9 + 48) != 1) {
    return;
  }
  v10 = *(_DWORD*)(v9 + 304);
  v13 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 13224LL);
  if (v10 == -1) {
    v16 = 0;
    v15 = *(_QWORD*)(v13 + 48);
    v17 = *(_QWORD*)(v13 + 56);
    if (v17 == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v14 = v13 + 1560LL * v10;
  v15 = *(_QWORD*)(v14 + 1752);
  v16 = *(_QWORD*)(v14 + 1760);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  v17 = v16;
  if (v15 == 0) {
    v15 = *(_QWORD*)(v13 + 48);
    v17 = *(_QWORD*)(v13 + 56);
    if (v17 == 0) {
    LABEL_8:
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
        std___1___shared_weak_count___release_weak(v16),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
      }
      goto LABEL_11;
    }
  LABEL_7:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_8;
  }
LABEL_11:
  v18 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 16) = v15;
  *(_QWORD*)(a1 + 24) = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v18),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  v19 = *(_QWORD*)(a1 + 56);
  (*(void (**)(__int64))(*(_QWORD*)v19 + 72LL))(v19),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v21 = v20;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 56LL))(v19),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v23 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 64LL))(v19),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v25 = v24;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 80LL))(v19),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v27 = v26;
  v29 = v28;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v35 = *(_QWORD*)(a1 + 72) + 16LL;
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v36 = vmulq_f32(vmulq_f32(v32, v31), v34);
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v38 = vsubq_f32(v36, vmulq_f32(vmulq_f32(v32, v34), v37));
  LANES128(v38).n128_u64[0] = LANES128_OF(vpaddq_f32(v38, v38)).n128_u64[0];
  v39 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1));
  v40 = vrecpeq_f32(v39);
  v41 = vmulq_f32(v40, vrecpsq_f32(v40, v39));
  v42 = vmulq_f32(v41, vrecpsq_f32(v41, v39));
  v43 = vzip1q_s32(v32, v33);
  v44 = vzip2q_s32(v32, v33);
  v45 = vzip1q_s32(v30, COERCE_AS(int32x4_t, 0));
  v46 = vzip2q_s32(v43, v45);
  v47 = vzip1q_s32(v44, vzip2q_s32(v30, COERCE_AS(int32x4_t, 0)));
  v48 = vzip1q_s32(v43, v45);
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v52 = LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  v53 = LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v50).n128_i8[8] =
      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = v52;
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v51).n128_u64[1] = v53;
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v54 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v49, v30), v47, v50));
  v55 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v50, v31), v30, v51));
  v56 = vmulq_f32(v42, vmlsq_f32(vmulq_f32(v47, v51), v31, v49));
  v58 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v54), LANES128(v57).n128_f32[0]),
                     v55, COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1),
      v56, v57, 2);
  v59 = vceqzq_f32(v39);
  v68[0] = vbicq_s8(v54, v59);
  v68[1] = vbicq_s8(v55, v59);
  v68[2] = vbicq_s8(v56, v59);
  v68[3] = vbicq_s8(v58, v59);
  GameRoutine_5eaef0(v35, v68, v21, v27 / v29, v23, v25,
                     LANES128(v58).n128_f64[0], *(double*)&v53),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(_QWORD*)(*(_QWORD*)(a1 + 464) + 32LL) = 0xFFFFFFFF00000000LL;
  v60 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 288LL);
  v61 = *(float**)(v60 + 736);
  v62 = *(_QWORD*)(v60 + 744);
  if (v62 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 8), 1u,
                              memory_order_relaxed);
  }
  v63 = *(float*)(a1 + 520);
  *(_QWORD*)(a1 + 524) = 7;
  v64 = *v61;
  if (*v61 > v63) {
    v65 = 0;
  LABEL_34:
    *(_DWORD*)(a1 + 528) = v65;
    *(_DWORD*)(a1 + 524) = ((_BYTE)v65 - 1) & 7;
    v66 = v61[((_BYTE)v65 - 1) & 7];
    v64 = v61[v65];
    goto LABEL_35;
  }
  if (v61[1] > v63) {
    v65 = 1;
    goto LABEL_34;
  }
  if (v61[2] > v63) {
    v65 = 2;
    goto LABEL_34;
  }
  if (v61[3] > v63) {
    v65 = 3;
    goto LABEL_34;
  }
  if (v61[4] > v63) {
    v65 = 4;
    goto LABEL_34;
  }
  if (v61[5] > v63) {
    v65 = 5;
    goto LABEL_34;
  }
  if (v61[6] > v63) {
    v65 = 6;
    goto LABEL_34;
  }
  v66 = v61[7];
  if (v66 > v63) {
    v65 = 7;
    goto LABEL_34;
  }
LABEL_35:
  v67 = v63 - v66;
  if (v66 > v64) {
    v64 = v64 + 0x1.8000000000000p+4f;
  }
  if (v67 < 0x0.0p+0f) {
    v67 = v67 + 0x1.8000000000000p+4f;
  }
  *(float*)(a1 + 532) = v67 / (float)(v64 - v66);
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
    std___1___shared_weak_count___release_weak(v62),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  gfxa_b40ac0(a1, a2),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s1", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v2", "=w"));
}

__int64 memory_10e1fe0(__int64 result)
{
  _DWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 (**v34)();
  __int64 (*v35)();
  __int64 v36;
  __int64 (*v37)();
  __int64 (**v38)();
  __int64 v39;
  __int64 (**v40)();
  __int64 (*v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;
  struct {
    __int64 (**v50)();
    __int64 v51;
    char gap32_[16];
    __int64* v52;
  } v50_;

  v1 = (_DWORD*)(result + 56);
  v2 = result;
  *(_DWORD*)(result + 56) |= 1u;
  v3 = *(_QWORD*)(result + 32);
  if (v3 == 0) {
    GameData_2235720 = 0;
    if (*GameData_212d168 == 5) {
      return result;
    }
  LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  v4 = *(_QWORD*)(result + 40);
  if (*(_QWORD*)(v3 + 8) == -1 | v4 == 0) {
    v6 = *GameData_212d168;
    GameData_2235720 = 0;
    if (v6 == 5) {
      return result;
    }
    v4 = *(_QWORD*)(result + 40);
  }
  else if ((*(_WORD*)(v4 + 340) & 0x1040) != 0 | *GameData_212d168 == 5) {
    return result;
  }
  if (*(_QWORD*)(v3 + 8) == -1) {
    goto LABEL_16;
  }
LABEL_17:
  v8 = *(_QWORD*)(v4 + 392);
  v9 = *(_QWORD*)(v4 + 400);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  v10 = *(unsigned int*)(v8 + 11784);
  v11 = v10 >= 0x22;
  v12 = 0x280100030uLL >> v10;
  v13 = !v11;
  v14 = v13 & v12;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v14 & 1) == 0) {
    *(_DWORD*)(v2 + 196) = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 200LL);
    v15 = *(_QWORD*)(v4 + 8);
    v50_.v52 = (__int64*)&v50_.v50;
    v16 = *(_DWORD*)(v15 + 308);
    v50_.v50 = GameData_200bfd0;
    v50_.v51 = v2;
    *(_DWORD*)(v2 + 176) = v16;
    *(_DWORD*)(v2 + 180) = v16;
    GameRoutine_109d740(v2 + 104, *(_QWORD*)(v4 + 408), &v50_.v50, 0);
    if (v50_.v52 == (__int64*)&v50_.v50) {
      v17 = 32;
    }
    else {
      if (v50_.v52 == nullptr) {
      LABEL_31:
        v18 = *(_QWORD*)(v2 + 32);
        if (v18 == 0 || *(_QWORD*)(v18 + 8) == -1) {
          v19 = nullptr;
          v20 = (*(_QWORD*)0x188LL);
          v21 = (*(_QWORD*)0x190LL);
          if ((*(_QWORD*)0x190LL) == 0) {
            goto LABEL_34;
          }
        }
        else {
          v19 = *(_QWORD**)(v2 + 40);
          v20 = v19[49];
          v21 = v19[50];
          if (v21 == 0) {
          LABEL_34:
            v22 = *(_DWORD*)(v20 + 11784);
            goto LABEL_38;
          }
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
        v22 = *(_DWORD*)(v20 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
        }
      LABEL_38:
        v23 = (__int64*)fw_memory_g_heap_manager_ptr;
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        game_character_IKFoot_IKFoot(v24, v19, (__int64)v1);
        if (*(_BYTE*)(v24 + 16) == 1) {
          v50_.v50 = (__int64 (**)(void))v24;
          GameRoutine_10e33a0((__int64*)(v2 + 80), &v50_.v50);
          if (v50_.v50 != nullptr) {
            (*((void (**)(__int64))*v50_.v50 + 1))((__int64)v50_.v50);
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
          v24 = 0;
        }
        if (v22 <= 1) {
          v25 = fw_memory_HeapManager_Allocate(*v23, 96, 16, 0);
          *(_QWORD*)(v25 + 24) = v19;
          *(_DWORD*)(v25 + 32) = 0;
          *(_WORD*)(v25 + 16) = 256;
          *(_QWORD*)(v25 + 40) = v24;
          *(_QWORD*)(v25 + 64) = 0;
          *(_QWORD*)(v25 + 72) = 0;
          *(_DWORD*)(v25 + 80) = 0;
          *(_QWORD*)v25 = game_character_IKSlopeBiped2_vtable;
          *(_QWORD*)(v25 + 8) = v1;
          *(_DWORD*)(v25 + 48) = -1082130432;
          if (v24 != 0 && *(_QWORD*)(v24 + 88) - *(_QWORD*)(v24 + 80) == 384) {
            *(_QWORD*)(v24 + 120) = v25;
            v50_.v50 = (__int64 (**)(void))v25;
            *(_BYTE*)(v25 + 16) = 1;
            GameRoutine_10e33a0((__int64*)(v2 + 80), &v50_.v50);
            if (v50_.v50 != nullptr) {
              (*((void (**)(__int64))*v50_.v50 + 1))((__int64)v50_.v50);
            }
          }
          else {
            GameRoutine_112ca50(v25);
          }
        }
        if (v22 > 0x20) {
        LABEL_93:
          if ((v22 & 0xFFFFFFFD) == 0x18) {
            v47 = fw_memory_HeapManager_Allocate(*v23, 368, 16, 0);
            game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal(
                (_QWORD*)v47, v19, (__int64)v1, v24);
            if (*(_BYTE*)(v47 + 16) == 1) {
              v50_.v50 = (__int64 (**)(void))v47;
              goto LABEL_71;
            }
            v37 = *(__int64 (**)(void))v47;
            v38 = (__int64 (**)(void))v47;
            goto LABEL_73;
          }
          if (v22 == 16) {
            v36 = fw_memory_HeapManager_Allocate(*v23, 128, 16, 0);
            game_character_IKSlopeCargo_IKSlopeCargo(v36, v19, (__int64)v1);
          }
          else {
            if (v22 != 7) {
            LABEL_74:
              v39 = fw_memory_HeapManager_Allocate(*v23, 120, 16, 0);
              GameRoutine_fc5020(v39, (__int64)v19, (__int64)v1);
              if (*(_BYTE*)(v39 + 16) == 1) {
                v50_.v50 = (__int64 (**)(void))v39;
                GameRoutine_10e33a0((__int64*)(v2 + 80), &v50_.v50);
                v40 = v50_.v50;
                if (v50_.v50 == nullptr) {
                  goto LABEL_79;
                }
                v41 = *v50_.v50;
              }
              else {
                v41 = *(__int64 (**)(void))v39;
                v40 = (__int64 (**)(void))v39;
              }
              (*((void (**)(__int64))v41 + 1))((__int64)v40);
            LABEL_79:
              v42 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 72LL);
              v43 = *(_QWORD*)(v4 + 48);
              v44 = *(_QWORD*)(v4 + 56);
              if (v44 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16),
                                          1u, memory_order_relaxed);
                v48_.v48 = v43;
                v48_.v49 = v44;
                v50_.v50 = GameData_200c050;
                v50_.v51 = v2;
                v50_.v52 = (__int64*)&v50_.v50;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16),
                                          1u, memory_order_relaxed);
              }
              else {
                v48_.v48 = *(_QWORD*)(v4 + 48);
                v48_.v49 = 0;
                v50_.v50 = GameData_200c050;
                v50_.v51 = v2;
                v50_.v52 = (__int64*)&v50_.v50;
              }
              v45 = CharacterTrailModule_d3d630((_QWORD*)(v42 + 56), &v48_.v48,
                                                (__int64)&v50_.v50, 1);
              if (v48_.v49 != 0) {
                std___1___shared_weak_count___release_weak(v48_.v49);
              }
              result = (__int64)v50_.v52;
              *(_DWORD*)(v2 + 216) = v45;
              if ((__int64 (***)(void))result == &v50_.v50) {
                v46 = 32;
              }
              else {
                if (result == 0) {
                LABEL_89:
                  if (v44 != 0) {
                    result = std___1___shared_weak_count___release_weak(v44);
                  }
                  *(_DWORD*)v1 &= ~1u;
                  return result;
                }
                v46 = 40;
              }
              result =
                  (*(__int64 (**)(__int64))(*(_QWORD*)result + v46))(result);
              goto LABEL_89;
            }
            v36 = fw_memory_HeapManager_Allocate(*v23, 368, 16, 0);
            game_character_IKChariot_IKChariot(v36, v19, (__int64)v1);
          }
        LABEL_64:
          if (*(_BYTE*)(v36 + 16) == 1) {
            v50_.v50 = (__int64 (**)(void))v36;
          LABEL_71:
            GameRoutine_10e33a0((__int64*)(v2 + 80), &v50_.v50);
            v38 = v50_.v50;
            if (v50_.v50 == nullptr) {
              goto LABEL_74;
            }
            v37 = *v50_.v50;
            goto LABEL_73;
          }
          v37 = *(__int64 (**)(void))v36;
          v38 = (__int64 (**)(void))v36;
        LABEL_73:
          (*((void (**)(__int64))v37 + 1))((__int64)v38);
          goto LABEL_74;
        }
        if (((1LL << v22) & 0x410C) == 0) {
          if (((1LL << v22) & 0x102C00000LL) != 0) {
            v26 = fw_memory_HeapManager_Allocate(*v23, 128, 16, 0);
            *(_QWORD*)(v26 + 24) = v19;
            *(_DWORD*)(v26 + 32) = 0;
            v27 = v26;
            *(_WORD*)(v26 + 16) = 256;
            *(_QWORD*)v26 = game_character_IKSlopeCrawling_vtable;
            *(_QWORD*)(v26 + 8) = v1;
            *(_QWORD*)(v26 + 40) = v19[76];
            v28 = v19[77];
            *(_QWORD*)(v26 + 48) = v28;
            if (v28 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                        memory_order_relaxed);
            }
            v29 = v19[78];
            *(_DWORD*)(v26 + 72) = -1;
            v30 = v26 + 72;
            *(_QWORD*)(v27 + 80) = 0;
            *(_QWORD*)(v27 + 88) = 0;
            *(_QWORD*)(v27 + 96) = 0;
            *(_QWORD*)(v27 + 56) = v29;
            *(_QWORD*)(v27 + 64) = v24;
            *(_OWORD*)(v27 + 112) = GameData_1a83610;
            if (v24 != 0 &&
                *(_QWORD*)(v24 + 88) - *(_QWORD*)(v24 + 80) != 768) {
              IKSlopeCrawling_DeletingDestructor((_QWORD*)v27);
              goto LABEL_74;
            }
            v31 = v19[51];
            v50_.v50 = GameData_200e420;
            v50_.v51 = v27;
            v50_.v52 = (__int64*)&v50_.v50;
            game_109d2e0(v30, v31, "Loc_C_Trans", (__int64)&v50_.v50, 1u);
            if (v50_.v52 == (__int64*)&v50_.v50) {
              v32 = 32;
            }
            else {
              if (v50_.v52 == nullptr) {
              LABEL_70:
                v50_.v50 = (__int64 (**)(void))v27;
                *(_BYTE*)(v27 + 16) = 1;
                goto LABEL_71;
              }
              v32 = 40;
            }
            (*(void (**)(__int64))(*v50_.v52 + v32))((__int64)v50_.v52);
            goto LABEL_70;
          }
          goto LABEL_93;
        }
        v33 = fw_memory_HeapManager_Allocate(*v23, 368, 16, 0);
        game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal((_QWORD*)v33, v19,
                                                             (__int64)v1, v24);
        if (*(_BYTE*)(v33 + 16) == 1) {
          v50_.v50 = (__int64 (**)(void))v33;
          GameRoutine_10e33a0((__int64*)(v2 + 80), &v50_.v50);
          v34 = v50_.v50;
          if (v50_.v50 == nullptr) {
          LABEL_63:
            v36 = fw_memory_HeapManager_Allocate(*v23, 192, 16, 0);
            game_character_IKLeftArm_IKLeftArm(v36, v19, (__int64)v1);
            goto LABEL_64;
          }
          v35 = *v50_.v50;
        }
        else {
          v35 = *(__int64 (**)(void))v33;
          v34 = (__int64 (**)(void))v33;
        }
        (*((void (**)(__int64))v35 + 1))((__int64)v34);
        goto LABEL_63;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v50_.v52 + v17))((__int64)v50_.v52);
    goto LABEL_31;
  }
  return result;
}

#pragma GCC visibility pop
