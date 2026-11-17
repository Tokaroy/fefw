#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void ui_control_1886f20(PSEUDO_X8, _QWORD*,
                                                   unsigned int, __int64);
__attribute__((swiftcall)) void ui_control_1888120(PSEUDO_X8, _QWORD*,
                                                   unsigned int, __int64);
__int64 Element_1885f00(__int64 result, __int64);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 GameHr_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char, char,
                       __int64, char, char, char);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_7992e0(__int64);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__n128 BattleArea_8b9d00(__int64);
char* ui_control_1886bc0(unsigned __int64*, int);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_204e698[])();
extern __int64 (*GameData_21046e0[])();
extern __int64 (*GameData_2104790[])();
extern __int64 (*GameData_2104810[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_2131a70[10];
extern __int64* GameData_2132090[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d238[2];
extern __int64 GameData_21319a0;
extern __int64 fw_memory_g_heap_manager_ptr;
void BattleSide_Destructor(_QWORD*);
void FloatingHelp_18ae010(__int64*, _QWORD*);
void FloatingHelp_18ae160(unsigned int, __int64, _QWORD*, _QWORD*, __int64*);
void GameHr_6c2b50(__int64);
void __attribute__((noreturn)) GameRoutine_18883b0();
void __attribute__((noreturn)) GameRoutine_60a210();
void game_map_790ba0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gameui_158ebe0(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4);
__attribute__((swiftcall)) void
game_gameui_18acd40_alt1(PSEUDO_X8 x8_, __int64 result, unsigned __int64** a2,
                         unsigned int a3, __int64* a4);
__int64 GameHr_15df820(__int64, _QWORD*, char);
__int64 game_gameui_UnitUtil_GetPrevDefault(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_gameui_15df6c0(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5);
__int64 game_gameui_15dfa40(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5);
_QWORD* FloatingHelp_18ae160_alt1(unsigned int, __int64, _QWORD*, _QWORD*,
                                  __int64*);
__attribute__((swiftcall)) void GameRoutine_15b71b0_alt1(PSEUDO_X8);
__int64 FloatingHelp_18ade60_alt1(__int64*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
char* ui_control_1886bc0_alt1(_QWORD*, int);
__attribute__((swiftcall)) void game_gameui_18acd40(PSEUDO_X8 x8_,
                                                    __int64 result, _QWORD** a2,
                                                    unsigned int a3,
                                                    __int64* a4);
__int64 game_gameui_UnitUtil_GetNextDefault(__int64, __int64, char);
__int64 game_gameui_UnitUtil_GetNextDefault_alt1(__int64, _QWORD*, char);
__int64 game_gameui_UnitUtil_GetPrevDefault_alt1(__int64, _QWORD*, char);

__int64 game_gameui_158ebe0(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  struct {
    char gap0_[32];
    _BYTE v35[32];
    _QWORD* v36;
    char gap72_[11304];
    __int64* v53;
    __int64 v54;
    _BYTE v55[416];
    int v56;
    char gap11812_[164];
    char v57;
    char v58;
    char gap11978_[6];
    int v59;
    char gap11988_[1632];
    int v60;
    int v61;
    bool v62;
  } f_;
  _QWORD v37[2];
  _QWORD v38[5];
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  _QWORD v47[95];
  _QWORD v48[95];
  _QWORD v49[1120];
  int v50;
  __int16 v51;
  _QWORD v52[2];

  f_.v62 = a3 != 0;
  {
    v8 = GameData_212c880[0];
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = ((*a2 >> 19) & 0x1F) + 1;
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = v9 * *(__int16*)(v10 + 330);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = v9 * *(__int16*)(v10 + 332);
    __asm__ volatile("" ::"r"(v12));
  }
  f_.v60 = v12;
  f_.v61 = v11;
  GameHr_6c2b50((__int64)f_.v55);
  GameRoutine_6c3980((__int64)f_.v55, a3);
  if (a3 != 0) {
    if (a4 != 0 && *(_QWORD*)(a3 + 408) == 0) {
      Unit_6dfe00((__int64)f_.v55, a4);
      if ((f_.v56 & 0x10000000) == 0) {
        f_.v56 |= 0x10000000u;
        game_6c51e0((__int64)f_.v55);
        GameRoutine_6c6da0((__int64)f_.v55);
        game_6c6ec0((__int64)f_.v55);
        f_.v56 &= ~0x10000000u;
      }
    }
    GameRoutine_790080((__int64)v37);
    if (HIBYTE(v51) != 0) {
      GameRoutine_7992e0((__int64)v38);
      GameRoutine_7992e0((__int64)v47);
      GameRoutine_7992e0((__int64)v48);
      GameRoutine_7992e0((__int64)v49);
      v50 = 0;
      v51 = 0;
      v52[0] = 0;
      *(_QWORD*)((char*)v52 + 6) = 0;
      BattleArea_8b9d00((__int64)&f_.v53);
      v13 = HIBYTE(v51) == 0;
    }
    else {
      v13 = true;
    }
    v38[3] = f_.v55;
    v43 = f_.v58;
    v44 = f_.v57;
    v42 = f_.v57;
    {
      v14 = *a2;
      __asm__ volatile("" ::"r"(v14));
    }
    v45 = f_.v58;
    v46 = f_.v59;
    v39 = -1;
    {
      v15 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (v14 & 0xFFF));
      __asm__ volatile("" ::"r"(v15));
    }
    if (!v13) {
      GameRoutine_7992e0((__int64)v38);
      GameRoutine_7992e0((__int64)v47);
      GameRoutine_7992e0((__int64)v48);
      GameRoutine_7992e0((__int64)v49);
      v50 = 0;
      v51 = 0;
      v52[0] = 0;
      *(_QWORD*)((char*)v52 + 6) = 0;
      BattleArea_8b9d00((__int64)&f_.v53);
    }
    v41 = v15;
    if (v15 != 0) {
      {
        v16 = *(_QWORD*)(v15 + 576);
        __asm__ volatile("" ::"r"(v16));
      }
      if (v16 != 0) {
        v40 = 0;
        {
          v17 = *(unsigned __int16*)(v16 + 16);
          __asm__ volatile("" ::"r"(v17));
        }
        HIDWORD(v40) = 1;
        LOWORD(v40) = v17;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v17) +
                      73LL) == 17) {
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          {
            v18 = game_map_MapRandom_instance__ptr[0];
            __asm__ volatile("" ::"r"(v18));
          }
          {
            v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            __asm__ volatile("" ::"r"(v19));
          }
          {
            v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            __asm__ volatile("" ::"r"(v20));
          }
          {
            v21 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            __asm__ volatile("" ::"r"(v21));
          }
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v18 + 1) = v19;
          v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) = v20;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 4) = v22;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          HIDWORD(v40) =
              HIDWORD(v40) & 0xFFFFC00F |
              (16 *
               (((16 * (v22 - 1000 * ((v22 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
    }
    LODWORD(v52[0]) |= 1u;
    game_map_790ba0((__int64)v37);
    HIBYTE(v51) |= 1u;
  }
  else {
    GameRoutine_790080((__int64)v37);
  }
  v23 = fw_memory_g_heap_manager_ptr;
  if (v12 >= 0) {
    v24 = v12;
  }
  else {
    v24 = -v12;
  }
  if (v11 >= 0) {
    v25 = v11;
  }
  else {
    v25 = -v11;
  }
  v26 = v24 > v25;
  v27 = 1;
  v28 = 5;
  if (v26) {
    v27 = 2;
    v28 = 6;
  }
  if (a3 != 0) {
    v29 = v27;
  }
  else {
    v29 = v28;
  }
  v30 = (_DWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  {
    v31 = *(_QWORD*)v23;
    __asm__ volatile("" ::"r"(v31));
  }
  *(_QWORD*)v30 = v29 | 0xA00000000LL;
  v32 = (_QWORD*)fw_memory_HeapManager_Allocate(v31, 48, 16, 0);
  f_.v36 = v32;
  *v32 = GameData_204e698;
  v32[1] = v38;
  v32[2] = &f_.v61;
  v32[3] = &f_.v60;
  v32[4] = &f_.v62;
  v32[5] = a2;
  GameHr_1586d80(a1, v30, v30 + 2, (__int64)f_.v35, 0, 0, 0, 0, 0, 0, 0);
  (*(void (**)(_QWORD*))(*v32 + 40LL))(v32);
  v33 = 128;
  if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
    v33 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v33, (__int64)v30);
  v37[0] = GameData_212d238[0] + 16;
  f_.v53 = GameData_212da50[0] + 2;
  if (f_.v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)f_.v54 + 8LL))(f_.v54);
    f_.v54 = 0;
  }
  v37[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(v49);
  BattleSide_Destructor(v48);
  BattleSide_Destructor(v47);
  BattleSide_Destructor(v38);
  return game_Unit_Destroy_Unit((__int64)f_.v55);
}

__int64 game_gameui_15df6c0(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _BYTE v18[32];
    _BYTE* v19;
  } v18_;
  struct {
    _BYTE v20[4];
    _BYTE v21[4];
  } v20_;
  __int64 v22;

  v6 = *(_QWORD*)(a1 + 32);
  v7 = *(_QWORD*)(a4 + 32);
  if (v6 != 0) {
    if (v7 != 0) {
      if (v7 == a4) {
        v18_.v19 = v18_.v18;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(
            v7, (__int64)v18_.v18);
      }
      else {
        v18_.v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
    }
    else {
      v18_.v19 = nullptr;
    }
    v11 = *(_QWORD*)(a1 + 32);
    v22 = a2;
    v20_.v21[0] = a3 & 1;
    v20_.v20[0] = a5 & 1;
    if (v11 == 0) {
      GameRoutine_60a310();
    }
    v12 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        *(_QWORD*)v11 + 48LL))(v11, (__int64)&v22, (__int64)v20_.v21,
                               (__int64)v18_.v18, (__int64)v20_.v20);
    v13 = v18_.v19;
    if (v18_.v19 != v18_.v18) {
      goto LABEL_12;
    }
  LABEL_17:
    v14 = 32;
    goto LABEL_18;
  }
  if (v7 != 0) {
    if (v7 == a4) {
      v16_.v17 = v16_.v16;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7,
                                                            (__int64)v16_.v16);
    }
    else {
      v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v16_.v17 = nullptr;
  }
  v12 = game_gameui_UnitUtil_GetNextDefault_alt1(a2, v16_.v16, a5 & 1);
  v13 = v16_.v17;
  if (v16_.v17 == v16_.v16) {
    goto LABEL_17;
  }
LABEL_12:
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  return v12;
}

__int64 game_gameui_15dfa40(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _BYTE v18[32];
    _BYTE* v19;
  } v18_;
  struct {
    _BYTE v20[4];
    _BYTE v21[4];
  } v20_;
  __int64 v22;

  v6 = *(_QWORD*)(a1 + 80);
  v7 = *(_QWORD*)(a4 + 32);
  if (v6 != 0) {
    if (v7 != 0) {
      if (v7 == a4) {
        v18_.v19 = v18_.v18;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(
            v7, (__int64)v18_.v18);
      }
      else {
        v18_.v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
    }
    else {
      v18_.v19 = nullptr;
    }
    v11 = *(_QWORD*)(a1 + 80);
    v22 = a2;
    v20_.v21[0] = a3 & 1;
    v20_.v20[0] = a5 & 1;
    if (v11 == 0) {
      GameRoutine_60a310();
    }
    v12 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        *(_QWORD*)v11 + 48LL))(v11, (__int64)&v22, (__int64)v20_.v21,
                               (__int64)v18_.v18, (__int64)v20_.v20);
    v13 = v18_.v19;
    if (v18_.v19 != v18_.v18) {
      goto LABEL_12;
    }
  LABEL_17:
    v14 = 32;
    goto LABEL_18;
  }
  if (v7 != 0) {
    if (v7 == a4) {
      v16_.v17 = v16_.v16;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7,
                                                            (__int64)v16_.v16);
    }
    else {
      v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v16_.v17 = nullptr;
  }
  v12 = game_gameui_UnitUtil_GetPrevDefault_alt1(a2, v16_.v16, a5 & 1);
  v13 = v16_.v17;
  if (v16_.v17 == v16_.v16) {
    goto LABEL_17;
  }
LABEL_12:
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  return v12;
}

__attribute__((swiftcall)) void game_gameui_18acd40(PSEUDO_X8 x8_,
                                                    __int64 result, _QWORD** a2,
                                                    unsigned int a3,
                                                    __int64* a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)(__int64);
  __int64 v24;
  __int64 (***v25)(__int64);
  __int64 (***v26)(__int64);
  __int64 (****v27)(__int64);
  __int64 v28;
  int v29;
  __int64 (***v30)(__int64);
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  __int64 (***v37)(__int64);
  bool v38;
  __int64 (***v39)(__int64);
  __int64 v40;
  __int64 (***v41)(__int64);
  char v42;
  __int64 v43;
  _QWORD* v44;
  __int64* v45;
  __int64 v46;
  __int64 (***v47)(__int64);
  __int64 (***v48)(__int64);
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v75;
  __int64 v76;
  __int64 (***v77)(__int64);
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 (***v82)(__int64);
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 (***v87)(__int64);
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 (***v94)(__int64);
  __int64 (***v95)(__int64);
  __int64 v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  _QWORD* v100;
  _QWORD* v101;
  __int64 (***v102)(__int64);
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 (**v107)(__int64);
  __int64 v108;
  __int64 v109;
  __int64 (***v110)(__int64);
  __int64 (***v111)(__int64);
  __int64 (***v112)(__int64);
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 (***v120)(__int64);
  unsigned __int64 v121;
  unsigned __int64 v122;
  __int64 (***v123)(__int64);
  __int64 v124;
  __int64 v125;
  __int64 (***v126)(__int64);
  __int64 (***v127)(__int64);
  signed __int64 v128;
  __int64 v129;
  __int64 (***v130)(__int64);
  signed __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 (**v135)(__int64);
  __int64 (***v136)(__int64);
  __int64 v137;
  __int64 (***v138)(__int64);
  __int64 (**v139)(__int64);
  unsigned __int64 v140;
  signed __int64 v141;
  __int64 (***v142)(__int64);
  __int64 (***v143)(__int64);
  unsigned __int64 v144;
  __int64 (***v145)(__int64);
  __int64 v146;
  __int64 (***v147)(__int64);
  __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD* v151;
  __int64 v152[2];
  struct {
    _QWORD v153[4];
    _QWORD* v154;
  } v153_;
  __int64 v155[2];
  struct {
    _QWORD* v156;
    __int64 v157;
  } v156_;
  struct {
    __int64 v158;
    __int64 v159;
  } v158_;
  struct {
    char v160[32];
    _QWORD* v161;
  } v160_;
  struct {
    __int64 v162;
    __int64 v163;
    char gap200_[4];
    char v164;
  } v162_;
  struct {
    _QWORD v165[4];
    _QWORD* v166;
  } v165_;
  struct {
    __int64 (**v167)(__int64);
    __int64 (**v168)(__int64);
  } v167_;
  struct {
    __int64 (**v169)(__int64);
    __int64 v170;
  } v169_;
  struct {
    _QWORD v171[4];
    _QWORD* v172;
  } v171_;
  struct {
    __int64 (***v173)(__int64);
    __int64 (***v174)(__int64);
  } v173_;
  struct {
    _QWORD v175[4];
    _QWORD* v176;
  } v175_;
  struct {
    __int64 (***v177)(__int64);
    __int64 (***v178)(__int64);
    unsigned __int64 v179;
  } v177_;
  struct {
    __int64 v180;
    __int64 v181;
  } v180_;
  struct {
    unsigned int v182;
    unsigned int v183;
  } v182_;

  v6 = *a2;
  v182_.v183 = a3;
  if (v6 == nullptr) {
    *a5 = 0;
    a5[1] = 0;
    {
      result;
      return;
    }
  }
  v7 = *(__int64**)(result + 192);
  v8 = *(__int64**)(result + 200);
  v11 = result;
  v151 = a5;
  if (v7 != v8) {
    do {
      v12 = *a2;
      v13 = v7[1];
      if (v13 != 0 && (v14 = std___1___shared_weak_count_lock(v13)) != 0) {
        v15 = *v7;
        v16 = v12[10];
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v15 == v16) {
            goto LABEL_15;
          }
        }
        else {
          v17 = v14;
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v17);
          if (v15 == v16) {
            goto LABEL_15;
          }
        }
      }
      else if (v12[10] == 0) {
        goto LABEL_15;
      }
      v7 += 8;
    } while (v7 != v8);
    v7 = v8;
  LABEL_15:
    a5 = v151;
    v8 = *(__int64**)(v11 + 200);
  }
  if (v7 != v8) {
    v18 = v7[6];
    if (v18 != 0) {
      LODWORD(v177_.v177) = v182_.v183;
      result = (*(__int64 (**)(__int64, __int64, __int64))(
          *(_QWORD*)v18 + 48LL))(v18, (__int64)a2, (__int64)&v177_.v177);
      if (*a5 != 0) {
        result;
        return;
      }
      v19 = a5[1];
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  v20 = v182_.v183;
  if (v182_.v183 != *(_DWORD*)(v11 + 248)) {
    goto LABEL_49;
  }
  v21 = *(_QWORD*)(v11 + 240);
  if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
    goto LABEL_49;
  }
  v173_.v173 = nullptr;
  v22 = std___1___shared_weak_count_lock(v21);
  v173_.v174 = (__int64 (***)(__int64))v22;
  if (v22 != 0 &&
      (v23 = (__int64 (***)(__int64))v22, v24 = *(_QWORD*)(v11 + 232),
       v173_.v173 = (__int64 (***)(__int64))v24, v24 != 0)) {
    v25 = v23;
    v26 = (__int64 (***)(__int64))__dynamic_cast(v24, GameData_21319a0,
                                                 GameData_2132090[0], -2);
    if (v26 != nullptr) {
      v27 = &v173_.v173;
      v177_.v177 = v26;
      v177_.v178 = v25;
    }
    else {
      v27 = &v177_.v177;
    }
    a5 = v151;
  }
  else {
    v27 = &v177_.v177;
  }
  *v27 = nullptr;
  v27[1] = nullptr;
  v28 = (__int64)v173_.v174;
  if (v173_.v174 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v173_.v174 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = (__int64)v177_.v177;
  if (v177_.v177 == nullptr) {
    v29 = 1;
    v30 = v177_.v178;
    if (v177_.v178 == nullptr) {
      goto LABEL_47;
    }
    goto LABEL_45;
  }
  result = (**v177_.v177)((__int64)v177_.v177);
  if ((result & 1) != 0) {
    result = *(_QWORD*)(v11 + 240);
    *a5 = 0;
    a5[1] = 0;
    if (result == 0) {
      v29 = 0;
      v30 = v177_.v178;
      if (v177_.v178 == nullptr) {
        goto LABEL_47;
      }
      goto LABEL_45;
    }
    result = std___1___shared_weak_count_lock(result);
    a5[1] = result;
    v29 = 0;
    if (result != 0) {
      *a5 = *(_QWORD*)(v11 + 232);
      v30 = v177_.v178;
      if (v177_.v178 == nullptr) {
        goto LABEL_47;
      }
    LABEL_45:
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*v30)[2]((__int64)v30);
        result = std___1___shared_weak_count___release_weak((__int64)v30);
      }
      goto LABEL_47;
    }
  }
  else {
    v29 = 1;
  }
  v30 = v177_.v178;
  if (v177_.v178 != nullptr) {
    goto LABEL_45;
  }
LABEL_47:
  if (v29 == 0) {
    result;
    return;
  }
  v20 = v182_.v183;
LABEL_49:
  v31 = a4[1];
  v182_.v182 = v20;
  v180_.v180 = 0;
  v180_.v181 = 0;
  if (v31 != 0 && *(_QWORD*)(v31 + 8) != -1) {
    v32 = *a4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                              memory_order_relaxed);
    v180_.v180 = v32;
    v180_.v181 = v31;
    goto LABEL_67;
  }
  v33 = &(*a2)[3 * (int)v20];
  v34 = *((unsigned __int8*)v33 + 928);
  v35 = v33[118];
  v36 = (char*)v33 + 929;
  v37 = (__int64 (***)(__int64))v33[117];
  v38 = (v34 & 1) == 0;
  v39 = (__int64 (***)(__int64))(v34 >> 1);
  if (v38) {
    v35 = (__int64)v36;
    v37 = v39;
  }
  v173_.v173 = (__int64 (***)(__int64))v35;
  v173_.v174 = v37;
  GameRoutine_15b71b0_alt1((void*)((__int64*)&v177_.v177));
  if (v177_.v178 == nullptr) {
    v40 = 0;
  LABEL_60:
    v41 = nullptr;
    v42 = 1;
    goto LABEL_61;
  }
  v40 = std___1___shared_weak_count_lock((__int64)v177_.v178);
  v41 = v177_.v177;
  if (v177_.v178 != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)v177_.v178);
  }
  if (v40 == 0) {
    goto LABEL_60;
  }
  v42 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                            memory_order_relaxed);
LABEL_61:
  v43 = v180_.v181;
  v180_.v180 = (__int64)v41;
  v180_.v181 = v40;
  if (v43 != 0) {
    std___1___shared_weak_count___release_weak(v43);
  }
  if ((v42 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v40);
  }
  v20 = v182_.v182;
LABEL_67:
  v44 = *a2;
  v175_.v175[0] = GameData_21046e0;
  v175_.v175[1] = FloatingHelp_18ade60_alt1;
  v175_.v176 = v175_.v175;
  ui_control_1886f20((void*)((__int64*)&v177_.v177), v44, v20,
                     (__int64)v175_.v175);
  if (v175_.v176 == v175_.v175) {
    v45 = v151;
    v46 = 32;
  }
  else {
    v45 = v151;
    if (v175_.v176 == nullptr) {
      goto LABEL_72;
    }
    v46 = 40;
  }
  (*(void (**)(__int64))(*v175_.v176 + v46))((__int64)v175_.v176);
LABEL_72:
  if (v177_.v177 == v177_.v178) {
    v89 = (*a2)[40];
    if (v89 != 0) {
      v90 = (_QWORD*)(*a2)[39];
      v91 = (*a2)[40];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v89 + 16), 1u,
                                memory_order_relaxed);
      v92 = std___1___shared_weak_count_lock(v91);
      std___1___shared_weak_count___release_weak(v89);
      if (v92 != 0 && v90 != nullptr) {
        v171_.v171[0] = GameData_21046e0;
        v171_.v171[1] = FloatingHelp_18ade60_alt1;
        v171_.v172 = v171_.v171;
        ui_control_1886f20((void*)((__int64*)&v173_.v173), v90, v182_.v182,
                           (__int64)v171_.v171);
        if (v171_.v172 == v171_.v171) {
          v45 = v151;
          v93 = 32;
        }
        else {
          v45 = v151;
          if (v171_.v172 == nullptr) {
          LABEL_257:
            v127 = v173_.v173;
            v126 = v173_.v174;
            if (v173_.v173 != v173_.v174) {
              v128 = (char*)v173_.v174 - (char*)v173_.v173;
              v129 = ((char*)v173_.v174 - (char*)v173_.v173) >> 4;
              if (v129 >= 1) {
                v130 = v177_.v178;
                if (v128 <= (__int64)(v177_.v179 - (_QWORD)v177_.v178)) {
                  do {
                    *v130 = *v127;
                    v135 = v127[1];
                    v130[1] = v135;
                    if (v135 != nullptr) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v135 + 1), 1u,
                          memory_order_relaxed);
                    }
                    v127 += 2;
                    v130 += 2;
                  } while (v127 != v126);
                  v177_.v178 = v130;
                }
                else {
                  v131 = (char*)v177_.v178 - (char*)v177_.v177;
                  v132 = v129 + (((char*)v177_.v178 - (char*)v177_.v177) >> 4);
                  if (v132 >> 60 != 0) {
                  LABEL_300:
                    GameRoutine_18883b0();
                  }
                  if ((__int64)(v177_.v179 - (_QWORD)v177_.v177) >> 3 > v132) {
                    v132 = (__int64)(v177_.v179 - (_QWORD)v177_.v177) >> 3;
                  }
                  if (v177_.v179 - (unsigned __int64)v177_.v177 >=
                      0x7FFFFFFFFFFFFFF0LL) {
                    v133 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v133 = v132;
                  }
                  if (v133 != 0) {
                    if (v133 >> 60 != 0) {
                    LABEL_301:
                      GameRoutine_60a210();
                    }
                    v134 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v133, 16,
                        0);
                  }
                  else {
                    v134 = 0;
                  }
                  v136 = (__int64 (***)(__int64))(v134 + v131);
                  v137 = (__int64)v136 + v128;
                  v138 = v136;
                  do {
                    *v138 = *v127;
                    v139 = v127[1];
                    v138[1] = v139;
                    if (v139 != nullptr) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v139 + 1), 1u,
                          memory_order_relaxed);
                    }
                    v138 += 2;
                    v127 += 2;
                  } while (v138 != (__int64 (***)(__int64))v137);
                  v140 = v134 + 16 * v133;
                  v141 = (char*)v177_.v178 - (char*)v130;
                  GameRoutine_1a0b950(v137, (__int64)v130,
                                      (char*)v177_.v178 - (char*)v130);
                  v142 = (__int64 (***)(__int64))(v137 + v141);
                  v143 = v177_.v177;
                  v177_.v178 = v130;
                  v144 = (char*)v130 - (char*)v177_.v177;
                  v145 = (__int64 (***)(__int64))(
                      (char*)v136 - ((char*)v130 - (char*)v177_.v177));
                  GameRoutine_1a0b950((__int64)v145, (__int64)v177_.v177, v144);
                  v177_.v179 = v140;
                  v45 = v151;
                  v177_.v177 = v145;
                  v177_.v178 = v142;
                  if (v143 != nullptr) {
                    v146 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v146 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v146,
                        (__int64)v143);
                  }
                }
              }
              v127 = v173_.v173;
            }
            if (v127 != nullptr) {
              v147 = v173_.v174;
              if (v127 == v173_.v174) {
                goto LABEL_294;
              }
              do {
                v148 = (__int64)*(v147 - 1);
                if (v148 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
                  std___1___shared_weak_count___release_weak(v148);
                }
                v147 -= 2;
              } while (v147 != v127);
              v173_.v174 = v127;
              v127 = v173_.v173;
              if (v173_.v173 != nullptr) {
              LABEL_294:
                v149 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v149 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v149,
                    (__int64)v127);
              }
            }
            goto LABEL_297;
          }
          v93 = 40;
        }
        (*(void (**)(__int64))(*v171_.v172 + v93))((__int64)v171_.v172);
        goto LABEL_257;
      }
    }
    else {
      v92 = 0;
    }
    if (*(_QWORD*)(v11 + 176) - *(_QWORD*)(v11 + 168) < 0x11u ||
        (v99 = ui_control_1886bc0_alt1(*a2, v182_.v182),
         v101 = *(_QWORD**)(v11 + 168), v100 = *(_QWORD**)(v11 + 176),
         v173_.v173 = (__int64 (***)(__int64))v99, v173_.v174 = v102,
         v101 == v100)) {
    LABEL_297:
      if (v92 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
        std___1___shared_weak_count___release_weak(v92);
      }
      goto LABEL_73;
    }
    while (1) {
      v103 = v101[1];
      if (v103 == 0) {
        goto LABEL_202;
      }
      v104 = std___1___shared_weak_count_lock(v103);
      if (v104 == 0) {
        goto LABEL_202;
      }
      v105 = v104;
      if (*v101 == 0) {
      LABEL_217:
        LODWORD(v107) = 0;
        goto LABEL_249;
      }
      if (*v101 == (*a2)[10]) {
        LODWORD(v107) = 3;
        goto LABEL_249;
      }
      GameRoutine_15b71b0_alt1((void*)((__int64*)&v167_.v167));
      v169_.v169 = nullptr;
      if (v167_.v168 == nullptr) {
        goto LABEL_217;
      }
      v106 = std___1___shared_weak_count_lock((__int64)v167_.v168);
      v169_.v170 = v106;
      if (v106 != 0) {
        break;
      }
      v107 = nullptr;
      v108 = (__int64)v167_.v168;
      if (v167_.v168 != nullptr) {
        goto LABEL_210;
      }
    LABEL_211:
      if (v107 != nullptr) {
        if (((*((__int64 (**)(__int64))*v107 + 4))((__int64)v107) & 1) != 0) {
          v109 = *((_QWORD*)v107[1] + 3);
          while (1) {
            v109 = *(_QWORD*)(v109 + 24);
            if (v109 == 0) {
              break;
            }
            if ((*(_BYTE*)(v109 + 88) & 1) == 0) {
              goto LABEL_223;
            }
          }
          if ((FloatingHelp_18ade60_alt1((__int64*)&v169_.v169) & 1) != 0) {
            FloatingHelp_18ae010((__int64*)&v177_.v177, &v169_.v169);
          LABEL_245:
            LODWORD(v107) = 2;
            goto LABEL_246;
          }
        }
      LABEL_223:
        v165_.v165[0] = GameData_21046e0;
        v165_.v165[1] = FloatingHelp_18ade60_alt1;
        v165_.v166 = v165_.v165;
        ui_control_1888120((void*)(&v167_.v167), v107, v182_.v182,
                           (__int64)v165_.v165);
        v110 = v177_.v178;
        if ((unsigned __int64)v177_.v178 >= v177_.v179) {
          v112 = v177_.v177;
          v150 = v92;
          v113 = (char*)v177_.v178 - (char*)v177_.v177;
          v114 = ((char*)v177_.v178 - (char*)v177_.v177) >> 4;
          v115 = v114 + 1;
          if ((unsigned __int64)(v114 + 1) >> 60 != 0) {
            goto LABEL_300;
          }
          v116 = v177_.v179 - (_QWORD)v177_.v177;
          if ((__int64)(v177_.v179 - (_QWORD)v177_.v177) >> 3 > v115) {
            v115 = v116 >> 3;
          }
          if ((unsigned __int64)v116 >= 0x7FFFFFFFFFFFFFF0LL) {
            v117 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v117 = v115;
          }
          if (v117 != 0) {
            if (v117 >> 60 != 0) {
              goto LABEL_301;
            }
            v118 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v117, 16, 0);
          }
          else {
            v118 = 0;
          }
          v119 = (__int64)v167_.v168;
          v120 = (__int64 (***)(__int64))(v118 + v113);
          v121 = v113;
          v122 = v118 + 16 * v117;
          v123 = &v120[-2 * v114];
          v111 = v120 + 2;
          *v120 = v167_.v167;
          v120[1] = (__int64 (**)(__int64))v119;
          GameRoutine_1a0b950((__int64)v123, (__int64)v112, v121);
          v177_.v177 = v123;
          v177_.v178 = v111;
          v177_.v179 = v122;
          if (v112 != nullptr) {
            v124 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v124 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, (__int64)v112);
          }
          v92 = v150;
          v45 = v151;
        }
        else {
          v111 = v177_.v178 + 2;
          *v177_.v178 = v167_.v167;
          v110[1] = v167_.v168;
        }
        v177_.v178 = v111;
        if (v165_.v166 == v165_.v165) {
          v125 = 32;
        }
        else {
          if (v165_.v166 == nullptr) {
            goto LABEL_245;
          }
          v125 = 40;
        }
        (*(void (**)(__int64))(*v165_.v166 + v125))((__int64)v165_.v166);
        goto LABEL_245;
      }
    LABEL_246:
      if (v106 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
        std___1___shared_weak_count___release_weak(v106);
      }
    LABEL_249:
      if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((_DWORD)v107 == 3) {
          goto LABEL_202;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
        std___1___shared_weak_count___release_weak(v105);
        if ((_DWORD)v107 == 3) {
          goto LABEL_202;
        }
      }
      if ((_DWORD)v107 != 0) {
        goto LABEL_297;
      }
    LABEL_202:
      v101 += 2;
      if (v101 == v100) {
        goto LABEL_297;
      }
    }
    v107 = v167_.v167;
    v169_.v169 = v167_.v167;
    v108 = (__int64)v167_.v168;
    if (v167_.v168 == nullptr) {
      goto LABEL_211;
    }
  LABEL_210:
    std___1___shared_weak_count___release_weak(v108);
    goto LABEL_211;
  }
LABEL_73:
  v47 = v177_.v177;
  v48 = v177_.v178;
  v173_.v173 = nullptr;
  v173_.v174 = nullptr;
  v162_.v164 = 0;
  if (v177_.v177 != v177_.v178) {
    while (1) {
      v50 = (__int64)*v47;
      v49 = (__int64)v47[1];
      v169_.v169 = *v47;
      v169_.v170 = v49;
      if (v49 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v50 != 0) {
        v51 = __dynamic_cast(v50, GameData_21319a0, GameData_2131a70[0], 0);
        if (v51 != 0) {
          break;
        }
      }
      v69 = *(_QWORD*)(v11 + 240);
      if (v69 == 0) {
        goto LABEL_122;
      }
      v70 = std___1___shared_weak_count_lock(v69);
      if (v70 == 0) {
        goto LABEL_122;
      }
      v71 = *(_QWORD*)(v11 + 232);
      if (v71 == 0 || v71 != v50) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v72 = v70;
          (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
          std___1___shared_weak_count___release_weak(v72);
        }
      LABEL_122:
        v73 = *(_QWORD*)(v11 + 224);
        v167_.v167 = nullptr;
        v167_.v168 = nullptr;
        if (v73 != 0 &&
            (v167_.v168 = (__int64 (**)(
                 __int64))std___1___shared_weak_count_lock(v73)) != nullptr &&
            (v167_.v167 = *(__int64 (***)(__int64))(v11 + 216)) != nullptr) {
          v75 = v182_.v182;
          v76 = v180_.v181;
          v152[0] = v180_.v180;
          v152[1] = v180_.v181;
          if (v180_.v181 != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v180_.v181 + 16), 1u,
                memory_order_relaxed);
            FloatingHelp_18ae160_alt1(v75, (__int64)&v167_.v167, &v173_.v173,
                                      &v169_.v169, v152);
            goto LABEL_132;
          }
          FloatingHelp_18ae160_alt1(v182_.v182, (__int64)&v167_.v167,
                                    &v173_.v173, &v169_.v169, v152);
          v79 = (__int64)v167_.v168;
          if (v167_.v168 == nullptr) {
            goto LABEL_136;
          }
        }
        else {
          v78 = (__int64)v169_.v169;
          v77 = (__int64 (***)(__int64))v169_.v170;
          if (v169_.v170 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v169_.v170 + 8),
                                      1u, memory_order_relaxed);
          }
          v76 = (__int64)v173_.v174;
          v173_.v173 = (__int64 (***)(__int64))v78;
          v173_.v174 = v77;
          if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
          LABEL_132:
            std___1___shared_weak_count___release_weak(v76);
          }
          v79 = (__int64)v167_.v168;
          if (v167_.v168 == nullptr) {
          LABEL_136:
            v57 = 0;
            goto LABEL_165;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
          std___1___shared_weak_count___release_weak(v79);
        }
        goto LABEL_136;
      }
      *v45 = v50;
      v45[1] = v49;
      v169_.v169 = nullptr;
      v169_.v170 = 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v85 = v70;
        (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
        std___1___shared_weak_count___release_weak(v85);
      }
      v57 = 1;
    LABEL_165:
      v86 = v169_.v170;
      if (v169_.v170 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v169_.v170 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
        std___1___shared_weak_count___release_weak(v86);
        if (v57 == 5) {
          goto LABEL_75;
        }
      }
      else if (v57 == 5) {
        goto LABEL_75;
      }
      if (v57 != 0) {
        v98 = (__int64)v173_.v174;
        if (v173_.v174 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v173_.v174 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
          std___1___shared_weak_count___release_weak(v98);
        }
        goto LABEL_181;
      }
    LABEL_75:
      v47 += 2;
      if (v47 == v48) {
        v88 = (__int64)v173_.v173;
        v87 = v173_.v174;
        goto LABEL_180;
      }
    }
    v52 = (_QWORD*)v51;
    if (v49 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v180_.v181 == 0) {
      goto LABEL_88;
    }
    if (*(_QWORD*)(v180_.v181 + 8) == -1) {
      goto LABEL_88;
    }
    v53 = std___1___shared_weak_count_lock(v180_.v181);
    if (v53 == 0) {
      goto LABEL_88;
    }
    v54 = v180_.v180;
    if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v55 = v53;
      (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
      std___1___shared_weak_count___release_weak(v55);
    }
    v38 = v50 == v54;
    v45 = v151;
    if (v38) {
      v56 = 0;
      v57 = 5;
      if (v49 == 0) {
        goto LABEL_91;
      }
    }
    else {
    LABEL_88:
      v56 = 1;
      v57 = 0;
      if (v49 == 0) {
        goto LABEL_91;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      std___1___shared_weak_count___release_weak(v49);
    }
  LABEL_91:
    if (v56 == 0) {
      goto LABEL_149;
    }
    v58 = *(_QWORD*)(v11 + 224);
    v167_.v167 = nullptr;
    v167_.v168 = nullptr;
    v162_.v162 = 0;
    v162_.v163 = 0;
    if (v58 != 0) {
      v162_.v163 = std___1___shared_weak_count_lock(v58);
      if (v162_.v163 != 0) {
        v162_.v162 = *(_QWORD*)(v11 + 216);
        if (v162_.v162 != 0) {
          goto LABEL_95;
        }
      }
      else if (v162_.v162 != 0) {
      LABEL_95:
        v59 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
        v160_.v161 = v59;
        *v59 = GameData_2104790;
        v59[1] = v11;
        v59[2] = &v182_.v183;
        v59[3] = &v173_.v173;
        v59[4] = &v162_.v164;
        v59[5] = &v182_.v182;
        v59[6] = &v162_.v162;
        v59[7] = &v167_.v167;
        v59[8] = &v180_.v180;
        Element_1885f00((__int64)v52, (__int64)v160_.v160);
        (*(void (**)(__int64))(*v59 + 40LL))((__int64)v59);
        if ((v162_.v164 & 1) == 0) {
          if (v167_.v167 != nullptr) {
            goto LABEL_109;
          }
          v156_.v156 = v52;
          v156_.v157 = v49;
          if (v49 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                      memory_order_relaxed);
          }
          game_gameui_18acd40((void*)(&v158_.v158), v11, &v156_.v156,
                              v182_.v183, &v180_.v180);
          v61 = v158_.v158;
          v62 = v158_.v159;
          v63 = (__int64)v167_.v168;
          v158_.v158 = 0;
          v158_.v159 = 0;
          v167_.v167 = (__int64 (**)(__int64))v61;
          v167_.v168 = (__int64 (**)(__int64))v62;
          if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
            std___1___shared_weak_count___release_weak(v63);
          }
          v64 = v158_.v159;
          if (v158_.v159 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v158_.v159 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
            std___1___shared_weak_count___release_weak(v64);
          }
          v65 = v156_.v157;
          if (v156_.v157 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v156_.v157 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
            std___1___shared_weak_count___release_weak(v65);
          }
          if (v167_.v167 != nullptr) {
          LABEL_109:
            v66 = v182_.v182;
            v67 = v180_.v181;
            v155[0] = v180_.v180;
            v155[1] = v180_.v181;
            if (v180_.v181 == 0) {
              FloatingHelp_18ae160_alt1(v182_.v182, (__int64)&v162_.v162,
                                        &v173_.v173, &v167_.v167, v155);
              v68 = v162_.v163;
              if (v162_.v163 == 0) {
                goto LABEL_159;
              }
            LABEL_158:
              if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
                std___1___shared_weak_count___release_weak(v68);
                v84 = (__int64)v167_.v168;
                if (v167_.v168 != nullptr) {
                LABEL_160:
                  v57 = 0;
                  if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                  LABEL_161:
                    (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
                    std___1___shared_weak_count___release_weak(v84);
                    if (v49 == 0) {
                      goto LABEL_165;
                    }
                  LABEL_150:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                      std___1___shared_weak_count___release_weak(v49);
                    }
                    goto LABEL_165;
                  }
                LABEL_149:
                  if (v49 == 0) {
                    goto LABEL_165;
                  }
                  goto LABEL_150;
                }
              LABEL_164:
                v57 = 0;
                if (v49 == 0) {
                  goto LABEL_165;
                }
                goto LABEL_150;
              }
            LABEL_159:
              v84 = (__int64)v167_.v168;
              if (v167_.v168 != nullptr) {
                goto LABEL_160;
              }
              goto LABEL_164;
            }
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v180_.v181 + 16), 1u,
                memory_order_relaxed);
            FloatingHelp_18ae160_alt1(v66, (__int64)&v162_.v162, &v173_.v173,
                                      &v167_.v167, v155);
            std___1___shared_weak_count___release_weak(v67);
          }
          v68 = v162_.v163;
          if (v162_.v163 == 0) {
            goto LABEL_159;
          }
          goto LABEL_158;
        }
      LABEL_145:
        v81 = (__int64)v173_.v173;
        v82 = v173_.v174;
        v83 = v162_.v163;
        v173_.v173 = nullptr;
        v173_.v174 = nullptr;
        *v45 = v81;
        v45[1] = (__int64)v82;
        if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
          std___1___shared_weak_count___release_weak(v83);
          v84 = (__int64)v167_.v168;
          if (v167_.v168 != nullptr) {
          LABEL_148:
            v57 = 1;
            if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              goto LABEL_161;
            }
            goto LABEL_149;
          }
        }
        else {
          v84 = (__int64)v167_.v168;
          if (v167_.v168 != nullptr) {
            goto LABEL_148;
          }
        }
        v57 = 1;
        if (v49 == 0) {
          goto LABEL_165;
        }
        goto LABEL_150;
      }
    }
    v153_.v153[0] = GameData_2104810;
    v153_.v153[1] = &v173_.v173;
    v153_.v154 = v153_.v153;
    Element_1885f00((__int64)v52, (__int64)v153_.v153);
    if (v153_.v154 == v153_.v153) {
      v80 = 32;
    }
    else {
      if (v153_.v154 == nullptr) {
        goto LABEL_145;
      }
      v80 = 40;
    }
    (*(void (**)(__int64))(*v153_.v154 + v80))((__int64)v153_.v154);
    goto LABEL_145;
  }
  v87 = nullptr;
  v88 = 0;
LABEL_180:
  *v45 = v88;
  v45[1] = (__int64)v87;
LABEL_181:
  v94 = v177_.v177;
  if (v177_.v177 != nullptr) {
    v95 = v177_.v178;
    if (v177_.v177 == v177_.v178) {
      goto LABEL_189;
    }
    do {
      v96 = (__int64)*(v95 - 1);
      if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
        std___1___shared_weak_count___release_weak(v96);
      }
      v95 -= 2;
    } while (v95 != v94);
    v177_.v178 = v94;
    v94 = v177_.v177;
    if (v177_.v177 != nullptr) {
    LABEL_189:
      v97 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v97 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v97, (__int64)v94);
    }
  }
  result = v180_.v181;
  if (v180_.v181 != 0) {
    std___1___shared_weak_count___release_weak(v180_.v181);
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
