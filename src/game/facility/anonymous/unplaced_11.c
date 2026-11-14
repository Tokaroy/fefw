#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* SceneCharacter_14020c0(__int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* FacilityVariable_1472240();
__int64* GameRoutine_9db8a0(unsigned __int8, int);
__int64* GameVariable_82e4d0(int);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_13e4ce0(__int64, _QWORD*, int);
__int64 GameHr_16eb610(_QWORD*, unsigned int, const char*, __int64, __int64,
                       unsigned int, int);
__int64 GameHr_928b80(_QWORD*, __int64);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 Registration_a4da40(__int64, __int64);
__int64 SceneCharacter_1401ce0(__int64, _QWORD*);
__int64 SceneManager_138e5e0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fs_a51640(__int64, __int64, _DWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_19307a0(__int64, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_facility_14107c0(__int64, __int64);
__int64 game_facility_anonymous_1930ce0(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strstr(const char*, const char*);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool GameHr_14218c0(__int64);
char* GameHr_9dc060(__int64);
char* GameHr_9dc130(__int64, int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1aa5e80;
extern _UNKNOWN GameData_1ae785f;
extern _UNKNOWN GameData_1aef19c;
extern __int64 (*GameData_2113918[])();
extern __int64 (*GameData_2113998[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e348;
extern __int64* GameData_2131368[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cc40[63];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f4010;
extern __int64 GameData_21f8450;
extern __int64 GameData_21f8458;
extern __int64 GameData_21f8468;
extern __int64 GameData_21f84a0;
extern __int64 GameData_2249350[];
extern __int64 GameData_224ae20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
float game_facility_14107c0_alt1(__int64,
                                 __int64) __asm__("game_facility_14107c0");
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void GameHr_1405080(__int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_1488300();
void GameRoutine_156c5d0(__int64, __int64, char);
void SceneCharacter_1401550(__int64, __int64);
void SceneTalk_1497180(unsigned __int8*, __int64, unsigned __int64, __int64,
                       __int64, unsigned __int64, int);
void __attribute__((noreturn)) GameRoutine_13eb280();
void game_16ad210(__int64, __int64, char, const char*);
void game_facility_anonymous_1930f40(__int64, __int64*, char, __int64, char*,
                                     char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_facility_anonymous_15ee1c0(__int64 a1);
void game_facility_anonymous_15ee5a0();
__int64 game_facility_anonymous_15ef2a0(__int64 a1);
__int64 game_facility_anonymous_15ef8e0(__int64 a1);
void game_facility_anonymous_15efe00(__int64 a1);
__int64 game_facility_anonymous_19293e0(__int64 a1);
__int64 game_facility_anonymous_192f7c0(__int64 a1);
_QWORD* GameRoutine_1661600(__int64, char, int, __int64*);
__attribute__((swiftcall)) void game_941ce0(PSEUDO_X8, __int64);
__int64 GameRoutine_fa6720(_QWORD*, __int64);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_21230b0[])();
extern __int64 (*game_facility_anonymous_ProcPartSelect_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTrainingKindMenu_vtable[])();
extern __int64 (*game_facility_anonymous_TrainingKindMenuItem_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20b1a40[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_211c7e8[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2123618[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b1970[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_211c718[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2123548[])();
extern __int64* GameData_212e008[9];
extern __int64 GameData_20b1428;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2262bfc;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void Impl_717b40();
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
__int64 game_facility_anonymous_1722440(_QWORD* a1);
void game_facility_anonymous_197ce40(__int64 a1);
void game_facility_anonymous_19e2fa0(__int64 a1);

void game_facility_anonymous_15ee1c0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  int v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  void* v23;
  _BYTE* v24;
  char v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    char* v30;
    char gap32_[8];
    char v31;
    char gap41_[15];
    __int64 v32;
    char gap64_[8];
    char v33;
    char gap73_[15];
    __int64 v34;
    char v35;
    char gap97_[15];
    __int64 v36;
  } v28_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    __int64 v39;
  } v37_;
  struct {
    _QWORD v40[2];
    const char* v41;
  } v40_;

  v2 = *(_QWORD*)(a1 + 248);
  v3 = (__int64*)GameData_212dce8;
  v4 = msg_MessageManager_instance__ptr[0];
  if (v2 != 0 && (v5 = *(_QWORD*)(v2 + 392)) != 0 &&
      (FacilityVariable_1472240(), v6 = *(unsigned __int8*)(v5 + 48),
       *(_BYTE*)(v5 + 48) != 0) &&
      (v7 = 1 << v6, game_GameModeData_instance_ != 0) &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2249350[5 * (unsigned int)(v6 >> 5) +
                                                5])) != 0 &&
      (*(_DWORD*)(v8 + 32) & v7) != 0) {
    v27 = SceneManager_138e5e0(*v3);
    v10 = SceneCharacter_14020c0(v27);
    v11 = 2;
  }
  else {
    v9 = SceneManager_138e5e0(*v3);
    v10 = SceneCharacter_14020c0(v9);
    v11 = 1;
  }
  SceneTalk_1497180((unsigned __int8*)&v28_.v28, (__int64)"Bird", 4u,
                    (__int64)v10, (__int64)"m01", 3u, v11);
  if ((v28_.v28 & 1) != 0) {
    v12 = v28_.v30;
  }
  else {
    v12 = (char*)&v28_.v28 + 1;
  }
  if ((Registration_a4da40(*v4, (__int64)v12) & 1) != 0 &&
      ((v28_.v28 & 1) != 0 ? (v13 = v28_.v30) : (v13 = (char*)&v28_.v28 + 1),
       (fs_a51640(*v4, (__int64)v13, v13) & 1) != 0)) {
    if ((v28_.v28 & 1) != 0) {
      fw_text_String_CopyTerminated(&v37_.v37, (__int64)v28_.v30, v28_.v29);
    }
    else {
      v37_.v37 = v28_.v28;
      v37_.v38 = v28_.v29;
      v37_.v39 = (__int64)v28_.v30;
    }
  }
  else {
    LOWORD(v37_.v37) = 0;
  }
  v14 = v37_.v37;
  LOWORD(v37_.v37) = 0;
  v40_.v40[0] = v14;
  v40_.v40[1] = v37_.v38;
  v40_.v41 = (const char*)v37_.v39;
  if ((v28_.v35 & 1) != 0 && v28_.v36 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v28_.v36);
  }
  if ((v28_.v33 & 1) != 0 && v28_.v34 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v28_.v34);
  }
  if ((v28_.v31 & 1) != 0 && v28_.v32 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v28_.v32);
  }
  if ((v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)v28_.v30);
  }
  v19 = v40_.v40[0] & 1;
  if ((v40_.v40[0] & 1) != 0) {
    v20 = v40_.v41;
  }
  else {
    v20 = (char*)v40_.v40 + 1;
  }
  if (*GameData_212d460[0] == 0 && v20 != nullptr) {
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         1376, 16, 0);
    GameRoutine_1130770(v21, v20, nullptr);
    v22 = *(_QWORD*)(a1 + 40);
    if (v22 != 0) {
      *(_QWORD*)(v22 + 48) = v21;
      *(_QWORD*)(v21 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v21;
    *(_QWORD*)(v21 + 24) = "talk::Seq";
    *(_QWORD*)(v21 + 32) = a1;
    *(_DWORD*)(v21 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v21 + 64) = 0;
    *(_QWORD*)(v21 + 72) = 24;
    *(_QWORD*)(v21 + 80) = 1;
    v23 = GameData_2130228;
    *(_QWORD*)(v21 + 8) = GameData_2130228;
    *(_QWORD*)(v21 + 16) = v23;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 136LL))(v21) & 1) != 0 &&
        (*(_WORD*)(v21 + 136) & 0x100) == 0) {
      *(_WORD*)(v21 + 136) |= 0x100u;
    }
    v24 = *(_BYTE**)(v21 + 32);
    v25 = v24[138];
    if (v25 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v24 + 64LL))(*(_QWORD*)(v21 + 32));
      v25 = v24[138];
    }
    v24[138] = v25 + 1;
    *(_WORD*)(v21 + 136) |= 2u;
    v19 = v40_.v40[0] & 1;
  }
  if (v19 != 0 && v40_.v41 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v40_.v41);
  }
}

void game_facility_anonymous_15ee5a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[2];
    __int64 v7;
  } v6_;
  struct {
    _QWORD v8[2];
    __int64 v9;
  } v8_;

  v0 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v0 != 0) {
    v1 = v0;
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        48, 16, 0);
    *(_BYTE*)(v3 + 47) = 0;
    v6_.v6[0] = 49;
    v6_.v6[1] = 47;
    v6_.v7 = v3;
    *(_QWORD*)(v3 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v3 + 24) = 0xE3BE81E3A2ADE65FLL;
    *(_QWORD*)(v3 + 32) = 0xA4E95FA89CE68A82LL;
    *(_QWORD*)(v3 + 39) = 0x8A82E38482E38CA4LL;
    *(_QWORD*)v3 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v3 + 8) = 0xE3BC83E3A283E3A9LL;
    game_facility_14107c0((__int64)v8_.v8, (__int64)v6_.v6);
    SceneCharacter_1401ce0(v1, v8_.v8);
    if ((v8_.v8[0] & 1) != 0 && v8_.v9 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v8_.v9);
    }
    if ((v6_.v6[0] & 1) != 0 && v6_.v7 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, v6_.v7);
    }
  }
}

__int64 game_facility_anonymous_15ef2a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v9;
  bool v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v40_;
  struct {
    _QWORD v43[2];
    __int64 v44;
    char gap56_[8];
    _QWORD* v45;
  } v43_;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (result != 0) {
    v3 = result;
    v4 = *(_QWORD*)(a1 + 328);
    v5 = *(_QWORD*)(a1 + 336);
    v6 = fw_memory_g_heap_manager_ptr;
    if ((unsigned int)(*(_DWORD*)(a1 + 320) - 11) < 0xFFFFFFF6 || v4 == 0 ||
        v5 == 0) {
      v4 = *(_QWORD*)(a1 + 304);
      v5 = *(_QWORD*)(a1 + 312);
      v9 = (unsigned int)(*(_DWORD*)(a1 + 296) - 11) < 0xFFFFFFF6 || v4 == 0;
      if (v9 || v5 == 0) {
        v4 = *(_QWORD*)(a1 + 280);
        v5 = *(_QWORD*)(a1 + 288);
        v11 = (unsigned int)(*(_DWORD*)(a1 + 272) - 11) < 0xFFFFFFF6 || v4 == 0;
        if (v11 || v5 == 0) {
          goto LABEL_26;
        }
      }
    }
    if (v4 != v5) {
    LABEL_26:
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
      *(_BYTE*)(v13 + 44) = 0;
      v40_.v40 = 49;
      v40_.v41 = 44;
      v40_.v42 = v13;
      *(_DWORD*)(v13 + 40) = -1751783759;
      *(_QWORD*)(v13 + 16) = 0xB383E3A783E3B782LL;
      *(_QWORD*)(v13 + 24) = 0xE3BE81E3A2ADE65FLL;
      *(_QWORD*)(v13 + 32) = 0xA4E55FA89CE68A82LL;
      *(_QWORD*)v13 = 0x83E3A383E3AD82E3LL;
      *(_QWORD*)(v13 + 8) = 0xE3BC83E3A283E3A9LL;
      game_facility_14107c0_alt1((__int64)v43_.v43, (__int64)&v40_.v40);
      SceneCharacter_1401ce0(v3, v43_.v43);
      if ((v43_.v43[0] & 1) != 0 && v43_.v44 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14, v43_.v44);
      }
      if ((v40_.v40 & 1) != 0 && v40_.v42 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v15, v40_.v42);
      }
      v16 = game_HashString((__int64)&GameData_1ae785f);
      if (v16 != 0) {
        v17 = *(_QWORD*)(GameData_21f4010 + 96);
        if (v17 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
          v19 = v17 - 1;
          if ((v17 & (v17 - 1)) != 0) {
            v20 = v16;
            if (v16 >= v17) {
              v20 = v16 % v17;
            }
          }
          else {
            v20 = v19 & v16;
          }
          v29 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v20);
          if (v29 != nullptr) {
            v30 = (_QWORD*)*v29;
            if (v30 != nullptr) {
              if ((v17 & v19) == 0) {
                while (1) {
                  v32 = v30[1];
                  if (v32 == v16) {
                    if (v30[2] == v16) {
                      goto LABEL_96;
                    }
                  }
                  else if ((v32 & v19) != v20) {
                    goto LABEL_102;
                  }
                  v30 = (_QWORD*)*v30;
                  if (v30 == nullptr) {
                    goto LABEL_102;
                  }
                }
              }
              do {
                v31 = v30[1];
                if (v31 == v16) {
                  if (v30[2] == v16) {
                    goto LABEL_96;
                  }
                }
                else {
                  if (v31 >= v17) {
                    v31 %= v17;
                  }
                  if (v31 != v20) {
                    break;
                  }
                }
                v30 = (_QWORD*)*v30;
              } while (v30 != nullptr);
            }
          }
        }
      }
    }
    else {
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
      *(_BYTE*)(v21 + 44) = 0;
      v40_.v40 = 49;
      v40_.v41 = 44;
      v40_.v42 = v21;
      *(_DWORD*)(v21 + 40) = -1618287216;
      *(_QWORD*)(v21 + 16) = 0xB383E3A783E3B782LL;
      *(_QWORD*)(v21 + 24) = 0xE3BE81E3A2ADE65FLL;
      *(_QWORD*)(v21 + 32) = 0x88E65FA89CE68A82LL;
      *(_QWORD*)v21 = 0x83E3A383E3AD82E3LL;
      *(_QWORD*)(v21 + 8) = 0xE3BC83E3A283E3A9LL;
      game_facility_14107c0_alt1((__int64)v43_.v43, (__int64)&v40_.v40);
      SceneCharacter_1401ce0(v3, v43_.v43);
      if ((v43_.v43[0] & 1) != 0 && v43_.v44 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v22, v43_.v44);
      }
      if ((v40_.v40 & 1) != 0 && v40_.v42 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v23, v40_.v42);
      }
      v24 = game_HashString((__int64)&GameData_1aef19c);
      if (v24 != 0) {
        v25 = *(_QWORD*)(GameData_21f4010 + 96);
        if (v25 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
          v27 = v25 - 1;
          if ((v25 & (v25 - 1)) != 0) {
            v28 = v24;
            if (v24 >= v25) {
              v28 = v24 % v25;
            }
          }
          else {
            v28 = v27 & v24;
          }
          v33 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v28);
          if (v33 != nullptr) {
            v30 = (_QWORD*)*v33;
            if (v30 != nullptr) {
              if ((v25 & v27) == 0) {
                while (1) {
                  v35 = v30[1];
                  if (v35 == v24) {
                    if (v30[2] == v24) {
                      goto LABEL_96;
                    }
                  }
                  else if ((v35 & v27) != v28) {
                    goto LABEL_102;
                  }
                  v30 = (_QWORD*)*v30;
                  if (v30 == nullptr) {
                    goto LABEL_102;
                  }
                }
              }
              do {
                v34 = v30[1];
                if (v34 == v24) {
                  if (v30[2] == v24) {
                  LABEL_96:
                    v36 = v30[3];
                    if (v36 != 0) {
                      v37 = *(_QWORD*)(v36 + 32);
                      if (v37 != 0) {
                        snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
                        snd_play_ff2d0(v37, v37, (__int64)v43_.v43, 0, 0x10001u,
                                       0, 0x0.0p+0f, 0x1.0000000000000p+0f);
                        snd_Fade_Destroy_Fade(v43_.v43);
                      }
                      else {
                        v40_.v40 = 0;
                        LODWORD(v40_.v41) = 0x2000;
                      }
                      if (GameData_224ae20 != 0) {
                        ((void (*)(__int64, __int64*,
                                   __int64))GameRoutine_1488300)(
                            GameData_224ae20, &v40_.v40, 1);
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v34 >= v25) {
                    v34 %= v25;
                  }
                  if (v34 != v28) {
                    break;
                  }
                }
                v30 = (_QWORD*)*v30;
              } while (v30 != nullptr);
            }
          }
        }
      }
    }
  LABEL_102:
    SceneCharacter_1401ce0(v3, GameData_2131368[0]);
    v38 = *(_QWORD*)(a1 + 368);
    v43_.v45 = nullptr;
    GameRoutine_1952d00(v38, 0, (__int64)v43_.v43);
    result = (__int64)v43_.v45;
    if (v43_.v45 == v43_.v43) {
      v39 = 32;
    }
    else {
      if (v43_.v45 == nullptr) {
        return result;
      }
      v39 = 40;
    }
    return (*(__int64 (**)(__int64))(*v43_.v45 + v39))((__int64)v43_.v45);
  }
  return result;
}

__int64 game_facility_anonymous_15ef8e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 i;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  struct {
    _QWORD v31[2];
    __int64 v32;
  } v31_;
  struct {
    _BYTE v33[16];
    __int64 v34;
  } v33_;

  v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v2 == 0) {
    v7 = *(_QWORD*)(a1 + 368);
    if ((*(_BYTE*)(v7 + 136) & 1) != 0) {
      return 0;
    }
    v8 = *(_QWORD**)(v7 + 96);
    *(_QWORD*)(v7 + 96) = 0;
    *(_BYTE*)(v7 + 136) = 1;
    if (v8 == (_QWORD*)(v7 + 64)) {
      v9 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_35;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
  LABEL_35:
    v20 = *(_QWORD*)(v7 + 112);
    v21 = *(_QWORD*)(v7 + 120);
    if (v20 == v21) {
      goto LABEL_50;
    }
    while (1) {
      v23 = *(_QWORD**)(v21 - 16);
      *(_QWORD*)(v21 - 16) = 0;
      if ((_QWORD*)(v21 - 48) == v23) {
        v24 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_39;
        }
        v24 = 40;
      }
      (*(void (**)(__int64))(*v23 + v24))((__int64)v23);
      v25 = *(_QWORD**)(v21 - 16);
      if ((_QWORD*)(v21 - 48) == v25) {
        v22 = 32;
      }
      else {
        if (v25 == nullptr) {
          goto LABEL_39;
        }
        v22 = 40;
      }
      (*(void (**)(__int64))(*v25 + v22))((__int64)v25);
    LABEL_39:
      v21 -= 64;
      if (v21 == v20) {
        goto LABEL_50;
      }
    }
  }
  v3 = *(_QWORD*)(v2 + 128);
  v4 = *(_QWORD*)(v2 + 136);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v5 != 0) {
      LABEL_5:
        if (*(float*)(*(_QWORD*)(a1 + 368) + 36LL) <
            *(float*)(*(_QWORD*)(a1 + 368) + 32LL)) {
          return 1;
        }
        v12 = *(_QWORD*)(v2 + 136);
        v13 = v2;
        if (v12 != 0) {
          v14 = *(_QWORD*)(v2 + 128);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          GameHr_1405080(v14);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
        }
        else {
          GameHr_1405080(*(_QWORD*)(v2 + 128));
        }
        v16 = fw_memory_g_heap_manager_ptr;
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
        *(_BYTE*)(v17 + 56) = 0;
        v31_.v31[0] = 65;
        v31_.v31[1] = 56;
        v31_.v32 = v17;
        *(_QWORD*)(v17 + 32) = 0x9BE55FA89CE68A82LL;
        *(_QWORD*)(v17 + 40) = 0xE39389E694ADE79ELL;
        *(_QWORD*)(v17 + 48) = 0x8A82E38788E5A181LL;
        *(_QWORD*)v17 = 0x83E3A383E3AD82E3LL;
        *(_QWORD*)(v17 + 8) = 0xE3BC83E3A283E3A9LL;
        *(_QWORD*)(v17 + 16) = 0xB383E3A783E3B782LL;
        *(_QWORD*)(v17 + 24) = 0xE3BE81E3A2ADE65FLL;
        game_facility_14107c0_alt1((__int64)v33_.v33, (__int64)v31_.v31);
        SceneCharacter_1401550(v13, (__int64)v33_.v33);
        if ((v33_.v33[0] & 1) != 0 && v33_.v34 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v33_.v34);
        }
        if ((v31_.v31[0] & 1) != 0 && v31_.v32 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19, v31_.v32);
        }
        return 0;
      }
    }
    else {
      v15 = v2;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v2 = v15;
      if (v5 != 0) {
        goto LABEL_5;
      }
    }
  }
  else if (*(_QWORD*)(v3 + 56) != 0) {
    goto LABEL_5;
  }
  v7 = *(_QWORD*)(a1 + 368);
  if ((*(_BYTE*)(v7 + 136) & 1) != 0) {
    return 0;
  }
  v10 = *(_QWORD**)(v7 + 96);
  *(_QWORD*)(v7 + 96) = 0;
  *(_BYTE*)(v7 + 136) = 1;
  if (v10 == (_QWORD*)(v7 + 64)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_49;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_49:
  v20 = *(_QWORD*)(v7 + 112);
  for (i = *(_QWORD*)(v7 + 120); i != v20; i -= 64) {
    v28 = *(_QWORD**)(i - 16);
    *(_QWORD*)(i - 16) = 0;
    if ((_QWORD*)(i - 48) == v28) {
      v29 = 32;
    }
    else {
      if (v28 == nullptr) {
        continue;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
    v30 = *(_QWORD**)(i - 16);
    if ((_QWORD*)(i - 48) == v30) {
      v27 = 32;
    }
    else {
      if (v30 == nullptr) {
        continue;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*v30 + v27))((__int64)v30);
  }
LABEL_50:
  *(_QWORD*)(v7 + 120) = v20;
  return 0;
}

void game_facility_anonymous_15efe00(__int64 a1)
{
  bool v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  const char* v6;
  _QWORD* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  void* v20;
  _BYTE* v21;
  char v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    char* v26;
    char gap32_[8];
    char v27;
    char gap41_[15];
    __int64 v28;
    char gap64_[8];
    char v29;
    char gap73_[15];
    __int64 v30;
    char v31;
    char gap97_[15];
    __int64 v32;
  } v24_;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    __int64 v35;
  } v33_;
  struct {
    _QWORD v36[2];
    const char* v37;
  } v36_;

  v2 = GameHr_14218c0(a1 + 240);
  v3 = msg_MessageManager_instance__ptr[0];
  if (v2) {
    v4 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    v5 = SceneCharacter_14020c0(v4);
    v6 = (const char*)&GameData_1aa5e80;
    v7 = v5;
  }
  else {
    v8 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    v7 = SceneCharacter_14020c0(v8);
    v6 = "m03";
  }
  SceneTalk_1497180((unsigned __int8*)&v24_.v24, (__int64)"Bird", 4u,
                    (__int64)v7, (__int64)v6, 3u, 1);
  if ((v24_.v24 & 1) != 0) {
    v9 = v24_.v26;
  }
  else {
    v9 = (char*)&v24_.v24 + 1;
  }
  if ((Registration_a4da40(*v3, (__int64)v9) & 1) != 0 &&
      ((v24_.v24 & 1) != 0 ? (v10 = v24_.v26) : (v10 = (char*)&v24_.v24 + 1),
       (fs_a51640(*v3, (__int64)v10, v10) & 1) != 0)) {
    if ((v24_.v24 & 1) != 0) {
      fw_text_String_CopyTerminated(&v33_.v33, (__int64)v24_.v26, v24_.v25);
    }
    else {
      v33_.v33 = v24_.v24;
      v33_.v34 = v24_.v25;
      v33_.v35 = (__int64)v24_.v26;
    }
  }
  else {
    LOWORD(v33_.v33) = 0;
  }
  v11 = v33_.v33;
  LOWORD(v33_.v33) = 0;
  v36_.v36[0] = v11;
  v36_.v36[1] = v33_.v34;
  v36_.v37 = (const char*)v33_.v35;
  if ((v24_.v31 & 1) != 0 && v24_.v32 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v24_.v32);
  }
  if ((v24_.v29 & 1) != 0 && v24_.v30 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  v24_.v30);
  }
  if ((v24_.v27 & 1) != 0 && v24_.v28 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v24_.v28);
  }
  if ((v24_.v24 & 1) != 0 && v24_.v26 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)v24_.v26);
  }
  v16 = v36_.v36[0] & 1;
  if ((v36_.v36[0] & 1) != 0) {
    v17 = v36_.v37;
  }
  else {
    v17 = (char*)v36_.v36 + 1;
  }
  if (*GameData_212d460[0] == 0 && v17 != nullptr) {
    v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         1376, 16, 0);
    GameRoutine_1130770(v18, v17, nullptr);
    v19 = *(_QWORD*)(a1 + 40);
    if (v19 != 0) {
      *(_QWORD*)(v19 + 48) = v18;
      *(_QWORD*)(v18 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v18;
    *(_QWORD*)(v18 + 24) = "talk::Seq";
    *(_QWORD*)(v18 + 32) = a1;
    *(_DWORD*)(v18 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v18 + 64) = 0;
    *(_QWORD*)(v18 + 72) = 24;
    *(_QWORD*)(v18 + 80) = 1;
    v20 = GameData_2130228;
    *(_QWORD*)(v18 + 8) = GameData_2130228;
    *(_QWORD*)(v18 + 16) = v20;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 136LL))(v18) & 1) != 0 &&
        (*(_WORD*)(v18 + 136) & 0x100) == 0) {
      *(_WORD*)(v18 + 136) |= 0x100u;
    }
    v21 = *(_BYTE**)(v18 + 32);
    v22 = v21[138];
    if (v22 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(*(_QWORD*)(v18 + 32));
      v22 = v21[138];
    }
    v21[138] = v22 + 1;
    *(_WORD*)(v18 + 136) |= 2u;
    v16 = v36_.v36[0] & 1;
  }
  if (v16 != 0 && v36_.v37 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v36_.v37);
  }
}

__int64 game_facility_anonymous_1722440(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  v2 = a1[42];
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20b1428, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    return 1;
  }
  v5 = *(_BYTE*)(v4 + 83);
  v6 = a1[107];
  GameData_2262bfc = v5;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 != 0 && (v8 = std___1___shared_weak_count_lock(v6)) != 0) {
    v9 = v8;
    v10 = a1[106];
    v11 = fw_memory_HeapManager_Allocate(*v7, 1120, 16, 0);
    v12 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v25_.v25 = v10;
    v25_.v26 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = fw_memory_HeapManager_Allocate(*v7, 1120, 16, 0);
    v9 = 0;
    v25_.v25 = 0;
    v25_.v26 = 0;
    v12 = 1;
  }
  GameRoutine_1661600(v11, v5, 2, &v25_.v25);
  v14 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  *(_BYTE*)(v11 + 1104) = 0;
  *(_QWORD*)v11 = game_facility_anonymous_ProcPartSelect_vtable;
  *(_QWORD*)(v11 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20b1a40;
  v15 = a1[5];
  *(_QWORD*)(v11 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20b1970;
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v11;
    *(_QWORD*)(v11 + 56) = a1[5];
  }
  a1[5] = v11;
  *(_QWORD*)(v11 + 24) = "ProcPartSelect";
  *(_QWORD*)(v11 + 32) = a1;
  *(_DWORD*)(v11 + 140) = (unsigned int)game_HashString32("ProcPartSelect");
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 24;
  *(_QWORD*)(v11 + 80) = 1;
  v16 = GameData_212c730;
  *(_QWORD*)(v11 + 8) = GameData_212c730;
  *(_QWORD*)(v11 + 16) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11) & 1) != 0 &&
      (*(_WORD*)(v11 + 136) & 0x100) == 0) {
    *(_WORD*)(v11 + 136) |= 0x100u;
  }
  v17 = *(_BYTE**)(v11 + 32);
  v18 = v17[138];
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*(_QWORD*)(v11 + 32));
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v11 + 136) |= 2u;
  if ((v12 & 1) != 0) {
    v20 = *(_QWORD**)(v11 + 256);
    v19 = *(_QWORD**)(v11 + 264);
    *(_QWORD*)(v11 + 336) = 0;
    while (v20 != v19) {
      if (*v20 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v20 + 8LL))(*v20);
        v19 = *(_QWORD**)(v11 + 264);
      }
      ++v20;
    }
    v23 = *(_QWORD*)(v11 + 344);
    if (v23 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
      *(_QWORD*)(v11 + 344) = 0;
    }
    *(_QWORD*)(v11 + 264) = *(_QWORD*)(v11 + 256);
    *(_QWORD*)(v11 + 240) = *(_QWORD*)(v11 + 232);
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1024LL))(v11);
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1032LL))(v11);
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    v22 = *(_QWORD**)(v11 + 256);
    v21 = *(_QWORD**)(v11 + 264);
    *(_QWORD*)(v11 + 336) = 0;
    while (v22 != v21) {
      if (*v22 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v22 + 8LL))(*v22);
        v21 = *(_QWORD**)(v11 + 264);
      }
      ++v22;
    }
    v24 = *(_QWORD*)(v11 + 344);
    if (v24 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
      *(_QWORD*)(v11 + 344) = 0;
    }
    *(_QWORD*)(v11 + 264) = *(_QWORD*)(v11 + 256);
    *(_QWORD*)(v11 + 240) = *(_QWORD*)(v11 + 232);
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1024LL))(v11);
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1032LL))(v11);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  snd_Fade_Fade_10c830((__int64)&v25_.v25, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                 (__int64)&v25_.v25, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&v25_.v25);
  return 9;
}

__int64 game_facility_anonymous_19293e0(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char** v18;
  __int64 v19;
  __int64 (*v20)();
  char v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  char* v28;
  __int64* v30;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;
  struct {
    __int64 (*v33[4])();
    __int64 (**v34)();
  } v33_;
  const char* v35;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
    __int64 v38;
    __int64 v39;
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
    int v50;
    int v51;
  } v36_;

  v2 = GameData_212dcd0;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  v3 = *(__int64**)(a1 + 1184);
  v4 = *(__int64**)(a1 + 1192);
  while (v3 != v4) {
    v5 = *v3++;
    GameHr_928b80((_QWORD*)*v2, v5);
  }
  v35 = "MID_TheaterActMenu_Confirm";
  v36_.v36[0] = GameData_2113918;
  v31_.v32 = v31_.v31;
  v36_.v37 = v36_.v36;
  v33_.v34 = v33_.v33;
  v33_.v33[0] = (__int64 (*)())GameData_2113998;
  v31_.v31[0] = GameData_2113998;
  v6 = GameRoutine_13fa790(a1, (__int64)&v35, (__int64)v36_.v36,
                           (__int64)v33_.v33, (__int64)v31_.v31);
  if (v31_.v32 == v31_.v31) {
    v7 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_8;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v31_.v32 + v7))((__int64)v31_.v32);
LABEL_8:
  if (v33_.v34 == v33_.v33) {
    v8 = 32;
  }
  else {
    if (v33_.v34 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v33_.v34 + v8))((__int64)v33_.v34);
LABEL_13:
  if (v36_.v37 == v36_.v36) {
    v9 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v36_.v37 + v9))((__int64)v36_.v37);
LABEL_18:
  v33_.v34 = v33_.v33;
  v36_.v37 = v36_.v36;
  v33_.v33[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v33_.v33[1] = game_sound_PlayDecideLightSe_ptr[0];
  v36_.v36[0] = GameData_212d2b8 + 2;
  v36_.v36[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v36_.v36, v6 + 144);
  if (v36_.v37 == v36_.v36) {
    v10 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_23;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v36_.v37 + v10))((__int64)v36_.v37);
LABEL_23:
  if (v33_.v34 == v33_.v33) {
    v11 = 32;
  }
  else {
    if (v33_.v34 == nullptr) {
      goto LABEL_28;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))((char*)*v33_.v34 + v11))((__int64)v33_.v34);
LABEL_28:
  v12 = *(unsigned int*)(*v2 + 8);
  if ((v12 & 0x80000000) == 0) {
    v13 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cc40[0] + 64LL) + 8 * v12);
    if (v13 != 0) {
      v14 = *(const char**)(v13 + 48);
      if (v14 != nullptr) {
        GameRoutine_60a020((__int64)(v6 + 187), v14);
      }
      *((_DWORD*)v6 + 394) = 1;
      v15 = *(_QWORD*)(*v2 + 48);
      v16 = *(_QWORD*)(*v2 + 56);
      if ((int)((unsigned __int64)(v16 - v15) >> 3) >= 1) {
        v17 = 0;
        v30 = GameData_212e348 + 2;
        v18 = msg_MessageManager_empty_text__ptr;
        while (v17 < (v16 - v15) >> 3) {
          v19 = *(_QWORD*)(v15 + 8 * v17);
          if (v19 == 0) {
            goto LABEL_39;
          }
          v20 = *(__int64 (**)(void))(v19 + 392);
          v21 = 0;
        LABEL_40:
          v33_.v33[0] = v20;
          v22 = GameHr_13e4ce0(v13, v33_.v33, v17);
          v23 = **(_QWORD**)(*(_QWORD*)(v13 + 40) + 40LL);
          v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 40) + 40LL) + 8LL) - v23;
          if ((__int64)v17 >= (int)((unsigned __int64)v24 >> 3)) {
            goto LABEL_47;
          }
          if (v17 >= v24 >> 3) {
            GameRoutine_13eb280();
          }
          v25 = *(_QWORD*)(v23 + 8 * v17);
          if (v25 != 0 && (v26 = *(const char**)(v25 + 56)) != nullptr &&
              *v26 != 0) {
            v36_.v38 = -1;
            v36_.v39 = -1;
            v36_.v40 = -1;
            v36_.v41 = -1;
            v36_.v42 = -1;
            v36_.v43 = -1;
            v36_.v44 = -1;
            v36_.v45 = -1;
            v27 = *msg_MessageManager_instance__ptr[0];
            v36_.v46 = -1;
            v36_.v47 = -1;
            v36_.v48 = -1;
            v36_.v49 = -1;
            v36_.v51 = 0;
            v36_.v36[0] = v30;
            v36_.v36[1] = 0xFFFF0001FFFF0000LL;
            v36_.v36[2] = 0xFFFF0004FFFF0002LL;
            v36_.v36[3] = 0xFFFF0006FFFF0005LL;
            v36_.v50 = 8;
            v36_.v37 = (_QWORD*)0xFFFF0008FFFF0007LL;
            v28 = GameRoutine_a4dbe0(v27, v26, 0);
            if ((v21 & 1) == 0) {
              goto LABEL_48;
            }
          }
          else {
          LABEL_47:
            v28 = *v18;
            if ((v21 & 1) == 0) {
            LABEL_48:
              game_16ad210((__int64)v6, *(_QWORD*)(v19 + 392), v22, v28);
            }
          }
          ++v17;
          v15 = *(_QWORD*)(*v2 + 48);
          v16 = *(_QWORD*)(*v2 + 56);
          if ((__int64)v17 >= (int)((unsigned __int64)(v16 - v15) >> 3)) {
            return 12;
          }
        }
        v19 = 0;
      LABEL_39:
        v20 = nullptr;
        v21 = 1;
        goto LABEL_40;
      }
    }
  }
  return 12;
}

__int64 game_facility_anonymous_192f7c0(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  unsigned __int8 v5;
  unsigned __int64* v6;
  __int64 v7;
  int v8;
  __int64* v9;
  unsigned __int8 v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  unsigned int v17;
  _BYTE* v18;
  bool v19;
  char v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  signed int v24;
  const char* v25;
  char* v26;
  __int64 v27;
  const char* v28;
  char* v29;
  const char* v30;
  __int64* v31;
  const char* v32;
  __int64 v33;
  char* v34;
  const char* v35;
  __int64 v36;
  char v37;
  __int64*** v38;
  __int64** v39;
  unsigned __int64 v40;
  __int64* v41;
  const char* v42;
  char v43;
  __int64 v44;
  int v45;
  const char* v46;
  char v47;
  char* v48;
  __int64 v49;
  const char* v50;
  char v51;
  __int64 v52;
  __int64* v53;
  const char* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  const char* v58;
  char* v59;
  __int64* v60;
  const char* v61;
  __int64 v62;
  char* v63;
  const char* v64;
  char v65;
  __int64 v66;
  __int64* v67;
  const char* v68;
  signed int v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  unsigned __int8 v77;
  unsigned __int64* v78;
  __int64 v79;
  int v80;
  __int64* v81;
  __int64* v82;
  int v83;
  __int64* v84;
  int v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  char* v97;
  __int64 v98;
  __int64 v99;
  __int64*** v100;
  __int64** v101;
  unsigned __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  char* v106;
  __int64 v107;
  __int64 v108;
  struct {
    __int64* v109;
    __int64 v110;
    unsigned __int64 v111;
    unsigned __int64 v112;
    int v113;
    int v114;
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
    __int64 v125;
    __int64 v126;
    __int64 v127;
  } v109_;

  result = *(_QWORD*)(a1 + 56);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v3 = *(__int64**)(a1 + 48);
  v4 = result;
  if (v3 == nullptr) {
    goto LABEL_166;
  }
  v5 = *(_BYTE*)(a1 + 96);
  v6 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v5);
  if (*v6 != 0 && game_GameModeData_instance_ != 0 &&
      (v7 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v6)) != 0) {
    v8 = *(_DWORD*)(v7 + 32);
  }
  else {
    v8 = 0;
  }
  v9 = GameRoutine_9db8a0(v5, v8);
  v10 = *(_BYTE*)(a1 + 96);
  v11 = (__int64)v9;
  v12 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v10);
  if (*v12 != 0 && game_GameModeData_instance_ != 0 &&
      (v13 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v12)) != 0) {
    v14 = *(_DWORD*)(v13 + 32);
  }
  else {
    v14 = 0;
  }
  v15 = GameRoutine_9db8a0(v10, v14);
  if (v15 != nullptr) {
    v16 = *(_QWORD*)(v15[3] + 16);
    if (v11 == 0) {
      goto LABEL_59;
    }
  LABEL_16:
    if (v16 == 0) {
      goto LABEL_59;
    }
    v17 = *(unsigned __int8*)(v11 + 58);
    v18 = *(_BYTE**)(v16 + 40);
    v19 = *(unsigned __int8*)(v16 + 58) < v17;
    v20 = v18 != nullptr && *v18 != 0;
    v24 = *(unsigned __int16*)(v16 + 60);
    v25 = *(const char**)(v11 + 40);
    if (v25 != nullptr) {
      if (strstr(v25, "Ratio") != 0) {
        v26 = game_util_Format("%d", v17);
      }
      else {
        v31 = msg_MessageManager_instance__ptr[0];
        GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v17, 0);
        v32 = *(const char**)(v11 + 40);
        v33 = *v31;
        v109_.v115 = -1;
        v109_.v116 = -1;
        v109_.v117 = -1;
        v109_.v118 = -1;
        v109_.v119 = -1;
        v109_.v120 = -1;
        v109_.v121 = -1;
        v109_.v122 = -1;
        v109_.v123 = -1;
        v109_.v124 = -1;
        v109_.v125 = -1;
        v109_.v126 = -1;
        v109_.v109 = GameData_212e348 + 2;
        v109_.v110 = 0xFFFF0001FFFF0000LL;
        v109_.v111 = 0xFFFF0004FFFF0002LL;
        v109_.v112 = 0xFFFF0006FFFF0005LL;
        v109_.v127 = 8;
        v109_.v113 = -65529;
        v109_.v114 = -65528;
        v26 = GameRoutine_a4dbe0(v33, v32, 0);
      }
      v27 = (__int64)v26;
      v28 = *(const char**)(v16 + 40);
      if (v28 != nullptr) {
      LABEL_33:
        if (strstr(v28, "Ratio") != 0) {
          v34 = game_util_Format("%d", *(unsigned __int8*)(v16 + 58));
        }
        else {
          GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                        *(unsigned __int8*)(v16 + 58), 0);
          v35 = *(const char**)(v16 + 40);
          v109_.v115 = -1;
          v109_.v116 = -1;
          v109_.v117 = -1;
          v109_.v118 = -1;
          v36 = *msg_MessageManager_instance__ptr[0];
          v109_.v119 = -1;
          v109_.v120 = -1;
          v109_.v121 = -1;
          v109_.v122 = -1;
          v109_.v123 = -1;
          v109_.v124 = -1;
          v109_.v125 = -1;
          v109_.v126 = -1;
          v109_.v109 = GameData_212e348 + 2;
          v109_.v110 = 0xFFFF0001FFFF0000LL;
          v109_.v111 = 0xFFFF0004FFFF0002LL;
          v109_.v112 = 0xFFFF0006FFFF0005LL;
          v109_.v127 = 8;
          v109_.v113 = -65529;
          v109_.v114 = -65528;
          v34 = GameRoutine_a4dbe0(v36, v35, 0);
        }
        v29 = v34;
        v30 = *(const char**)(v11 + 40);
        if (v30 != nullptr) {
        LABEL_37:
          if (strstr(v30, "Ratio") != 0) {
            v37 = 1;
          LABEL_40:
            game_facility_anonymous_1930f40(a1, v3, v20, v27, v29, v37);
            goto LABEL_92;
          }
        }
      LABEL_39:
        v37 = 0;
        goto LABEL_40;
      }
    }
    else {
      v27 = 0;
      v28 = *(const char**)(v16 + 40);
      if (v28 != nullptr) {
        goto LABEL_33;
      }
    }
    v29 = nullptr;
    v30 = *(const char**)(v11 + 40);
    if (v30 == nullptr) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_64;
  }
  v21 = *(unsigned __int8*)(a1 + 96);
  v22 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v23 = *(unsigned __int8*)(a1 + 96);
    if (GameData_21f8458 <= v21) {
      v23 = (unsigned int)v21 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v23 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v21;
  }
  v38 = *(__int64****)(GameData_21f8450 + 8 * v23);
  if (v38 == nullptr) {
    goto LABEL_64;
  }
  v39 = *v38;
  if (v39 == nullptr) {
    goto LABEL_64;
  }
  if ((GameData_21f8458 & v22) == 0) {
    while (1) {
      v41 = v39[1];
      if (v41 == (__int64*)v21) {
        if (*((unsigned __int8*)v39 + 16) == (_DWORD)v21) {
          goto LABEL_58;
        }
      }
      else if (((unsigned __int64)v41 & v22) != v23) {
        goto LABEL_64;
      }
      v39 = (__int64**)*v39;
      if (v39 == nullptr) {
        goto LABEL_64;
      }
    }
  }
  while (1) {
    v40 = (unsigned __int64)v39[1];
    if (v40 == v21) {
      break;
    }
    if (v40 >= GameData_21f8458) {
      v40 %= (unsigned __int64)GameData_21f8458;
    }
    if (v40 != v23) {
      goto LABEL_64;
    }
  LABEL_47:
    v39 = (__int64**)*v39;
    if (v39 == nullptr) {
      goto LABEL_64;
    }
  }
  if (*((unsigned __int8*)v39 + 16) != (_DWORD)v21) {
    goto LABEL_47;
  }
LABEL_58:
  v16 = (__int64)v39[3];
  if (v11 != 0) {
    goto LABEL_16;
  }
LABEL_59:
  if (v16 == 0) {
  LABEL_64:
    if (v11 != 0) {
      v46 = *(const char**)(v11 + 40);
      if (v46 != nullptr) {
        v47 = *v46 != 0;
        if (strstr(v46, "Ratio") != 0) {
          v48 = game_util_Format("%d", *(unsigned __int8*)(v11 + 58));
        }
        else {
          v48 = GameHr_9dc060(v11);
        }
      }
      else {
        v47 = 0;
        v48 = GameHr_9dc060(v11);
      }
      v49 = (__int64)v48;
      v50 = *(const char**)(v11 + 40);
      v51 = v50 != nullptr && strstr(v50, "Ratio") != 0;
      game_facility_anonymous_1930f40(a1, v3, v47, v49, nullptr, v51);
      v19 = true;
      v24 = 0;
    }
    else {
      v19 = false;
      v24 = 0;
    }
    goto LABEL_92;
  }
  v24 = *(unsigned __int16*)(v16 + 60);
  v42 = *(const char**)(v16 + 40);
  if (v42 != nullptr) {
    v43 = *v42 != 0;
    if (strstr(v42, "Ratio") != 0) {
      v44 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 8LL);
      if (v44 != 0) {
        v45 = *(unsigned __int8*)(v44 + 58);
      }
      else {
        v45 = 0;
      }
      v56 = game_util_Format("%d", v45);
    LABEL_82:
      v57 = (__int64)v56;
      v58 = *(const char**)(v16 + 40);
      if (v58 != nullptr) {
        goto LABEL_83;
      }
    LABEL_89:
      v63 = nullptr;
      goto LABEL_90;
    }
  }
  else {
    v43 = 0;
  }
  v52 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 8LL);
  if (v52 == 0) {
    v56 = GameHr_9dc130(v16, 0);
    goto LABEL_82;
  }
  if (*(_QWORD*)(v52 + 40) != 0) {
    v53 = msg_MessageManager_instance__ptr[0];
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                  *(unsigned __int8*)(v52 + 58), 0);
    v54 = *(const char**)(v52 + 40);
    v55 = *v53;
    v109_.v115 = -1;
    v109_.v116 = -1;
    v109_.v117 = -1;
    v109_.v118 = -1;
    v109_.v119 = -1;
    v109_.v120 = -1;
    v109_.v121 = -1;
    v109_.v122 = -1;
    v109_.v123 = -1;
    v109_.v124 = -1;
    v109_.v125 = -1;
    v109_.v126 = -1;
    v109_.v109 = GameData_212e348 + 2;
    v109_.v110 = 0xFFFF0001FFFF0000LL;
    v109_.v111 = 0xFFFF0004FFFF0002LL;
    v109_.v112 = 0xFFFF0006FFFF0005LL;
    v109_.v127 = 8;
    v109_.v113 = -65529;
    v109_.v114 = -65528;
    v56 = GameRoutine_a4dbe0(v55, v54, 0);
    goto LABEL_82;
  }
  v57 = 0;
  v58 = *(const char**)(v16 + 40);
  if (v58 == nullptr) {
    goto LABEL_89;
  }
LABEL_83:
  if (strstr(v58, "Ratio") != 0) {
    v59 = game_util_Format("%d", *(unsigned __int8*)(v16 + 58));
  }
  else {
    v60 = msg_MessageManager_instance__ptr[0];
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                  *(unsigned __int8*)(v16 + 58), 0);
    v61 = *(const char**)(v16 + 40);
    v62 = *v60;
    v109_.v115 = -1;
    v109_.v116 = -1;
    v109_.v117 = -1;
    v109_.v118 = -1;
    v109_.v119 = -1;
    v109_.v120 = -1;
    v109_.v121 = -1;
    v109_.v122 = -1;
    v109_.v123 = -1;
    v109_.v124 = -1;
    v109_.v125 = -1;
    v109_.v126 = -1;
    v109_.v109 = GameData_212e348 + 2;
    v109_.v110 = 0xFFFF0001FFFF0000LL;
    v109_.v111 = 0xFFFF0004FFFF0002LL;
    v109_.v112 = 0xFFFF0006FFFF0005LL;
    v109_.v127 = 8;
    v109_.v113 = -65529;
    v109_.v114 = -65528;
    v59 = GameRoutine_a4dbe0(v62, v61, 0);
  }
  v63 = v59;
  v64 = *(const char**)(v16 + 40);
  if (v64 != nullptr) {
    v65 = strstr(v64, "Ratio") != 0;
  }
  else {
  LABEL_90:
    v65 = 0;
  }
  game_facility_anonymous_1930f40(a1, v3, v43, v57, v63, v65);
  v19 = false;
LABEL_92:
  LayoutAccessor_1560070((void*)(&v109_.v109), v3, "L_Cost");
  if (v109_.v110 == 0) {
    goto LABEL_106;
  }
  v66 = std___1___shared_weak_count_lock(v109_.v110);
  v67 = v109_.v109;
  if (v109_.v110 != 0) {
    std___1___shared_weak_count___release_weak(v109_.v110);
  }
  if (v66 == 0 || v67 == nullptr) {
    if (v66 != 0) {
      goto LABEL_105;
    }
    goto LABEL_106;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) != 0) {
    v68 = "Default";
  }
  else {
    v68 = "DisableDefault";
  }
  LayoutAccessor_1562cf0((__int64)v67, v68);
  if (v24 != 0) {
    v69 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v69 = *(_DWORD*)(game_GameModeData_instance_ + 80);
    }
    GameHr_16eb610((_QWORD*)a1, 3u, "L_Cost", (__int64)"Icon", (__int64)"T_Num",
                   v24, v69 < v24);
  }
  else {
    v90 = ui_LayoutAccessor_FindPane(v67, (__int64)"Icon");
    if (v90 != 0) {
      v91 = __dynamic_cast(v90, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v91 = 0;
    }
    v92 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
    v93 = 72;
    if ((v92 & 1) != 0) {
      v93 = 36;
    }
    if (v91 != 0) {
      v94 = *(_DWORD*)((char*)GameData_212da30 + v93);
      v95 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v91 + 88LL))(v91, 0);
      if (v95 != 0) {
        *(_DWORD*)(v95 + 12) = v94;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v91, 0, 7u,
                      "IconStock_Causation");
    }
    v109_.v115 = -1;
    v109_.v116 = -1;
    v109_.v117 = -1;
    v109_.v118 = -1;
    v96 = *msg_MessageManager_instance__ptr[0];
    v109_.v119 = -1;
    v109_.v120 = -1;
    v109_.v121 = -1;
    v109_.v122 = -1;
    v109_.v123 = -1;
    v109_.v124 = -1;
    v109_.v125 = -1;
    v109_.v126 = -1;
    v109_.v109 = GameData_212e348 + 2;
    v109_.v110 = 0xFFFF0001FFFF0000LL;
    v109_.v111 = 0xFFFF0004FFFF0002LL;
    v109_.v112 = 0xFFFF0006FFFF0005LL;
    v109_.v127 = 8;
    v109_.v113 = -65529;
    v109_.v114 = -65528;
    v97 = GameRoutine_a4dbe0(v96, "MID_Sys_ValueEmptyLong", 0);
    if (v97 != nullptr) {
      v98 = (__int64)v97;
      v99 = ui_LayoutAccessor_FindTextBox(v67, (__int64)"T_Num");
      if (v99 != 0) {
        GameRoutine_156c5d0(v99, v98, 0);
      }
    }
  }
LABEL_105:
  if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_106:
    if (v19) {
      goto LABEL_107;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak(v66);
    if (v19) {
    LABEL_107:
      LayoutAccessor_1562cf0((__int64)v3, "Cost_Off");
      v109_.v115 = -1;
      v109_.v116 = -1;
      v109_.v117 = -1;
      v109_.v118 = -1;
      v70 = *msg_MessageManager_instance__ptr[0];
      v109_.v119 = -1;
      v109_.v120 = -1;
      v109_.v121 = -1;
      v109_.v122 = -1;
      v109_.v123 = -1;
      v109_.v124 = -1;
      v109_.v125 = -1;
      v109_.v126 = -1;
      v109_.v109 = GameData_212e348 + 2;
      v109_.v110 = 0xFFFF0001FFFF0000LL;
      v109_.v111 = 0xFFFF0004FFFF0002LL;
      v109_.v112 = 0xFFFF0006FFFF0005LL;
      v109_.v127 = 8;
      v109_.v113 = -65529;
      v109_.v114 = -65528;
      v71 = GameRoutine_a4dbe0(v70, "MID_CausationMenu_Opened", 0);
      if (v71 != nullptr) {
        v72 = (__int64)v71;
        v73 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Annotation");
        if (v73 != 0) {
          GameRoutine_156c5d0(v73, v72, 0);
        }
      }
      v74 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      goto LABEL_111;
    }
  }
  v77 = *(_BYTE*)(a1 + 96);
  v78 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v77);
  if (*v78 != 0 && game_GameModeData_instance_ != 0 &&
      (v79 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v78)) != 0) {
    v80 = *(_DWORD*)(v79 + 32);
  }
  else {
    v80 = 0;
  }
  v81 = GameRoutine_9db8a0(v77, v80);
  if (v81 != nullptr) {
    v82 = *(__int64**)(v81[3] + 16);
    if (v82 == nullptr) {
      goto LABEL_162;
    }
    goto LABEL_122;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_162;
  }
  v87 = *(unsigned __int8*)(a1 + 96);
  v88 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v89 = *(unsigned __int8*)(a1 + 96);
    if (GameData_21f8458 <= v87) {
      v89 = (unsigned int)v87 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v89 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v87;
  }
  v100 = *(__int64****)(GameData_21f8450 + 8 * v89);
  if (v100 == nullptr || (v101 = *v100) == nullptr) {
  LABEL_162:
    LayoutAccessor_1562cf0((__int64)v3, "Cost_On");
    goto LABEL_163;
  }
  if ((GameData_21f8458 & v88) == 0) {
    while (1) {
      v103 = v101[1];
      if (v103 == (__int64*)v87) {
        if (*((unsigned __int8*)v101 + 16) == (_DWORD)v87) {
          goto LABEL_173;
        }
      }
      else if (((unsigned __int64)v103 & v88) != v89) {
        goto LABEL_162;
      }
      v101 = (__int64**)*v101;
      if (v101 == nullptr) {
        goto LABEL_162;
      }
    }
  }
  while (2) {
    v102 = (unsigned __int64)v101[1];
    if (v102 != v87) {
      if (v102 >= GameData_21f8458) {
        v102 %= (unsigned __int64)GameData_21f8458;
      }
      if (v102 != v89) {
        goto LABEL_162;
      }
    }
    else if (*((unsigned __int8*)v101 + 16) == (_DWORD)v87) {
    LABEL_173:
      v82 = v101[3];
      if (v82 == nullptr) {
        goto LABEL_162;
      }
    LABEL_122:
      v83 = *((unsigned __int8*)v82 + 59);
      if (*((_BYTE*)v82 + 59) == 0) {
        goto LABEL_162;
      }
      v84 = GameVariable_82e4d0(1);
      v85 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v86 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v84);
        if (v86 != 0) {
          v85 = *(_DWORD*)(v86 + 32);
        }
        else {
          v85 = 0;
        }
      }
      if (v85 >= v83) {
        goto LABEL_162;
      }
      LayoutAccessor_1562cf0((__int64)v3, "Cost_Off");
      v109_.v115 = -1;
      v109_.v116 = -1;
      v109_.v117 = -1;
      v109_.v118 = -1;
      v105 = *msg_MessageManager_instance__ptr[0];
      v109_.v119 = -1;
      v109_.v120 = -1;
      v109_.v121 = -1;
      v109_.v122 = -1;
      v109_.v123 = -1;
      v109_.v124 = -1;
      v109_.v125 = -1;
      v109_.v126 = -1;
      v109_.v109 = GameData_212e348 + 2;
      v109_.v110 = 0xFFFF0001FFFF0000LL;
      v109_.v111 = 0xFFFF0004FFFF0002LL;
      v109_.v112 = 0xFFFF0006FFFF0005LL;
      v109_.v127 = 8;
      v109_.v113 = -65529;
      v109_.v114 = -65528;
      v106 = GameRoutine_a4dbe0(v105, "MID_CausationMenu_NotCondition", 0);
      if (v106 != nullptr) {
        v107 = (__int64)v106;
        v108 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Annotation");
        if (v108 != 0) {
          GameRoutine_156c5d0(v108, v107, 0);
        }
      }
      v74 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)GameData_212da30);
    LABEL_111:
      v75 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Annotation");
      if (v75 != 0) {
        v76 = Pane_58f8a0(v75);
        if (v76 != 0) {
          *(_DWORD*)(v76 + 12) = v74;
        }
      }
    LABEL_163:
      v104 = ui_LayoutAccessor_FindAlignment(v3, "A_Txt");
      if (v104 != 0) {
        Alignment_56b600(v104);
      }
      game_facility_anonymous_1930ce0(a1);
      result = game_19307a0(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
    LABEL_166:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
      return result;
    }
    v101 = (__int64**)*v101;
    if (v101 == nullptr) {
      goto LABEL_162;
    }
    continue;
  }
}

void game_facility_anonymous_197ce40(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11[3];

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  GameRoutine_fa6720(v3, (__int64)"TrainingMenu");
  *v3 = game_facility_anonymous_ProcTrainingKindMenu_vtable;
  v3[22] = game_menu_MenuInput_InputUnknown00_ptr_211c718;
  v3[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_211c7e8;
  *(_DWORD*)(*GameData_212dcd0 + 8) = -1;
  ProcInst_657850((__int64)v3, (__int64)GameData_212c730,
                  "ProcTrainingKindMenu", 1, a1);
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_941ce0((void*)(v11), v4);
  v5 = v11[0];
  if (v11[1] == v11[0]) {
    if (v11[0] == 0) {
      return;
    }
  }
  else {
    v6 = (v11[1] - v11[0]) >> 3;
    v7 = (__int64*)v11[0];
    do {
      v8 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      v9 = *v7++;
      *(_WORD*)(v8 + 16) = 0;
      *(_DWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_BYTE*)(v8 + 82) = 1;
      *(_QWORD*)v8 = game_facility_anonymous_TrainingKindMenuItem_vtable;
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 88) = v9;
      BasicMenuCursor_16e0c00(v3, v8);
      --v6;
    } while (v6 != 0);
  }
  v10 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v10, v5);
}

void game_facility_anonymous_19e2fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  *(_QWORD*)a1 = GameData_21230b0;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2123548;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2123618;
  Impl_717b40();
  if ((*(_BYTE*)(a1 + 1584) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1600);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 1560) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1576);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  v6 = *(_QWORD*)(a1 + 1528);
  if (v6 != 0) {
    *(_QWORD*)(a1 + 1536) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v6);
  }
  v8 = *(_QWORD*)(a1 + 1496);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD**)(a1 + 1472);
  if (v9 == (_QWORD*)(a1 + 1440)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_22;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_22:
  v11 = *(_QWORD*)(a1 + 1408);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 1416) = v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v11);
  }
  v13 = *(_QWORD*)(a1 + 1352);
  if (v13 != 0) {
    *(_QWORD*)(a1 + 1360) = v13;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v13);
  }
  v15 = *(_QWORD*)(a1 + 1328);
  if (v15 != 0) {
    *(_QWORD*)(a1 + 1336) = v15;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v15);
  }
  v17 = *(_QWORD*)(a1 + 1304);
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = *(_QWORD**)(a1 + 1280);
  if (v18 == (_QWORD*)(a1 + 1248)) {
    v19 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_41;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
LABEL_41:
  v20 = *(_QWORD*)(a1 + 1216);
  if (v20 != 0) {
    *(_QWORD*)(a1 + 1224) = v20;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v20);
  }
  v22 = *(_QWORD*)(a1 + 1176);
  if (v22 != 0) {
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD**)(a1 + 1152);
  if (v23 == (_QWORD*)(a1 + 1120)) {
    v24 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_52;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))(*v23 + v24))((__int64)v23);
LABEL_52:
  v25 = *(_QWORD*)(a1 + 1088);
  if (v25 != 0) {
    *(_QWORD*)(a1 + 1096) = v25;
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v25);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

#pragma GCC visibility pop
