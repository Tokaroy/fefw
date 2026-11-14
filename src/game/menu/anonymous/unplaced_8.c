#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8, __int64);
__int64 UnitUtil_1212520(unsigned __int16*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_menu_EmptyTransportMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(_QWORD*,
                                                               __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_171f920(_QWORD* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 EquipMenuItem_UnitItem_15cc1a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 EquipMenuItem_UnitItem_15cc380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 EquipMenuItem_UnitItem_15cc5d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15969c0(__int64*, const char*);
__int64 GameRoutine_15b59e0(_QWORD);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0_alt1(__int64 result, const char*);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 TransporterConst_89ca00(_QWORD);
__int64 UnitUtil_1212820(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_15de140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_820d50(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_gameui_1596140(__int64, const char*);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
bool game_gameui_1591680();
char* LayoutAccessor_1562060_alt1(char* result, __int64, const char*);
extern _DWORD GameData_1c0f874[6];
extern __int64 (*GameData_2058768[])();
extern __int64 (*GameData_2058af0[])();
extern __int64 (*GameData_2058e50[])();
extern __int64 (*GameData_2059130[])();
extern __int64 (*GameData_2059670[])();
extern __int64 (*game_gmap_anonymous_ProcGmapFacilitySubMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20871b0[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d5c80[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20870e0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209e7c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20d5bb0[])();
extern __int64 (*game_menu_SubMenu_vtable[])();
extern __int64 (*game_menu_anonymous_AllAutoMenu_vtable[])();
extern __int64 (*game_menu_anonymous_SubDiscardMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubExchangeMenuItem_vtable_20591b0[])();
extern __int64 (*game_menu_anonymous_SubSendMenuItem_vtable[])();
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319c8[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
extern int GameData_21f3ff4;
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_15964d0(__int64, __int64);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void LayoutAccessor_1562cf0(__int64*, const char*);
void game_gameui_1595d90(__int64*, int, char, char);
void game_gameui_1595d90_alt1(char*, int, char, char);
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64);
__int64 game_menu_anonymous_15cb140(__int64 a1);
__int64 game_menu_anonymous_16a4080(_QWORD* a1);
void game_menu_anonymous_16a4190(_QWORD* a1);
void game_menu_anonymous_17b3aa0(_QWORD* a1);
void game_menu_anonymous_1846db0(_QWORD* a1);
__int64 game_menu_anonymous_1847dc0(_QWORD* a1);

__int64 game_menu_anonymous_15cb140(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  _BOOL4 v4;
  _BOOL4 v5;
  __int64 v6;
  int v7;
  unsigned __int16* v8;
  unsigned __int16* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  bool v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  bool v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  int v86;
  __int64 v87;
  unsigned __int16* v88;
  unsigned __int16* v89;
  __int64 v90;
  bool v91;
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
  __int64 v105;
  unsigned __int16* v106;
  __int64 v107;
  __int64 v108;
  int v109;
  char v110;
  __int64 v111;
  __int64 v112;
  bool v113;
  __int64 v114;
  _QWORD v115[4];
  _QWORD* v116;
  _QWORD v117[4];
  _QWORD* v118;
  __int64 v119;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v3 = GameData_212c878[0];
  v4 = (*(_BYTE*)(v2 + 3) & 1) != 0 &&
       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                      8LL * *(unsigned __int16*)(*(
                                                __int64 (**)(__int64))(
                                                *(_QWORD*)a1 + 560LL))(a1)) +
                           72LL) < 8u;
  v5 = (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) + 3) &
        1) != 0 &&
       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                      8LL * *(unsigned __int16*)(*(
                                                __int64 (**)(__int64))(
                                                *(_QWORD*)a1 + 560LL))(a1)) +
                           72LL) == 13;
  v6 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                      8LL * *(unsigned __int16*)(*(
                                                __int64 (**)(__int64))(
                                                *(_QWORD*)a1 + 560LL))(a1)) +
                           73LL);
  v7 = *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL);
  v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if ((v7 & 1) == 0) {
    if (*v8 != 0) {
      if ((unsigned int)*(
              unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(
                                                   __int64 (**)(__int64))(
                                                   *(_QWORD*)a1 + 560LL))(a1)) +
                                72LL) -
              5 <=
          1) {
        v9 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 +
                                                          560LL))(a1);
        if ((*((_BYTE*)v9 + 3) & 0x20) != 0 ||
            (*(_BYTE*)((v10 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v9)) +
                       336) &
             8) != 0 ||
            ((v11 = *(unsigned __int8*)(v10 + 72),
              v12 = (1LL << *(_BYTE*)(v10 + 73)) & 0x7DC, v11 <= 7)
                 ? (v13 = v12 == 0)
                 : (v13 = true),
             (v14 = (1LL << v11) & 0x20FF, v13) ? (v15 = v14 == 0)
                                                : (v15 = true),
             v15)) {
          snd_Fade_Fade_10c830(v117, 0.0f);
          snd_play_ff2d0((void*)(v115), "SE_SYS_NG_L", "SE_SYS_NG_L", v117, 0,
                         65537, 0, 0.0f, 1.0f);
          snd_Fade_Destroy_Fade(v117);
          return 14;
        }
        LODWORD(v117[1]) = 1;
        v57 = *(_QWORD*)(a1 + 8);
        v117[0] = a1;
        v58 = *(_QWORD*)(v57 + 152);
        *(_QWORD*)((char*)&v117[1] + 4) = 0;
        if (v58 != 0) {
          v59 = v58;
        }
        else {
          v59 = v57;
        }
        v60 = GameRoutine_16eb960(v59, v117);
        v61 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
        v62 = *(_QWORD*)(a1 + 88);
        v63 = *(unsigned int*)(a1 + 40);
        v64 = v61;
        v118 = v117;
        v117[0] = GameData_2058768;
        v117[1] = a1;
        EquipMenuItem_UnitItem_15cc1a0(v61, v117, v62, v62, v63);
        BasicMenuCursor_16e0c00(v60, v64);
        v65 = v118;
        if (v118 == v117) {
          goto LABEL_73;
        }
      LABEL_148:
        if (v65 != nullptr) {
          v66 = 40;
          goto LABEL_150;
        }
        return 10;
      }
      v117[0] = a1;
      *(_QWORD*)((char*)&v117[1] + 4) = 0;
      LODWORD(v117[1]) = 1;
      v36 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(v36 + 152) != 0) {
        v37 = *(_QWORD*)(v36 + 152);
      }
      else {
        v37 = *(_QWORD*)(a1 + 8);
      }
      v38 = GameRoutine_16eb960(v37, v117);
      v39 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (*(_DWORD*)(a1 + 104) != 1) {
        v40 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
        v41 = *(_QWORD*)(a1 + 88);
        v42 = *(unsigned int*)(a1 + 40);
        v43 = v40;
        v117[0] = GameData_2058af0;
        v117[1] = a1;
        v118 = v117;
        EquipMenuItem_UnitItem_15cc380(v40, v117, v41, v41, v42);
        BasicMenuCursor_16e0c00(v38, v43);
        if (v118 == v117) {
          v44 = 32;
        }
        else {
          if (v118 == nullptr) {
            goto LABEL_50;
          }
          v44 = 40;
        }
        (*(void (**)(__int64))(*v118 + v44))((__int64)v118);
      }
    LABEL_50:
      v47 = 256;
      if (!v5) {
        v47 = 0;
      }
      v48 = v47 | (v6 << 16) | v4;
      v49 = fw_memory_HeapManager_Allocate_alt1(*v39, 160, 16, 0);
      v50 = *(_QWORD*)(a1 + 88);
      v51 = v49;
      v115[2] = v48;
      *(_WORD*)(v49 + 16) = 0;
      *(_QWORD*)(v49 + 48) = 0;
      *(_QWORD*)(v49 + 56) = 0;
      *(_QWORD*)(v49 + 64) = 0;
      *(_QWORD*)(v49 + 72) = 0;
      v114 = v48;
      *(_QWORD*)(v49 + 104) = a1;
      *(_QWORD*)(v49 + 112) = v48;
      v116 = v115;
      v52 = *(int*)(a1 + 40);
      *(_WORD*)(v49 + 80) = 257;
      v115[0] = GameData_2058e50;
      v115[1] = a1;
      *(_BYTE*)(v49 + 82) = 1;
      *(_QWORD*)(v49 + 96) = GameData_2058e50;
      *(_QWORD*)(v49 + 128) = v49 + 96;
      *(_QWORD*)v49 = game_menu_anonymous_SubSendMenuItem_vtable;
      *(_QWORD*)(v49 + 8) = 0;
      *(_QWORD*)(v49 + 144) = v50;
      *(_QWORD*)(v49 + 152) = v50;
      *(_DWORD*)(v49 + 40) = v52;
      if (v50 != 0) {
        if ((TransporterConst_89ca00(v50 + 8 * v52 + 828) & 1) != 0) {
        LABEL_54:
          v53 = *(_QWORD*)GameData_212dbb8[0];
          if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v53 + 9) != 1 ||
              *(_DWORD*)(v53 + 136) != 1) {
            goto LABEL_92;
          }
          v119 = 0;
          v118 = v117;
          v117[0] = GameData_2131908[0] + 16;
          v117[1] = &v119;
          GameRoutine_15b59e0(v117);
          if (v118 == v117) {
            v54 = 32;
          }
          else {
            if (v118 == nullptr) {
              goto LABEL_91;
            }
            v54 = 40;
          }
          (*(void (**)(__int64))(*v118 + v54))((__int64)v118);
        LABEL_91:
          if (v119 == 0) {
            v55 = game_gameui_1591680();
          LABEL_93:
            *(_BYTE*)(v51 + 82) = v55;
            BasicMenuCursor_16e0c00(v38, v51);
            if (v116 == v115) {
              v73 = 32;
            }
            else {
              if (v116 == nullptr) {
              LABEL_98:
                v74 = fw_memory_HeapManager_Allocate_alt1(*v39, 160, 16, 0);
                v75 = *(_QWORD*)(a1 + 88);
                v76 = *(_DWORD*)(a1 + 40);
                v77 = true;
                v78 = v74;
                *(_WORD*)(v74 + 16) = 0;
                *(_QWORD*)(v74 + 48) = 0;
                *(_QWORD*)(v74 + 56) = 0;
                *(_QWORD*)(v74 + 64) = 0;
                *(_QWORD*)(v74 + 72) = 0;
                *(_QWORD*)(v74 + 104) = a1;
                v117[0] = GameData_2059130;
                v117[1] = a1;
                *(_WORD*)(v74 + 80) = 257;
                *(_QWORD*)(v74 + 96) = GameData_2059130;
                *(_BYTE*)(v74 + 82) = 1;
                v118 = v117;
                *(_QWORD*)(v74 + 128) = v74 + 96;
                *(_QWORD*)v74 =
                    game_menu_anonymous_SubExchangeMenuItem_vtable_20591b0;
                *(_QWORD*)(v74 + 8) = 0;
                *(_QWORD*)(v74 + 144) = v75;
                *(_QWORD*)(v74 + 152) = v75;
                *(_DWORD*)(v74 + 40) = v76;
                v79 = game_820d50(14);
                if (game_GameModeData_instance_ != 0) {
                  v80 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48), v79);
                  if (v80 != 0) {
                    v77 = *(_DWORD*)(v80 + 32) == 0;
                  }
                }
                v81 = v118;
                *(_BYTE*)(v78 + 81) = v77;
                if (v81 == v117) {
                  v82 = 32;
                }
                else {
                  if (v81 == nullptr) {
                    goto LABEL_106;
                  }
                  v82 = 40;
                }
                (*(void (**)(__int64))(*v81 + v82))((__int64)v81);
              LABEL_106:
                v83 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 312LL);
                v85 = *(_QWORD**)(v83 + 232);
                v84 = *(_QWORD**)(v83 + 240);
                if (v85 == v84) {
                  v91 = false;
                }
                else {
                  v86 = 0;
                  do {
                    v87 = *v85;
                    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v85 + 48LL))(
                             *v85) &
                         1) != 0) {
                      v86 += (*(__int64 (**)(__int64))(*(_QWORD*)v87 + 40LL))(
                                 v87) &
                             1;
                    }
                    ++v85;
                  } while (v85 != v84);
                  if (v86 < 1 ||
                      (v88 = (unsigned __int16*)(*(__int64 (**)(__int64))(
                           *(_QWORD*)a1 + 560LL))(a1),
                       (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                              8LL * *v88) +
                                   336LL) &
                        0x100) != 0) ||
                      (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * *v88) +
                                  336LL) &
                           0x200 |
                       *((_BYTE*)v88 + 3) & 2) != 0 ||
                      (*((_BYTE*)(v89 = (unsigned __int16*)(*(__int64 (**)(
                                      __int64))(*(_QWORD*)a1 + 560LL))(a1)) +
                         3) &
                       0x10) != 0) {
                    v91 = false;
                  }
                  else {
                    v90 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v89);
                    v91 = ((1LL << *(_BYTE*)(v90 + 72)) & 0xE01F) != 0 &&
                          (*(_BYTE*)(v90 + 336) & 4) == 0;
                  }
                }
                *(_BYTE*)(v78 + 82) = v91;
                BasicMenuCursor_16e0c00(v38, v78);
                v92 = fw_memory_HeapManager_Allocate_alt1(*v39, 176, 16, 0);
                v93 = *(_QWORD*)(a1 + 88);
                v94 = *(unsigned int*)(a1 + 40);
                v95 = v92;
                v117[0] = GameData_2058768;
                v117[1] = a1;
                v118 = v117;
                EquipMenuItem_UnitItem_15cc1a0(v92, v117, v93, v93, v94);
                BasicMenuCursor_16e0c00(v38, v95);
                if (v118 == v117) {
                  v96 = 32;
                }
                else {
                  if (v118 == nullptr) {
                    goto LABEL_125;
                  }
                  v96 = 40;
                }
                (*(void (**)(__int64))(*v118 + v96))((__int64)v118);
              LABEL_125:
                if (*(_DWORD*)(a1 + 104) == 1) {
                  goto LABEL_132;
                }
                v97 = fw_memory_HeapManager_Allocate_alt1(*v39, 160, 16, 0);
                v98 = *(_QWORD*)(a1 + 88);
                v99 = *(unsigned int*)(a1 + 40);
                v100 = v97;
                v117[0] = GameData_2058af0;
                v117[1] = a1;
                v118 = v117;
                EquipMenuItem_UnitItem_15cc5d0(v97, v117, v98, v98, v99);
                BasicMenuCursor_16e0c00(v38, v100);
                if (v118 == v117) {
                  v101 = 32;
                }
                else {
                  if (v118 == nullptr) {
                    goto LABEL_131;
                  }
                  v101 = 40;
                }
                (*(void (**)(__int64))(*v118 + v101))((__int64)v118);
              LABEL_131:
                if (*(_DWORD*)(a1 + 104) == 2) {
                  return 10;
                }
              LABEL_132:
                v102 = fw_memory_HeapManager_Allocate_alt1(*v39, 160, 16, 0);
                v103 = *(_QWORD*)(a1 + 88);
                v104 = v102;
                *(_WORD*)(v102 + 16) = 0;
                *(_QWORD*)(v102 + 48) = 0;
                *(_QWORD*)(v102 + 56) = 0;
                *(_QWORD*)(v102 + 64) = 0;
                *(_QWORD*)(v102 + 72) = 0;
                v118 = v117;
                v105 = *(int*)(a1 + 40);
                *(_WORD*)(v102 + 80) = 257;
                v117[0] = GameData_2059670;
                v117[1] = a1;
                *(_BYTE*)(v102 + 82) = 1;
                *(_QWORD*)(v102 + 96) = GameData_2059670;
                *(_QWORD*)(v102 + 128) = v102 + 96;
                *(_QWORD*)v102 = game_menu_anonymous_SubDiscardMenuItem_vtable;
                *(_QWORD*)(v102 + 8) = 0;
                v117[2] = v114;
                *(_QWORD*)(v102 + 104) = a1;
                *(_QWORD*)(v102 + 112) = v114;
                *(_QWORD*)(v102 + 144) = v103;
                *(_QWORD*)(v102 + 152) = v103;
                *(_DWORD*)(v102 + 40) = v105;
                if (v103 != 0) {
                  v106 = (unsigned __int16*)(v103 + 8 * v105 + 828);
                  v107 = *v106;
                  if (*v106 == 0) {
                    goto LABEL_142;
                  }
                }
                else {
                  v106 =
                      (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * (int)v105 + 4);
                  v107 = *v106;
                  if (*v106 == 0) {
                    goto LABEL_142;
                  }
                }
                if ((*((_BYTE*)v106 + 3) & 0x10) == 0) {
                  v108 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v107);
                  if (v108 == 0 ||
                      (unsigned int)*(unsigned __int8*)(v108 + 72) - 5 >= 2 &&
                          ((v109 = *(_DWORD*)(v108 + 336)) & 1) == 0 &&
                          ((v109 & 2) == 0 ||
                           (v115[0] = *(_QWORD*)v106,
                            (unsigned int)UnitUtil_1212820(v115) != 1))) {
                    v110 = 1;
                    goto LABEL_143;
                  }
                }
              LABEL_142:
                v110 = 0;
              LABEL_143:
                *(_BYTE*)(v104 + 82) = v110;
                v111 = game_820d50(15);
                v113 = game_GameModeData_instance_ == 0 ||
                       (v112 = game_GameVariableTable_Find(
                            *(_QWORD*)(game_GameModeData_instance_ + 48),
                            v111)) == 0 ||
                       *(_DWORD*)(v112 + 32) == 0;
                *(_BYTE*)(v104 + 81) = v113;
                BasicMenuCursor_16e0c00(v38, v104);
                v65 = v118;
                if (v118 == v117) {
                LABEL_73:
                  v66 = 32;
                LABEL_150:
                  (*(void (**)(__int64))(*v65 + v66))((__int64)v65);
                  return 10;
                }
                goto LABEL_148;
              }
              v73 = 40;
            }
            (*(void (**)(__int64))(*v116 + v73))((__int64)v116);
            goto LABEL_98;
          }
        LABEL_92:
          v55 = true;
          goto LABEL_93;
        }
      }
      else if (
          (TransporterConst_89ca00(
               *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                         game_TransporterConst_List_instance__ptr
                                             [0] +
                                     8LL) +
                          8LL) +
               12LL * (int)v52 + 4) &
           1) != 0) {
        goto LABEL_54;
      }
      v55 = false;
      goto LABEL_93;
    }
    v31 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 312LL);
    v32 = *(_QWORD**)(v31 + 232);
    v33 = *(_QWORD**)(v31 + 240);
    if (v32 != v33) {
      v34 = 0;
      do {
        v35 = *v32;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v32 + 48LL))(*v32) & 1) != 0) {
          v34 += (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 40LL))(v35) & 1;
        }
        ++v32;
      } while (v32 != v33);
      if (v34 >= 1) {
        snd_Fade_Fade_10c830(v117, 0.0f);
        snd_play_ff2d0((void*)(v115), "SE_SYS_Decide_L_Next",
                       "SE_SYS_Decide_L_Next", v117, 0, 65537, 0, 0.0f, 1.0f);
        snd_Fade_Destroy_Fade(v117);
        (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
        v45 = *(_QWORD*)(a1 + 96);
        v46 = *(_QWORD*)(v45 + 304);
        *(_DWORD*)(v45 + 356) |= 1u;
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)v46 + 240LL))(v46, 0);
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)v46 + 248LL))(v46, 0);
        MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 1, 0);
        return 13;
      }
    }
    return 1;
  }
  if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
    return 1;
  }
  v17 = *v8;
  result = 1;
  v18 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v17);
  if ((*(_BYTE*)(v18 + 336) & 4) == 0 &&
      ((1LL << *(_BYTE*)(v18 + 72)) & 0xE01F) != 0) {
    v19 = *(_QWORD*)(a1 + 96);
    v20 = *(_QWORD*)(v19 + 304);
    *(_DWORD*)(v19 + 356) &= ~1u;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 240LL))(v20, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 248LL))(v20, 1);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 328LL))(a1, 0);
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 312LL);
    v22 = *(_DWORD*)(v21 + 640);
    if ((v22 & 0x80000000) == 0) {
      v23 = *(char**)(v21 + 232);
      v24 = *(char**)(v21 + 240);
      if (v23 != v24) {
        v25 = v24 - v23 - 8;
        v26 = (v25 >> 3) + 1;
        if (v25 >= 0x18) {
          v56 = 0;
          while (v22 != (_DWORD)v56) {
            if (v22 == (_DWORD)v56 + 1) {
              v23 += 8;
              goto LABEL_77;
            }
            if (v22 == (_DWORD)v56 + 2) {
              v23 += 16;
              goto LABEL_77;
            }
            if (v22 == (_DWORD)v56 + 3) {
              v23 += 24;
              goto LABEL_77;
            }
            v23 += 32;
            v56 += 4;
            v27 = v56;
            if ((v26 & 0x3FFFFFFFFFFFFFFCLL) == v56) {
              goto LABEL_28;
            }
          }
          goto LABEL_77;
        }
        v27 = 0;
      LABEL_28:
        v28 = v26 & 3;
        if (v28 != 0) {
          v29 = v22 - v27;
          while (v29 != 0) {
            v23 += 8;
            --v29;
            if (--v28 == 0) {
              goto LABEL_32;
            }
          }
        LABEL_77:
          v30 = *(_QWORD*)v23;
          goto LABEL_78;
        }
      }
    }
  LABEL_32:
    v30 = 0;
  LABEL_78:
    v67 = __dynamic_cast(v30, GameData_212e008[0], GameData_21319c8[0], 0);
    game_15de140(*(_QWORD*)(a1 + 88), *(unsigned int*)(a1 + 40),
                 *(_QWORD*)(v67 + 88), *(unsigned int*)(v67 + 40), 1);
    v68 = *(_QWORD*)(a1 + 88);
    if (v4) {
      GameRoutine_15de9d0(v68, 1);
    }
    else if (v5) {
      GameRoutine_15dea90(v68, (unsigned int)v6, 1);
    }
    MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 1, 0);
    v69 = *(_QWORD**)(a1 + 96);
    v70 = v69[38];
    if (v70 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v70 + 1080LL))(v70);
    }
    v71 = v69[39];
    if (v71 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v71 + 1080LL))(v71);
    }
    v72 = v69[40];
    if (v72 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v72 + 1080LL))(v72);
    }
    return 13;
  }
  return result;
}

__int64 game_menu_anonymous_16a4080(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *a1 = game_gmap_anonymous_ProcGmapFacilitySubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20870e0;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20871b0;
  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 != 0 && GameData_21f3ff4-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  v5 = (_QWORD*)a1[146];
  if (v5 == a1 + 142) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_12:
  v7 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v7 == a1 + 136) {
    v8 = 32;
    goto LABEL_16;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_menu_anonymous_16a4190(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_gmap_anonymous_ProcGmapFacilitySubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20870e0;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20871b0;
  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 != 0 && GameData_21f3ff4-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  v5 = (_QWORD*)a1[146];
  if (v5 == a1 + 142) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_12:
  v7 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v7 == a1 + 136) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_17:
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                (__int64)a1);
}

void game_menu_anonymous_171f920(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  __int64* v14;
  __int64 i;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26[3];

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = game_menu_EmptyTransportMenuItem_vtable;
  v5 = a1[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[134];
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 88);
    if (v7 != 0) {
    LABEL_5:
      game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(a1, v7);
      return;
    }
    goto LABEL_8;
  }
  v8 = a1[133];
  v9 = *(_QWORD*)v8;
  if (*(_WORD*)(*(_QWORD*)v8 + 320LL) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(v9 + 328) + 8LL);
    if (v7 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    v8 = a1[133];
    v9 = *(_QWORD*)v8;
  }
  v10 = *(_QWORD*)(v9 + 344);
  if (v10 != 0 && *(_WORD*)(v10 + 40) != 0) {
    GameSubquestData_1256d00((void*)(v26), v8);
    v13 = v26[1];
    v24 = v26[0];
    if (v26[0] != v26[1]) {
      v14 = game_map_MapRandom_instance__ptr[0];
      for (i = v26[0]; i != v13; i += 8) {
        v16 = *(_QWORD*)i;
        if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)i + 72LL)) |
              (1LL << *(_BYTE*)(*(_QWORD*)i + 73LL))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          v17 = 1;
        }
        else {
          v18 = *(unsigned __int16*)(v16 + 16);
          v25 = 0x100000000LL;
          LOWORD(v25) = v18;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v18) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14);
            v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4);
            v21 = *(_DWORD*)v14 ^ (*(_DWORD*)v14 << 11);
            *(_DWORD*)v14 = *((_DWORD*)v14 + 1);
            *((_DWORD*)v14 + 1) = v19;
            v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v20;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v22;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            HIDWORD(v25) =
                HIDWORD(v25) & 0xFFFFC00F |
                (16 *
                 (((16 * (v22 - 1000 * ((v22 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
          v17 = UnitUtil_1212520((unsigned __int16*)&v25);
          if (v17 < 1) {
            continue;
          }
        }
        do {
          game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(a1, v16);
          --v17;
        } while (v17 != 0);
      }
    }
    if (v24 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v24);
    }
  }
}

void game_menu_anonymous_17b3aa0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  *a1 = game_menu_anonymous_AllAutoMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20d5bb0;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d5c80;
  v2 = a1 + 144;
  v3 = (_QWORD*)a1[148];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v5 == a1 + 136) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
}

void game_menu_anonymous_1846db0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  const char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  struct {
    __int64* v31;
    int v32;
    char v33;
    char gap21_[3];
    int v34;
    char v35;
  } v31_;
  struct {
    __int64* v36;
    __int64 v37;
  } v36_;

  v1 = a1[19];
  v3 = a1[7];
  if ((*(_BYTE*)(v1 + 8) & 0xFE) == 2) {
    v4 = 1;
  }
  else {
    v4 = 3;
  }
  if (v3 == 0) {
    goto LABEL_8;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = (__int64*)a1[6];
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v27 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v27;
    if (v27 != nullptr) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if (v8 == nullptr) {
  LABEL_8:
    v8 = &ui_LayoutAccessor_empty_;
  }
LABEL_9:
  LayoutAccessor_1560070((void*)(&v36_.v36), v8, "L_State");
  if (v36_.v37 != 0) {
    v9 = std___1___shared_weak_count_lock(v36_.v37);
    if (v9 != 0) {
      v10 = v9;
      if (v36_.v36 != nullptr) {
        game_gameui_1595d90(v36_.v36, v4, 0, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    if (v36_.v37 != 0) {
      std___1___shared_weak_count___release_weak(v36_.v37);
    }
  }
  v11 = a1[7];
  if (v11 == 0) {
    goto LABEL_21;
  }
  v12 = std___1___shared_weak_count_lock(v11);
  if (v12 == 0) {
    goto LABEL_21;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = (__int64*)a1[6];
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v28 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);
  v15 = v28;
  if (v28 == nullptr) {
  LABEL_21:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_22:
  LayoutAccessor_1562060(v15, (__int64)"T_Txt",
                         *(const char**)(*(_QWORD*)a1[19] + 64LL));
  v16 = a1[7];
  if (v16 == 0) {
    goto LABEL_26;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_26;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = (__int64*)a1[6];
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = v20;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    v20 = v29;
    if (v29 != nullptr) {
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if (v20 == nullptr) {
  LABEL_26:
    v20 = &ui_LayoutAccessor_empty_;
  }
LABEL_27:
  v31_.v31 = LayoutAccessor_155fbe0(v20, "L_IconQuest");
  v31_.v33 = 0;
  v31_.v34 = 0;
  v31_.v35 = 0;
  v31_.v32 = 3;
  v21 = *(const char**)(*(_QWORD*)a1[19] + 8LL);
  GameRoutine_1a09c70(v21);
  GameRoutine_15964d0((__int64)&v31_.v31, (__int64)v21);
  if ((v31_.v33 & 1) == 0) {
    LayoutAccessor_155e830((__int64)v31_.v31, 1);
  }
  v22 = a1[7];
  if (v22 == 0) {
    goto LABEL_33;
  }
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 == 0) {
    goto LABEL_33;
  }
  v24 = v23;
  v25 = (atomic_ullong*)(v23 + 8);
  v26 = (__int64*)a1[6];
  if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v30 = v26;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
    v26 = v30;
    if (v30 != nullptr) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  if (v26 == nullptr) {
  LABEL_33:
    v26 = &ui_LayoutAccessor_empty_;
  }
LABEL_34:
  ui_LayoutAccessor_SetPaneVisible((__int64)v26, (__int64)"IconQuestKind", 0);
  if ((v31_.v33 & 1) == 0 && (LayoutAccessor_155ea30(v31_.v31) & 1) != 0 &&
      (v31_.v35 & 1) == 0) {
    LayoutAccessor_1562cf0(v31_.v31, "Status_Default");
    LayoutAccessor_1562cf0(v31_.v31, "Enable");
  }
}

__int64 game_menu_anonymous_1847dc0(_QWORD* a1)
{
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64 result;
  __int64* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  struct {
    __int64* v36;
    int v37;
    char v38;
    char gap21_[3];
    int v39;
    char v40;
  } v36_;
  struct {
    char* v41;
    __int64 v42;
  } v41_;

  v2 = *(unsigned __int8*)(a1[19] + 9LL);
  if (v2 <= 5 && ((0x39u >> v2) & 1) != 0) {
    v3 = GameData_1c0f874[v2];
    v4 = a1[7];
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  else {
    v3 = (v2 & 0xFE) == 2;
    v4 = a1[7];
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_9;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = (__int64*)a1[6];
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v31;
    if (v31 != nullptr) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  if (v8 == nullptr) {
  LABEL_9:
    v8 = &ui_LayoutAccessor_empty_;
  }
LABEL_10:
  LayoutAccessor_1560070((void*)(&v41_.v41), v8, "L_State");
  if (v41_.v42 != 0) {
    v9 = std___1___shared_weak_count_lock(v41_.v42);
    if (v9 != 0) {
      v10 = v9;
      if (v41_.v41 != nullptr) {
        game_gameui_1595d90_alt1(v41_.v41, v3, 0, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    if (v41_.v42 != 0) {
      std___1___shared_weak_count___release_weak(v41_.v42);
    }
  }
  v11 = a1[7];
  if (v11 == 0) {
    goto LABEL_22;
  }
  v12 = std___1___shared_weak_count_lock(v11);
  if (v12 == 0) {
    goto LABEL_22;
  }
  v13 = (char*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  v32 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak(v32);
  if (v13 == nullptr) {
  LABEL_22:
    v13 = (char*)&ui_LayoutAccessor_empty_;
  }
LABEL_23:
  v14 = (const char*)(*(__int64 (**)(_QWORD*))(a1[18] + 16LL))(a1 + 18);
  LayoutAccessor_1562060_alt1(v13, (__int64)"T_Txt", v14);
  v15 = a1[7];
  if (v15 == 0) {
    goto LABEL_27;
  }
  v16 = std___1___shared_weak_count_lock(v15);
  if (v16 == 0) {
    goto LABEL_27;
  }
  v17 = v16;
  v18 = (atomic_ullong*)(v16 + 8);
  v19 = (__int64*)a1[6];
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  v33 = v19;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  std___1___shared_weak_count___release_weak(v17);
  v19 = v33;
  if (v33 == nullptr) {
  LABEL_27:
    v19 = &ui_LayoutAccessor_empty_;
  }
LABEL_28:
  v36_.v36 = LayoutAccessor_155fbe0(v19, "L_IconQuest");
  v36_.v38 = 0;
  v36_.v39 = 0;
  v36_.v40 = 0;
  v36_.v37 = 3;
  LayoutAccessor_155e830((__int64)v36_.v36, 1);
  v20 = *(const char**)(*(_QWORD*)a1[19] + 8LL);
  GameRoutine_1a09c70(v20);
  game_gameui_1596140((__int64)&v36_.v36, v20);
  v21 = a1[7];
  if (v21 == 0) {
    goto LABEL_32;
  }
  v22 = std___1___shared_weak_count_lock(v21);
  if (v22 == 0) {
    goto LABEL_32;
  }
  v23 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v23 != nullptr) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  v34 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
  std___1___shared_weak_count___release_weak(v34);
  if (v23 == nullptr) {
  LABEL_32:
    v23 = &ui_LayoutAccessor_empty_;
  }
LABEL_33:
  v24 = *(const char**)(*(_QWORD*)a1[19] + 8LL);
  GameRoutine_1a09c70(v24);
  GameRoutine_15969c0(v23, v24);
  v25 = a1[7];
  if (v25 == 0) {
    goto LABEL_37;
  }
  v26 = std___1___shared_weak_count_lock(v25);
  if (v26 == 0) {
    goto LABEL_37;
  }
  v27 = v26;
  v28 = (atomic_ullong*)(v26 + 8);
  v29 = (__int64*)a1[6];
  if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v29 != nullptr) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v35 = v29;
  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
  std___1___shared_weak_count___release_weak(v27);
  v29 = v35;
  if (v35 == nullptr) {
  LABEL_37:
    v29 = &ui_LayoutAccessor_empty_;
  }
LABEL_38:
  result = ui_LayoutAccessor_FindAlignment(v29, "A_Txt");
  if (result != 0) {
    result = Alignment_56b600(result);
  }
  if ((v36_.v38 & 1) == 0) {
    result = LayoutAccessor_155ea30(v36_.v36);
    if ((result & 1) != 0 && (v36_.v40 & 1) == 0) {
      LayoutAccessor_1562cf0_alt1((__int64)v36_.v36, "Status_Default");
      return LayoutAccessor_1562cf0_alt1((__int64)v36_.v36, "Enable");
    }
  }
  return result;
}

#pragma GCC visibility pop
