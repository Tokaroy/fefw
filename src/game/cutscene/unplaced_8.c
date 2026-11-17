#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8,
                                                        float32x4_t*);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
int __cxa_guard_acquire(__int64);
long double GameRoutine_1a09ff0(double, double);
long double GameRoutine_1a0a000(long double, long double);
void __cxa_guard_release(__int64);
__attribute__((swiftcall)) void
game_cutscene_17fd670(PSEUDO_X8 x8_, __int64* a1, unsigned int a2,
                      unsigned int a3, float32x2_t* a4, float32x4_t* a5,
                      char a6);
__attribute__((swiftcall)) void

game_cutscene_17fd670(PSEUDO_X8 x8_, __int64* a1, unsigned int a2,
                      unsigned int a3, float32x2_t* a4, float32x4_t* a5,
                      char a6)
{
  float32x4_t* a7 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  int v8;
  __int64 v13;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  unsigned __int64 v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  int v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t* v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  double v58;
  long double v59;
  float v60;
  long double v61;
  long double v62;
  long double v63;
  long double v64;
  float v65;
  double v66;
  long double v67;
  float v68;
  long double v69;
  long double v70;
  long double v71;
  float32x4_t v72;
  long double v73;
  float32x4_t v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  struct {
    float32x4_t v81;
    union {
      float32x4_t v82;
      float32x4_t v83;
      float32x4_t v84;
      float32x4_t v85;
    };
    union {
      float32x4_t v86;
      unsigned int v87;
      float32x4_t v88;
      unsigned int v89;
      float32x4_t v90;
      float32x4_t v91;
    };
    union {
      float32x4_t v92;
      unsigned int v93;
      float32x4_t v94;
      unsigned int v95;
      float32x4_t v96;
      float32x4_t v97;
    };
    int8x16_t v98;
    int8x16_t v99;
    int8x16_t v100;
    float32x4_t v101;
    float32x4_t v102;
    float32x4_t v103[2];
    float32x4_t v104;
    float32x4_t v105;
    int8x16_t v106;
    float32x4_t v107;
    float32x4_t v108;
    float32x4_t v109;
    float32x4_t v110;
  } f_;

  LANES128(*(a7)).n128_u8[0] = 0;
  LANES128(a7[1]).n128_u8[0] = 0;
  v8 = *((_DWORD*)a1 + 4);
  LANES128(a7[3]).n128_u8[0] = 0;
  LANES128(a7[4]).n128_u8[0] = 0;
  LANES128(a7[5]).n128_u8[0] = 0;
  LANES128(a7[6]).n128_u8[0] = 0;
  v13 = a1[1];
  if (v13 == 0 | v8 == -1) {
    (*(void (**)(__int64))(*(_QWORD*)*a1 + 8LL))(*a1);
    (**(void (***)(__int64))*a1)(*a1);
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v99, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v16).n128_i8[8] =
        vqtbl1_s8(f_.v99, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v100, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v17).n128_i8[8] =
        vqtbl1_s8(f_.v100, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v18 = vmulq_f32(vmulq_f32(f_.v98, v16), v17);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v99, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v17).n128_i8[8] =
        vqtbl1_s8(f_.v99, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v100, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v19).n128_i8[8] =
        vqtbl1_s8(f_.v100, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v20 = vsubq_f32(v18, vmulq_f32(vmulq_f32(f_.v98, v17), v19));
    LANES128(v20).n128_u64[0] = LANES128_OF(vpaddq_f32(v20, v20)).n128_u64[0];
    v21 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1));
    v22 = vrecpeq_f32(v21);
    v23 = vmulq_f32(v22, vrecpsq_f32(v22, v21));
    v24 = vmulq_f32(v23, vrecpsq_f32(v23, v21));
    v25 = vzip1q_s32(f_.v98, f_.v100);
    v26 = vzip1q_s32(f_.v99, COERCE_AS(int32x4_t, 0));
    v27 = vzip2q_s32(v25, v26);
    v28 = vzip1q_s32(vzip2q_s32(f_.v98, f_.v100),
                     vzip2q_s32(f_.v99, COERCE_AS(int32x4_t, 0)));
    v29 = vzip1q_s32(v25, v26);
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v30).n128_i8[8] =
        vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v34 = LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v31).n128_u64[1] = v34;
    LANES128(v16).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v28).n128_i8[8] =
        vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v16).n128_i8[8] =
        vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v35 = vmulq_f32(v24, vmlsq_f32(vmulq_f32(v30, v31), v28, v32));
    v36 = vmulq_f32(v24, vmlsq_f32(vmulq_f32(v32, v16), v31, v33));
    v37 = vmulq_f32(v24, vmlsq_f32(vmulq_f32(v28, v33), v16, v30));
    v38 = vceqzq_f32(v21);
    f_.v98 = vbicq_s8(v35, v38);
    f_.v99 = vbicq_s8(v36, v38);
    f_.v100 = vbicq_s8(v37, v38);
    f_.v101 = vbicq_s8(
        vmlsq_laneq_f32(
            vmlsq_lane_f32(
                vmulq_n_f32(vnegq_f32(v35), LANES128(f_.v101).n128_f32[0]), v36,
                COERCE_AS(float32x2_t, LANES128(f_.v101).n128_u64[0]), 1),
            v37, f_.v101, 2),
        v38);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v75 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v75;
      __cxa_guard_release((__int64)&GameData_21a6130);
    }
    v39 = *(float32x4_t*)LANES64(*(a4)).n64_u64;
    v41 = f_.v98;
    v40 = f_.v99;
    v42 = vmulq_n_f32(f_.v98, COERCE_FLOAT(*(_OWORD*)LANES64(*(a4)).n64_u64));
    v43 = f_.v100;
    v44 = LANES128(a7[3]).n128_u8[0];
    f_.v101 = COERCE_AS(float32x4_t, GameData_21a6120);
    v45 = vaddq_f32(
        f_.v102,
        vaddq_f32(COERCE_AS(float32x4_t, GameData_21a6120),
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          v42, f_.v99,
                          COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1),
                      f_.v100, v39, 2)));
    if (v44 == 1) {
      LANES128(a7[2]).n128_u64[0] = LANES128(v45).n128_u64[0];
      v46 = a7[2];
      LANES128(v46).n128_u64[1] = LANES128(v45).n128_u32[2];
      v45 = v46;
    }
    else {
      LANES128(a7[3]).n128_u8[0] = 1;
    }
    a7[2] = v45;
    if (a2 != 1 || a3 == 0) {
      if (a2 >= 2) {
        if (a2 != 3 || (_WORD)a3 != 0) {
          f_.v88 = v40;
          f_.v94 = v43;
          f_.v83 = v41;
          math_Mtx43_MakeRotation((void*)(&f_.v107), a5);
          f_.v103[0] = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(f_.v83, LANES128(f_.v107).n128_f32[0]), f_.v88,
                  COERCE_AS(float32x2_t, LANES128(f_.v107).n128_u64[0]), 1),
              f_.v94, f_.v107, 2);
          f_.v103[1] = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(f_.v83, LANES128(f_.v108).n128_f32[0]), f_.v88,
                  COERCE_AS(float32x2_t, LANES128(f_.v108).n128_u64[0]), 1),
              f_.v94, f_.v108, 2);
          f_.v104 = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(f_.v83, LANES128(f_.v109).n128_f32[0]), f_.v88,
                  COERCE_AS(float32x2_t, LANES128(f_.v109).n128_u64[0]), 1),
              f_.v94, f_.v109, 2);
          f_.v105 = vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(f_.v83, LANES128(f_.v110).n128_f32[0]),
                      f_.v88,
                      COERCE_AS(float32x2_t, LANES128(f_.v110).n128_u64[0]), 1),
                  f_.v94, f_.v110, 2),
              COERCE_AS(float32x4_t, 0));
          Quat_624bc0((void*)(&f_.v106), (__int64)f_.v103);
          v65 = vmuls_lane_f32(LANES128(f_.v106).n128_f32[1], f_.v106, 2) +
                (float)(LANES128(f_.v106).n128_f32[0] *
                        LANES128(f_.v106).n128_f32[3]);
          v66 = vmuls_lane_f32(
              LANES128(f_.v106).n128_f32[1],
              COERCE_AS(float32x2_t, LANES128(f_.v106).n128_u64[0]), 1);
          v67 = GameRoutine_1a09ff0(
              v65 + v65, (LANES128_OF(vmulq_f32(f_.v106, f_.v106)).n128_f32[0] +
                          v66) * -0x1.0000000000000p+1 +
                             0x1.0000000000000p+0);
          *(float*)&v67 = *(double*)&v67;
          f_.v95 = LODWORD(v67);
          *((_QWORD*)&v70 + 1) = LANES128(f_.v106).n128_u64[1];
          v68 = vmuls_lane_f32(-LANES128(f_.v106).n128_f32[0], f_.v106, 2) +
                (float)(LANES128(f_.v106).n128_f32[1] *
                        LANES128(f_.v106).n128_f32[3]);
          *(_QWORD*)&v69 = -0x1.0000000000000p+0;
          *(double*)&v70 = v68 + v68;
          if (*(double*)&v70 > 0x1.0000000000000p+0) {
            *(double*)&v70 = 0x1.0000000000000p+0;
          }
          if (*(double*)&v70 < -0x1.0000000000000p+0) {
            *(double*)&v70 = -0x1.0000000000000p+0;
          }
          v71 = GameRoutine_1a0a000(v70, v69);
          v72 = f_.v106;
          *(float*)&v71 = *(double*)&v71;
          f_.v89 = LODWORD(v71);
          *(float*)&v71 = vmuls_lane_f32(
              LANES128(v72).n128_f32[0],
              COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]), 1);
          v73 = GameRoutine_1a09ff0(
              (float)(*(float*)&v71 + (float)(LANES128(f_.v106).n128_f32[2] *
                                              LANES128(f_.v106).n128_f32[3])) +
                  (float)(*(float*)&v71 +
                          (float)(LANES128(f_.v106).n128_f32[2] *
                                  LANES128(f_.v106).n128_f32[3])),
              (v66 + vmuls_lane_f32(LANES128(v72).n128_f32[2], v72, 2)) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
          *(float*)&v73 = *(double*)&v73;
          LANES128(v55).n128_u64[0] = __PAIR64__(f_.v89, f_.v95);
          LANES128(v55).n128_u64[1] = LODWORD(v73);
        }
        else {
          v55 = *a5;
        }
        v54 = 1;
      }
      else {
        v54 = 0;
        v55 = (__typeof__(v55)){0};
      }
    LABEL_58:
      if (LANES128(a7[5]).n128_u8[0] == v54) {
        if (LANES128(a7[5]).n128_u8[0] != 0) {
          LANES128(a7[4]).n128_u64[0] = LANES128(v55).n128_u64[0];
          v74 = a7[4];
          LANES128(v74).n128_u64[1] = LANES128(v55).n128_u32[2];
          a7[4] = v74;
        }
        goto LABEL_65;
      }
      if (LANES128(a7[5]).n128_u8[0] != 0) {
        LANES128(a7[5]).n128_u8[0] = 0;
        goto LABEL_65;
      }
      goto LABEL_63;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v78 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v78;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    v53 = COERCE_AS(float32x4_t, GameData_21a6180);
    if (a3 > 6) {
      goto LABEL_46;
    }
    if (((1 << a3) & 6) != 0) {
      v53 = f_.v98;
    }
    else {
      if (((1 << a3) & 0x18) == 0) {
        if (((1 << a3) & 0x60) != 0) {
          v53 = f_.v100;
          goto LABEL_44;
        }
      LABEL_46:
        v54 = 0;
        *a7 = v53;
        v55 = (__typeof__(v55)){0};
        LANES128(a7[1]).n128_u8[0] = 1;
        goto LABEL_58;
      }
      v53 = f_.v99;
    }
  LABEL_44:
    LANES128(v53).n128_u32[3] = 0;
    if (((1 << a3) & 0x54) != 0) {
      v53 = vnegq_f32(v53);
      LANES128(v53).n128_u32[3] = 0;
    }
    goto LABEL_46;
  }
  v47 = (float32x4_t*)(*(_QWORD*)(v13 + 32) + ((__int64)v8 << 6));
  v48 = *v47;
  v49 = v47[1];
  v50 = v47[2];
  v51 = v47[3];
  if ((a6 & 1) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      f_.v81 = v51;
      f_.v84 = v49;
      f_.v90 = v48;
      f_.v96 = v50;
      v76 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v51 = f_.v81;
      v49 = f_.v84;
      v48 = f_.v90;
      v50 = f_.v96;
      if (v76 != 0) {
        v77 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v77;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v51 = f_.v81;
        v49 = f_.v84;
        v48 = f_.v90;
        v50 = f_.v96;
      }
    }
    v52 = vaddq_f32(
        COERCE_AS(float32x4_t, GameData_21a6120),
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v48,
                            COERCE_FLOAT(*(_OWORD*)LANES64(*(a4)).n64_u64)),
                v49, COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]), 1),
            v50, *(float32x4_t*)LANES64(*(a4)).n64_u64, 2));
    LANES128(v52).n128_u32[3] = 0;
  }
  else {
    v52 = *(float32x4_t*)LANES64(*(a4)).n64_u64;
  }
  LANES128(a7[3]).n128_u8[0] = 1;
  a7[2] = vaddq_f32(v51, v52);
  if (a2 == 1 && a3 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      f_.v91 = v48;
      f_.v97 = v50;
      f_.v85 = v49;
      v79 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      v49 = f_.v85;
      v48 = f_.v91;
      v50 = f_.v97;
      if (v79 != 0) {
        v80 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v80;
        __cxa_guard_release((__int64)&GameData_21a6190);
        v49 = f_.v85;
        v48 = f_.v91;
        v50 = f_.v97;
      }
    }
    v56 = COERCE_AS(float32x4_t, GameData_21a6180);
    if (a3 > 6) {
      goto LABEL_34;
    }
    if (((1 << a3) & 6) == 0) {
      v48 = v49;
      if (((1 << a3) & 0x18) == 0) {
        if (((1 << a3) & 0x60) == 0) {
        LABEL_34:
          *a7 = v56;
          LANES128(a7[1]).n128_u8[0] = 1;
          return;
        }
        v48 = v50;
      }
    }
    v56 = v48;
    LANES128(v56).n128_u32[3] = 0;
    if (((1 << a3) & 0x54) != 0) {
      v56 = vnegq_f32(v56);
      LANES128(v56).n128_u32[3] = 0;
    }
    goto LABEL_34;
  }
  if (a2 >= 2) {
    if (a2 == 3 && (_WORD)a3 == 0) {
      a7[4] = *a5;
    LABEL_64:
      LANES128(a7[5]).n128_u8[0] = 1;
    LABEL_65:
      if (a2 == 3) {
        LANES128(a7[6]).n128_u8[0] = (a3 & 0xFFFF0000) != 0;
      }
      return;
    }
    f_.v86 = v48;
    f_.v92 = v50;
    f_.v82 = v49;
    math_Mtx43_MakeRotation((void*)(&f_.v107), a5);
    f_.v103[0] = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(f_.v86, LANES128(f_.v107).n128_f32[0]), f_.v82,
            COERCE_AS(float32x2_t, LANES128(f_.v107).n128_u64[0]), 1),
        f_.v92, f_.v107, 2);
    f_.v103[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(f_.v86, LANES128(f_.v108).n128_f32[0]), f_.v82,
            COERCE_AS(float32x2_t, LANES128(f_.v108).n128_u64[0]), 1),
        f_.v92, f_.v108, 2);
    f_.v104 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(f_.v86, LANES128(f_.v109).n128_f32[0]), f_.v82,
            COERCE_AS(float32x2_t, LANES128(f_.v109).n128_u64[0]), 1),
        f_.v92, f_.v109, 2);
    f_.v105 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(f_.v86, LANES128(f_.v110).n128_f32[0]), f_.v82,
                COERCE_AS(float32x2_t, LANES128(f_.v110).n128_u64[0]), 1),
            f_.v92, f_.v110, 2),
        COERCE_AS(float32x4_t, 0));
    Quat_624bc0((void*)(&f_.v98), (__int64)f_.v103);
    v57 = vmuls_lane_f32(LANES128(f_.v98).n128_f32[1], f_.v98, 2);
    v58 =
        vmuls_lane_f32(LANES128(f_.v98).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(f_.v98).n128_u64[0]), 1);
    v59 = GameRoutine_1a09ff0(
        (float)(v57 + (float)(LANES128(f_.v98).n128_f32[0] *
                              LANES128(f_.v98).n128_f32[3])) +
            (float)(v57 + (float)(LANES128(f_.v98).n128_f32[0] *
                                  LANES128(f_.v98).n128_f32[3])),
        (LANES128_OF(vmulq_f32(f_.v98, f_.v98)).n128_f32[0] + v58) *
                -0x1.0000000000000p+1 +
            0x1.0000000000000p+0);
    *(float*)&v59 = *(double*)&v59;
    f_.v93 = LODWORD(v59);
    *((_QWORD*)&v62 + 1) = LANES128(f_.v98).n128_u64[1];
    v60 = vmuls_lane_f32(-LANES128(f_.v98).n128_f32[0], f_.v98, 2) +
          (float)(LANES128(f_.v98).n128_f32[1] * LANES128(f_.v98).n128_f32[3]);
    *(_QWORD*)&v61 = -0x1.0000000000000p+0;
    *(double*)&v62 = v60 + v60;
    if (*(double*)&v62 > 0x1.0000000000000p+0) {
      *(double*)&v62 = 0x1.0000000000000p+0;
    }
    if (*(double*)&v62 < -0x1.0000000000000p+0) {
      *(double*)&v62 = -0x1.0000000000000p+0;
    }
    v63 = GameRoutine_1a0a000(v62, v61);
    *(float*)&v63 = *(double*)&v63;
    f_.v87 = LODWORD(v63);
    *(float*)&v63 =
        vmuls_lane_f32(LANES128(f_.v98).n128_f32[0],
                       COERCE_AS(float32x2_t, LANES128(f_.v98).n128_u64[0]), 1);
    v64 = GameRoutine_1a09ff0(
        (float)(*(float*)&v63 + (float)(LANES128(f_.v98).n128_f32[2] *
                                        LANES128(f_.v98).n128_f32[3])) +
            (float)(*(float*)&v63 + (float)(LANES128(f_.v98).n128_f32[2] *
                                            LANES128(f_.v98).n128_f32[3])),
        (v58 + vmuls_lane_f32(LANES128(f_.v98).n128_f32[2], f_.v98, 2)) *
                -0x1.0000000000000p+1 +
            0x1.0000000000000p+0);
    *(float*)&v64 = *(double*)&v64;
    LANES128(v55).n128_u64[0] = __PAIR64__(f_.v87, f_.v93);
    LANES128(v55).n128_u64[1] = LODWORD(v64);
  LABEL_63:
    a7[4] = v55;
    goto LABEL_64;
  }
}

#pragma GCC visibility pop
