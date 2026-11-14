#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__int64 GameRoutine_10792b0(__int64 result, int);
__int64 GameRoutine_10965c0(__int64 result, __int64);
__int64 GameRoutine_10ba7a0(_QWORD*);
__int64 GameRoutine_11075d0(__int64 result);
__int64 LocatorModule_a7c540(__int64, const char*);
__int64 Signal_d30a60(__int64**, const char*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 g3d_a661a0(__int64, int, __int64, int);
__int64 game_109d2e0(__int64 result, __int64, const char*, __int64, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_d28c30(__int64 result, char);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN* GameData_212fea0;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_20096d0[])();
extern __int64 (*GameData_20098a8[])();
extern __int64 (*GameData_2009928[])();
extern __int64 (*game_character_CharacterDie_vtable[])();
extern __int64 (*game_character_ChariotCrew_vtable[])();
extern __int64 (*game_character_FallingBody_vtable[])();
extern __int64 (*game_character_TumbleHuman_vtable[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ea00;
extern int* GameData_212fe98;
int __cxa_guard_acquire(__int64);
void CharacterDie_10bb840(__int64, __int64);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float32x4_t game_character_fc6740(_QWORD* a1, int a2, int8x16_t* a3);
_QWORD* game_character_10ba960(_QWORD* result);
__int64 game_character_112c460(__int64 result);

float32x4_t game_character_fc6740(_QWORD* a1, int a2, int8x16_t* a3)
{
  float32x4_t result;
  __int128* v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  float v18;
  float v19;
  float v20;
  __int128 v21;
  float v22;
  unsigned int v23;
  __int128 v24;
  __int128 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __int128* v29;
  float32x4_t v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  float v38;
  float v39;
  __int128 v40;
  float v41;
  unsigned int v42;
  __int128 v43;
  __int128 v44;
  __int64 v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  unsigned __int64 v58;
  float32x4_t v59;
  float32x4_t v60;
  unsigned __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int128 v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  float32x4_t v76;
  __int128 v77;
  int8x16_t v78;
  int8x16_t v79;
  struct {
    _QWORD v80[4];
    __int128 v81;
    __int128 v82;
  } v80_;
  int8x16x2_t v90;
  int8x16x2_t v91;
  int8x16x2_t v92;

  PSEUDO_LOW_LANE128(result, n128_f32, fabsf(LANES128(*(a3)).n128_f32[3]));
  if (LANES128(result).n128_f32[0] <= 0x1.fff2e40000000p-1f) {
    {
      v14 = (__int128*)(a1[4] + ((__int64)a2 << 6));
      __asm__ volatile("" ::"r"(v14));
    }
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v75 = v16;
      v77 = v17;
      v73 = v15;
      v67 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v15 = v73;
      v16 = v75;
      v17 = v77;
      if (v67 != 0) {
        {
          v68 = *((_QWORD*)GameData_212c540 + 1);
          __asm__ volatile("" ::"r"(v68));
        }
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v68;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v15 = v73;
        v16 = v75;
        v17 = v77;
      }
    }
    v18 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v15 + 1), *(float32x2_t*)&v15, 1) +
                (float)(*(float*)&v15 * *(float*)&v15)) +
        (float)(*((float*)&v15 + 2) * *((float*)&v15 + 2)));
    v19 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v16 + 1), *(float32x2_t*)&v16, 1) +
                (float)(*(float*)&v16 * *(float*)&v16)) +
        (float)(*((float*)&v16 + 2) * *((float*)&v16 + 2)));
    v20 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v17 + 1), *(float32x2_t*)&v17, 1) +
                (float)(*(float*)&v17 * *(float*)&v17)) +
        (float)(*((float*)&v17 + 2) * *((float*)&v17 + 2)));
    HIDWORD(v21) = 0;
    *(float*)&v21 = *(float*)&v15 / v18;
    *((float*)&v21 + 1) = *((float*)&v15 + 1) / v18;
    *((float*)&v21 + 2) = *((float*)&v15 + 2) / v18;
    {
      v22 = *((float*)&v16 + 1) / v19;
      __asm__ volatile("" ::"w"(v22));
    }
    *(float*)&v23 = *((float*)&v16 + 2) / v19;
    *(float*)&v24 = *(float*)&v16 / v19;
    *((float*)&v24 + 1) = v22;
    *((_QWORD*)&v24 + 1) = v23;
    HIDWORD(v25) = 0;
    *(float*)&v25 = *(float*)&v17 / v20;
    *(_OWORD*)v80_.v80 = v21;
    *(_OWORD*)&v80_.v80[2] = v24;
    *((float*)&v25 + 1) = *((float*)&v17 + 1) / v20;
    *((float*)&v25 + 2) = *((float*)&v17 + 2) / v20;
    v80_.v81 = v25;
    v80_.v82 = GameData_21a6120;
    Quat_624bc0((void*)(&v79), (__int64)v80_.v80);
    LANES128(v26).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    {
      v29 = (__int128*)(a1[4] + ((unsigned __int64)*(
                                     unsigned __int16*)(a1[2] + 96LL * a2 + 42)
                                 << 6));
      __asm__ volatile("" ::"r"(v29));
    }
    *(int8x8_t*)&LANES128(v28).n128_i8[8] =
        vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v31 = *v29;
    v32 = v29[1];
    v33 = v29[2];
    v34 = vmulq_f32(v79, v27);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v27).n128_u64[0];
    v35 = vmlaq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v26, v28));
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(*a3, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v30).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v79).n128_u64[0]), 1);
    LANES128(v27).n128_u64[1] = LANES128(v28).n128_u64[0];
    LANES128(v28).n128_u64[1] = LANES128(*(a3)).n128_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v36).n128_i8[8] =
        vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v76 = vmlsq_f32(vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v28, v30)),
                    v36, v27);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v72 = v32;
      v74 = v33;
      v71 = v31;
      v69 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v31 = v71;
      v32 = v72;
      v33 = v74;
      if (v69 != 0) {
        {
          v70 = *((_QWORD*)GameData_212c540 + 1);
          __asm__ volatile("" ::"r"(v70));
        }
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v70;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v31 = v71;
        v32 = v72;
        v33 = v74;
      }
    }
    v37 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v31 + 1), *(float32x2_t*)&v31, 1) +
                (float)(*(float*)&v31 * *(float*)&v31)) +
        (float)(*((float*)&v31 + 2) * *((float*)&v31 + 2)));
    v38 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v32 + 1), *(float32x2_t*)&v32, 1) +
                (float)(*(float*)&v32 * *(float*)&v32)) +
        (float)(*((float*)&v32 + 2) * *((float*)&v32 + 2)));
    v39 = sqrtf(
        (float)(vmuls_lane_f32(*((float*)&v33 + 1), *(float32x2_t*)&v33, 1) +
                (float)(*(float*)&v33 * *(float*)&v33)) +
        (float)(*((float*)&v33 + 2) * *((float*)&v33 + 2)));
    HIDWORD(v40) = 0;
    *(float*)&v40 = *(float*)&v31 / v37;
    *((float*)&v40 + 1) = *((float*)&v31 + 1) / v37;
    *((float*)&v40 + 2) = *((float*)&v31 + 2) / v37;
    {
      v41 = *((float*)&v32 + 1) / v38;
      __asm__ volatile("" ::"w"(v41));
    }
    *(float*)&v42 = *((float*)&v32 + 2) / v38;
    *(float*)&v43 = *(float*)&v32 / v38;
    *((float*)&v43 + 1) = v41;
    *((_QWORD*)&v43 + 1) = v42;
    HIDWORD(v44) = 0;
    *(float*)&v44 = *(float*)&v33 / v39;
    *(_OWORD*)v80_.v80 = v40;
    *(_OWORD*)&v80_.v80[2] = v43;
    *((float*)&v44 + 1) = *((float*)&v33 + 1) / v39;
    *((float*)&v44 + 2) = *((float*)&v33 + 2) / v39;
    v80_.v81 = v44;
    v80_.v82 = GameData_21a6120;
    Quat_624bc0((void*)(&v78), (__int64)v80_.v80);
    {
      v45 = a1[3] + 96LL * a2;
      __asm__ volatile("" ::"r"(v45));
    }
    v46 = vmulq_f32(v78, COERCE_AS(float32x4_t, GameData_1a829d0));
    v47 = vmulq_f32(v78, v78);
    LANES128(v47).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
    v48 = vrecpeq_f32(v47);
    v49 = vmulq_f32(v48, vrecpsq_f32(v48, v47));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v50).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v52 = vbslq_s8(vceqzq_f32(v47), v46,
                   vmulq_f32(v46, vmulq_f32(v49, vrecpsq_f32(v49, v47))));
    LANES128(v46).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v53).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v46).n128_u64[1] = LANES128(v46).n128_u64[0];
    LANES128(v53).n128_u64[1] = LANES128(v49).n128_u64[0];
    *(int32x2_t*)&LANES128(v51).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v76).n128_u64[0]), 1);
    v54 =
        vmlaq_f32(vmulq_f32(v76, v46), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v53, v50));
    LANES128(v50).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[1] = LANES128(v50).n128_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v52).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v55 = vmlsq_f32(vmlaq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v50, v51)),
                    v52, v49);
    {
      v56 = *(float32x4_t*)(v45 + 80);
      __asm__ volatile("" ::"w"(v56));
    }
    LANES128(v50).n128_u32[0] = 0;
    LANES128(v51).n128_u64[0] = 0;
    LANES128(v50).n128_u32[1] =
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 48),
                                            *(float32x4_t*)(v45 + 48)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 48)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 48)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 56)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 56))));
    LANES128(v49).n128_u32[0] =
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 32),
                                            *(float32x4_t*)(v45 + 32)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 32)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 32)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 40)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 40))));
    v57 = v55;
    LANES128(v57).n128_u32[3] = 0;
    LANES128(v51).n128_u64[1] = COERCE_UNSIGNED_INT(
        sqrtf((float)(LANES128_OF(vmulq_f32(*(float32x4_t*)(v45 + 64),
                                            *(float32x4_t*)(v45 + 64)))
                          .n128_f32[1] +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v45 + 64)) *
                              COERCE_FLOAT(*(_OWORD*)(v45 + 64)))) +
              (float)(COERCE_FLOAT(*(_QWORD*)(v45 + 72)) *
                      COERCE_FLOAT(*(_QWORD*)(v45 + 72)))));
    v58 = LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0])))
            .n64_u64[0];
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v61 = LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v59).n128_u64[1] = v58;
    LANES128(v60).n128_u64[1] = v61;
    v62 = vmulq_f32(v59, v59);
    v63 = vmulq_f32(v60, v60);
    v92.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                           vaddq_f32(vaddq_f32(v63, v63), vaddq_f32(v62, v62)));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[1] = v58;
    v64 = vmulq_f32(v62, v57);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v90.val[1] = vaddq_f32(v64, v64);
    LANES128(v57).n128_u64[1] = v61;
    v65 = vmulq_laneq_f32(v57, v55, 3);
    v66 = vaddq_f32(v65, v65);
    v91.val[0] = vaddq_f32(v90.val[1], v66);
    v91.val[1] = vsubq_f32(v90.val[1], v66);
    LANES128(v90.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v92.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90.val[1]).n128_i8[8] =
        vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v92.val[1]).n128_i8[8] =
        vqtbl2_s8(v91, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v90.val[0] = v92.val[0];
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    LANES128(v62).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL)))
            .n64_u32[0];
    LANES128(v91.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    LANES128(v90.val[0]).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL)))
            .n64_u32[0];
    LANES128(v90.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v92, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    *(float32x4_t*)(v45 + 32) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v66).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
        v51, LANES128(v62).n128_f32[0]);
    *(float32x4_t*)(v45 + 48) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v91.val[0]).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v91.val[0]).n128_u64[0]), 1),
        v51, LANES128(v90.val[0]).n128_f32[0]);
    result = vaddq_f32(
        v56,
        vmlaq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t,
                                                LANES128(v49).n128_u32[0]),
                                      COERCE_AS(float32x4_t, 0)),
                            COERCE_AS(float32x4_t, 0),
                            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0])),
                  COERCE_AS(float32x4_t, 0), v51));
    *(float32x4_t*)(v45 + 64) = vmlaq_n_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v49).n128_u32[0]),
                        LANES128(v90.val[1]).n128_f32[0]),
            COERCE_AS(float32x4_t, LANES128(v50).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v90.val[1]).n128_u64[0]), 1),
        v51,
        LANES64_OF(vqtbl2_s8(v92, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
            .n64_f32[0]);
    *(float32x4_t*)(v45 + 80) = result;
  }
  return result;
}

_QWORD* game_character_10ba960(_QWORD* result)
{
  int v1;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  char v12;
  _QWORD* v13;
  _BYTE* v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned __int8 v21;
  int* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  char v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64** v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  char v43;
  _BYTE* v44;
  void (*v45)(void);
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v52;
  __int64 v53;
  char v54;
  _BYTE* v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int8 v65;
  int* v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _BYTE* v74;
  _BYTE* v75;
  bool v76;
  __int64* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108[15];
  struct {
    __int64 (**v109)();
    __int64 v110;
    __int64 v111;
    char gap56_[8];
    __int64 (***v112)();
    char gap72_[8];
    __int64 v113;
    __int64 v114;
    char gap96_[40];
    _QWORD* v115;
    __int64 vars0;
    __int64 vars8;
  } v109_;

  v1 = *(_DWORD*)(result[9] + 120LL);
  if (v1 > -77626399) {
    if (v1 != 1400556095 && v1 != -77626398) {
      return result;
    }
  }
  else if (v1 != -972548316 && v1 != -93581017) {
    return result;
  }
  v4 = result[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                                  memory_order_acquire);
  v6 = GameData_212fe98;
  if ((explicit & 1) == 0) {
    v109_.v115 = result;
    v15 = __cxa_guard_acquire((__int64)GameData_212fea0);
    v6 = GameData_212fe98;
    result = v109_.v115;
    if (v15 != 0) {
      *GameData_212fe98 = wld_Crc32(0, "CharacterDie", 0xCu);
      __cxa_guard_release((__int64)GameData_212fea0);
      v6 = GameData_212fe98;
      result = v109_.v115;
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(v4 + 512);
  v9 = v8;
  do {
    if (v9 == *(_QWORD*)(v4 + 504)) {
      goto LABEL_18;
    }
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
  } while (v10 != v7);
  if (*(_QWORD*)(v4 + 512) == v8 || *(_QWORD*)(v8 + 8) == 0) {
  LABEL_18:
    v11 = (_QWORD*)result[14];
    if (*((_BYTE*)v11 + 16) != 0) {
      v12 = *((_BYTE*)v11 + 17);
      *((_BYTE*)v11 + 16) = 0;
      v13 = result;
      *((_BYTE*)v11 + 17) = v12 | 2;
      *((_BYTE*)v11 + 18) |= 2u;
      *((_BYTE*)v11 + 19) |= 2u;
      *((_BYTE*)v11 + 20) |= 2u;
      v14 = (_BYTE*)v11[1];
      v14[632] = 0;
      v14[664] = 0;
      v14[696] = 0;
      v14[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v11 + 72LL))((void*)(v11), v11);
      result = v13;
    }
    *(_DWORD*)(result[11] + 340LL) = -1082130432;
    GameRoutine_11075d0((__int64)result);
    v109_.v113 = v109_.vars0;
    v109_.v114 = v109_.vars8;
    nn_os_LockMutex((__int64)GameData_212df28);
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         72, 16, 0);
    GameRoutine_10965c0(v17, v4);
    *(_QWORD*)(v17 + 56) = 0;
    v18 = (__int64*)(v17 + 56);
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)v17 = game_character_CharacterDie_vtable;
    v19 = *(__int64**)(v17 + 40);
    v20 = v19[51];
    v21 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                               memory_order_acquire);
    v22 = GameData_212ea00;
    if ((v21 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ea08) != 0) {
      *v22 = wld_Crc32(0, "LocatorModule", 0xDu);
      __cxa_guard_release((__int64)GameData_212ea08);
    }
    v23 = *(_QWORD*)(v20 + 512);
    v24 = v23;
    do {
      if (v24 == *(_QWORD*)(v20 + 504)) {
        goto LABEL_38;
      }
      v25 = *(_DWORD*)(v24 - 16);
      v24 -= 16;
      v23 -= 16;
    } while (v25 != *v22);
    if (*(_QWORD*)(v20 + 512) != v23) {
      v26 = *(_QWORD*)(v23 + 8);
      if (v26 != 0) {
        v27 = LocatorModule_a7c540(v26, "Jnt_C_Spine1");
        if (v27 != 0) {
          *(_QWORD*)(v27 + 96) = 0;
          v28 = *(_QWORD*)v27;
          v29 = *(_OWORD*)(v27 + 96);
          *(_DWORD*)(v27 + 128) |= 0x10u;
          v30 = *(_BYTE*)(v27 + 28);
          *(_OWORD*)(v27 + 96) = (unsigned __int64)v29;
          if ((v30 & 1) != 0) {
          LABEL_37:
            *(_BYTE*)(*(_QWORD*)(v28 + 24) + 504LL) = 1;
            goto LABEL_38;
          }
          v31 = *(_QWORD*)(v28 + 24);
          v32 = *(_DWORD*)(v27 + 16);
          v33 = v27;
          v109_.v111 = v27;
          v109_.v109 = GameData_1fc0970;
          v109_.v110 = v28;
          v109_.v112 = &v109_.v109;
          v34 = g3d_a661a0(v31, v32, (__int64)&v109_.v109, 0);
          if (v109_.v112 == &v109_.v109) {
            v35 = 4;
          }
          else {
            if (v109_.v112 == nullptr) {
            LABEL_36:
              *(_DWORD*)(v33 + 24) = v34;
              *(_BYTE*)(v33 + 28) = 1;
              goto LABEL_37;
            }
            v35 = 5;
          }
          ((__int64 (*)(__int64))(*v109_.v112)[v35])((__int64)v109_.v112);
          goto LABEL_36;
        }
      }
    }
  LABEL_38:
    v36 = (__int64**)v19[40];
    v109_.v109 = GameData_20096d0;
    v109_.v110 = v17;
    v109_.v112 = &v109_.v109;
    strcpy(v108, "Signal_Landing");
    Signal_d30a60(v36, v108, 14, (__int64)&v109_.v109);
    if (v109_.v112 == &v109_.v109) {
      v37 = 4;
    }
    else {
      if (v109_.v112 == nullptr) {
        goto LABEL_43;
      }
      v37 = 5;
    }
    ((__int64 (*)(__int64))(*v109_.v112)[v37])((__int64)v109_.v112);
  LABEL_43:
    v38 = *(_QWORD*)(v17 + 40);
    v39 = *(_QWORD*)(v38 + 392);
    v40 = *(_QWORD*)(v38 + 400);
    if (v40 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                memory_order_relaxed);
      v41 = *(_DWORD*)(v39 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
      }
      if (v41 == 32) {
        goto LABEL_47;
      }
    }
    else {
      v41 = *(_DWORD*)(v39 + 11784);
      if (v41 == 32) {
      LABEL_47:
        v42 = v19[13];
        if (*(_BYTE*)(v42 + 16) == 0) {
          goto LABEL_79;
        }
        v43 = *(_BYTE*)(v42 + 17);
        *(_BYTE*)(v42 + 16) = 0;
        *(_BYTE*)(v42 + 17) = v43 | 2;
        *(_BYTE*)(v42 + 18) |= 2u;
        *(_BYTE*)(v42 + 19) |= 2u;
        *(_BYTE*)(v42 + 20) |= 2u;
        v44 = *(_BYTE**)(v42 + 8);
        v44[632] = 0;
        v44[664] = 0;
        v44[696] = 0;
        v44[728] = 0;
        v45 = *(void (**)(void))(*(_QWORD*)v42 + 72LL);
        goto LABEL_78;
      }
    }
    if (v41 == 7) {
      v46 = 0;
    }
    else {
      v46 = 3;
    }
    GameRoutine_10792b0(v19[9], v46);
    if (v41 == 8) {
      goto LABEL_79;
    }
    if (v41 == 7) {
      v47 = *(_QWORD*)(*(_QWORD*)(v17 + 40) + 408LL);
      v48 = fw_memory_HeapManager_Allocate(*v16, 208, 16, 0);
      CharacterDie_10bb840(v48, v47);
      v49 = *(_QWORD*)(v48 + 8);
      *(_BYTE*)(v48 + 100) = 0;
      *(_QWORD*)(v48 + 112) = 0;
      *(_QWORD*)(v48 + 120) = 0;
      *(_QWORD*)(v48 + 128) = 0;
      *(_QWORD*)v48 = game_character_ChariotCrew_vtable;
      *(_QWORD*)(v48 + 144) = 0;
      *(_QWORD*)(v48 + 152) = 0;
      *(_QWORD*)(v48 + 160) = 0;
      *(_BYTE*)(v48 + 196) = 0;
      *(_QWORD*)(v48 + 176) = 0;
      *(_QWORD*)(v48 + 184) = 0;
      *(_BYTE*)(v48 + 192) = 0;
      v109_.v112 = &v109_.v109;
      *(_DWORD*)(v48 + 104) = -1;
      *(_DWORD*)(v48 + 136) = -1;
      v109_.v109 = GameData_20098a8;
      v109_.v110 = v48;
      game_109d2e0(v48 + 104, v49, "Loc_C_Trans", (__int64)&v109_.v109, 0);
      if (v109_.v112 == &v109_.v109) {
        v50 = 4;
      }
      else {
        if (v109_.v112 == nullptr) {
          goto LABEL_71;
        }
        v50 = 5;
      }
      ((__int64 (*)(__int64))(*v109_.v112)[v50])((__int64)v109_.v112);
    LABEL_71:
      v63 = *(_QWORD*)(v48 + 8);
      v109_.v109 = GameData_2009928;
      v109_.v110 = v48;
      v109_.v112 = &v109_.v109;
      game_109d2e0(v48 + 136, v63, "Jnt_C_Hip", (__int64)&v109_.v109, 0);
      if (v109_.v112 == &v109_.v109) {
        v64 = 4;
      }
      else {
        if (v109_.v112 == nullptr) {
          goto LABEL_76;
        }
        v64 = 5;
      }
      ((__int64 (*)(__int64))(*v109_.v112)[v64])((__int64)v109_.v112);
    LABEL_76:
      v62 = *v18;
      *v18 = v48;
      if (v62 == 0) {
        goto LABEL_79;
      }
      goto LABEL_77;
    }
    if (v41 <= 0x21 && ((1LL << v41) & 0x280100030LL) != 0) {
      v52 = *(_QWORD**)(v17 + 40);
      v53 = v52[13];
      if (*(_BYTE*)(v53 + 16) != 0) {
        v54 = *(_BYTE*)(v53 + 17);
        *(_BYTE*)(v53 + 16) = 0;
        *(_BYTE*)(v53 + 17) = v54 | 2;
        *(_BYTE*)(v53 + 18) |= 2u;
        *(_BYTE*)(v53 + 19) |= 2u;
        *(_BYTE*)(v53 + 20) |= 2u;
        v55 = *(_BYTE**)(v53 + 8);
        v55[632] = 0;
        v55[664] = 0;
        v55[696] = 0;
        v55[728] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v53 + 72LL))(v53);
      }
      v56 = v52[51];
      v57 = *(_DWORD*)(v52[9] + 120LL);
      v58 = fw_memory_HeapManager_Allocate(*v16, 128, 16, 0);
      CharacterDie_10bb840(v58, v56);
      v59 = *v18;
      *(_BYTE*)(v58 + 100) = 0;
      *(_DWORD*)(v58 + 112) = 0;
      *(_QWORD*)v58 = game_character_FallingBody_vtable;
      *v18 = v58;
      *(_DWORD*)(v58 + 104) = -971227136;
      *(_DWORD*)(v58 + 108) = v57;
      if (v59 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
      }
      v60 = v52[56];
      if (v60 == 0) {
        goto LABEL_79;
      }
      v61 = fw_memory_HeapManager_Allocate(*v16, 128, 16, 0);
      CharacterDie_10bb840(v61, v60);
      v62 = *(_QWORD*)(v17 + 64);
      *(_QWORD*)v61 = game_character_FallingBody_vtable;
      *(_BYTE*)(v61 + 100) = 0;
      *(_DWORD*)(v61 + 112) = 0;
      *(_QWORD*)(v17 + 64) = v61;
      *(_DWORD*)(v61 + 104) = -971227136;
      *(_DWORD*)(v61 + 108) = v57;
      if (v62 == 0) {
        goto LABEL_79;
      }
      goto LABEL_77;
    }
    if (v41 - 2 > 6) {
      v105 = *(_QWORD*)(v17 + 40);
      wld_d28c30(*(_QWORD*)(v105 + 104), 0);
      v106 = *(_QWORD*)(v105 + 408);
      v107 = fw_memory_HeapManager_Allocate(*v16, 112, 16, 0);
      CharacterDie_10bb840(v107, v106);
      v62 = *(_QWORD*)(v17 + 56);
      *(_BYTE*)(v107 + 100) = 0;
      *(_QWORD*)(v17 + 56) = v107;
      *(_QWORD*)v107 = game_character_TumbleHuman_vtable;
      if (v62 != 0) {
      LABEL_77:
        v45 = *(void (**)(void))(*(_QWORD*)v62 + 8LL);
      LABEL_78:
        v45();
      }
    }
    else {
      GameRoutine_10ba7a0((_QWORD*)v17);
    }
  LABEL_79:
    v65 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fea0,
                               memory_order_acquire);
    v66 = GameData_212fe98;
    if ((v65 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212fea0) != 0) {
      *v66 = wld_Crc32(0, "CharacterDie", 0xCu);
      __cxa_guard_release((__int64)GameData_212fea0);
    }
    v67 = *v66;
    v68 = *(_QWORD*)(v4 + 504);
    v69 = *(_QWORD*)(v4 + 512);
    v70 = v69;
    LODWORD(v109_.v109) = v67;
    v109_.v110 = v17;
    while (v70 != v68) {
      v71 = *(_DWORD*)(v70 - 16);
      v70 -= 16;
      if (v71 == v67) {
        if ((*(_BYTE*)(v17 + 16) & 1) != 0) {
          goto LABEL_98;
        }
        goto LABEL_92;
      }
    }
    if (v68 == v69 && (unsigned __int64)(*(_QWORD*)(v4 + 520) - v68) <= 0x6F) {
      v72 = fw_memory_HeapManager_Allocate(*v16, 112, 16, 0);
      *(_QWORD*)(v4 + 504) = v72;
      *(_QWORD*)(v4 + 512) = v72;
      *(_QWORD*)(v4 + 520) = v72 + 112;
      if (v69 != 0) {
        v73 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free(*v16 + v73, v68);
      }
    }
    GameRoutine_98f140((__int64*)(v4 + 504), &v109_.v109);
    if ((*(_BYTE*)(v17 + 16) & 1) == 0) {
    LABEL_92:
      *(_BYTE*)(v17 + 16) = 1;
      *(_BYTE*)(v17 + 17) &= ~2u;
      *(_BYTE*)(v17 + 18) &= ~2u;
      *(_BYTE*)(v17 + 19) &= ~2u;
      *(_BYTE*)(v17 + 20) &= ~2u;
      v74 = *(_BYTE**)(v17 + 8);
      v74[632] = 0;
      v74[664] = 0;
      v74[696] = 0;
      v74[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
      v75 = *(_BYTE**)(v17 + 8);
      v76 = v75[300] == 3 && v75[301] == 3;
      if (v76 || v75[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 72LL))(v17);
      }
    }
  LABEL_98:
    v77 = *(__int64**)(v4 + 536);
    v78 = *(_QWORD*)(v4 + 544);
    if ((unsigned __int64)v77 >= v78) {
      v80 = *(_QWORD*)(v4 + 528);
      v81 = (char*)v77 - v80;
      v82 = ((__int64)v77 - v80) >> 3;
      v83 = v82 + 1;
      if ((unsigned __int64)(v82 + 1) >> 61 != 0) {
        goto LABEL_139;
      }
      v84 = v78 - v80;
      if (v84 >> 2 > v83) {
        v83 = v84 >> 2;
      }
      if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF8LL) {
        v85 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v85 = v83;
      }
      if (v85 != 0) {
        if (v85 >> 61 != 0) {
          goto LABEL_140;
        }
        v86 = fw_memory_HeapManager_Allocate(*v16, 8 * v85, 16, 0);
      }
      else {
        v86 = 0;
      }
      v87 = v86 + 8 * v85;
      v88 = (unsigned __int64)v77 - v80;
      v89 = (__int64)&v81[v86 + -8 * v82];
      *(_QWORD*)&v81[v86] = v17;
      v79 = (__int64)&v81[v86 + 8];
      memcpy(v89, v80, v88);
      *(_QWORD*)(v4 + 528) = v89;
      *(_QWORD*)(v4 + 536) = v79;
      *(_QWORD*)(v4 + 544) = v87;
      if (v80 != 0) {
        v90 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v90 = 56;
        }
        nn_mem_StandardAllocator_Free(*v16 + v90, v80);
      }
    }
    else {
      *v77 = v17;
      v79 = (__int64)(v77 + 1);
    }
    *(_QWORD*)(v4 + 536) = v79;
    v91 = *(__int64**)(v4 + 560);
    v92 = *(_QWORD*)(v4 + 568);
    if ((unsigned __int64)v91 < v92) {
      *v91 = v17;
      v93 = (__int64)(v91 + 1);
    LABEL_130:
      *(_QWORD*)(v4 + 560) = v93;
      GameRoutine_a8c0c0(v4);
      *(_BYTE*)(v4 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      return (_QWORD*)v17;
    }
    v94 = *(_QWORD*)(v4 + 552);
    v95 = (char*)v91 - v94;
    v96 = ((__int64)v91 - v94) >> 3;
    v97 = v96 + 1;
    if ((unsigned __int64)(v96 + 1) >> 61 == 0) {
      v98 = v92 - v94;
      if (v98 >> 2 > v97) {
        v97 = v98 >> 2;
      }
      if ((unsigned __int64)v98 >= 0x7FFFFFFFFFFFFFF8LL) {
        v99 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v99 = v97;
      }
      if (v99 == 0) {
        v100 = 0;
      LABEL_126:
        v101 = v100 + 8 * v99;
        v102 = (unsigned __int64)v91 - v94;
        v103 = (__int64)&v95[v100 + -8 * v96];
        *(_QWORD*)&v95[v100] = v17;
        v93 = (__int64)&v95[v100 + 8];
        memcpy(v103, v94, v102);
        *(_QWORD*)(v4 + 552) = v103;
        *(_QWORD*)(v4 + 560) = v93;
        *(_QWORD*)(v4 + 568) = v101;
        if (v94 != 0) {
          v104 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v104 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v104, v94);
        }
        goto LABEL_130;
      }
      if (v99 >> 61 == 0) {
        v100 = fw_memory_HeapManager_Allocate(*v16, 8 * v99, 16, 0);
        goto LABEL_126;
      }
    LABEL_140:
      GameRoutine_60a210();
    }
  LABEL_139:
    GameRoutine_98f290();
  }
  return result;
}

__int64 game_character_112c460(__int64 result)
{
  float v1;
  float v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float32x2_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float v22;
  float v23;
  float v24;
  int v25;
  float v26;
  float v27;
  unsigned int v28;
  int v29;
  float v30;
  float v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  float v35;
  int v36;
  float v37;
  float v38;
  int v39;
  unsigned int v40;
  float v41;
  float v42;
  __int64 v43;
  float32x4_t v44;
  float v45;
  __int128 v46;
  float v47;
  __int64 v48;
  __int64 v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  unsigned __int32 v53;
  float32x4_t v54;
  float32x2_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float v58;
  float v59;
  float v60;
  int v61;
  float v62;
  float v63;
  unsigned int v64;
  int v65;
  float v66;
  float v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  float v71;
  int v72;
  float v73;
  float v74;
  int v75;
  unsigned int v76;
  float v77;
  __int64 v78;
  float32x4_t v79;
  __int128 v80;

  {
    v1 = *(float*)(result + 48);
    __asm__ volatile("" ::"w"(v1));
  }
  if (v1 >= 0x0.0p+0f) {
    v2 = 0x0.0p+0f;
    {
      v3 = *(_DWORD*)(result + 80) == 2;
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *(_QWORD*)(result + 40);
      __asm__ volatile("" ::"r"(v4));
    }
    {
      v5 = *(_QWORD*)GameData_212d270;
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = v1 + *(float*)(result + 32);
      __asm__ volatile("" ::"w"(v6));
    }
    *(float*)(result + 48) = v6;
    {
      v7 = *(_QWORD*)(v4 + 80);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = *(float*)(v5 + 268);
      __asm__ volatile("" ::"w"(v8));
    }
    {
      v9 = *(_QWORD*)(v7 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = v6 - *(float*)(v5 + 260);
      __asm__ volatile("" ::"w"(v10));
    }
    {
      v11 = v6 - *(float*)(v5 + 264);
      __asm__ volatile("" ::"w"(v11));
    }
    if (v3) {
      v12 = v11;
    }
    else {
      v12 = v10;
    }
    if (v3) {
      v13 = v10;
    }
    else {
      v13 = v11;
    }
    {
      v16 = *(float32x4_t*)(*(_QWORD*)(v9 + 8) + 48LL);
      __asm__ volatile("" ::"w"(v16));
    }
    {
      v14 = *(float32x4_t*)(*(_QWORD*)(v9 + 72) + 48LL);
      __asm__ volatile("" ::"w"(v14));
    }
    v15 = vsubq_f32(v16, v14);
    v18 = v14;
    LANES128(v16).n128_u32[3] = 0;
    v17 = LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u32[0];
    LANES128(v18).n128_u32[3] = 0;
    LANES64(v19).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v17),
                         COERCE_AS(float32x2_t, v17)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u32[0]))))
            .n64_u64[0];
    v20 = vsubq_f32(v16, v18);
    v21 = vmulq_f32(v20, v20);
    LODWORD(v22) = LANES64_OF(vsqrt_f32(vpadd_f32(v19, v19))).n64_u32[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    {
      v23 = *(float*)(v5 + 272);
      __asm__ volatile("" ::"w"(v23));
    }
    LODWORD(v24) =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
            .n64_u32[0];
    if (v12 >= 0x0.0p+0f) {
      v2 = v12;
      if (v23 < v12) {
        v2 = *(float*)(v5 + 272);
        __asm__ volatile("" ::"w"(v2));
      }
    }
    {
      v25 = *(_DWORD*)(v5 + 276);
      __asm__ volatile("" ::"r"(v25));
    }
    v26 = v23 * 0x1.0000000000000p-1f;
    v27 = (float)(PSEUDO_UNFUSED((float)(v8 + -0x1.0000000000000p+0f) *
                                 0x1.0000000000000p-1f)) +
          0x1.0000000000000p+0f;
    if (v2 >= v26) {
      v34 = v25 - 2;
      v35 = v26 - (float)(v2 - v26);
      if (v25 < 2) {
        v38 = v35;
        v37 = v26;
      }
      else {
        v36 = v25 - 1;
        v37 = v26;
        v38 = v35;
        v39 = (v25 - 1) & 7;
        if (v34 >= 7) {
          v37 = v26;
          v38 = v35;
          v40 = v36 & 0xFFFFFFF8;
          do {
            v40 -= 8;
            v38 =
                v35 *
                (float)(v35 *
                        (float)(v35 *
                                (float)(v35 *
                                        (float)(v35 *
                                                (float)(v35 *
                                                        (float)(v35 *
                                                                (float)(v35 *
                                                                        v38)))))));
            v37 =
                v26 *
                (float)(v26 *
                        (float)(v26 *
                                (float)(v26 *
                                        (float)(v26 *
                                                (float)(v26 *
                                                        (float)(v26 *
                                                                (float)(v26 *
                                                                        v37)))))));
          } while (v40 != 0);
        }
        for (; v39 != 0; --v39) {
          v38 = v35 * v38;
          v37 = v26 * v37;
        }
      }
      v41 = v8 - (float)((float)((float)(v8 - v27) * v38) / v37);
    }
    else {
      v28 = v25 - 2;
      if (v25 < 2) {
        v31 = v2;
        v30 = v26;
      }
      else {
        v29 = v25 - 1;
        v30 = v26;
        v31 = v2;
        v32 = (v25 - 1) & 7;
        if (v28 >= 7) {
          v30 = v26;
          v31 = v2;
          v33 = v29 & 0xFFFFFFF8;
          do {
            v33 -= 8;
            v31 =
                v2 *
                (float)(v2 *
                        (float)(v2 *
                                (float)(v2 *
                                        (float)(v2 *
                                                (float)(v2 *
                                                        (float)(v2 *
                                                                (float)(v2 *
                                                                        v31)))))));
            v30 =
                v26 *
                (float)(v26 *
                        (float)(v26 *
                                (float)(v26 *
                                        (float)(v26 *
                                                (float)(v26 *
                                                        (float)(v26 *
                                                                (float)(v26 *
                                                                        v30)))))));
          } while (v33 != 0);
        }
        for (; v32 != 0; --v32) {
          v31 = v2 * v31;
          v30 = v26 * v30;
        }
      }
      v41 =
          (float)((float)((float)(v27 + -0x1.0000000000000p+0f) * v31) / v30) +
          0x1.0000000000000p+0f;
    }
    v42 = sqrtf((float)(v24 * v24) -
                (float)(PSEUDO_UNFUSED((float)(v22 * v41) *
                                       (float)(v22 * v41)))) -
          LANES128(v15).n128_f32[1];
    {
      v43 = *(_QWORD*)(v7 + 16);
      __asm__ volatile("" ::"r"(v43));
    }
    v44 = vmlaq_n_f32(v16, vsubq_f32(v18, v16), v41);
    v45 = 0x0.0p+0f;
    *(_DWORD*)(v43 - 16) = LANES128(v44).n128_u32[0];
    *(float*)(v43 - 12) = LANES128(v14).n128_f32[1] - v42;
    v46 = *(_OWORD*)(v43 - 16);
    *((_QWORD*)&v46 + 1) = LANES128(v44).n128_u32[2];
    *(_OWORD*)(v43 - 16) = v46;
    {
      v47 = *(float*)(v5 + 268);
      __asm__ volatile("" ::"w"(v47));
    }
    {
      v48 = *(_QWORD*)(*(_QWORD*)(result + 40) + 80LL);
      __asm__ volatile("" ::"r"(v48));
    }
    {
      v49 = *(_QWORD*)(v48 + 200);
      __asm__ volatile("" ::"r"(v49));
    }
    {
      v52 = *(float32x4_t*)(*(_QWORD*)(v49 + 8) + 48LL);
      __asm__ volatile("" ::"w"(v52));
    }
    {
      v50 = *(float32x4_t*)(*(_QWORD*)(v49 + 72) + 48LL);
      __asm__ volatile("" ::"w"(v50));
    }
    v51 = vsubq_f32(v52, v50);
    v54 = v50;
    LANES128(v52).n128_u32[3] = 0;
    v53 = LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u32[0];
    LANES128(v54).n128_u32[3] = 0;
    LANES64(v55).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v53),
                         COERCE_AS(float32x2_t, v53)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v51).n128_u32[0]))))
            .n64_u64[0];
    v56 = vsubq_f32(v52, v54);
    v57 = vmulq_f32(v56, v56);
    LODWORD(v58) = LANES64_OF(vsqrt_f32(vpadd_f32(v55, v55))).n64_u32[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    {
      v59 = *(float*)(v5 + 272);
      __asm__ volatile("" ::"w"(v59));
    }
    LODWORD(v60) =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]))))
            .n64_u32[0];
    if (v13 >= 0x0.0p+0f) {
      v45 = v13;
      if (v59 < v13) {
        v45 = *(float*)(v5 + 272);
        __asm__ volatile("" ::"w"(v45));
      }
    }
    {
      v61 = *(_DWORD*)(v5 + 276);
      __asm__ volatile("" ::"r"(v61));
    }
    v62 = v59 * 0x1.0000000000000p-1f;
    v63 = (float)(PSEUDO_UNFUSED((float)(v47 + -0x1.0000000000000p+0f) *
                                 0x1.0000000000000p-1f)) +
          0x1.0000000000000p+0f;
    if (v45 >= v62) {
      v70 = v61 - 2;
      v71 = v62 - (float)(v45 - v62);
      if (v61 < 2) {
        v74 = v71;
        v73 = v62;
      }
      else {
        v72 = v61 - 1;
        v73 = v62;
        v74 = v71;
        v75 = (v61 - 1) & 7;
        if (v70 >= 7) {
          v73 = v62;
          v74 = v71;
          v76 = v72 & 0xFFFFFFF8;
          do {
            v76 -= 8;
            v74 =
                v71 *
                (float)(v71 *
                        (float)(v71 *
                                (float)(v71 *
                                        (float)(v71 *
                                                (float)(v71 *
                                                        (float)(v71 *
                                                                (float)(v71 *
                                                                        v74)))))));
            v73 =
                v62 *
                (float)(v62 *
                        (float)(v62 *
                                (float)(v62 *
                                        (float)(v62 *
                                                (float)(v62 *
                                                        (float)(v62 *
                                                                (float)(v62 *
                                                                        v73)))))));
          } while (v76 != 0);
        }
        for (; v75 != 0; --v75) {
          v74 = v71 * v74;
          v73 = v62 * v73;
        }
      }
      v77 = v47 - (float)((float)((float)(v47 - v63) * v74) / v73);
    }
    else {
      v64 = v61 - 2;
      if (v61 < 2) {
        v67 = v45;
        v66 = v62;
      }
      else {
        v65 = v61 - 1;
        v66 = v62;
        v67 = v45;
        v68 = (v61 - 1) & 7;
        if (v64 >= 7) {
          v66 = v62;
          v67 = v45;
          v69 = v65 & 0xFFFFFFF8;
          do {
            v69 -= 8;
            v67 =
                v45 *
                (float)(v45 *
                        (float)(v45 *
                                (float)(v45 *
                                        (float)(v45 *
                                                (float)(v45 *
                                                        (float)(v45 *
                                                                (float)(v45 *
                                                                        v67)))))));
            v66 =
                v62 *
                (float)(v62 *
                        (float)(v62 *
                                (float)(v62 *
                                        (float)(v62 *
                                                (float)(v62 *
                                                        (float)(v62 *
                                                                (float)(v62 *
                                                                        v66)))))));
          } while (v69 != 0);
        }
        for (; v68 != 0; --v68) {
          v67 = v45 * v67;
          v66 = v62 * v66;
        }
      }
      v77 =
          (float)((float)((float)(v63 + -0x1.0000000000000p+0f) * v67) / v66) +
          0x1.0000000000000p+0f;
    }
    {
      v78 = *(_QWORD*)(v48 + 208);
      __asm__ volatile("" ::"r"(v78));
    }
    v79 = vmlaq_n_f32(v52, vsubq_f32(v54, v52), v77);
    *(_DWORD*)(v78 - 16) = LANES128(v79).n128_u32[0];
    *(float*)(v78 - 12) =
        LANES128(v50).n128_f32[1] -
        (float)(sqrtf((float)(v60 * v60) -
                      (float)(PSEUDO_UNFUSED((float)(v58 * v77) *
                                             (float)(v58 * v77)))) -
                LANES128(v51).n128_f32[1]);
    v80 = *(_OWORD*)(v78 - 16);
    *((_QWORD*)&v80 + 1) = LANES128(v79).n128_u32[2];
    *(_OWORD*)(v78 - 16) = v80;
  }
  return result;
}

#pragma GCC visibility pop
