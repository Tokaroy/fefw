#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* RouteMenuItem_166e340(__int64, __int64, _QWORD*, _QWORD*, _QWORD*,
                              __int64, __int64, __int64, __int64);
_QWORD* RouteMenuItem_166e450(__int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 Impl_717e30(char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameConverge_8ea350(__int64, unsigned int, __int64);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_2131a38;
extern __int64 (*CompareInfo_Destructor_ptr[])();
extern __int64 (*GameData_207c958[])();
extern __int64 (*GameData_207c9d8[])();
extern __int64 (*GameData_207ca58[])();
extern __int64 (*game_menu_CompareInfo_vtable[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_225d700;
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void BasicInfo_15e5b50(__int64, __int64*, __int64);
void GameRoutine_717660();
void Impl_717b40();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_166d2e0(unsigned __int64 a1);
__int64* game_820d50(int);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 BasicMenu_16df280(__int64, __int64, unsigned __int8, unsigned __int8,
                          char);
__int64 EquipMenuItem_UnitItem_15cc380(__int64, __int64, __int64, __int64, int);
__int64 EquipMenuItem_UnitItem_15cc5d0(__int64, __int64, __int64, __int64, int);
__int64 GameRoutine_15de9d0(__int64, char);
__int64 GameRoutine_15dea90(__int64, __int64, char);
__int64 GameRoutine_16eb960(__int64, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 UnitUtil_1212820(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_15de140(__int64, __int64, __int64, __int64, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_IsVibrationEnabled(_BYTE*);
__int64 game_ProcInst_Register(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*GameData_205a598[])();
extern __int64 (*GameData_205a618[])();
extern __int64 (*GameData_205a718[])();
extern __int64 (*GameData_205a9f8[])();
extern __int64 (*GameData_205aa78[])();
extern __int64 (*game_menu_CmdBtlInfoUnitTroopSequence_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c7c40[])();
extern __int64 (*game_menu_anonymous_SubDiscardMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubExchangeMenuItem_vtable_20591b0[])();
extern __int64 (*game_menu_anonymous_SubReceiveMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a10[5];
extern __int64 GameData_2058740;
extern __int64 GameData_212c608[2];
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_game_setting_ptr;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_688200();
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_menu_15cf5a0(__int64 a1);
__int64 game_menu_178e950(__int64 a1, __int64 a2);

__int64 game_menu_15cf5a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int16* v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  int* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  _BOOL4 v39;
  _BOOL4 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  _WORD* v55;
  __int64 v56;
  int v57;
  int v58;
  bool v59;
  int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  bool v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  _WORD* v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  unsigned __int16* v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  _QWORD* v92;
  _QWORD* v93;
  __int64 v94;
  int v95;
  __int64 v96;
  char* v97;
  char* v98;
  __int64 v99;
  int v100;
  signed int v101;
  __int64* v102;
  unsigned __int64 v103;
  signed __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  int v107;
  unsigned __int64 v108;
  int v109;
  __int64 v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  __int64 v116;
  __int64 v117;
  _WORD* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int16* v133;
  __int64 v134;
  __int64 v135;
  int v136;
  char v137;
  __int64* v138;
  __int64 v139;
  bool v140;
  __int64 v141;
  _QWORD v142[2];
  struct {
    _QWORD v143[4];
    _QWORD* v144;
  } v143_;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v4 = (unsigned __int16*)(v1 + 8 * v2 + 828);
    if ((*(_BYTE*)(v1 + 8 * v2 + 831) & 0x10) != 0) {
      return 1;
    }
  }
  else {
    v4 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v2 + 4);
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * (int)v2 + 7) &
         0x10) != 0) {
      return 1;
    }
  }
  v5 = *v4;
  result = 1;
  v7 = GameData_212c878[0];
  v8 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v9 = *(_QWORD*)(v8 + 8 * v5);
  if ((*(_BYTE*)(v9 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) == 0) {
    return result;
  }
  if (*(_DWORD*)(a1 + 116) == 2) {
    if (v1 != 0) {
      v10 = *(
          unsigned __int8*)(*(_QWORD*)(v8 +
                                       8LL * *(unsigned __int16*)(v1 + 8 * v2 +
                                                                  828)) +
                            72LL);
      if (v10 < 8) {
        goto LABEL_14;
      }
    }
    else {
      v11 = *(
          _QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL);
      v10 = *(
          unsigned __int8*)(*(_QWORD*)(v8 +
                                       8LL *
                                           *(unsigned __int16*)(v11 +
                                                                12LL * (int)v2 +
                                                                4)) +
                            72LL);
      if (v10 < 8) {
        goto LABEL_18;
      }
    }
    if (v10 != 13) {
      return 1;
    }
  }
  if (v1 != 0) {
  LABEL_14:
    v12 = (unsigned __int64*)(v1 + 8 * v2 + 828);
    goto LABEL_19;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL);
LABEL_18:
  v12 = (unsigned __int64*)(v11 + 12LL * (int)v2 + 4);
LABEL_19:
  v13 = *(_QWORD*)(a1 + 96);
  v14 = *(int**)(v13 + 304);
  v15 = v14[160] - 1LL;
  v16 = *(_DWORD*)(v13 + 356);
  if ((v16 & 1) == 0) {
    v17 = *(_QWORD*)(a1 + 8);
    v143_.v143[0] = a1;
    LODWORD(v143_.v143[1]) = 0;
    v18 = *(_QWORD*)(v17 + 152);
    *(_QWORD*)((char*)&v143_.v143[1] + 4) = 0;
    if (v18 != 0) {
      v19 = v18;
    }
    else {
      v19 = v17;
    }
    v20 = (_QWORD*)GameRoutine_16eb960(v19, v143_.v143);
    if (*(_DWORD*)(a1 + 116) != 1) {
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v22 = *(_QWORD*)(a1 + 104);
      v23 = *(_QWORD*)(a1 + 88);
      v24 = *(_DWORD*)(a1 + 40);
      v25 = v21;
      v143_.v143[0] = GameData_205a618;
      v143_.v143[1] = a1;
      v143_.v144 = v143_.v143;
      EquipMenuItem_UnitItem_15cc380(v21, (__int64)v143_.v143, v22, v23, v24);
      BasicMenuCursor_16e0c00(v20, v25);
      if (v143_.v144 == v143_.v143) {
        v26 = 32;
      }
      else {
        if (v143_.v144 == nullptr) {
          goto LABEL_45;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v143_.v144 + v26))((__int64)v143_.v144);
    }
  LABEL_45:
    v53 = (__int64*)fw_memory_g_heap_manager_ptr;
    v54 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160, 16, 0);
    v55 = *(_WORD**)(a1 + 104);
    v56 = *(_QWORD*)(a1 + 88);
    v57 = *(_DWORD*)(a1 + 40);
    *(_WORD*)(v54 + 16) = 0;
    *(_QWORD*)(v54 + 48) = 0;
    *(_QWORD*)(v54 + 56) = 0;
    *(_QWORD*)(v54 + 64) = 0;
    *(_QWORD*)(v54 + 72) = 0;
    *(_QWORD*)(v54 + 104) = a1;
    *(_WORD*)(v54 + 80) = 257;
    v143_.v143[0] = GameData_205a718;
    v143_.v143[1] = a1;
    v143_.v144 = v143_.v143;
    *(_BYTE*)(v54 + 82) = 1;
    *(_QWORD*)(v54 + 96) = GameData_205a718;
    *(_QWORD*)(v54 + 128) = v54 + 96;
    *(_QWORD*)v54 = game_menu_anonymous_SubReceiveMenuItem_vtable;
    *(_QWORD*)(v54 + 8) = 0;
    *(_QWORD*)(v54 + 144) = v55;
    *(_QWORD*)(v54 + 152) = v56;
    *(_DWORD*)(v54 + 40) = v57;
    if (v55 != nullptr) {
      v58 = v55[414] != 0;
      if (v55[418] != 0) {
        ++v58;
      }
      if (v55[422] != 0) {
        ++v58;
      }
      v59 = v55[426] == 0;
      v60 = (unsigned __int16)v55[430];
      v61 = (unsigned __int16)v55[434];
      if (!v59) {
        ++v58;
      }
      if (v60 != 0) {
        ++v58;
      }
      if (v61 != 0) {
        LODWORD(v55) = v58 + 1;
      }
      else {
        LODWORD(v55) = v58;
      }
      LOBYTE(v55) = (unsigned int)v55 < 6;
    }
    *(_BYTE*)(v54 + 81) = (_BYTE)v55;
    BasicMenuCursor_16e0c00(v20, v54);
    if (v143_.v144 == v143_.v143) {
      v62 = 32;
    }
    else {
      if (v143_.v144 == nullptr) {
      LABEL_63:
        v63 = (unsigned int)v15;
        v64 = fw_memory_HeapManager_Allocate(*v53, 160, 16, 0);
        v65 = *(_QWORD*)(a1 + 104);
        v66 = *(_QWORD*)(a1 + 88);
        v67 = *(_DWORD*)(a1 + 40);
        v68 = true;
        v69 = v64;
        *(_WORD*)(v64 + 16) = 0;
        *(_QWORD*)(v64 + 48) = 0;
        *(_QWORD*)(v64 + 56) = 0;
        *(_QWORD*)(v64 + 64) = 0;
        *(_QWORD*)(v64 + 72) = 0;
        v143_.v143[0] = GameData_205a9f8;
        v143_.v143[1] = a1;
        *(_WORD*)(v64 + 80) = 257;
        *(_QWORD*)(v64 + 96) = GameData_205a9f8;
        *(_BYTE*)(v64 + 82) = 1;
        *(_QWORD*)(v64 + 104) = a1;
        *(_QWORD*)(v64 + 112) = v63;
        v143_.v143[2] = v63;
        v143_.v144 = v143_.v143;
        *(_QWORD*)(v64 + 128) = v64 + 96;
        *(_QWORD*)v64 = game_menu_anonymous_SubExchangeMenuItem_vtable_20591b0;
        *(_QWORD*)(v64 + 8) = 0;
        *(_QWORD*)(v64 + 144) = v65;
        *(_QWORD*)(v64 + 152) = v66;
        *(_DWORD*)(v64 + 40) = v67;
        v70 = game_820d50(14);
        if (game_GameModeData_instance_ != 0) {
          v71 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v70);
          if (v71 != 0) {
            v68 = *(_DWORD*)(v71 + 32) == 0;
          }
        }
        v72 = v143_.v144;
        *(_BYTE*)(v69 + 81) = v68;
        if (v72 == v143_.v143) {
          v73 = 32;
        }
        else {
          if (v72 == nullptr) {
          LABEL_71:
            v74 = *(_WORD**)(a1 + 104);
            if (v74 == nullptr) {
              goto LABEL_152;
            }
            v75 = v74[414] != 0;
            if (v74[418] != 0) {
              ++v75;
            }
            if (v74[422] != 0) {
              ++v75;
            }
            v59 = v74[426] == 0;
            v76 = (unsigned __int16)v74[430];
            v77 = (unsigned __int16)v74[434];
            if (!v59) {
              ++v75;
            }
            if (v76 != 0) {
              ++v75;
            }
            if ((v75 | (v77 != 0)) == 0) {
              goto LABEL_152;
            }
            v78 = *(_QWORD*)(a1 + 88);
            v79 = *(int*)(a1 + 40);
            if (v78 != 0) {
              v80 = (unsigned __int16*)(v78 + 8 * v79 + 828);
              if ((*(_BYTE*)(v78 + 8 * v79 + 831) & 0x10) != 0) {
                goto LABEL_152;
              }
            }
            else {
              v80 =
                  (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                game_TransporterConst_List_instance__ptr
                                                                    [0] +
                                                            8LL) +
                                                 8LL) +
                                      12LL * (int)v79 + 4);
              if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                       game_TransporterConst_List_instance__ptr
                                                           [0] +
                                                   8LL) +
                                        8LL) +
                             12LL * (int)v79 + 7) &
                   0x10) != 0) {
                goto LABEL_152;
              }
            }
            v81 = *v80;
            v82 = 0;
            v83 = *(_QWORD*)(*v7 + 64);
            v84 = *(_QWORD*)(v83 + 8 * v81);
            if ((*(_BYTE*)(v84 + 336) & 4) != 0 ||
                ((1LL << *(_BYTE*)(v84 + 72)) & 0xE01F) == 0) {
            LABEL_153:
              *(_BYTE*)(v69 + 82) = v82;
              BasicMenuCursor_16e0c00(v20, v69);
              if (*(_DWORD*)(a1 + 116) == 1) {
                goto LABEL_160;
              }
              v123 = fw_memory_HeapManager_Allocate(*v53, 160, 16, 0);
              v124 = *(_QWORD*)(a1 + 104);
              v125 = *(_QWORD*)(a1 + 88);
              v126 = *(_DWORD*)(a1 + 40);
              v127 = v123;
              v143_.v143[0] = GameData_205a618;
              v143_.v143[1] = a1;
              v143_.v144 = v143_.v143;
              EquipMenuItem_UnitItem_15cc5d0(v123, (__int64)v143_.v143, v124,
                                             v125, v126);
              BasicMenuCursor_16e0c00(v20, v127);
              if (v143_.v144 == v143_.v143) {
                v128 = 32;
              }
              else {
                if (v143_.v144 == nullptr) {
                  goto LABEL_159;
                }
                v128 = 40;
              }
              (*(void (**)(__int64))(*v143_.v144 + v128))((__int64)v143_.v144);
            LABEL_159:
              if (*(_DWORD*)(a1 + 116) == 2) {
                return 10;
              }
            LABEL_160:
              v129 = fw_memory_HeapManager_Allocate(*v53, 160, 16, 0);
              v130 = *(_QWORD*)(a1 + 88);
              v131 = v129;
              *(_WORD*)(v129 + 16) = 0;
              *(_QWORD*)(v129 + 48) = 0;
              *(_QWORD*)(v129 + 56) = 0;
              *(_QWORD*)(v129 + 64) = 0;
              *(_QWORD*)(v129 + 72) = 0;
              *(_QWORD*)(v129 + 104) = a1;
              v143_.v144 = v143_.v143;
              v132 = *(int*)(a1 + 40);
              *(_WORD*)(v129 + 80) = 257;
              v143_.v143[0] = GameData_205aa78;
              v143_.v143[1] = a1;
              *(_BYTE*)(v129 + 82) = 1;
              *(_QWORD*)(v129 + 96) = GameData_205aa78;
              *(_QWORD*)(v129 + 128) = v129 + 96;
              *(_QWORD*)v129 = game_menu_anonymous_SubDiscardMenuItem_vtable;
              *(_QWORD*)(v129 + 8) = 0;
              *(_QWORD*)(v129 + 144) = v130;
              *(_QWORD*)(v129 + 152) = v130;
              *(_DWORD*)(v129 + 40) = v132;
              if (v130 != 0) {
                v133 = (unsigned __int16*)(v130 + 8 * v132 + 828);
                v134 = *v133;
                if (*v133 == 0) {
                  goto LABEL_170;
                }
              }
              else {
                v133 =
                    (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                  game_TransporterConst_List_instance__ptr
                                                                      [0] +
                                                              8LL) +
                                                   8LL) +
                                        12LL * (int)v132 + 4);
                v134 = *v133;
                if (*v133 == 0) {
                  goto LABEL_170;
                }
              }
              if ((*((_BYTE*)v133 + 3) & 0x10) == 0) {
                v135 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v134);
                if (v135 == 0 ||
                    (unsigned int)*(unsigned __int8*)(v135 + 72) - 5 >= 2 &&
                        ((v136 = *(_DWORD*)(v135 + 336)) & 1) == 0 &&
                        ((v136 & 2) == 0 || (v142[0] = *(_QWORD*)v133,
                                             (unsigned int)UnitUtil_1212820(
                                                 (__int64)v142) != 1))) {
                  v137 = 1;
                LABEL_171:
                  *(_BYTE*)(v131 + 82) = v137;
                  v138 = game_820d50(15);
                  v140 = game_GameModeData_instance_ == 0 ||
                         (v139 = game_GameVariableTable_Find(
                              *(_QWORD**)(game_GameModeData_instance_ + 48),
                              (unsigned __int64*)v138)) == 0 ||
                         *(_DWORD*)(v139 + 32) == 0;
                  *(_BYTE*)(v131 + 81) = v140;
                  BasicMenuCursor_16e0c00(v20, v131);
                  if (v143_.v144 == v143_.v143) {
                    v141 = 32;
                    goto LABEL_179;
                  }
                  if (v143_.v144 != nullptr) {
                    v141 = 40;
                  LABEL_179:
                    (*(void (**)(__int64))(*v143_.v144 + v141))(
                        (__int64)v143_.v144);
                  }
                  return 10;
                }
              }
            LABEL_170:
              v137 = 0;
              goto LABEL_171;
            }
            if (*(_DWORD*)(a1 + 116) != 2 ||
                (v78 == 0
                     ? (v85 = *(
                            unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                         game_TransporterConst_List_instance__ptr
                                                                             [0] +
                                                                     8LL) +
                                                          8LL) +
                                               12LL * (int)v79 + 4))
                     : (v85 = *(unsigned __int16*)(v78 + 8 * v79 + 828)),
                 (unsigned int)(v122 = *(unsigned __int8*)(*(_QWORD*)(v83 +
                                                                      8 * v85) +
                                                           72LL)) < 8 ||
                     v122 == 13)) {
              v82 = 1;
              goto LABEL_153;
            }
          LABEL_152:
            v82 = 0;
            goto LABEL_153;
          }
          v73 = 40;
        }
        (*(void (**)(__int64))(*v72 + v73))((__int64)v72);
        goto LABEL_71;
      }
      v62 = 40;
    }
    (*(void (**)(__int64))(*v143_.v144 + v62))((__int64)v143_.v144);
    goto LABEL_63;
  }
  v27 = *v12;
  v28 = *(_QWORD*)(v13 + 304);
  *(_DWORD*)(v13 + 356) = v16 & 0xFFFFFFFE;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 240LL))(v28, 1);
  (*(void (**)(int*, __int64))(*(_QWORD*)v14 + 248LL))(v14, 1);
  if (*(_QWORD*)(a1 + 88) != 0) {
    *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL) |= 4u;
    v29 = *(_QWORD*)(a1 + 8);
    v30 = *(_QWORD*)(a1 + 104);
    v31 = *(_QWORD*)(a1 + 88);
    v32 = *(_DWORD*)(a1 + 40);
    if (*(_QWORD*)(v29 + 152) != 0) {
      v33 = *(_QWORD*)(v29 + 152);
    }
    else {
      v33 = *(_QWORD*)(a1 + 8);
    }
    v34 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         392, 16, 0);
    v35 = GameData_212c608[0];
    *(_QWORD*)(v34 + 96) = 0;
    *(_QWORD*)(v34 + 104) = 0;
    *(_QWORD*)(v34 + 112) = 0;
    *(_QWORD*)(v34 + 120) = 0;
    *(_QWORD*)(v34 + 128) = 0;
    *(_WORD*)(v34 + 136) = 0;
    *(_QWORD*)(v34 + 16) = 0;
    *(_QWORD*)(v34 + 24) = "NULL";
    *(_QWORD*)(v34 + 138) = 0;
    *(_QWORD*)(v34 + 144) = 0;
    *(_QWORD*)(v34 + 32) = 0;
    *(_QWORD*)(v34 + 40) = 0;
    *(_QWORD*)(v34 + 48) = 0;
    *(_QWORD*)(v34 + 56) = 0;
    *(_QWORD*)(v34 + 64) = 0;
    *(_QWORD*)(v34 + 72) = 0;
    *(_QWORD*)(v34 + 80) = 0;
    *(_QWORD*)(v34 + 88) = 0;
    *(_QWORD*)v34 = v35 + 16;
    *(_QWORD*)(v34 + 8) = 0;
    game_ProcInst_Register(v34);
    *(_QWORD*)(v34 + 232) = 0;
    *(_QWORD*)(v34 + 224) = v34 + 232;
    v36 = GameData_2130240[0];
    *(_BYTE*)(v34 + 168) = 0;
    *(_BYTE*)(v34 + 172) = 0;
    *(_QWORD*)(v34 + 192) = 0;
    *(_QWORD*)(v34 + 200) = 0;
    *(_QWORD*)(v34 + 208) = 0;
    *(_QWORD*)(v34 + 216) = 0;
    *(_QWORD*)(v34 + 240) = 0;
    *(_QWORD*)(v34 + 248) = 0;
    *(_QWORD*)(v34 + 256) = 0;
    *(_QWORD*)(v34 + 264) = 0;
    *(_QWORD*)(v34 + 272) = 0;
    *(_QWORD*)(v34 + 336) = 0;
    *(_QWORD*)(v34 + 344) = 0;
    *(_QWORD*)(v34 + 320) = 0;
    *(_QWORD*)(v34 + 328) = 0;
    *(_QWORD*)(v34 + 304) = 0;
    *(_QWORD*)(v34 + 312) = 0;
    *(_QWORD*)(v34 + 288) = 0;
    *(_QWORD*)(v34 + 296) = 0;
    *(_QWORD*)(v34 + 352) = 0;
    *(_QWORD*)(v34 + 360) = v30;
    *(_QWORD*)(v34 + 368) = v31;
    *(_QWORD*)(v34 + 152) = 0;
    *(_QWORD*)(v34 + 160) = v36 + 2;
    *(_DWORD*)(v34 + 280) = 1065353216;
    v37 = GameData_2131a10[0];
    *(_DWORD*)(v34 + 380) = v15;
    *(_DWORD*)(v34 + 384) = v32;
    *(_QWORD*)(v34 + 176) = v37 + 55;
    *(_QWORD*)(v34 + 184) = 0;
    *(_QWORD*)v34 = v37 + 2;
    *(_DWORD*)(v34 + 376) = 2;
    ProcInst_657850(v34, (__int64)GameData_21319e0, "ExchangeMenu", 1, v33);
    return 9;
  }
  snd_Fade_Fade_10c830((__int64)v143_.v143, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                 (__int64)v143_.v143, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v143_.v143);
  v38 = *(_QWORD*)(a1 + 104);
  v39 = false;
  v40 = false;
  v41 = (unsigned __int16)*(_QWORD*)(v38 + 8 * v15 + 828);
  v42 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v41);
  if ((*(_QWORD*)(v38 + 8 * v15 + 828) & 0x1000000) != 0) {
    v43 = *(unsigned __int8*)(v42 + 72);
    v39 = v43 < 8;
    v40 = v43 == 13;
  }
  v44 = *(unsigned __int8*)(v42 + 73);
  game_15de140(v38, (unsigned int)v15, *(_QWORD*)(a1 + 88),
               *(unsigned int*)(a1 + 40), 1);
  if (v41 == 0) {
    v45 = *(_QWORD*)(a1 + 96);
    v46 = v143_.v143;
    v143_.v143[0] = GameData_205a598;
    v143_.v144 = v143_.v143;
    v47 = *(_QWORD*)(v45 + 304);
    v48 = *(_QWORD**)(v47 + 232);
    v49 = *(_QWORD**)(v47 + 240);
    if (v48 == v49) {
      v52 = 0;
    }
    else {
      v50 = GameData_212e008[0];
      while (1) {
        if (*v48 != 0) {
          v51 = __dynamic_cast(*v48, v50, &GameData_2058740, 0);
          if (v51 != 0) {
            v52 = v51;
            v142[0] = v51;
            if (v143_.v144 == nullptr) {
              GameRoutine_60a310();
            }
            if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v143_.v144 + 48LL))(
                     v143_.v144, v142) &
                 1) != 0) {
              break;
            }
          }
        }
        if (++v48 == v49) {
          v52 = 0;
          break;
        }
      }
      v46 = v143_.v144;
      if (v143_.v144 != v143_.v143) {
        if (v143_.v144 != nullptr) {
          v86 = 40;
        LABEL_96:
          (*(void (**)(_QWORD*))(*v46 + v86))(v46);
        }
        if (v52 != 0) {
          v87 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 304LL);
          v88 = *(_QWORD*)(v87 + 336);
          if (v88 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v88 + 168LL))(v88);
          }
          *(_QWORD*)(v87 + 336) = v52;
          BasicMenu_16dea40(v87, 1, 0, 0);
          v89 = *(_QWORD*)(v87 + 336);
          if (v89 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v89 + 160LL))(v89);
            game_IsVibrationEnabled(
                (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
            v90 = *(_QWORD*)(v87 + 336);
            v91 = 4;
            if (v90 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v90 + 120LL))(v90) &
                   1) != 0) {
                v91 = 4;
              }
              else {
                v91 = 0;
              }
            }
          }
          else {
            v91 = 4;
          }
          *(_DWORD*)(v87 + 356) = *(_DWORD*)(v87 + 356) & 0xFFFFFFFB | v91;
        }
        goto LABEL_107;
      }
    }
    v86 = 32;
    goto LABEL_96;
  }
LABEL_107:
  if (v39) {
    GameRoutine_15de9d0(*(_QWORD*)(a1 + 104), 1);
  }
  else if (v40) {
    GameRoutine_15dea90(*(_QWORD*)(a1 + 104), v44, 1);
  }
  MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 0, 0);
  v92 = *(_QWORD**)(a1 + 96);
  v93 = (_QWORD*)v92[38];
  if (v93 != nullptr) {
    v94 = v93[42];
    v95 = (v27 >> 24) & 0xFFFFFFF8 | 1;
    if (v94 == 0 ||
        (v96 = __dynamic_cast(v94, GameData_212e008[0], &GameData_2058740,
                              0)) == 0 ||
        ((unsigned int)(v95 << 24) | v27 & 0xFFFFFFFF00FFFFFFLL) !=
            *(_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v96 + 560LL))(v96)) {
      v97 = (char*)v93[29];
      v98 = (char*)v93[30];
      if (v97 != v98) {
        v99 = (unsigned int)(v95 << 24);
        v100 = 0;
        v101 = 0;
        v102 = GameData_212e008[0];
        v103 = v99 | v27 & 0xFFFFFFFF00FFFFFFLL;
        do {
          v104 = v98 - v97;
          if (v101 >=
              (int)(((unsigned __int64)(v104 + 0x7FFFFFFF8LL) >> 3) + 1)) {
            break;
          }
          v105 = v104 - 8;
          v106 = ((unsigned __int64)(v104 - 8) >> 3) + 1;
          if (v105 >= 0x18) {
            v110 = v106 & 0x3FFFFFFFFFFFFFFCLL;
            v111 = 0;
            while (v101 != v111) {
              v112 = v111;
              v113 = v111 + 1;
              if (v101 == v113) {
                v97 += 8;
                break;
              }
              v114 = v113 + 1;
              if (v101 == v114) {
                v97 += 16;
                break;
              }
              v115 = v114 + 1;
              if (v101 == v115) {
                v97 += 24;
                break;
              }
              v97 += 32;
              v110 -= 4;
              v111 = v115 + 1;
              if (v110 == 0) {
                v107 = v112 + 4;
                v108 = v106 & 3;
                if (v108 != 0) {
                  goto LABEL_121;
                }
                goto LABEL_117;
              }
            }
          }
          else {
            v107 = 0;
            v108 = v106 & 3;
            if (v108 == 0) {
              goto LABEL_117;
            }
          LABEL_121:
            v109 = v107 + v100;
            while (v109 != 0) {
              v97 += 8;
              ++v109;
              if (--v108 == 0) {
                goto LABEL_117;
              }
            }
          }
          if (*(_QWORD*)v97 != 0) {
            v116 = __dynamic_cast(*(_QWORD*)v97, v102, &GameData_2058740, 0);
            if (v116 != 0) {
              v117 = v116;
              v118 = (_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v116 + 560LL))(
                  v116);
              if (*v118 != 0 && v103 == *(_QWORD*)v118) {
                BasicMenu_16df280((__int64)v93, v117, 0, 0, 0);
                break;
              }
            }
          }
        LABEL_117:
          v97 = (char*)v93[29];
          v98 = (char*)v93[30];
          ++v101;
          --v100;
        } while (v97 != v98);
      }
    }
    v92 = *(_QWORD**)(a1 + 96);
    v119 = v92[38];
    if (v119 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v119 + 1080LL))(v119);
    }
  }
  v120 = v92[39];
  if (v120 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v120 + 1080LL))(v120);
  }
  v121 = v92[40];
  if (v121 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v121 + 1080LL))(v121);
  }
  return 13;
}

__int64 game_menu_166d2e0(unsigned __int64 a1)
{
  __int64 v1;
  __int64 v3;
  char* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  char** v33;
  char* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  char* v39;
  __int64* v40;
  char** v41;
  char* v42;
  char* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  void* v58;
  char* v59;
  char* v60;
  char* v61;
  __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  __int64 v67;
  char v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  char* v78;
  char* v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  struct {
    _QWORD v92[2];
    char* v93;
    char gap40_[8];
    _QWORD* v94;
  } v92_;
  struct {
    _QWORD v95[4];
    _QWORD* v96;
  } v95_;
  struct {
    __int64 (**v97)();
    unsigned __int64 v98;
    char* v99;
    char gap136_[8];
    __int64 (***v100)();
  } v97_;
  char* v101;
  char* v102;
  char* v103;
  char* v104;
  struct {
    _QWORD v105[2];
    char* v106;
  } v105_;
  struct {
    __int64 (**v107)();
    unsigned __int64 v108;
    unsigned __int64 v109;
    unsigned __int64 v110;
    __int64* v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
  } v107_;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return 1;
  }
  GameRoutine_717660();
  Impl_717e30(*(_BYTE*)(a1 + 96));
  if (!GameConverge_8ea350(*(_QWORD*)(v1 + 176), *(unsigned __int8*)(a1 + 96),
                           *(_QWORD*)(*(_QWORD*)(a1 + 88) + 392LL))) {
    v6 = *(_QWORD*)(a1 + 8);
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)(v6 + 152) != 0) {
      v8 = *(_QWORD*)(v6 + 152);
    }
    else {
      v8 = *(_QWORD*)(a1 + 8);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        248, 16, 0);
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_QWORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 152) = 0;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    v107_.v107 = nullptr;
    v107_.v108 = 0;
    BasicInfo_15e5b50(v9, (__int64*)&v107_.v107, 0);
    v10 = v107_.v108;
    if (v107_.v108 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v107_.v108 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if (GameData_225d6f8 == 0) {
      GameData_225d6f8 = v9;
      GameData_225d700 = 1;
    }
    *(_BYTE*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)v9 = game_menu_CompareInfo_vtable;
    *(_QWORD*)(v9 + 208) = CompareInfo_Destructor_ptr;
    if (v8 != 0) {
      v11 = *(_QWORD*)(v8 + 40);
      if (v11 != 0) {
        *(_QWORD*)(v11 + 48) = v9;
        *(_QWORD*)(v9 + 56) = *(_QWORD*)(v8 + 40);
      }
      *(_QWORD*)(v8 + 40) = v9;
      *(_QWORD*)(v9 + 24) = "CompareInfo";
      *(_QWORD*)(v9 + 32) = v8;
      *(_DWORD*)(v9 + 140) = (unsigned int)game_HashString32("CompareInfo");
      *(_QWORD*)(v9 + 64) = 0;
      *(_QWORD*)(v9 + 72) = 24;
      *(_QWORD*)(v9 + 80) = 1;
      v12 = GameData_2131a38;
      *(_QWORD*)(v9 + 8) = GameData_2131a38;
      *(_QWORD*)(v9 + 16) = v12;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
          (*(_WORD*)(v9 + 136) & 0x100) == 0) {
        *(_WORD*)(v9 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v9 + 136) & 1) == 0) {
      ProcInst_657a50(v9, 1);
    }
    v23 = *(unsigned __int8*)(a1 + 96);
    v24 = *(_QWORD*)(a1 + 88);
    *(_BYTE*)(v9 + 216) = v23;
    *(_QWORD*)(v9 + 224) = v24;
    *(_QWORD*)(v9 + 232) = v24;
    if (v23 == 10) {
      v25 = nullptr;
    }
    else {
      v25 = GameData_20660e0[v23];
    }
    v26 = game_util_Format("MCID_episode_%s", v25);
    v27 = strlen(v26);
    if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_175;
    }
    v28 = v27;
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (v27 | 7) + 1;
      }
      v29 = (const char*)fw_memory_HeapManager_Allocate(*v7, v30, 16, 0);
      v97_.v98 = v28;
      v97_.v99 = v29;
      v97_.v97 = (__int64 (**)(void))(v30 | 1);
    }
    else {
      LOBYTE(v97_.v97) = 2 * v27;
      v29 = (char*)&v97_.v97 + 1;
      if (v27 == 0) {
      LABEL_53:
        v29[v28] = 0;
        v31 = msg_MessageManager_instance__ptr[0];
        v32 = GameData_212e348;
        v33 = (const char**)msg_MessageManager_empty_text__ptr;
        if (((unsigned __int8)v97_.v97 & 1) != 0) {
          v34 = v97_.v99;
        }
        else {
          v34 = (char*)&v97_.v97 + 1;
        }
        if (v34 != nullptr && *v34 != 0) {
          v35 = *msg_MessageManager_instance__ptr[0];
          v107_.v112 = -1;
          v107_.v113 = -1;
          v107_.v114 = -1;
          v107_.v115 = -1;
          v107_.v116 = -1;
          v107_.v117 = -1;
          v107_.v118 = -1;
          v107_.v119 = -1;
          v107_.v120 = -1;
          v107_.v121 = -1;
          v107_.v122 = -1;
          v107_.v123 = -1;
          v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
          v107_.v108 = 0xFFFF0001FFFF0000LL;
          v107_.v109 = 0xFFFF0004FFFF0002LL;
          v107_.v110 = 0xFFFF0006FFFF0005LL;
          v107_.v124 = 8;
          v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
          v36 = GameRoutine_a4dbe0(v35, v34, 0);
        }
        else {
          v36 = *msg_MessageManager_empty_text__ptr;
        }
        v37 = *(_QWORD*)(a1 + 88);
        if (*(_BYTE*)(v37 + 2136) != 0) {
          v38 = (const char*)game_97b2f0(v37 + 2104);
        }
        else {
          v38 = GameHr_67ed20(*(_QWORD**)(v37 + 392));
        }
        v59 = v38;
        if (v36 != nullptr) {
          v60 = v36;
        }
        else {
          v60 = *v33;
        }
        GameRoutine_60a020(*v31 + 14704, v60);
        if (v59 != nullptr) {
          v61 = v59;
        }
        else {
          v61 = *v33;
        }
        GameRoutine_60a020(*v31 + 14728, v61);
        v62 = *v31;
        v107_.v112 = -1;
        v107_.v113 = -1;
        v107_.v114 = -1;
        v107_.v115 = -1;
        v107_.v116 = -1;
        v107_.v117 = -1;
        v107_.v118 = -1;
        v107_.v119 = -1;
        v107_.v120 = -1;
        v107_.v121 = -1;
        v107_.v122 = -1;
        v107_.v123 = -1;
        v107_.v107 = (__int64 (**)(void))(v32 + 2);
        v107_.v108 = 0xFFFF0001FFFF0000LL;
        v107_.v109 = 0xFFFF0004FFFF0002LL;
        v107_.v110 = 0xFFFF0006FFFF0005LL;
        v107_.v124 = 8;
        v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
        v63 = GameRoutine_a4dbe0(v62, "MID_RouteSelectMenu_Confirm", 0);
        v64 = strlen(v63);
        if (v64 < 0xFFFFFFFFFFFFFFF7LL) {
          v65 = v64;
          if (v64 >= 0x17) {
            if ((v64 | 7) == 0x17) {
              v67 = 26;
            }
            else {
              v67 = (v64 | 7) + 1;
            }
            v66 = (char*)fw_memory_HeapManager_Allocate(*v7, v67, 16, 0);
            v92_.v92[1] = v65;
            v92_.v93 = v66;
            v92_.v92[0] = v67 | 1;
          }
          else {
            LOBYTE(v92_.v92[0]) = 2 * v64;
            v66 = (char*)v92_.v92 + 1;
            if (v64 == 0) {
              goto LABEL_113;
            }
          }
          memmove((__int64)v66, (__int64)v63, v65);
        LABEL_113:
          v68 = (char)v97_.v97;
          v66[v65] = 0;
          if ((v68 & 1) != 0 && v97_.v99 != nullptr) {
            v69 = 128;
            if (*(_QWORD*)(*v7 + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(*v7 + v69, (__int64)v97_.v99);
          }
          v70 = *(_QWORD*)(a1 + 8);
          v95_.v96 = v95_.v95;
          if ((v92_.v92[0] & 1) != 0) {
            v71 = v92_.v93;
          }
          else {
            v71 = (char*)v92_.v92 + 1;
          }
          v105_.v105[0] = v71;
          v97_.v100 = &v97_.v97;
          v107_.v107 = GameData_207c9d8;
          v107_.v108 = a1;
          v107_.v111 = (__int64*)&v107_.v107;
          v97_.v97 = GameData_207ca58;
          v95_.v95[0] = GameData_207ca58;
          v72 = RouteMenuItem_166e450(v70, (__int64)v105_.v105,
                                      (__int64)&v107_.v107, (__int64)&v97_.v97,
                                      (__int64)v95_.v95);
          if (v95_.v96 == v95_.v95) {
            v73 = 32;
          }
          else {
            if (v95_.v96 == nullptr) {
              goto LABEL_134;
            }
            v73 = 40;
          }
          (*(void (**)(__int64))(*v95_.v96 + v73))((__int64)v95_.v96);
        LABEL_134:
          if (v97_.v100 == &v97_.v97) {
            v82 = 4;
          }
          else {
            if (v97_.v100 == nullptr) {
              goto LABEL_144;
            }
            v82 = 5;
          }
          ((__int64 (*)(__int64))(*v97_.v100)[v82])((__int64)v97_.v100);
        LABEL_144:
          if (v107_.v111 == (__int64*)&v107_.v107) {
            v84 = 32;
          }
          else {
            if (v107_.v111 == nullptr) {
            LABEL_154:
              if (v72 != nullptr) {
                v86 = *((_DWORD*)v72 + 89);
                *((_DWORD*)v72 + 93) = 0;
                *((_DWORD*)v72 + 89) = v86 | 1;
                *(_QWORD*)((char*)v72 + 364) = 0xC35C000000000000LL;
              }
              if ((v92_.v92[0] & 1) == 0) {
                goto LABEL_174;
              }
              v87 = (__int64)v92_.v93;
              if (v92_.v93 == nullptr) {
                goto LABEL_174;
              }
              v88 = *v7;
              goto LABEL_171;
            }
            v84 = 40;
          }
          (*(void (**)(__int64))(*v107_.v111 + v84))((__int64)v107_.v111);
          goto LABEL_154;
        }
      LABEL_175:
        String_60a1d0();
      }
    }
    memmove((__int64)v29, (__int64)v26, v28);
    goto LABEL_53;
  }
  v3 = *(unsigned __int8*)(a1 + 96);
  if (v3 == 10) {
    v4 = nullptr;
  }
  else {
    v4 = GameData_20660e0[v3];
  }
  v13 = game_util_Format("MCID_episode_%s", v4);
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    v97_.v98 = v15;
    v97_.v99 = v16;
    v97_.v97 = (__int64 (**)(void))(v17 | 1);
    goto LABEL_29;
  }
  LOBYTE(v97_.v97) = 2 * v14;
  v16 = (char*)&v97_.v97 + 1;
  if (v14 != 0) {
  LABEL_29:
    memmove((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  if (((unsigned __int8)v97_.v97 & 1) != 0) {
    v18 = v97_.v99;
  }
  else {
    v18 = (char*)&v97_.v97 + 1;
  }
  if (v18 != nullptr && *v18 != 0) {
    v107_.v112 = -1;
    v107_.v113 = -1;
    v107_.v114 = -1;
    v107_.v115 = -1;
    v19 = *msg_MessageManager_instance__ptr[0];
    v107_.v116 = -1;
    v107_.v117 = -1;
    v107_.v118 = -1;
    v107_.v119 = -1;
    v107_.v120 = -1;
    v107_.v121 = -1;
    v107_.v122 = -1;
    v107_.v123 = -1;
    v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
    v107_.v108 = 0xFFFF0001FFFF0000LL;
    v107_.v109 = 0xFFFF0004FFFF0002LL;
    v107_.v110 = 0xFFFF0006FFFF0005LL;
    v107_.v124 = 8;
    v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
    v20 = GameRoutine_a4dbe0(v19, v18, 0);
  }
  else {
    v20 = *msg_MessageManager_empty_text__ptr;
  }
  v21 = *(_QWORD*)(a1 + 88);
  if (*(_BYTE*)(v21 + 2136) != 0) {
    v22 = (const char*)game_97b2f0(v21 + 2104);
  }
  else {
    v22 = GameHr_67ed20(*(_QWORD**)(v21 + 392));
  }
  v39 = v22;
  v40 = msg_MessageManager_instance__ptr[0];
  v41 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v20 != nullptr) {
    v42 = v20;
  }
  else {
    v42 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v42);
  if (v39 != nullptr) {
    v43 = v39;
  }
  else {
    v43 = *v41;
  }
  GameRoutine_60a020(*v40 + 14728, v43);
  v44 = *v40;
  v107_.v112 = -1;
  v107_.v113 = -1;
  v107_.v114 = -1;
  v107_.v115 = -1;
  v107_.v116 = -1;
  v107_.v117 = -1;
  v107_.v118 = -1;
  v107_.v119 = -1;
  v107_.v120 = -1;
  v107_.v121 = -1;
  v107_.v122 = -1;
  v107_.v123 = -1;
  v107_.v107 = (__int64 (**)(void))(GameData_212e348 + 2);
  v107_.v108 = 0xFFFF0001FFFF0000LL;
  v107_.v109 = 0xFFFF0004FFFF0002LL;
  v107_.v110 = 0xFFFF0006FFFF0005LL;
  v107_.v124 = 8;
  v107_.v111 = (__int64*)0xFFFF0008FFFF0007LL;
  v45 = GameRoutine_a4dbe0(v44, "MID_RouteSelectMenu_AutoGrow_Confirm", 0);
  v46 = strlen(v45);
  if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v47 = v46;
  if (v46 >= 0x17) {
    if ((v46 | 7) == 0x17) {
      v49 = 26;
    }
    else {
      v49 = (v46 | 7) + 1;
    }
    v48 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v49, 16, 0);
    v105_.v105[1] = v47;
    v105_.v106 = v48;
    v105_.v105[0] = v49 | 1;
  }
  else {
    LOBYTE(v105_.v105[0]) = 2 * v46;
    v48 = (char*)v105_.v105 + 1;
    if (v46 == 0) {
      goto LABEL_78;
    }
  }
  memmove((__int64)v48, (__int64)v45, v47);
LABEL_78:
  v50 = (char)v97_.v97;
  v48[v47] = 0;
  if ((v50 & 1) != 0 && v97_.v99 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  (__int64)v97_.v99);
  }
  v52 = *(_QWORD*)(a1 + 8);
  v53 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(v52 + 152) != 0) {
    v54 = *(_QWORD*)(v52 + 152);
  }
  else {
    v54 = *(_QWORD*)(a1 + 8);
  }
  v55 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       248, 16, 0);
  *(_QWORD*)v55 = 0;
  *(_QWORD*)(v55 + 8) = 0;
  *(_QWORD*)(v55 + 16) = 0;
  *(_QWORD*)(v55 + 24) = 0;
  *(_QWORD*)(v55 + 32) = 0;
  *(_QWORD*)(v55 + 40) = 0;
  *(_QWORD*)(v55 + 48) = 0;
  *(_QWORD*)(v55 + 56) = 0;
  *(_QWORD*)(v55 + 64) = 0;
  *(_QWORD*)(v55 + 72) = 0;
  *(_QWORD*)(v55 + 80) = 0;
  *(_QWORD*)(v55 + 88) = 0;
  *(_QWORD*)(v55 + 96) = 0;
  *(_QWORD*)(v55 + 104) = 0;
  *(_QWORD*)(v55 + 112) = 0;
  *(_QWORD*)(v55 + 120) = 0;
  *(_QWORD*)(v55 + 128) = 0;
  *(_QWORD*)(v55 + 136) = 0;
  *(_QWORD*)(v55 + 144) = 0;
  *(_QWORD*)(v55 + 152) = 0;
  *(_QWORD*)(v55 + 160) = 0;
  *(_QWORD*)(v55 + 168) = 0;
  *(_QWORD*)(v55 + 176) = 0;
  *(_QWORD*)(v55 + 184) = 0;
  *(_QWORD*)(v55 + 192) = 0;
  *(_QWORD*)(v55 + 200) = 0;
  *(_QWORD*)(v55 + 208) = 0;
  *(_QWORD*)(v55 + 216) = 0;
  *(_QWORD*)(v55 + 224) = 0;
  *(_QWORD*)(v55 + 232) = 0;
  *(_QWORD*)(v55 + 240) = 0;
  v107_.v107 = nullptr;
  v107_.v108 = 0;
  BasicInfo_15e5b50(v55, (__int64*)&v107_.v107, 0);
  v56 = v107_.v108;
  if (v107_.v108 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v107_.v108 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak(v56);
  }
  if (GameData_225d6f8 == 0) {
    GameData_225d6f8 = v55;
    GameData_225d700 = 1;
  }
  *(_BYTE*)(v55 + 216) = 0;
  *(_QWORD*)(v55 + 224) = 0;
  *(_QWORD*)(v55 + 232) = 0;
  *(_QWORD*)(v55 + 240) = 0;
  *(_QWORD*)v55 = game_menu_CompareInfo_vtable;
  *(_QWORD*)(v55 + 208) = CompareInfo_Destructor_ptr;
  if (v54 != 0) {
    v57 = *(_QWORD*)(v54 + 40);
    if (v57 != 0) {
      *(_QWORD*)(v57 + 48) = v55;
      *(_QWORD*)(v55 + 56) = *(_QWORD*)(v54 + 40);
    }
    *(_QWORD*)(v54 + 40) = v55;
    *(_QWORD*)(v55 + 24) = "CompareInfo";
    *(_QWORD*)(v55 + 32) = v54;
    *(_DWORD*)(v55 + 140) = (unsigned int)game_HashString32("CompareInfo");
    *(_QWORD*)(v55 + 64) = 0;
    *(_QWORD*)(v55 + 72) = 24;
    *(_QWORD*)(v55 + 80) = 1;
    v58 = GameData_2131a38;
    *(_QWORD*)(v55 + 8) = GameData_2131a38;
    *(_QWORD*)(v55 + 16) = v58;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 32LL))(v55);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v55 + 136LL))(v55) & 1) != 0 &&
        (*(_WORD*)(v55 + 136) & 0x100) == 0) {
      *(_WORD*)(v55 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v55 + 136) & 1) == 0) {
    ProcInst_657a50(v55, 1);
  }
  v74 = *(_QWORD*)(a1 + 8);
  v107_.v111 = (__int64*)&v107_.v107;
  v75 = *(_QWORD*)(a1 + 88);
  v102 = "MID_RouteSelectMenu_AutoGrow_Yes_NotGrow";
  v103 = "MID_RouteSelectMenu_AutoGrow_Yes";
  v76 = v105_.v105[0];
  v101 = "MID_RouteSelectMenu_AutoGrow_No";
  v77 = *(_QWORD*)(v75 + 392);
  *(_BYTE*)(v55 + 216) = *(_BYTE*)(a1 + 96);
  v78 = v105_.v106;
  *(_QWORD*)(v55 + 240) = v77;
  if ((v76 & 1) != 0) {
    v79 = v78;
  }
  else {
    v79 = (char*)v105_.v105 + 1;
  }
  v97_.v97 = GameData_207c9d8;
  v97_.v98 = a1;
  v92_.v94 = v92_.v92;
  v104 = v79;
  v97_.v100 = &v97_.v97;
  v107_.v107 = GameData_207c958;
  v107_.v108 = a1;
  v95_.v95[0] = GameData_207ca58;
  v95_.v96 = v95_.v95;
  v92_.v92[0] = GameData_207ca58;
  v80 = RouteMenuItem_166e340(v74, (__int64)&v104, &v103, &v102, &v101,
                              (__int64)&v107_.v107, (__int64)&v97_.v97,
                              (__int64)v95_.v95, (__int64)v92_.v92);
  if (v92_.v94 == v92_.v92) {
    v81 = 32;
  }
  else {
    if (v92_.v94 == nullptr) {
      goto LABEL_139;
    }
    v81 = 40;
  }
  (*(void (**)(__int64))(*v92_.v94 + v81))((__int64)v92_.v94);
LABEL_139:
  if (v95_.v96 == v95_.v95) {
    v83 = 32;
  }
  else {
    if (v95_.v96 == nullptr) {
      goto LABEL_149;
    }
    v83 = 40;
  }
  (*(void (**)(__int64))(*v95_.v96 + v83))((__int64)v95_.v96);
LABEL_149:
  if (v97_.v100 == &v97_.v97) {
    v85 = 4;
  }
  else {
    if (v97_.v100 == nullptr) {
      goto LABEL_161;
    }
    v85 = 5;
  }
  ((__int64 (*)(__int64))(*v97_.v100)[v85])((__int64)v97_.v100);
LABEL_161:
  if (v107_.v111 == (__int64*)&v107_.v107) {
    v89 = 32;
    goto LABEL_165;
  }
  if (v107_.v111 != nullptr) {
    v89 = 40;
  LABEL_165:
    (*(void (**)(__int64))(*v107_.v111 + v89))((__int64)v107_.v111);
  }
  if (v80 != nullptr) {
    v90 = *((_DWORD*)v80 + 89);
    *((_DWORD*)v80 + 93) = 0;
    *((_DWORD*)v80 + 89) = v90 | 1;
    *(_QWORD*)((char*)v80 + 364) = 0xC35C000000000000LL;
  }
  if ((v105_.v105[0] & 1) != 0) {
    v87 = (__int64)v105_.v106;
    if (v105_.v106 == nullptr) {
      goto LABEL_174;
    }
    v88 = *v53;
  LABEL_171:
    v91 = 128;
    if (*(_QWORD*)(v88 + 200) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(v88 + v91, v87);
  }
LABEL_174:
  Impl_717b40();
  return 12;
}

__int64 game_menu_178e950(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;

  GameRoutine_1a0ba50(a1 + 144, 0, 0x168u);
  v4 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v4 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  result = game_ProcInst_Register(a1);
  v6 = GameData_2130240[0];
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_BYTE*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = v6 + 2;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 224) = a1 + 232;
  *(_DWORD*)(a1 + 280) = 1065353216;
  *(_QWORD*)(a1 + 352) = 1;
  *(_QWORD*)(a1 + 368) = 0xFFFFFFFFLL;
  *(_DWORD*)(a1 + 408) = 2;
  *(_QWORD*)a1 = game_menu_CmdBtlInfoUnitTroopSequence_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c7c40;
  *(_QWORD*)(a1 + 184) = 0;
  LODWORD(v6) = *(_DWORD*)a2;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_DWORD*)(a1 + 504) = (_DWORD)v6;
  v8 = *(_QWORD*)(a2 + 8);
  v7 = *(_QWORD*)(a2 + 16);
  v9 = v7 - v8;
  if (v7 != v8) {
    if ((v9 & 0x8000000000000000LL) != 0) {
      GameRoutine_688200();
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v7 - v8, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(a1 + 512) = v10;
    *(_QWORD*)(a1 + 520) = v10;
    *(_QWORD*)(a1 + 528) = v10 + v9;
    result = GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(a1 + 520) = v11;
  }
  return result;
}

#pragma GCC visibility pop
