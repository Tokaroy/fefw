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

#pragma GCC visibility pop
