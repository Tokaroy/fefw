#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 game_14a3920(__int64 result);
__int64 game_zview_cf22c0(__int64, __int64, char);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a83150;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6120;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212eda8[10];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_singleton_f56f40(float32x4_t* a1);

__int64 game_singleton_f56f40(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  float32x4_t v7;
  int v8;
  float32x4_t v9;
  float v10;
  float32x4_t v11;
  unsigned __int64 v12;
  __int64 v13;
  __int128 v14;
  float32x4_t v15;
  __int64 v16;
  float v17;
  unsigned __int64 v18;
  __int64 v19;
  float32x4_t v20;
  int8x16_t v21;
  __int64 v22;
  __int64 v23;
  float32x4_t v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  float v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float v33;
  int8x16_t v34;
  float v35;
  float v36;
  float32x4_t v37;
  __int64* v38;
  _DWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64* v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float32x4_t v61;
  float32x4_t v62;
  int8x16_t v63;
  _DWORD* v64;
  unsigned __int8 explicit;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64* v69;
  unsigned int v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  float32x4_t v77;
  unsigned int i;
  float32x4_t* v79;
  __int64 result;
  __int64 v81;
  unsigned int v82;
  float32x4_t v83;
  unsigned int j;
  float32x4_t* v85;
  __int64 v86;
  __int64 v87;
  struct {
    union {
      float32x4_t v88;
      struct {
        char pad4_v89_[4];
        unsigned int v89;
      };
    };
    union {
      unsigned __int64 v90;
      float32x4_t v91;
    };
    char gap32_[24];
    __int64 v92[3];
    unsigned __int64 v93;
    __int64 v94;
    char* v95;
    int v96;
    char gap108_[4];
    __int128 v97;
    __int128 v98;
    __int64 v99;
    __int64 v100;
  } f_;

  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v70 = COERCE_AS(__typeof__(v70),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = LANES128(a1[17]).n128_u64[1];
  f_.v89 = DWORDn(v1, sizeof(v1) / 4 - 1);
  DWORDn(v1, sizeof(v1) / 4 - 1) = LANES128(a1[10]).n128_u32[2];
  f_.v90 = v1;
  v3 = *GameData_212eba8[0];
  f_.v92[0] = *(_QWORD*)(*(_QWORD*)(*GameData_212eda8[0] + 8) + 280LL);
  game_d74a00((void*)((__int64)&f_.v93), (float*)f_.v92),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v70 = COERCE_AS(__typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = game_zview_cf22c0(v3, (__int64)&f_.v93, 1),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v70 = COERCE_AS(__typeof__(v70),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v4 == 0) {
    LANES128(v15).n128_u64[0] = f_.v90;
    v8 = 0;
    v9 = (__typeof__(v9)){0};
    LANES128(v15).n128_u64[1] = f_.v89;
    v11 = vaddq_f32(v15, COERCE_AS(float32x4_t, GameData_1a83150));
    v10 = 0x1.0000000000000p+4f;
    goto LABEL_29;
  }
  v5 = LANES128(a1[20]).n128_u8[1];
  {
    __typeof__(v6) z_ = (__typeof__(v6)){0};
    LODWORD(z_) = 0;
    v6 = z_;
  }
  *((float*)&v6 + 1) = *(float*)(v4 + 548) + 0x1.99999a0000000p-3f;
  v7 = *(float32x4_t*)(*(_QWORD*)(v4 + 16) + 560LL);
  v8 = 1;
  LANES128(a1[30]).n128_u8[0] = 0;
  v9 = vaddq_f32(v7, COERCE_AS(float32x4_t, v6));
  v10 = 0x1.99999a0000000p-4f;
  v11 = v9;
  LANES128(v11).n128_u32[3] = 0;
  if (v5 == 1 && (LANES128(a1[20]).n128_u8[0] & 1) != 0) {
    if (*(_QWORD*)GameData_212d310 == 0 ||
        *(_BYTE*)(*(_QWORD*)GameData_212d310 + 14LL) == 1) {
      f_.v88 = v9;
      f_.v91 = v11;
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_16;
      }
      v12 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
        v13 = v4;
        (*(void (**)(__int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v4 = v13;
      }
      else {
        v14 = *(_OWORD*)(v12 + 208);
      }
      if (*((float*)&v14 + 3) == 0x1.0000000000000p+0f) {
        v16 = v4;
        (*(void (**)(__int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v4 = v16;
        if (v17 == 0x1.0000000000000p+0f) {
          v8 = 1;
        LABEL_27:
          v10 = 0x1.99999a0000000p-4f;
          v9 = f_.v88;
          v11 = f_.v91;
          goto LABEL_29;
        }
      }
      v9 = f_.v88;
      v11 = f_.v91;
      if (game_ProcFadeView_instance_ == 0 ||
          *(float*)((v18 = game_ProcFadeView_instance_ +
                           ((unsigned __int64)*(
                                unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
                            << 6)) +
                    172) == *(float*)(v18 + 168)) {
      LABEL_16:
        v19 = *(_QWORD*)GameData_212dc38[0];
        if (*(_QWORD*)GameData_212dc38[0] == 0 || *(_BYTE*)(v19 + 816) != 1 ||
            (*(_BYTE*)(v19 + 936) & 1) == 0) {
          if (LANES128(a1[29]).n128_u8[0] != 1 ||
              (v20 = vsubq_f32(v9, a1[28]), v21 = vmulq_f32(v20, v20),
               LANES128(v21).n128_u64[0] =
                   LANES64_OF(
                       vadd_f32(
                           COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                       .n64_u64[0],
               LANES64_OF(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                       .n64_f32[0] > 0x1.0000000000000p-23f)) {
            v22 = v4;
            strcpy((char*)f_.v92, ",SE_SYS_Select_ZoomView");
            snd_Fade_Fade_10c830((__int64)&f_.v93, 0x0.0p+0f),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v70 =
                    COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            snd_play_ff2d0((__int64)f_.v92 + 1, (__int64)f_.v92 + 1,
                           (__int64)&f_.v93, 0, 0x10001u, 0, 0x0.0p+0f,
                           0x1.0000000000000p+0f),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v70 =
                    COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            snd_Fade_Destroy_Fade(&f_.v93),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v70 =
                    COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((f_.v92[0] & 1) != 0 && f_.v92[2] != 0) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, f_.v92[2]),
                  v43 = COERCE_AS(
                      __typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v70 = COERCE_AS(
                      __typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v8 = 1;
            v4 = v22;
            goto LABEL_27;
          }
        }
      }
    }
    v8 = 1;
    v10 = 0x1.99999a0000000p-4f;
  }
LABEL_29:
  if (LANES128(a1[29]).n128_u8[0] == v8) {
    if (LANES128(a1[29]).n128_u8[0] != 0) {
      LANES128(a1[28]).n128_u64[0] = LANES128(v9).n128_u64[0];
      v24 = a1[28];
      LANES128(v24).n128_u64[1] = LANES128(v9).n128_u32[2];
      a1[28] = v24;
      if ((LANES128(a1[30]).n128_u8[0] & 1) != 0) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
  }
  else {
    if (LANES128(a1[29]).n128_u8[0] == 0) {
      a1[28] = v9;
      LANES128(a1[29]).n128_u8[0] = 1;
      if ((LANES128(a1[30]).n128_u8[0] & 1) != 0) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
    LANES128(a1[29]).n128_u8[0] = 0;
  }
  if ((LANES128(a1[30]).n128_u8[0] & 1) != 0) {
  LABEL_41:
    LANES128(a1[27]).n128_u64[0] = LANES128(v11).n128_u64[0];
    v37 = a1[27];
    LANES128(v37).n128_u64[1] = LANES128(v11).n128_u32[2];
    a1[27] = v37;
    goto LABEL_42;
  }
LABEL_36:
  if ((LANES128(a1[30]).n128_u8[1] & 1) != 0) {
    goto LABEL_41;
  }
  v25 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          160LL) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
  v26 = a1[27];
  v27 = vsubq_f32(v11, v26);
  v28 = vmulq_f32(v27, v27);
  LANES128(v28).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
  v29 = v25 * (float)(0x1.4000000000000p+3f *
                      LANES64_OF(vsqrt_f32(COERCE_AS(
                                     float32x2_t, LANES128(v28).n128_u64[0])))
                          .n64_f32[0]);
  v30 = vrsqrteq_f32(v28);
  v31 = vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(v28, v30)));
  v32 = vmulq_f32(v27, vmulq_f32(v31, vrsqrtsq_f32(v31, vmulq_f32(v28, v31))));
  {
    __typeof__(v33) z_ = (__typeof__(v33)){0};
    LODWORD(z_) = DWORDn(LANES128(a1[27]).n128_u64[0],
                         sizeof(LANES128(a1[27]).n128_u64[0]) / 4 - 1);
    v33 = z_;
  }
  v34 = vbicq_s8(v32, vceqzq_f32(v28));
  v35 = fabsf(v29 * fabsf(LANES128(v34).n128_f32[0]));
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v26, v11))).n64_u8[0] & 1) == 0) {
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v11, v26))).n64_u8[0] & 1) == 0) {
      {
        __typeof__(v36) z_ = (__typeof__(v36)){0};
        LODWORD(z_) = *(_DWORD*)&(a1[27]);
        v36 = z_;
      }
      goto LABEL_57;
    }
    v36 = LANES128(v26).n128_f32[0] + v35;
    if ((float)(LANES128(v26).n128_f32[0] + v35) <= LANES128(v11).n128_f32[0]) {
      goto LABEL_57;
    }
  LABEL_55:
    v36 = LANES128(v11).n128_f32[0];
    goto LABEL_57;
  }
  v36 = LANES128(v26).n128_f32[0] - v35;
  if ((float)(LANES128(v26).n128_f32[0] - v35) < LANES128(v11).n128_f32[0]) {
    goto LABEL_55;
  }
LABEL_57:
  LANES128(v26).n128_u32[0] = LANES128(a1[27]).n128_u64[1];
  v47 = fabsf(v29 * fabsf(LANES128(v34).n128_f32[1]));
  if (v33 > LANES128(v11).n128_f32[1]) {
    v33 = v33 - v47;
    if (v33 >= LANES128(v11).n128_f32[1]) {
      goto LABEL_63;
    }
  LABEL_62:
    v33 = LANES128(v11).n128_f32[1];
    goto LABEL_63;
  }
  if (v33 < LANES128(v11).n128_f32[1]) {
    v33 = v33 + v47;
    if (v33 > LANES128(v11).n128_f32[1]) {
      goto LABEL_62;
    }
  }
LABEL_63:
  v48 = fabsf(v29 * fabsf(LANES128(v34).n128_f32[2]));
  if (LANES128(v26).n128_f32[2] > LANES128(v11).n128_f32[2]) {
    LANES128(v26).n128_f32[0] = LANES128(v26).n128_f32[2] - v48;
    if ((float)(LANES128(v26).n128_f32[2] - v48) >= LANES128(v11).n128_f32[2]) {
      goto LABEL_69;
    }
  LABEL_68:
    LANES128(v26).n128_u32[0] = LANES128(v11).n128_u32[2];
    goto LABEL_69;
  }
  if (LANES128(v26).n128_f32[2] < LANES128(v11).n128_f32[2]) {
    LANES128(v26).n128_f32[0] = LANES128(v26).n128_f32[2] + v48;
    if ((float)(LANES128(v26).n128_f32[2] + v48) > LANES128(v11).n128_f32[2]) {
      goto LABEL_68;
    }
  }
LABEL_69:
  LANES128(a1[27]).n128_f32[0] = v36;
  LANES128(a1[27]).n128_f32[1] = v33;
  v49 = v10 * v25;
  v50 = a1[27];
  LANES128(v51).n128_u64[0] = LANES128(a1[27]).n128_u64[0];
  LANES128(v51).n128_u64[1] = LANES128(v26).n128_u32[0];
  v52 = vsubq_f32(v11, v51);
  a1[27] = v51;
  v53 = vmulq_f32(v52, v52);
  LANES128(v53).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
          .n64_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
          .n64_u64[0];
  LANES128(v53).n128_u64[1] = LANES128(v53).n128_u64[0];
  v54 = vrsqrteq_f32(v53);
  v55 = vmulq_f32(v54, vrsqrtsq_f32(v54, vmulq_f32(v53, v54)));
  v56 = vbicq_s8(
      vmulq_f32(v52, vmulq_f32(v55, vrsqrtsq_f32(v55, vmulq_f32(v53, v55)))),
      vceqzq_f32(v53));
  v57 = fabsf(v49 * fabsf(LANES128(v56).n128_f32[0]));
  v58 = LANES128(v50).n128_f32[1];
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v50, v11))).n64_u8[0] & 1) != 0) {
    LANES128(v50).n128_f32[0] = LANES128(v50).n128_f32[0] - v57;
    if (LANES128(v50).n128_f32[0] >= LANES128(v11).n128_f32[0]) {
      goto LABEL_75;
    }
  LABEL_74:
    LANES128(v50).n128_u32[0] = LANES128(v11).n128_u32[0];
    goto LABEL_75;
  }
  if ((LANES64_OF(vmovn_s32(vcgtq_f32(v11, v50))).n64_u8[0] & 1) != 0) {
    LANES128(v50).n128_f32[0] = LANES128(v50).n128_f32[0] + v57;
    if (LANES128(v50).n128_f32[0] > LANES128(v11).n128_f32[0]) {
      goto LABEL_74;
    }
  }
LABEL_75:
  v59 = fabsf(v49 * fabsf(LANES128(v56).n128_f32[1]));
  if (LANES128(v50).n128_f32[1] > LANES128(v11).n128_f32[1]) {
    v58 = LANES128(v50).n128_f32[1] - v59;
    if ((float)(LANES128(v50).n128_f32[1] - v59) >= LANES128(v11).n128_f32[1]) {
      goto LABEL_81;
    }
  LABEL_80:
    v58 = LANES128(v11).n128_f32[1];
    goto LABEL_81;
  }
  if (LANES128(v50).n128_f32[1] < LANES128(v11).n128_f32[1]) {
    v58 = LANES128(v50).n128_f32[1] + v59;
    if ((float)(LANES128(v50).n128_f32[1] + v59) > LANES128(v11).n128_f32[1]) {
      goto LABEL_80;
    }
  }
LABEL_81:
  v60 = fabsf(v49 * fabsf(LANES128(v56).n128_f32[2]));
  if (LANES128(v26).n128_f32[0] > LANES128(v11).n128_f32[2]) {
    LANES128(v26).n128_f32[0] = LANES128(v26).n128_f32[0] - v60;
    if (LANES128(v26).n128_f32[0] >= LANES128(v11).n128_f32[2]) {
      goto LABEL_87;
    }
  }
  else if (LANES128(v26).n128_f32[0] >= LANES128(v11).n128_f32[2] ||
           (LANES128(v26).n128_f32[0] = LANES128(v26).n128_f32[0] + v60,
            LANES128(v26).n128_f32[0] <= LANES128(v11).n128_f32[2])) {
  LABEL_87:
    LANES128(a1[27]).n128_u32[0] = LANES128(v50).n128_u32[0];
    LANES128(a1[27]).n128_f32[1] = v58;
    v61 = a1[27];
    LANES128(v61).n128_u64[1] = LANES128(v26).n128_u32[0];
    a1[27] = v61;
    if (v4 == 0) {
      v62 = vsubq_f32(v61, v11);
      v63 = vmulq_f32(v62, v62);
      LANES128(v63).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
              .n64_f32[0] < 0x1.0000000000000p-23f) {
      LABEL_42:
        v38 = (__int64*)&a1[24];
        LANES128(a1[30]).n128_u8[0] = 1;
        if (LANES128(a1[20]).n128_u8[1] == 1 &&
            (LANES128(a1[20]).n128_u8[0] & 1) != 0) {
          GameRoutine_14a1390((__int64*)&a1[25], 1),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v39 = (_DWORD*)LANES128(a1[24]).n128_u64[0];
          if (*(_QWORD*)v39 != 0 &&
              *(_DWORD*)(*(_QWORD*)v39 + 16LL) == v39[2]) {
            goto LABEL_107;
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
            v86 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v86;
            __cxa_guard_release((__int64)&GameData_21a6130),
                v43 =
                    COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v70 =
                    COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          f_.v93 = 0;
          f_.v94 = 0;
          v40 = (_QWORD*)*eft_g_effectSystem_ptr[0];
          f_.v96 = 6;
          f_.v97 = GameData_21a6120;
          f_.v98 = GameData_1a837f0;
          v41 = *((_QWORD*)GameData_212c540 + 1);
          f_.v99 = *(_QWORD*)GameData_212c540;
          f_.v100 = v41;
          f_.v95 = "UI_Base_Arrow_0";
          v42 = Manager_bc6460(v40, (__int64)&f_.v93, 1),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_14a10d0(&f_.v93, (__int64)v42, v43,
                              (__int64)&GameData_1a9f09e),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v44 = f_.v93;
          v45 = f_.v94;
          if (f_.v94 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v94 + 8), 1u,
                                      memory_order_relaxed);
          }
          v46 = LANES128(a1[24]).n128_i64[1];
          LANES128(a1[24]).n128_u64[0] = v44;
          LANES128(a1[24]).n128_u64[1] = v45;
          if (v46 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
                  v43 = COERCE_AS(
                      __typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v70 = COERCE_AS(
                      __typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              std___1___shared_weak_count___release_weak(v46),
                  v43 = COERCE_AS(
                      __typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v70 = COERCE_AS(
                      __typeof__(v70),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v45 = LANES128(a1[24]).n128_i64[1];
          }
          goto LABEL_100;
        }
      LABEL_106:
        GameRoutine_14a1390(v38, 1),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_14a1390((__int64*)&a1[25], 1),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_107;
      }
    }
    v38 = (__int64*)&a1[24];
    if (LANES128(a1[20]).n128_u8[1] != 1 ||
        (LANES128(a1[20]).n128_u8[0] & 1) == 0) {
      goto LABEL_106;
    }
    GameRoutine_14a1390((__int64*)&a1[24], 1),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v64 = (_DWORD*)LANES128(a1[25]).n128_u64[0];
    if (*(_QWORD*)v64 != 0 && *(_DWORD*)(*(_QWORD*)v64 + 16LL) == v64[2]) {
      goto LABEL_107;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire);
    v66 = GameData_212c540;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v87 = v66[1];
      *(_QWORD*)&GameData_21a6120 = *v66;
      *((_QWORD*)&GameData_21a6120 + 1) = v87;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    f_.v93 = 0;
    f_.v94 = 0;
    v67 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    f_.v96 = 6;
    f_.v97 = GameData_21a6120;
    v68 = v66[1];
    f_.v99 = *v66;
    f_.v100 = v68;
    f_.v98 = GameData_1a837f0;
    f_.v95 = "UI_Base_Arrow_1";
    v69 = Manager_bc6460(v67, (__int64)&f_.v93, 1),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v70 = COERCE_AS(__typeof__(v70),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_14a10d0(&f_.v93, (__int64)v69, v70, (__int64)&GameData_1a9f09e),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v70 = COERCE_AS(__typeof__(v70),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v71 = f_.v93;
    v45 = f_.v94;
    if (f_.v94 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v94 + 8), 1u,
                                memory_order_relaxed);
    }
    v72 = LANES128(a1[25]).n128_i64[1];
    LANES128(a1[25]).n128_u64[0] = v71;
    LANES128(a1[25]).n128_u64[1] = v45;
    if (v72 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v72),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v45 = LANES128(a1[25]).n128_i64[1];
    }
  LABEL_100:
    if (v45 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v45),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v70 = COERCE_AS(__typeof__(v70),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v73 = f_.v94;
    if (f_.v94 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v94 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v73),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_107:
    v74 = *v38;
    v75 = *(_QWORD*)*v38;
    if (v75 != 0 && *(_DWORD*)(v75 + 16) == *(_DWORD*)(v74 + 8)) {
      v76 = *(_DWORD*)(v75 + 36);
      if (v76 != 0) {
        v77 = a1[27];
        for (i = 0; i < v76; ++i) {
          if ((int)v76 > (int)i) {
            v79 = *(float32x4_t**)(v75 + 40 + 8LL * (int)i);
            if (v79 != nullptr) {
              v79[1] = v77;
              LANES128(v79[8]).n128_u8[0] = 1;
              v76 = *(_DWORD*)(v75 + 36);
            }
          }
        }
      }
      game_14a3920(v74),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v70 = COERCE_AS(__typeof__(v70),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    result = LANES128(a1[25]).n128_i64[0];
    v81 = *(_QWORD*)result;
    if (*(_QWORD*)result != 0 &&
        *(_DWORD*)(v81 + 16) == *(_DWORD*)(result + 8)) {
      v82 = *(_DWORD*)(v81 + 36);
      if (v82 != 0) {
        v83 = a1[27];
        for (j = 0; j < v82; ++j) {
          if ((int)v82 > (int)j) {
            v85 = *(float32x4_t**)(v81 + 40 + 8LL * (int)j);
            if (v85 != nullptr) {
              v85[1] = v83;
              LANES128(v85[8]).n128_u8[0] = 1;
              v82 = *(_DWORD*)(v81 + 36);
            }
          }
        }
      }
      return game_14a3920(result);
    }
    return result;
  }
  LANES128(v26).n128_u32[0] = LANES128(v11).n128_u32[2];
  goto LABEL_87;
}

#pragma GCC visibility pop
