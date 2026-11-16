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
game_gameui_18acd40(PSEUDO_X8 x8_, __int64 result, unsigned __int64** a2,
                    unsigned int a3, __int64* a4);
__int64 GameHr_15df820(__int64, _QWORD*, char);
__int64 game_gameui_UnitUtil_GetPrevDefault(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_gameui_15df6c0(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5);
__int64 game_gameui_15dfa40(__int64 a1, __int64 a2, char a3, __int64 a4,
                            char a5);

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
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, v18_.v18);
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
    v12 = (*(__int64 (**)(__int64, __int64*, _BYTE*, _BYTE*, _BYTE*))(
        *(_QWORD*)v11 + 48LL))(v11, &v22, v20_.v21, v18_.v18, v20_.v20);
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
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v16_.v16);
    }
    else {
      v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v16_.v17 = nullptr;
  }
  v12 = GameHr_15df820(a2, v16_.v16, a5 & 1);
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
    _BYTE v16[32];
    _BYTE* v17;
    char gap40_[8];
    _BYTE v18[32];
    _BYTE* v19;
  } f_;
  _BYTE v20[4];
  _BYTE v21[4];
  __int64 v22;

  v6 = *(_QWORD*)(a1 + 80);
  v7 = *(_QWORD*)(a4 + 32);
  if (v6 != 0) {
    if (v7 != 0) {
      if (v7 == a4) {
        f_.v19 = f_.v18;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, f_.v18);
      }
      else {
        f_.v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
    }
    else {
      f_.v19 = nullptr;
    }
    v11 = *(_QWORD*)(a1 + 80);
    v22 = a2;
    v21[0] = a3 & 1;
    v20[0] = a5 & 1;
    if (v11 == 0) {
      GameRoutine_60a310();
    }
    v12 = (*(__int64 (**)(__int64, __int64*, _BYTE*, _BYTE*, _BYTE*))(
        *(_QWORD*)v11 + 48LL))(v11, &v22, v21, f_.v18, v20);
    v13 = f_.v19;
    if (f_.v19 != f_.v18) {
      goto LABEL_12;
    }
  LABEL_17:
    v14 = 32;
    goto LABEL_18;
  }
  if (v7 != 0) {
    if (v7 == a4) {
      f_.v17 = f_.v16;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, f_.v16);
    }
    else {
      f_.v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    f_.v17 = nullptr;
  }
  v12 = game_gameui_UnitUtil_GetPrevDefault(a2, (__int64)f_.v16, a5 & 1);
  v13 = f_.v17;
  if (f_.v17 == f_.v16) {
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

__attribute__((swiftcall)) void

game_gameui_18acd40(PSEUDO_X8 x8_, __int64 result, unsigned __int64** a2,
                    unsigned int a3, __int64* a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 (***v26)(_QWORD);
  __int64* v27;
  __int64 v28;
  int v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 (***v42)(_QWORD);
  char v43;
  __int64 v44;
  unsigned __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  unsigned __int64* v101;
  unsigned __int64* v102;
  _QWORD* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  _QWORD* v113;
  __int64 (***v114)(_QWORD);
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 (***v125)(_QWORD);
  __int64 v126;
  __int64 v127;
  _QWORD* v128;
  _QWORD* v129;
  signed __int64 v130;
  __int64 v131;
  _QWORD* v132;
  signed __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  __int64 v139;
  _QWORD* v140;
  __int64 v141;
  unsigned __int64 v142;
  signed __int64 v143;
  _QWORD* v144;
  __int64 (***v145)(_QWORD);
  unsigned __int64 v146;
  __int64 (***v147)(_QWORD);
  __int64 v148;
  _QWORD* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  _QWORD* v153;
  __int64 v154[2];
  struct {
    _QWORD v155[4];
    _QWORD* v156;
  } v155_;
  __int64 v157[2];
  struct {
    unsigned __int64* v158;
    __int64 v159;
  } v158_;
  struct {
    __int64 v160;
    __int64 v161;
  } v160_;
  struct {
    char v162[32];
    _QWORD* v163;
  } v162_;
  struct {
    __int64 v164;
    __int64 v165;
  } v164_;
  char v166;
  struct {
    _QWORD v167[4];
    _QWORD* v168;
  } v167_;
  struct {
    _QWORD* v169;
    __int64 v170;
  } v169_;
  struct {
    __int64 v171;
    __int64 v172;
  } v171_;
  struct {
    _QWORD v173[4];
    _QWORD* v174;
  } v173_;
  struct {
    _QWORD* v175;
    _QWORD* v176;
  } v175_;
  struct {
    _QWORD v177[4];
    _QWORD* v178;
  } v177_;
  struct {
    __int64 (***v179)(_QWORD);
    _QWORD* v180;
    unsigned __int64 v181;
  } v179_;
  struct {
    __int64 (***v182)(_QWORD);
    __int64 v183;
  } v182_;
  unsigned int v184;
  unsigned int v185;

  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a2;
  v185 = a3;
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
  v153 = a5;
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
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v17),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
    a5 = v153;
    v8 = *(__int64**)(v11 + 200);
  }
  if (v7 != v8) {
    v18 = v7[6];
    if (v18 != 0) {
      LODWORD(v179_.v179) = v185;
      result =
          (*(__int64 (**)(__int64, unsigned __int64**, __int64 (****)(_QWORD)))(
              *(_QWORD*)v18 + 48LL))(v18, a2, &v179_.v179),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*a5 != 0) {
        result;
        return;
      }
      v19 = a5[1];
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v19),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  v20 = v185;
  if (v185 != *(_DWORD*)(v11 + 248)) {
    goto LABEL_49;
  }
  v21 = *(_QWORD*)(v11 + 240);
  if (v21 == 0 || *(_QWORD*)(v21 + 8) == -1) {
    goto LABEL_49;
  }
  v175_.v175 = nullptr;
  v22 = std___1___shared_weak_count_lock(v21),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v175_.v176 = (_QWORD*)v22;
  if (v22 != 0 && (v23 = (_QWORD*)v22, v24 = *(_QWORD*)(v11 + 232),
                   v175_.v175 = (_QWORD*)v24, v24 != 0)) {
    v25 = v23;
    v26 = (__int64 (***)(_QWORD))__dynamic_cast(v24, GameData_21319a0,
                                                GameData_2132090[0], -2),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v26 != nullptr) {
      v27 = (__int64*)&v175_.v175;
      v179_.v179 = v26;
      v179_.v180 = v25;
    }
    else {
      v27 = (__int64*)&v179_.v179;
    }
    a5 = v153;
  }
  else {
    v27 = (__int64*)&v179_.v179;
  }
  *v27 = 0;
  v27[1] = 0;
  v28 = (__int64)v175_.v176;
  if (v175_.v176 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v175_.v176 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v28),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = (__int64)v179_.v179;
  if (v179_.v179 == nullptr) {
    v29 = 1;
    v30 = v179_.v180;
    if (v179_.v180 == nullptr) {
      goto LABEL_47;
    }
    goto LABEL_45;
  }
  result = (**v179_.v179)(v179_.v179);
  if ((result & 1) != 0) {
    result = *(_QWORD*)(v11 + 240);
    *a5 = 0;
    a5[1] = 0;
    if (result == 0) {
      v29 = 0;
      v30 = v179_.v180;
      if (v179_.v180 == nullptr) {
        goto LABEL_47;
      }
      goto LABEL_45;
    }
    result = std___1___shared_weak_count_lock(result),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a5[1] = result;
    v29 = 0;
    if (result != 0) {
      *a5 = *(_QWORD*)(v11 + 232);
      v30 = v179_.v180;
      if (v179_.v180 == nullptr) {
        goto LABEL_47;
      }
    LABEL_45:
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v30 + 16LL))(v30),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak((__int64)v30),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_47;
    }
  }
  else {
    v29 = 1;
  }
  v30 = v179_.v180;
  if (v179_.v180 != nullptr) {
    goto LABEL_45;
  }
LABEL_47:
  if (v29 == 0) {
    result;
    return;
  }
  v20 = v185;
LABEL_49:
  v31 = a4[1];
  v184 = v20;
  v182_.v182 = nullptr;
  v182_.v183 = 0;
  if (v31 != 0 && *(_QWORD*)(v31 + 8) != -1) {
    v32 = *a4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                              memory_order_relaxed);
    v182_.v182 = (__int64 (***)(_QWORD))v32,
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v182_.v183 = v31;
    goto LABEL_67;
  }
  v33 = (*a2)[10];
  v34 = &(*a2)[3 * (int)v20];
  v35 = *((unsigned __int8*)v34 + 928);
  v36 = v34[118];
  v37 = (char*)v34 + 929;
  v38 = v34[117];
  v39 = (v35 & 1) == 0;
  v40 = v35 >> 1;
  if (v39) {
    v36 = (__int64)v37;
    v38 = v40;
  }
  v175_.v175 = (_QWORD*)v36;
  v175_.v176 = (_QWORD*)v38;
  GameRoutine_15b71b0((void*)((__int64*)&v179_.v179), v33,
                      (__int64)&v175_.v175),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v179_.v180 == nullptr) {
    v41 = 0;
  LABEL_60:
    v42 = nullptr;
    v43 = 1;
    goto LABEL_61;
  }
  v41 = std___1___shared_weak_count_lock((__int64)v179_.v180),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = v179_.v179;
  if (v179_.v180 != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)v179_.v180),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v41 == 0) {
    goto LABEL_60;
  }
  v43 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                            memory_order_relaxed);
LABEL_61:
  v44 = v182_.v183;
  v182_.v182 = v42;
  v182_.v183 = v41;
  if (v44 != 0) {
    std___1___shared_weak_count___release_weak(v44),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v43 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v41),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v20 = v184;
LABEL_67:
  v45 = *a2;
  v177_.v177[0] = GameData_21046e0;
  v177_.v177[1] = FloatingHelp_18ade60;
  v177_.v178 = v177_.v177;
  ui_control_1886f20((void*)((__int64*)&v179_.v179), v45, v20,
                     (__int64)v177_.v177),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v177_.v178 == v177_.v177) {
    v46 = v153;
    v47 = 32;
  }
  else {
    v46 = v153;
    if (v177_.v178 == nullptr) {
      goto LABEL_72;
    }
    v47 = 40;
  }
  (*(void (**)(__int64))(*v177_.v178 + v47))((__int64)v177_.v178),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_72:
  if (v179_.v179 == v179_.v180) {
    v90 = (*a2)[40];
    if (v90 != 0) {
      v91 = (_QWORD*)(*a2)[39];
      v92 = (*a2)[40];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 16), 1u,
                                memory_order_relaxed);
      v93 = std___1___shared_weak_count_lock(v92),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v90),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v93 != 0 && v91 != nullptr) {
        v173_.v173[0] = GameData_21046e0;
        v173_.v173[1] = FloatingHelp_18ade60;
        v173_.v174 = v173_.v173;
        ui_control_1886f20((void*)((__int64*)&v175_.v175), v91, v184,
                           (__int64)v173_.v173),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v173_.v174 == v173_.v173) {
          v46 = v153;
          v94 = 32;
        }
        else {
          v46 = v153;
          if (v173_.v174 == nullptr) {
          LABEL_257:
            v129 = v175_.v175;
            v128 = v175_.v176;
            if (v175_.v175 != v175_.v176) {
              v130 = (char*)v175_.v176 - (char*)v175_.v175;
              v131 = ((char*)v175_.v176 - (char*)v175_.v175) >> 4;
              if (v131 >= 1) {
                v132 = v179_.v180;
                if (v130 <= (__int64)(v179_.v181 - (_QWORD)v179_.v180)) {
                  do {
                    *v132 = *v129;
                    v137 = v129[1];
                    v132[1] = v137;
                    if (v137 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v137 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v129 += 2;
                    v132 += 2;
                  } while (v129 != v128);
                  v179_.v180 = v132;
                }
                else {
                  v133 = (char*)v179_.v180 - (char*)v179_.v179;
                  v134 = v131 + (((char*)v179_.v180 - (char*)v179_.v179) >> 4);
                  if (v134 >> 60 != 0) {
                  LABEL_300:
                    GameRoutine_18883b0(),
                        v103 = COERCE_AS(
                            __typeof__(v103),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  if ((__int64)(v179_.v181 - (_QWORD)v179_.v179) >> 3 > v134) {
                    v134 = (__int64)(v179_.v181 - (_QWORD)v179_.v179) >> 3;
                  }
                  if (v179_.v181 - (unsigned __int64)v179_.v179 >=
                      0x7FFFFFFFFFFFFFF0LL) {
                    v135 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v135 = v134;
                  }
                  if (v135 != 0) {
                    if (v135 >> 60 != 0) {
                    LABEL_301:
                      GameRoutine_60a210(),
                          v103 = COERCE_AS(
                              __typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v136 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v135, 16,
                        0),
                    v103 = COERCE_AS(
                        __typeof__(v103),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    v136 = 0;
                  }
                  v138 = (_QWORD*)(v136 + v133);
                  v139 = (__int64)v138 + v130;
                  v140 = v138;
                  do {
                    *v140 = *v129;
                    v141 = v129[1];
                    v140[1] = v141;
                    if (v141 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v141 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v140 += 2;
                    v129 += 2;
                  } while (v140 != (_QWORD*)v139);
                  v142 = v136 + 16 * v135;
                  v143 = (char*)v179_.v180 - (char*)v132;
                  memcpy(v139, (__int64)v132, (char*)v179_.v180 - (char*)v132),
                      v103 = COERCE_AS(
                          __typeof__(v103),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v144 = (_QWORD*)(v139 + v143);
                  v145 = v179_.v179;
                  v179_.v180 = v132;
                  v146 = (char*)v132 - (char*)v179_.v179;
                  v147 = (__int64 (***)(_QWORD))(
                      (char*)v138 - ((char*)v132 - (char*)v179_.v179)),
                  v103 = COERCE_AS(
                      __typeof__(v103),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  memcpy((__int64)v147, (__int64)v179_.v179, v146),
                      v103 = COERCE_AS(
                          __typeof__(v103),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v179_.v181 = v142;
                  v46 = v153;
                  v179_.v179 = v147;
                  v179_.v180 = v144;
                  if (v145 != nullptr) {
                    v148 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v148 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v148,
                        (__int64)v145),
                        v103 = COERCE_AS(
                            __typeof__(v103),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
              }
              v129 = v175_.v175;
            }
            if (v129 != nullptr) {
              v149 = v175_.v176;
              if (v129 == v175_.v176) {
                goto LABEL_294;
              }
              do {
                v150 = *(v149 - 1);
                if (v150 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v150 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v150 + 16LL))(v150),
                      v103 = COERCE_AS(
                          __typeof__(v103),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  std___1___shared_weak_count___release_weak(v150),
                      v103 = COERCE_AS(
                          __typeof__(v103),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v149 -= 2;
              } while (v149 != v129);
              v175_.v176 = v129;
              v129 = v175_.v175;
              if (v175_.v175 != nullptr) {
              LABEL_294:
                v151 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v151 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v151,
                    (__int64)v129),
                    v103 = COERCE_AS(
                        __typeof__(v103),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            goto LABEL_297;
          }
          v94 = 40;
        }
        (*(void (**)(__int64))(*v173_.v174 + v94))((__int64)v173_.v174),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_257;
      }
    }
    else {
      v93 = 0;
    }
    if (*(_QWORD*)(v11 + 176) - *(_QWORD*)(v11 + 168) < 0x11u ||
        (v100 = ui_control_1886bc0(*a2, v184),
         v102 = *(unsigned __int64**)(v11 + 168),
         v101 = *(unsigned __int64**)(v11 + 176), v175_.v175 = v100,
         v175_.v176 = v103, v102 == v101)) {
    LABEL_297:
      if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v93),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_73;
    }
    while (1) {
      v104 = v102[1];
      if (v104 == 0) {
        goto LABEL_202;
      }
      v105 = std___1___shared_weak_count_lock(v104),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v105 == 0) {
        goto LABEL_202;
      }
      v106 = v105;
      v107 = *v102;
      if (*v102 == 0) {
      LABEL_217:
        LODWORD(v109) = 0;
        goto LABEL_249;
      }
      if (v107 == (*a2)[10]) {
        LODWORD(v109) = 3;
        goto LABEL_249;
      }
      GameRoutine_15b71b0((void*)((__int64*)&v169_.v169), v107,
                          (__int64)&v175_.v175),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v171_.v171 = 0;
      if (v169_.v170 == 0) {
        goto LABEL_217;
      }
      v108 = std___1___shared_weak_count_lock(v169_.v170),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v171_.v172 = v108;
      if (v108 != 0) {
        break;
      }
      v109 = nullptr;
      v110 = v169_.v170;
      if (v169_.v170 != 0) {
        goto LABEL_210;
      }
    LABEL_211:
      if (v109 != nullptr) {
        if (((*(__int64 (**)(_QWORD*))(*v109 + 32LL))(v109) & 1) != 0) {
          v111 = *(_QWORD*)(v109[1] + 24LL);
          while (1) {
            v111 = *(_QWORD*)(v111 + 24);
            if (v111 == 0) {
              break;
            }
            if ((*(_BYTE*)(v111 + 88) & 1) == 0) {
              goto LABEL_223;
            }
          }
          if ((FloatingHelp_18ade60(&v171_.v171) & 1) != 0) {
            FloatingHelp_18ae010((__int64*)&v179_.v179, &v171_.v171),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LABEL_245:
            LODWORD(v109) = 2;
            goto LABEL_246;
          }
        }
      LABEL_223:
        v167_.v167[0] = GameData_21046e0;
        v167_.v167[1] = FloatingHelp_18ade60;
        v167_.v168 = v167_.v167;
        ui_control_1888120((void*)(&v169_.v169), v109, v184,
                           (__int64)v167_.v167),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v112 = v179_.v180;
        if ((unsigned __int64)v179_.v180 >= v179_.v181) {
          v114 = v179_.v179;
          v152 = v93;
          v115 = (char*)v179_.v180 - (char*)v179_.v179;
          v116 = ((char*)v179_.v180 - (char*)v179_.v179) >> 4;
          v117 = v116 + 1;
          if ((unsigned __int64)(v116 + 1) >> 60 != 0) {
            goto LABEL_300;
          }
          v118 = v179_.v181 - (_QWORD)v179_.v179;
          if ((__int64)(v179_.v181 - (_QWORD)v179_.v179) >> 3 > v117) {
            v117 = v118 >> 3;
          }
          if ((unsigned __int64)v118 >= 0x7FFFFFFFFFFFFFF0LL) {
            v119 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v119 = v117;
          }
          if (v119 != 0) {
            if (v119 >> 60 != 0) {
              goto LABEL_301;
            }
            v120 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v119, 16, 0),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v120 = 0;
          }
          v121 = v169_.v170;
          v122 = (_QWORD*)(v120 + v115);
          v123 = v115;
          v124 = v120 + 16 * v119;
          v125 = (__int64 (***)(_QWORD))&v122[-2 * v116],
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v113 = v122 + 2;
          *v122 = v169_.v169;
          v122[1] = v121;
          memcpy((__int64)v125, (__int64)v114, v123),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v179_.v179 = v125;
          v179_.v180 = v113;
          v179_.v181 = v124;
          if (v114 != nullptr) {
            v126 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v126 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v126, (__int64)v114),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v93 = v152;
          v46 = v153;
        }
        else {
          v113 = v179_.v180 + 2;
          *v179_.v180 = v169_.v169;
          v112[1] = v169_.v170;
        }
        v179_.v180 = v113;
        if (v167_.v168 == v167_.v167) {
          v127 = 32;
        }
        else {
          if (v167_.v168 == nullptr) {
            goto LABEL_245;
          }
          v127 = 40;
        }
        (*(void (**)(__int64))(*v167_.v168 + v127))((__int64)v167_.v168),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_245;
      }
    LABEL_246:
      if (v108 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v108 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v108 + 16LL))(v108),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v108),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    LABEL_249:
      if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((_DWORD)v109 == 3) {
          goto LABEL_202;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v106),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((_DWORD)v109 == 3) {
          goto LABEL_202;
        }
      }
      if ((_DWORD)v109 != 0) {
        goto LABEL_297;
      }
    LABEL_202:
      v102 += 2;
      if (v102 == v101) {
        goto LABEL_297;
      }
    }
    v109 = v169_.v169;
    v171_.v171 = (__int64)v169_.v169;
    v110 = v169_.v170;
    if (v169_.v170 == 0) {
      goto LABEL_211;
    }
  LABEL_210:
    std___1___shared_weak_count___release_weak(v110),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_211;
  }
LABEL_73:
  v48 = (__int64*)v179_.v179;
  v49 = v179_.v180;
  v175_.v175 = nullptr;
  v175_.v176 = nullptr;
  v166 = 0;
  if (v179_.v179 != v179_.v180) {
    while (1) {
      v51 = *v48;
      v50 = v48[1];
      v171_.v171 = *v48;
      v171_.v172 = v50;
      if (v50 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v51 != 0) {
        v52 = __dynamic_cast(v51, GameData_21319a0, GameData_2131a70[0], 0),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v52 != 0) {
          break;
        }
      }
      v70 = *(_QWORD*)(v11 + 240);
      if (v70 == 0) {
        goto LABEL_122;
      }
      v71 = std___1___shared_weak_count_lock(v70),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v71 == 0) {
        goto LABEL_122;
      }
      v72 = *(_QWORD*)(v11 + 232);
      if (v72 == 0 || v72 != v51) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v73 = v71;
          (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v73),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_122:
        v74 = *(_QWORD*)(v11 + 224);
        v169_.v169 = nullptr;
        v169_.v170 = 0;
        if (v74 != 0 &&
            (v169_.v170 = std___1___shared_weak_count_lock(v74)) != 0 &&
            (v169_.v169 = *(_QWORD**)(v11 + 216)) != nullptr) {
          v76 = v184;
          v77 = v182_.v183;
          v154[0] = (__int64)v182_.v182;
          v154[1] = v182_.v183;
          if (v182_.v183 != 0) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v182_.v183 + 16), 1u,
                memory_order_relaxed);
            FloatingHelp_18ae160(v76, (__int64)&v169_.v169, &v175_.v175,
                                 &v171_.v171, v154),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            goto LABEL_132;
          }
          FloatingHelp_18ae160(v184, (__int64)&v169_.v169, &v175_.v175,
                               &v171_.v171, v154),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v80 = v169_.v170;
          if (v169_.v170 == 0) {
            goto LABEL_136;
          }
        }
        else {
          v79 = v171_.v171;
          v78 = (_QWORD*)v171_.v172;
          if (v171_.v172 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v171_.v172 + 8),
                                      1u, memory_order_relaxed);
          }
          v77 = (__int64)v175_.v176;
          v175_.v175 = (_QWORD*)v79;
          v175_.v176 = v78;
          if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LABEL_132:
            std___1___shared_weak_count___release_weak(v77),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v80 = v169_.v170;
          if (v169_.v170 == 0) {
          LABEL_136:
            v58 = 0;
            goto LABEL_165;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v80),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_136;
      }
      *v46 = v51;
      v46[1] = v50;
      v171_.v171 = 0;
      v171_.v172 = 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v86 = v71;
        (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v86),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v58 = 1;
    LABEL_165:
      v87 = v171_.v172;
      if (v171_.v172 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v171_.v172 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v87),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v58 == 5) {
          goto LABEL_75;
        }
      }
      else if (v58 == 5) {
        goto LABEL_75;
      }
      if (v58 != 0) {
        v99 = (__int64)v175_.v176;
        if (v175_.v176 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v175_.v176 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v99),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_181;
      }
    LABEL_75:
      v48 += 2;
      if (v48 == v49) {
        v89 = (__int64)v175_.v175;
        v88 = v175_.v176;
        goto LABEL_180;
      }
    }
    v53 = (unsigned __int64*)v52;
    if (v50 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v182_.v183 == 0) {
      goto LABEL_88;
    }
    if (*(_QWORD*)(v182_.v183 + 8) == -1) {
      goto LABEL_88;
    }
    v54 = std___1___shared_weak_count_lock(v182_.v183),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v54 == 0) {
      goto LABEL_88;
    }
    v55 = (__int64)v182_.v182;
    if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v56 = v54;
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v56),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v39 = v51 == v55;
    v46 = v153;
    if (v39) {
      v57 = 0;
      v58 = 5;
      if (v50 == 0) {
        goto LABEL_91;
      }
    }
    else {
    LABEL_88:
      v57 = 1;
      v58 = 0;
      if (v50 == 0) {
        goto LABEL_91;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v50),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_91:
    if (v57 == 0) {
      goto LABEL_149;
    }
    v59 = *(_QWORD*)(v11 + 224);
    v169_.v169 = nullptr;
    v169_.v170 = 0;
    v164_.v164 = 0;
    v164_.v165 = 0;
    if (v59 != 0) {
      v164_.v165 = std___1___shared_weak_count_lock(v59),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v164_.v165 != 0) {
        v164_.v164 = *(_QWORD*)(v11 + 216);
        if (v164_.v164 != 0) {
          goto LABEL_95;
        }
      }
      else if (v164_.v164 != 0) {
      LABEL_95:
        v60 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v162_.v163 = v60;
        *v60 = GameData_2104790;
        v60[1] = v11;
        v60[2] = &v185;
        v60[3] = &v175_.v175;
        v60[4] = &v166;
        v60[5] = &v184;
        v60[6] = &v164_.v164;
        v60[7] = &v169_.v169;
        v60[8] = &v182_.v182;
        Element_1885f00((__int64)v53, (__int64)v162_.v162),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD*))(*v60 + 40LL))(v60),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v166 & 1) == 0) {
          if (v169_.v169 != nullptr) {
            goto LABEL_109;
          }
          v158_.v158 = v53;
          v158_.v159 = v50;
          if (v50 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                      memory_order_relaxed);
          }
          game_gameui_18acd40(v11, &v158_.v158, v185, (__int64*)&v182_.v182,
                              &v160_.v160),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v62 = v160_.v160;
          v63 = v160_.v161;
          v64 = v169_.v170;
          v160_.v160 = 0;
          v160_.v161 = 0;
          v169_.v169 = (_QWORD*)v62;
          v169_.v170 = v63;
          if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v64),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v65 = v160_.v161;
          if (v160_.v161 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v160_.v161 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v65),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v66 = v158_.v159;
          if (v158_.v159 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v158_.v159 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v66),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (v169_.v169 != nullptr) {
          LABEL_109:
            v67 = v184;
            v68 = v182_.v183;
            v157[0] = (__int64)v182_.v182;
            v157[1] = v182_.v183;
            if (v182_.v183 == 0) {
              FloatingHelp_18ae160(v184, (__int64)&v164_.v164, &v175_.v175,
                                   &v169_.v169, v157),
                  v103 = COERCE_AS(
                      __typeof__(v103),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v69 = v164_.v165;
              if (v164_.v165 == 0) {
                goto LABEL_159;
              }
            LABEL_158:
              if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
                    v103 = COERCE_AS(
                        __typeof__(v103),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v69),
                    v103 = COERCE_AS(
                        __typeof__(v103),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v85 = v169_.v170;
                if (v169_.v170 != 0) {
                LABEL_160:
                  v58 = 0;
                  if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                  LABEL_161:
                    (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85),
                        v103 = COERCE_AS(
                            __typeof__(v103),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    std___1___shared_weak_count___release_weak(v85),
                        v103 = COERCE_AS(
                            __typeof__(v103),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (v50 == 0) {
                      goto LABEL_165;
                    }
                  LABEL_150:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
                          v103 = COERCE_AS(
                              __typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      std___1___shared_weak_count___release_weak(v50),
                          v103 = COERCE_AS(
                              __typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    goto LABEL_165;
                  }
                LABEL_149:
                  if (v50 == 0) {
                    goto LABEL_165;
                  }
                  goto LABEL_150;
                }
              LABEL_164:
                v58 = 0;
                if (v50 == 0) {
                  goto LABEL_165;
                }
                goto LABEL_150;
              }
            LABEL_159:
              v85 = v169_.v170;
              if (v169_.v170 != 0) {
                goto LABEL_160;
              }
              goto LABEL_164;
            }
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v182_.v183 + 16), 1u,
                memory_order_relaxed);
            FloatingHelp_18ae160(v67, (__int64)&v164_.v164, &v175_.v175,
                                 &v169_.v169, v157),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v68),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v69 = v164_.v165;
          if (v164_.v165 == 0) {
            goto LABEL_159;
          }
          goto LABEL_158;
        }
      LABEL_145:
        v82 = (__int64)v175_.v175;
        v83 = v175_.v176;
        v84 = v164_.v165;
        v175_.v175 = nullptr;
        v175_.v176 = nullptr;
        *v46 = v82;
        v46[1] = (__int64)v83;
        if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v84),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v85 = v169_.v170;
          if (v169_.v170 != 0) {
          LABEL_148:
            v58 = 1;
            if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              goto LABEL_161;
            }
            goto LABEL_149;
          }
        }
        else {
          v85 = v169_.v170;
          if (v169_.v170 != 0) {
            goto LABEL_148;
          }
        }
        v58 = 1;
        if (v50 == 0) {
          goto LABEL_165;
        }
        goto LABEL_150;
      }
    }
    v155_.v155[0] = GameData_2104810;
    v155_.v155[1] = &v175_.v175;
    v155_.v156 = v155_.v155;
    Element_1885f00((__int64)v53, (__int64)v155_.v155),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v155_.v156 == v155_.v155) {
      v81 = 32;
    }
    else {
      if (v155_.v156 == nullptr) {
        goto LABEL_145;
      }
      v81 = 40;
    }
    (*(void (**)(__int64))(*v155_.v156 + v81))((__int64)v155_.v156),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_145;
  }
  v88 = nullptr;
  v89 = 0;
LABEL_180:
  *v46 = v89;
  v46[1] = (__int64)v88;
LABEL_181:
  v95 = v179_.v179;
  if (v179_.v179 != nullptr) {
    v96 = v179_.v180;
    if (v179_.v179 == v179_.v180) {
      goto LABEL_189;
    }
    do {
      v97 = *(v96 - 1);
      if (v97 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v97),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v96 -= 2;
    } while (v96 != v95);
    v179_.v180 = v95;
    v95 = v179_.v179;
    if (v179_.v179 != nullptr) {
    LABEL_189:
      v98 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v98 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, (__int64)v95),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  result = v182_.v183;
  if (v182_.v183 != 0) {
    std___1___shared_weak_count___release_weak(v182_.v183),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
