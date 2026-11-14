#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 GameRoutine_10bc1a0(void);
__int64 GameRoutine_10bc340(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TumbleHuman_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TumbleHuman_DeletingDestructor");
__int64 TumbleHuman_Unknown5(__int64 a1);
__int64 TumbleHuman_10bbbb0(__int64 result);
__int64 GameRoutine_10bc1a0_alt1(__int64) __asm__("GameRoutine_10bc1a0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TumbleHuman_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void Quat_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__attribute__((swiftcall)) void game_character_1116460(PSEUDO_X8, __int128*,
                                                       __int64, float*, _DWORD*,
                                                       unsigned __int64, int,
                                                       float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_20077d8[])();
float exp2f(float);
float powf(float, float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void TumbleHuman_Unknown4(__int64 a1);

void TumbleHuman_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = &game_character_CharacterDie_Body_vtable;
  v2 = (_QWORD*)GameRoutine_10bc1a0_alt1((__int64)a1);
  if (v2 != nullptr) {
    CharacterBuilder_1083bf0(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__int64 TumbleHuman_10bbbb0(__int64 result)
{

#pragma clang fp contract(off)
  float v1;

  if (*(_BYTE*)(result + 52) == 1) {
    *(_BYTE*)(result + 52) = 0;
    *(_DWORD*)(result + 48) = 1092616192;
  }
  else {
    v1 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
    *(float*)(result + 48) = v1;
    if (v1 <= 0x0.0p+0f) {
      return result;
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
}

void TumbleHuman_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  int8x16_t v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  float32x4_t v11;
  float32x4_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  unsigned int v18;
  float v19;
  float v20;
  float v21;
  __int128 v22;
  unsigned __int32 v23;
  float32x4_t* v24;
  __int128 v25;
  unsigned __int32 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t* v33;
  float32x4_t v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int16x4_t v52;
  int v53;
  unsigned __int32 v54;
  float32x4_t v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  struct {
    __int64 v59;
    unsigned int v60;
  } v59_;
  float32x4_t v61;
  float32x4_t v62;
  struct {
    int8x16_t v63;
    __int64 v64;
    char gap72_[8];
    int8x16_t* v65;
  } v63_;

  v2 = GameRoutine_10bc1a0_alt1(a1);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(float*)(a1 + 96);
  LANES128(v63_.v63).n128_u64[0] = (unsigned __int64)GameData_20077d8;
  LANES128(v63_.v63).n128_u64[1] = v2;
  v63_.v65 = &v63_.v63;
  v63_.v64 = 1;
  game_character_1116460((void*)(&v59_.v59), (__int128*)(v3 + 304),
                         (__int64)&v63_.v63, nullptr, nullptr, 0, 0, v4);
  if (v63_.v65 == &v63_.v63) {
    v5 = 32;
  }
  else {
    if (v63_.v65 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(void*))(LANES128(*(v63_.v65)).n128_u64[0] + v5))(
      (void*)v63_.v65);
LABEL_6:
  if ((*(_BYTE*)(a1 + 100) & 1) != 0) {
    v6 = GameRoutine_10bc1a0_alt1(a1);
    v8 = *(_QWORD*)(v6 + 392);
    v9 = *(_QWORD*)(v6 + 400);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v10 = *(_DWORD*)(v8 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    else {
      v10 = *(_DWORD*)(v8 + 11784);
    }
    if (v10 > 0x20 | ((1LL << v10) & 0x168060000LL) == 0) {
      v14 = LANES128(v61).n128_f32[1];
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
        v57 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v57;
        __cxa_guard_release((__int64)&GameData_21a6190);
      }
      LANES128(v13).n128_u64[0] = GameData_21a6180;
      v14 = *((float*)&GameData_21a6180 + 1);
      LANES128(v13).n128_u64[1] = DWORD2(GameData_21a6180);
      v61 = v13;
    }
    if (v14 > 0x1.6b851e0000000p-1f) {
      *((float*)&v59_.v59 + 1) =
          (float)(PSEUDO_UNFUSED((float)((float)(0x1.0000000000000p+0f / v14) +
                                         -0x1.0000000000000p+0f) *
                                 0x1.0000000000000p-1f)) +
          *((float*)&v59_.v59 + 1);
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v58 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v58;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    v7 = COERCE_AS(int8x16_t, GameData_21a6180);
    LANES128(v11).n128_u64[0] = GameData_21a6180;
    LANES128(v11).n128_u64[1] = DWORD2(GameData_21a6180);
    v61 = v11;
  }
  v15 = *(float*)(a1 + 48);
  v16 = 0x0.0p+0f;
  if (v15 <= 0x0.0p+0f) {
    v17 = 0x0.0p+0f;
  }
  else {
    v17 = 0x1.0000000000000p+0f - exp2f(v15 * -0x1.df851e0000000p+4f);
    PSEUDO_LOW_LANE128(v7, n128_u32, *(_DWORD*)(a1 + 48));
    if (LANES128(v7).n128_f32[0] > 0x0.0p+0f) {
      v16 = 0x1.0000000000000p+0f -
            powf(0x1.6666660000000p-1f,
                 LANES128(v7).n128_f32[0] * 0x1.df851e0000000p+4f);
    }
  }
  v18 = v59_.v60;
  v19 = *(float*)(a1 + 68);
  PSEUDO_LOW_LANE128(v7, n128_u32,
                     COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f)));
  if (*(float*)(a1 + 84) == 0x0.0p+0f) {
    v20 = 0x1.0000000000000p+0f;
  }
  else {
    v20 = v17;
  }
  if (*(float*)(a1 + 84) != 0x0.0p+0f) {
    PSEUDO_LOW_LANE128(v7, n128_f32, v16);
  }
  v21 = *((float*)&v59_.v59 + 1) - v19;
  *(_DWORD*)(a1 + 64) = v59_.v59;
  *(float*)(a1 + 68) = v19 + (float)(v21 * v20);
  v22 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v22 + 1) = v18;
  *(_OWORD*)(a1 + 64) = v22;
  game_109da60((void*)(&v63_.v63), (float32x4_t*)(a1 + 80), &v61, v7);
  v23 = LANES128(v63_.v63).n128_u32[2];
  v24 = *(float32x4_t**)(a1 + 8);
  *(_QWORD*)(a1 + 80) = LANES128(v63_.v63).n128_u64[0];
  v25 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v25 + 1) = v23;
  *(_OWORD*)(a1 + 80) = v25;
  v26 = *(_DWORD*)(a1 + 68);
  v27 = v24[19];
  v28 = v27;
  LANES128(v28).n128_u32[1] = v26;
  v29 = vsubq_f32(v27, v28);
  v30 = vmulq_f32(v29, v29);
  LANES128(v30).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v24[19]).n128_u32[0] = LANES128(v27).n128_u32[0];
    LANES128(v24[19]).n128_u32[1] = v26;
    v31 = v24[19];
    LANES128(v24[18]).n128_u32[2] |= 1u;
    LANES128(v31).n128_u64[1] = LANES128(v27).n128_u32[2];
    v24[19] = v31;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v56 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v56;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  v32 = *(int8x16_t*)(a1 + 80);
  v33 = *(float32x4_t**)(a1 + 8);
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v35 = LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v34).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v38 = vmulq_f32(v34, v36);
  v39 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v32);
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v32).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v36).n128_u64[1] = v35;
  LANES128(v40).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v40).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
          .n64_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  v41 = vaddq_f32(v39, v32);
  v42 = vsqrtq_f32(vaddq_f32(v41, v41));
  v43 = vdivq_f32(vmlsq_f32(v38, v36, v37), v42);
  LANES128(v43).n128_u32[3] = LANES128_OF(vmulq_f32(v42, v40)).n128_u32[3];
  LANES128(v42).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v42).n128_u64[1] = 0x3400000034000000LL;
  v44 = vbslq_s8(vcgeq_f32(v42, v41), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v43);
  v45 = *(int8x16_t*)(a1 + 32);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] = LANES128(v44).n128_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v41).n128_u64[0];
  LANES128(v46).n128_u64[1] = LANES128(v37).n128_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v48 = vmlaq_f32(vmulq_f32(v45, v41), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v46, v40));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v47).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 1);
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v40).n128_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v44).n128_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v50 = vmlsq_f32(vmlaq_f32(v48, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v40, v47)),
                  v49, v37);
  v51 = v33[21];
  v62 = v50;
  LANES64(v52).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v51, v50)))).n64_u64[0];
  if ((LANES64(v52).n64_u8[0] & 1) != 0 || (LANES64(v52).n64_u8[2] & 1) != 0 ||
      (LANES64(v52).n64_u8[4] & 1) != 0 || (LANES64(v52).n64_u8[6] & 1) != 0) {
    v53 = LANES128(v33[18]).n128_u32[2] | 1;
    LANES128(v33[21]).n128_u64[0] = LANES128(v50).n128_u64[0];
    LANES128(v33[21]).n128_u64[1] =
        LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0];
    LANES128(v33[18]).n128_u32[2] = v53;
    Quat_622ac0((void*)(&v63_.v63), (float32x2_t*)&v62);
    v54 = LANES128(v63_.v63).n128_u32[2];
    LANES128(v33[20]).n128_u64[0] = LANES128(v63_.v63).n128_u64[0];
    v55 = v33[20];
    LANES128(v55).n128_u64[1] = v54;
    v33[20] = v55;
  }
}

__int64 TumbleHuman_Unknown5(__int64 a1)
{
  GameRoutine_10bc340();
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

#pragma GCC visibility pop
