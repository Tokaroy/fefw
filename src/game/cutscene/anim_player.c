#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a6ea10(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, long double);
__int64 AnimCtrlModule_a77840(_QWORD, _QWORD, _QWORD);
__int64 AnimCtrlModule_a77c00(_QWORD, _QWORD);
__int64 AnimLayerCtrlModule_ce3880(_QWORD, _QWORD, _QWORD, float);
__int64 BlendLayer_d2ae40(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a539c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 MaterialAnimModule_be6340(_QWORD);
__int64 ResFile_5e5f00(_QWORD);
__int64 SkeletalBlendCallback_ce4b70(_QWORD, _QWORD, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212eaa0;
extern _UNKNOWN* GameData_212ed90;
extern __int64 (*GameData_20ddb68[])();
extern __int64 (*GameData_20ddbe8[])();
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ea88;
extern int* GameData_212ea98;
extern int* GameData_212ed88;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
void __attribute__((noreturn)) String_60a230(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 game_cutscene_AnimPlayer_PlayMaterialAnim_alt1(__int64 result,
                                                       __int64 a2, _QWORD* a3,
                                                       long double a4);
__int64 game_cutscene_AnimPlayer_LoadMaterialAnim_alt1(
    __int64 a1, __int64 a2,
    _QWORD* a3) __asm__("game_cutscene_AnimPlayer_LoadMaterialAnim");
__int64 MaterialAnimModule_be6340_alt1(__int64 result) __asm__(
    "MaterialAnimModule_be6340");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
__int64 game_cutscene_AnimPlayer_PlayMaterialAnim_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 wld_MaterialAnimModule_LoadAnimAsync_alt1(
    _QWORD*, const char*, __int64,
    __int64) __asm__("wld_MaterialAnimModule_LoadAnimAsync");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8*
GameRoutine_a539c0_alt1(unsigned __int8* result, __int64,
                        unsigned __int64) __asm__("GameRoutine_a539c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cutscene_AnimPlayer_LoadMaterialAnim(__int64* a1, _QWORD* a2,
                                               _QWORD* a3);
__attribute__((swiftcall)) void memory_a6ea10(PSEUDO_X8, __int64, int);
__int64 AnimCtrlModule_a77840_alt1(__int64, _QWORD*, int);
__int64 AnimCtrlModule_a77c00_alt1(__int64, int);
__int64 AnimLayerCtrlModule_ce3880_alt1(__int64, __int64, int);
__int64 GameRoutine_1a09ce0_alt2(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 MaterialAnimModule_be6340_alt2(__int64 result);
__int64 ResFile_5e5f00_alt1(__int64);
__int64 fw_memory_HeapManager_Allocate_alt2(__int64, __int64, __int64,
                                            unsigned int);
__int64 fw_text_String_CopyTerminated_alt2(__int64*, __int64, unsigned __int64);
__int64 std___1___hash_memory_alt2(__int64, unsigned __int64);
__int64 wld_Crc32_alt1(int, unsigned __int8*, unsigned __int64);
__int64 wld_MaterialAnimModule_LoadAnimAsync_alt2(_QWORD*, const char*, __int64,
                                                  __int64);
bool GameRoutine_ad7390_alt2(_QWORD*);
char* GameRoutine_60a060_alt2(char*, __int64, unsigned __int64);
int __cxa_guard_acquire_alt1(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int8* GameRoutine_a539c0_alt2(unsigned __int8* result, __int64,
                                         unsigned __int64);
void BlendLayer_d2ae40_alt1(__int64);
void SkeletalBlendCallback_ce4b70_alt1(__int64, int, long double);
void __attribute__((noreturn)) GameRoutine_60a210_alt2();
void __attribute__((noreturn)) GameRoutine_65c760_alt2();
void __attribute__((noreturn)) String_60a230_alt1();
void __attribute__((noreturn)) String_60a250_alt2(const char*);
void __cxa_guard_release_alt1(__int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64);
void game_cutscene_AnimPlayer_PlayMaterialAnim(__int64* a1, __int64 a2,
                                               _QWORD* a3, float a4);

void game_cutscene_AnimPlayer_PlayMaterialAnim(__int64* a1, __int64 a2,
                                               _QWORD* a3, float a4)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  float v12;
  _QWORD* v13;
  __int64 v14;
  bool v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8 v19;
  int* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  float v27;
  _QWORD* v28;
  __int64 v29;
  bool v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 i;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int8 v43;
  int* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  float v51;
  _QWORD* v52;
  unsigned __int64 v53;
  char* v54;
  char* v55;
  unsigned __int64 v56;
  char* v57;
  char* v58;
  char* v59;
  char* v60;
  signed __int64 v61;
  __int64 v62;
  char* v63;
  int v64;
  char* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  bool v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  int v77;
  __int64 v78;
  char* v79;
  char* v80;
  __int64 v81;
  float v82;
  unsigned __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64* v89;
  __int64* v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  float* v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  float v111;
  _QWORD* v112;
  __int64 v113;
  int v114;
  int v115;
  __int64* v116;
  float v117;
  _QWORD* v118;
  __int64 v119;
  int v120;
  int v121;
  __int64* v122;
  float v123;
  _QWORD* v124;
  __int64 v125;
  int v126;
  int v127;
  struct {
    _QWORD v128[2];
    __int64 v129;
    char gap40_[8];
    float* v130;
    char gap56_[26];
    char v131;
  } v128_;
  struct {
    __int64 v132;
    unsigned __int64 v133;
    char* v134;
    char gap112_[8];
    unsigned __int64 v135;
  } v132_;

  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v5 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v110 = a1;
    v111 = a4;
    v112 = a3;
    v113 = a2;
    v114 = __cxa_guard_acquire_alt1((__int64)GameData_212ed90),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
    a4 = v111;
    a2 = v113;
    a3 = v112;
    v115 = v114;
    a1 = v110;
    if (v115 != 0) {
      *v5 = wld_Crc32_alt1(0, "AnimLayerCtrlModule", 0x13u),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212ed90),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      a4 = v111;
      a2 = v113;
      a3 = v112;
      a1 = v110;
    }
  }
  v6 = *(_QWORD*)(a2 + 512);
  v7 = v6;
  while (v7 != *(_QWORD*)(a2 + 504)) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
    if (v8 == *v5) {
      if (*(_QWORD*)(a2 + 512) != v6) {
        v9 = *(_QWORD*)(v6 + 8);
        if (v9 != 0) {
          v10 = a3[7];
          if (v10 != 0 && *(_BYTE*)(v10 + 165) == 1) {
            v11 = a1;
            v12 = a4;
            v13 = a3;
            v14 = a2;
            v15 = GameRoutine_ad7390_alt2((_QWORD*)a3[7]),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
            a4 = v12;
            a2 = v14;
            a3 = v13;
            v16 = v15;
            a1 = v11;
            if (v16) {
              v17 = v13[7];
              if (v17 != 0) {
                if (*(_BYTE*)(v17 + 165) == 1 &&
                    GameRoutine_ad7390_alt2((_QWORD*)v17) &&
                    *(_BYTE*)((v18 = v13[7]) + 165) == 1 &&
                    GameRoutine_ad7390_alt2((_QWORD*)v13[7])) {
                  v17 = ResFile_5e5f00_alt1(
                      *(_QWORD*)(*(_QWORD*)(v18 + 8) + 592LL)),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                }
                else {
                  v17 = 0;
                }
              }
              memory_a6ea10((void*)(v128_.v128), v17, 0),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v34 = *(_QWORD*)(v9 + 32);
              if (*(_BYTE*)(v34 + 52) == 1) {
                *(_BYTE*)(v34 + 52) = 0;
              }
              v35 = *(_QWORD*)(v34 + 24);
              for (i = *(_QWORD*)(v34 + 32); v35 != i; v35 += 56) {
                BlendLayer_d2ae40_alt1(v35),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              AnimLayerCtrlModule_ce3880_alt1(v9, (__int64)v128_.v128, 0),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              *(float*)&v37 = v12;
              SkeletalBlendCallback_ce4b70_alt1(v9, 0, v37),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if ((v128_.v128[0] & 1) != 0 && v128_.v129 != 0) {
                v38 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v38 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v128_.v129),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              a4 = v12;
              a1 = v11;
              a3 = v13;
              a2 = v14;
            }
          }
          goto LABEL_52;
        }
      }
      break;
    }
  }
  v19 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                             memory_order_acquire);
  v20 = GameData_212ea88;
  if ((v19 & 1) == 0) {
    v122 = a1;
    v123 = a4;
    v124 = a3;
    v125 = a2;
    v126 = __cxa_guard_acquire_alt1((__int64)GameData_212ea90),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
    a4 = v123;
    a2 = v125;
    a3 = v124;
    v127 = v126;
    a1 = v122;
    if (v127 != 0) {
      *v20 = wld_Crc32_alt1(0, "AnimCtrlModule", 0xEu),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212ea90),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      a4 = v123;
      a2 = v125;
      a3 = v124;
      a1 = v122;
    }
  }
  v21 = *(_QWORD*)(a2 + 512);
  v22 = v21;
  while (v22 != *(_QWORD*)(a2 + 504)) {
    v23 = *(_DWORD*)(v22 - 16);
    v22 -= 16;
    v21 -= 16;
    if (v23 == *v20) {
      if (*(_QWORD*)(a2 + 512) != v21) {
        v24 = *(_QWORD*)(v21 + 8);
        if (v24 != 0) {
          v25 = a3[7];
          if (v25 != 0 && *(_BYTE*)(v25 + 165) == 1) {
            v26 = a1;
            v27 = a4;
            v28 = a3;
            v29 = a2;
            v30 = GameRoutine_ad7390_alt2((_QWORD*)a3[7]),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
            a4 = v27;
            a2 = v29;
            a3 = v28;
            v31 = v30;
            a1 = v26;
            if (v31) {
              v32 = v28[7];
              if (v32 != 0) {
                if (*(_BYTE*)(v32 + 165) == 1 &&
                    GameRoutine_ad7390_alt2((_QWORD*)v32) &&
                    *(_BYTE*)((v33 = v28[7]) + 165) == 1 &&
                    GameRoutine_ad7390_alt2((_QWORD*)v28[7])) {
                  v32 = ResFile_5e5f00_alt1(
                      *(_QWORD*)(*(_QWORD*)(v33 + 8) + 592LL)),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                }
                else {
                  v32 = 0;
                }
              }
              memory_a6ea10((void*)(v128_.v128), v32, 0),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              AnimCtrlModule_a77c00_alt1(v24, 0),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              AnimCtrlModule_a77840_alt1(v24, v128_.v128, 0),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v39 = **(_QWORD**)(v24 + 72);
              if (v39 != 0) {
                v40 = *(_QWORD*)(v39 + 16);
                if (v40 != 0) {
                  (*(void (**)(__int64, float, float, float))(v40 + 16))(
                      *(_QWORD*)(v40 + 24), v27, *(float*)(v40 + 4),
                      *(float*)(v40 + 8)),
                      v41 = COERCE_AS(__typeof__(v41),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  *(_DWORD*)v40 = v41;
                  *(_WORD*)(v39 + 168) = 0;
                }
              }
              a4 = v27;
              a3 = v28;
              *(_BYTE*)(v24 + 249) = 1;
              if ((v128_.v128[0] & 1) != 0 && v128_.v129 != 0) {
                v42 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v128_.v129),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                a4 = v27;
                a3 = v28;
              }
              a1 = v26;
              a2 = v29;
            }
          }
        }
      }
      break;
    }
  }
LABEL_52:
  v43 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                             memory_order_acquire);
  v44 = GameData_212ea98;
  if ((v43 & 1) == 0) {
    v116 = a1;
    v117 = a4;
    v118 = a3;
    v119 = a2;
    v120 = __cxa_guard_acquire_alt1((__int64)GameData_212eaa0),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
    a4 = v117;
    a2 = v119;
    a3 = v118;
    v121 = v120;
    a1 = v116;
    if (v121 != 0) {
      *v44 = wld_Crc32_alt1(0, "MaterialAnimModule", 0x12u),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_212eaa0),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      a4 = v117;
      a2 = v119;
      a3 = v118;
      a1 = v116;
    }
  }
  v45 = *(_QWORD*)(a2 + 512);
  v46 = v45;
  while (v46 != *(_QWORD*)(a2 + 504)) {
    v47 = *(_DWORD*)(v46 - 16);
    v46 -= 16;
    v45 -= 16;
    if (v47 == *v44) {
      if (*(_QWORD*)(a2 + 512) == v45) {
        return;
      }
      v48 = *(_QWORD*)(v45 + 8);
      if (v48 == 0) {
        return;
      }
      v49 = a3[7];
      if (v49 == 0) {
        return;
      }
      if (*(_BYTE*)(v49 + 165) != 1) {
        return;
      }
      v50 = a1;
      v51 = a4;
      v52 = a3;
      if (!GameRoutine_ad7390_alt2((_QWORD*)a3[7])) {
        return;
      }
      if ((v52[1] & 1) != 0) {
        fw_text_String_CopyTerminated_alt2(&v132_.v132, v52[3], v52[2]),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v53 = v52[2];
        v132_.v132 = v52[1];
        v132_.v133 = v53;
        v132_.v134 = (const char*)v52[3];
      }
      v54 = (char*)&v132_.v132 + 1;
      if ((v132_.v132 & 1) != 0) {
        v55 = v132_.v134;
      }
      else {
        v55 = (char*)&v132_.v132 + 1;
      }
      v56 = (unsigned __int64)(unsigned __int8)v132_.v132 >> 1;
      if ((v132_.v132 & 1) != 0) {
        v56 = v132_.v133;
      }
      if (v56 != 0) {
        v57 = (char*)&v55[v56];
        v58 = (char*)&v55[v56];
        v59 = (char*)v55;
        v60 = (char*)&v55[v56];
        while (1) {
          v61 = v58 - v59;
          v62 = (v58 - v59) & 3;
          if (v62 != 0) {
            v63 = v59;
            while (1) {
              v64 = (unsigned __int8)*v63++;
              if (v64 == 46) {
                break;
              }
              --v62;
              v59 = v63;
              if (v62 == 0) {
                goto LABEL_77;
              }
            }
            if (v59 + 1 == v57) {
              goto LABEL_106;
            }
            v65 = v59++;
          }
          else {
            v63 = v59;
          LABEL_77:
            if ((unsigned __int64)(v61 - 1) < 3) {
            LABEL_106:
              if (v60 != v57) {
                v66 = v60 - v55;
                if (v60 - v55 != -1) {
                  if (v66 > v56) {
                    String_60a230_alt1(),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  if (v66 == -7) {
                    if ((v132_.v132 & 1) != 0) {
                      v132_.v133 = v60 - v55;
                      *((_BYTE*)v132_.v134 - 7) = 0;
                    }
                    else {
                      LOBYTE(v132_.v132) = -14;
                      v128_.v131 = 0;
                    }
                  }
                  else {
                    GameRoutine_a539c0_alt2((unsigned __int8*)&v132_.v132, v66,
                                            v66 + 6),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                }
              }
              break;
            }
            v65 = v63 + 2;
            while (1) {
              if (*(v65 - 2) == 46) {
                v59 = v65 - 1;
                if (v65 - 1 == v57) {
                  goto LABEL_106;
                }
                v65 -= 2;
                goto LABEL_95;
              }
              if (*(v65 - 1) == 46) {
                if (v65 == v57) {
                  goto LABEL_106;
                }
                v59 = v65--;
                goto LABEL_95;
              }
              if (*v65 == 46) {
                v59 = v65 + 1;
                if (v65 + 1 != v57) {
                  goto LABEL_95;
                }
                goto LABEL_106;
              }
              v59 = v65 + 2;
              if (v65[1] == 46) {
                break;
              }
              v65 += 4;
              if (v59 == v57) {
                goto LABEL_106;
              }
            }
            if (v65 + 2 == v57) {
              goto LABEL_106;
            }
            ++v65;
          }
        LABEL_95:
          if (*v59 == 98) {
            if (v65 + 2 == v57) {
              goto LABEL_106;
            }
            if (v65[2] == 102) {
              if (v65 + 3 == v57) {
                goto LABEL_106;
              }
              if (v65[3] == 114) {
                if (v65 + 4 == v57) {
                  goto LABEL_106;
                }
                if (v65[4] == 101) {
                  if (v65 + 5 == v57) {
                    goto LABEL_106;
                  }
                  if (v65[5] == 115) {
                    v60 = v65;
                  }
                }
              }
            }
          }
        }
      }
      GameRoutine_1a09ce0_alt2((__int64)&v132_.v132, ".matanimb", 9u),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v132_.v132 & 1) != 0) {
        v67 = v132_.v133;
      }
      else {
        v67 = (unsigned __int64)(unsigned __int8)v132_.v132 >> 1;
      }
      v68 = *((unsigned __int8*)v52 + 8);
      v69 = v52[2];
      if ((v132_.v132 & 1) != 0) {
        v54 = v132_.v134;
      }
      v70 = (v68 & 1) == 0;
      v71 = v68 >> 1;
      if (v70) {
        v72 = (__int64)v52 + 9;
      }
      else {
        v72 = v52[3];
      }
      if (v70) {
        v73 = v71;
      }
      else {
        v73 = v69;
      }
      if (v73 != 0) {
        v74 = ~v72;
        v75 = v72 - 1;
        v76 = 0;
        while (v73 != v76) {
          v77 = *(unsigned __int8*)(v75 + v73);
          ++v76;
          ++v74;
          --v75;
          if (v77 == 47) {
            if (v73 + 1 != v76) {
              if (v73 < v76) {
                String_60a250_alt2("string_view::substr"),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v72 = v73 - v74;
              v73 = v76 - 1;
            }
            break;
          }
        }
      }
      v78 = std___1___hash_memory_alt2(v72, v73),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      v80 = (char*)*v50;
      v79 = (char*)v50[1];
      v81 = v78;
      if ((char*)*v50 == v79) {
        v82 = v51;
        goto LABEL_146;
      }
      v82 = v51;
      v83 = v79 - v80 - 8;
      if ((~(_BYTE)v83 & 0x18) != 0) {
        v84 = ((unsigned __int8)((unsigned int)v83 >> 3) + 1) & 3;
        while (*(_QWORD*)v80 != v78) {
          v80 += 8;
          if (--v84 == 0) {
            goto LABEL_137;
          }
        }
      LABEL_146:
        if (v80 != v79) {
          *(_BYTE*)(v48 + 76) = 1;
          if (v73 != 0) {
            GameRoutine_60a060_alt2((char*)(v48 + 48), v72, v73),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            MaterialAnimModule_be6340_alt2(v48),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v82 = v51;
          }
          else {
            if ((*(_BYTE*)(v48 + 48) & 1) != 0) {
              **(_BYTE**)(v48 + 64) = 0;
              *(_QWORD*)(v48 + 56) = 0;
            }
            else {
              *(_WORD*)(v48 + 48) = 0;
            }
            *(_DWORD*)(v48 + 72) = -1;
            if ((*(_BYTE*)(v48 + 80) & 1) != 0) {
              **(_BYTE**)(v48 + 96) = 0;
              *(_QWORD*)(v48 + 88) = 0;
            }
            else {
              *(_WORD*)(v48 + 80) = 0;
            }
            *(_QWORD*)(v48 + 108) = 0;
            *(_DWORD*)(v48 + 104) = -1;
          }
          v99 = *(_DWORD*)(v48 + 268);
          *(float*)(v48 + 264) = v82;
          if (v99 == 0) {
            v100 = *(unsigned int*)(v48 + 72);
            if ((v100 & 0x80000000) == 0) {
              *(float*)(*(_QWORD*)(v48 + 24) + (v100 << 6) + 24) =
                  v82 * 0x1.1111120000000p-6f;
            }
          }
          goto LABEL_186;
        }
      }
      else {
      LABEL_137:
        if (v83 >= 0x18) {
          v80 += 16;
          while (1) {
            if (*((_QWORD*)v80 - 2) == v78) {
              v80 -= 16;
              goto LABEL_146;
            }
            if (*((_QWORD*)v80 - 1) == v78) {
              v80 -= 8;
              goto LABEL_146;
            }
            if (*(_QWORD*)v80 == v78) {
              goto LABEL_146;
            }
            if (*((_QWORD*)v80 + 1) == v78) {
              break;
            }
            v85 = v80 + 16;
            v80 += 32;
            if (v85 == v79) {
              goto LABEL_149;
            }
          }
          v80 += 8;
          goto LABEL_146;
        }
      }
    LABEL_149:
      if (v54 != nullptr) {
        v86 = *snd_g_fileIndex_ptr[0];
        v87 = GameRoutine_1a09c70(v54),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((fs_6360e0(v86, (__int64)v54, v87, 0, 0) & 1) != 0) {
          v89 = (__int64*)v50[1];
          v88 = v50[2];
          v90 = v50;
          if ((unsigned __int64)v89 >= v88) {
            v92 = *v50;
            v93 = (__int64)v89 - *v50;
            v94 = v93 >> 3;
            v95 = (v93 >> 3) + 1;
            if (v95 >> 61 != 0) {
              GameRoutine_65c760_alt2(),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v96 = v88 - v92;
            v132_.v135 = v67;
            if (v96 >> 2 > v95) {
              v95 = v96 >> 2;
            }
            if ((unsigned __int64)v96 >= 0x7FFFFFFFFFFFFFF8LL) {
              v97 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v97 = v95;
            }
            if (v97 != 0) {
              if (v97 >> 61 != 0) {
                GameRoutine_60a210_alt2(),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v98 = fw_memory_HeapManager_Allocate_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v97, 16, 0),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v94 = v93 >> 3;
            }
            else {
              v98 = 0;
            }
            v101 = v93;
            v102 = (__int64*)(v98 + v93);
            v103 = v98 + 8 * v97;
            v104 = (__int64)&v102[-v94];
            *v102 = v81;
            v91 = v102 + 1;
            GameRoutine_1a0b950(v104, v92, v101),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            *v50 = v104;
            v50[1] = (__int64)v91;
            v50[2] = v103;
            if (v92 != 0) {
              v105 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v105 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v92),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v67 = v132_.v135;
            v90 = v50;
          }
          else {
            *v89 = v81;
            v91 = v89 + 1;
          }
          v90[1] = (__int64)v91;
          v106 = v90;
          v107 = (float*)fw_memory_HeapManager_Allocate_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
          *((_QWORD*)v107 + 2) = v48;
          *((_QWORD*)v107 + 3) = v72;
          *((_QWORD*)v107 + 4) = v73;
          v107[10] = v51;
          *((_QWORD*)v107 + 6) = v81;
          v128_.v130 = v107;
          *(_QWORD*)v107 = GameData_20ddb68;
          *((_QWORD*)v107 + 1) = v106;
          wld_MaterialAnimModule_LoadAnimAsync_alt2((_QWORD*)v48, v54, v67,
                                                    (__int64)v128_.v128),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (v128_.v130 == (float*)v128_.v128) {
            v108 = 32;
          LABEL_185:
            (*(void (**)(__int64))(*(_QWORD*)v128_.v130 + v108))(
                (__int64)v128_.v130),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else if (v128_.v130 != nullptr) {
            v108 = 40;
            goto LABEL_185;
          }
        }
      }
    LABEL_186:
      if ((v132_.v132 & 1) != 0 && v132_.v134 != nullptr) {
        v109 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v109 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, (__int64)v132_.v134),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      return;
    }
  }
}

void game_cutscene_AnimPlayer_LoadMaterialAnim(__int64* a1, _QWORD* a2,
                                               _QWORD* a3)
{
  __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  signed __int64 v15;
  __int64 v16;
  char* v17;
  int v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  const char* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  const char* v57;
  __int64 v58;
  __int64 v59;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
    char gap40_[10];
    char v62;
  } v60_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    const char* v65;
  } v63_;

  v4 = a3[7];
  if (v4 == 0 || *(_BYTE*)(v4 + 165) != 1 ||
      !GameRoutine_ad7390_alt1((_QWORD*)v4)) {
    return;
  }
  if ((a3[1] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v63_.v63, a3[3], a3[2]);
  }
  else {
    v7 = a3[2];
    v8 = a3[3];
    v63_.v63 = a3[1];
    v63_.v64 = v7;
    v63_.v65 = (const char*)v8;
  }
  if ((v63_.v63 & 1) != 0) {
    v9 = v63_.v65;
  }
  else {
    v9 = (char*)&v63_.v63 + 1;
  }
  v10 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  if ((v63_.v63 & 1) != 0) {
    v10 = v63_.v64;
  }
  if (v10 != 0) {
    v11 = (char*)&v9[v10];
    v12 = (char*)&v9[v10];
    v13 = (char*)v9;
    v14 = (char*)&v9[v10];
    while (1) {
      v15 = v12 - v13;
      v16 = (v12 - v13) & 3;
      if (v16 != 0) {
        v17 = v13;
        while (1) {
          v18 = (unsigned __int8)*v17++;
          if (v18 == 46) {
            break;
          }
          --v16;
          v13 = v17;
          if (v16 == 0) {
            goto LABEL_20;
          }
        }
        if (v13 + 1 == v11) {
          goto LABEL_49;
        }
        v19 = v13++;
      }
      else {
        v17 = v13;
      LABEL_20:
        if ((unsigned __int64)(v15 - 1) < 3) {
        LABEL_49:
          if (v14 != v11) {
            v20 = v14 - v9;
            if (v14 - v9 != -1) {
              if (v20 > v10) {
                fs_60a230();
              }
              if (v20 == -7) {
                if ((v63_.v63 & 1) != 0) {
                  v63_.v64 = v14 - v9;
                  *((_BYTE*)v63_.v65 - 7) = 0;
                }
                else {
                  LOBYTE(v63_.v63) = -14;
                  v60_.v62 = 0;
                }
              }
              else {
                GameRoutine_a539c0_alt1((unsigned __int8*)&v63_.v63, v20,
                                        v20 + 6);
              }
            }
          }
          break;
        }
        v19 = v17 + 2;
        while (1) {
          if (*(v19 - 2) == 46) {
            v13 = v19 - 1;
            if (v19 - 1 == v11) {
              goto LABEL_49;
            }
            v19 -= 2;
            goto LABEL_38;
          }
          if (*(v19 - 1) == 46) {
            if (v19 == v11) {
              goto LABEL_49;
            }
            v13 = v19--;
            goto LABEL_38;
          }
          if (*v19 == 46) {
            v13 = v19 + 1;
            if (v19 + 1 != v11) {
              goto LABEL_38;
            }
            goto LABEL_49;
          }
          v13 = v19 + 2;
          if (v19[1] == 46) {
            break;
          }
          v19 += 4;
          if (v13 == v11) {
            goto LABEL_49;
          }
        }
        if (v19 + 2 == v11) {
          goto LABEL_49;
        }
        ++v19;
      }
    LABEL_38:
      if (*v13 == 98) {
        if (v19 + 2 == v11) {
          goto LABEL_49;
        }
        if (v19[2] == 102) {
          if (v19 + 3 == v11) {
            goto LABEL_49;
          }
          if (v19[3] == 114) {
            if (v19 + 4 == v11) {
              goto LABEL_49;
            }
            if (v19[4] == 101) {
              if (v19 + 5 == v11) {
                goto LABEL_49;
              }
              if (v19[5] == 115) {
                v14 = v19;
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_1a09ce0_alt1((__int64)&v63_.v63, ".matanimb", 9u);
  v21 = *((unsigned __int8*)a3 + 8);
  v22 = (v21 & 1) == 0;
  v23 = v21 >> 1;
  if (v22) {
    v24 = (__int64)a3 + 9;
  }
  else {
    v24 = a3[3];
  }
  if (v22) {
    v25 = v23;
  }
  else {
    v25 = a3[2];
  }
  if (v25 != 0) {
    v26 = ~v24;
    v27 = v24 - 1;
    v28 = 0;
    while (v25 != v28) {
      v29 = *(unsigned __int8*)(v27 + v25);
      ++v28;
      ++v26;
      --v27;
      if (v29 == 47) {
        if (v25 + 1 != v28) {
          if (v25 < v28) {
            String_60a250_alt1("string_view::substr");
          }
          v24 = v25 - v26;
          v25 = v28 - 1;
        }
        break;
      }
    }
  }
  v30 = std___1___hash_memory_alt1(v24, v25);
  v32 = (char*)*a1;
  v31 = (char*)a1[1];
  v33 = v30;
  if ((char*)*a1 == v31) {
  LABEL_86:
    if (v32 != v31) {
      goto LABEL_119;
    }
    goto LABEL_87;
  }
  v34 = v31 - v32 - 8;
  if ((~(_BYTE)v34 & 0x18) != 0) {
    v35 = ((unsigned __int8)((unsigned int)v34 >> 3) + 1) & 3;
    while (*(_QWORD*)v32 != v30) {
      v32 += 8;
      if (--v35 == 0) {
        goto LABEL_75;
      }
    }
    goto LABEL_86;
  }
LABEL_75:
  if (v34 >= 0x18) {
    v32 += 16;
    while (1) {
      if (*((_QWORD*)v32 - 2) == v30) {
        v32 -= 16;
        goto LABEL_86;
      }
      if (*((_QWORD*)v32 - 1) == v30) {
        v32 -= 8;
        goto LABEL_86;
      }
      if (*(_QWORD*)v32 == v30) {
        goto LABEL_86;
      }
      if (*((_QWORD*)v32 + 1) == v30) {
        break;
      }
      v36 = v32 + 16;
      v32 += 32;
      if (v36 == v31) {
        goto LABEL_87;
      }
    }
    v32 += 8;
    goto LABEL_86;
  }
LABEL_87:
  if ((v63_.v63 & 1) != 0) {
    v37 = v63_.v65;
  }
  else {
    v37 = (char*)&v63_.v63 + 1;
  }
  if (v37 != nullptr) {
    v38 = *snd_g_fileIndex_ptr[0];
    v39 = strlen_alt1(v37);
    if ((fs_6360e0(v38, (__int64)v37, v39, 0, 0) & 1) != 0) {
      v41 = (__int64*)a1[1];
      v40 = a1[2];
      if ((unsigned __int64)v41 >= v40) {
        v43 = *a1;
        v44 = (signed __int64)v41 - *a1;
        v45 = (v44 >> 3) + 1;
        if (v45 >> 61 != 0) {
          GameRoutine_65c760_alt1();
        }
        v46 = v40 - v43;
        if (v46 >> 2 > v45) {
          v45 = v46 >> 2;
        }
        if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
          v47 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v47 = v45;
        }
        if (v47 != 0) {
          if (v47 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v48 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0);
        }
        else {
          v48 = 0;
        }
        v49 = v48 + 8 * v47;
        v50 = v48 + v44 - 8 * (v44 >> 3);
        *(_QWORD*)(v48 + v44) = v33;
        v42 = v48 + v44 + 8;
        memcpy_alt1(v50, v43, v44);
        *a1 = v50;
        a1[1] = v42;
        a1[2] = v49;
        if (v43 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v43);
        }
      }
      else {
        *v41 = v33;
        v42 = (__int64)(v41 + 1);
      }
      v53 = v63_.v64;
      v52 = (__int64)v63_.v65;
      v54 = (v63_.v63 & 1) == 0;
      v55 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
      a1[1] = v42;
      v60_.v60[2] = v33;
      if (v54) {
        v56 = v55;
      }
      else {
        v56 = v53;
      }
      if (v54) {
        v57 = (char*)&v63_.v63 + 1;
      }
      else {
        v57 = (const char*)v52;
      }
      v60_.v60[0] = GameData_20ddbe8;
      v60_.v60[1] = a1;
      v60_.v61 = v60_.v60;
      wld_MaterialAnimModule_LoadAnimAsync_alt1(a2, v57, v56,
                                                (__int64)v60_.v60);
      if (v60_.v61 == v60_.v60) {
        v58 = 32;
        goto LABEL_118;
      }
      if (v60_.v61 != nullptr) {
        v58 = 40;
      LABEL_118:
        (*(void (**)(__int64))(*v60_.v61 + v58))((__int64)v60_.v61);
      }
    }
  }
LABEL_119:
  if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v63_.v65);
  }
}

__int64 game_cutscene_AnimPlayer_PlayMaterialAnim_lambda0_Invoke(__int64 result,
                                                                 _BYTE* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  char** v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  float v14;
  int v15;
  __int64 v16;
  char* v17;

  if (*a2 == 1) {
    v3 = *(_QWORD*)(result + 16);
    v2 = *(_QWORD*)(result + 24);
    v4 = *(_QWORD*)(result + 32);
    *(_BYTE*)(v3 + 76) = 1;
    if (v4 != 0) {
      v5 = result;
      GameRoutine_60a060_alt1((char*)(v3 + 48), v2, v4);
      MaterialAnimModule_be6340_alt1(v3);
      result = v5;
    }
    else {
      if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
        **(_BYTE**)(v3 + 64) = 0;
        *(_QWORD*)(v3 + 56) = 0;
      }
      else {
        *(_WORD*)(v3 + 48) = 0;
      }
      *(_DWORD*)(v3 + 72) = -1;
      if ((*(_BYTE*)(v3 + 80) & 1) != 0) {
        **(_BYTE**)(v3 + 96) = 0;
        *(_QWORD*)(v3 + 88) = 0;
      }
      else {
        *(_WORD*)(v3 + 80) = 0;
      }
      *(_QWORD*)(v3 + 108) = 0;
      *(_DWORD*)(v3 + 104) = -1;
    }
    v13 = *(_QWORD*)(result + 16);
    v14 = *(float*)(result + 40);
    v15 = *(_DWORD*)(v13 + 268);
    *(float*)(v13 + 264) = v14;
    if (v15 == 0) {
      v16 = *(unsigned int*)(v13 + 72);
      if ((v16 & 0x80000000) == 0) {
        *(float*)(*(_QWORD*)(v13 + 24) + (v16 << 6) + 24) =
            v14 * 0x1.1111120000000p-6f;
      }
    }
  }
  else {
    v6 = *(char***)(result + 8);
    v8 = *v6;
    v7 = v6[1];
    if (*v6 != v7) {
      v9 = *(_QWORD*)(result + 48);
      v10 = v7 - v8 - 8;
      if ((~(_BYTE)v10 & 0x18) != 0) {
        v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
        while (*(_QWORD*)v8 != v9) {
          v8 += 8;
          if (--v11 == 0) {
            goto LABEL_9;
          }
        }
      }
      else {
      LABEL_9:
        if (v10 < 0x18) {
          return result;
        }
        for (v8 += 16;; v8 += 32) {
          if (*((_QWORD*)v8 - 2) == v9) {
            v8 -= 16;
            goto LABEL_30;
          }
          if (*((_QWORD*)v8 - 1) == v9) {
            v8 -= 8;
            goto LABEL_30;
          }
          if (*(_QWORD*)v8 == v9) {
            goto LABEL_30;
          }
          if (*((_QWORD*)v8 + 1) == v9) {
            break;
          }
          v12 = v8 + 16;
          if (v12 == v7) {
            return result;
          }
        }
        v8 += 8;
      }
    }
  LABEL_30:
    if (v8 != v7) {
      v17 = v8 + 8;
      if (v8 + 8 != v7) {
        do {
          if (*(_QWORD*)v17 != *(_QWORD*)(result + 48)) {
            *(_QWORD*)v8 = *(_QWORD*)v17;
            v8 += 8;
          }
          v17 += 8;
        } while (v17 != v7);
        v7 = v6[1];
      }
    }
    if (v8 != v7) {
      v6[1] = v8;
    }
  }
  return result;
}

#pragma GCC visibility pop
