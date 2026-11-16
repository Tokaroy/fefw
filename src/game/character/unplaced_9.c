#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* Material_addbe0(_QWORD* result, __int64, __int64, char);
__attribute__((swiftcall)) void
CharacterTrailVertex_d35500(PSEUDO_X8, float32x4_t**, float32x4_t result);
__attribute__((swiftcall)) void
CharacterTrailVertex_d35680(PSEUDO_X8, int8x16_t*, _QWORD*, float32x4_t*);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void game_character_1116460(PSEUDO_X8, __int128*,
                                                       __int64, float*, _DWORD*,
                                                       unsigned __int64, int,
                                                       float);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34420(
    PSEUDO_X8, __int64, __int64, unsigned __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__int64 AnimLayerCtrlModule_ce3880(__int64, __int64, int);
__int64 CharacterTrailModule_d3c310(__int64);
__int64 GameRoutine_10bc1a0(__int64);
__int64 GameRoutine_10fec60(__int64 result, float);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_adf1e0(__int64, unsigned __int8*, unsigned __int64, __int64,
                           int);
__int64 ProcManager_10ff3b0(__int64);
__int64 TumbleHorse_10bc820(__int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 g3d_a661a0(__int64, int, __int64, int);
__int64 game_108c8a0(int);
__int64 game_109f1e0(__int64, const char*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_20077d8[])();
extern __int64 (*game_character_CharacterTrailVertex_vtable[])();
extern __int64* GameData_212d448[9];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ed88;
float kaneko_disposable_10ac520(__int64, _DWORD*, int);
float powf(float, float);
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void SkeletalBlendCallback_ce4aa0(__int64, int, float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d35840();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_character_bd8920(__int64 a1, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void game_character_d35280(PSEUDO_X8 x8_,
                                                      __int64* a1,
                                                      long double a3,
                                                      long double a4);
void game_character_d3c540(__int64 a1);
void game_character_10bda00(__int64 a1);

void game_character_bd8920(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  char* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v51;
    int v52;
  } v51_;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    char* v58;
  } v56_;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    char* v61;
  } v59_;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
  if (a3 != 0) {
    if (*(_BYTE*)(a1 + 117) == 1) {
      if (a3 < 0xFFFFFFFFFFFFFFF7LL) {
        if (a3 >= 0x17) {
          if ((a3 | 7) == 0x17) {
            v13 = 26;
          }
          else {
            v13 = (a3 | 7) + 1;
          }
          v7 = (const char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
          v56_.v57 = a3;
          v56_.v58 = v7;
          v56_.v56 = v13 | 1;
        }
        else {
          LOBYTE(v56_.v56) = 2 * a3;
          v7 = (char*)&v56_.v56 + 1;
        }
        memmove((__int64)v7, a2, a3);
        v7[a3] = 0;
        v14 = (__int64*)GameRoutine_1a09ce0((__int64)&v56_.v56, "_Mask", 5u);
        v16 = v14[1];
        v15 = v14[2];
        v59_.v59 = *v14;
        v59_.v60 = v16;
        v59_.v61 = (const char*)v15;
        v14[1] = 0;
        v14[2] = 0;
        *v14 = 0;
        if ((v56_.v56 & 1) != 0 && v56_.v58 != nullptr) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v56_.v58);
        }
        if (a3 >= 0x17) {
          if ((a3 | 7) == 0x17) {
            v28 = 26;
          }
          else {
            v28 = (a3 | 7) + 1;
          }
          v18 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
          v53_.v54 = a3;
          v53_.v55 = v18;
          v53_.v53 = v28 | 1;
        }
        else {
          LOBYTE(v53_.v53) = 2 * a3;
          v18 = (char*)&v53_.v53 + 1;
        }
        memmove((__int64)v18, a2, a3);
        v18[a3] = 0;
        v29 = (__int64*)GameRoutine_1a09ce0((__int64)&v53_.v53, "_NM", 3u);
        v31 = v29[1];
        v30 = v29[2];
        v56_.v56 = *v29;
        v56_.v57 = v31;
        v56_.v58 = (const char*)v30;
        v29[1] = 0;
        v29[2] = 0;
        *v29 = 0;
        if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v53_.v55);
        }
        v33 = game_g_frame_clock_ptr[0];
        v34 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424);
        if ((v59_.v59 & 1) != 0) {
          v35 = v59_.v61;
        }
        else {
          v35 = (char*)&v59_.v59 + 1;
        }
        v36 = strlen(v35);
        llvm_libcxx_21_libcxx_include___vector_b34420(
            (void*)((__int64)&v53_.v53), v34,
            (__int64)"Graphics/Textures/character_default", 0x23u, (__int64)v35,
            v36, 0);
        v37 = *(_QWORD*)(*v33 + 13424);
        if ((v56_.v56 & 1) != 0) {
          v38 = v56_.v58;
        }
        else {
          v38 = (char*)&v56_.v56 + 1;
        }
        v39 = strlen(v38);
        llvm_libcxx_21_libcxx_include___vector_b34420(
            (void*)((__int64)&v51_.v51), v37,
            (__int64)"Graphics/Textures/character_default", 0x23u, (__int64)v38,
            v39, 0);
        if ((_DWORD)v53_.v54 != -1 && v51_.v52 != -1) {
          v40 = *(__int64**)(v4 + 312);
          v41 = *(__int64**)(v4 + 320);
          if (v40 != v41) {
            v42 = v53_.v53;
            v43 = v53_.v54;
            v44 = v51_.v51;
            v45 = v51_.v52;
            do {
              Material_addbe0((_QWORD*)*v40, (__int64)"co_pattern_change", 17,
                              1);
              GameRoutine_adf1e0(*v40, "ScarMask", 8u, v42, v43);
              v46 = *v40;
              v40 += 2;
              GameRoutine_adf1e0(v46, "ScarNormal", 0xAu, v44, v45);
            } while (v40 != v41);
          }
          if ((v56_.v56 & 1) != 0 && v56_.v58 != nullptr) {
            v47 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                (__int64)v56_.v58);
          }
        LABEL_62:
          if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
            v48 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                (__int64)v59_.v61);
          }
          *(_BYTE*)(a1 + 115) = 1;
          return;
        }
        if ((v56_.v56 & 1) != 0 && v56_.v58 != nullptr) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, (__int64)v56_.v58);
        }
      LABEL_73:
        if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, (__int64)v59_.v61);
        }
        return;
      }
    }
    else if (a3 < 0xFFFFFFFFFFFFFFF7LL) {
      if (a3 >= 0x17) {
        if ((a3 | 7) == 0x17) {
          v19 = 26;
        }
        else {
          v19 = (a3 | 7) + 1;
        }
        v12 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0);
        v59_.v60 = a3;
        v59_.v61 = v12;
        v59_.v59 = v19 | 1;
      }
      else {
        LOBYTE(v59_.v59) = 2 * a3;
        v12 = (char*)&v59_.v59 + 1;
      }
      memmove((__int64)v12, a2, a3);
      v12[a3] = 0;
      v20 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424);
      if ((v59_.v59 & 1) != 0) {
        v21 = v59_.v61;
      }
      else {
        v21 = (char*)&v59_.v59 + 1;
      }
      v22 = strlen(v21);
      llvm_libcxx_21_libcxx_include___vector_b34420(
          (void*)((__int64)&v56_.v56), v20,
          (__int64)"Graphics/Textures/character_default", 0x23u, (__int64)v21,
          v22, 0);
      if ((_DWORD)v56_.v57 != -1) {
        v24 = *(__int64**)(v4 + 312);
        v23 = *(__int64**)(v4 + 320);
        if (v24 != v23) {
          v25 = v56_.v56;
          v26 = v56_.v57;
          do {
            Material_addbe0((_QWORD*)*v24, (__int64)"co_pattern_change", 17, 1);
            v27 = *v24;
            v24 += 2;
            GameRoutine_adf1e0(v27, "ScarMask", 8u, v25, v26);
          } while (v24 != v23);
        }
        goto LABEL_62;
      }
      goto LABEL_73;
    }
    String_60a1d0();
  }
  *(_BYTE*)(a1 + 115) = 0;
  v8 = *(__int64**)(v4 + 312);
  v9 = *(__int64**)(v4 + 320);
  if (v8 != v9) {
    v10 = game_g_frame_clock_ptr[0];
    do {
      if ((*(_BYTE*)(a1 + 116) & 1) == 0) {
        Material_addbe0((_QWORD*)*v8, (__int64)"co_pattern_change", 17, 0);
      }
      llvm_libcxx_21_libcxx_include___vector_b34420(
          (void*)((__int64)&v59_.v59), *(_QWORD*)(*v10 + 13424),
          (__int64)"Graphics/Textures/character_default", 0x23u,
          (__int64)"CMN_Character_Scar_Default_Mask", 31, 0);
      GameRoutine_adf1e0(*v8, "ScarMask", 8u, v59_.v59, v59_.v60);
      llvm_libcxx_21_libcxx_include___vector_b34420(
          (void*)((__int64)&v56_.v56), *(_QWORD*)(*v10 + 13424),
          (__int64)"Graphics/Textures/character_default", 0x23u,
          (__int64)"CMN_Character_Default_NM", 24, 0);
      v11 = *v8;
      v8 += 2;
      GameRoutine_adf1e0(v11, "ScarNormal", 0xAu, v56_.v56, v56_.v57);
    } while (v8 != v9);
  }
}

__attribute__((swiftcall)) void game_character_d35280(PSEUDO_X8 x8_,
                                                      __int64* a1,
                                                      long double a3,
                                                      long double a4)
{

#pragma clang fp contract(off)
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _DWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  long double v33;
  long double v34;

  v5 = *a1;
  v6 = a1[1];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v6 != v5 & ((v6 - v5) >> 2) % 0xCuLL == 0) {
    v9 = 0;
    v10 = 0;
    do {
      v12 = (int*)(v5 + 4 * v10);
      v13 = *v12;
      {
        __typeof__(a3) z_ = (__typeof__(a3)){0};
        LODWORD(z_) = v12[1];
        a3 = z_;
      }
      {
        __typeof__(a4) z_ = (__typeof__(a4)){0};
        LODWORD(z_) = v12[8];
        a4 = z_;
      }
      v15 = v12[4];
      v14 = v12[5];
      v17 = v12[6];
      v16 = v12[7];
      v18 = v12[11];
      DWORD1(a3) = v12[2];
      DWORD1(a4) = v12[9];
      DWORD2(a3) = v12[3];
      v19 = v12 + 10;
      v20 = a2[2];
      DWORD2(a4) = *(_DWORD*)v19;
      if (v9 < v20) {
        *(_QWORD*)v9 = game_character_CharacterTrailVertex_vtable;
        *(_DWORD*)(v9 + 8) = v13;
        *(long double*)(v9 + 16) = a3;
        *(_DWORD*)(v9 + 32) = v15;
        *(_DWORD*)(v9 + 36) = v14;
        *(_DWORD*)(v9 + 40) = v17;
        *(_DWORD*)(v9 + 44) = v16;
        *(long double*)(v9 + 48) = a4;
        *(_DWORD*)(v9 + 64) = v18;
        v9 += 80LL;
      }
      else {
        v21 = *a2;
        v22 = v9 - *a2;
        v23 = 0xCCCCCCCCCCCCCCCDLL * (v22 >> 4) + 1;
        if (v23 > 0x333333333333333LL) {
          GameRoutine_d35840();
        }
        v33 = a4;
        v34 = a3;
        v24 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v21) >> 4);
        if (2 * v24 > v23) {
          v23 = 2 * v24;
        }
        if (v24 >= 0x199999999999999LL) {
          v25 = 0x333333333333333LL;
        }
        else {
          v25 = v23;
        }
        if (v25 > 0x333333333333333LL) {
          GameRoutine_60a210();
        }
        v26 = 5 * v25;
        v27 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v25, 16, 0);
        HIDWORD(a3) = HIDWORD(v33);
        HIDWORD(a4) = HIDWORD(v34);
        v28 = v27 + v22;
        *(_QWORD*)v28 = game_character_CharacterTrailVertex_vtable;
        *(_DWORD*)(v28 + 8) = v13;
        *(_DWORD*)(v28 + 32) = v15;
        *(_DWORD*)(v28 + 36) = v14;
        *(_DWORD*)(v28 + 40) = v17;
        *(_DWORD*)(v28 + 44) = v16;
        *(_DWORD*)(v28 + 64) = v18;
        *(long double*)(v28 + 16) = v34;
        *(long double*)(v28 + 48) = v33;
        if (v21 != v9) {
          v29 = v21;
          v30 = v27;
          do {
            *(_QWORD*)v30 = game_character_CharacterTrailVertex_vtable;
            *(_DWORD*)(v30 + 8) = *(_DWORD*)(v29 + 8);
            *(_QWORD*)(v30 + 24) = *(_QWORD*)(v29 + 24);
            *(_QWORD*)(v30 + 16) = *(_QWORD*)(v29 + 16);
            *(_QWORD*)(v30 + 40) = *(_QWORD*)(v29 + 40);
            *(_QWORD*)(v30 + 32) = *(_QWORD*)(v29 + 32);
            *(_QWORD*)(v30 + 56) = *(_QWORD*)(v29 + 56);
            *(_QWORD*)(v30 + 48) = *(_QWORD*)(v29 + 48);
            v31 = *(_DWORD*)(v29 + 64);
            v29 += 80;
            *(_DWORD*)(v30 + 64) = v31;
            v30 += 80;
          } while (v29 != v9);
        }
        v9 = v28 + 80;
        *a2 = v27;
        a2[1] = v28 + 80;
        a2[2] = v27 + 16 * v26;
        if (v21 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v21);
        }
      }
      v5 = *a1;
      v11 = a1[1];
      v10 += 12LL;
      a2[1] = v9;
    } while (v10 < (v11 - v5) >> 2);
  }
}

void game_character_d3c540(__int64 a1)
{
  float* v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  unsigned __int64 v12;
  float* v13;
  unsigned __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  bool v20;
  float v21;
  unsigned __int64 v22;
  float* v23;
  unsigned __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float32x4_t v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  float32x4_t* v38;
  __int128 v39;
  float32x4_t v40;
  __int64 v41;
  float32x4_t** v42;
  __int64 v43;
  float v44;
  float32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t* v59;
  unsigned __int64 v60;
  float32x4_t v61;
  char v62;
  __int64 v63;
  int v64;
  unsigned __int32 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  float32x4_t* v72;
  __int64 v73;
  _QWORD* v74;
  float32x4_t v75;
  int8x16_t v76;
  int8x16_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t* v84;
  float32x4_t v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  int8x16_t v100;
  float32x4_t v101;
  float32x4_t v102;
  __int128 v103;
  char v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  __int64 v108;
  int v109;
  unsigned __int32 v110;
  __int64 v111;
  float32x4_t* v112;
  unsigned __int64 v113;
  unsigned __int8 v114;
  float32x4_t v115;
  float32x4_t v116;
  unsigned __int8 v117;
  __int64 v118;
  int v119;
  unsigned __int32 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  float32x4_t* v131;
  __int64 v132;
  _QWORD* v133;
  float32x4_t v134;
  float32x4_t v135;
  int8x16_t v136;
  int8x16_t v137;
  float32x4_t* v138;
  float32x4_t v139;
  int8x8_t v140;
  float32x4_t v141;
  int32x2_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  unsigned __int64 v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  int8x16_t v154;
  float32x4_t v155;
  float32x4_t v156;
  __int128 v157;
  char v158;
  float32x4_t v159;
  float32x4_t v160;
  __int64 v161;
  int v162;
  unsigned __int32 v163;
  __int64 v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t* v168;
  float32x4_t v169;
  unsigned __int64 v170;
  char v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  __int64 v176;
  int v177;
  unsigned __int32 v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  unsigned __int64 v182;
  float32x4_t v183;
  int v184;
  float32x4_t v185;
  unsigned __int64 v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  int8x16_t v189;
  float32x4_t v190;
  __int128 v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  int8x16_t v195[3];
  struct {
    __int64 v196[4];
    int8x16_t v197;
  } v196_;
  struct {
    float32x4_t v198;
    int8x16_t v199;
  } v198_;
  struct {
    float32x4_t v200;
    float32x4_t* v201;
    __int64 v202;
    float32x4_t* v203;
    __int64 v204;
    __int64 v205;
    __int64 v206;
  } v200_;

  if ((CharacterTrailModule_d3c310(a1) & 1) != 0 || *(_QWORD*)(a1 + 80) == 0 ||
      (*(_BYTE*)(a1 + 128) & 1) == 0) {
    return;
  }
  v2 = *(float**)(a1 + 96);
  v3 = 0x0.0p+0f;
  v4 = 0x0.0p+0f;
  v5 = *(float*)(a1 + 124);
  v6 = *(float*)(*(_QWORD*)(a1 + 32) + 8LL) / 0x1.e000000000000p+5f;
  v7 = *(float*)(a1 + 132) - (float)(v5 - v6);
  if (v7 < 0x0.0p+0f) {
    v7 = 0x0.0p+0f;
  }
  if (v6 >= v5) {
    v8 = *(float*)(a1 + 132);
  }
  else {
    v8 = v7;
  }
  v9 = v5 - v8;
  if ((float)(*(float*)(*(_QWORD*)(a1 + 24) + 8LL) / 0x1.e000000000000p+5f) >=
      v9) {
    v9 = *(float*)(*(_QWORD*)(a1 + 24) + 8LL) / 0x1.e000000000000p+5f;
  }
  v10 = *(_QWORD*)(a1 + 104) - (_QWORD)v2;
  if (v10 != 0) {
    v11 = v2[2];
    v12 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 4);
    if (v5 <= v11) {
      v3 = v2[16];
      if (v9 <= v11) {
        goto LABEL_43;
      }
    }
    else if (v12 == 1) {
    LABEL_27:
      v3 = v2[20 * v12 - 4];
      if (v9 <= v11) {
        goto LABEL_43;
      }
    }
    else {
      v13 = v2 + 22;
      v14 = v12 - 1;
      while (1) {
        v15 = *(v13 - 20);
        if (v15 <= v5 && v5 < *v13) {
          break;
        }
        --v14;
        v13 += 20;
        if (v14 == 0) {
          goto LABEL_27;
        }
      }
      v16 = *v13 - v15;
      if (v16 == 0x0.0p+0f) {
        v21 = 0x0.0p+0f;
      }
      else {
        v17 = v5 - v15;
        v18 = 0x1.0000000000000p+0f;
        v19 = v17 / v16;
        if (v19 <= 0x1.0000000000000p+0f) {
          v18 = v19;
        }
        v20 = v19 < 0x0.0p+0f;
        v21 = 0x0.0p+0f;
        if (!v20) {
          v21 = v18;
        }
      }
      v3 = *(v13 - 6) + (float)(v21 * (float)(v13[14] - *(v13 - 6)));
      if (v9 <= v11) {
        goto LABEL_43;
      }
    }
    v22 = v12 - 1;
    if (v12 != 1) {
      v23 = v2 + 22;
      v24 = v22;
      while (1) {
        v25 = *(v23 - 20);
        if (v25 <= v9 && v9 < *v23) {
          break;
        }
        --v24;
        v23 += 20;
        if (v24 == 0) {
          goto LABEL_42;
        }
      }
      v26 = *v23 - v25;
      if (v26 == 0x0.0p+0f) {
        v30 = 0x0.0p+0f;
      }
      else {
        v27 = v9 - v25;
        v28 = 0x1.0000000000000p+0f;
        v29 = v27 / v26;
        if (v29 <= 0x1.0000000000000p+0f) {
          v28 = v29;
        }
        v20 = v29 < 0x0.0p+0f;
        v30 = 0x0.0p+0f;
        if (!v20) {
          v30 = v28;
        }
      }
      v4 = *(v23 - 6) + (float)(v30 * (float)(v23[14] - *(v23 - 6)));
      goto LABEL_44;
    }
  LABEL_42:
    v2 += 20 * v22;
  LABEL_43:
    v4 = v2[16];
  }
LABEL_44:
  LANES128(v31).n128_f32[0] =
      powf(0x1.0000000000000p+0f - *(float*)(a1 + 120), 0x1.0000000000000p-1f);
  if (LANES128(v31).n128_f32[0] <= 0x0.0p+0f) {
    goto LABEL_55;
  }
  v32 = vabds_f32(v3, v4);
  v33 = v32 * LANES128(v31).n128_f32[0];
  v34 = v32 - v33;
  v35 = v32 + -0x1.0000000000000p-1f;
  if (v35 < 0x0.0p+0f) {
    v35 = 0x0.0p+0f;
  }
  if (v34 < 0x1.0000000000000p-1f) {
    v33 = v35;
  }
  v36 = fabsf(v33);
  if (v4 > v3) {
    v4 = v4 - v36;
    if (v4 >= v3) {
      goto LABEL_55;
    }
  LABEL_54:
    v4 = v3;
    goto LABEL_55;
  }
  if (v4 < v3) {
    v4 = v4 + v36;
    if (v4 > v3) {
      goto LABEL_54;
    }
  }
LABEL_55:
  PSEUDO_LOW_LANE128(v31, n128_f32, v3);
  CharacterTrailVertex_d35500((void*)(v196_.v196), (float32x4_t**)(a1 + 96),
                              v31);
  v37 = *(_QWORD*)(a1 + 184);
  if (v37 != 0) {
    v38 = *(float32x4_t**)(a1 + 264);
    v39 = (__typeof__(v39)){0};
    v40 = (__typeof__(v40)){0};
    if (v38 != nullptr) {
      v40 = v38[13];
      LANES128(v40).n128_u32[3] = 0;
    }
    v41 = *(_QWORD*)(a1 + 272);
    if (v41 != 0) {
      v39 = *(_OWORD*)(v41 + 208);
      HIDWORD(v39) = 0;
    }
  }
  else {
    v40 = (__typeof__(v40)){0};
    v39 = (__typeof__(v39)){0};
  }
  v42 = *(float32x4_t***)(a1 + 288);
  v43 = *(_QWORD*)(a1 + 296) - (_QWORD)v42;
  if (v43 == 0) {
    return;
  }
  v44 = v4 - v3;
  LANES128(v45).n128_u64[0] = LANES128(v196_.v197).n128_u64[0];
  v46 = *(int8x16_t*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) + 336LL);
  v47 = vmulq_f32(v46, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v48).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v196_.v197, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v49).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v196_.v197, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v49).n128_u64[0];
  *(int8x8_t*)&LANES128(v50).n128_i8[8] =
      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v52 = vmlaq_f32(vmulq_f32(v47, v48), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v45, v50));
  LANES128(v50).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v196_.v197, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v51).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 1);
  LANES128(v49).n128_u64[1] = LANES128(v50).n128_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v196_.v197).n128_u64[0];
  v53 = vmulq_f32(v50, v51);
  LANES128(v50).n128_u64[0] =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) + 336LL);
  v54 = vmlaq_f32(v52, COERCE_AS(float32x4_t, GameData_1a83800), v53);
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v53).n128_i8[8] =
      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v55 = vmlsq_f32(v54, v53, v49);
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v53).n128_u64[1] = LANES128(v53).n128_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v56 = vmulq_f32(v53, v55);
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v53).n128_u64[0];
  v57 = vmlaq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v50, v47));
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v49).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
  LANES128(v53).n128_u64[1] = LANES128(v47).n128_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v50).n128_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v58 = vmlsq_f32(vmlaq_f32(v57, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v47, v49)),
                  v46, v53);
  LANES128(v58).n128_u32[3] = 0;
  v194 = v58;
  if (v37 != 0) {
    v59 = *v42;
    LANES128(v59[2]).n128_u64[0] = LANES128(v40).n128_u64[0];
    v60 = LANES128(*(v59)).n128_u64[0];
    v61 = v59[2];
    LANES128(v59[8]).n128_u32[0] |= 1u;
    v62 = LANES128(v59[1]).n128_i8[12];
    LANES128(v61).n128_u64[1] = LANES128(v40).n128_u32[2];
    v59[2] = v61;
    if ((v62 & 1) != 0) {
      goto LABEL_78;
    }
    v63 = *(_QWORD*)(v60 + 24);
    v64 = LANES128(v59[1]).n128_i32[0];
    v191 = v39;
    LANES128(v200_.v200).n128_u64[0] = (unsigned __int64)GameData_1fc0970;
    LANES128(v200_.v200).n128_u64[1] = v60;
    v200_.v201 = v59;
    v200_.v203 = &v200_.v200;
    v65 = g3d_a661a0(v63, v64, (__int64)&v200_.v200, 0);
    if (v200_.v203 == &v200_.v200) {
      v66 = 32;
    }
    else {
      if (v200_.v203 == nullptr) {
      LABEL_77:
        v39 = v191;
        LANES128(v59[1]).n128_u32[2] = v65;
        LANES128(v59[1]).n128_u8[12] = 1;
      LABEL_78:
        *(_BYTE*)(*(_QWORD*)(v60 + 24) + 504LL) = 1;
        v112 = *(float32x4_t**)(*(_QWORD*)(a1 + 288) + 8LL);
        LANES128(v112[2]).n128_u64[0] = v39;
        v113 = LANES128(*(v112)).n128_u64[0];
        v115 = v112[2];
        LANES128(v112[8]).n128_u32[0] |= 1u;
        v114 = LANES128(v112[1]).n128_u8[12];
        LANES128(v115).n128_u64[1] = DWORD2(v39);
        v112[2] = v115;
        if ((v114 & 1) != 0) {
          goto LABEL_90;
        }
        goto LABEL_84;
      }
      v66 = 40;
    }
    (*(void (**)(void*))(LANES128(*(v200_.v203)).n128_u64[0] + v66))(
        (void*)v200_.v203);
    goto LABEL_77;
  }
  LANES128(v40).n128_f32[0] =
      v3 +
      (float)((float)(0x0.0p+0f / (float)(unsigned __int64)(v43 >> 4)) * v44);
  CharacterTrailVertex_d35500((void*)(v195), (float32x4_t**)(a1 + 96), v40);
  v67 = *(_QWORD**)(a1 + 8);
  v68 = v67[59];
  v200_.v203 = (float32x4_t*)v67[58];
  v200_.v204 = v68;
  v69 = v67[61];
  v200_.v205 = v67[60];
  v200_.v206 = v69;
  v70 = v67[55];
  LANES128(v200_.v200).n128_u64[0] = v67[54];
  LANES128(v200_.v200).n128_u64[1] = v70;
  v72 = (float32x4_t*)v67[56];
  v71 = v67[57];
  v200_.v201 = v72;
  v200_.v202 = v71;
  v73 = *(_QWORD*)(a1 + 48);
  if (v73 == 0 || *(_QWORD*)(v73 + 8) == -1) {
    v74 = nullptr;
  }
  else {
    v74 = *(_QWORD**)(a1 + 56);
  }
  CharacterTrailVertex_d35680((void*)(&v198_.v198), v195, v74, &v200_.v200);
  v75 = v198_.v198;
  v76 = vmulq_f32(v198_.v199, COERCE_AS(float32x4_t, GameData_1a829d0));
  v78 = *(int8x16_t*)(a1 + 144);
  v77 = *(int8x16_t*)(a1 + 160);
  LANES128(v79).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v80).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v81).n128_u64[0] = *(_QWORD*)(a1 + 160);
  LANES128(v82).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v83).n128_u64[0] = LANES128(v198_.v199).n128_u64[0];
  v84 = **(float32x4_t***)(a1 + 288);
  LANES128(v85).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v86 = LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
            .n64_u64[0];
  v87 = LANES64_OF(
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v76).n128_u64[0]), 1))
            .n64_u64[0];
  v88 = LANES128(*(v84)).n128_u64[0];
  LANES128(v79).n128_u64[1] = LANES128(v79).n128_u64[0];
  LANES128(v81).n128_u64[1] = LANES128(v80).n128_u64[0];
  LANES128(v83).n128_u64[1] = LANES128(v82).n128_u64[0];
  LANES128(v89).n128_u64[0] = LANES128(v85).n128_u64[0];
  LANES128(v89).n128_u64[1] = v86;
  v90 = vmulq_f32(v81, v89);
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v91 = vmlaq_f32(vmulq_f32(v76, v79), COERCE_AS(float32x4_t, GameData_1a83800),
                  v90);
  LANES128(v90).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v80).n128_u64[1] = LANES128(v90).n128_u64[0];
  LANES128(v90).n128_u64[1] = *(_QWORD*)(a1 + 160);
  LANES128(v77).n128_u64[0] = LANES128(v89).n128_u64[0];
  LANES128(v89).n128_u64[1] = *(_QWORD*)(a1 + 144);
  LANES128(v77).n128_u64[1] = v87;
  v92 = vmlaq_f32(v91, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v90, v77));
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v77).n128_i8[8] =
      vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v93 = vmlsq_f32(v92, v77, v80);
  LANES128(v80).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v94).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v80).n128_u64[1] = LANES128(v80).n128_u64[0];
  *(int8x8_t*)&LANES128(v94).n128_i8[8] =
      vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v95 = vmlaq_f32(vmulq_f32(v80, v93), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v83, v94));
  LANES128(v94).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v94).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
  LANES128(v96).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v82).n128_u64[1] = LANES128(v96).n128_u64[0];
  LANES128(v96).n128_u64[1] = LANES128(v198_.v199).n128_u64[0];
  LANES128(v97).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v97).n128_i8[8] =
      vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v93).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v98 = vmlsq_f32(vmlaq_f32(v95, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v96, v94)),
                  v97, v82);
  LANES128(v97).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v97).n128_u64[1] = LANES128(v97).n128_u64[0];
  v99 = vmulq_f32(v76, v97);
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v78).n128_u64[1] = v86;
  LANES128(v85).n128_u64[1] = LANES128(v76).n128_u64[0];
  LANES128(v76).n128_u64[1] = LANES128(v93).n128_u64[0];
  LANES128(v93).n128_u64[1] = v87;
  v100 = vmlsq_f32(
      vmlaq_f32(vmlaq_f32(v99, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v78, v85)),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v89, v93)),
      v77, v76);
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v77).n128_i8[8] =
      vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v101 =
      vmlaq_f32(vmulq_f32(v80, v100), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v83, v77));
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v77).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v100).n128_u64[0]), 1);
  v102 = vmlaq_f32(v101, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v96, v77));
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v77).n128_i8[8] =
      vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v103 = *(_OWORD*)(a1 + 180);
  LANES128(v84[8]).n128_u32[0] |= 1u;
  v104 = LANES128(v84[1]).n128_i8[12];
  v105 = vaddq_f32(v75, vmulq_n_f32(vmlsq_f32(v102, v77, v82), *(float*)&v103));
  v106 = vsubq_f32(vaddq_f32(v75, vmulq_n_f32(v98, *(float*)&v103)), v194);
  LANES128(v84[2]).n128_u64[0] = LANES128(v106).n128_u64[0];
  v107 = v84[2];
  LANES128(v107).n128_u64[1] = LANES128(v106).n128_u32[2];
  v84[2] = v107;
  if ((v104 & 1) == 0) {
    v108 = *(_QWORD*)(v88 + 24);
    v109 = LANES128(v84[1]).n128_i32[0];
    v192 = v105;
    LANES128(v200_.v200).n128_u64[0] = (unsigned __int64)GameData_1fc0970;
    LANES128(v200_.v200).n128_u64[1] = v88;
    v200_.v201 = v84;
    v200_.v203 = &v200_.v200;
    v110 = g3d_a661a0(v108, v109, (__int64)&v200_.v200, 0);
    if (v200_.v203 == &v200_.v200) {
      v111 = 32;
    }
    else {
      if (v200_.v203 == nullptr) {
      LABEL_82:
        v105 = v192;
        LANES128(v84[1]).n128_u32[2] = v110;
        LANES128(v84[1]).n128_u8[12] = 1;
        goto LABEL_83;
      }
      v111 = 40;
    }
    (*(void (**)(void*))(LANES128(*(v200_.v203)).n128_u64[0] + v111))(
        (void*)v200_.v203);
    goto LABEL_82;
  }
LABEL_83:
  *(_BYTE*)(*(_QWORD*)(v88 + 24) + 504LL) = 1;
  v115 = vsubq_f32(v105, v194);
  v112 = *(float32x4_t**)(*(_QWORD*)(a1 + 288) + 8LL);
  LANES128(v112[2]).n128_u64[0] = LANES128(v115).n128_u64[0];
  v113 = LANES128(*(v112)).n128_u64[0];
  v116 = v112[2];
  LANES128(v112[8]).n128_u32[0] |= 1u;
  v117 = LANES128(v112[1]).n128_u8[12];
  LANES128(v116).n128_u64[1] = LANES128(v115).n128_u32[2];
  v112[2] = v116;
  if ((v117 & 1) != 0) {
    goto LABEL_90;
  }
LABEL_84:
  v118 = *(_QWORD*)(v113 + 24);
  v119 = LANES128(v112[1]).n128_i32[0];
  LANES128(v200_.v200).n128_u64[0] = (unsigned __int64)GameData_1fc0970;
  LANES128(v200_.v200).n128_u64[1] = v113;
  v200_.v201 = v112;
  v200_.v203 = &v200_.v200;
  v120 = g3d_a661a0(v118, v119, (__int64)&v200_.v200, 0);
  if (v200_.v203 == &v200_.v200) {
    v121 = 32;
    goto LABEL_88;
  }
  if (v200_.v203 != nullptr) {
    v121 = 40;
  LABEL_88:
    (*(void (**)(void*))(LANES128(*(v200_.v203)).n128_u64[0] + v121))(
        (void*)v200_.v203);
  }
  LANES128(v112[1]).n128_u32[2] = v120;
  LANES128(v112[1]).n128_u8[12] = 1;
LABEL_90:
  *(_BYTE*)(*(_QWORD*)(v113 + 24) + 504LL) = 1;
  v122 = (__int64)(*(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 288)) >> 4;
  if (v122 >= 2) {
    v123 = 1;
    v124 = 0;
    while (1) {
      LANES128(v115).n128_f32[0] =
          v3 + (float)((float)((float)(unsigned int)v123 / (float)v122) * v44);
      CharacterTrailVertex_d35500((void*)(v195), (float32x4_t**)(a1 + 96),
                                  v115);
      v126 = *(_QWORD**)(a1 + 8);
      v127 = v126[59];
      v200_.v203 = (float32x4_t*)v126[58];
      v200_.v204 = v127;
      v128 = v126[61];
      v200_.v205 = v126[60];
      v200_.v206 = v128;
      v129 = v126[55];
      LANES128(v200_.v200).n128_u64[0] = v126[54];
      LANES128(v200_.v200).n128_u64[1] = v129;
      v131 = (float32x4_t*)v126[56];
      v130 = v126[57];
      v200_.v201 = v131;
      v200_.v202 = v130;
      v132 = *(_QWORD*)(a1 + 48);
      if (v132 == 0 || *(_QWORD*)(v132 + 8) == -1) {
        v133 = nullptr;
      }
      else {
        v133 = *(_QWORD**)(a1 + 56);
      }
      CharacterTrailVertex_d35680((void*)(&v198_.v198), v195, v133,
                                  &v200_.v200);
      v134 = v198_.v198;
      v135 = vmulq_f32(v198_.v199, COERCE_AS(float32x4_t, GameData_1a829d0));
      v137 = *(int8x16_t*)(a1 + 144);
      v136 = *(int8x16_t*)(a1 + 160);
      LANES128(v143).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v145).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v144).n128_u64[0] = LANES128(v198_.v199).n128_u64[0];
      LANES128(v146).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v198_.v199, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v138 = *(float32x4_t**)(*(_QWORD*)(a1 + 288) + v124 + 16);
      LANES128(v139).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v135, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES64(v140).n64_u64[0] =
          LANES64_OF(vqtbl1_s8(v135, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v141).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v135, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES64(v142).n64_u64[0] =
          LANES64_OF(vdup_lane_s32(
                         COERCE_AS(int32x2_t, LANES128(v135).n128_u64[0]), 1))
              .n64_u64[0];
      LANES128(v153).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v135, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v143).n128_u64[1] = LANES128(v143).n128_u64[0];
      LANES128(v144).n128_u64[1] = LANES128(v145).n128_u64[0];
      LANES128(v145).n128_u64[1] = LANES128(v146).n128_u64[0];
      LANES128(v146).n128_u64[1] = LANES128(v198_.v199).n128_u64[0];
      v147 = LANES128(*(v138)).n128_u64[0];
      LANES128(v148).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v149).n128_u64[0] = *(_QWORD*)(a1 + 160);
      LANES128(v150).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v151).n128_u64[0] = LANES128(v139).n128_u64[0];
      LANES128(v149).n128_u64[1] = LANES128(v148).n128_u64[0];
      LANES128(v150).n128_u64[1] = LANES128(v150).n128_u64[0];
      *(int8x8_t*)&LANES128(v151).n128_i8[8] = v140;
      v152 = vmlaq_f32(vmulq_f32(v135, v150),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v149, v151));
      LANES128(v149).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v148).n128_u64[1] = LANES128(v149).n128_u64[0];
      LANES128(v149).n128_u64[1] = *(_QWORD*)(a1 + 160);
      LANES128(v136).n128_u64[0] = LANES128(v141).n128_u64[0];
      *(int32x2_t*)&LANES128(v136).n128_i8[8] = v142;
      *(int8x8_t*)&LANES128(v153).n128_i8[8] =
          vqtbl1_s8(v135, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v154 = vmlsq_f32(vmlaq_f32(v152, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v149, v136)),
                       v153, v148);
      LANES128(v148).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v148).n128_i8[8] =
          vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v155 = vmlaq_f32(vmulq_f32(v143, v154),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v144, v148));
      LANES128(v148).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v148).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v154).n128_u64[0]), 1);
      LANES128(v156).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v157 = *(_OWORD*)(a1 + 180);
      LANES128(v138[8]).n128_u32[0] |= 1u;
      v158 = LANES128(v138[1]).n128_i8[12];
      *(int8x8_t*)&LANES128(v156).n128_i8[8] =
          vqtbl1_s8(v154, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v159 = vsubq_f32(
          vaddq_f32(v134,
                    vmulq_n_f32(vmlsq_f32(vmlaq_f32(v155,
                                                    COERCE_AS(float32x4_t,
                                                              GameData_1a83800),
                                                    vmulq_f32(v146, v148)),
                                          v156, v145),
                                *(float*)&v157)),
          v194);
      LANES128(v138[2]).n128_u64[0] = LANES128(v159).n128_u64[0];
      v160 = v138[2];
      LANES128(v160).n128_u64[1] = LANES128(v159).n128_u32[2];
      v138[2] = v160;
      if ((v158 & 1) == 0) {
        break;
      }
    LABEL_107:
      LANES128(v165).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v166).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(_BYTE*)(*(_QWORD*)(v147 + 24) + 504LL) = 1;
      LANES128(v167).n128_u64[0] = LANES128(v137).n128_u64[0];
      LANES128(v165).n128_u64[1] = LANES128(v165).n128_u64[0];
      *(int8x8_t*)&LANES128(v167).n128_i8[8] = v140;
      LANES128(v139).n128_u64[1] = LANES128(v166).n128_u64[0];
      LANES128(v141).n128_u64[1] = LANES128(v137).n128_u64[0];
      v168 = *(float32x4_t**)(*(_QWORD*)(a1 + 288) + v124 + 24);
      v169 = vmlaq_f32(vmulq_f32(v135, v165),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v167, v139));
      LANES128(v167).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v170 = LANES128(*(v168)).n128_u64[0];
      LANES128(v166).n128_u64[1] = LANES128(v167).n128_u64[0];
      *(int32x2_t*)&LANES128(v167).n128_i8[8] = v142;
      LANES128(v168[8]).n128_u32[0] |= 1u;
      v171 = LANES128(v168[1]).n128_i8[12];
      v172 = vmlsq_f32(vmlaq_f32(v169, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v141, v167)),
                       v153, v166);
      LANES128(v167).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v167).n128_i8[8] =
          vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v173 = vmlaq_f32(vmulq_f32(v143, v172),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v144, v167));
      LANES128(v167).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v167).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v172).n128_u64[0]), 1);
      v174 = vmlaq_f32(v173, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v146, v167));
      LANES128(v167).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v167).n128_i8[8] =
          vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v115 = vsubq_f32(vaddq_f32(v134, vmulq_n_f32(vmlsq_f32(v174, v167, v145),
                                                   *(float*)&v157)),
                       v194);
      LANES128(v168[2]).n128_u64[0] = LANES128(v115).n128_u64[0];
      v175 = v168[2];
      LANES128(v175).n128_u64[1] = LANES128(v115).n128_u32[2];
      v168[2] = v175;
      if ((v171 & 1) != 0) {
        goto LABEL_95;
      }
      v176 = *(_QWORD*)(v170 + 24);
      v177 = LANES128(v168[1]).n128_i32[0];
      LANES128(v200_.v200).n128_u64[0] = (unsigned __int64)GameData_1fc0970;
      LANES128(v200_.v200).n128_u64[1] = v170;
      v200_.v201 = v168;
      v200_.v203 = &v200_.v200;
      v178 = g3d_a661a0(v176, v177, (__int64)&v200_.v200, 0);
      if (v200_.v203 == &v200_.v200) {
        v125 = 32;
      }
      else {
        if (v200_.v203 == nullptr) {
          goto LABEL_94;
        }
        v125 = 40;
      }
      (*(void (**)(void*))(LANES128(*(v200_.v203)).n128_u64[0] + v125))(
          (void*)v200_.v203);
    LABEL_94:
      LANES128(v168[1]).n128_u32[2] = v178;
      LANES128(v168[1]).n128_u8[12] = 1;
    LABEL_95:
      ++v123;
      v124 += 16;
      *(_BYTE*)(*(_QWORD*)(v170 + 24) + 504LL) = 1;
      v122 = (__int64)(*(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 288)) >> 4;
      if (v122 <= v123) {
        return;
      }
    }
    v161 = *(_QWORD*)(v147 + 24);
    v162 = LANES128(v138[1]).n128_i32[0];
    v179 = v143;
    v180 = v144;
    v193 = v134;
    LANES128(v200_.v200).n128_u64[0] = (unsigned __int64)GameData_1fc0970;
    LANES128(v200_.v200).n128_u64[1] = v147;
    v200_.v201 = v138;
    v200_.v203 = &v200_.v200;
    v181 = v146;
    v182 = LANES64(v140).n64_u64[0];
    v183 = v153;
    v184 = v157;
    v185 = v135;
    v186 = LANES64(v142).n64_u64[0];
    v187 = LANES128(v141).n128_u64[0];
    v188 = LANES128(v139).n128_u64[0];
    v189 = v137;
    v190 = v145;
    v163 = g3d_a661a0(v161, v162, (__int64)&v200_.v200, 0);
    if (v200_.v203 == &v200_.v200) {
      v164 = 32;
    }
    else {
      if (v200_.v203 == nullptr) {
      LABEL_106:
        v145 = v190;
        v134 = v193;
        LANES128(v139).n128_u64[0] = v188;
        v137 = v189;
        v143 = v179;
        LANES128(v138[1]).n128_u32[2] = v163;
        LANES128(v138[1]).n128_u8[12] = 1;
        LANES64(v142).n64_u64[0] = v186;
        LANES128(v141).n128_u64[0] = v187;
        {
          __typeof__(v157) z_ = (__typeof__(v157)){0};
          LODWORD(z_) = v184;
          v157 = z_;
        }
        v135 = v185;
        LANES64(v140).n64_u64[0] = v182;
        v153 = v183;
        v144 = v180;
        v146 = v181;
        goto LABEL_107;
      }
      v164 = 40;
    }
    (*(void (**)(void*))(LANES128(*(v200_.v203)).n128_u64[0] + v164))(
        (void*)v200_.v203);
    goto LABEL_106;
  }
}

void game_character_10bda00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int8x16_t v5;
  __int128 v6;
  float v7;
  float v8;
  int v9;
  float v10;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int32 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  __int128 v35;
  float32x4_t* v36;
  unsigned __int32 v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float v43_dist;
  float32x4_t* v44;
  float32x4_t v45;
  unsigned __int64 v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  int16x4_t v63;
  int v64;
  unsigned int v65;
  float32x4_t v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  unsigned __int8 explicit;
  int* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  int8x16_t v85;
  float32x2_t v86[4];
  struct {
    __int128 v87;
    __int64 v88;
    char gap88_[8];
    __int128* v89;
  } v87_;

  if ((*(_BYTE*)(a1 + 100) & 1) != 0) {
    goto LABEL_23;
  }
  v2 = game_109f1e0(*(_QWORD*)(a1 + 8), "Jnt_C_Hip");
  if (v2 != 0) {
    v3 = v2;
    v4 = GameRoutine_10bc1a0(a1);
    v5 = *(int8x16_t*)(*(_QWORD*)(a1 + 8) + 304LL);
    *(_QWORD*)&v6 = LANES128(v5).n128_u32[0] | 0x4348000000000000LL;
    *((_QWORD*)&v6 + 1) = LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u32[0];
    *(_OWORD*)LANES64(v86[0]).n64_u64 = v6;
    LANES128(v5).n128_u32[1] = -1027080192;
    LANES128(v5).n128_u64[1] = *((_QWORD*)&v6 + 1);
    v85 = v5;
    GameRoutine_1085a10((void*)(&v87_.v87), v4 + 160, v86, &v85, 0);
    v7 = *(float*)(v3 + 52);
    v8 = *((float*)&v87_.v87 + 1);
    v9 = *(_DWORD*)(a1 + 112);
    v10 = (float)(v7 + -0x1.3333340000000p-3f) +
          (float)((float)(v7 - *(float*)(a1 + 104)) * 0x1.3333340000000p+0f);
    *(_DWORD*)(a1 + 112) = v9 + 1;
    if (!(v10 <= v8) | v9 < 5) {
      goto LABEL_21;
    }
    *(_BYTE*)(a1 + 100) = 1;
    v12 = GameData_212d448[0];
    if (*GameData_212d448[0] == 0 ||
        (v13 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
        (*(_BYTE*)(v13 + 114) & 0x80) == 0) {
      v14 = game_108c8a0(*(_DWORD*)(a1 + 108));
      v15 = TumbleHorse_10bc820(a1, v14);
      if (v15 != 0) {
        v16 = *(_QWORD*)(a1 + 8);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire) &
             1) == 0) {
          v84 = v15;
          v83 = __cxa_guard_acquire((__int64)GameData_212ed90);
          v15 = v84;
          if (v83 != 0) {
            *GameData_212ed88 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
            __cxa_guard_release((__int64)GameData_212ed90);
            v15 = v84;
          }
        }
        v17 = *(_QWORD*)(v16 + 512);
        v18 = v17;
        while (v18 != *(_QWORD*)(v16 + 504)) {
          v19 = *(_DWORD*)(v18 - 16);
          v18 -= 16;
          v17 -= 16;
          if (v19 == *GameData_212ed88) {
            if (*(_QWORD*)(v16 + 512) != v17 && *(_QWORD*)(v17 + 8) != 0) {
              AnimLayerCtrlModule_ce3880(*(_QWORD*)(v17 + 8), v15, 1);
              v20 = *(_QWORD*)(GameRoutine_10bc1a0(a1) + 72);
              *(_DWORD*)(v20 + 120) = v14;
              *(_DWORD*)(v20 + 124) = 0;
            }
            break;
          }
        }
      }
      v21 = GameRoutine_10bc1a0(a1);
      if (v21 != 0 && (*(_BYTE*)(v21 + 340) & 9) == 0 && *v12 != 0) {
        v79 = *(_QWORD*)(*v12 + 128);
        if (v79 != 0) {
          kaneko_disposable_10ac520(v79 + 352,
                                    (_DWORD*)(*(_QWORD*)(a1 + 8) + 304LL), 1);
        }
      }
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        goto LABEL_21;
      }
      v67 = GameRoutine_10bc1a0(a1);
      if (v67 == 0) {
        goto LABEL_21;
      }
      v68 = v67;
      if ((ProcManager_10ff3b0(v67) & 1) == 0) {
        goto LABEL_21;
      }
      v69 = *(_DWORD*)(v68 + 340);
      if ((v69 & 0x800000) != 0) {
        goto LABEL_21;
      }
      v70 = *(_DWORD*)(*(_QWORD*)(v68 + 72) + 120LL);
      if (v70 > -77626399) {
        if (v70 != 1400556095) {
          v71 = -77626398;
        LABEL_67:
          if (v70 == v71) {
            goto LABEL_68;
          }
        LABEL_21:
          *(float*)(a1 + 104) = v7;
          goto LABEL_22;
        }
      }
      else if (v70 != -972548316) {
        v71 = -93581017;
        goto LABEL_67;
      }
    LABEL_68:
      if (*v12 == 0 || (v80 = *(_QWORD*)(*v12 + 8)) == 0 || (v69 & 1) != 0 ||
          (*(_DWORD*)(v80 + 112) & 0x10000000) == 0) {
        GameRoutine_10fec60(v68, 0x1.ddddde0000000p-2f);
      }
      goto LABEL_21;
    }
    v72 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                    memory_order_acquire);
    v74 = GameData_212ed88;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212ed90) != 0) {
      *v74 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
      __cxa_guard_release((__int64)GameData_212ed90);
    }
    v75 = *(_QWORD*)(v72 + 512);
    v76 = v75;
    while (v76 != *(_QWORD*)(v72 + 504)) {
      v77 = *(_DWORD*)(v76 - 16);
      v76 -= 16;
      v75 -= 16;
      if (v77 == *v74) {
        if (*(_QWORD*)(v72 + 512) != v75) {
          v78 = *(_QWORD*)(v75 + 8);
          if (v78 != 0) {
            SkeletalBlendCallback_ce4aa0(v78, 1, 0x0.0p+0f);
          }
        }
        break;
      }
    }
  }
LABEL_22:
  if (*(_BYTE*)(a1 + 100) != 1) {
    return;
  }
LABEL_23:
  if (*(_BYTE*)(a1 + 16) != 0) {
    v22 = 0x1.0000000000000p+0f;
  }
  else {
    v22 = 0x1.0000000000000p-1f;
  }
  v23 = GameRoutine_10bc1a0(a1);
  v24 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)&v87_.v87 = GameData_20077d8;
  *((_QWORD*)&v87_.v87 + 1) = v23;
  v87_.v89 = &v87_.v87;
  v87_.v88 = 1;
  game_character_1116460((void*)(v86), (__int128*)(v24 + 304),
                         (__int64)&v87_.v87, nullptr, nullptr, 0, 0, v22);
  if (v87_.v89 == &v87_.v87) {
    v25 = 32;
  }
  else {
    if (v87_.v89 == nullptr) {
      goto LABEL_31;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v87_.v89 + v25))((__int64)v87_.v89);
LABEL_31:
  v26 = LANES64(v86[1]).n64_u32[0];
  v27 = *(_OWORD*)LANES64(v86[2]).n64_u64;
  *(float32x2_t*)(a1 + 64) = v86[0];
  *(_QWORD*)(a1 + 80) = v27;
  v28 = *(_OWORD*)(a1 + 64);
  v29 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v28 + 1) = v26;
  *((_QWORD*)&v29 + 1) = DWORD2(v27);
  *(_OWORD*)(a1 + 64) = v28;
  *(_OWORD*)(a1 + 80) = v29;
  v30 = GameRoutine_10bc1a0(a1);
  v31 = *(_QWORD*)(v30 + 392);
  v32 = *(_QWORD*)(v30 + 400);
  if (v32 == 0) {
    if (*(_DWORD*)(v31 + 11784) != 33) {
      goto LABEL_40;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                            memory_order_relaxed);
  v33 = *(_DWORD*)(v31 + 11784);
  if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v33 != 33) {
      goto LABEL_40;
    }
  LABEL_38:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v82 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v82;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    v34 = DWORD2(GameData_21a6180);
    *(_QWORD*)(a1 + 80) = GameData_21a6180;
    v35 = *(_OWORD*)(a1 + 80);
    *((_QWORD*)&v35 + 1) = v34;
    *(_OWORD*)(a1 + 80) = v35;
    goto LABEL_40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
  std___1___shared_weak_count___release_weak(v32);
  if (v33 == 33) {
    goto LABEL_38;
  }
LABEL_40:
  v36 = *(float32x4_t**)(a1 + 8);
  v37 = *(_DWORD*)(a1 + 68);
  v38 = v36[19];
  v39 = v38;
  LANES128(v39).n128_u32[1] = v37;
  v40 = vsubq_f32(v38, v39);
  v41 = vmulq_f32(v40, v40);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  v43_dist =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_f32[0];
  if (v43_dist < 0x0.0p+0f || v43_dist > 0x0.0p+0f) {
    LANES128(v36[19]).n128_u32[0] = LANES128(v38).n128_u32[0];
    LANES128(v36[19]).n128_u32[1] = v37;
    v42 = v36[19];
    LANES128(v36[18]).n128_u32[2] |= 1u;
    LANES128(v42).n128_u64[1] = LANES128(v38).n128_u32[2];
    v36[19] = v42;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v81 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v81;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  v43 = *(int8x16_t*)(a1 + 80);
  v44 = *(float32x4_t**)(a1 + 8);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v46 = LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v47).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v49 = vmulq_f32(v45, v47);
  v50 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v43);
  *(int8x8_t*)&LANES128(v48).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v43).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v47).n128_u64[1] = v46;
  LANES128(v51).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v51).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
          .n64_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
  v52 = vaddq_f32(v50, v43);
  v53 = vsqrtq_f32(vaddq_f32(v52, v52));
  v54 = vdivq_f32(vmlsq_f32(v49, v47, v48), v53);
  LANES128(v54).n128_u32[3] = LANES128_OF(vmulq_f32(v53, v51)).n128_u32[3];
  LANES128(v53).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v53).n128_u64[1] = 0x3400000034000000LL;
  v55 = vbslq_s8(vcgeq_f32(v53, v52), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v54);
  v56 = *(int8x16_t*)(a1 + 32);
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[0] = LANES128(v55).n128_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v52).n128_u64[1] = LANES128(v52).n128_u64[0];
  LANES128(v57).n128_u64[1] = LANES128(v48).n128_u64[0];
  *(int8x8_t*)&LANES128(v51).n128_i8[8] =
      vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v59 = vmlaq_f32(vmulq_f32(v56, v52), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v57, v51));
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v58).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v56).n128_u64[0]), 1);
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v48).n128_u64[1] = LANES128(v51).n128_u64[0];
  LANES128(v51).n128_u64[1] = LANES128(v55).n128_u64[0];
  *(int8x8_t*)&LANES128(v60).n128_i8[8] =
      vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v61 = vmlsq_f32(vmlaq_f32(v59, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v51, v58)),
                  v60, v48);
  v62 = v44[21];
  *(float32x4_t*)LANES64(v86[0]).n64_u64 = v61;
  LANES64(v63).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v62, v61)))).n64_u64[0];
  if ((LANES64(v63).n64_u8[0] & 1) != 0 || (LANES64(v63).n64_u8[2] & 1) != 0 ||
      (LANES64(v63).n64_u8[4] & 1) != 0 || (LANES64(v63).n64_u8[6] & 1) != 0) {
    v64 = LANES128(v44[18]).n128_u32[2] | 1;
    LANES128(v44[21]).n128_u64[0] = LANES128(v61).n128_u64[0];
    LANES128(v44[21]).n128_u64[1] =
        LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0];
    LANES128(v44[18]).n128_u32[2] = v64;
    math_622ac0((void*)(&v87_.v87), v86);
    v65 = DWORD2(v87_.v87);
    LANES128(v44[20]).n128_u64[0] = v87_.v87;
    v66 = v44[20];
    LANES128(v66).n128_u64[1] = v65;
    v44[20] = v66;
  }
}

#pragma GCC visibility pop
