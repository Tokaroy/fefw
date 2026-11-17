#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* fw_world_SwapCallables(_QWORD* result, _QWORD*);
__int64 GameRoutine_d23e60(_BYTE*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_world_JobContext_Drain(unsigned int*);
__int64 fw_world_JobContext_Wait(__int64 result, unsigned int);
__int64 fw_world_JobQueue_Submit(__int64, int);
__int64 game_zview_d13880(__int64, float*);
__int64 nn_os_ClearLightEvent(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd7df8[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
int __cxa_guard_acquire(__int64);
void GameRoutine_cf12a0(_QWORD*);
void GameRoutine_d23f80(__int64);
void __attribute__((noreturn)) GameRoutine_cf3740();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_zview_cf06a0(__int64 a1);

__int64 game_zview_cf06a0(__int64 a1)
{
  char* v1;
  _QWORD* v2;
  char* v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  _QWORD* v37;
  _QWORD* v38;
  float v39;
  float v40;
  __int64 v41;
  float v42;
  __int64 v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  float* v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  float v66;
  float32x4_t v67;
  float v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t* v71;
  float32x4_t v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64* v85;
  __int64 v86;
  _QWORD* v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  struct {
    _QWORD v93[4];
    _QWORD* v94;
    char gap40_[20];
    float v95;
  } v93_;

  v2 = (_QWORD*)(a1 + 32);
  v1 = *(char**)(a1 + 32);
  v5 = *(char**)(a1 + 8);
  v4 = *(char**)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 48);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = v4 - v5;
  if (v4 - v5 <= (unsigned __int64)(v6 - (_QWORD)v1)) {
    v12 = *(char**)(a1 + 40);
    if (v8 <= (unsigned __int64)(v12 - v1)) {
      if (v5 != v4) {
        do {
          v18 = *(_QWORD*)v5;
          v17 = *((_QWORD*)v5 + 1);
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
          }
          v19 = *((_QWORD*)v1 + 1);
          *(_QWORD*)v1 = v18;
          *((_QWORD*)v1 + 1) = v17;
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            std___1___shared_weak_count___release_weak(v19);
          }
          v5 += 16;
          v1 += 16;
        } while (v5 != v4);
        v12 = *(char**)(a1 + 40);
      }
      for (; v12 != v1; v12 -= 16) {
        v28 = *((_QWORD*)v12 - 1);
        if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak(v28);
        }
      }
    }
    else {
      v13 = &v5[v12 - v1];
      if (v12 != v1) {
        do {
          v15 = *(_QWORD*)v5;
          v14 = *((_QWORD*)v5 + 1);
          if (v14 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                      memory_order_relaxed);
          }
          v16 = *((_QWORD*)v1 + 1);
          *(_QWORD*)v1 = v15;
          *((_QWORD*)v1 + 1) = v14;
          if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
          v5 += 16;
          v1 += 16;
        } while (v5 != v13);
        v12 = *(char**)(a1 + 40);
      }
      v25 = v12;
      if (v13 != v4) {
        v25 = v12;
        v26 = v12;
        do {
          *(_QWORD*)v26 = *(_QWORD*)v13;
          v27 = *((_QWORD*)v13 + 1);
          *((_QWORD*)v26 + 1) = v27;
          if (v27 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                      memory_order_relaxed);
          }
          v13 += 16;
          v26 += 16;
          v25 += 16;
        } while (v13 != v4);
      }
      v1 = v25;
    }
  }
  else {
    v9 = v8 >> 4;
    if (v1 != nullptr) {
      v10 = *(char**)(a1 + 40);
      if (v1 == v10) {
        goto LABEL_27;
      }
      do {
        v11 = *((_QWORD*)v10 - 1);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
        v10 -= 16;
      } while (v10 != v1);
      v20 = *(char**)(a1 + 32);
      *(_QWORD*)(a1 + 40) = v1;
      v1 = v20;
      if (v20 != nullptr) {
      LABEL_27:
        v21 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v21, (__int64)v1);
      }
      v6 = 0;
      v2[1] = 0;
      v2[2] = 0;
      *v2 = 0;
    }
    if (v9 >> 60 != 0) {
      goto LABEL_165;
    }
    v22 = v6 >> 3;
    if (v6 >> 3 <= v9) {
      v22 = v9;
    }
    v23 = (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v22;
    if (v23 >> 60 != 0) {
    LABEL_165:
      GameRoutine_cf3740();
    }
    v1 = (char*)fw_memory_HeapManager_Allocate(*v7, 16 * v23, 16, 0);
    *(_QWORD*)(a1 + 32) = v1;
    *(_QWORD*)(a1 + 40) = v1;
    for (*(_QWORD*)(a1 + 48) = &v1[16 * v23]; v5 != v4; v1 += 16) {
      *(_QWORD*)v1 = *(_QWORD*)v5;
      v24 = *((_QWORD*)v5 + 1);
      *((_QWORD*)v1 + 1) = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
      }
      v5 += 16;
    }
  }
  v29 = *(char**)(a1 + 32);
  *(_QWORD*)(a1 + 40) = v1;
  if (v29 != v1) {
    while (*(_DWORD*)(*(_QWORD*)v29 + 512LL) != 2) {
      v29 += 16;
      if (v29 == v1) {
        goto LABEL_78;
      }
    }
  }
  if (v29 != v1) {
    v30 = v29 + 16;
    if (v29 + 16 != v1) {
      do {
        v31 = *(_QWORD*)v30;
        if (*(_DWORD*)(*(_QWORD*)v30 + 512LL) != 2) {
          v32 = *((_QWORD*)v30 + 1);
          *(_QWORD*)v30 = 0;
          *((_QWORD*)v30 + 1) = 0;
          v33 = *((_QWORD*)v29 + 1);
          *(_QWORD*)v29 = v31;
          *((_QWORD*)v29 + 1) = v32;
          if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
            std___1___shared_weak_count___release_weak(v33);
          }
          v29 += 16;
        }
        v30 += 16;
      } while (v30 != v1);
      v1 = *(char**)(a1 + 40);
    }
  }
  if (v29 != v1) {
    do {
      v34 = *((_QWORD*)v1 - 1);
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v34);
      }
      v1 -= 16;
    } while (v1 != v29);
    *(_QWORD*)(a1 + 40) = v29;
  }
LABEL_78:
  v35 = *(_QWORD*)(a1 + 56);
  v36 = 0x0.0p+0f;
  if (v35 != 0) {
    v37 = *(_QWORD**)(a1 + 8);
    v38 = *(_QWORD**)(a1 + 16);
    if (v37 != v38) {
      while (*v37 != v35) {
        v37 += 2;
        if (v37 == v38) {
          goto LABEL_90;
        }
      }
    }
    if (v37 != v38) {
      goto LABEL_84;
    }
  LABEL_90:
    *(_QWORD*)(a1 + 56) = 0;
    GameRoutine_cf12a0((_QWORD*)a1);
    v35 = *(_QWORD*)(a1 + 56);
    if (v35 != 0) {
    LABEL_84:
      if ((*(_DWORD*)(*(_QWORD*)(v35 + 16) + 128LL) & 0x80) != 0) {
        v36 = 0x1.0000000000000p+0f;
      }
      else {
        v36 = 0x0.0p+0f;
      }
      v39 = 0x1.3333340000000p-2f;
      if ((*(_DWORD*)(*(_QWORD*)(v35 + 16) + 128LL) & 0x80) != 0) {
        v39 = 0x1.99999a0000000p-3f;
      }
    LABEL_92:
      v40 = *(float*)(a1 + 224);
      v41 = game_script_hub_g_frame_counter;
      v42 = fabsf(
          (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f) /
          v39);
      if (v40 <= v36) {
        if (v40 >= v36) {
          goto LABEL_98;
        }
        v40 = v40 + v42;
        if (v40 <= v36) {
          goto LABEL_98;
        }
      }
      else {
        v40 = v40 - v42;
        if (v40 >= v36) {
          goto LABEL_98;
        }
      }
      v40 = v36;
    LABEL_98:
      *(float*)(a1 + 224) = v40;
      v43 = *(_QWORD*)GameData_212dc38[0];
      v44 = v40 * 0x1.99999a0000000p-2f;
      v45 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1012LL);
      *(float*)(v43 + 1016) = v44;
      *(float*)(v43 + 1008) = v44 + (float)(v45 + 0x0.0p+0f);
      v47 = *(_QWORD*)(a1 + 232);
      v46 = *(_QWORD*)(a1 + 240);
      if (v47 == v46) {
        goto LABEL_111;
      }
      v48 = fabsf((float)(*(float*)(v41 + 160) * 0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f);
      do {
        if (*(_BYTE*)(v47 + 12) == 1) {
          v49 = *(float*)(v47 + 8);
          if (v49 <= 0x0.0p+0f) {
            if (v49 >= 0x0.0p+0f) {
              goto LABEL_101;
            }
            v49 = v48 + v49;
            if (v49 <= 0x0.0p+0f) {
              goto LABEL_101;
            }
          }
          else {
            v49 = v49 - v48;
            if (v49 >= 0x0.0p+0f) {
              goto LABEL_101;
            }
          }
          v49 = 0x0.0p+0f;
        LABEL_101:
          *(float*)(v47 + 8) = v49;
          *(_BYTE*)(v47 + 12) = 1;
        }
        v47 += 16;
      } while (v47 != v46);
      v47 = *(_QWORD*)(a1 + 232);
      v46 = *(_QWORD*)(a1 + 240);
    LABEL_111:
      v50 = v46 - v47;
      v51 = v47;
      if (v46 != v47) {
        v51 = v47;
        while (*(_BYTE*)(v51 + 12) != 1 || *(float*)(v51 + 8) != 0x0.0p+0f) {
          v51 += 16;
          if (v51 == v46) {
            goto LABEL_127;
          }
        }
      }
      if (v51 != v46) {
        v52 = v51 + 16;
        if (v51 + 16 != v46) {
          do {
            if (*(_BYTE*)(v52 + 12) != 1 || *(float*)(v52 + 8) != 0x0.0p+0f) {
              v53 = *(_QWORD*)(v52 + 8);
              *(_QWORD*)v51 = *(_QWORD*)v52;
              *(_QWORD*)(v51 + 8) = v53;
              v51 += 16;
            }
            v52 += 16;
          } while (v52 != v46);
          v47 = *(_QWORD*)(a1 + 232);
          v46 = *(_QWORD*)(a1 + 240);
        }
      }
      if (v51 != v46) {
        v46 = v51;
        *(_QWORD*)(a1 + 240) = v51;
      }
    LABEL_127:
      if (v50 != v46 - v47) {
        GameRoutine_cf12a0((_QWORD*)a1);
      }
      GameRoutine_d23f80(*(_QWORD*)(a1 + 72));
      v54 = *(_QWORD*)(a1 + 56);
      if (v54 != 0) {
        v55 = *(__int64**)(a1 + 32);
        v56 = *(__int64**)(a1 + 40);
        if (v55 != v56) {
          v57 = *(float**)(v54 + 632);
          v58 = *(float*)(*(_QWORD*)v57 + 528LL) + v57[5];
          do {
            v62 = *(_QWORD*)(*v55 + 16);
            v63 = *(_QWORD*)(v62 + 8);
            if ((*(_BYTE*)(v63 + 385) & 1) == 0) {
              v64 = *(_DWORD*)(v62 + 128);
              if ((v64 & 0x200) == 0 && (v64 & 2) != 0 &&
                  !(*(float*)(v62 + 828) > 0x0.0p+0f) &&
                  !((unsigned int)(*(int*)(v63 + 376) - 1) > 2) &&
                  (GameRoutine_d23e60(v57, *(__int64**)(*v55 + 632)) & 1) !=
                      0) {
                v65 = *v55;
                v66 = *(float*)(**(_QWORD**)(*v55 + 632) + 528LL);
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21a6130,
                         memory_order_acquire) &
                     1) == 0) {
                  v93_.v95 = v66;
                  v73 = __cxa_guard_acquire((__int64)&GameData_21a6130);
                  v66 = v93_.v95;
                  if (v73 != 0) {
                    v74 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v74;
                    __cxa_guard_release((__int64)&GameData_21a6130);
                    v66 = v93_.v95;
                  }
                }
                if (v65 != v54) {
                  v67 = *(float32x4_t*)(*(_QWORD*)(v54 + 16) + 560LL);
                  {
                    __typeof__(v68) z_ = (__typeof__(v68)){0};
                    LODWORD(z_) = DWORDn(
                        *(_QWORD*)(*(_QWORD*)(v65 + 16) + 560LL),
                        sizeof(*(_QWORD*)(*(_QWORD*)(v65 + 16) + 560LL)) / 4 -
                            1);
                    v68 = z_;
                  }
                  v69 =
                      vaddq_f32(v67, COERCE_AS(float32x4_t, GameData_21a6120));
                  if (!((float)(v68 - *(float*)(v65 + 552)) >
                        LANES128(v69).n128_f32[1]) &&
                      !(v68 < (float)(LANES128(v69).n128_f32[1] -
                                      *(float*)(v54 + 552)))) {
                    v70 = vsubq_f32(
                        *(float32x4_t*)(*(_QWORD*)(v65 + 16) + 560LL), v69);
                    if ((float)(LANES128_OF(vmulq_f32(v70, v70)).n128_f32[2] +
                                (float)(LANES128(v70).n128_f32[0] *
                                        LANES128(v70).n128_f32[0])) <=
                        (float)((float)(v58 + v66) * (float)(v58 + v66))) {
                      v71 = *(float32x4_t**)(*v55 + 16);
                      v72 = vsubq_f32(v67, v71[35]);
                      if (LANES128(v72).n128_f32[0] == 0x0.0p+0f &&
                          LANES128(v72).n128_f32[2] == 0x0.0p+0f) {
                        v61 = 0x0.0p+0f;
                        v60 = 0x1.0000000000000p+0f;
                      }
                      else {
                        v59 = sqrtf(
                            (float)(PSEUDO_UNFUSED(LANES128(v72).n128_f32[2] *
                                                   LANES128(v72).n128_f32[2])) +
                            (float)(LANES128(v72).n128_f32[0] *
                                    LANES128(v72).n128_f32[0]));
                        v60 = LANES128(v72).n128_f32[0] / v59;
                        v61 = LANES128(v72).n128_f32[2] / v59;
                      }
                      v93_.v93[0] = __PAIR64__(LODWORD(v61), LODWORD(v60));
                      game_zview_d13880((__int64)v71, (float*)v93_.v93);
                    }
                  }
                }
              }
            }
            v55 += 2;
          } while (v55 != v56);
        }
      }
      v76 = *(_QWORD*)(a1 + 8);
      v75 = *(_QWORD*)(a1 + 16);
      v77 = (__int64*)GameData_21323e8[0];
      fw_world_JobContext_Drain(*(unsigned int**)GameData_21323e8[0]);
      v78 = *v77;
      v79 = *v77 + 32;
      do {
        v80 = *(_DWORD*)(v78 + 8);
        v81 = (v80 + 1) & 0xFFFFFF;
        if (v80 + 1 <= 0) {
          v81 = -(-(v80 + 1) & 0xFFFFFF);
        }
        *(_DWORD*)(v78 + 8) = v81;
        v82 = atomic_load((unsigned __int64*)(v79 + 32LL * (v80 & 0x3F)));
        if (v82 != 0) {
          v80 = -1;
        }
      } while (v80 < 0);
      v83 = v75 - v76;
      v84 = v80 | 0xC0000000;
      v85 = (unsigned __int64*)(v79 + 32LL * (v80 & 0x3F));
      v86 = v83 >> 4;
      nn_os_ClearLightEvent((__int64)(v85 + 1));
      v87 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 80, 16, 0);
      v87[2] = 0;
      v88 = v87;
      v89 = GameData_212e368[0];
      v87[8] = 0;
      *v87 = v89 + 16;
      v87[1] = 0;
      v90 = v85[3];
      v85[3] = (unsigned __int64)v88;
      if (v90 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v90 + 8LL))(v90);
      }
      atomic_store(v84, v85);
      v88[1] = v78;
      *((_DWORD*)v88 + 4) = v84;
      v93_.v93[2] = v86;
      v93_.v93[0] = GameData_1fd7df8;
      v93_.v93[1] = v76;
      v93_.v94 = v93_.v93;
      fw_world_SwapCallables(v93_.v93, v88 + 4);
      if (v93_.v94 == v93_.v93) {
        v91 = 32;
      LABEL_163:
        (*(void (**)(__int64))(*v93_.v94 + v91))((__int64)v93_.v94);
      }
      else if (v93_.v94 != nullptr) {
        v91 = 40;
        goto LABEL_163;
      }
      fw_world_JobQueue_Submit(*(_QWORD*)(v78 + 16), v84);
      return fw_world_JobContext_Wait(*v77, v84);
    }
  }
  v39 = 0x1.3333340000000p-2f;
  goto LABEL_92;
}

#pragma GCC visibility pop
