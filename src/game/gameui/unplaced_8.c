#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_157b170(__int64*, __int64, char);
__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, __int64,
                                                     __int64*, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_91c130(PSEUDO_X8, unsigned __int64 result);
__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8, int, __int64, _QWORD*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_91bc00(__int64);
__int64 GameHr_ffccc0(int, __int64);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_1584e30(__int64*, __int64, char);
__int64 GameRoutine_15996e0(__int64*, _BYTE*, char);
__int64 GameRoutine_1841dc0(__int64 result, unsigned int, unsigned int);
__int64 GameRoutine_1842830(__int64, unsigned int, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_715440();
__int64 GameRoutine_930b90(__int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1561f50(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 UnitUtil_1212be0(__int64, __int64);
__int64 Util_1584ec0(__int64*, __int64, unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_6e8960(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_ffc660(unsigned int, const char*);
__int64 game_gameui_1584d90(__int64, _QWORD*, int, int);
__int64 game_gameui_1598e60(__int64, char, unsigned int, __int64,
                            unsigned __int8);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_1244be0(__int64);
char* GameHr_1592ea0(const char**);
char* GameHr_6ed030(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern __int64 (***GameData_212dae8)();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21759e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern int GameData_1be04a8[4];
int* GameRoutine_15d1fa0();
int strcmp(const char*, const char*);
unsigned __int64 Manager_6326c0(__int64*, const char*);
void GameHr_1583d70(__int64*, const char*, const char*);
void GameHr_1592d60(__int64*, const char*, const char*, const char*);
void GameHr_1592f50(__int64*, const char*, const char*, const char*,
                    const char*);
void GameHr_930e20(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1597230(__int64**, char);
void GameRoutine_1597490(__int64**, char);
void GameRoutine_1597960(__int64**, char);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_LayoutAccessor_SetTextBoxString(__int64*, __int64, __int64);
void game_gameui_1597ab0(__int64 a1, unsigned int a2, char* a3, __int64 a4,
                         char a5);
__int64 game_gameui_1597cc0(__int64* a1, __int64 a2, __int64 a3, int a4);

void game_gameui_1597ab0(__int64 a1, unsigned int a2, char* a3, __int64 a4,
                         char a5)
{
  __int64 v9;
  __int64 v10;
  int v11;

  *(_BYTE*)(a1 + 8) = 0;
  if (a2 != 32 &&
      (v9 = ui_LayoutAccessor_FindPane(*(__int64**)a1,
                                       (__int64)"IconFacility")) != 0 &&
      (v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0)) !=
          0 &&
      (GameRoutine_1842830(v10, a2, (__int64)a3) & 1) != 0) {
    v11 = 1;
  }
  else {
    v11 = 0;
    *(_BYTE*)(a1 + 8) = 1;
  }
  LayoutAccessor_155e830(*(_QWORD*)a1, v11);
  if ((a5 & 1) == 0 || v11 == 0) {
    goto LABEL_13;
  }
  if ((GameHr_ffccc0(a2, (__int64)a3) & 1) != 0) {
    GameRoutine_1597230((__int64**)a1, (a2 > 0x1C) | (0x63FFFFFu >> a2) & 1);
    return;
  }
  if ((game_ffc660(a2, a3) & 1) != 0) {
    GameRoutine_1597490((__int64**)a1, (a2 > 0x1C) | (0x63FFFFFu >> a2) & 1);
  }
  else {
  LABEL_13:
    if (v11 != 0) {
      GameRoutine_1597960((__int64**)a1, (a2 > 0x1C) | (0x63FFFFFu >> a2) & 1);
    }
  }
}

__int64 game_gameui_1597cc0(__int64* a1, __int64 a2, __int64 a3, int a4)
{
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  _QWORD* v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  signed int v17;
  signed int v18;
  unsigned __int8 v19;
  unsigned int v20;
  int v21;
  char* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char** v40;
  char* v41;
  char** v42;
  char* v43;
  __int64 v44;
  int v45;
  char* v46;
  __int64 result;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  char v56;
  int v57;
  int v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  __int64* v69;
  _BOOL4 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  char* v76;
  char* v77;
  char* v78;
  __int64 v79;
  int v81;
  _BOOL4 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int* v86;
  char* v87;
  char* v88;
  _BOOL4 v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  char* v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  __int64 v101;
  int v102;
  char* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64* v107;
  int v108;
  char* v109;
  char* v110;
  char* v111;
  char* v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  int v119;
  int v120;
  char* v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  int v125;
  unsigned __int64 v126;
  char* v127;
  char* v128;
  char* v129;
  int v130;
  char* v131;
  char* v132;
  __int64 v133[2];
  struct {
    __int64 v134;
    char* v135;
    __int64 v136;
    char** v137;
    char gap72_[24];
    unsigned __int16 v138;
  } v134_;
  struct {
    _QWORD v139[2];
    char v140;
    char gap121_[7];
    __int64 v141;
  } v139_;
  struct {
    _QWORD v142[6];
    unsigned __int64 v143;
  } v142_;
  struct {
    int v144;
    _BYTE v145[4];
  } v144_;
  struct {
    _DWORD v146[3];
    char v147;
  } v146_;
  __int64 v148;
  __int64 v149[3];
  struct {
    unsigned __int64 v150;
    int v151;
    int v152;
    __int64 v153;
  } v150_;
  struct {
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    __int64 v165;
  } v154_;

  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v149[0] = 0;
  v149[1] = a2;
  v7 = a3;
  v144_.v145[0] = a4;
  v144_.v144 = 0;
  GameSituation_906320((void*)(v142_.v142), game_GameModeData_instance_ + 136,
                       v149, a3),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v8 = v142_.v143;
  v139_.v140 = a4;
  v139_.v141 = a2;
  v139_.v139[0] = a1;
  v139_.v139[1] = &v144_.v144;
  if (*(_BYTE*)(v142_.v143 + 72) == 3 && *(_BYTE*)(v142_.v143 + 33) == 0) {
    goto LABEL_17;
  }
  v149[0] = 0;
  v149[1] = a2;
  if (a2 != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
    v149[2] = v9;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_12;
    }
  }
  else {
    v9 = 0;
    v149[2] = 0;
    if (game_GameModeData_instance_ == 0) {
    LABEL_12:
      v134_.v136 = 0;
      goto LABEL_13;
    }
  }
  v10 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  v134_.v134 = 0;
  v134_.v135 = (const char*)v10;
  if (v10 == 0) {
    goto LABEL_12;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL) + 272LL);
  v134_.v136 = v11;
  v12 = GameData_212dae8;
  if (v9 != 0 && v11 != 0) {
    v13 = *(_QWORD**)(game_GameModeData_instance_ + 128);
    v14 = GameReliance_8e17a0(v13, (__int64)v149, (__int64)&v134_.v134),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v14 & 0x80000000) != 0) {
    LABEL_13:
      v12 = GameData_212dae8;
      goto LABEL_14;
    }
    v12 = (__int64 (***)(void))(v13[1] + 56LL * v14),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_14:
  v15 = *((unsigned __int8*)v12 + 11);
  v16 = *(unsigned __int8*)(v8 + 33);
  if ((v7 & 1) != 0 || (unsigned int)v15 < v16) {
    game_gameui_1598e60((__int64)v139_.v139, 1, v16, v15,
                        (unsigned int)v15 < v16),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_17:
  if (*(_BYTE*)(v8 + 72) != 3 || *(_WORD*)(v8 + 34) != 0) {
    v17 = GameRoutine_715440(),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v18 = *(unsigned __int16*)(v8 + 34);
    if ((v7 & 1) != 0 || v17 < v18) {
      v19 = v17 < v18;
      v20 = GameRoutine_715440(),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      game_gameui_1598e60((__int64)v139_.v139, 0, v18, v20, v19),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  if ((a4 & 1) != 0) {
    game_91c130((void*)((__int64)&v134_.v134), v8),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v134_.v135 != nullptr && *v134_.v135 != 0) {
      v21 = v144_.v144++;
      v22 = game_util_Format("L_Condition%02d", v21),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      LayoutAccessor_1560070((void*)(v149), a1, v22),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v149[1] != 0) {
        v23 = std___1___shared_weak_count_lock(v149[1]),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v24 = (__int64*)v149[0];
        if (v149[1] != 0) {
          std___1___shared_weak_count___release_weak(v149[1]),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        if (v23 == 0 || v24 == nullptr) {
          if (v23 == 0) {
            goto LABEL_66;
          }
          goto LABEL_64;
        }
        LayoutAccessor_1560070((void*)(v149), v24, "L_Scout_Num"),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v149[1] != 0) {
          v25 = std___1___shared_weak_count_lock(v149[1]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v26 = v149[0];
          if (v149[1] != 0) {
            std___1___shared_weak_count___release_weak(v149[1]),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          if (v25 != 0 && v26 != 0) {
            LayoutAccessor_155e830(v26, 0),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            goto LABEL_39;
          }
          if (v25 != 0) {
          LABEL_39:
            if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              std___1___shared_weak_count___release_weak(v25),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            }
          }
        }
        v27 = (unsigned __int8)v134_.v134;
        v28 = ui_LayoutAccessor_FindPane(v24, (__int64)"Icon"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v28 != 0) {
          v29 =
              __dynamic_cast(v28, GameData_212d670[0], GameData_212d678[0], 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          if (v29 != 0) {
            v30 = v29;
            Manager_136a920(ui_Manager_instance_ + 1264, v29, 0, 7u,
                            "IconBullet"),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v31 = 72;
            if (v27 != 0) {
              v31 = 36;
            }
            v130 = *(_DWORD*)((char*)GameData_212da30 + v31);
            v32 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v30 + 88LL))(v30,
                                                                           0),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            if (v32 != 0) {
              *(_DWORD*)(v32 + 12) = v130;
            }
          }
        }
        LayoutAccessor_155e830((__int64)v24, 1),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v27 != 0) {
          v33 = "Default";
        }
        else {
          v33 = "Disable";
        }
        LayoutAccessor_1562cf0((__int64)v24, v33),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LayoutAccessor_1562cf0((__int64)v24, "Txt"),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v34 = v134_.v135;
        if (v134_.v135 != nullptr && *v134_.v135 != 0) {
          if ((unsigned __int16)v134_.v136 == 2) {
            v40 = v134_.v137;
            v131 = GameHr_1592ea0(v134_.v137),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v41 = GameHr_1592ea0(v40 + 1),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            GameHr_1592d60(v24, v34, v131, v41),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          else if ((unsigned __int16)v134_.v136 == 1) {
            v39 = GameHr_1592ea0(v134_.v137),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            GameHr_1583d70(v24, v34, v39),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          else if ((_WORD)v134_.v136 != 0) {
            v42 = v134_.v137;
            v132 = GameHr_1592ea0(v134_.v137),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v129 = GameHr_1592ea0(v42 + 1),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v43 = GameHr_1592ea0(v42 + 2),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            GameHr_1592f50(v24, v34, v132, v129, v43),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          else {
            LayoutAccessor_1562060(v24, (__int64)"T_Txt", v134_.v135),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
        }
        else {
          v150_.v153 = -1;
          v154_.v154 = -1;
          v154_.v155 = -1;
          v154_.v156 = -1;
          v35 = *msg_MessageManager_instance__ptr[0];
          v154_.v157 = -1;
          v154_.v158 = -1;
          v154_.v159 = -1;
          v154_.v160 = -1;
          v154_.v161 = -1;
          v154_.v162 = -1;
          v154_.v163 = -1;
          v154_.v164 = -1;
          v149[0] = (__int64)(GameData_212e348 + 2);
          v149[1] = 0xFFFF0001FFFF0000LL;
          v149[2] = 0xFFFF0004FFFF0002LL;
          v150_.v150 = 0xFFFF0006FFFF0005LL;
          v154_.v165 = 8;
          v150_.v151 = -65529;
          v150_.v152 = -65528;
          v36 = GameRoutine_a4dbe0(
              v35, "MID_ScoutInfo_NegotiationConditions_Clear", 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          if (v36 != nullptr) {
            v37 = (__int64)v36;
            v38 = ui_LayoutAccessor_FindTextBox(v24, (__int64)"T_Txt"),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            if (v38 != 0) {
              GameRoutine_156c5d0(v38, v37, 0),
                  v50 = COERCE_AS(
                      __typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            }
          }
        }
        v44 = ui_LayoutAccessor_FindAlignment(v24, (__int64)"A_Txt"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v44 != 0) {
          Alignment_56b600(v44),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      LABEL_64:
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          std___1___shared_weak_count___release_weak(v23),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
    }
  }
LABEL_66:
  v45 = v144_.v144++;
  v46 = game_util_Format("L_Condition%02d", v45),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LayoutAccessor_1560070((void*)(v149), a1, v46),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = v149[1];
  if (v149[1] == 0) {
    goto LABEL_217;
  }
  v48 = std___1___shared_weak_count_lock(v149[1]),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v49 = (__int64*)v149[0];
  result = v149[1];
  if (v149[1] != 0) {
    result = std___1___shared_weak_count___release_weak(v149[1]),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  if (v48 == 0 || v49 == nullptr) {
    if (v48 == 0) {
      goto LABEL_217;
    }
    goto LABEL_215;
  }
  LayoutAccessor_1560070((void*)(v149), v49, "L_Scout_Num"),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v149[1] != 0) {
    v51 = std___1___shared_weak_count_lock(v149[1]),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v52 = v149[0];
    if (v149[1] != 0) {
      std___1___shared_weak_count___release_weak(v149[1]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (v51 != 0 && v52 != 0) {
      LayoutAccessor_155e830(v52, 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    else if (v51 == 0) {
      goto LABEL_82;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak(v51),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
LABEL_82:
  v149[0] = 0;
  v149[1] = a2;
  GameSituation_906320((void*)(&v134_.v134), game_GameModeData_instance_ + 136,
                       v149, v50),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v53 = v134_.v138;
  v54 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v55 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(a2 + 24) + 1632LL)),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v54 = v55 != 0 && *(_DWORD*)(v55 + 32) != 0;
  }
  v56 = v53 & v54;
  v57 = (v7 | v53 & v54) & (*(_BYTE*)(v8 + 73) != 4);
  if (*(_BYTE*)(v8 + 72) != 0) {
    v58 = v57;
  }
  else {
    v58 = 0;
  }
  result = LayoutAccessor_155e830((__int64)v49, v58),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v58 != 1) {
    goto LABEL_215;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v49, (__int64)"Icon", 1),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((v56 & 1) == 0) {
    v60 = ui_LayoutAccessor_FindPane(v49, (__int64)"Icon"),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v60 != 0) {
      v61 = __dynamic_cast(v60, GameData_212d670[0], GameData_212d678[0], 0),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v61 != 0) {
        v62 = v61;
        Manager_136a920(ui_Manager_instance_ + 1264, v61, 0, 7u,
                        "IconQuestKind_Talk"),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v63 = 36;
        if ((a4 & 1) != 0) {
          v63 = 72;
        }
        v64 = *(_DWORD*)((char*)GameData_212da30 + v63);
        v65 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v62 + 88LL))(v62, 0),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v65 != 0) {
          *(_DWORD*)(v65 + 12) = v64;
        }
      }
    }
    LayoutAccessor_1562cf0((__int64)v49, "Disable"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v49, "Txt"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v66 = *(unsigned __int8*)(v8 + 73);
    memset(v149, 0, sizeof(v149));
    if (v66 > 3) {
      v67 = "MID_ScoutInfo_NegotiationConditions_Yes_Normal";
    }
    else {
      v67 = (char*)GameData_1be04a8 + GameData_1be04a8[v66];
    }
    GameRoutine_60a020((__int64)v149, v67),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v49, (__int64)"T_Txt", 1),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v149[0] & 1) != 0) {
      v78 = (const char*)v149[2];
    }
    else {
      v78 = (char*)v149 + 1;
    }
    LayoutAccessor_1562060(v49, (__int64)"T_Txt", v78),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v149[0] & 1) == 0) {
      goto LABEL_213;
    }
  LABEL_123:
    if (v149[2] != 0) {
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v79 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v149[2]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    goto LABEL_213;
  }
  v59 = *(unsigned __int8*)(v8 + 72);
  if (v59 > 2) {
    if (v59 != 3) {
      if (v59 == 4) {
        v68 = GameHr_91bc00(v8),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v68 != 0) {
          v69 = (__int64*)v68;
          v70 = *(_BYTE*)(v68 + 9) == 3 || (v53 & 4) != 0;
          v71 = LayoutAccessor_1561f50(v49, (__int64)"Icon"),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          GameRoutine_1841dc0(v71, 2u, 3u),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v72 = LayoutAccessor_1561f50(v49, (__int64)"Icon"),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v73 = 36;
          if ((a4 & !v70) != 0) {
            v73 = 72;
          }
          if (v72 != 0) {
            v74 = *(_DWORD*)((char*)GameData_212da30 + v73);
            v75 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v72 + 88LL))(v72,
                                                                           0),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            if (v75 != 0) {
              *(_DWORD*)(v75 + 12) = v74;
            }
          }
          if (v70) {
            v76 = "Default";
          }
          else {
            v76 = "Disable";
          }
          LayoutAccessor_1562cf0((__int64)v49, v76),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          LayoutAccessor_1562cf0((__int64)v49, "Txt"),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          ui_LayoutAccessor_SetPaneVisible((__int64)v49, (__int64)"T_Txt", 1),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v77 = GameHr_1244be0(*v69),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          ui_LayoutAccessor_SetTextBoxString(v49, (__int64)"T_Txt",
                                             (__int64)v77),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
      goto LABEL_213;
    }
    if (strcmp(**(const char***)(v8 + 112), "Tia") == 0) {
      goto LABEL_144;
    }
    Manager_6326c0(v149, &GameData_1a9f09e),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v87 = **(const char***)(v8 + 112);
    if (strcmp(v87, "Sim") != 0) {
      if (strcmp(v87, "Zac") != 0) {
        if (strcmp(v87, "Yan") != 0 && strcmp(v87, "Sar") != 0 &&
            strcmp(v87, "Bon") != 0 && strcmp(v87, "Urs") != 0) {
          if (strcmp(v87, "Fab") != 0 && strcmp(v87, "Tob") != 0) {
            if (strcmp(v87, "Maj") != 0) {
              goto LABEL_232;
            }
            v88 = "MID_ScoutInfo_NegotiationConditions_Talk";
          }
          else {
            v88 = "MID_ScoutInfo_NegotiationConditions_Item";
          }
        }
        else {
          v88 = "MID_ScoutInfo_NegotiationConditions_Question";
        }
      }
      else {
        v88 = "MID_ScoutInfo_NegotiationConditions_Price";
      }
    }
    else {
      v88 = "MID_ScoutInfo_NegotiationConditions_Win";
    }
    GameRoutine_60a020((__int64)v149, v88),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_232:
    if ((v149[0] & 1) != 0) {
      v124 = v149[1];
    }
    else {
      v124 = (unsigned __int64)LOBYTE(v149[0]) >> 1;
    }
    LayoutAccessor_155e830((__int64)v49, v124 != 0),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v125 = v149[0] & 1;
    v126 = (unsigned __int64)LOBYTE(v149[0]) >> 1;
    if (v125 != 0) {
      v126 = v149[1];
    }
    if (v126 != 0) {
      if ((v53 & 4) != 0) {
        v127 = "Default";
      }
      else {
        v127 = "Disable";
      }
      GameRoutine_15996e0(v49, v144_.v145, (v53 & 4) != 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      LayoutAccessor_1562cf0((__int64)v49, v127),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      LayoutAccessor_1562cf0((__int64)v49, "Txt"),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      ui_LayoutAccessor_SetPaneVisible((__int64)v49, (__int64)"T_Txt", 1),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v149[0] & 1) != 0) {
        v128 = (const char*)v149[2];
      }
      else {
        v128 = (char*)v149 + 1;
      }
      LayoutAccessor_1562060(v49, (__int64)"T_Txt", v128),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v125 = v149[0] & 1;
    }
    if (v125 == 0) {
      goto LABEL_213;
    }
    goto LABEL_123;
  }
  if (v59 == 1) {
    game_6e8960((__int64)v149, v8 + 80),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v81 = UnitUtil_1212be0((__int64)v149, 0),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v82 = false;
    if ((v53 & 4) == 0) {
      v82 = v81 < *(unsigned __int16*)(v8 + 96);
    }
    GameRoutine_157b170(v49, *(_QWORD*)(v8 + 88), 0),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v83 = ui_LayoutAccessor_FindPane(v49, (__int64)"Icon"),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v83 != 0) {
      v84 = __dynamic_cast(v83, GameData_212d670[0], GameData_212d678[0], 0),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v84 != 0) {
        v85 = v84;
        if ((a4 & v82 & 1) != 0) {
          v86 = (int*)((char*)GameData_212da30 + 120);
        }
        else {
          v86 = GameRoutine_15d1fa0(),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        LODWORD(v149[0]) = *v86;
        (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v85 + 40LL))(v85, 0,
                                                                        v149),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v85 + 40LL))(v85, 1,
                                                                         v149),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v85 + 40LL))(v85, 2,
                                                                         v149),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, __int64, __int64*))(*(_QWORD*)v85 + 40LL))(v85, 3,
                                                                         v149),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v49, (__int64)"T_Txt", 1),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v109 = GameHr_6ed030(*(_QWORD*)(v8 + 88)),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetTextBoxString(v49, (__int64)"T_Txt", (__int64)v109),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v49, "Item"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v110 = game_util_Format("%d", v81),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetTextBoxString(v49, (__int64)"T_ItemMaxNum",
                                       (__int64)v110),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v111 = game_util_Format("%d", *(unsigned __int16*)(v8 + 96)),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetTextBoxString(v49, (__int64)"T_ItemNum",
                                       (__int64)v111),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v82) {
      v112 = "Disable_Item";
    }
    else {
      v112 = "Default";
    }
    LayoutAccessor_1562cf0((__int64)v49, v112),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1560070((void*)(v149), v49, "L_Scout_Num"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v149[1] == 0) {
      goto LABEL_211;
    }
    v106 = std___1___shared_weak_count_lock(v149[1]),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v106 != 0) {
      v113 = v149[0];
    }
    else {
      v113 = 0;
    }
    if (v149[1] != 0) {
      std___1___shared_weak_count___release_weak(v149[1]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (v113 != 0) {
      v133[0] = v113;
      v133[1] = v106;
      if (v106 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v106 + 16), 1u,
                                  memory_order_relaxed);
      }
      game_6e8960((__int64)v146_.v146, v8 + 80),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      game_gameui_1584d90((__int64)v149, v146_.v146, v81,
                          *(unsigned __int16*)(v8 + 96)),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameRoutine_1584e30(v133, (__int64)v149, (v53 & 4) == 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      GameHr_930e20((__int64)&v150_.v150),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v106 == 0) {
        goto LABEL_211;
      }
      goto LABEL_208;
    }
  LABEL_198:
    if (v106 == 0) {
    LABEL_211:
      v118 = ui_LayoutAccessor_FindAlignment(v49, (__int64)"A_Condition"),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v118 != 0) {
        Alignment_56b600(v118),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      goto LABEL_213;
    }
  LABEL_209:
    if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak(v106),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    goto LABEL_211;
  }
  if (v59 == 2) {
  LABEL_144:
    if ((v53 & 4) != 0) {
      v89 = false;
    }
    else {
      v90 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v90 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      v89 = v90 < *(unsigned __int16*)(v8 + 96);
    }
    v91 = ui_LayoutAccessor_FindPane(v49, (__int64)"Icon"),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v91 != 0) {
      v92 = __dynamic_cast(v91, GameData_212d670[0], GameData_212d678[0], 0),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v93 = 36;
      if ((a4 & v89) != 0) {
        v93 = 72;
      }
      if (v92 != 0) {
        v94 = v92;
        v95 = *(_DWORD*)((char*)GameData_212da30 + v93);
        v96 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v92 + 88LL))(v92, 0),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v96 != 0) {
          *(_DWORD*)(v96 + 12) = v95;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v94, 0, 7u,
                        "IconStock_Gold"),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    if (v89) {
      v97 = "Disable";
    }
    else {
      v97 = "Default";
    }
    LayoutAccessor_1562cf0((__int64)v49, v97),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v49, "Cost"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v150_.v153 = -1;
    v154_.v154 = -1;
    v154_.v155 = -1;
    v154_.v156 = -1;
    v98 = *msg_MessageManager_instance__ptr[0];
    v154_.v157 = -1;
    v154_.v158 = -1;
    v154_.v159 = -1;
    v154_.v160 = -1;
    v154_.v161 = -1;
    v154_.v162 = -1;
    v154_.v163 = -1;
    v154_.v164 = -1;
    v149[0] = (__int64)(GameData_212e348 + 2);
    v149[1] = 0xFFFF0001FFFF0000LL;
    v149[2] = 0xFFFF0004FFFF0002LL;
    v150_.v150 = 0xFFFF0006FFFF0005LL;
    v154_.v165 = 8;
    v150_.v151 = -65529;
    v150_.v152 = -65528;
    v99 = GameRoutine_a4dbe0(v98, "MID_Sys_Gold", 0),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v99 != nullptr) {
      v100 = (__int64)v99;
      v101 = ui_LayoutAccessor_FindTextBox(v49, (__int64)"T_Txt"),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v101 != 0) {
        GameRoutine_156c5d0(v101, v100, 0),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    v102 = *(unsigned __int16*)(v8 + 96);
    v146_.v147 = 0;
    v148 = GameData_21759e0;
    *(_QWORD*)&v146_.v146[1] = 0x200000000LL;
    LOBYTE(v146_.v146[0]) = 3;
    task_17d8560((void*)(v149), v102, (__int64)&v148, v146_.v146),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((v149[0] & 1) != 0) {
      v103 = (char*)v149[2];
    }
    else {
      v103 = (char*)v149 + 1;
    }
    if (v103 != nullptr) {
      v104 = ui_LayoutAccessor_FindTextBox(v49, (__int64)"T_CostNum"),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v104 != 0) {
        GameRoutine_156c5d0(v104, (__int64)v103, 0),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    if ((v149[0] & 1) != 0 && v149[2] != 0) {
      v105 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v149[2]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    LayoutAccessor_1560070((void*)(v149), v49, "L_Scout_Num"),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v149[1] == 0) {
      goto LABEL_211;
    }
    v106 = std___1___shared_weak_count_lock(v149[1]),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v107 = (__int64*)v149[0];
    if (v149[1] != 0) {
      std___1___shared_weak_count___release_weak(v149[1]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (v106 != 0 && v107 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v106 + 16), 1u,
                                memory_order_relaxed);
      if (game_GameModeData_instance_ != 0) {
        v108 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      else {
        v108 = 0;
      }
      LODWORD(v149[0]) = 0;
      v114 = *(unsigned __int16*)(v8 + 96);
      *(__int64*)((char*)v149 + 4) = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v115 = *GameData_212ceb0;
      }
      else {
        v115 = 0;
      }
      *(__int64*)((char*)&v149[1] + 4) = v115;
      WORD1(v150_.v150) = 0;
      HIDWORD(v150_.v150) = 0;
      v154_.v155 = 0;
      v154_.v156 = 0;
      v154_.v157 = 0;
      v154_.v158 = 0;
      v150_.v153 = (__int64)&v154_.v154;
      v154_.v154 = 0;
      GameRoutine_930b90((__int64)&v150_.v150, (__int64)GameData_212c8b0[0]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      LODWORD(v154_.v159) = 0;
      HIDWORD(v154_.v159) = v108;
      LODWORD(v154_.v160) = v114;
      v116 = std___1___shared_weak_count_lock(v106),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v116 != 0) {
        v117 = v116;
        Util_1584ec0(v107, (__int64)v149, 1u),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v117 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          std___1___shared_weak_count___release_weak(v117),
              v50 = COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
      GameHr_930e20((__int64)&v150_.v150),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LABEL_208:
      std___1___shared_weak_count___release_weak(v106),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      goto LABEL_209;
    }
    goto LABEL_198;
  }
LABEL_213:
  result = ui_LayoutAccessor_FindAlignment(v49, (__int64)"A_Txt"),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (result != 0) {
    result = Alignment_56b600(result),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_215:
  if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    result = std___1___shared_weak_count___release_weak(v48),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_217:
  v119 = v144_.v144;
  if (v144_.v144 <= 2) {
    do {
      v121 = game_util_Format("L_Condition%02d", v119),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      LayoutAccessor_1560070((void*)(v149), a1, v121),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      result = v149[1];
      if (v149[1] != 0) {
        v122 = std___1___shared_weak_count_lock(v149[1]),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v123 = v149[0];
        result = v149[1];
        if (v149[1] != 0) {
          result = std___1___shared_weak_count___release_weak(v149[1]),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        if (v122 != 0 && v123 != 0) {
          result = LayoutAccessor_155e830(v123, 0),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LABEL_227:
          if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122),
                v50 =
                    COERCE_AS(__typeof__(v50),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            result = std___1___shared_weak_count___release_weak(v122),
            v50 = COERCE_AS(__typeof__(v50),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          goto LABEL_219;
        }
        if (v122 != 0) {
          goto LABEL_227;
        }
      }
    LABEL_219:
      v120 = v144_.v144;
      v119 = ++v144_.v144;
    } while (v120 < 2);
  }
  return result;
}

#pragma GCC visibility pop
