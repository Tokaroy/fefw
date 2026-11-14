#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int128 GameData_1a82af0;
extern __int64 GameData_2203490;
extern __int64 game_script_hub_g_frame_counter;
float atan2f(float, float);
float fmodf(float, float);
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_cmdbtl_e7b880(__int64 a1);
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220[])();
extern __int64 (*game_menu_UnitTroopSequence_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_17869d0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_18fe900(_QWORD* a1);
void game_cmdbtl_18fe9e0(_QWORD* a1);

void game_cmdbtl_e7b880(__int64 a1)
{
  float v1;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  __int64 v6;
  __int64 v7;
  float32x4_t* v8;
  _BOOL4 v9;
  __int64 v10;
  float32x4_t* v11;
  __int64 v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int128 v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float v48;
  float v49;
  float v50;
  __int128 v51;
  float v52;
  float v53;
  __int128 v54;
  float32x4_t v55;

  v1 = *(float*)(a1 + 132);
  v3 = *(_QWORD*)(a1 + 304);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(float32x4_t**)(a1 + 296);
    }
    else {
      v5 = nullptr;
    }
    v6 = *(_QWORD*)(a1 + 336);
    if (v6 != 0) {
      goto LABEL_6;
    }
  LABEL_10:
    v8 = nullptr;
    v7 = 0;
    goto LABEL_11;
  }
  v5 = nullptr;
  v4 = 0;
  v6 = *(_QWORD*)(a1 + 336);
  if (v6 == 0) {
    goto LABEL_10;
  }
LABEL_6:
  v7 = std___1___shared_weak_count_lock(v6);
  if (v7 != 0) {
    v8 = *(float32x4_t**)(a1 + 328);
  }
  else {
    v8 = nullptr;
  }
LABEL_11:
  if ((*(_BYTE*)(GameData_2203490 + 1204) & 8) == 0 &&
      (*(_BYTE*)(a1 + 184) & 1) != 0) {
    v9 = v5 != nullptr;
    if (v5 == nullptr) {
      v14 = (__typeof__(v14)){0};
      goto LABEL_34;
    }
    v10 = LANES128(v5[13]).n128_i64[0];
    if (v10 != 0) {
      v11 = (float32x4_t*)(*(_QWORD*)(v10 + 8) + 304LL);
      v12 = *(_QWORD*)(a1 + 208);
      if (v12 != 0) {
      LABEL_16:
        v13 = (float32x4_t*)(*(_QWORD*)(v12 + 8) + 304LL);
      LABEL_28:
        v1 = 0x0.0p+0f;
        v15 = vsubq_f32(*v11, *v13);
        LANES128(v15).n128_u32[1] = 0;
        v16 = vmulq_f32(v15, v15);
        LANES128(v16).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                .n64_u64[0];
        LANES128(v16).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v16).n128_f32[0] > 0x0.0p+0f) {
          LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
          v17 = vrsqrteq_f32(v16);
          v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v16, v17)));
          v19 = vbicq_s8(
              vmulq_f32(v15,
                        vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v16, v18)))),
              vceqzq_f32(v16));
          v20 = atan2f(LANES128(v19).n128_f32[0], LANES128(v19).n128_f32[2]);
          v10 = LANES128(v5[13]).n128_i64[0];
          v1 = v20 * 0x1.ca5dc20000000p+5f;
        }
        if (v10 != 0 &&
            (v21 = CharacterBuilder_1084a50(v10, "-Jnt_C_Head")) != 0) {
          v14 = *(float32x4_t*)(v21 + 48);
        }
        else {
          v14 = vaddq_f32(v5[7], COERCE_AS(float32x4_t, GameData_1a82af0));
        }
      LABEL_34:
        if (v8 == nullptr) {
          goto LABEL_42;
        }
        v22 = LANES128(v8[13]).n128_i64[0];
        if (v22 != 0 &&
            (v23 = CharacterBuilder_1084a50(v22, "-Jnt_C_Head")) != 0) {
          v14 = *(float32x4_t*)(v23 + 48);
          if (v5 == nullptr) {
            goto LABEL_41;
          }
        }
        else {
          v14 = vaddq_f32(v8[7], COERCE_AS(float32x4_t, GameData_1a82af0));
          if (v5 == nullptr) {
          LABEL_41:
            v9 = true;
            goto LABEL_42;
          }
        }
        LANES128(v14).n128_u32[3] = 0;
        goto LABEL_41;
      }
    }
    else {
      v11 = v5 + 7;
      v12 = *(_QWORD*)(a1 + 208);
      if (v12 != 0) {
        goto LABEL_16;
      }
    }
    v13 = (float32x4_t*)(a1 + 112);
    goto LABEL_28;
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v14 = (__typeof__(v14)){0};
    if (v7 != 0) {
      goto LABEL_20;
    }
  LABEL_25:
    v4 = 0;
    v9 = false;
    goto LABEL_42;
  }
  v14 = (__typeof__(v14)){0};
  if (v7 == 0) {
    goto LABEL_25;
  }
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    v14 = (__typeof__(v14)){0};
  }
  v4 = 0;
  v7 = 0;
  v9 = false;
LABEL_42:
  v24 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    goto LABEL_62;
  }
  v55 = v14;
  v25 = fmodf(v1 - *(float*)(a1 + 32), 0x1.6800000000000p+8f);
  v26 = *(float*)(a1 + 32);
  if (v25 >= 0x0.0p+0f) {
    v27 = v25 + 0x0.0p+0f;
  }
  else {
    v27 = (float)(v25 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
  }
  if (v27 > 0x1.6800000000000p+7f) {
    v27 = v27 + -0x1.6800000000000p+8f;
  }
  v28 = v24 * (float)((float)(fabsf(v27) * 0x1.0000000000000p+2f) +
                      0x1.4000000000000p+3f);
  v29 = fmodf(v1 - v26, 0x1.6800000000000p+8f);
  if (v29 >= 0x0.0p+0f) {
    v30 = v29 + 0x0.0p+0f;
  }
  else {
    v30 = (float)(v29 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
  }
  if (v30 > 0x1.6800000000000p+7f) {
    v30 = v30 + -0x1.6800000000000p+8f;
  }
  v31 = fabsf(v28);
  v32 = v26 + v30;
  if (v26 <= v32) {
    if (v26 >= v32) {
      goto LABEL_59;
    }
    v26 = v26 + v31;
    if (v26 <= v32) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v26 = v26 - v31;
  if (v26 < v32) {
  LABEL_58:
    v26 = v32;
  }
LABEL_59:
  v33 = fmodf(v26 + 0x1.6800000000000p+7f, 0x1.6800000000000p+8f);
  v14 = v55;
  v34 = v33 + -0x1.6800000000000p+7f;
  if (v34 >= -0x1.6800000000000p+7f) {
    v1 = v34;
  }
  else {
    v1 = v34 + 0x1.6800000000000p+8f;
  }
LABEL_62:
  v35 = *(_QWORD*)(a1 + 208);
  *(float*)(a1 + 32) = v1;
  v36 = *(_QWORD*)(v35 + 112);
  if (v36 != 0) {
    v37 = *(unsigned __int8*)(a1 + 80);
    if (v9) {
      if ((v37 & 1) != 0) {
        if (*(_BYTE*)(a1 + 64) != 0) {
          *(_QWORD*)(a1 + 48) = LANES128(v14).n128_u64[0];
          v38 = *(_OWORD*)(a1 + 48);
          *((_QWORD*)&v38 + 1) = LANES128(v14).n128_u32[2];
          *(_OWORD*)(a1 + 48) = v38;
          goto LABEL_74;
        }
      LABEL_73:
        *(float32x4_t*)(a1 + 48) = v14;
        *(_BYTE*)(a1 + 64) = 1;
      LABEL_74:
        *(_QWORD*)(v36 + 156) = 0x3F8000003F800000LL;
        *(_DWORD*)(v36 + 164) = 1065353216;
        if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
        LABEL_75:
          *(_DWORD*)(v36 + 128) = *(_DWORD*)(a1 + 48);
          *(_DWORD*)(v36 + 132) = *(_DWORD*)(a1 + 52);
          v51 = *(_OWORD*)(v36 + 128);
          *((_QWORD*)&v51 + 1) = *(unsigned int*)(a1 + 56);
          *(_OWORD*)(v36 + 128) = v51;
          goto LABEL_76;
        }
      LABEL_101:
        GameRoutine_8123d0();
      }
      if ((*(_BYTE*)(a1 + 64) & 1) == 0) {
        goto LABEL_73;
      }
      v39 = *(float32x4_t*)(a1 + 48);
      v40 = vsubq_f32(v39, v14);
      v41 = vmulq_f32(v40, v40);
      LANES128(v41).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
              .n64_u64[0];
      v42 = vsubq_f32(v14, v39);
      v43 = vmulq_f32(v42, v42);
      v44 =
          v24 *
          (float)((float)(LANES64_OF(vsqrt_f32(vpadd_f32(
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v41).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v41).n128_u64[0]))))
                              .n64_f32[0] *
                          0x1.0000000000000p+2f) +
                  0x1.0000000000000p+0f);
      LANES128(v43).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
              .n64_u64[0];
      LANES128(v43).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
              .n64_u64[0];
      LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
      v45 = vrsqrteq_f32(v43);
      v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v43, v45)));
      v47 = vbicq_s8(
          vmulq_f32(v42,
                    vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v43, v46)))),
          vceqzq_f32(v43));
      v48 = fabsf(v44 * fabsf(LANES128(v47).n128_f32[0]));
      LODWORD(v49) = HIDWORD(*(_QWORD*)(a1 + 48));
      if ((LANES64_OF(vmovn_s32(vcgtq_f32(v39, v14))).n64_u8[0] & 1) != 0) {
        v50 = LANES128(v39).n128_f32[0] - v48;
        if (v50 >= LANES128(v14).n128_f32[0]) {
        LABEL_88:
          LANES128(v39).n128_u32[0] = *(_QWORD*)(a1 + 56);
          v52 = fabsf(v44 * fabsf(LANES128(v47).n128_f32[1]));
          if (v49 <= LANES128(v14).n128_f32[1]) {
            if (v49 >= LANES128(v14).n128_f32[1] ||
                (v49 = v49 + v52) <= LANES128(v14).n128_f32[1]) {
            LABEL_94:
              v53 = fabsf(v44 * fabsf(LANES128(v47).n128_f32[2]));
              if (LANES128(v39).n128_f32[2] <= LANES128(v14).n128_f32[2]) {
                if (LANES128(v39).n128_f32[2] >= LANES128(v14).n128_f32[2] ||
                    (LANES128(v39).n128_f32[0] =
                         LANES128(v39).n128_f32[2] + v53,
                     (float)(LANES128(v39).n128_f32[2] + v53) <=
                         LANES128(v14).n128_f32[2])) {
                LABEL_100:
                  *(float*)(a1 + 48) = v50;
                  *(float*)(a1 + 52) = v49;
                  v54 = *(_OWORD*)(a1 + 48);
                  *((_QWORD*)&v54 + 1) = LANES128(v39).n128_u32[0];
                  *(_OWORD*)(a1 + 48) = v54;
                  *(_DWORD*)(v36 + 160) = 1065353216;
                  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
                    goto LABEL_75;
                  }
                  goto LABEL_101;
                }
              }
              else {
                LANES128(v39).n128_f32[0] = LANES128(v39).n128_f32[2] - v53;
                if ((float)(LANES128(v39).n128_f32[2] - v53) >=
                    LANES128(v14).n128_f32[2]) {
                  goto LABEL_100;
                }
              }
              LANES128(v39).n128_u32[0] = LANES128(v14).n128_u32[2];
              goto LABEL_100;
            }
          }
          else {
            v49 = v49 - v52;
            if (v49 >= LANES128(v14).n128_f32[1]) {
              goto LABEL_94;
            }
          }
          v49 = LANES128(v14).n128_f32[1];
          goto LABEL_94;
        }
      }
      else {
        if ((LANES64_OF(vmovn_s32(vcgtq_f32(v14, v39))).n64_u8[0] & 1) == 0) {
          LODWORD(v50) = *(_OWORD*)(a1 + 48);
          goto LABEL_88;
        }
        v50 = LANES128(v39).n128_f32[0] + v48;
        if (v50 <= LANES128(v14).n128_f32[0]) {
          goto LABEL_88;
        }
      }
      v50 = LANES128(v14).n128_f32[0];
      goto LABEL_88;
    }
    *(_DWORD*)(v36 + 160) = 0;
    if (v37 != 0) {
      *(_DWORD*)(v36 + 156) = 0;
      *(_DWORD*)(v36 + 164) = 1065353216;
    }
  }
LABEL_76:
  *(_BYTE*)(a1 + 80) = 0;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if (v4 == 0) {
      return;
    }
  }
  else if (v4 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
}

void game_cmdbtl_18fe900(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[64];
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
}

void game_cmdbtl_18fe9e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[64];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[59];
  *a1 = game_menu_UnitTroopSequence_vtable;
  a1[22] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c6220;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (_QWORD*)a1[56];
  if (v7 == a1 + 52) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[48];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[49] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  GameRoutine_17869d0((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, (__int64)a1);
}

#pragma GCC visibility pop
