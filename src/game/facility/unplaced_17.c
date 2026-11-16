#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (*GameData_203f410[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float Cursor_734120(int, int, float, float, float, float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_1454640(__int64 a1, __int64 a2);

void game_facility_1454640(__int64 a1, __int64 a2)
{
  float v2;
  float v3;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  int v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned int i;
  float v37;
  float v38;
  float32x4_t* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned int j;
  float v43;
  float v44;
  float* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned int k;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float32x4_t* v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t* v69;
  float32x4_t v70;
  float32x4_t v71;
  float* v72;
  float v73;
  float32x4_t v74;
  float v75;
  float32x4_t v76;
  float v77;
  struct {
    float32x4_t v78;
    float32x4_t v79;
    _QWORD v80[4];
    _QWORD* v81;
  } f_;

  v3 = *(float*)(a2 + 224);
  v2 = *(float*)(a2 + 228);
  if (v2 >= v3) {
    v11 = *(float*)(a2 + 236);
  }
  else {
    v5 = *(_DWORD*)(a2 + 244);
    v6 = *(_DWORD*)(a2 + 248);
    v7 = v2 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v3 >= v7) {
      v8 = v7;
    }
    else {
      v8 = v3;
    }
    v9 = *(float*)(a2 + 232);
    v10 = *(float*)(a2 + 236);
    *(float*)(a2 + 228) = v8;
    v11 = Cursor_734120(v5, v6, v9, v10, v8, v3);
  }
  *(float*)(a2 + 240) = v11;
  v12 = *(float*)(a2 + 324);
  v13 = *(float*)(a2 + 320);
  if (v12 >= v13) {
    v20 = *(float*)(a2 + 332);
  }
  else {
    v14 = *(_DWORD*)(a2 + 340);
    v15 = *(_DWORD*)(a2 + 344);
    v16 =
        v12 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    v17 = *(float*)(a2 + 332);
    if (v13 >= v16) {
      v18 = v16;
    }
    else {
      v18 = *(float*)(a2 + 320);
    }
    v19 = *(float*)(a2 + 328);
    *(float*)(a2 + 324) = v18;
    v20 = Cursor_734120(v14, v15, v19, v17, v18, v13);
  }
  *(float*)(a2 + 336) = v20;
  v21 = *(float*)(a2 + 420);
  v22 = *(float*)(a2 + 416);
  if (v21 >= v22) {
    v29 = *(float*)(a2 + 428);
  }
  else {
    v23 = *(_DWORD*)(a2 + 436);
    v24 = *(_DWORD*)(a2 + 440);
    v25 =
        v21 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    v26 = *(float*)(a2 + 428);
    if (v22 >= v25) {
      v27 = v25;
    }
    else {
      v27 = *(float*)(a2 + 416);
    }
    v28 = *(float*)(a2 + 424);
    *(float*)(a2 + 420) = v27;
    v29 = Cursor_734120(v23, v24, v28, v26, v27, v22);
  }
  v31 = *(float32x4_t**)(a2 + 192);
  v30 = *(float32x4_t**)(a2 + 200);
  v32 = (__typeof__(v32)){0};
  v33 = (__typeof__(v33)){0};
  *(float*)(a2 + 432) = v29;
  if (v31 != v30) {
    v34 = *(_QWORD*)(a2 + 256);
    v35 = (unsigned __int64)(*(_QWORD*)(a2 + 264) - v34) >> 6;
    i = v35 - 1;
    if ((int)v35 < 1 || (v37 = *(float*)(a2 + 224),
                         (v38 = v37 / (float)(unsigned int)v35) == 0x0.0p+0f)) {
      v33 = *v31;
    }
    else {
      if (*(float*)(a2 + 228) >= v37) {
        v62 = 0x1.0000000000000p+0f;
      }
      else {
        v61 = *(float*)(a2 + 240);
        for (i = 0; v61 >= v38; ++i) {
          v61 = v61 - v38;
        }
        v62 = v61 / v38;
      }
      v66 = (float32x4_t*)(v34 + ((unsigned __int64)i << 6));
      if ((_DWORD)v35 == 1) {
        v67 = v66[1];
        v68 = vmulq_n_f32(vsubq_f32(v66[2], v67), v62);
        LANES128(v68).n128_u32[3] = 0;
        v33 = vaddq_f32(v67, v68);
      }
      else {
        v73 = v62 * (float)(v62 * v62);
        LANES128(v74).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v74).n128_u64[1] = 0x3F0000003F000000LL;
        v33 = vmulq_f32(
            vaddq_f32(
                vaddq_f32(
                    vaddq_f32(
                        vmulq_n_f32(
                            *v66,
                            (float)-(float)(v73 -
                                            (float)((float)(v62 * v62) *
                                                    0x1.0000000000000p+1f)) -
                                v62),
                        vmulq_n_f32(
                            v66[1],
                            (float)((float)(PSEUDO_UNFUSED(
                                        (float)(v62 * v62) *
                                        -0x1.4000000000000p+2f)) +
                                    (float)(v73 * 0x1.8000000000000p+1f)) +
                                0x1.0000000000000p+1f)),
                    vmulq_n_f32(
                        v66[2],
                        v62 + (float)((float)(PSEUDO_UNFUSED(
                                          (float)(v62 * v62) *
                                          0x1.0000000000000p+2f)) +
                                      (float)(v73 * -0x1.8000000000000p+1f)))),
                vmulq_n_f32(v66[3], v73 - (float)(PSEUDO_UNFUSED(v62 * v62)))),
            v74);
      }
    }
  }
  v39 = *(float32x4_t**)(a2 + 288);
  if (v39 != *(float32x4_t**)(a2 + 296)) {
    v40 = *(_QWORD*)(a2 + 352);
    v41 = (unsigned __int64)(*(_QWORD*)(a2 + 360) - v40) >> 6;
    j = v41 - 1;
    if ((int)v41 < 1 || (v43 = *(float*)(a2 + 320),
                         (v44 = v43 / (float)(unsigned int)v41) == 0x0.0p+0f)) {
      v32 = *v39;
    }
    else {
      if (*(float*)(a2 + 324) >= v43) {
        v64 = 0x1.0000000000000p+0f;
      }
      else {
        v63 = *(float*)(a2 + 336);
        for (j = 0; v63 >= v44; ++j) {
          v63 = v63 - v44;
        }
        v64 = v63 / v44;
      }
      v69 = (float32x4_t*)(v40 + ((unsigned __int64)j << 6));
      if ((_DWORD)v41 == 1) {
        v70 = v69[1];
        v71 = vmulq_n_f32(vsubq_f32(v69[2], v70), v64);
        LANES128(v71).n128_u32[3] = 0;
        v32 = vaddq_f32(v70, v71);
      }
      else {
        v75 = v64 * (float)(v64 * v64);
        LANES128(v76).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v76).n128_u64[1] = 0x3F0000003F000000LL;
        v32 = vmulq_f32(
            vaddq_f32(
                vaddq_f32(
                    vaddq_f32(
                        vmulq_n_f32(
                            *v69,
                            (float)-(float)(v75 -
                                            (float)((float)(v64 * v64) *
                                                    0x1.0000000000000p+1f)) -
                                v64),
                        vmulq_n_f32(
                            v69[1],
                            (float)((float)(PSEUDO_UNFUSED(
                                        (float)(v64 * v64) *
                                        -0x1.4000000000000p+2f)) +
                                    (float)(v75 * 0x1.8000000000000p+1f)) +
                                0x1.0000000000000p+1f)),
                    vmulq_n_f32(
                        v69[2],
                        v64 + (float)((float)(PSEUDO_UNFUSED(
                                          (float)(v64 * v64) *
                                          0x1.0000000000000p+2f)) +
                                      (float)(v75 * -0x1.8000000000000p+1f)))),
                vmulq_n_f32(v69[3], v75 - (float)(PSEUDO_UNFUSED(v64 * v64)))),
            v76);
      }
    }
  }
  v45 = *(float**)(a2 + 384);
  f_.v78 = v33;
  f_.v79 = v32;
  if (v45 == *(float**)(a2 + 392)) {
    v51 = 0x0.0p+0f;
  }
  else {
    v46 = *(_QWORD*)(a2 + 448);
    v47 = (unsigned __int64)(*(_QWORD*)(a2 + 456) - v46) >> 4;
    k = v47 - 1;
    if ((int)v47 < 1 || (v49 = *(float*)(a2 + 416),
                         (v50 = v49 / (float)(unsigned int)v47) == 0x0.0p+0f)) {
      v51 = *v45;
    }
    else {
      if (*(float*)(a2 + 420) >= v49) {
        v65 = 0x1.0000000000000p+0f;
      }
      else {
        for (k = 0; v29 >= v50; ++k) {
          v29 = v29 - v50;
        }
        v65 = v29 / v50;
      }
      v72 = (float*)(v46 + 16LL * k);
      if ((_DWORD)v47 == 1) {
        v51 = v72[1] + (float)(PSEUDO_UNFUSED(v65 * (float)(v72[2] - v72[1])));
      }
      else {
        v77 = v65 * (float)(v65 * v65);
        v51 =
            (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                        (float)((float)((float)(PSEUDO_UNFUSED(
                                                            (float)(v65 * v65) *
                                                            -0x1.4000000000000p+2f)) +
                                                        (float)(v77 *
                                                                0x1.8000000000000p+1f)) +
                                                0x1.0000000000000p+1f) *
                                        v72[1])) +
                                    (float)((float)((float)-(
                                                        float)(v77 -
                                                               (float)((float)(v65 *
                                                                               v65) *
                                                                       0x1.0000000000000p+1f)) -
                                                    v65) *
                                            *v72)) +
                            (float)((float)(v65 +
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)(v65 * v65) *
                                                        0x1.0000000000000p+2f)) +
                                                    (float)(v77 *
                                                            -0x1.8000000000000p+1f))) *
                                    v72[2])) +
                    (float)((float)(v77 - (float)(PSEUDO_UNFUSED(v65 * v65))) *
                            v72[3])) *
            0x1.0000000000000p-1f;
      }
    }
  }
  v52 = *(_QWORD*)(a2 + 8);
  v53 = (__int64*)fw_memory_g_heap_manager_ptr;
  v54 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       64, 16, 0);
  *(float*)(v54 + 48) = v51;
  *(_QWORD*)v54 = GameData_203f410;
  *(float32x4_t*)(v54 + 16) = f_.v78;
  *(float32x4_t*)(v54 + 32) = f_.v79;
  v55 = fw_memory_HeapManager_Allocate(*v53, 64, 16, 0);
  v56 = *(_QWORD*)(v54 + 16);
  v57 = *(_QWORD*)(v54 + 24);
  *(_QWORD*)v55 = GameData_203f410;
  *(float*)(v55 + 48) = v51;
  f_.v81 = (_QWORD*)v55;
  *(_QWORD*)(v55 + 16) = v56;
  *(_QWORD*)(v55 + 24) = v57;
  v58 = *(_QWORD*)(v54 + 40);
  *(_QWORD*)(v55 + 32) = *(_QWORD*)(v54 + 32);
  *(_QWORD*)(v55 + 40) = v58;
  GameRoutine_14514d0(f_.v80, (_QWORD*)(v52 + 272));
  if (f_.v81 == f_.v80) {
    v59 = 32;
  }
  else {
    if (f_.v81 == nullptr) {
      goto LABEL_37;
    }
    v59 = 40;
  }
  (*(void (**)(__int64))(*f_.v81 + v59))((__int64)f_.v81);
LABEL_37:
  v60 = 128;
  if (*(_QWORD*)(*v53 + 200) == 0) {
    v60 = 56;
  }
  nn_mem_StandardAllocator_Free(*v53 + v60, v54);
}

#pragma GCC visibility pop
