#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_facility_anonymous_1432cd0(PSEUDO_X8,
                                                                float);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_21a60e8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_20433d8[])();
extern __int64 GameData_21a60e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern float game_script_math_kDirCorrections[91];
float Cursor_734120(int, int, float, float, float, float);
float game_facility_anonymous_1432e20();
float game_facility_anonymous_1432fc0();
float32x4_t Camera_b3bac0(__int64);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___memory_148a940(__int64 a1, __int64 a2);

void llvm_libcxx_21_libcxx_include___memory_148a940(__int64 a1, __int64 a2)
{
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  int v10;
  float v11;
  float v12;
  float v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  float v30;
  int v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  int v42;
  float v43;
  float v44;
  __int64 v45;
  int v46;
  int v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  int v55;
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int8x16_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  __int64* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  struct {
    float32x4_t v85;
    int8x16_t v86;
    _QWORD v87[4];
    _QWORD* v88;
  } f_;

  v4 = game_g_game_setting_ptr;
  v5 = *(_BYTE**)game_g_game_setting_ptr;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
      ((v5[804] & 1) != 0 ||
       v5[940] == 1 && (v5[805] & 1) != 0 && (v5[806] & 1) != 0)) {
    goto LABEL_56;
  }
  if (v5[903] == 1 &&
      ((v5[900] & 1) != 0 ||
       v5[940] == 1 && (v5[901] & 1) != 0 && (v5[902] & 1) != 0)) {
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0) {
      goto LABEL_56;
    }
    goto LABEL_60;
  }
  if (*(_BYTE*)(a1 + 128) == 1) {
    game_facility_anonymous_1432cd0((void*)(f_.v87), 0x1.0000000000000p-2f);
    v6 = f_.v87[0];
  }
  else {
    v6 = 0;
  }
  v7 = fabsf(*((float*)&v6 + 1));
  v8 = fabsf(*(float*)&v6);
  if (v7 <= v8) {
    v11 = 0x0.0p+0f;
    if (*(float*)&v6 == 0x0.0p+0f) {
      goto LABEL_34;
    }
    v13 = (float)(v7 / v8) * 0x1.6800000000000p+5f;
    if ((float)(v13 + v13) < 0x0.0p+0f) {
      v14 = -(int)(float)(0x1.0000000000000p-1f - (float)(v13 + v13));
    }
    else {
      v14 = (int)(float)((float)(v13 + v13) + 0x1.0000000000000p-1f);
    }
    v11 = v13 * game_script_math_kDirCorrections[v14];
    if (*(float*)&v6 > 0x0.0p+0f) {
      if (*((float*)&v6 + 1) >= 0x0.0p+0f) {
        goto LABEL_34;
      }
      v12 = 0x1.6800000000000p+8f;
      goto LABEL_31;
    }
    v12 = 0x1.6800000000000p+7f;
    if (*((float*)&v6 + 1) >= 0x0.0p+0f) {
    LABEL_31:
      v11 = v12 - v11;
      goto LABEL_34;
    }
  }
  else {
    v9 = (float)(v8 / v7) * 0x1.6800000000000p+5f;
    if ((float)(v9 + v9) < 0x0.0p+0f) {
      v10 = -(int)(float)(0x1.0000000000000p-1f - (float)(v9 + v9));
    }
    else {
      v10 = (int)(float)((float)(v9 + v9) + 0x1.0000000000000p-1f);
    }
    v11 = v9 * game_script_math_kDirCorrections[v10];
    if (*((float*)&v6 + 1) < 0x0.0p+0f) {
      v12 = 0x1.0e00000000000p+8f;
      if (*(float*)&v6 > 0x0.0p+0f) {
        goto LABEL_33;
      }
      goto LABEL_31;
    }
    v12 = 0x1.6800000000000p+6f;
    if (*(float*)&v6 > 0x0.0p+0f) {
      goto LABEL_31;
    }
  }
LABEL_33:
  v11 = v11 + v12;
LABEL_34:
  v15 = (float)(PSEUDO_UNFUSED(v11 * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)(v11 * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v15 <= 0x1.921fb60000000p+0f) {
    v17 = v15;
    if (v15 >= -0x1.921fb60000000p+0f) {
      goto LABEL_39;
    }
    v16 = -0x1.921fb60000000p+1f;
  }
  else {
    v16 = 0x1.921fb60000000p+1f;
  }
  v17 = v16 - v15;
LABEL_39:
  v18 = 0x1.0000000000000p+0f;
  v19 =
      v17 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v17 *
                                                                                                    v17))) *
                                                                            (float)(v17 *
                                                                                    v17))) *
                                                         (float)(v17 * v17))) *
                                         (float)(v17 * v17))) *
                      (float)(v17 * v17)) +
              0x1.0000000000000p+0f);
  if (v15 <= 0x1.921fb60000000p+0f) {
    if (v15 >= -0x1.921fb60000000p+0f) {
      goto LABEL_44;
    }
    v20 = -0x1.921fb60000000p+1f;
  }
  else {
    v20 = 0x1.921fb60000000p+1f;
  }
  v15 = v20 - v15;
  v18 = -0x1.0000000000000p+0f;
LABEL_44:
  v21 = 0x0.0p+0f;
  v22 =
      v18 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            (float)(v15 *
                                                                                                    v15))) *
                                                                            (float)(v15 *
                                                                                    v15))) *
                                                         (float)(v15 * v15))) *
                                         (float)(v15 * v15))) *
                      (float)(v15 * v15)) +
              0x1.0000000000000p+0f);
  v23 = 0x0.0p+0f;
  if (v19 != 0x0.0p+0f) {
    v21 = fabsf(0x1.0000000000000p+0f / v19);
  }
  if (v22 != 0x0.0p+0f) {
    v23 = fabsf(0x1.0000000000000p+0f / v22);
  }
  v24 = *(_QWORD*)(a1 + 32);
  if (fabsf(v22) >= fabsf(v19)) {
    v25 = v23;
  }
  else {
    v25 = v21;
  }
  v26 = *((float*)&v6 + 1) * v25;
  v27 = (float)(*(float*)&v6 * v25) * COERCE_FLOAT(*(_QWORD*)(a1 + 24));
  {
    __typeof__(v28) z_ = (__typeof__(v28)){0};
    LODWORD(z_) =
        DWORDn(*(_QWORD*)(a1 + 24), sizeof(*(_QWORD*)(a1 + 24)) / 4 - 1);
    v28 = z_;
  }
  if (*(float*)(a1 + 60) != v27) {
    v29 = *(_DWORD*)(v24 + 60);
    *(_DWORD*)(a1 + 52) = 0;
    *(_DWORD*)(a1 + 48) = v29;
    *(_DWORD*)(a1 + 56) = *(_DWORD*)(a1 + 64);
    *(float*)(a1 + 60) = v27;
  }
  v30 = v26 * v28;
  if (*(float*)(a1 + 100) != v30) {
    v31 = *(_DWORD*)(v24 + 60);
    *(_DWORD*)(a1 + 92) = 0;
    *(_DWORD*)(a1 + 88) = v31;
    *(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 104);
    *(float*)(a1 + 100) = v30;
  }
  v5 = *(_BYTE**)v4;
  if ((*(_BYTE*)(*(_QWORD*)v4 + 807LL) & 1) != 0) {
  LABEL_56:
    if ((v5[804] & 1) != 0 ||
        v5[940] == 1 && (v5[805] & 1) != 0 && (v5[806] & 1) != 0) {
      goto LABEL_62;
    }
  }
LABEL_60:
  if (v5[903] != 1 ||
      (v5[900] & 1) == 0 &&
          (v5[940] != 1 || (v5[901] & 1) == 0 || (v5[902] & 1) == 0)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
    }
    *(_QWORD*)(a1 + 120) = GameData_21a60e0;
    goto LABEL_85;
  }
LABEL_62:
  if (*(_BYTE*)(a1 + 128) == 1) {
    v32 =
        game_facility_anonymous_1432e20() + COERCE_FLOAT(*(_QWORD*)(a1 + 120));
    v33 = *(_QWORD*)(a1 + 24);
    v34 = -*(float*)&v33;
    if (*(float*)&v33 >= v32) {
      *(float*)&v33 = v32;
    }
    if (v32 >= v34) {
      v35 = *(float*)&v33;
    }
    else {
      v35 = v34;
    }
    *(float*)(a1 + 120) = v35;
    v36 = game_facility_anonymous_1432fc0() + *(float*)(a1 + 124);
    v37 = *(float*)(a1 + 28);
    v38 = -v37;
    if (v37 >= v36) {
      v37 = v36;
    }
    if (v36 >= v38) {
      v39 = v37;
    }
    else {
      v39 = v38;
    }
    *(float*)(a1 + 124) = v39;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release((__int64)&GameData_21a60e8);
    }
    *(_QWORD*)(a1 + 120) = GameData_21a60e0;
  }
  v40 = *(_QWORD*)(a1 + 120);
  v41 = *(_QWORD*)(a1 + 32);
  if (*(float*)(a1 + 60) != *(float*)&v40) {
    v42 = *(_DWORD*)(v41 + 60);
    *(_DWORD*)(a1 + 52) = 0;
    *(_DWORD*)(a1 + 48) = v42;
    *(_DWORD*)(a1 + 56) = *(_DWORD*)(a1 + 64);
    *(_DWORD*)(a1 + 60) = v40;
  }
  if (*(float*)(a1 + 100) != *((float*)&v40 + 1)) {
    LODWORD(v40) = *(_DWORD*)(v41 + 60);
    *(_DWORD*)(a1 + 92) = 0;
    *(_DWORD*)(a1 + 88) = v40;
    *(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 104);
    *(_DWORD*)(a1 + 100) = DWORDn(v40, sizeof(v40) / 4 - 1);
  }
LABEL_85:
  v44 = *(float*)(a1 + 48);
  v43 = *(float*)(a1 + 52);
  v45 = game_script_hub_g_frame_counter_ptr[0];
  if (v43 >= v44) {
    v52 = *(float*)(a1 + 60);
  }
  else {
    v46 = *(_DWORD*)(a1 + 68);
    v47 = *(_DWORD*)(a1 + 72);
    v48 = v43 +
          (float)((float)(*(float*)(*(_QWORD*)
                                        game_script_hub_g_frame_counter_ptr[0] +
                                    160LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f);
    if (v44 >= v48) {
      v49 = v48;
    }
    else {
      v49 = *(float*)(a1 + 48);
    }
    v50 = *(float*)(a1 + 56);
    v51 = *(float*)(a1 + 60);
    *(float*)(a1 + 52) = v49;
    v52 = Cursor_734120(v46, v47, v50, v51, v49, v44);
  }
  *(float*)(a1 + 64) = v52;
  v54 = *(float*)(a1 + 88);
  v53 = *(float*)(a1 + 92);
  if (v53 >= v54) {
    v61 = *(float*)(a1 + 100);
    *(float*)(a1 + 104) = v61;
    if (a2 == 0) {
      return;
    }
  LABEL_98:
    math_Quat_FromYawPitchRoll((void*)(&f_.v86),
                               *(float*)(a1 + 64) * 0x1.1df46a0000000p-6f,
                               v61 * 0x1.1df46a0000000p-6f, 0x0.0p+0f);
    v62 = Camera_b3bac0(*(_QWORD*)(a1 + 8));
    LANES128(v63).n128_u64[0] = LANES128(v62).n128_u64[0];
    v64 = vmulq_f32(f_.v86, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v65).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v65).n128_u64[1] = LANES128(v65).n128_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v66).n128_u64[0];
    *(int8x8_t*)&LANES128(v67).n128_i8[8] =
        vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v68).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v64).n128_u64[0]), 1);
    v69 =
        vmlaq_f32(vmulq_f32(v64, v65), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v63, v67));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v63).n128_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v62).n128_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v62).n128_i8[8] =
        vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v70 = vmlsq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v63, v68)),
                    v62, v66);
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] = LANES128(f_.v86).n128_u64[0];
    LANES128(v62).n128_u64[1] = LANES128(v62).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v64).n128_u64[0];
    *(int8x8_t*)&LANES128(v71).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v73).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v70).n128_u64[0]), 1);
    v74 =
        vmlaq_f32(vmulq_f32(v62, v70), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v72, v71));
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(f_.v86).n128_u64[0];
    LANES128(v75).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v75).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v76 = vmlsq_f32(vmlaq_f32(v74, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v71, v73)),
                    v75, v64);
    LANES128(v76).n128_u32[3] = 0;
    f_.v85 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 8) + 16LL),
                       vmulq_n_f32(v76, *(float*)(*(_QWORD*)(a1 + 8) + 80LL)));
    v77 = (__int64*)fw_memory_g_heap_manager_ptr;
    v78 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48, 16, 0);
    *(_QWORD*)(v78 + 16) = a1;
    *(_QWORD*)v78 = GameData_20433d8;
    *(float32x4_t*)(v78 + 32) = f_.v85;
    v79 = (_QWORD*)fw_memory_HeapManager_Allocate(*v77, 48, 16, 0);
    v80 = *(_QWORD*)(v78 + 16);
    v81 = *(_QWORD*)(v78 + 24);
    *v79 = GameData_20433d8;
    f_.v88 = v79;
    v79[2] = v80;
    v79[3] = v81;
    v82 = *(_QWORD*)(v78 + 40);
    v79[4] = *(_QWORD*)(v78 + 32);
    v79[5] = v82;
    GameRoutine_14514d0(f_.v87, (_QWORD*)(a2 + 272));
    if (f_.v88 == f_.v87) {
      v83 = 32;
    }
    else {
      if (f_.v88 == nullptr) {
      LABEL_103:
        v84 = 128;
        if (*(_QWORD*)(*v77 + 200) == 0) {
          v84 = 56;
        }
        nn_mem_StandardAllocator_Free(*v77 + v84, v78);
        return;
      }
      v83 = 40;
    }
    (*(void (**)(__int64))(*f_.v88 + v83))((__int64)f_.v88);
    goto LABEL_103;
  }
  v55 = *(_DWORD*)(a1 + 108);
  v56 = *(_DWORD*)(a1 + 112);
  v57 = v53 + (float)((float)(*(float*)(*(_QWORD*)v45 + 160LL) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
  if (v54 >= v57) {
    v58 = v57;
  }
  else {
    v58 = *(float*)(a1 + 88);
  }
  v59 = *(float*)(a1 + 96);
  v60 = *(float*)(a1 + 100);
  *(float*)(a1 + 92) = v58;
  v61 = Cursor_734120(v55, v56, v59, v60, v58, v54);
  *(float*)(a1 + 104) = v61;
  if (a2 != 0) {
    goto LABEL_98;
  }
}

#pragma GCC visibility pop
