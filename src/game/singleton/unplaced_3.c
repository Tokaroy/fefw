#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Cursor_7319a0(PSEUDO_X8, __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_f066e0(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64 GameData_212d020[5];
extern __int64 fw_memory_g_heap_manager_ptr;
float Height_7c4d10(__int64, float, float);
float game_map_CursorDrawInfo_GetHeightTop(__int64, int, int, int, int,
                                           __int64);
unsigned __int64 HeightCellMap_1003040(unsigned __int64 result,
                                       unsigned __int8*, int, int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_74e1f0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_singleton_fe96c0(__int64 a1);
__int64* GameRoutine_122f660(__int64* result);
__int64 GameRoutine_123e340();
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_6c2b50(__int64);
__int64 Impl_1226760();
__int64 nn_mem_StandardAllocator_StandardAllocator_1a0ad40(__int64, __int64,
                                                           unsigned __int64);
extern __int64 (*GameData_201a728[])();
extern __int64 (*Impl_Destructor_12268e0_ptr[])();
extern __int64 (*Impl_Destructor_12ae0a0_ptr[])();
extern __int64 (*game_map_history_anonymous_Impl_vtable_201ad80[])();
extern __int64 (*game_map_history_anonymous_Impl_vtable_2020058[])();
extern __int64* GameData_212c668[2];
extern __int64* GameData_21309d0[4];
extern __int64* GameData_2130ad8[7];
extern __int64* game_map_history_g_record_allocators_ptr[2];
extern __int64* game_map_history_g_record_region_ptr[3];
extern __int64 GameData_22400f8;
extern __int64 GameData_22407a8;
extern __int64 GameData_22408e8;
extern __int64 game_map_UnitFlags_instance_;
extern char GameData_1a9f09e;
extern int* game_map_history_g_record_alloc_retries_ptr[39];
unsigned __int64 game_12a5280();
void GameRoutine_60eb40(__int64*, unsigned __int64);
void game_singleton_12262c0(__int64 a1);

void game_singleton_fe96c0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int16 v12;
  unsigned int v13;
  unsigned int v14;
  float32x4_t v15;
  float v16;
  float v17;
  unsigned __int64 v18;
  float32x4_t v19;
  int v20;
  int v21;
  float32x4_t v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  int v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  __int128 v30;
  __int128 v31;
  _QWORD* v32;
  int v33;
  float32x4_t v34;
  int v35;
  int v36;
  int v37;
  __int128 v38;
  float v39;
  __int64 v40;
  unsigned __int32 v41;
  __int64 v42;
  __int128 v43;
  __int64* v44;
  __int64* v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  _DWORD* v49;
  __int128 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  int i;
  int j;
  char v56;
  unsigned __int64 v57;
  char v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  _BYTE* v67;
  _BYTE* v68;
  char v69;
  __int64 v70;
  float v71;
  float32x4_t v72;
  float v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  struct {
    int v77;
    _WORD v78[2];
  } v77_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = GameData_212d020[0];
  if (*(_QWORD*)GameData_212d020[0] != 0 &&
      (GameRoutine_f066e0(*(_QWORD**)GameData_212d020[0]) & 1) == 0) {
    v3 = GameData_212cfc0[0];
    v4 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v5 = *(_DWORD*)(v4 + 8);
    if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
        (unsigned int)(unsigned __int8)(v5 -
                                        *(_BYTE*)(*GameData_212ce98[0] + 24))) {
      v6 = *(_DWORD*)(v4 + 12);
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 27) >
          (unsigned int)(unsigned __int8)(v6 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         25))) {
        v7 = *(_QWORD*)v2;
        v8 = *(_DWORD*)(a1 + 112);
        v9 = *(_DWORD*)(a1 + 116);
        LOBYTE(v77_.v77) = v5;
        BYTE1(v77_.v77) = v6;
        HIWORD(v77_.v77) = 0;
        HeightCellMap_1003040(*(_QWORD*)(v7 + 8) + 16LL,
                              (unsigned __int8*)&v77_.v77, v8, v9),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v11 = v10;
        v12 = v77_.v77;
        *(float*)&v13 = (float)(*(int*)(a1 + 112) - 1) * 0x1.4000000000000p+1f;
        *(float*)&v14 = (float)(*(int*)(a1 + 116) - 1) * 0x1.4000000000000p+1f;
        *(_DWORD*)(a1 + 82) = v77_.v77;
        LANES128(v15).n128_u64[0] = v13;
        LANES128(v15).n128_u64[1] = v14;
        v75 = v15;
        v16 = (float)((float)((float)(unsigned int)((char)v12 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        v17 = (float)((float)((float)(unsigned int)((v12 >> 8) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        if (*GameData_212ce80[0] != 0) {
          v71 = (float)((float)((float)(unsigned int)((v12 >> 8) + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
          v73 = (float)((float)((float)(unsigned int)((char)v12 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
          Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456), v16, v17),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v17 = v71;
          v16 = v73;
        }
        v18 = LODWORD(v17);
        LANES128(v19).n128_u64[0] = LODWORD(v16);
        LANES128(v19).n128_u64[1] = v18;
        v74 = v19;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(*(_QWORD*)(*v3 + 48) + 80LL) + 16LL))(
            (void*)(&v76), *(_QWORD*)(*v3 + 48) + 80LL),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v20 = *(_DWORD*)(a1 + 112);
        v21 = *(_DWORD*)(a1 + 116);
        LANES128(v22).n128_u64[0] = LANES128(v76).n128_u32[0];
        v23 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
        v77_.v78[1] = 0;
        LANES128(v22).n128_u64[1] = LANES128(v76).n128_u64[1];
        v77_.v78[0] = *(_WORD*)(a1 + 82);
        v72 = v22;
        HeightCellMap_1003040(v23 + 72, (unsigned __int8*)v77_.v78, v20, v21),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        {
          __typeof__(v24) z_ = (__typeof__(v24)){0};
          LODWORD(z_) = 0;
          v24 = z_;
        }
        v25 = *v3;
        HIDWORD(v24) = v26;
        v27 = vaddq_f32(v75, COERCE_AS(float32x4_t, v24));
        v28 = vaddq_f32(v74, v27);
        v29 = vaddq_f32(v72, v27);
        *(_QWORD*)(a1 + 64) = LANES128(v28).n128_u64[0];
        *(_QWORD*)(a1 + 48) = LANES128(v29).n128_u64[0];
        v31 = *(_OWORD*)(a1 + 48);
        v30 = *(_OWORD*)(a1 + 64);
        *((_QWORD*)&v30 + 1) = LANES128(v28).n128_u32[2];
        *((_QWORD*)&v31 + 1) = LANES128(v29).n128_u32[2];
        *(_OWORD*)(a1 + 48) = v31;
        *(_OWORD*)(a1 + 64) = v30;
        v32 = X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                *(_QWORD*)(*(_QWORD*)(v25 + 48) + 16LL) + 16LL))(
                (void*)&v76, *(_QWORD*)(v25 + 48) + 16LL)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v33 = *(char*)(a1 + 82);
        v34 = vaddq_f32(v75, v76);
        v35 = *(char*)(a1 + 83);
        v36 = *(_DWORD*)(a1 + 112);
        v37 = *(_DWORD*)(a1 + 116);
        *(_QWORD*)(a1 + 32) = LANES128(v34).n128_u64[0];
        v38 = *(_OWORD*)(a1 + 32);
        *((_QWORD*)&v38 + 1) = LANES128(v34).n128_u32[2];
        *(_OWORD*)(a1 + 32) = v38;
        v39 = game_map_CursorDrawInfo_GetHeightTop((__int64)v32, v33, v35, v36,
                                                   v37, 0),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v40 = *v3;
        *(float*)(a1 + 36) = v39;
        Cursor_7319a0((void*)(&v76), v40),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v41 = LANES128(v76).n128_u32[2];
        v42 = *(_QWORD*)v2;
        *(_QWORD*)(a1 + 16) = LANES128(v76).n128_u64[0];
        v43 = *(_OWORD*)(a1 + 16);
        *((_QWORD*)&v43 + 1) = v41;
        *(_OWORD*)(a1 + 16) = v43;
        if (*(_DWORD*)(v42 + 4368) >= 3u) {
          v44 = GameData_212cfd0[0];
          if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
            v45 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v45 != nullptr && v45[49] != 0 &&
                (*((_BYTE*)v45 + 417) & 0x1C) == 0) {
              v46 = v45;
              if ((*(float (**)(__int64*))(v45[19] + 16))(v45 + 19) >
                      0x0.0p+0f &&
                  *(_DWORD*)(*(_QWORD*)v2 + 4368LL) == 6) {
                if (*(_BYTE*)(*v44 + 8) != 0) {
                  v47 = game_UnitPool_Get((_BYTE*)(*v44 + 8)),
                  v10 = COERCE_AS(__typeof__(v10),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v48 = v46;
                }
                else {
                  v48 = v46;
                  v47 = nullptr;
                }
                if (v47 == v48) {
                  v49 = (_DWORD*)v48[29];
                  *(_DWORD*)(a1 + 16) = v49[76];
                  *(_DWORD*)(a1 + 20) = v49[77];
                  v50 = *(_OWORD*)(a1 + 16);
                  *((_QWORD*)&v50 + 1) = (unsigned int)v49[78];
                  *(_OWORD*)(a1 + 16) = v50;
                }
              }
            }
          }
        }
        v51 = *(_QWORD*)(a1 + 88);
        v52 = *(_DWORD*)(a1 + 112);
        *(_DWORD*)(a1 + 20) = v11;
        *(_QWORD*)(a1 + 96) = v51;
        if (v52 >= 1) {
          v53 = *(_DWORD*)(a1 + 116);
          if (v53 >= 1) {
            for (i = 0; i < v52; ++i) {
              if (v53 >= 1) {
                for (j = 0; j < v53; ++j) {
                  v56 = *(_BYTE*)(a1 + 82) + i;
                  v57 = *(_QWORD*)(a1 + 104);
                  v58 = *(_BYTE*)(a1 + 83) + j;
                  if (v51 < v57) {
                    *(_BYTE*)v51 = v56;
                    *(_BYTE*)(v51 + 1) = v58;
                    *(_WORD*)(v51 + 2) = 0;
                    v51 += 4LL;
                  }
                  else {
                    v59 = *(_QWORD*)(a1 + 88);
                    v60 = v51 - v59;
                    v61 = (__int64)(v51 - v59) >> 2;
                    v62 = v61 + 1;
                    if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
                      GameRoutine_74e1f0(),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v63 = v57 - v59;
                    if (v63 >> 1 > v62) {
                      v62 = v63 >> 1;
                    }
                    if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFFCLL) {
                      v64 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v64 = v62;
                    }
                    if (v64 >> 62 != 0) {
                      GameRoutine_60a210(),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v65 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v64, 16, 0),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    v66 = v65 + v60;
                    *(_BYTE*)v66 = v56;
                    *(_BYTE*)(v66 + 1) = v58;
                    *(_WORD*)(v66 + 2) = 0;
                    if (v59 != v51) {
                      v67 = (_BYTE*)v59;
                      v68 = (_BYTE*)(v65 + v60 - 4 * v61);
                      do {
                        *v68 = *v67;
                        v68[1] = v67[1];
                        v68[2] = v67[2];
                        v69 = v67[3];
                        v67 += 4;
                        v68[3] = v69;
                        v68 += 4;
                      } while (v67 != (_BYTE*)v51);
                    }
                    v51 = v66 + 4;
                    *(_QWORD*)(a1 + 88) = v65 + v60 - 4 * v61;
                    *(_QWORD*)(a1 + 96) = v66 + 4;
                    *(_QWORD*)(a1 + 104) = v65 + 4 * v64;
                    if (v59 != 0) {
                      v70 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v70 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v59),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                  }
                  v53 = *(_DWORD*)(a1 + 116);
                  *(_QWORD*)(a1 + 96) = v51;
                }
                v52 = *(_DWORD*)(a1 + 112);
              }
            }
          }
        }
      }
    }
  }
}

void game_singleton_12262c0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  void* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
    char gap40_[8];
    __int64 v32[4];
    __int64* v33;
  } f_;

  if (GameData_22400f8 == 0) {
    GameData_22400f8 = a1;
  }
  *(_QWORD*)(a1 + 856) = 0;
  *(_WORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 10) = 0;
  *(_DWORD*)(a1 + 12) = 0;
  *(_QWORD*)a1 = Impl_Destructor_12268e0_ptr;
  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_DWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_DWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 863) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 936) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 867) = -1;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(v3, 491520, 16, 0);
  GameRoutine_1a0ba50((__int64)(v4 + 4), 0, 0x77FE0u);
  *(_QWORD*)(a1 + 952) = v4;
  *(_QWORD*)(a1 + 960) = 491520;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v5 = GameData_212c668[0] + 2;
  *(_WORD*)(a1 + 1072) = 0;
  *(_DWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1120) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1136) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 944) = v5;
  *(_DWORD*)(a1 + 1080) = -16777216;
  *(_BYTE*)(a1 + 1084) = -1;
  v6 = GameData_2130ad8[0];
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = &GameData_1a9f09e;
  if (*v6 == 0) {
    v7 = fw_memory_HeapManager_Allocate(*v2, 2224, 16, 0);
    GameRoutine_6c2b50(v7);
    *v6 = v7;
  }
  game_12a5280();
  v8 = GameData_21309d0[0];
  if (*GameData_21309d0[0] == 0) {
    v9 = fw_memory_HeapManager_Allocate(*v2, 3145728, 4096, 0);
    *v8 = v9;
    v10 = (char*)v9;
    v11 = game_map_history_g_record_region_ptr[0];
    *game_map_history_g_record_region_ptr[0] = v9;
    v12 = fw_memory_HeapManager_Allocate(*v2, 72, 16, 0);
    nn_mem_StandardAllocator_StandardAllocator_1a0ad40(v12, (__int64)v10,
                                                       0x200000u);
    v10 += 0x200000;
    v13 = game_map_history_g_record_allocators_ptr[0];
    v14 = *v2;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v10;
    *v13 = v12;
    v15 = (void*)fw_memory_HeapManager_Allocate(v14, 72, 16, 0);
    nn_mem_StandardAllocator_StandardAllocator_1a0ad40((__int64)v15,
                                                       (__int64)v10, 0x100000u);
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
  }
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 16, 16, 0);
  *v16 = Impl_Destructor_12ae0a0_ptr;
  v16[1] = 0;
  GameData_22408e8 = (__int64)v16;
  v17 = fw_memory_HeapManager_Allocate(*v2, 72, 16, 0);
  v18 = v17;
  if (GameData_22407a8 == 0) {
    GameData_22407a8 = v17;
  }
  v19 = *v2;
  *(_QWORD*)(v18 + 40) = 0;
  *(_QWORD*)(v18 + 48) = 0;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)v18 = game_map_history_anonymous_Impl_vtable_2020058;
  *(_DWORD*)(v18 + 64) = 1065353216;
  *(_QWORD*)(v18 + 32) = 0;
  v20 = fw_memory_HeapManager_Allocate(v19, 24576, 16, 0);
  *(_QWORD*)(v18 + 8) = v20;
  *(_QWORD*)(v18 + 16) = v20;
  *(_QWORD*)(v18 + 24) = v20 + 24576;
  GameRoutine_60eb40((__int64*)(v18 + 32), 0x400u);
  v21 = *v2;
  GameData_22407a8 = v18;
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate(v21, 264, 16, 0);
  v22[2] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  v22[8] = 0;
  v22[9] = 0;
  v22[10] = 0;
  v22[11] = 0;
  v22[12] = 0;
  v22[13] = 0;
  v22[14] = 0;
  v22[15] = 0;
  v22[16] = 0;
  v22[17] = 0;
  v22[18] = 0;
  v22[19] = 0;
  v22[20] = 0;
  v22[21] = 0;
  *v22 = game_map_history_anonymous_Impl_vtable_201ad80;
  v22[1] = 0;
  v22[22] = 0;
  v22[23] = 0;
  v22[24] = 0;
  v22[25] = 0;
  v22[26] = 0;
  v22[27] = 0;
  v22[28] = 0;
  v22[29] = 0;
  v22[30] = 0;
  v22[31] = 0;
  v22[32] = 0;
  game_map_UnitFlags_instance_ = (__int64)v22;
  GameRoutine_123e340();
  f_.v30[2] = 0;
  f_.v30[3] = a1;
  f_.v32[2] = 0;
  f_.v30[0] = GameData_201a728;
  f_.v30[1] = Impl_1226760;
  f_.v31 = f_.v30;
  f_.v32[3] = a1;
  f_.v33 = f_.v32;
  f_.v32[0] = (__int64)GameData_201a728;
  f_.v32[1] = (__int64)Impl_1226760;
  GameRoutine_122f660(f_.v32);
  if (f_.v33 == f_.v32) {
    v23 = 32;
  }
  else {
    if (f_.v33 == nullptr) {
      goto LABEL_14;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*f_.v33 + v23))((__int64)f_.v33);
LABEL_14:
  v24 = f_.v31;
  *game_map_history_g_record_alloc_retries_ptr[0] = 100;
  if (v24 == f_.v30) {
    v25 = 32;
    goto LABEL_18;
  }
  if (v24 != nullptr) {
    v25 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
  }
  GameRoutine_1a0ba50(a1 + 24, 0, 0x320u);
  v26 = *(_QWORD*)(a1 + 840);
  if ((unsigned __int64)(*(_QWORD*)(a1 + 856) - v26) <= 0xFF) {
    v27 = *(_QWORD*)(a1 + 848) - v26;
    v28 = fw_memory_HeapManager_Allocate(*v2, 256, 16, 0);
    GameRoutine_1a0b950(v28, v26, v27);
    *(_QWORD*)(a1 + 840) = v28;
    *(_QWORD*)(a1 + 848) = v28 + v27;
    *(_QWORD*)(a1 + 856) = v28 + 256;
    if (v26 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v29, v26);
    }
  }
}

#pragma GCC visibility pop
