#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* kaneko_disposable_10aa900(__int64*, __int64*);
__int64 EveryFrameProc_10aa5e0(__int64, __int64, float);
__int64 GameRoutine_1159ac0(__int64);
__int64 GameRoutine_1159be0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_2013820[])();
extern __int64* GameData_212d460[6];
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern char GameData_1a9f09e;
float CharacterWork_11c7720(__int64, float32x4_t*, float32x4_t*, int8x16_t*,
                            int8x16_t*, const char*, _DWORD*, _DWORD*, float,
                            float, float, float);
float GameRoutine_1a0ac90(const char*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_evt_demo_115a360(__int64 a1);

__int64 game_evt_demo_115a360(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  float v14;
  __int64* v15;
  float v16;
  __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  _QWORD* v34;
  float32x4_t v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    float32x4_t v52;
    __int64 v53;
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
    float32x4_t v57[2];
    _QWORD* v58;
    char gap88_[8];
    float32x4_t v59;
    __int64 v60;
    __int64 v61;
    unsigned __int64 v62;
    __int64 v63;
    __int64 v64;
    unsigned __int64 v65;
    __int64 v66;
    float32x4_t v67;
    __int64 v68;
    int8x16_t v69;
    unsigned __int64 v70;
    char gap216_[8];
    __int128 v71;
    __int128 v72;
  } f_;
  int8x16_t v73;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&f_.v67, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    LANES128(f_.v67).n128_u64[1] = *(_QWORD*)(v4 + 8);
    f_.v68 = v6;
    LANES128(f_.v67).n128_u64[0] = v5;
  }
  if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v64, *(_QWORD*)(v4 + 40),
                                  *(_QWORD*)(v4 + 32));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v4 + 32);
    v8 = *(_QWORD*)(v4 + 40);
    f_.v64 = *(_QWORD*)(v4 + 24);
    f_.v65 = v7;
    f_.v66 = v8;
  }
  v9 = *(unsigned __int8*)(v4 + 48);
  v10 = *(_QWORD*)(v4 + 56);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 == 0 ||
      ((v11 = *(const char**)(v4 + 64), v12 = (const char*)(v4 + 49),
        LANES128(f_.v59).n128_u64[0] = 0, (v9 & 1) != 0)
           ? (v13 = v11)
           : (v13 = v12),
       (v14 = GameRoutine_1a0ac90(v13, (__int64)&f_.v59),
        *(_BYTE*)LANES128(f_.v59).n128_u64[0] != 0) &&
               (*(_BYTE*)LANES128(f_.v59).n128_u64[0] != 102 ||
                *((_BYTE*)((_UNKNOWN*)0x0LL) + LANES128(f_.v59).n128_u64[0]) !=
                    0) ||
           v14 <= 0x0.0p+0f)) {
    v17 = GameRoutine_1159ac0((__int64)&f_.v67);
    if (v17 != 0) {
      v22 = v17;
      if ((f_.v64 & 1) != 0) {
        v23 = f_.v65;
      }
      else {
        v23 = (unsigned __int64)(unsigned __int8)f_.v64 >> 1;
      }
      if (v23 != 0) {
        v23 = GameRoutine_1159be0((__int64)&f_.v64);
      }
      v24 = *(_QWORD*)(GameData_22336e0 + 600);
      if (v24 != 0) {
        *(_QWORD*)(v24 + 40) = 0;
        LANES128(v19).n128_u32[0] = *(_DWORD*)(v22 + 44);
        v25 = *(float*)(v22 + 56);
        LANES128(v19).n128_u32[1] = *(_DWORD*)(v22 + 48);
        LANES128(v19).n128_u32[2] = *(_DWORD*)(v22 + 52);
        if (v23 != 0) {
          LANES128(v20).n128_u32[0] = *(_DWORD*)(v23 + 32);
          LANES128(v21).n128_u32[0] = *(_DWORD*)(v23 + 44);
          v26 = *(float*)(v23 + 56);
          v27 = *(float*)(v23 + 60);
          v28 = *(float*)(v23 + 72);
          v29 = *(const char**)(v23 + 64);
          LANES128(v20).n128_u32[1] = *(_DWORD*)(v23 + 36);
          LANES128(v21).n128_u32[1] = *(_DWORD*)(v23 + 48);
          LANES128(v20).n128_u32[2] = *(_DWORD*)(v23 + 40);
          LANES128(v21).n128_u32[2] = *(_DWORD*)(v23 + 52);
        }
        else {
          v28 = -0x1.0000000000000p+0f;
          v26 = 0x0.0p+0f;
          v29 = &GameData_1a9f09e;
          v20 = (__typeof__(v20)){0};
          v21 = (__typeof__(v21)){0};
          v27 = 0x0.0p+0f;
        }
        LANES128(v18).n128_u32[2] = *(_DWORD*)(v22 + 40);
        LANES128(v18).n128_u64[0] = *(_QWORD*)(v22 + 32);
        f_.v59 = v18;
        f_.v57[0] = v19;
        f_.v69 = v20;
        v73 = v21;
        f_.v72 = (__typeof__(f_.v72)){0};
        f_.v71 = (__typeof__(f_.v71)){0};
        CharacterWork_11c7720(v24, &f_.v59, f_.v57, &f_.v69, &v73, v29, &f_.v72,
                              &f_.v71, v25, v26, v27, v28);
      }
    }
    goto LABEL_38;
  }
  v15 = *(__int64**)(GameData_22336e0 + 600);
  v16 = v14;
  if ((LANES128(f_.v67).n128_u8[0] & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&f_.v59, f_.v68,
                                  LANES128(f_.v67).n128_u64[1]);
  }
  else {
    f_.v59 = f_.v67;
    f_.v60 = f_.v68;
  }
  if ((f_.v64 & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v61, f_.v66, f_.v65);
    if ((LANES128(f_.v59).n128_u8[0] & 1) != 0) {
      goto LABEL_52;
    }
  LABEL_54:
    f_.v52 = f_.v59;
    f_.v53 = f_.v60;
    goto LABEL_55;
  }
  f_.v61 = f_.v64;
  f_.v62 = f_.v65;
  f_.v63 = f_.v66;
  if ((LANES128(f_.v59).n128_u8[0] & 1) == 0) {
    goto LABEL_54;
  }
LABEL_52:
  fw_text_String_CopyTerminated((__int64*)&f_.v52, f_.v60,
                                LANES128(f_.v59).n128_u64[1]);
LABEL_55:
  if ((f_.v61 & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v54, f_.v63, f_.v62);
  }
  else {
    f_.v54 = f_.v61;
    f_.v55 = f_.v62;
    f_.v56 = f_.v63;
  }
  v33 = fw_memory_g_heap_manager_ptr;
  v34 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v35 = f_.v52;
  f_.v52 = (__typeof__(f_.v52)){0};
  v36 = (__int64)v34;
  *v34 = GameData_2013820;
  v34[1] = LANES128(v35).n128_u64[0];
  v37 = f_.v53;
  f_.v53 = 0;
  v34[2] = LANES128(v35).n128_u64[1];
  v34[3] = v37;
  v38 = f_.v54;
  v39 = f_.v55;
  f_.v54 = 0;
  v34[4] = v38;
  v34[5] = v39;
  v40 = f_.v56;
  f_.v55 = 0;
  f_.v56 = 0;
  v34[6] = v40;
  f_.v58 = v34;
  v41 = (_QWORD*)EveryFrameProc_10aa5e0(game_script_hub_g_frame_counter + 144,
                                        (__int64)f_.v57, v16);
  v42 = v41[21];
  v43 = v41[22];
  LANES128(f_.v69).n128_u64[0] = v42;
  LANES128(f_.v69).n128_u64[1] = v43;
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
  }
  v44 = v41[23];
  f_.v70 = v44;
  v45 = (unsigned __int64*)v15[1];
  if ((unsigned __int64)v45 >= v15[2]) {
    v46 = kaneko_disposable_10aa900(v15, (__int64*)&f_.v69);
    v47 = LANES128(f_.v69).n128_i64[1];
    v15[1] = (__int64)v46;
    if (v47 != 0) {
      std___1___shared_weak_count___release_weak(v47);
    }
  }
  else {
    *v45 = v42;
    v45[1] = v43;
    v45[2] = v44;
    v15[1] = (__int64)(v45 + 3);
  }
  (*(void (**)(__int64))(*(_QWORD*)v36 + 40LL))(v36);
  if ((f_.v54 & 1) != 0 && f_.v56 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v48, f_.v56);
  }
  if ((LANES128(f_.v52).n128_u8[0] & 1) != 0 && f_.v53 != 0) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v49, f_.v53);
  }
  if ((f_.v61 & 1) != 0 && f_.v63 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v50, f_.v63);
  }
  if ((LANES128(f_.v59).n128_u8[0] & 1) != 0 && f_.v60 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v51, f_.v60);
  }
LABEL_38:
  if ((f_.v64 & 1) != 0 && f_.v66 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  f_.v66);
  }
  if ((LANES128(f_.v67).n128_u8[0] & 1) != 0 && f_.v68 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  f_.v68);
  }
  return 0;
}

#pragma GCC visibility pop
