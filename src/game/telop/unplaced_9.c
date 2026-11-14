#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_telop_1376180(PSEUDO_X8, __int64*,
                                                   __int64);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Registration_a51f10(__int64, unsigned int, const char*);
__int64 TextBoxEx_188ab20(__int64 result, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_17356e0(__int64*, __int64);
__int64 game_HashString(__int64 result);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* game_g_hero_ids;
extern __int64* GameData_212e348;
extern __int64 GameData_21c99c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 msg_MessageManager_instance_;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void game_telop_137ab20(__int64 a1, __int64 a2, int a3);
__int64 game_telop_1380b90(__int64 a1);

void game_telop_137ab20(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  unsigned int v6;
  char v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  float v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  float v30;
  char* v31;
  __int64 v32;
  float v33;
  char* v34;
  char* v35;
  __int64 v36;
  _QWORD v37[2];
  char* v38;
  __int64 v39;
  char v40[4];

  v5 = a2 + 1;
  v6 = a3;
  v7 = a3 > 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = *(_QWORD*)(a2 + 16);
  }
  else {
    v8 = a2 + 1;
  }
  v9 = game_util_Format("N_%sFace", v8);
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v9, v7);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v10 = *(_QWORD*)(a2 + 16);
  }
  else {
    v10 = a2 + 1;
  }
  v11 = game_util_Format("N_%sSpace", v10);
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v11, v7);
  for (; (signed int)v6 < (signed __int32)*(_DWORD*)(a1 + 824); ++v6) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v12 = *(_QWORD*)(a2 + 16);
    }
    else {
      v12 = v5;
    }
    v13 = game_util_Format("%sFaceFrm%d", v12, v6);
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v13, 0);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = v5;
  }
  v15 = game_util_Format("A_%sFace", v14);
  v16 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168), (__int64)v15);
  if (v16 != 0) {
    Alignment_56b600(v16);
    v17 = *(_QWORD*)(a1 + 176);
    if (v17 != 0) {
      v18 = std___1___shared_weak_count_lock(v17);
      if (v18 != 0) {
        v19 = v18;
        v20 = *(_QWORD*)(a1 + 168);
        if (v20 != 0) {
          ControlCreator_13633c0(v20);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
    }
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v21 = *(_QWORD*)(a2 + 16);
  }
  else {
    v21 = v5;
  }
  v22 = game_util_Format("A_%sFace", v21);
  v23 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)v22);
  v24 = 0x0.0p+0f;
  v40[0] = 0;
  v37[0] = 0xFF7FFFFF7F7FFFFFLL;
  v39 = 0x7F7FFFFFFF7FFFFFLL;
  if (v23 != 0) {
    v25 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v23 + 128), *(float32x4_t*)(v23 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        v23, (__int64)v37, (__int64)&v39, (__int64)v40, 0,
        sqrtf((float)(*(float*)&v25 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v23 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v23 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v23 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v23 + 144)))) /
            *(float*)(v23 + 72),
        sqrtf((float)(*((float*)&v25 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v23 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v23 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v23 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v23 + 144))))) /
            *(float*)(v23 + 76));
    if (v40[0] == 1) {
      v24 = vabds_f32(*(float*)&v39, *(float*)v37);
    }
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v26 = *(_QWORD*)(a2 + 16);
  }
  else {
    v26 = v5;
  }
  v27 = game_util_Format("Size%s", v26);
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v29 = v28;
  v30 = fminf(fmaxf(v24, 0x1.c200000000000p+9f), 0x1.4500000000000p+10f);
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v28 | 7) + 1;
    }
    v31 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v32, 16, 0);
    v37[1] = v29;
    v38 = v31;
    v37[0] = v32 | 1;
    goto LABEL_39;
  }
  LOBYTE(v37[0]) = 2 * v28;
  v31 = (char*)v37 + 1;
  if (v28 != 0) {
  LABEL_39:
    memmove((__int64)v31, (__int64)v27, v29);
  }
  v31[v29] = 0;
  v33 = (float)(v30 + -0x1.c200000000000p+9f) / 0x1.9000000000000p+8f;
  if ((v37[0] & 1) != 0) {
    v34 = v38;
  }
  else {
    v34 = (char*)v37 + 1;
  }
  GameHr_1562680(a1 + 168, v34, 0x0.0p+0f);
  if ((v37[0] & 1) != 0) {
    v35 = v38;
  }
  else {
    v35 = (char*)v37 + 1;
  }
  LayoutAccessor_15636c0(a1 + 168, (__int64)v35, 0,
                         v33 * 0x1.9000000000000p+6f);
  if ((v37[0] & 1) != 0 && v38 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                                  (__int64)v38);
  }
}

__int64 game_telop_1380b90(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  char** v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    char* v54;
  } v52_;
  struct {
    __int64* v55;
    __int64 v56;
    unsigned __int64 v57;
    unsigned __int64 v58;
    int v59;
    int v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    char gap168_[4];
    float v74;
  } v55_;

  if ((*(_BYTE*)(a1 + 828) & 1) == 0) {
    goto LABEL_75;
  }
  game_telop_1376180((void*)(&v55_.v55), (__int64*)(a1 + 832), a1 + 168);
  if (v55_.v56 == 0) {
    goto LABEL_75;
  }
  v2 = std___1___shared_weak_count_lock(v55_.v56);
  v3 = (__int64)v55_.v55;
  if (v55_.v56 != 0) {
    std___1___shared_weak_count___release_weak(v55_.v56);
  }
  if (v2 != 0 && v3 != 0) {
    if ((*(_BYTE*)(a1 + 828) & 4) == 0) {
      v4 = game_HashString(
          (__int64)*(&game_g_hero_ids + *(unsigned __int8*)(a1 + 824)));
      if (v4 != 0) {
        v5 = *(_QWORD*)(GameData_21c99c8 + 96);
        if (v5 != 0 & *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
          v7 = v5 - 1;
          if ((v5 & (v5 - 1)) != 0) {
            v8 = v4;
            if (v4 >= v5) {
              v8 = v4 % v5;
            }
          }
          else {
            v8 = v7 & v4;
          }
          v24 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v8);
          if (v24 != nullptr) {
            v25 = (_QWORD*)*v24;
            if (v25 != nullptr) {
              v23 = "MID_Sys_Result_Msg_Causation_Updated";
              if ((v5 & v7) == 0) {
                while (1) {
                  v27 = v25[1];
                  if (v27 == v4) {
                    if (v25[2] == v4) {
                      goto LABEL_62;
                    }
                  }
                  else if ((v27 & v7) != v8) {
                    goto LABEL_65;
                  }
                  v25 = (_QWORD*)*v25;
                  if (v25 == nullptr) {
                    goto LABEL_65;
                  }
                }
              }
              while (1) {
                v26 = v25[1];
                if (v26 == v4) {
                  if (v25[2] == v4) {
                  LABEL_62:
                    v28 = (_QWORD*)v25[3];
                    if (v28 != nullptr) {
                      v29 = msg_MessageManager_instance_;
                      v30 = GameHr_67ed20(v28);
                      Registration_a51f10(v29 + 14704, 0, v30);
                    }
                    break;
                  }
                }
                else {
                  if (v26 >= v5) {
                    v26 %= v5;
                  }
                  if (v26 != v8) {
                    goto LABEL_65;
                  }
                }
                v25 = (_QWORD*)*v25;
                if (v25 == nullptr) {
                  goto LABEL_65;
                }
              }
            }
          }
        }
      }
      v23 = "MID_Sys_Result_Msg_Causation_Updated";
      goto LABEL_65;
    }
    v9 = *(unsigned __int8*)(a1 + 824);
    if (v9 == 10) {
      v10 = nullptr;
    }
    else {
      v10 = GameData_20660e0[v9];
    }
    v11 = msg_MessageManager_instance_;
    v12 = game_util_Format("MCID_episode_%s", v10);
    v13 = strlen(v12);
    if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v14 = v13;
    if (v13 >= 0x17) {
      if ((v13 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v13 | 7) + 1;
      }
      v15 = (const char*)fw_memory_HeapManager_Allocate(
          fw_memory_g_heap_manager, v16, 16, 0);
      v52_.v53 = v14;
      v52_.v54 = v15;
      v52_.v52 = v16 | 1;
    }
    else {
      LOBYTE(v52_.v52) = 2 * v13;
      v15 = (char*)&v52_.v52 + 1;
      if (v13 == 0) {
        goto LABEL_28;
      }
    }
    memmove((__int64)v15, (__int64)v12, v14);
  LABEL_28:
    v15[v14] = 0;
    v17 = v52_.v53;
    v18 = (const char**)msg_MessageManager_empty_text__ptr;
    if ((v52_.v52 & 1) != 0) {
      v19 = v52_.v54;
    }
    else {
      v17 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
      v19 = (char*)&v52_.v52 + 1;
    }
    if (v17 != 0 && v19 != nullptr && *v19 != 0) {
      v55_.v61 = -1;
      v55_.v62 = -1;
      v55_.v63 = -1;
      v55_.v64 = -1;
      v55_.v65 = -1;
      v55_.v66 = -1;
      v55_.v67 = -1;
      v55_.v68 = -1;
      v55_.v69 = -1;
      v55_.v70 = -1;
      v55_.v71 = -1;
      v55_.v72 = -1;
      v55_.v55 = GameData_212e348 + 2;
      v55_.v56 = 0xFFFF0001FFFF0000LL;
      v55_.v57 = 0xFFFF0004FFFF0002LL;
      v55_.v58 = 0xFFFF0006FFFF0005LL;
      v55_.v73 = 8;
      v55_.v59 = -65529;
      v55_.v60 = -65528;
      v20 = GameRoutine_a4dbe0(msg_MessageManager_instance_, v19, 0);
    }
    else {
      v20 = *msg_MessageManager_empty_text__ptr;
    }
    if (v20 != nullptr) {
      v21 = v20;
    }
    else {
      v21 = *v18;
    }
    GameRoutine_60a020(v11 + 14704, v21);
    if ((v52_.v52 & 1) != 0 && v52_.v54 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v52_.v54);
    }
    v23 = "MID_Sys_Result_Msg_Causation_Second";
  LABEL_65:
    TextBoxEx_188ab20(v3, v23);
    v31 = *(_QWORD*)(a1 + 832);
    if (*(_QWORD*)(a1 + 840) != v31) {
      v32 = *(_QWORD*)(v31 + 8);
      if (v32 != 0) {
        v33 = *(__int64**)v31;
        v34 = *(_QWORD*)(v31 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                  memory_order_relaxed);
        v35 = std___1___shared_weak_count_lock(v34);
        std___1___shared_weak_count___release_weak(v32);
        if (v35 != 0) {
          if (v33 != nullptr) {
            v36 = *(_QWORD*)(v3 + 80);
            ui_text_190a0c0((float*)&v55_.v55, (__int64)&v52_.v52, &v55_.v74,
                            (_QWORD*)v36, *(_QWORD*)(v36 + 216));
            v37 = *(_BYTE*)(v36 + 88) | 0x10;
            *(_QWORD*)(v36 + 80) = v52_.v52;
            *(_BYTE*)(v36 + 88) = v37;
            game_17356e0(v33, *(_QWORD*)(v3 + 16));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak(v35);
          }
        }
      }
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
LABEL_75:
  if ((*(_BYTE*)(a1 + 828) & 2) != 0) {
    game_telop_1376180((void*)(&v55_.v55), (__int64*)(a1 + 832), a1 + 168);
    if (v55_.v56 != 0) {
      v38 = std___1___shared_weak_count_lock(v55_.v56);
      v39 = (__int64)v55_.v55;
      if (v55_.v56 != 0) {
        std___1___shared_weak_count___release_weak(v55_.v56);
      }
      if (v38 != 0 && v39 != 0) {
        TextBoxEx_188ab20(v39, "MID_Sys_Result_Msg_Causation_Condition");
      }
      else if (v38 == 0) {
        goto LABEL_85;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak(v38);
      }
    }
  }
LABEL_85:
  v40 = *(_QWORD*)(a1 + 840) - *(_QWORD*)(a1 + 832);
  v41 = v40 >> 4;
  if ((unsigned __int64)(v40 >> 4) < 2) {
    v42 = game_util_Format("L_Txt%02d", v40 >> 4);
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v42, 0);
    if (v41 != 1) {
      v43 = game_util_Format("L_Txt%02d", (int)v41 + 1);
      ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v43, 0);
    }
  }
  v44 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168), (__int64)"A_Tlp");
  if (v44 != 0) {
    Alignment_56b600(v44);
    v45 = *(_QWORD*)(a1 + 176);
    if (v45 != 0) {
      v46 = std___1___shared_weak_count_lock(v45);
      if (v46 != 0) {
        v47 = v46;
        v48 = *(_QWORD*)(a1 + 168);
        if (v48 != 0) {
          ControlCreator_13633c0(v48);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
          std___1___shared_weak_count___release_weak(v47);
        }
      }
    }
  }
  v49 = game_util_Format("L_Txt%02d", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v49, 0);
  v50 = game_util_Format("L_Txt%02d", 1);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 168, (__int64)v50, 0);
}

#pragma GCC visibility pop
