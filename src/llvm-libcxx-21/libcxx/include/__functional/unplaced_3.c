#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD*);
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(__int64,
                                                               __int64);
__attribute__((swiftcall)) void game_gameui_15ad0c0(PSEUDO_X8, _QWORD*,
                                                    _QWORD*);
__attribute__((swiftcall)) void game_menu_anonymous_e980a0(PSEUDO_X8,
                                                           __int64 result);
__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void wld_map_c21740(PSEUDO_X8, __int64* result,
                                               __int64, unsigned __int64);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_1200be0(__int64, unsigned int, unsigned int, int, __int64);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 GameHr_7a88a0(__int64*);
__int64 GameRoutine_11f2730(__int64 result, __int64, int);
__int64 GameRoutine_11f3dc0(unsigned __int16*);
__int64 GameRoutine_128e990(__int64 result, _DWORD*);
__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_ea60e0(__int64*, __int64);
__int64 GameRoutine_f09600(__int64);
__int64 GmapTalkCommandMenu_e94ee0(_QWORD*, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 MindBtlInfo_Destructor(_QWORD*);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SceneObject_13fd320(__int64);
__int64 Time_e1e170(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_11f4940(__int64, char, char);
__int64 game_HashString(__int64 result);
__int64 game_Unit_GetParam(__int64);
__int64 game_cmdbtl_e76460(__int64, __int64*, __int64, __int16);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AIThink_1279680(__int64*, unsigned int*);
bool GameHr_cb18f0(_QWORD*, __int64);
bool SceneManager_138dbe0(_QWORD*, __int64);
bool game_128f6c0(__int64*, int*);
bool game_HasSkill(_QWORD*, _DWORD*);
bool game_cmdbtl_e76590(__int64, __int64, _DWORD*, int, unsigned __int16*);
char* game_util_Format(const char*, ...);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1b45704;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int16* GameData_212cf08[9];
extern __int16 GameData_221b408;
extern __int64 (*GameData_1f9a470[])();
extern __int64 (*GameData_1f9b928[])();
extern __int64 (*GameData_1f9baa8[])();
extern __int64 (*GameData_1f9bb28[])();
extern __int64 (*GameData_1feae80[])();
extern __int64 (*GameData_1feaf90[])();
extern __int64 (*GameData_1fec470[])();
extern __int64 (*GameData_2019448[])();
extern __int64 (*GameData_20194c8[])();
extern __int64 (*GmapTalkCommandMenu_Destructor_e966b0_ptr[])();
extern __int64 (*TalkCommandMenu_Destructor_e97ff0_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr[])();
extern __int64 (*game_menu_anonymous_FuncUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_GiftUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_GmapTalkCommandMenu_vtable[])();
extern __int64 (*game_menu_anonymous_LessonUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_PersonInfoUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcurementUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ScoutUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_TalkCommandMenu_vtable[])();
extern __int64 (*snd_Archive_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d638[10];
extern __int64* GameData_212d6a8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
extern __int64* GameData_2130920[5];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c638;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d290;
extern __int64 GameData_212d750;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_212f730[2];
extern __int64 GameData_212f738;
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21ca310;
extern __int64 GameData_221b410;
extern __int64 GameData_221b418;
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern char GameData_1bb7384[2];
int* GameRoutine_74df60(int* result, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 ProcGmapMap_1687160(unsigned __int64 result, __int64,
                                     unsigned __int64, __int64*);
unsigned __int64 ProcGmapMap_1687580(unsigned __int64 result, char*, char*,
                                     __int64, __int64, __int64, __int64);
unsigned __int64 strlen(const char*);
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void EffectConst_965ec0(__int64);
void GameHr_1226120(__int64, __int64);
void GameHr_965080(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_7d18f0();
void __attribute__((noreturn)) GameRoutine_e952b0();
void __attribute__((noreturn)) GameRoutine_e96a00();
void __attribute__((noreturn)) GameRoutine_ea6540();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_map_965220(__int64, unsigned int, unsigned int, unsigned int, _QWORD*,
                     float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void util_cb2640(__int64**);
__int64 llvm_libcxx_21_libcxx_include___functional_104020(__int64 result,
                                                          __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_7d5160(__int64 a1, char a2);
__int64 llvm_libcxx_21_libcxx_include___functional_888560(__int64 a1);
float32x4_t llvm_libcxx_21_libcxx_include___functional_a38a50(__int64 a1,
                                                              float32x4_t* a2,
                                                              float32x4_t* a3);
float llvm_libcxx_21_libcxx_include___functional_e4ff70(__int64 a1, int* a2);
void llvm_libcxx_21_libcxx_include___functional_e93140(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_ea95a0(__int64 a1,
                                                          _DWORD* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_10466d0(__int64 a1,
                                                           __int64* a2);
__int64 llvm_libcxx_21_libcxx_include___functional_120b090(__int64 a1);
bool llvm_libcxx_21_libcxx_include___functional_120b2e0(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3);
bool llvm_libcxx_21_libcxx_include___functional_127a1a0(__int64 a1, _DWORD* a2);
void llvm_libcxx_21_libcxx_include___functional_129f1d0(__int64 a1, _DWORD* a2);
__int64* llvm_libcxx_21_libcxx_include___functional_138f6a0(__int64* result);
__int64 llvm_libcxx_21_libcxx_include___functional_15adbb0(__int64 a1,
                                                           __int64 a2,
                                                           unsigned int* a3);
char* llvm_libcxx_21_libcxx_include___functional_1686d40(char* result, char* a2,
                                                         unsigned __int64 a3,
                                                         __int64* a4,
                                                         __int64 a5);

__int64 llvm_libcxx_21_libcxx_include___functional_104020(__int64 result,
                                                          __int64 a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 40) = 0;
  *(_QWORD*)result = snd_Archive_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_7d5160(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  unsigned __int64 v5;
  __int128 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  _QWORD* v41;
  _QWORD* i;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* j;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  _QWORD* v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  bool v85;
  int v86;
  int v87;
  unsigned int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int8* v105;
  __int64 v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  __int64** v111;
  __int64** k;
  __int64 v113;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  unsigned int v119;
  unsigned int v120;
  __int64 v121;
  unsigned int v122;
  __int64 v123;
  unsigned int v124;
  int v125;
  __int64* v126;
  unsigned int v127;
  unsigned int v128;
  _QWORD* v129;
  __int64 v130;
  char v131;
  __int64 v132;
  unsigned int v133;
  _BYTE v134[4];
  struct {
    _QWORD v135[2];
    __int64* v136;
    __int64 v137;
    _QWORD* v138;
  } v135_;
  __int64 v139;

  v134[0] = a2;
  v132 = *(_QWORD*)(*GameData_212ce98[0] + 48);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      v6 = *(_OWORD*)(v5 + 208);
    }
    if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                        v5 + 160, *((float*)&v6 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_15;
    }
  }
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(*GameData_21309c8[0] + 8) == 2) {
  LABEL_15:
    LODWORD(GameData_224b6d8) = GameData_224b6d8 + 1;
    v131 = 1;
  }
  else {
    v131 = 0;
  }
  v8 = *(_QWORD**)(a1 + 32);
  v7 = *(_QWORD**)(a1 + 40);
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
  if (v8 != v7) {
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v8;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 504LL))(*v8) & 1) != 0) {
        v13 = *(_QWORD**)(a1 + 88);
        v12 = *(_QWORD*)(a1 + 96);
        if ((unsigned __int64)v13 >= v12) {
          v24 = *(_QWORD*)(a1 + 80);
          v25 = (char*)v13 - v24;
          v26 = ((__int64)v13 - v24) >> 3;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
          LABEL_200:
            GameRoutine_7d18f0();
          }
          v28 = v12 - v24;
          if (v28 >> 2 > v27) {
            v27 = v28 >> 2;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
            v29 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v27;
          }
          if (v29 != 0) {
            if (v29 >> 61 != 0) {
            LABEL_201:
              GameRoutine_60a210();
            }
            v30 = fw_memory_HeapManager_Allocate(*v9, 8 * v29, 16, 0);
          }
          else {
            v30 = 0;
          }
          v35 = v30 + 8 * v29;
          v36 = (unsigned __int64)v13 - v24;
          v37 = (__int64)&v25[v30 + -8 * v26];
          *(_QWORD*)&v25[v30] = v11;
          v14 = (__int64)&v25[v30 + 8];
          memcpy(v37, v24, v36);
          *(_QWORD*)(a1 + 80) = v37;
          *(_QWORD*)(a1 + 88) = v14;
          *(_QWORD*)(a1 + 96) = v35;
          if (v24 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v38, v24);
          }
        }
        else {
          *v13 = v11;
          v14 = (__int64)(v13 + 1);
        }
        *(_QWORD*)(a1 + 88) = v14;
      }
      else {
        v16 = *(_QWORD**)(a1 + 64);
        v15 = *(_QWORD*)(a1 + 72);
        if ((unsigned __int64)v16 < v15) {
          *v16 = v11;
          v10 = (__int64)(v16 + 1);
        }
        else {
          v17 = *(_QWORD*)(a1 + 56);
          v18 = (char*)v16 - v17;
          v19 = ((__int64)v16 - v17) >> 3;
          v20 = v19 + 1;
          if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
            goto LABEL_200;
          }
          v21 = v15 - v17;
          if (v21 >> 2 > v20) {
            v20 = v21 >> 2;
          }
          if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v22 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v22 = v20;
          }
          if (v22 != 0) {
            if (v22 >> 61 != 0) {
              goto LABEL_201;
            }
            v23 = fw_memory_HeapManager_Allocate(*v9, 8 * v22, 16, 0);
          }
          else {
            v23 = 0;
          }
          v31 = v23 + 8 * v22;
          v32 = (unsigned __int64)v16 - v17;
          v33 = (__int64)&v18[v23 + -8 * v19];
          *(_QWORD*)&v18[v23] = v11;
          v10 = (__int64)&v18[v23 + 8];
          memcpy(v33, v17, v32);
          *(_QWORD*)(a1 + 56) = v33;
          *(_QWORD*)(a1 + 64) = v10;
          *(_QWORD*)(a1 + 72) = v31;
          if (v17 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v34, v17);
          }
        }
        *(_QWORD*)(a1 + 64) = v10;
      }
      ++v8;
    } while (v8 != v7);
    v8 = *(_QWORD**)(a1 + 32);
  }
  *(_QWORD*)(a1 + 40) = v8;
  v39 = *GameData_212ce80[0] + 61440;
  v40 = *(_DWORD*)(*GameData_212ce80[0] + 61624);
  *(_DWORD*)(*GameData_212ce80[0] + 61624) = v40 + 1;
  if (v40 == 0) {
    (**(void (***)(__int64))(v39 + 176))(v39 + 176);
  }
  v41 = *(_QWORD**)(a1 + 80);
  for (i = *(_QWORD**)(a1 + 88); v41 != i; ++v41) {
    v44 = *v41;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v41 + 464LL))(*v41) & 1) != 0) {
      v135_.v136 = (__int64*)v134;
      v135_.v138 = v135_.v135;
      v135_.v135[0] = GameData_1f9baa8;
      v135_.v135[1] = v132;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v44 + 744LL))(v44, v135_.v135);
      if (v135_.v138 == v135_.v135) {
        v43 = 32;
      }
      else {
        if (v135_.v138 == nullptr) {
          goto LABEL_62;
        }
        v43 = 40;
      }
      (*(void (**)(__int64))(*v135_.v138 + v43))((__int64)v135_.v138);
    }
  LABEL_62:
    (*(void (**)(__int64))(*(_QWORD*)v44 + 720LL))(v44);
  }
  v45 = *(_QWORD**)(a1 + 56);
  for (j = *(_QWORD**)(a1 + 64); v45 != j; *(_QWORD*)(a1 + 40) = v47) {
    v48 = *v45;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v45 + 464LL))(*v45) & 1) != 0) {
      v135_.v138 = v135_.v135;
      v135_.v135[0] = GameData_1f9bb28;
      v135_.v135[1] = v132;
      v135_.v136 = (__int64*)v134;
      v135_.v137 = v48;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v48 + 744LL))(v48, v135_.v135);
      if (v135_.v138 == v135_.v135) {
        v49 = 32;
      }
      else {
        if (v135_.v138 == nullptr) {
          goto LABEL_77;
        }
        v49 = 40;
      }
      (*(void (**)(__int64))(*v135_.v138 + v49))((__int64)v135_.v138);
    }
  LABEL_77:
    v51 = *(_QWORD**)(a1 + 40);
    v50 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v51 < v50) {
      *v51 = v48;
      v47 = (__int64)(v51 + 1);
    }
    else {
      v52 = *(_QWORD*)(a1 + 32);
      v53 = (char*)v51 - v52;
      v54 = ((__int64)v51 - v52) >> 3;
      v55 = v54 + 1;
      if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
        goto LABEL_200;
      }
      v56 = v50 - v52;
      if (v56 >> 2 > v55) {
        v55 = v56 >> 2;
      }
      if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF8LL) {
        v57 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v57 = v55;
      }
      if (v57 != 0) {
        if (v57 >> 61 != 0) {
          goto LABEL_201;
        }
        v58 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16, 0);
      }
      else {
        v58 = 0;
      }
      v59 = v58 + 8 * v57;
      v60 = (unsigned __int64)v51 - v52;
      v61 = (__int64)&v53[v58 + -8 * v54];
      *(_QWORD*)&v53[v58] = v48;
      v47 = (__int64)&v53[v58 + 8];
      memcpy(v61, v52, v60);
      *(_QWORD*)(a1 + 32) = v61;
      *(_QWORD*)(a1 + 40) = v47;
      *(_QWORD*)(a1 + 48) = v59;
      if (v52 != 0) {
        v62 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v52);
      }
    }
    ++v45;
  }
  v63 = (_QWORD*)*GameData_212ce80[0];
  v64 = *GameData_212ce80[0] + 61440;
  v65 = *(_DWORD*)(*GameData_212ce80[0] + 61624) - 1;
  *(_DWORD*)(*GameData_212ce80[0] + 61624) = v65;
  if (v65 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v64 + 176) + 8LL))(v64 + 176);
    LOBYTE(v139) = 0;
    v135_.v135[0] = GameData_1f9a470;
    v135_.v135[1] = v63;
    v135_.v138 = v135_.v135;
    v135_.v136 = &v139;
    GameRoutine_74df60((int*)(v64 + 32), (__int64)v135_.v135);
    if (v135_.v138 == v135_.v135) {
      v66 = 32;
    }
    else {
      if (v135_.v138 == nullptr) {
      LABEL_98:
        *(_QWORD*)(v64 + 32) = 0x3E8000003E8LL;
        *(_QWORD*)(v64 + 40) = -1;
        v67 = (unsigned __int8)v139;
        v63[7686] = 0;
        v63[7687] = 0;
        v63[7688] = 0;
        v63[7689] = 0;
        v63[7690] = 0;
        v63[7691] = 0;
        v63[7692] = 0;
        v63[7693] = 0;
        v63[7694] = 0;
        v63[7695] = 0;
        v63[7696] = 0;
        v63[7697] = 0;
        v63[7698] = 0;
        v63[7699] = 0;
        v63[7700] = 0;
        v63[7701] = 0;
        if (v67 == 1 && *(_QWORD*)GameData_212d020[0] != 0) {
          GameRoutine_f09600(*(_QWORD*)GameData_212d020[0]);
        }
        goto LABEL_101;
      }
      v66 = 40;
    }
    (*(void (**)(__int64))(*v135_.v138 + v66))((__int64)v135_.v138);
    goto LABEL_98;
  }
LABEL_101:
  memset(a1 + 104, 255, 0x4800u);
  v68 = *(_QWORD**)(a1 + 32);
  v69 = *(_QWORD**)(a1 + 40);
  v70 = v135_.v135;
  v135_.v135[0] = GameData_1f9b928;
  v135_.v135[1] = a1;
  v135_.v138 = v135_.v135;
  if (v68 == v69) {
    goto LABEL_110;
  }
  do {
    v71 = *v68;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v68 + 504LL))(*v68) & 1) == 0) {
      v139 = v71;
      if (v135_.v138 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64*))(*v135_.v138 + 48LL))(v135_.v138, &v139);
    }
    ++v68;
  } while (v68 != v69);
  v70 = v135_.v138;
  if (v135_.v138 == v135_.v135) {
  LABEL_110:
    v74 = 32;
    v73 = GameData_212ce98[0];
  }
  else {
    v73 = GameData_212ce98[0];
    if (v135_.v138 == nullptr) {
      goto LABEL_112;
    }
    v74 = 40;
  }
  (*(void (**)(__int64))(*v70 + v74))((__int64)v70);
LABEL_112:
  game_map_Trick_Impl_UpdateLink((_QWORD*)a1);
  if ((v134[0] & 1) != 0) {
    v75 = *v73;
    memset(*(_QWORD*)(*v73 + 72) + 8LL, 0, 0x800u);
    v76 = *(unsigned __int8*)(v75 + 21);
    v77 = *(unsigned __int8*)(v75 + 23);
    v78 = *(unsigned __int8*)(v75 + 20);
    v79 = *(unsigned __int8*)(v75 + 22);
    if (v76 <= v77 && v78 <= v79) {
      v81 = v79 + 1;
      v82 = 32 * v76;
      v83 = v79 - v78;
      v84 = 32 * v76 + v78;
      do {
        v86 = v78;
        if ((((_BYTE)v81 - (_BYTE)v78) & 3) != 0) {
          v87 = ((_BYTE)v81 - (_BYTE)v78) & 3;
          v88 = v84;
          v89 = -v78;
          do {
            if (v88 >= 0x400) {
              v90 = 0;
            }
            else {
              v90 = v88;
            }
            v91 = 2LL * (unsigned int)v90;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v91 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v90 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v91 + 8);
            }
            else {
              v92 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v91 + 8) != 0) {
                *(_WORD*)(v92 + 2 * v90) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v91 + 8);
              }
              else {
                *(_WORD*)(v92 + 2 * v90) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v91 + 8);
              }
            }
            --v89;
            ++v88;
            --v87;
          } while (v87 != 0);
          v86 = -v89;
        }
        if (v83 >= 3) {
          do {
            LODWORD(v93) = v82 + v86;
            if ((unsigned int)(v82 + v86) >= 0x400) {
              v93 = 0;
            }
            else {
              v93 = (unsigned int)v93;
            }
            v94 = 2LL * (unsigned int)v93;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v94 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v93 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v94 + 8);
            }
            else {
              v95 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v94 + 8) != 0) {
                *(_WORD*)(v95 + 2 * v93) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v94 + 8);
              }
              else {
                *(_WORD*)(v95 + 2 * v93) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v94 + 8);
              }
            }
            if ((unsigned int)(v82 + v86 + 1) < 0x400) {
              v96 = (unsigned int)(v82 + v86 + 1);
            }
            else {
              v96 = 0;
            }
            v97 = 2LL * (unsigned int)v96;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v97 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v96 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v97 + 8);
            }
            else {
              v98 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v97 + 8) != 0) {
                *(_WORD*)(v98 + 2 * v96) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v97 + 8);
              }
              else {
                *(_WORD*)(v98 + 2 * v96) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v97 + 8);
              }
            }
            LODWORD(v99) = v82 + v86 + 2;
            if ((unsigned int)v99 >= 0x400) {
              v99 = 0;
            }
            else {
              v99 = (unsigned int)v99;
            }
            v100 = 2LL * (unsigned int)v99;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v100 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v99 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v100 + 8);
            }
            else {
              v101 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v100 + 8) != 0) {
                *(_WORD*)(v101 + 2 * v99) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v100 + 8);
              }
              else {
                *(_WORD*)(v101 + 2 * v99) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v100 + 8);
              }
            }
            LODWORD(v102) = v82 + v86 + 3;
            if ((unsigned int)v102 >= 0x400) {
              v102 = 0;
            }
            else {
              v102 = (unsigned int)v102;
            }
            v103 = 2LL * (unsigned int)v102;
            if (*(_WORD*)(*(_QWORD*)(v75 + 48) + v103 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(v75 + 72) + 2 * v102 + 8) =
                  *(_WORD*)(*(_QWORD*)(v75 + 48) + v103 + 8);
            }
            else {
              v104 = *(_QWORD*)(v75 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(v75 + 40) + v103 + 8) != 0) {
                *(_WORD*)(v104 + 2 * v102) =
                    *(_WORD*)(*(_QWORD*)(v75 + 40) + v103 + 8);
              }
              else {
                *(_WORD*)(v104 + 2 * v102) =
                    *(_WORD*)(*(_QWORD*)(v75 + 32) + v103 + 8);
              }
            }
            v86 += 4;
          } while (v81 != v86);
        }
        v84 += 32;
        v82 += 32;
        v85 = v76++ == v77;
      } while (!v85);
      v75 = *v73;
    }
    (*(void (**)(_QWORD))(**(_QWORD**)(v75 + 160) + 32LL))(
        *(_QWORD*)(v75 + 160));
  }
  GameHr_965080(a1 + 18944);
  v105 = (unsigned __int8*)*v73;
  v106 = *(_QWORD*)(*v73 + 72);
  if (v106 != 0) {
    v107 = v105[29];
    v108 = v105[31];
    v109 = v105[30];
    v133 = v105[28];
    if (v107 <= v108 && v105[28] <= v109) {
      v123 = v106 + 8;
      v124 = v109 + 1;
      v125 = 32 * v107;
      v126 = GameData_212c930;
      do {
        v127 = v133;
        do {
          v128 = v125 + v127;
          if (v125 + v127 >= 0x400) {
            v128 = 0;
          }
          v129 = *(_QWORD**)(*(_QWORD*)(*v126 + 64) +
                             8LL * *(unsigned __int16*)(v123 + 2LL * v128));
          if (v129 != nullptr) {
            v130 = v129[3];
            if (*(_BYTE*)(v130 + 528) == 1) {
              if (v129[40] != 0) {
                game_map_965220(a1 + 18944, 0, v127, v107,
                                (_QWORD*)(v130 + 536), 0x1.0000000000000p+0f);
              }
              if (v129[41] != 0) {
                game_map_965220(a1 + 18944, 1u, v127, v107,
                                (_QWORD*)(v129[3] + 552LL),
                                0x1.0000000000000p+0f);
              }
            }
          }
          ++v127;
        } while (v124 != v127);
        v125 += 32;
        v85 = v107++ == v108;
      } while (!v85);
    }
  }
  v111 = *(__int64***)(a1 + 32);
  for (k = *(__int64***)(a1 + 40); v111 != k; ++v111) {
    while (1) {
      v115 = *v111;
      (*(void (**)(__int64*))(**v111 + 688))(*v111);
      if (((*(__int64 (**)(__int64*))(*v115 + 464))(v115) & 1) == 0) {
        v116 = (*(__int64 (**)(__int64*))(*v115 + 224))(v115);
        if (v116 != 0) {
          break;
        }
      }
    LABEL_178:
      if (++v111 == k) {
        goto LABEL_175;
      }
    }
    v117 = *v115;
    v118 = (_QWORD*)v116;
    if (*(_BYTE*)(v116 + 57) != 14) {
      v119 = (*(__int64 (**)(__int64*))(v117 + 56))(v115);
      v120 = (*(__int64 (**)(__int64*))(*v115 + 64))(v115);
      v121 = v118[3];
      if (*(_BYTE*)(v121 + 528) == 1) {
        v122 = v120;
        if (v118[40] != 0) {
          game_map_965220(a1 + 18944, 0, v119, v120, (_QWORD*)(v121 + 536),
                          0x1.0000000000000p+0f);
        }
        if (v118[41] != 0) {
          game_map_965220(a1 + 18944, 1u, v119, v122,
                          (_QWORD*)(v118[3] + 552LL), 0x1.0000000000000p+0f);
        }
      }
      goto LABEL_178;
    }
    (*(void (**)(__int64*))(v117 + 696))(v115);
  }
LABEL_175:
  EffectConst_965ec0(a1 + 18944);
  v113 = *(_QWORD*)(a1 + 80);
  *(_BYTE*)(a1 + 92848) = 0;
  *(_DWORD*)(a1 + 92852) = 0;
  *(_QWORD*)(a1 + 88) = v113;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
  if ((v131 & 1) != 0) {
    LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
  }
  return v134[0];
}

__int64 llvm_libcxx_21_libcxx_include___functional_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

float32x4_t llvm_libcxx_21_libcxx_include___functional_a38a50(__int64 a1,
                                                              float32x4_t* a2,
                                                              float32x4_t* a3)
{

#pragma clang fp contract(off)
  float v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t result;

  v3 = *(float*)(a1 + 8);
  v4 = vsubq_f32(*a2, *a3);
  v5 = vsubq_f32(*a3, *a2);
  v6 = vmulq_f32(v4, v4);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  v7 = LANES64_OF(vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
           .n64_f32[0];
  if (v3 > v7) {
    v3 = v7;
  }
  v8 = vmulq_f32(v5, v5);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  result = vaddq_f32(
      *a2,
      vmulq_n_f32(
          vbicq_s8(vmulq_f32(v5, vmulq_f32(v10, vrsqrtsq_f32(
                                                    v10, vmulq_f32(v8, v10)))),
                   vceqzq_f32(v8)),
          v3));
  *a2 = result;
  return result;
}

float llvm_libcxx_21_libcxx_include___functional_e4ff70(__int64 a1, int* a2)
{
  unsigned __int64 v2;
  float v3;
  unsigned __int64 v4;

  v2 = *a2;
  v3 = (float)((int)v2 / 4);
  v4 = 1812433253 * ((v2 + 1) ^ ((v2 + 1) >> 30)) + 2;
  LODWORD(v2) =
      (1812433253 * ((v2 >> 30) ^ v2) + 1) ^
      ((1812433253 * ((unsigned int)(v2 >> 30) ^ (unsigned int)v2) + 1) << 11);
  return (float)(PSEUDO_UNFUSED(v3 * 0x1.99999a0000000p-3f)) +
         (float)(vcvts_n_f32_u64((unsigned __int16)((v4 >> 19) ^
                                                    ((unsigned int)v2 >> 8) ^
                                                    v4 ^ v2),
                                 0x10u) *
                 0x1.99999a0000000p-4f);
}

void llvm_libcxx_21_libcxx_include___functional_e93140(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  __int64 v13;
  char v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  char v32;
  char v33;
  __int64 v34;
  char v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  char v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64* v128;
  const char* v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  char* v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 (***v139)();
  unsigned __int64 v140;
  __int64* v141;
  __int64* v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64* v156;
  __int64 v157;
  __int64* v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64* v205;
  __int64 v206;
  __int64 v207;
  __int64* v208;
  const char* v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  char* v213;
  __int64 v214;
  __int64 v215;
  int v216;
  char* v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  struct {
    __int64* v228;
    __int64 v229;
    __int64 v230;
  } v228_;
  struct {
    __int64 v231;
    char gap56_[24];
    __int64* v232;
  } v231_;
  struct {
    __int64 v233;
    char gap104_[16];
    __int64 v234;
    __int64 v235;
  } v233_;
  struct {
    __int64 v236;
    char gap152_[24];
    __int64* v237;
  } v236_;
  __int64 v238;
  struct {
    __int64* v239;
    __int64 v240;
  } v239_;
  struct {
    __int64 (**v241)();
    __int64* v242;
    __int64 v243;
  } v241_;
  struct {
    _QWORD v244[4];
    _QWORD* v245;
  } v244_;
  struct {
    _BYTE v246[24];
    __int64 v247;
    __int64 v248;
  } v246_;
  struct {
    _BYTE v249[32];
    _BYTE* v250;
  } v249_;

  if (*(_QWORD*)GameData_212d750 == 0) {
    v24 = game_script_hub_talk_g_select_menu;
    v25 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 288);
    if (*(_QWORD*)(game_script_hub_talk_g_select_menu + 296) == v25) {
      v29 = 0;
      v28 = nullptr;
      v7 = 0;
      v45 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 208);
      if (v45 == 0) {
        goto LABEL_339;
      }
      goto LABEL_72;
    }
    v26 = 0;
    v27 = 0;
    v7 = 0;
    v28 = nullptr;
    v29 = 0;
    v30 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v31 = *(_QWORD*)(v25 + v26 + 64);
      if (v31 != 0) {
        v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 48LL))(v31);
        v25 = *(_QWORD*)(v24 + 288);
        v33 = v32;
      }
      else {
        v33 = 1;
      }
      v34 = *(_QWORD*)(v25 + v26 + 112);
      if (v34 != 0) {
        v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 48LL))(v34);
        if ((v33 & 1) != 0) {
          goto LABEL_43;
        }
      }
      else {
        v35 = 1;
        if ((v33 & 1) != 0) {
        LABEL_43:
          v36 = fw_memory_HeapManager_Allocate(*v30, 88, 16, 0);
          *(_WORD*)(v36 + 16) = 0;
          *(_QWORD*)(v36 + 48) = 0;
          *(_QWORD*)(v36 + 56) = 0;
          *(_BYTE*)(v36 + 84) = v35 & 1;
          *(_QWORD*)(v36 + 64) = 0;
          *(_QWORD*)(v36 + 72) = 0;
          *(_DWORD*)(v36 + 40) = v27;
          *(_DWORD*)(v36 + 80) = 65793;
          *(_QWORD*)v36 = game_menu_anonymous_FuncUnitMenuItem_vtable;
          *(_QWORD*)(v36 + 8) = 0;
          if ((unsigned __int64)v28 < v29) {
            *v28++ = v36;
          }
          else {
            v37 = (unsigned __int64)v28 - v7;
            v38 = ((__int64)v28 - v7) >> 3;
            v39 = v38 + 1;
            if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
              goto LABEL_421;
            }
            if ((__int64)(v29 - v7) >> 2 > v39) {
              v39 = (__int64)(v29 - v7) >> 2;
            }
            if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
              v40 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v40 = v39;
            }
            if (v40 != 0) {
              if (v40 >> 61 != 0) {
                goto LABEL_419;
              }
              v41 = v36;
              v42 = fw_memory_HeapManager_Allocate(*v30, 8 * v40, 16, 0);
              v36 = v41;
            }
            else {
              v42 = 0;
            }
            v29 = v42 + 8 * v40;
            v43 = v42 + v37 - 8 * v38;
            *(_QWORD*)(v42 + v37) = v36;
            v28 = (__int64*)(v42 + v37 + 8);
            memcpy(v43, v7, v37);
            if (v7 != 0) {
              v44 = 128;
              if (*(_QWORD*)(*v30 + 200) == 0) {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free(*v30 + v44, v7);
            }
            v7 = v43;
          }
        }
      }
      v25 = *(_QWORD*)(v24 + 288);
      ++v27;
      v26 += 176;
      if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(v24 + 296) - v25) >> 4) <= v27) {
        v45 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 208);
        if (v45 == 0) {
          goto LABEL_339;
        }
      LABEL_72:
        game_menu_anonymous_e980a0((void*)((int*)&v241_.v241), v45);
        v50 = (char)v241_.v241;
        if (((unsigned __int8)v241_.v241 & 8) != 0) {
          v51 = (__int64*)fw_memory_g_heap_manager_ptr;
          v52 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
          *(_WORD*)(v52 + 16) = 0;
          *(_DWORD*)(v52 + 40) = 0;
          *(_QWORD*)(v52 + 48) = 0;
          *(_QWORD*)(v52 + 56) = 0;
          *(_QWORD*)(v52 + 64) = 0;
          *(_QWORD*)(v52 + 72) = 0;
          *(_QWORD*)(v52 + 88) = v45;
          *(_DWORD*)(v52 + 80) = 65793;
          *(_QWORD*)v52 = game_menu_anonymous_GiftUnitMenuItem_vtable;
          *(_QWORD*)(v52 + 8) = 0;
          if ((unsigned __int64)v28 < v29) {
            *v28++ = v52;
            goto LABEL_75;
          }
          v59 = (unsigned __int64)v28 - v7;
          v60 = ((__int64)v28 - v7) >> 3;
          v61 = v60 + 1;
          if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
            goto LABEL_421;
          }
          if ((__int64)(v29 - v7) >> 2 > v61) {
            v61 = (__int64)(v29 - v7) >> 2;
          }
          if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v62 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v62 = v61;
          }
          if (v62 != 0) {
            if (v62 >> 61 == 0) {
              v63 = v52;
              v64 = fw_memory_HeapManager_Allocate(*v51, 8 * v62, 16, 0);
              v52 = v63;
              goto LABEL_278;
            }
          LABEL_419:
            GameRoutine_60a210();
          }
          v64 = 0;
        LABEL_278:
          v29 = v64 + 8 * v62;
          v154 = v64 + v59 - 8 * v60;
          *(_QWORD*)(v64 + v59) = v52;
          v28 = (__int64*)(v64 + v59 + 8);
          memcpy(v154, v7, v59);
          if (v7 != 0) {
            v155 = 128;
            if (*(_QWORD*)(*v51 + 200) == 0) {
              v155 = 56;
            }
            nn_mem_StandardAllocator_Free(*v51 + v155, v7);
          }
          v7 = v154;
          if ((v50 & 2) != 0) {
          LABEL_283:
            v156 = (__int64*)fw_memory_g_heap_manager_ptr;
            v157 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
            *(_WORD*)(v157 + 16) = 0;
            *(_DWORD*)(v157 + 40) = 0;
            *(_QWORD*)(v157 + 48) = 0;
            *(_QWORD*)(v157 + 56) = 0;
            *(_QWORD*)(v157 + 64) = 0;
            *(_QWORD*)(v157 + 72) = 0;
            *(_QWORD*)(v157 + 88) = v45;
            *(_DWORD*)(v157 + 80) = 65793;
            *(_QWORD*)v157 = game_menu_anonymous_ScoutUnitMenuItem_vtable;
            *(_QWORD*)(v157 + 8) = 0;
            if ((unsigned __int64)v28 >= v29) {
              v162 = (unsigned __int64)v28 - v7;
              v163 = ((__int64)v28 - v7) >> 3;
              v164 = v163 + 1;
              if ((unsigned __int64)(v163 + 1) >> 61 == 0) {
                if ((__int64)(v29 - v7) >> 2 > v164) {
                  v164 = (__int64)(v29 - v7) >> 2;
                }
                if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v165 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v165 = v164;
                }
                if (v165 != 0) {
                  if (v165 >> 61 != 0) {
                    goto LABEL_419;
                  }
                  v166 = v157;
                  v167 = fw_memory_HeapManager_Allocate(*v156, 8 * v165, 16, 0);
                  v157 = v166;
                }
                else {
                  v167 = 0;
                }
                v29 = v167 + 8 * v165;
                v180 = v167 + v162 - 8 * v163;
                *(_QWORD*)(v167 + v162) = v157;
                v28 = (__int64*)(v167 + v162 + 8);
                memcpy(v180, v7, v162);
                if (v7 != 0) {
                  v181 = 128;
                  if (*(_QWORD*)(*v156 + 200) == 0) {
                    v181 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v156 + v181, v7);
                }
                v7 = v180;
                if ((v50 & 4) == 0) {
                  goto LABEL_77;
                }
              LABEL_285:
                v158 = (__int64*)fw_memory_g_heap_manager_ptr;
                v159 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
                *(_QWORD*)(v159 + 72) = 0;
                *(_QWORD*)(v159 + 80) = 0;
                *(_QWORD*)(v159 + 16) = 0;
                *(_QWORD*)(v159 + 24) = 0;
                *(_QWORD*)(v159 + 32) = 0;
                *(_QWORD*)(v159 + 40) = 0;
                *(_BYTE*)(v159 + 17) = 0;
                *(_QWORD*)(v159 + 48) = 0;
                *(_QWORD*)(v159 + 56) = 0;
                *(_QWORD*)(v159 + 64) = 0;
                *(_WORD*)(v159 + 80) = 257;
                *(_BYTE*)(v159 + 82) = 1;
                *(_QWORD*)v159 =
                    game_menu_anonymous_PersonInfoUnitMenuItem_vtable;
                *(_QWORD*)(v159 + 8) = 0;
                if ((unsigned __int64)v28 < v29) {
                  *v28++ = v159;
                  if ((v50 & 0x10) == 0) {
                    goto LABEL_78;
                  }
                  goto LABEL_287;
                }
                v168 = (unsigned __int64)v28 - v7;
                v169 = ((__int64)v28 - v7) >> 3;
                v170 = v169 + 1;
                if ((unsigned __int64)(v169 + 1) >> 61 == 0) {
                  if ((__int64)(v29 - v7) >> 2 > v170) {
                    v170 = (__int64)(v29 - v7) >> 2;
                  }
                  if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v171 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v171 = v170;
                  }
                  if (v171 != 0) {
                    if (v171 >> 61 != 0) {
                      goto LABEL_419;
                    }
                    v172 = v159;
                    v173 =
                        fw_memory_HeapManager_Allocate(*v158, 8 * v171, 16, 0);
                    v159 = v172;
                  }
                  else {
                    v173 = 0;
                  }
                  v29 = v173 + 8 * v171;
                  v182 = v173 + v168 - 8 * v169;
                  *(_QWORD*)(v173 + v168) = v159;
                  v28 = (__int64*)(v173 + v168 + 8);
                  memcpy(v182, v7, v168);
                  if (v7 != 0) {
                    v183 = 128;
                    if (*(_QWORD*)(*v158 + 200) == 0) {
                      v183 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v158 + v183, v7);
                  }
                  v7 = v182;
                  if ((v50 & 0x10) == 0) {
                    goto LABEL_78;
                  }
                  goto LABEL_287;
                }
              }
            }
            else {
              *v28++ = v157;
              if ((v50 & 4) != 0) {
                goto LABEL_285;
              }
            LABEL_77:
              if ((v50 & 0x10) == 0) {
              LABEL_78:
                if ((v50 & 0x20) == 0) {
                  goto LABEL_339;
                }
                goto LABEL_337;
              }
            LABEL_287:
              v160 = (__int64*)fw_memory_g_heap_manager_ptr;
              v161 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
              *(_WORD*)(v161 + 16) = 0;
              *(_DWORD*)(v161 + 40) = 0;
              *(_QWORD*)(v161 + 48) = 0;
              *(_QWORD*)(v161 + 56) = 0;
              *(_QWORD*)(v161 + 64) = 0;
              *(_QWORD*)(v161 + 72) = 0;
              *(_QWORD*)(v161 + 88) = v45;
              *(_DWORD*)(v161 + 80) = 65793;
              *(_QWORD*)v161 = game_menu_anonymous_LessonUnitMenuItem_vtable;
              *(_QWORD*)(v161 + 8) = 0;
              if ((unsigned __int64)v28 < v29) {
                *v28++ = v161;
                if ((v50 & 0x20) != 0) {
                  goto LABEL_337;
                }
              LABEL_339:
                v189 = (__int64)v28 - v7;
                if (v28 != (__int64*)v7) {
                LABEL_340:
                  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
                    Time_e1e170(*(_QWORD*)GameData_212ebf8[0]);
                  }
                  v190 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 272);
                  if (v190 != 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v190 + 48LL))(v190);
                  }
                  v191 = fw_memory_g_heap_manager_ptr;
                  v192 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1280, 16, 0);
                  GmapTalkCommandMenu_e94ee0(
                      &v241_.v241,
                      (__int64*)(game_script_hub_talk_g_select_menu + 208));
                  GmapTalkCommandMenu_e94ee0((_QWORD*)(v192 + 1072),
                                             (__int64*)&v241_.v241);
                  if (v249_.v250 == v249_.v249) {
                    v193 = 32;
                  LABEL_348:
                    (*(void (**)(__int64))(*(_QWORD*)v249_.v250 + v193))(
                        (__int64)v249_.v250);
                  }
                  else if (v249_.v250 != nullptr) {
                    v193 = 40;
                    goto LABEL_348;
                  }
                  v194 = v246_.v247;
                  if (v246_.v247 != 0) {
                    v195 = v246_.v248;
                    if (v246_.v247 == v246_.v248) {
                      goto LABEL_360;
                    }
                    v196 = v246_.v248;
                    do {
                      v197 = *(_BYTE*)(v196 - 24);
                      v196 -= 24;
                      if ((v197 & 1) != 0) {
                        v198 = *(_QWORD*)(v195 - 8);
                        if (v198 != 0) {
                          if (*(_QWORD*)(*(_QWORD*)v191 + 200LL) != 0) {
                            v199 = 128;
                          }
                          else {
                            v199 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v191 + v199,
                                                        v198);
                        }
                      }
                      v195 = v196;
                    } while (v196 != v194);
                    v246_.v248 = v194;
                    v194 = v246_.v247;
                    if (v246_.v247 != 0) {
                    LABEL_360:
                      v200 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v191 + 200LL) == 0) {
                        v200 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v191 + v200,
                                                    v194);
                    }
                  }
                  v228_.v228 = (__int64*)v246_.v246;
                  util_cb2640(&v228_.v228);
                  if (v244_.v245 == v244_.v244) {
                    v201 = 32;
                  LABEL_367:
                    (*(void (**)(__int64))(*v244_.v245 + v201))(
                        (__int64)v244_.v245);
                  }
                  else if (v244_.v245 != nullptr) {
                    v201 = 40;
                    goto LABEL_367;
                  }
                  if (v241_.v242 != nullptr) {
                    v202 = *(_QWORD*)v191;
                    v241_.v243 = (__int64)v241_.v242;
                    v203 = 128;
                    if (*(_QWORD*)(v202 + 200) == 0) {
                      v203 = 56;
                    }
                    nn_mem_StandardAllocator_Free(v202 + v203,
                                                  (__int64)v241_.v242);
                  }
                  v204 = v189 >> 3;
                  v228_.v228 = nullptr;
                  v228_.v229 = 0;
                  game_menu_16dcd30(v192, (__int64)"TalkCommandMenu",
                                    &v228_.v228, 0);
                  v205 = GameData_212d6a8;
                  v206 = v228_.v229;
                  *(_QWORD*)v192 = GameData_212d6a8 + 2;
                  *(_QWORD*)(v192 + 176) = v205 + 143;
                  *(_QWORD*)(v192 + 1056) = v205 + 169;
                  if (v206 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v206 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206);
                    std___1___shared_weak_count___release_weak(v206);
                  }
                  *(_QWORD*)v192 = game_menu_anonymous_TalkCommandMenu_vtable;
                  *(_QWORD*)(v192 + 176) =
                      game_menu_MenuInput_InputUnknown00_ptr;
                  *(_QWORD*)(v192 + 1056) = GameData_1fec470;
                  *(_QWORD*)(v192 + 1264) =
                      TalkCommandMenu_Destructor_e97ff0_ptr;
                  ProcInst_657850(v192, (__int64)GameData_212c730,
                                  (__int64)"TalkCommandMenu", 1, a1);
                  v207 = 0;
                  v208 = (__int64*)v7;
                  do {
                    BasicMenuCursor_16e0c00((_QWORD*)v192, *v208);
                    *(_BYTE*)(*v208 + 83) =
                        *(_BYTE*)(game_script_hub_talk_g_select_menu + 384);
                    v209 = (const char*)(*(__int64 (**)(__int64))(
                        *(_QWORD*)*v208 + 24LL))(*v208);
                    v210 = strlen(v209);
                    v211 = (unsigned __int8)GameData_221b408 >> 1;
                    if ((GameData_221b408 & 1) != 0) {
                      v211 = GameData_221b410;
                    }
                    if (v210 == v211) {
                      v212 = v210;
                      if (v210 == -1) {
                      LABEL_418:
                        fs_60a230();
                      }
                      if ((GameData_221b408 & 1) != 0) {
                        v213 = (char*)GameData_221b418;
                      }
                      else {
                        v213 = (char*)&GameData_221b408 + 1;
                      }
                      if (memcmp((__int64)v213, (__int64)v209, v212) == 0) {
                        v207 = *v208;
                      }
                    }
                    --v204;
                    ++v208;
                  } while (v204 != 0);
                  if (v207 != 0) {
                    v214 = *(_QWORD*)(v192 + 336);
                    if (v214 == v207) {
                    LABEL_392:
                      v216 = 4;
                      if (v214 != 0) {
                        if (((*(__int64 (**)(__int64))(*(_QWORD*)v214 + 120LL))(
                                 v214) &
                             1) != 0) {
                          v216 = 4;
                        }
                        else {
                          v216 = 0;
                        }
                      }
                    }
                    else {
                      if (v214 != 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v214 + 168LL))(v214);
                      }
                      *(_QWORD*)(v192 + 336) = v207;
                      BasicMenu_16dea40(v192, 0, 1u, 0);
                      v215 = *(_QWORD*)(v192 + 336);
                      if (v215 != 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v215 + 160LL))(v215);
                        v214 = *(_QWORD*)(v192 + 336);
                        goto LABEL_392;
                      }
                      v216 = 4;
                    }
                    *(_DWORD*)(v192 + 356) =
                        *(_DWORD*)(v192 + 356) & 0xFFFFFFFB | v216;
                  }
                  else {
                    game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(v192,
                                                                           1);
                  }
                LABEL_414:
                  v224 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v224 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v224, v7);
                  return;
                }
              LABEL_410:
                if (v28 == nullptr) {
                  return;
                }
                goto LABEL_414;
              }
              v174 = (char*)v28 - v7;
              v175 = ((__int64)v28 - v7) >> 3;
              v176 = v175 + 1;
              if ((unsigned __int64)(v175 + 1) >> 61 == 0) {
                if ((__int64)(v29 - v7) >> 2 > v176) {
                  v176 = (__int64)(v29 - v7) >> 2;
                }
                if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v177 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v177 = v176;
                }
                if (v177 != 0) {
                  if (v177 >> 61 != 0) {
                    goto LABEL_419;
                  }
                  v178 = v161;
                  v179 = fw_memory_HeapManager_Allocate(*v160, 8 * v177, 16, 0);
                  v161 = v178;
                }
                else {
                  v179 = 0;
                }
                v29 = v179 + 8 * v177;
                v184 = (unsigned __int64)v28 - v7;
                v185 = (__int64)&v174[v179 + -8 * v175];
                *(_QWORD*)&v174[v179] = v161;
                v28 = (__int64*)&v174[v179 + 8];
                memcpy(v185, v7, v184);
                if (v7 != 0) {
                  v186 = 128;
                  if (*(_QWORD*)(*v160 + 200) == 0) {
                    v186 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v160 + v186, v7);
                }
                v7 = v185;
                if ((v50 & 0x20) == 0) {
                  goto LABEL_339;
                }
              LABEL_337:
                v187 = (__int64*)fw_memory_g_heap_manager_ptr;
                v188 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
                *(_QWORD*)(v188 + 72) = 0;
                *(_QWORD*)(v188 + 80) = 0;
                *(_QWORD*)(v188 + 16) = 0;
                *(_QWORD*)(v188 + 24) = 0;
                *(_QWORD*)(v188 + 32) = 0;
                *(_QWORD*)(v188 + 40) = 0;
                *(_BYTE*)(v188 + 17) = 0;
                *(_QWORD*)(v188 + 48) = 0;
                *(_QWORD*)(v188 + 56) = 0;
                *(_QWORD*)(v188 + 64) = 0;
                *(_WORD*)(v188 + 80) = 257;
                *(_BYTE*)(v188 + 82) = 1;
                *(_QWORD*)v188 =
                    game_menu_anonymous_ProcurementUnitMenuItem_vtable;
                *(_QWORD*)(v188 + 8) = 0;
                if ((unsigned __int64)v28 < v29) {
                  *v28++ = v188;
                  goto LABEL_339;
                }
                v217 = (char*)v28 - v7;
                v218 = ((__int64)v28 - v7) >> 3;
                v219 = v218 + 1;
                if ((unsigned __int64)(v218 + 1) >> 61 == 0) {
                  if ((__int64)(v29 - v7) >> 2 > v219) {
                    v219 = (__int64)(v29 - v7) >> 2;
                  }
                  if (v29 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v219 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  if (v219 != 0) {
                    if (v219 >> 61 != 0) {
                      goto LABEL_419;
                    }
                    v220 = v188;
                    v219 =
                        fw_memory_HeapManager_Allocate(*v187, 8 * v219, 16, 0);
                    v188 = v220;
                  }
                  v221 = (unsigned __int64)v28 - v7;
                  v222 = (__int64)&v217[v219 + -8 * v218];
                  *(_QWORD*)&v217[v219] = v188;
                  v28 = (__int64*)&v217[v219 + 8];
                  memcpy(v222, v7, v221);
                  if (v7 != 0) {
                    v223 = 128;
                    if (*(_QWORD*)(*v187 + 200) == 0) {
                      v223 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v187 + v223, v7);
                  }
                  v7 = v222;
                  v189 = (__int64)v28 - v222;
                  if (v28 != (__int64*)v222) {
                    goto LABEL_340;
                  }
                  goto LABEL_410;
                }
              }
            }
          LABEL_421:
            GameRoutine_e96a00();
          }
        }
        else {
        LABEL_75:
          if ((v50 & 2) != 0) {
            goto LABEL_283;
          }
        }
        if ((v50 & 4) != 0) {
          goto LABEL_285;
        }
        goto LABEL_77;
      }
    }
  }
  v1 = game_script_hub_talk_g_select_menu;
  v2 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 392);
  if (v2 == 0) {
    return;
  }
  v225 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 392);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != 0) {
    LayoutAccessor_155e830(v3 + 848, 1);
  }
  v4 = *(_QWORD*)(v1 + 288);
  if (*(_QWORD*)(v1 + 296) != v4) {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = nullptr;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(v4 + v5 + 64);
      if (v10 != 0) {
        v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 48LL))(v10);
        v4 = *(_QWORD*)(v1 + 288);
        v12 = v11;
      }
      else {
        v12 = 1;
      }
      v13 = *(_QWORD*)(v4 + v5 + 112);
      if (v13 != 0) {
        v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
        if ((v12 & 1) == 0) {
          goto LABEL_8;
        }
      }
      else {
        v14 = 1;
        if ((v12 & 1) == 0) {
          goto LABEL_8;
        }
      }
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      *(_WORD*)(v15 + 16) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_QWORD*)(v15 + 128) = 0;
      *(_BYTE*)(v15 + 144) = 0;
      *(_QWORD*)v15 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
      *(_QWORD*)(v15 + 8) = 0;
      *(_DWORD*)(v15 + 40) = v6;
      *(_WORD*)(v15 + 80) = 257;
      *(_BYTE*)(v15 + 145) = v14 & 1;
      *(_BYTE*)(v15 + 82) = 1;
      if ((unsigned __int64)v8 < v9) {
        *v8++ = v15;
      }
      else {
        v16 = (unsigned __int64)v8 - v7;
        v17 = ((__int64)v8 - v7) >> 3;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
          goto LABEL_420;
        }
        if ((__int64)(v9 - v7) >> 2 > v18) {
          v18 = (__int64)(v9 - v7) >> 2;
        }
        if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
          v19 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v18;
        }
        if (v19 != 0) {
          if (v19 >> 61 != 0) {
            goto LABEL_419;
          }
          v20 = v15;
          v21 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
          v15 = v20;
        }
        else {
          v21 = 0;
        }
        v9 = v21 + 8 * v19;
        v22 = v21 + v16 - 8 * v17;
        *(_QWORD*)(v21 + v16) = v15;
        v8 = (__int64*)(v21 + v16 + 8);
        memcpy(v22, v7, v16);
        if (v7 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
        }
        v7 = v22;
      }
    LABEL_8:
      v4 = *(_QWORD*)(v1 + 288);
      ++v6;
      v5 += 176;
      if (0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD*)(v1 + 296) - v4) >> 4) <= v6) {
        goto LABEL_62;
      }
    }
  }
  v9 = 0;
  v8 = nullptr;
  v7 = 0;
LABEL_62:
  v46 = *(_QWORD*)(v1 + 208);
  if (v46 == 0) {
    goto LABEL_160;
  }
  game_menu_anonymous_e980a0((void*)((int*)&v241_.v241), v46);
  v47 = (char)v241_.v241;
  if (((unsigned __int8)v241_.v241 & 8) == 0) {
  LABEL_66:
    if ((v47 & 2) == 0) {
      goto LABEL_67;
    }
  LABEL_104:
    v68 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160, 16, 0);
    v69 = *(_QWORD*)(v1 + 208);
    *(_WORD*)(v68 + 16) = 0;
    *(_DWORD*)(v68 + 40) = 0;
    *(_QWORD*)(v68 + 64) = 0;
    *(_QWORD*)(v68 + 72) = 0;
    *(_QWORD*)(v68 + 48) = 0;
    *(_QWORD*)(v68 + 56) = 0;
    *(_QWORD*)(v68 + 128) = 0;
    *(_BYTE*)(v68 + 144) = 0;
    *(_WORD*)(v68 + 80) = 257;
    *(_BYTE*)(v68 + 82) = 1;
    *(_QWORD*)v68 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
    *(_QWORD*)(v68 + 8) = 0;
    *(_QWORD*)(v68 + 152) = v69;
    if ((unsigned __int64)v8 >= v9) {
      v73 = (char*)v8 - v7;
      v74 = ((__int64)v8 - v7) >> 3;
      v75 = v74 + 1;
      if ((unsigned __int64)(v74 + 1) >> 61 != 0) {
        goto LABEL_420;
      }
      if ((__int64)(v9 - v7) >> 2 > v75) {
        v75 = (__int64)(v9 - v7) >> 2;
      }
      if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
        v76 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v76 = v75;
      }
      if (v76 != 0) {
        if (v76 >> 61 != 0) {
          goto LABEL_419;
        }
        v77 = v68;
        v78 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v76, 16, 0);
        v68 = v77;
      }
      else {
        v78 = 0;
      }
      v9 = v78 + 8 * v76;
      v91 = (unsigned __int64)v8 - v7;
      v92 = (__int64)&v73[v78 + -8 * v74];
      *(_QWORD*)&v73[v78] = v68;
      v8 = (__int64*)&v73[v78 + 8];
      memcpy(v92, v7, v91);
      if (v7 != 0) {
        v93 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v93 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v7);
      }
      v7 = v92;
      if ((v47 & 4) != 0) {
        goto LABEL_106;
      }
    }
    else {
      *v8++ = v68;
      if ((v47 & 4) != 0) {
        goto LABEL_106;
      }
    }
  LABEL_68:
    if ((v47 & 0x10) == 0) {
      goto LABEL_69;
    }
    goto LABEL_108;
  }
  v48 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  v49 = *(_QWORD*)(v1 + 208);
  *(_WORD*)(v48 + 16) = 0;
  *(_DWORD*)(v48 + 40) = 0;
  *(_QWORD*)(v48 + 64) = 0;
  *(_QWORD*)(v48 + 72) = 0;
  *(_QWORD*)(v48 + 48) = 0;
  *(_QWORD*)(v48 + 56) = 0;
  *(_QWORD*)(v48 + 128) = 0;
  *(_BYTE*)(v48 + 144) = 0;
  *(_WORD*)(v48 + 80) = 257;
  *(_BYTE*)(v48 + 82) = 1;
  *(_QWORD*)v48 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
  *(_QWORD*)(v48 + 8) = 0;
  *(_QWORD*)(v48 + 152) = v49;
  if ((unsigned __int64)v8 < v9) {
    *v8++ = v48;
    goto LABEL_66;
  }
  v53 = (char*)v8 - v7;
  v54 = ((__int64)v8 - v7) >> 3;
  v55 = v54 + 1;
  if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
    goto LABEL_420;
  }
  if ((__int64)(v9 - v7) >> 2 > v55) {
    v55 = (__int64)(v9 - v7) >> 2;
  }
  if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v56 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v56 = v55;
  }
  if (v56 != 0) {
    if (v56 >> 61 != 0) {
      goto LABEL_419;
    }
    v57 = v48;
    v58 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v56, 16, 0);
    v48 = v57;
  }
  else {
    v58 = 0;
  }
  v9 = v58 + 8 * v56;
  v65 = (unsigned __int64)v8 - v7;
  v66 = (__int64)&v53[v58 + -8 * v54];
  *(_QWORD*)&v53[v58] = v48;
  v8 = (__int64*)&v53[v58 + 8];
  memcpy(v66, v7, v65);
  if (v7 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                                  v7);
  }
  v7 = v66;
  if ((v47 & 2) != 0) {
    goto LABEL_104;
  }
LABEL_67:
  if ((v47 & 4) == 0) {
    goto LABEL_68;
  }
LABEL_106:
  v70 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  *(_QWORD*)(v70 + 80) = 0;
  *(_QWORD*)(v70 + 88) = 0;
  *(_QWORD*)(v70 + 16) = 0;
  *(_QWORD*)(v70 + 24) = 0;
  *(_QWORD*)(v70 + 32) = 0;
  *(_QWORD*)(v70 + 40) = 0;
  *(_QWORD*)(v70 + 48) = 0;
  *(_QWORD*)(v70 + 56) = 0;
  *(_QWORD*)(v70 + 64) = 0;
  *(_QWORD*)(v70 + 72) = 0;
  *(_QWORD*)(v70 + 96) = 0;
  *(_QWORD*)(v70 + 104) = 0;
  *(_QWORD*)(v70 + 112) = 0;
  *(_QWORD*)(v70 + 120) = 0;
  *(_QWORD*)(v70 + 128) = 0;
  *(_QWORD*)(v70 + 136) = 0;
  *(_QWORD*)(v70 + 144) = 0;
  *(_QWORD*)(v70 + 152) = 0;
  *(_BYTE*)(v70 + 17) = 0;
  *(_QWORD*)(v70 + 48) = 0;
  *(_QWORD*)(v70 + 56) = 0;
  *(_WORD*)(v70 + 80) = 257;
  *(_QWORD*)(v70 + 64) = 0;
  *(_QWORD*)(v70 + 72) = 0;
  *(_BYTE*)(v70 + 144) = 0;
  *(_BYTE*)(v70 + 82) = 1;
  *(_QWORD*)v70 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
  *(_QWORD*)(v70 + 8) = 0;
  if ((unsigned __int64)v8 >= v9) {
    v79 = (char*)v8 - v7;
    v80 = ((__int64)v8 - v7) >> 3;
    v81 = v80 + 1;
    if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
      goto LABEL_420;
    }
    if ((__int64)(v9 - v7) >> 2 > v81) {
      v81 = (__int64)(v9 - v7) >> 2;
    }
    if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
      v82 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v82 = v81;
    }
    if (v82 != 0) {
      if (v82 >> 61 != 0) {
        goto LABEL_419;
      }
      v83 = v70;
      v84 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v82, 16, 0);
      v70 = v83;
    }
    else {
      v84 = 0;
    }
    v9 = v84 + 8 * v82;
    v94 = (unsigned __int64)v8 - v7;
    v95 = (__int64)&v79[v84 + -8 * v80];
    *(_QWORD*)&v79[v84] = v70;
    v8 = (__int64*)&v79[v84 + 8];
    memcpy(v95, v7, v94);
    if (v7 != 0) {
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v7);
    }
    v7 = v95;
    if ((v47 & 0x10) == 0) {
      goto LABEL_69;
    }
  }
  else {
    *v8++ = v70;
    if ((v47 & 0x10) == 0) {
    LABEL_69:
      if ((v47 & 0x20) == 0) {
        goto LABEL_160;
      }
      goto LABEL_158;
    }
  }
LABEL_108:
  v71 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  v72 = *(_QWORD*)(v1 + 208);
  *(_WORD*)(v71 + 16) = 0;
  *(_DWORD*)(v71 + 40) = 0;
  *(_QWORD*)(v71 + 64) = 0;
  *(_QWORD*)(v71 + 72) = 0;
  *(_QWORD*)(v71 + 48) = 0;
  *(_QWORD*)(v71 + 56) = 0;
  *(_QWORD*)(v71 + 128) = 0;
  *(_BYTE*)(v71 + 144) = 0;
  *(_WORD*)(v71 + 80) = 257;
  *(_BYTE*)(v71 + 82) = 1;
  *(_QWORD*)v71 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
  *(_QWORD*)(v71 + 8) = 0;
  *(_QWORD*)(v71 + 152) = v72;
  if ((unsigned __int64)v8 >= v9) {
    v85 = (char*)v8 - v7;
    v86 = ((__int64)v8 - v7) >> 3;
    v87 = v86 + 1;
    if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
      goto LABEL_420;
    }
    if ((__int64)(v9 - v7) >> 2 > v87) {
      v87 = (__int64)(v9 - v7) >> 2;
    }
    if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
      v88 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v88 = v87;
    }
    if (v88 != 0) {
      if (v88 >> 61 != 0) {
        goto LABEL_419;
      }
      v89 = v71;
      v90 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
      v71 = v89;
    }
    else {
      v90 = 0;
    }
    v9 = v90 + 8 * v88;
    v97 = (unsigned __int64)v8 - v7;
    v98 = (__int64)&v85[v90 + -8 * v86];
    *(_QWORD*)&v85[v90] = v71;
    v8 = (__int64*)&v85[v90 + 8];
    memcpy(v98, v7, v97);
    if (v7 != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v7);
    }
    v7 = v98;
    if ((v47 & 0x20) == 0) {
      goto LABEL_160;
    }
  }
  else {
    *v8++ = v71;
    if ((v47 & 0x20) == 0) {
    LABEL_160:
      v101 = (__int64)v8 - v7;
      if (v101 == 0) {
        goto LABEL_272;
      }
      goto LABEL_161;
    }
  }
LABEL_158:
  v100 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
  *(_QWORD*)(v100 + 80) = 0;
  *(_QWORD*)(v100 + 88) = 0;
  *(_QWORD*)(v100 + 16) = 0;
  *(_QWORD*)(v100 + 24) = 0;
  *(_QWORD*)(v100 + 32) = 0;
  *(_QWORD*)(v100 + 40) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_QWORD*)(v100 + 64) = 0;
  *(_QWORD*)(v100 + 72) = 0;
  *(_QWORD*)(v100 + 96) = 0;
  *(_QWORD*)(v100 + 104) = 0;
  *(_QWORD*)(v100 + 112) = 0;
  *(_QWORD*)(v100 + 120) = 0;
  *(_QWORD*)(v100 + 128) = 0;
  *(_QWORD*)(v100 + 136) = 0;
  *(_QWORD*)(v100 + 144) = 0;
  *(_QWORD*)(v100 + 152) = 0;
  *(_BYTE*)(v100 + 17) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_WORD*)(v100 + 80) = 257;
  *(_QWORD*)(v100 + 64) = 0;
  *(_QWORD*)(v100 + 72) = 0;
  *(_BYTE*)(v100 + 144) = 0;
  *(_BYTE*)(v100 + 82) = 1;
  *(_QWORD*)v100 = game_menu_SubMenuItem_Destroy_SubMenuItem_86dff0_ptr;
  *(_QWORD*)(v100 + 8) = 0;
  if ((unsigned __int64)v8 < v9) {
    *v8++ = v100;
    goto LABEL_160;
  }
  v146 = (char*)v8 - v7;
  v147 = ((__int64)v8 - v7) >> 3;
  v148 = v147 + 1;
  if ((unsigned __int64)(v147 + 1) >> 61 != 0) {
  LABEL_420:
    GameRoutine_e952b0();
  }
  if ((__int64)(v9 - v7) >> 2 > v148) {
    v148 = (__int64)(v9 - v7) >> 2;
  }
  if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
    v148 = 0x1FFFFFFFFFFFFFFFLL;
  }
  if (v148 != 0) {
    if (v148 >> 61 != 0) {
      goto LABEL_419;
    }
    v149 = v100;
    v148 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v148, 16, 0);
    v100 = v149;
  }
  v150 = (unsigned __int64)v8 - v7;
  v151 = (__int64)&v146[v148 + -8 * v147];
  *(_QWORD*)&v146[v148] = v100;
  v152 = (__int64)&v146[v148 + 8];
  memcpy(v151, v7, v150);
  if (v7 != 0) {
    v153 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v153 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v153,
                                  v7);
  }
  v7 = v151;
  v101 = v152 - v151;
  if (v101 == 0) {
    goto LABEL_272;
  }
LABEL_161:
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    Time_e1e170(*(_QWORD*)GameData_212ebf8[0]);
  }
  v102 = *(_QWORD*)(v1 + 272);
  if (v102 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v102 + 48LL))(v102);
  }
  v103 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1344, 16, 0);
  GmapTalkCommandMenu_e94ee0(&v228_.v228, (__int64*)(v1 + 208));
  GmapTalkCommandMenu_e94ee0(&v241_.v241, (__int64*)&v228_.v228);
  GmapTalkCommandMenu_e94ee0((_QWORD*)(v103 + 1136), (__int64*)&v241_.v241);
  if (v249_.v250 == v249_.v249) {
    v104 = 32;
    goto LABEL_169;
  }
  if (v249_.v250 != nullptr) {
    v104 = 40;
  LABEL_169:
    (*(void (**)(__int64))(*(_QWORD*)v249_.v250 + v104))((__int64)v249_.v250);
  }
  v105 = v246_.v247;
  if (v246_.v247 != 0) {
    v106 = v246_.v248;
    if (v246_.v247 == v246_.v248) {
      goto LABEL_181;
    }
    v107 = v246_.v248;
    do {
      v108 = *(_BYTE*)(v107 - 24);
      v107 -= 24;
      if ((v108 & 1) != 0) {
        v109 = *(_QWORD*)(v106 - 8);
        if (v109 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v110, v109);
        }
      }
      v106 = v107;
    } while (v107 != v105);
    v246_.v248 = v105;
    v105 = v246_.v247;
    if (v246_.v247 != 0) {
    LABEL_181:
      v111 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v111 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v105);
    }
  }
  v239_.v239 = (__int64*)v246_.v246;
  util_cb2640(&v239_.v239);
  if (v244_.v245 == v244_.v244) {
    v112 = 32;
  }
  else {
    if (v244_.v245 == nullptr) {
      goto LABEL_189;
    }
    v112 = 40;
  }
  (*(void (**)(__int64))(*v244_.v245 + v112))((__int64)v244_.v245);
LABEL_189:
  if (v241_.v242 != nullptr) {
    v241_.v243 = (__int64)v241_.v242;
    v113 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v113,
                                  (__int64)v241_.v242);
  }
  v239_.v239 = nullptr;
  v239_.v240 = 0;
  game_menu_16dcd30(v103, (__int64)"SubMenu", &v239_.v239, 0);
  v114 = GameData_212d6a8;
  v115 = v239_.v240;
  *(_QWORD*)v103 = GameData_212d6a8 + 2;
  *(_QWORD*)(v103 + 176) = v114 + 143;
  *(_QWORD*)(v103 + 1056) = v114 + 169;
  if (v115 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
    std___1___shared_weak_count___release_weak(v115);
  }
  *(_DWORD*)(v103 + 1072) = 0;
  *(_QWORD*)(v103 + 1120) = 0;
  *(_QWORD*)(v103 + 1064) = v225;
  *(_QWORD*)(v103 + 1076) = 0;
  *(_QWORD*)v103 = game_menu_anonymous_GmapTalkCommandMenu_vtable;
  *(_QWORD*)(v103 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  *(_QWORD*)(v103 + 1056) = GameData_1feae80;
  *(_QWORD*)(v103 + 1328) = GmapTalkCommandMenu_Destructor_e966b0_ptr;
  ProcInst_657850(v103, (__int64)GameData_212c730,
                  (__int64)"GmapTalkCommandMenu", 1, a1);
  if (v236_.v237 == &v236_.v236) {
    v116 = 32;
    goto LABEL_200;
  }
  if (v236_.v237 != nullptr) {
    v116 = 40;
  LABEL_200:
    (*(void (**)(__int64))(*v236_.v237 + v116))((__int64)v236_.v237);
  }
  v117 = v233_.v234;
  if (v233_.v234 != 0) {
    v118 = v233_.v235;
    if (v233_.v234 == v233_.v235) {
      goto LABEL_212;
    }
    v119 = v233_.v235;
    do {
      v120 = *(_BYTE*)(v119 - 24);
      v119 -= 24;
      if ((v120 & 1) != 0) {
        v121 = *(_QWORD*)(v118 - 8);
        if (v121 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v122 = 128;
          }
          else {
            v122 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v121);
        }
      }
      v118 = v119;
    } while (v119 != v117);
    v233_.v235 = v117;
    v117 = v233_.v234;
    if (v233_.v234 != 0) {
    LABEL_212:
      v123 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v123 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, v117);
    }
  }
  v241_.v241 = (__int64 (**)(void))&v233_.v233;
  util_cb2640((__int64**)&v241_.v241);
  if (v231_.v232 == &v231_.v231) {
    v124 = 32;
  }
  else {
    if (v231_.v232 == nullptr) {
      goto LABEL_220;
    }
    v124 = 40;
  }
  (*(void (**)(__int64))(*v231_.v232 + v124))((__int64)v231_.v232);
LABEL_220:
  v125 = v101 >> 3;
  if (v228_.v229 != 0) {
    v228_.v230 = v228_.v229;
    v126 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v126 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v126,
                                  v228_.v229);
  }
  v127 = 0;
  v238 = v103;
  v128 = (__int64*)v7;
  do {
    BasicMenuCursor_16e0c00((_QWORD*)v103, *v128);
    *(_BYTE*)(*v128 + 144) = *(_BYTE*)(v1 + 384);
    v129 =
        (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)*v128 + 24LL))(*v128);
    v130 = strlen(v129);
    v131 = (unsigned __int8)GameData_221b408 >> 1;
    if ((GameData_221b408 & 1) != 0) {
      v131 = GameData_221b410;
    }
    if (v130 == v131) {
      v132 = v130;
      if (v130 == -1) {
        goto LABEL_418;
      }
      if ((GameData_221b408 & 1) != 0) {
        v133 = (char*)GameData_221b418;
      }
      else {
        v133 = (char*)&GameData_221b408 + 1;
      }
      if (memcmp((__int64)v133, (__int64)v129, v132) == 0) {
        v127 = *v128;
      }
    }
    --v125;
    ++v128;
  } while (v125 != 0);
  if (v127 != 0) {
    v134 = *(_QWORD*)(v103 + 336);
    if (v134 != v127) {
      if (v134 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v134 + 168LL))(v134);
      }
      *(_QWORD*)(v103 + 336) = v127;
      BasicMenu_16dea40(v103, 0, 1u, 0);
      v135 = *(_QWORD*)(v103 + 336);
      if (v135 == 0) {
        v136 = 4;
        goto LABEL_275;
      }
      (*(void (**)(__int64))(*(_QWORD*)v135 + 160LL))(v135);
      v134 = *(_QWORD*)(v103 + 336);
    }
    v136 = 4;
    if (v134 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v134 + 120LL))(v134) & 1) != 0) {
        v136 = 4;
      }
      else {
        v136 = 0;
      }
    }
  LABEL_275:
    *(_DWORD*)(v103 + 356) = *(_DWORD*)(v103 + 356) & 0xFFFFFFFB | v136;
    if (v7 == 0) {
      return;
    }
    goto LABEL_414;
  }
  v138 = *(_QWORD*)(v103 + 232);
  v137 = *(_QWORD*)(v103 + 240);
  v139 = &v241_.v241;
  v241_.v241 = GameData_1feaf90;
  v241_.v242 = &v238;
  v244_.v244[0] = &v241_.v241;
  if (v137 == v138) {
    goto LABEL_270;
  }
  v140 = 0;
  v141 = GameData_212e008[0];
  v142 = GameData_212d638[0];
  do {
    v143 = *(_QWORD*)(v138 + 8 * v140);
    if (v143 != 0) {
      v144 = (__int64*)__dynamic_cast(v143, v141, v142, 0);
      if (v144 == nullptr) {
        goto LABEL_248;
      }
      v239_.v239 = v144;
      if (v244_.v244[0] == 0) {
        GameRoutine_60a310();
      }
      if (((*(__int64 (**)(_QWORD, __int64**))(*(_QWORD*)v244_.v244[0] + 48LL))(
               v244_.v244[0], &v239_.v239) &
           1) != 0) {
        break;
      }
      v138 = *(_QWORD*)(v103 + 232);
      v137 = *(_QWORD*)(v103 + 240);
    }
  LABEL_248:
    ++v140;
  } while (v140 < (v137 - v138) >> 3);
  v139 = (__int64 (***)(void))v244_.v244[0];
  if ((__int64 (***)(void))v244_.v244[0] != &v241_.v241) {
    if (v244_.v244[0] != 0) {
      v145 = 5;
      goto LABEL_271;
    }
    goto LABEL_272;
  }
LABEL_270:
  v145 = 4;
LABEL_271:
  ((__int64 (*)(__int64))(*v139)[v145])((__int64)v139);
LABEL_272:
  if (v7 != 0) {
    goto LABEL_414;
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_ea95a0(__int64 a1,
                                                          _DWORD* a2)
{
  char v2;
  __int64 v4;
  __int64 v5;
  char v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  char v41;
  int v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  _QWORD* v54;
  _QWORD* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  _QWORD* v64;
  __int64 v65;
  unsigned int v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  char v78;
  unsigned int v79;
  int v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  char v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned int v91;
  _QWORD* v92;
  _QWORD* v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  __int64* v104;
  __int64* v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  struct {
    char gap48_[8];
    __int64 v110;
    __int128 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    _BYTE v115[12];
  } v110_;
  _QWORD v116[3];
  int v117;
  _QWORD* v118;
  _QWORD* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  _QWORD v124[2];
  struct {
    __int64 v125;
    __int64 v126;
    char gap224_[4];
    char v127;
  } v125_;

  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_BYTE*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v7 = v2 - 1;
  if ((v7 & 0xFC) != 0) {
    v8 = 256;
  }
  else {
    v8 = 0x104010201200101uLL >> (16 * v7);
  }
  v108 = v8;
  v9 = *(__int64**)(a1 + 24);
  v11 = *v9;
  v10 = v9[1];
  v125_.v125 = v11;
  v125_.v126 = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  result = game_cmdbtl_e76460(v4, &v125_.v125, (__int64)a2, v108),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v13 = v125_.v126;
  if (v125_.v126 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v125_.v126 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v79 = result;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1___shared_weak_count___release_weak(v13),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = v79;
    if ((v79 & 1) == 0) {
      return result;
    }
  }
  else if ((result & 1) == 0) {
    return result;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v15 = GameData_212f7d0[0];
  v16 = GameData_212f968;
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v14 + 104)) & 1) !=
          0 &&
      *(_QWORD*)(v14 + 576) == 0 && *(_WORD*)(v14 + 136) != 0) {
    v17 = 0;
    v105 = GameData_212f7d0[0] + 2;
    v106 = GameData_212f730[0] + 16;
    v104 = GameData_212f968 + 2;
    v107 = v5;
    v103 = GameData_212f738 + 16;
    while (1) {
      v19 = *(_QWORD*)(a1 + 16);
      v20 = *(_QWORD**)(a1 + 24);
      v21 = *v20;
      v22 = v20[1];
      v23 = *(_QWORD*)(*v20 + 16LL);
      v124[0] = v21;
      v124[1] = v22;
      v24 = v23 + 8 * v17;
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
        result = game_cmdbtl_e76590(v19, (__int64)v124, a2, v108,
                                    (unsigned __int16*)(v24 + 828)),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v25 = result;
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          v5 = v107;
          if ((result & 1) == 0) {
            goto LABEL_15;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          result = std___1___shared_weak_count___release_weak(v22),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v5 = v107;
          if ((v25 & 1) == 0) {
            goto LABEL_15;
          }
        }
      }
      else {
        result = game_cmdbtl_e76590(v19, (__int64)v124, a2, v108,
                                    (unsigned __int16*)(v24 + 828)),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((result & 1) == 0) {
          goto LABEL_15;
        }
      }
      v109 = 0;
      LOBYTE(v110_.v111) = 0;
      v110_.v112 = 0;
      v110_.v113 = 0;
      v110_.v114 = 0;
      *(_QWORD*)&v110_.v115[4] = 0;
      __builtin_memset(v116, 0, sizeof(v116));
      *(_QWORD*)((char*)&v110_.v111 + 4) = 0xFFFFFFFF00000000LL;
      *(_DWORD*)v110_.v115 = -1;
      v117 = 0;
      v110_.v110 = v106;
      v118 = nullptr;
      v119 = nullptr;
      v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v27 = (__int64)v119;
      v26[1] = 0;
      v26[2] = 0;
      v26[6] = 0;
      v26[7] = 0;
      v26[8] = 0;
      v26[9] = 0;
      v26[10] = 0;
      v26[4] = &v110_.v110;
      v26[5] = 0;
      v119 = v26;
      *v26 = v105;
      v26[3] = v104;
      v118 = v26 + 3;
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        std___1___shared_weak_count___release_weak(v27),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v123 = 0;
      v121 = 0;
      v122 = 0;
      v28 = v110_.v114;
      v120 = 0;
      v29 = *(_DWORD*)(v5 + 8);
      LOBYTE(v110_.v111) = 0;
      v110_.v112 = 0;
      v110_.v113 = 0;
      v110_.v114 = 0;
      *(_QWORD*)((char*)&v110_.v111 + 4) = v29 | 0xFFFFFFFF00000000LL;
      if (v28 != 0) {
        std___1___shared_weak_count___release_weak(v28),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      *(_QWORD*)v110_.v115 = 0xFFFFFFFFLL;
      *(_DWORD*)&v110_.v115[8] = 0;
      (*(void (**)(__int64*))(v110_.v110 + 56))(&v110_.v110),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v30 = *(__int64**)(a1 + 24);
      LOBYTE(v110_.v111) = *(_BYTE*)(a1 + 32);
      v31 = *v30;
      v32 = v30[1];
      if (v32 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                  memory_order_relaxed);
      }
      v33 = v110_.v114;
      v110_.v113 = v31;
      v110_.v114 = v32;
      if (v33 != 0) {
        std___1___shared_weak_count___release_weak(v33),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      if (v32 != 0) {
        std___1___shared_weak_count___release_weak(v32),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      DWORD2(v110_.v111) = v17;
      v34 = 0;
      v35 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
      v36 = *(_QWORD*)(a1 + 24);
      v110_.v112 = v35;
      v37 = *(_QWORD**)(*(_QWORD*)v36 + 16LL);
      if (v37 != nullptr && *(_BYTE*)(v35 + 275) != 0) {
        v38 = v37[218];
        v39 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                               game_g_shared_system_skills_ptr);
        if (((v39 >> 5) & 0x7F) + 1 <= (v37[219] - v38) >> 2 &&
                ((*(_DWORD*)(v38 + 4 * ((v39 >> 5) & 0x7F)) >> v39) & 1) != 0 ||
            ((v40 = v37[55]) == 0 ? (v41 = 9) : (v41 = *(_BYTE*)(v40 + 16)),
             ((1 << v41) & 6) != 0 ||
                 (v125_.v127 = 0,
                  (v63 = game_Unit_GetParam((__int64)v37)) < 1))) {
          v34 = 0;
        }
        else {
          v34 =
              (v63 * (unsigned int)*(unsigned __int8*)(v35 + 275) + 99) / 0x64;
        }
      }
      LODWORD(v120) = v34;
      v42 = 0;
      v43 = *(_QWORD**)(**(_QWORD**)(a1 + 24) + 16LL);
      if (v43 != nullptr) {
        v44 = *(_QWORD*)(*GameData_212c880[0] + 64);
        if (*(_BYTE*)(*(_QWORD*)(v44 + 8LL * (*a2 & 0xFFF)) + 274LL) != 0) {
          if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(v24 +
                                                                        828)) +
                                  72LL) <= 7u &&
              (v45 = v43[218],
               (((v46 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                         game_g_shared_system_skills_ptr)) >>
                 5) &
                0x7F) + 1 <=
                   (v43[219] - v45) >> 2) &&
              ((*(_DWORD*)(v45 + 4 * ((v46 >> 5) & 0x7F)) >> v46) & 1) != 0) {
            v42 = 0;
          }
          else {
            v47 = v43[55];
            if (v47 != 0) {
              v48 = *(_BYTE*)(v47 + 16);
            }
            else {
              v48 = 9;
            }
            if (((1 << v48) & 6) != 0) {
              v42 = 0;
            }
            else {
              v42 = *(unsigned __int8*)(*(_QWORD*)(v44 + 8LL * (*a2 & 0xFFF)) +
                                        274LL);
            }
          }
        }
      }
      HIDWORD(v120) = v42;
      v49 = *(_QWORD*)(v5 + 56);
      if (v49 >= *(_QWORD*)(v5 + 64)) {
        v18 = GameRoutine_ea60e0((__int64*)(v5 + 48), (__int64)&v109),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      else {
        *(_DWORD*)v49 = v109;
        *(_QWORD*)(v49 + 8) = v103;
        v50 = v110_.v111;
        v51 = v110_.v112;
        *(_QWORD*)(v49 + 24) = *((_QWORD*)&v110_.v111 + 1);
        *(_QWORD*)(v49 + 32) = v51;
        *(_QWORD*)(v49 + 16) = v50;
        *(_QWORD*)(v49 + 40) = v110_.v113;
        v52 = v110_.v114;
        *(_QWORD*)(v49 + 48) = v110_.v114;
        if (v52 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                    memory_order_relaxed);
        }
        v53 = *(_DWORD*)v110_.v115;
        *(_QWORD*)(v49 + 72) = 0;
        *(_QWORD*)(v49 + 80) = 0;
        *(_QWORD*)(v49 + 88) = 0;
        *(_QWORD*)(v49 + 56) = __PAIR64__(*(unsigned int*)&v110_.v115[4], v53);
        *(_DWORD*)(v49 + 64) = *(_DWORD*)&v110_.v115[8];
        *(_DWORD*)(v49 + 68) = v116[0];
        v54 = *(_QWORD**)((char*)v116 + 4);
        v55 = *(_QWORD**)((char*)&v116[1] + 4);
        v56 = *(_QWORD*)((char*)&v116[1] + 4) - *(_QWORD*)((char*)v116 + 4);
        if (*(_QWORD*)((char*)&v116[1] + 4) != *(_QWORD*)((char*)v116 + 4)) {
          if (0xAAAAAAAAAAAAAAABLL * (v56 >> 3) > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_119;
          }
          v57 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr,
              *(_QWORD*)((char*)&v116[1] + 4) - *(_QWORD*)((char*)v116 + 4), 16,
              0),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          *(_QWORD*)(v49 + 72) = v57;
          *(_QWORD*)(v49 + 80) = v57;
          *(_QWORD*)(v49 + 88) = (char*)v57 + v56;
          do {
            *v57 = *v54;
            v57[1] = v54[1];
            v58 = v54[2];
            v57[2] = v58;
            if (v58 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                        memory_order_relaxed);
            }
            v54 += 3;
            v57 += 3;
          } while (v54 != v55);
          *(_QWORD*)(v49 + 80) = v57;
        }
        v5 = v107;
        *(_QWORD*)(v49 + 8) = GameData_212f730[0] + 16;
        *(_QWORD*)(v49 + 96) = v118;
        v59 = v119;
        *(_QWORD*)(v49 + 104) = v119;
        if (v59 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 1), 1u,
                                    memory_order_relaxed);
        }
        v60 = v120;
        v61 = v121;
        v62 = v122;
        v18 = v49 + 144;
        *(_DWORD*)(v49 + 136) = v123;
        *(_QWORD*)(v49 + 120) = v61;
        *(_QWORD*)(v49 + 128) = v62;
        *(_QWORD*)(v49 + 112) = v60;
      }
      *(_QWORD*)(v5 + 56) = v18;
      result = MindBtlInfo_Destructor(&v110_.v110),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    LABEL_15:
      if (++v17 == 30) {
        return result;
      }
    }
  }
  v109 = 0;
  LOBYTE(v110_.v111) = 0;
  v110_.v112 = 0;
  v110_.v113 = 0;
  *(_QWORD*)((char*)&v110_.v111 + 4) = 0xFFFFFFFF00000000LL;
  v110_.v114 = 0;
  *(_DWORD*)v110_.v115 = -1;
  *(_QWORD*)&v110_.v115[4] = 0;
  __builtin_memset(v116, 0, sizeof(v116));
  v117 = 0;
  v110_.v110 = GameData_212f730[0] + 16;
  v118 = nullptr;
  v119 = nullptr;
  v64 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v64[1] = 0;
  v64[2] = 0;
  v64[6] = 0;
  v64[7] = 0;
  v64[8] = 0;
  v64[9] = 0;
  v64[10] = 0;
  v64[4] = &v110_.v110;
  v64[5] = 0;
  v119 = v64;
  *v64 = v15 + 2;
  v64[3] = v16 + 2;
  v118 = v64 + 3;
  v123 = 0;
  v121 = 0;
  v122 = 0;
  v65 = v110_.v114;
  v120 = 0;
  v66 = *(_DWORD*)(v5 + 8);
  LOBYTE(v110_.v111) = 0;
  v110_.v112 = 0;
  v110_.v113 = 0;
  v110_.v114 = 0;
  *(_QWORD*)((char*)&v110_.v111 + 4) = v66 | 0xFFFFFFFF00000000LL;
  if (v65 != 0) {
    std___1___shared_weak_count___release_weak(v65),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  *(_DWORD*)&v110_.v115[8] = 0;
  *(_QWORD*)v110_.v115 = 0xFFFFFFFFLL;
  (*(void (**)(__int64))((char*)((_UNKNOWN**)0x38LL) + v110_.v110))(
      (__int64)&v110_.v110),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v67 = *(__int64**)(a1 + 24);
  LOBYTE(v110_.v111) = *(_BYTE*)(a1 + 32);
  v68 = *v67;
  v69 = v67[1];
  if (v69 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                              memory_order_relaxed);
  }
  v70 = v110_.v114;
  v110_.v113 = v68;
  v110_.v114 = v69;
  if (v70 != 0) {
    std___1___shared_weak_count___release_weak(v70),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v69 != 0) {
    std___1___shared_weak_count___release_weak(v69),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v71 = 0;
  v72 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v73 = *(_QWORD*)(a1 + 24);
  v110_.v112 = v72;
  v74 = *(_QWORD**)(*(_QWORD*)v73 + 16LL);
  if (v74 != nullptr && *(_BYTE*)(v72 + 275) != 0) {
    v75 = v74[218];
    v76 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                           game_g_shared_system_skills_ptr);
    if (((v76 >> 5) & 0x7F) + 1 <= (v74[219] - v75) >> 2 &&
            ((*(_DWORD*)(v75 + 4 * ((v76 >> 5) & 0x7F)) >> v76) & 1) != 0 ||
        ((v77 = v74[55]) == 0 ? (v78 = 9) : (v78 = *(_BYTE*)(v77 + 16)),
         ((1 << v78) & 6) != 0 ||
             (LOBYTE(v124[0]) = 0,
              (v102 = game_Unit_GetParam((__int64)v74)) < 1))) {
      v71 = 0;
    }
    else {
      v71 = (v102 * (unsigned int)*(unsigned __int8*)(v72 + 275) + 99) / 0x64;
    }
  }
  LODWORD(v120) = v71;
  v80 = 0;
  v81 = *(_QWORD**)(**(_QWORD**)(a1 + 24) + 16LL);
  if (v81 != nullptr) {
    v82 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if (*(_BYTE*)(*(_QWORD*)(v82 + 8LL * (*a2 & 0xFFF)) + 274LL) != 0) {
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)
                                                   game_g_empty_item_ptr) +
                              72LL) <= 7u &&
          (v83 = v81[218],
           (((v84 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                     game_g_shared_system_skills_ptr)) >>
             5) &
            0x7F) + 1 <=
               (v81[219] - v83) >> 2) &&
          ((*(_DWORD*)(v83 + 4 * ((v84 >> 5) & 0x7F)) >> v84) & 1) != 0) {
        v80 = 0;
      }
      else {
        v85 = v81[55];
        if (v85 != 0) {
          v86 = *(_BYTE*)(v85 + 16);
        }
        else {
          v86 = 9;
        }
        if (((1 << v86) & 6) != 0) {
          v80 = 0;
        }
        else {
          v80 = *(unsigned __int8*)(*(_QWORD*)(v82 + 8LL * (*a2 & 0xFFF)) +
                                    274LL);
        }
      }
    }
  }
  HIDWORD(v120) = v80;
  v87 = *(_QWORD*)(v5 + 56);
  if (v87 >= *(_QWORD*)(v5 + 64)) {
    v97 = GameRoutine_ea60e0((__int64*)(v5 + 48), (__int64)&v109),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    *(_DWORD*)v87 = v109;
    *(_QWORD*)(v87 + 8) = GameData_212f738 + 16;
    v88 = v110_.v111;
    v89 = v110_.v112;
    *(_QWORD*)(v87 + 24) = *((_QWORD*)&v110_.v111 + 1);
    *(_QWORD*)(v87 + 32) = v89;
    *(_QWORD*)(v87 + 16) = v88;
    *(_QWORD*)(v87 + 40) = v110_.v113;
    v90 = v110_.v114;
    *(_QWORD*)(v87 + 48) = v110_.v114;
    if (v90 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 16), 1u,
                                memory_order_relaxed);
    }
    v91 = *(_DWORD*)v110_.v115;
    *(_QWORD*)(v87 + 72) = 0;
    *(_QWORD*)(v87 + 80) = 0;
    *(_QWORD*)(v87 + 88) = 0;
    *(_QWORD*)(v87 + 56) = __PAIR64__(*(unsigned int*)&v110_.v115[4], v91);
    *(_DWORD*)(v87 + 64) = *(_DWORD*)&v110_.v115[8];
    *(_DWORD*)(v87 + 68) = v116[0];
    v92 = *(_QWORD**)((char*)v116 + 4);
    v93 = *(_QWORD**)((char*)&v116[1] + 4);
    v94 = *(_QWORD*)((char*)&v116[1] + 4) - *(_QWORD*)((char*)v116 + 4);
    if (*(_QWORD*)((char*)&v116[1] + 4) != *(_QWORD*)((char*)v116 + 4)) {
      if (0xAAAAAAAAAAAAAAABLL * (v94 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      LABEL_119:
        GameRoutine_ea6540(),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v95 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr,
          *(_QWORD*)((char*)&v116[1] + 4) - *(_QWORD*)((char*)v116 + 4), 16, 0),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *(_QWORD*)(v87 + 72) = v95;
      *(_QWORD*)(v87 + 80) = v95;
      *(_QWORD*)(v87 + 88) = (char*)v95 + v94;
      do {
        *v95 = *v92;
        v95[1] = v92[1];
        v96 = v92[2];
        v95[2] = v96;
        if (v96 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8), 1u,
                                    memory_order_relaxed);
        }
        v92 += 3;
        v95 += 3;
      } while (v92 != v93);
      *(_QWORD*)(v87 + 80) = v95;
    }
    *(_QWORD*)(v87 + 8) = GameData_212f730[0] + 16;
    *(_QWORD*)(v87 + 96) = v118;
    v98 = v119;
    *(_QWORD*)(v87 + 104) = v119;
    if (v98 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v98 + 1), 1u,
                                memory_order_relaxed);
    }
    v99 = v120;
    v100 = v121;
    v101 = v122;
    v97 = v87 + 144;
    *(_DWORD*)(v87 + 136) = v123;
    *(_QWORD*)(v87 + 120) = v100;
    *(_QWORD*)(v87 + 128) = v101;
    *(_QWORD*)(v87 + 112) = v99;
  }
  *(_QWORD*)(v5 + 56) = v97;
  return MindBtlInfo_Destructor(&v110_.v110);
}

__int64 llvm_libcxx_21_libcxx_include___functional_10466d0(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    v4 = *a2;
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *(_QWORD*)(a1 + 8);
      if (result != 0) {
        result =
            ((__int64 (*)(_QWORD*, __int64))GameHr_cb18f0)((_QWORD*)result, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_120b090(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  int v12;
  __int64* v13;
  __int16 v14;
  unsigned int v15;
  unsigned int v16;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 440);
  if (v3 != 0 && *(_BYTE*)(v3 + 16) == 0) {
    v4 = *(__int16*)(v2 + 492);
    LOBYTE(v16) = 0;
    v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 25);
    if (100 * v4 / (int)game_Unit_GetParam(v2) >=
        (signed __int32)*(_DWORD*)&GameData_1bb7384[4 * v5]) {
      return 0;
    }
    v2 = *(_QWORD*)(a1 + 8);
  }
  else if ((*(_BYTE*)(v2 + 1978) & 1) == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * *(int*)((char*)GameData_2130920[0] +
                                (unsigned __int64)((_UNKNOWN*)0xC0LL)));
  if (v6 != 0) {
    LODWORD(v6) = *(_WORD*)(v6 + 16) & 0xFFF;
  }
  v16 = v6;
  if (game_HasSkill((_QWORD*)(v2 + 1744), &v16)) {
    return 0;
  }
  v7 = *(char**)(a1 + 8);
  if ((v7[1976] & 4) == 0 ||
      (v8 = GameRoutine_11f3dc0(*(unsigned __int16**)(a1 + 8)),
       v7 = *(char**)(a1 + 8), (v8 & 0x80000000) != 0)) {
  LABEL_15:
    if ((v7[1976] & 8) != 0) {
      v16 = 2;
      AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], (__int64)v7, 100, &v16);
      if (llvm_libcxx_21_libcxx_include___functional_120b2e0(*(_QWORD*)(a1 + 8),
                                                             &v16, &v15)) {
        return AIThink_1200be0(a1, v16, v15, 1, 0);
      }
    }
    return 0;
  }
  v9 = v8;
  result = AIThink_1200be0(a1, v7[584], v7[585], 4, 0);
  if ((_DWORD)result != 1) {
    if ((_DWORD)result != 0) {
      return result;
    }
    v7 = *(char**)(a1 + 8);
    goto LABEL_15;
  }
  v11 = *GameData_212cfd0[0];
  *(_BYTE*)(v11 + 20) = 11;
  v12 = *(unsigned __int8*)(v11 + 8);
  *(_DWORD*)(v11 + 40) = v9;
  if (v12 != 0 && game_UnitPool_Get((_BYTE*)(v11 + 8)) != nullptr) {
    v13 = &game_UnitPool_Get((_BYTE*)(v11 + 8))[v9];
    v14 = *((_WORD*)v13 + 414);
    *(_BYTE*)(v11 + 46) = *((_BYTE*)v13 + 830);
    *(_WORD*)(v11 + 44) = v14;
    *(_BYTE*)(v11 + 47) = *((_BYTE*)v13 + 831);
    *(_DWORD*)(v11 + 48) = *((_DWORD*)v13 + 208);
  }
  GameRoutine_11f2730(
      a1, *(_QWORD*)(a1 + 8),
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL *
                                         *(unsigned __int16*)(*(_QWORD*)(a1 +
                                                                         8) +
                                                              8LL * v9 + 828)) +
                          88LL) >>
          ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 8LL * v9 + 831) & 8) != 0));
  return 1;
}

bool llvm_libcxx_21_libcxx_include___functional_120b2e0(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3)
{
  bool v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 (***v15)();
  __int64 (***v16)();
  char* v17;
  char* v18;
  int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 (***v30)();
  __int64 (***v31)();
  char* v32;
  char* v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 (**v40)();
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 (***v45)();
  __int64 (***v46)();
  char* v47;
  char* v48;
  int v49;
  int v50;
  unsigned int v51;
  unsigned __int8 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v57;
  __int64 (**v58)();
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 (***v63)();
  __int64 (***v64)();
  char* v65;
  char* v66;
  int v67;
  int v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 (**v81)();
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  unsigned int v87;
  __int64 (***v88)();
  char* v89;
  char* v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  _BYTE v97[4];
  struct {
    __int16 v98;
    char v99;
  } v98_;
  int v100;
  _DWORD* v101;
  _DWORD* v102;
  __int64 v103;
  unsigned int v104;
  unsigned int v105;

  v102 = a2;
  v103 = a1;
  v101 = a3;
  v100 = 0;
  v98_.v98 = 0;
  v98_.v99 = 0;
  *a2 = -1;
  *a3 = -1;
  v3 = *(_BYTE*)(*GameData_212ce90[0] +
                 *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1 &&
       (*(_QWORD*)GameData_212d290 == 0 ||
        (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) == 0);
  v97[0] = v3;
  v4 = *(_QWORD*)(a1 + 440);
  v5 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v4 != 0) {
    v6 = (__int64)&v5[3 * *(unsigned __int8*)(v4 + 16)];
  }
  else {
    v6 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if (v7 == 3 || v7 == 0) {
    v9 = *v5;
    if (*v5 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v9 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v9, 0, 1) & 1) != 0) {
          v11 = *(_QWORD*)(v9 + 440);
          if (v11 != 0) {
            v12 = *(unsigned __int8*)(v11 + 16);
          }
          else {
            v12 = 9;
          }
          v13 = *(_QWORD*)(v103 + 440);
          if (v13 != 0) {
            v14 = *(unsigned __int8*)(v13 + 16);
          }
          else {
            v14 = 9;
          }
          LOBYTE(v96) = v12 == v14;
          v15 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v15[6] = (__int64 (**)(void))&v100;
          v15[7] = (__int64 (**)(void))&v101;
          v16 = v15;
          *v15 = GameData_2019448;
          v15[1] = (__int64 (**)(void))&v103;
          v15[2] = (__int64 (**)(void))&v96;
          v15[3] = (__int64 (**)(void))&v102;
          v15[4] = (__int64 (**)(void))v97;
          v15[5] = (__int64 (**)(void))&v98_.v98;
          v17 = *(char**)(v9 + 600);
          v18 = *(char**)(v9 + 608);
          if (v17 == v18) {
            v10 = GameData_2019448;
          }
          else {
            v19 = *(char*)(v9 + 584);
            v20 = *(char*)(v9 + 585);
            do {
              v21 = *v17 + v19;
              v104 = v17[1] + v20;
              v105 = v21;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v16)[6])(v16, &v105, &v104);
              v17 += 4;
            } while (v17 != v18);
            v10 = *v16;
          }
          ((void (*)(__int64 (***)(void)))v10[5])(v16);
        }
        v9 = *(_QWORD*)(v9 + 432);
      } while (v9 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  v22 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v4 != 0) {
    v23 = v22 + 24LL * *(unsigned __int8*)(v4 + 16) + 556000;
  }
  else {
    v23 = v22 + 556216;
  }
  if (*(_BYTE*)(v23 + 16) == 1) {
    v24 = *(_QWORD*)(v22 + 556024);
    if (v24 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v24 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v24, 0, 1) & 1) != 0) {
          v26 = *(_QWORD*)(v24 + 440);
          if (v26 != 0) {
            v27 = *(unsigned __int8*)(v26 + 16);
          }
          else {
            v27 = 9;
          }
          v28 = *(_QWORD*)(v103 + 440);
          if (v28 != 0) {
            v29 = *(unsigned __int8*)(v28 + 16);
          }
          else {
            v29 = 9;
          }
          LOBYTE(v96) = v27 == v29;
          v30 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v30[6] = (__int64 (**)(void))&v100;
          v30[7] = (__int64 (**)(void))&v101;
          v31 = v30;
          *v30 = GameData_2019448;
          v30[1] = (__int64 (**)(void))&v103;
          v30[2] = (__int64 (**)(void))&v96;
          v30[3] = (__int64 (**)(void))&v102;
          v30[4] = (__int64 (**)(void))v97;
          v30[5] = (__int64 (**)(void))&v98_.v98;
          v32 = *(char**)(v24 + 600);
          v33 = *(char**)(v24 + 608);
          if (v32 == v33) {
            v25 = GameData_2019448;
          }
          else {
            v34 = *(char*)(v24 + 584);
            v35 = *(char*)(v24 + 585);
            do {
              v36 = *v32 + v34;
              v104 = v32[1] + v35;
              v105 = v36;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v31)[6])(v31, &v105, &v104);
              v32 += 4;
            } while (v32 != v33);
            v25 = *v31;
          }
          ((void (*)(__int64 (***)(void)))v25[5])(v31);
        }
        v24 = *(_QWORD*)(v24 + 432);
      } while (v24 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  v37 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v4 != 0) {
    v38 = v37 + 24LL * *(unsigned __int8*)(v4 + 16) + 556000;
  }
  else {
    v38 = v37 + 556216;
  }
  if (*(_BYTE*)(v38 + 16) == 2) {
    v39 = *(_QWORD*)(v37 + 556048);
    if (v39 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v39 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v39, 0, 1) & 1) != 0) {
          v41 = *(_QWORD*)(v39 + 440);
          if (v41 != 0) {
            v42 = *(unsigned __int8*)(v41 + 16);
          }
          else {
            v42 = 9;
          }
          v43 = *(_QWORD*)(v103 + 440);
          if (v43 != 0) {
            v44 = *(unsigned __int8*)(v43 + 16);
          }
          else {
            v44 = 9;
          }
          LOBYTE(v96) = v42 == v44;
          v45 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v45[6] = (__int64 (**)(void))&v100;
          v45[7] = (__int64 (**)(void))&v101;
          v46 = v45;
          *v45 = GameData_2019448;
          v45[1] = (__int64 (**)(void))&v103;
          v45[2] = (__int64 (**)(void))&v96;
          v45[3] = (__int64 (**)(void))&v102;
          v45[4] = (__int64 (**)(void))v97;
          v45[5] = (__int64 (**)(void))&v98_.v98;
          v47 = *(char**)(v39 + 600);
          v48 = *(char**)(v39 + 608);
          if (v47 == v48) {
            v40 = GameData_2019448;
          }
          else {
            v49 = *(char*)(v39 + 584);
            v50 = *(char*)(v39 + 585);
            do {
              v51 = *v47 + v49;
              v104 = v47[1] + v50;
              v105 = v51;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v46)[6])(v46, &v105, &v104);
              v47 += 4;
            } while (v47 != v48);
            v40 = *v46;
          }
          ((void (*)(__int64 (***)(void)))v40[5])(v46);
        }
        v39 = *(_QWORD*)(v39 + 432);
      } while (v39 != 0);
      a1 = v103;
      v4 = *(_QWORD*)(v103 + 440);
    }
  }
  if (v4 != 0) {
    v52 = *(_BYTE*)(v4 + 16);
    v53 = *(_QWORD*)(GameData_21ca310 + 56);
    v54 = v53 + 24LL * v52 + 556000;
  }
  else {
    v53 = *(_QWORD*)(GameData_21ca310 + 56);
    v54 = v53 + 556216;
  }
  v55 = *(unsigned __int8*)(v54 + 16);
  if (v55 == 3 || v55 == 0) {
    v57 = *(_QWORD*)(v53 + 556072);
    if (v57 != 0) {
      do {
        if ((v103 == 0 || *(unsigned __int8*)(v57 + 2088) !=
                              *(unsigned __int8*)(v103 + 2088)) &&
            (game_11f4940(v57, 0, 1) & 1) != 0) {
          v59 = *(_QWORD*)(v57 + 440);
          if (v59 != 0) {
            v60 = *(unsigned __int8*)(v59 + 16);
          }
          else {
            v60 = 9;
          }
          v61 = *(_QWORD*)(v103 + 440);
          if (v61 != 0) {
            v62 = *(unsigned __int8*)(v61 + 16);
          }
          else {
            v62 = 9;
          }
          LOBYTE(v96) = v60 == v62;
          v63 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v63[6] = (__int64 (**)(void))&v100;
          v63[7] = (__int64 (**)(void))&v101;
          v64 = v63;
          *v63 = GameData_2019448;
          v63[1] = (__int64 (**)(void))&v103;
          v63[2] = (__int64 (**)(void))&v96;
          v63[3] = (__int64 (**)(void))&v102;
          v63[4] = (__int64 (**)(void))v97;
          v63[5] = (__int64 (**)(void))&v98_.v98;
          v65 = *(char**)(v57 + 600);
          v66 = *(char**)(v57 + 608);
          if (v65 == v66) {
            v58 = GameData_2019448;
          }
          else {
            v67 = *(char*)(v57 + 584);
            v68 = *(char*)(v57 + 585);
            do {
              v69 = *v65 + v67;
              v104 = v65[1] + v68;
              v105 = v69;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v64)[6])(v64, &v105, &v104);
              v65 += 4;
            } while (v65 != v66);
            v58 = *v64;
          }
          ((void (*)(__int64 (***)(void)))v58[5])(v64);
        }
        v57 = *(_QWORD*)(v57 + 432);
      } while (v57 != 0);
      a1 = v103;
    }
  }
  LOBYTE(v105) = 10;
  v70 = game_Unit_GetParam(a1);
  v71 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v72 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v73 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v74 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v96 = v72;
  v92 = v74;
  v93 = v71;
  if (v72 <= v74 && v71 <= v73) {
    v77 = v70;
    v78 = GameData_21306a0[0];
    do {
      v80 = v93;
      v95 = v93;
      do {
        LODWORD(v83) = v80 + 32 * v96;
        v84 = *(_QWORD*)(*(_QWORD*)v78 + 8LL);
        if ((unsigned int)v83 >= 0x400) {
          v83 = 0;
        }
        else {
          v83 = (unsigned int)v83;
        }
        v94 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v78 + 12880LL) + v83 + 64);
        if ((GameRoutine_747a00(v84, v80, v96, v103, 0) & 1) != 0 &&
            v94 <= v77) {
          v85 = v103;
          v86 = v95;
          v87 = v96;
          v88 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
          *v88 = GameData_20194c8;
          v88[1] = (__int64 (**)(void))&v103;
          v88[2] = (__int64 (**)(void))&v95;
          v88[3] = (__int64 (**)(void))&v96;
          v88[4] = (__int64 (**)(void))&v94;
          v88[5] = (__int64 (**)(void))&v102;
          v88[6] = (__int64 (**)(void))v97;
          v88[7] = (__int64 (**)(void))&v98_.v98;
          v88[8] = (__int64 (**)(void))&v100;
          v88[9] = (__int64 (**)(void))&v101;
          v89 = *(char**)(v85 + 600);
          v90 = *(char**)(v85 + 608);
          if (v89 == v90) {
            v81 = GameData_20194c8;
          }
          else {
            do {
              v91 = v86 + *v89;
              v104 = v87 + v89[1];
              v105 = v91;
              ((void (*)(__int64 (***)(void), unsigned int*, unsigned int*))(
                  *v88)[6])(v88, &v105, &v104);
              v89 += 4;
            } while (v89 != v90);
            v81 = *v88;
          }
          ((void (*)(__int64 (***)(void)))v81[5])(v88);
        }
        v82 = v95;
        v80 = ++v95;
      } while (v82 < (int)v73);
      v79 = v96++;
    } while (v79 < v92);
  }
  return (signed __int32)*v102 >= 0;
}

bool llvm_libcxx_21_libcxx_include___functional_127a1a0(__int64 a1, _DWORD* a2)
{
  __int64* v4;
  _BOOL8 result;
  __int64 v6;
  _DWORD* v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  bool v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = GameData_212c880[0];
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) =
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  result = AIThink_1279680(*(__int64**)(a1 + 8), *(unsigned int**)(a1 + 16));
  if (result) {
    if (*(_QWORD*)(v6 = *(_QWORD*)(a1 + 32)) == 0 ||
        (v7 = *(_DWORD**)(a1 + 16), v8 = *(_DWORD*)(v6 + 16), v9 = v7[2],
         v8 < v9) ||
        (v10 = *(_DWORD*)(v6 + 20)) < 0 ||
        ((v11 = v7[3] | (v7[4] << 16), v8 <= v9)
             ? (v12 = (v10 | (*(_DWORD*)(v6 + 24) << 16)) <= v11)
             : (v12 = true),
         !v12)) {
      *(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF));
      v13 = *(__int64**)(a1 + 16);
      v14 = *(_QWORD*)(a1 + 32);
      v15 = *v13;
      v16 = v13[1];
      *(_DWORD*)(v14 + 24) = *((_DWORD*)v13 + 4);
      *(_QWORD*)(v14 + 8) = v15;
      *(_QWORD*)(v14 + 16) = v16;
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___functional_129f1d0(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v5;
  _DWORD* v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;

  v2 = *(_QWORD*)(a1 + 8);
  if ((GameRoutine_128e990(*(_QWORD*)(v2 + 8), a2) & 1) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) = a2;
    *(_DWORD*)(*(_QWORD*)(a1 + 16) + 20LL) = 1;
    if (game_128f6c0(*(__int64**)(a1 + 16), *(int**)(a1 + 24))) {
      v6 = *(_DWORD**)(a1 + 24);
      v5 = *(_QWORD*)(a1 + 32);
      v7 = v6[2];
      if (*(_QWORD*)(v5 + 8) == 0) {
        goto LABEL_6;
      }
      v8 = *(_QWORD*)(a1 + 16);
      v9 = *(_DWORD*)(v8 + 16);
      if ((v9 & 0x81) != 0) {
        if (*(_DWORD*)v5 >= v7) {
          return;
        }
        goto LABEL_6;
      }
      if ((v9 & 0x800) != 0) {
        v13 = *(_DWORD*)(v8 + 28);
        if ((v13 & 0x80000000) == 0) {
          if (*(_DWORD*)v5 == v7) {
            if (((*(unsigned __int8*)(*(_QWORD*)(v2 + 8) + 1980LL) >> v13) &
                 1) == 0) {
              return;
            }
          }
          else if (*(_DWORD*)v5 >= v7) {
            return;
          }
          goto LABEL_6;
        }
      }
      if (*(_DWORD*)v5 < v7 || (v14 = *(_DWORD*)(v5 + 28)) < 0 ||
          *(_DWORD*)v5 <= v7 &&
              (v14 | (*(_DWORD*)(v5 + 32) << 16)) > (v6[3] | (v6[4] << 16))) {
      LABEL_6:
        *(_DWORD*)v5 = v7;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) =
            *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*a2 & 0xFFF));
        v12 = a1 + 24;
        v10 = *(_QWORD*)(a1 + 24);
        v11 = *(_QWORD*)(v12 + 8);
        *(_DWORD*)(v11 + 16) = *(_DWORD*)v10;
        *(_DWORD*)(v11 + 20) = *(_DWORD*)(v10 + 4);
        if (v11 + 16 != v10) {
          *(_DWORD*)(v11 + 24) = *(_DWORD*)(v10 + 8);
          *(_QWORD*)(v11 + 40) = *(_QWORD*)(v10 + 24);
          *(_DWORD*)(v11 + 28) = *(_DWORD*)(v10 + 12);
          *(_DWORD*)(v11 + 32) = *(_DWORD*)(v10 + 16);
          GameHr_1226120(v10 + 32, v11 + 48);
          *(_DWORD*)(v11 + 36) = *(_DWORD*)(v10 + 20);
        }
      }
    }
  }
}

__int64* llvm_libcxx_21_libcxx_include___functional_138f6a0(__int64* result)
{
  float32x4_t* v1;
  unsigned __int64 v2;
  _BYTE* v3;
  const char* v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float v20;
  float32x2_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  __int128 v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  int16x4_t v59;
  int v60;
  unsigned int v61;
  __int128 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  unsigned __int64 v76;
  __int64 v77;
  bool v78;
  bool v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    __int128 v92;
    char* v93;
  } v92_;
  float32x4_t v94;

  v1 = (float32x4_t*)result[1];
  v2 = LANES128(v1[6]).n128_u64[1];
  if (v2 != 0 && (v3 = *(_BYTE**)(v2 + 96)) != nullptr && *v3 != 0 &&
      (v4 = *(const char**)(v2 + 104)) != nullptr && *v4 != 0) {
    v5 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                 8LL) +
                      64LL);
    v6 = strlen(v4);
    result = X8CALL_X0(__int64*,
                       wld_map_c21740((void*)(&v90_.v90), v5, (__int64)v4, v6));
    if (v90_.v90 != 0) {
      v7 = *(__int64**)(v90_.v90 + 88);
      v8 = *(__int64**)(v90_.v90 + 96);
      if (v7 != v8) {
        v9 = (__int64*)fw_memory_g_heap_manager_ptr;
        v88 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 +
                        4);
        v89 = *((float*)GameData_212c190 + 1);
        v10 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
        v11 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                         8);
        v86 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                        4);
        v87 = *((float*)GameData_212c188 + 1);
        v84 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
        v85 = -*(float*)GameData_212c190;
        v82 = -*(float*)GameData_212c188;
        v83 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
        while (1) {
          v14 = *v7;
          if (*v7 != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
              v81 = *((_QWORD*)GameData_212c558 + 1);
              *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
              *((_QWORD*)&GameData_21a6180 + 1) = v81;
              __cxa_guard_release((__int64)&GameData_21a6190);
            }
            v15 = (float)(PSEUDO_UNFUSED((float)(LANES128(v1[8]).n128_f32[0] *
                                                 0x1.1df46a0000000p-6f) *
                                         0x1.0000000000000p-1f)) +
                  (float)(roundf((float)((float)(LANES128(v1[8]).n128_f32[0] *
                                                 0x1.1df46a0000000p-6f) *
                                         0x1.0000000000000p-1f) *
                                 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
            if (v15 < -0x1.921fb60000000p+0f) {
              v16 = -0x1.0000000000000p+0f;
            }
            else {
              v16 = 0x1.0000000000000p+0f;
            }
            v17 = -0x1.921fb60000000p+1f - v15;
            if (v15 >= -0x1.921fb60000000p+0f) {
              v17 = v15;
            }
            if (v15 > 0x1.921fb60000000p+0f) {
              v18 = 0x1.921fb60000000p+1f - v15;
            }
            else {
              v18 = v17;
            }
            v19 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180),
                            COERCE_AS(float32x4_t, GameData_21a6180));
            if (v15 > 0x1.921fb60000000p+0f) {
              v20 = -0x1.0000000000000p+0f;
            }
            else {
              v20 = v16;
            }
            LANES64(v21).n64_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v22).n128_u64[0] =
                LANES64_OF(vpadd_f32(v21, v21)).n64_u64[0];
            LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
            v23 = vrsqrteq_f32(v22);
            v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
            v25 = vbicq_s8(
                vmulq_f32(
                    COERCE_AS(float32x4_t, GameData_21a6180),
                    vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v22, v24)))),
                vceqzq_f32(v22));
            v26 = *(float32x4_t*)(v14 + 304);
            v27 = v1[7];
            LANES128(v22).n128_f32[0] =
                v20 *
                (float)((float)((float)(v11 +
                                        (float)((float)(v86 +
                                                        (float)((float)(v10 +
                                                                        (float)((float)(v87 +
                                                                                        (float)(v82 *
                                                                                                (float)(v18 *
                                                                                                        v18))) *
                                                                                (float)(v18 *
                                                                                        v18))) *
                                                                (float)(v18 *
                                                                        v18))) *
                                                (float)(v18 * v18))) *
                                (float)(v18 * v18)) +
                        0x1.0000000000000p+0f);
            v28 = vmulq_n_f32(
                v25,
                v18 *
                    (float)((float)((float)(v83 +
                                            (float)((float)(v88 +
                                                            (float)((float)(v84 +
                                                                            (float)((float)(v89 +
                                                                                            (float)(v85 *
                                                                                                    (float)(v18 *
                                                                                                            v18))) *
                                                                                    (float)(v18 *
                                                                                            v18))) *
                                                                    (float)(v18 *
                                                                            v18))) *
                                                    (float)(v18 * v18))) *
                                    (float)(v18 * v18)) +
                            0x1.0000000000000p+0f));
            v29 = vsubq_f32(v26, v27);
            v33 = v28;
            LANES128(v30).n128_u64[0] = LANES128(v28).n128_u64[0];
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v32).n128_u64[0] = LANES128(v29).n128_u64[0];
            LANES128(v33).n128_u32[3] = LANES128(v22).n128_u32[0];
            LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
            v34 = vmulq_f32(v33, COERCE_AS(float32x4_t, GameData_1a829d0));
            v35 = vmulq_f32(v31, v34);
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v36).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v32).n128_u64[1] = LANES128(v31).n128_u64[0];
            *(int8x8_t*)&LANES128(v36).n128_i8[8] =
                vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v37).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v38 = vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v32, v36));
            LANES128(v36).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v37).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]), 1);
            LANES128(v31).n128_u64[1] = LANES128(v36).n128_u64[0];
            LANES128(v41).n128_u64[1] = LANES128(v29).n128_u64[0];
            LANES128(v29).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v29).n128_i8[8] =
                vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v39 = vmlsq_f32(vmlaq_f32(v38,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v41, v37)),
                            v29, v31);
            v40 = COERCE_AS(int8x16_t, __PAIR128__(LANES128(v33).n128_u64[1],
                                                   LANES128(v28).n128_u64[0]));
            LANES128(v31).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v45).n128_i8[8] =
                vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v41).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v34).n128_u64[0] = LANES128(v41).n128_u64[0];
            LANES128(v43).n128_u64[1] = LANES128(v41).n128_u64[0];
            v42 = vmulq_f32(v43, v39);
            LANES128(v43).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v30).n128_u64[1] = LANES128(v43).n128_u64[0];
            v44 = vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v30, v45));
            LANES128(v45).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(COERCE_AS(int8x16_t,
                                        __PAIR128__(LANES128(v33).n128_u64[1],
                                                    LANES128(v28).n128_u64[0])),
                              COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int32x2_t*)&LANES128(v32).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v39).n128_u64[0]), 1);
            LANES128(v30).n128_u64[0] = LANES128(v45).n128_u64[0];
            LANES128(v30).n128_u64[1] = LANES128(v28).n128_u64[0];
            v46 = vmlaq_f32(v44, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v30, v32));
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v32).n128_i8[8] =
                vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            LANES128(v39).n128_u64[0] = LANES128(v43).n128_u64[0];
            LANES128(v39).n128_u64[1] = LANES128(v45).n128_u64[0];
            v47 = vmlsq_f32(v46, v32, v39);
            LANES128(v47).n128_u32[3] = 0;
            v48 = vaddq_f32(v27, v47);
            v49 = vsubq_f32(v26, v48);
            v50 = vmulq_f32(v49, v49);
            LANES128(v50).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                    .n64_f32[0] != 0x0.0p+0f) {
              *(_QWORD*)(v14 + 304) = LANES128(v48).n128_u64[0];
              v51 = *(_OWORD*)(v14 + 304);
              *(_DWORD*)(v14 + 296) |= 1u;
              *((_QWORD*)&v51 + 1) = LANES128(v48).n128_u32[2];
              *(_OWORD*)(v14 + 304) = v51;
            }
            v52 = *(int8x16_t*)(v14 + 336);
            *(int8x8_t*)&LANES128(v41).n128_i8[8] = vqtbl1_s8(
                COERCE_AS(int8x16_t, __PAIR128__(LANES128(v33).n128_u64[1],
                                                 LANES128(v28).n128_u64[0])),
                COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
            LANES128(v53).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                    .n64_u64[0];
            LANES128(v54).n128_u64[0] = *(_QWORD*)(v14 + 336);
            LANES128(v43).n128_u64[1] = LANES128(v54).n128_u64[0];
            LANES128(v53).n128_u64[1] = LANES128(v53).n128_u64[0];
            v55 = vmulq_f32(v33, v53);
            LANES128(v53).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v54).n128_u64[1] = LANES128(v53).n128_u64[0];
            v56 = vmlaq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v54, v41));
            LANES128(v57).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v53).n128_u64[1] = LANES128(v57).n128_u64[0];
            *(int32x2_t*)&LANES128(v57).n128_i8[8] = vdup_lane_s32(
                COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1);
            *(int8x8_t*)&LANES128(v45).n128_i8[8] =
                vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
            v58 = vmlsq_f32(vmlaq_f32(v56,
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v43, v57)),
                            v45, v53);
            v94 = v58;
            LANES64(v59).n64_u64[0] =
                LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v52, v58)))).n64_u64[0];
            if ((LANES64(v59).n64_u8[0] & 1) != 0 ||
                (LANES64(v59).n64_u8[2] & 1) != 0 ||
                (LANES64(v59).n64_u8[4] & 1) != 0 ||
                (LANES64(v59).n64_u8[6] & 1) != 0) {
              v60 = *(_DWORD*)(v14 + 296) | 1;
              *(_QWORD*)(v14 + 336) = LANES128(v58).n128_u64[0];
              *(_QWORD*)(v14 + 344) =
                  LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0];
              *(_DWORD*)(v14 + 296) = v60;
              math_622ac0((void*)(&v92_.v92), (float32x2_t*)&v94);
              v61 = DWORD2(v92_.v92);
              *(_QWORD*)(v14 + 320) = v92_.v92;
              v62 = *(_OWORD*)(v14 + 320);
              *((_QWORD*)&v62 + 1) = v61;
              *(_OWORD*)(v14 + 320) = v62;
            }
            v14 = *v7;
          }
          v63 = strlen((const char*)(v14 + 16));
          if (v63 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          v64 = v63;
          if (v63 >= 0x17) {
            break;
          }
          v65 = (char*)&v92_.v92 + 1;
          LOBYTE(v92_.v92) = 2 * v63;
          if (v63 != 0) {
            goto LABEL_45;
          }
        LABEL_46:
          v65[v64] = 0;
          v67 = LANES128(v1[14]).n128_u64[1];
          v68 = LANES128(v1[15]).n128_u64[0];
          if (v67 == v68) {
            v78 = false;
            if ((v92_.v92 & 1) != 0) {
              goto LABEL_62;
            }
          }
          else {
            v69 = v67 + 8;
            do {
              v70 = *(_QWORD*)(v69 - 8);
              v71 = *(_BYTE*)(v70 + 24);
              v72 = *(_QWORD*)(v70 + 40);
              v73 = v70 + 25;
              if ((v71 & 1) != 0) {
                v74 = v72;
              }
              else {
                v74 = v73;
              }
              v75 = v92_.v93;
              v76 = (unsigned __int64)(unsigned __int8)v92_.v92 >> 1;
              if ((v92_.v92 & 1) != 0) {
                v76 = *((_QWORD*)&v92_.v92 + 1);
              }
              else {
                v75 = (char*)&v92_.v92 + 1;
              }
              LANES128(v94).n128_u64[0] = (unsigned __int64)v75;
              LANES128(v94).n128_u64[1] = v76;
              v77 = game_HashString(v74);
              v78 = v77 == GameHr_7a88a0((__int64*)&v94);
              v79 = v78 || v69 == v68;
              v69 += 8LL;
            } while (!v79);
            if ((v92_.v92 & 1) != 0) {
            LABEL_62:
              if (v92_.v93 != nullptr) {
                v80 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v80 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v80, (__int64)v92_.v93);
              }
            }
          }
          if (v78) {
            v13 = 0;
          }
          else {
            v13 = SceneObject_13fd320(v14);
          }
          result = (__int64*)SceneManager_138dbe0(v1, v13);
          if (++v7 == v8) {
            goto LABEL_10;
          }
        }
        if ((v63 | 7) == 0x17) {
          v66 = 26;
        }
        else {
          v66 = (v63 | 7) + 1;
        }
        v65 = (char*)fw_memory_HeapManager_Allocate(*v9, v66, 16, 0);
        *((_QWORD*)&v92_.v92 + 1) = v64;
        v92_.v93 = v65;
        *(_QWORD*)&v92_.v92 = v66 | 1;
      LABEL_45:
        memcpy((__int64)v65, v14 + 16, v64);
        goto LABEL_46;
      }
    }
  }
  else {
    v90_.v90 = 0;
    v90_.v91 = 0;
  }
LABEL_10:
  v12 = v90_.v91;
  if (v90_.v91 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return (__int64*)std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_15adbb0(__int64 a1,
                                                           __int64 a2,
                                                           unsigned int* a3)
{
  _QWORD* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  const char* v9[2];
  struct {
    _BYTE* v10;
    __int64 v11;
  } v10_;

  v3 = *(_QWORD**)(a1 + 8);
  v9[0] = game_util_Format(*(const char**)(a1 + 16), *a3);
  v9[1] = (const char*)strlen(v9[0]);
  result = X8CALL_X0(__int64,
                     game_gameui_15ad0c0((void*)((__int64*)&v10_.v10), v3, v9));
  v5 = v10_.v11;
  if (v10_.v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v10_.v11);
    v7 = v10_.v10;
    v8 = v6;
    result = std___1___shared_weak_count___release_weak(v5);
    if (v8 != 0 && v7 != nullptr) {
      v7[1073] = 15;
      result = (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)v7 + 40LL))(v7, 0);
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

char* llvm_libcxx_21_libcxx_include___functional_1686d40(char* result, char* a2,
                                                         unsigned __int64 a3,
                                                         __int64* a4,
                                                         __int64 a5)
{

#pragma clang fp contract(off)
  char* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  char* v13;
  __int64 v14;
  char* v15;
  _QWORD* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  bool v22;
  __int64 v24;
  _QWORD* v25;
  float v26;
  __int64 v27;
  float v28;
  bool v29;
  unsigned __int64 v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  bool v43;
  __int64 v45;
  __int64 v46;

  if (a3 < 2) {
    return result;
  }
  v5 = a2;
  v6 = (__int64*)result;
  if (a3 != 2) {
    if ((__int64)a3 <= 128) {
      if (result == a2) {
        return result;
      }
      v13 = result + 8;
      if (result + 8 == a2) {
        return result;
      }
      v14 = 0;
      v15 = result;
      while (1) {
        v17 = v15;
        v19 = *(_QWORD*)v15;
        v18 = *((_QWORD*)v15 + 1);
        v15 = v13;
        v20 = *(float*)(v18 + 52);
        v21 = *(float*)(v19 + 52);
        if (vabds_f32(v20, v21) >= 0x1.0000000000000p-23f) {
          if (v20 > v21) {
            goto LABEL_39;
          }
        }
        else {
          result = (char*)strlen((const char*)(v18 + 176));
          if ((unsigned __int64)result < 6 ||
              (*(_DWORD*)(v18 + 176) == 1851088716
                   ? (v22 = *(unsigned __int16*)(v18 + 180) == 29801)
                   : (v22 = false),
               !v22)) {
            result = (char*)strlen((const char*)(v19 + 176));
            if ((unsigned __int64)result >= 6 &&
                *(_DWORD*)(v19 + 176) == 1851088716 &&
                *(_WORD*)(v19 + 180) == 29801) {
            LABEL_39:
              *((_QWORD*)v17 + 1) = v19;
              v16 = v6;
              if (v17 != (char*)v6) {
                v24 = v14;
                do {
                  v25 = (__int64*)((char*)v6 + v24);
                  v26 = *(float*)(v18 + 52);
                  v27 = *(__int64*)((char*)v6 + v24 - 8);
                  v28 = *(float*)(v27 + 52);
                  if (vabds_f32(v26, v28) >= 0x1.0000000000000p-23f) {
                    if (v26 <= v28) {
                      goto LABEL_21;
                    }
                  }
                  else {
                    result = (char*)strlen((const char*)(v18 + 176));
                    if ((unsigned __int64)result >= 6 &&
                            (*(_DWORD*)(v18 + 176) == 1851088716
                                 ? (v29 = *(unsigned __int16*)(v18 + 180) ==
                                          29801)
                                 : (v29 = false),
                             v29) ||
                        (unsigned __int64)(result = (char*)strlen(
                                               (const char*)(v27 + 176))) < 6) {
                    LABEL_21:
                      v16 = v17;
                      goto LABEL_22;
                    }
                    if (*(_DWORD*)(v27 + 176) != 1851088716 ||
                        *(_WORD*)(v27 + 180) != 29801) {
                      v16 = (__int64*)((char*)v6 + v24);
                      goto LABEL_22;
                    }
                  }
                  v17 -= 8;
                  v24 -= 8;
                  *v25 = v27;
                } while (v24 != 0);
                v16 = v6;
              LABEL_22:
                v5 = a2;
              }
              *v16 = v18;
            }
          }
        }
        v13 = v15 + 8;
        v14 += 8;
        if (v15 + 8 == v5) {
          return result;
        }
      }
    }
    v31 = a3 >> 1;
    v32 = a4;
    v33 = a3 - (a3 >> 1);
    if ((__int64)a3 > a5) {
      llvm_libcxx_21_libcxx_include___functional_1686d40(
          (unsigned __int64)result, &result[8 * v31], a3 >> 1, a4, a5);
      llvm_libcxx_21_libcxx_include___functional_1686d40(
          (unsigned __int64)&v6[v31], v5, v33, v32, a5);
      return (char*)ProcGmapMap_1687580((unsigned __int64)v6, (char*)&v6[v31],
                                        v5, v31, v33, (__int64)v32, a5);
    }
    ProcGmapMap_1687160((unsigned __int64)result, (__int64)&result[8 * v31],
                        a3 >> 1, a4);
    v36 = &v32[v31];
    result = (char*)ProcGmapMap_1687160((unsigned __int64)&v6[v31], (__int64)v5,
                                        v33, v36);
    v37 = &v32[a3];
    v38 = v36;
    while (1) {
      if (v38 == v37) {
        while (v32 != v36) {
          v45 = *v32++;
          *v6++ = v45;
        }
        return result;
      }
      v39 = *v38;
      v40 = *v32;
      v41 = *(float*)(*v38 + 52);
      v42 = *(float*)(*v32 + 52);
      if (vabds_f32(v41, v42) >= 0x1.0000000000000p-23f) {
        if (v41 > v42) {
          goto LABEL_78;
        }
      }
      else {
        result = (char*)strlen((const char*)(v39 + 176));
        if ((unsigned __int64)result < 6 ||
            (*(_DWORD*)(v39 + 176) == 1851088716
                 ? (v43 = *(unsigned __int16*)(v39 + 180) == 29801)
                 : (v43 = false),
             !v43)) {
          result = (char*)strlen((const char*)(v40 + 176));
          if ((unsigned __int64)result >= 6 &&
              *(_DWORD*)(v40 + 176) == 1851088716 &&
              *(_WORD*)(v40 + 180) == 29801) {
          LABEL_78:
            *v6 = v39;
            ++v38;
            goto LABEL_62;
          }
        }
      }
      ++v32;
      *v6 = v40;
    LABEL_62:
      ++v6;
      if (v32 == v36) {
        while (v38 != v37) {
          v46 = *v38++;
          *v6++ = v46;
        }
        return result;
      }
    }
  }
  v7 = *((_QWORD*)a2 - 1);
  v8 = *(_QWORD*)result;
  v9 = *(float*)(v7 + 52);
  v10 = *(float*)(*(_QWORD*)result + 52LL);
  if (vabds_f32(v9, v10) >= 0x1.0000000000000p-23f) {
    if (v9 <= v10) {
      return result;
    }
  LABEL_57:
    *v6 = v7;
    *((_QWORD*)v5 - 1) = v8;
    return result;
  }
  result = (char*)strlen((const char*)(v7 + 176));
  if ((unsigned __int64)result < 6 ||
      (*(_DWORD*)(v7 + 176) == 1851088716
           ? (v11 = *(unsigned __int16*)(v7 + 180) == 29801)
           : (v11 = false),
       !v11)) {
    result = (char*)strlen((const char*)(v8 + 176));
    if ((unsigned __int64)result >= 6 && *(_DWORD*)(v8 + 176) == 1851088716 &&
        *(_WORD*)(v8 + 180) == 29801) {
      goto LABEL_57;
    }
  }
  return result;
}

#pragma GCC visibility pop
