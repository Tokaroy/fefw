#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__int64 GameRoutine_1313fe0(unsigned __int64);
__int64 Manager_13114c0(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 nn_prepo_Array_Clear(__int64);
__int64 nn_prepo_PlayReport_Add_1a0ade0(__int64, const char*, bool);
__int64 nn_prepo_PlayReport_Add_1a0adf0(__int64, const char*, const char*);
__int64 nn_prepo_PlayReport_Add_1a0ae00(__int64, const char*, __int64);
__int64 nn_prepo_PlayReport_Add_1a0ae20(__int64, const char*, __int64);
__int64 nn_prepo_PlayReport_GetCount(__int64);
__int64 nn_prepo_PlayReport_Save(__int64, __int64);
__int64 nn_prepo_PlayReport_SetEventId(__int64, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN GameData_1abf7e9;
extern _UNKNOWN GameData_2240f68;
extern __int64 (*GameData_2025b08[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cf70[7];
extern __int64 GameData_2240f58;
extern __int64 GameData_2240f60;
extern __int64 game_GameModeData_instance_;
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
void nn_prepo_PlayReport_Clear(__int64);
void game_playreport_13108c0(__int64 a1, unsigned __int64** a2);

void game_playreport_13108c0(__int64 a1, unsigned __int64** a2)
{
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  const char* v19;
  _BYTE* v20;
  const char* v21;
  char v22;
  const char* v23;
  const char* v24;
  bool v25;
  const char* v26;
  int v27;
  const char* v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64* v39;
  unsigned __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  struct {
    __int64 v45[2];
    unsigned __int64 v46;
    unsigned __int64 v47;
    __int64* v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
  } v45_;
  __int64 v62;
  __int64 v63;

  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1, "unit_common") == 0) {
    *(_BYTE*)(a1 + 88) = 1;
  }
  Manager_13114c0(a1),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v4 = game_GetHero(9u),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v4 != 0) {
    for (i = v4; i != 0; i = *(_QWORD*)(i + 624)) {
      v6 = i;
    }
    if (*(_BYTE*)(v6 + 441) != 3) {
      goto LABEL_13;
    }
    {
      v7 = *(_QWORD*)(v4 + 624);
      __asm__ volatile("" ::"r"(v7));
    }
    v8 = v4;
    if (v7 == 0) {
      v7 = v4;
    }
    v45_.v45[0] = v7;
    LODWORD(v63) = 241;
    v9 = game_UnitPool_Find_6ead60(v45_.v45, (int*)&v63),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v9 != nullptr) {
      v10 = (__int64)(v9 + 263);
      v4 = v8;
      goto LABEL_14;
    }
    v4 = v8;
    {
      v11 = *(_QWORD*)(game_GameModeData_instance_ + 176);
      __asm__ volatile("" ::"r"(v11));
    }
    if (*(_BYTE*)(v11 + 144) != 0) {
      v10 = v11 + 112;
    }
    else {
    LABEL_13:
    }
    {
      v10 = GameData_212cf70[0];
      __asm__ volatile("" ::"r"(v10));
    }
  LABEL_14:
    if (*(_BYTE*)(v10 + 32) == 0) {
      goto LABEL_62;
    }
    {
      v12 = *(const char**)(v4 + 32);
      __asm__ volatile("" ::"r"(v12));
    }
    if (v12 == nullptr) {
      v25 = false;
      goto LABEL_38;
    }
    {
      v13 = msg_MessageManager_instance__ptr[0];
      __asm__ volatile("" ::"r"(v13));
    }
    v45_.v49 = -1;
    v45_.v50 = -1;
    v45_.v51 = -1;
    v45_.v52 = -1;
    {
      v14 = *msg_MessageManager_instance__ptr[0];
      __asm__ volatile("" ::"r"(v14));
    }
    v45_.v53 = -1;
    v45_.v54 = -1;
    v45_.v55 = -1;
    v45_.v56 = -1;
    v45_.v57 = -1;
    v45_.v58 = -1;
    v45_.v59 = -1;
    v45_.v60 = -1;
    v45_.v45[0] = (__int64)(GameData_212e348 + 2);
    v45_.v45[1] = 0xFFFF0001FFFF0000LL;
    v45_.v46 = 0xFFFF0004FFFF0002LL;
    v45_.v47 = 0xFFFF0006FFFF0005LL;
    v45_.v61 = 8;
    v45_.v48 = (__int64*)0xFFFF0008FFFF0007LL;
    v15 = GameRoutine_a4dbe0(v14, v12, 0),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v16 = *(unsigned __int8*)(v10 + 8);
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(_QWORD*)(v10 + 16);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = *v13;
      __asm__ volatile("" ::"r"(v18));
    }
    if ((v16 & 1) == 0) {
      v17 = v16 >> 1;
    }
    if (v17 == 0) {
      goto LABEL_23;
    }
    if (v17 == 1) {
      {
        v19 = *(const char**)(v10 + 24);
        __asm__ volatile("" ::"r"(v19));
      }
      v20 = (_BYTE*)(v10 + 9);
      if ((v16 & 1) != 0) {
        v20 = *(_BYTE**)(v10 + 24);
        __asm__ volatile("" ::"r"(v20));
      }
      if (*v20 == 7) {
      LABEL_23:
        {
          v21 = *(const char**)(v18 + 15056);
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(_BYTE*)(v18 + 15040);
          __asm__ volatile("" ::"r"(v22));
        }
        v23 = (const char*)(v18 + 15041);
        if ((v22 & 1) != 0) {
          v24 = v21;
        }
        else {
          v24 = v23;
        }
        v25 = false;
        if (v15 == nullptr) {
        LABEL_38:
          if (*(_BYTE*)(a1 + 88) == 1) {
            nn_prepo_PlayReport_Add_1a0ade0(a1, "EditIsDefaultName", v25),
                v36 =
                    COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (*(_BYTE*)(a1 + 88) == 1) {
              {
                v27 = *(unsigned __int8*)(v10 + 32);
                __asm__ volatile("" ::"r"(v27));
              }
              v28 = "undefined";
              if (v27 == 2) {
                v28 = "FEMALE";
              }
              if (v27 == 1) {
                v29 = "MALE";
              }
              else {
                v29 = v28;
              }
              nn_prepo_PlayReport_Add_1a0adf0(a1, "EditGender", v29),
                  v36 = COERCE_AS(
                      __typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v37 = COERCE_AS(
                      __typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              if (*(_BYTE*)(a1 + 88) == 1) {
                {
                  v30 = *(unsigned __int8*)(v10 + 33) >= 5u
                            ? -1LL
                            : *(unsigned __int8*)(v10 + 33);
                  __asm__ volatile("" ::"r"(v30));
                }
                nn_prepo_PlayReport_Add_1a0ae00(a1, "EditBodyType", v30),
                    v36 = COERCE_AS(
                        __typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v37 = COERCE_AS(
                        __typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v6 = COERCE_AS(
                        __typeof__(v6),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (*(_BYTE*)(a1 + 88) == 1) {
                  {
                    v31 = *(unsigned __int8*)(v10 + 35) >= 0xCu
                              ? -1LL
                              : *(unsigned __int8*)(v10 + 35);
                    __asm__ volatile("" ::"r"(v31));
                  }
                  nn_prepo_PlayReport_Add_1a0ae00(a1, "EditBodyColor", v31),
                      v36 = COERCE_AS(
                          __typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v37 = COERCE_AS(
                          __typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v6 = COERCE_AS(
                          __typeof__(v6),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  if (*(_BYTE*)(a1 + 88) == 1) {
                    {
                      v32 = *(unsigned __int8*)(v10 + 34) >= 4u
                                ? -1LL
                                : *(unsigned __int8*)(v10 + 34);
                      __asm__ volatile("" ::"r"(v32));
                    }
                    nn_prepo_PlayReport_Add_1a0ae00(a1, "EditHeadType", v32),
                        v36 = COERCE_AS(
                            __typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v37 = COERCE_AS(
                            __typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                        v6 = COERCE_AS(
                            __typeof__(v6),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    if (*(_BYTE*)(a1 + 88) == 1) {
                      if (*(unsigned __int8*)(v10 + 36) >= 0x18u) {
                        v33 = -1;
                      }
                      else {
                        v33 = *(unsigned __int8*)(v10 + 36);
                        __asm__ volatile("" ::"r"(v33));
                      }
                      nn_prepo_PlayReport_Add_1a0ae00(a1, "EditHairColor", v33),
                          v36 = COERCE_AS(
                              __typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v37 = COERCE_AS(
                              __typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                          v6 = COERCE_AS(
                              __typeof__(v6),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    }
                  }
                }
              }
            }
          }
          goto LABEL_62;
        }
      LABEL_36:
        if (v24 != nullptr) {
          v25 = strcmp(v15, v24) == 0,
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        goto LABEL_38;
      }
    }
    else {
      {
        v19 = *(const char**)(v10 + 24);
        __asm__ volatile("" ::"r"(v19));
      }
    }
    v26 = (const char*)(v10 + 9);
    if ((v16 & 1) != 0) {
      v26 = v19;
    }
    if (*v26 == 7) {
      v24 = v26 + 1;
    }
    else {
      v24 = v26;
    }
    v25 = false;
    if (v15 == nullptr) {
      goto LABEL_38;
    }
    goto LABEL_36;
  }
LABEL_62:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240f68,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2240f68) != 0) {
    GameData_2240f60 = (__int64)&GameData_1abf7e9;
    GameData_2240f58 = game_HashString((__int64)&GameData_1abf7e9),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    __cxa_guard_release((__int64)&GameData_2240f68),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v34 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2240f58)) != 0) {
    {
      v35 = *(int*)(v34 + 32);
      __asm__ volatile("" ::"r"(v35));
    }
  }
  else {
    v35 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "ReinforceIsmCount", v35),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (a2 != nullptr) {
    nn_prepo_Array_Clear(a1 + 176),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v38 = v45_.v45;
    v45_.v46 = a1 + 176;
    v45_.v45[0] = (__int64)GameData_2025b08;
    v45_.v45[1] = a1 + 96;
    {
      v39 = *a2;
      __asm__ volatile("" ::"r"(v39));
    }
    {
      v40 = a2[1];
      __asm__ volatile("" ::"r"(v40));
    }
    v45_.v48 = v45_.v45;
    if (v39 == v40) {
      goto LABEL_83;
    }
    do {
      v41 = GameRoutine_1313fe0(*v39),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v42 = GameRoutine_1313fe0(v39[1]),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v41 != 0 && v42 != 0) {
        v62 = v42;
        v63 = v41;
        if (v45_.v48 == nullptr) {
          GameRoutine_60a310(),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        (*(void (**)(__int64*, __int64*, __int64*))(*v45_.v48 + 48))(
            v45_.v48, &v63, &v62),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v39 += 2;
    } while (v39 != v40);
    v38 = v45_.v48;
    if (v45_.v48 == v45_.v45) {
    LABEL_83:
      v44 = 32;
    }
    else {
      if (v45_.v48 == nullptr) {
        goto LABEL_85;
      }
      v44 = 40;
    }
    (*(void (**)(__int64*, __int64, __int64))(*v38 + v44))(v38, v36, v37),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LABEL_85:
    if (*(_BYTE*)(a1 + 88) == 1) {
      nn_prepo_PlayReport_Add_1a0ae20(a1, "PairEnd", a1 + 176),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    if ((int)nn_prepo_PlayReport_GetCount(a1) < 2 || *(_OWORD*)(a1 + 72) == 0) {
      nn_prepo_PlayReport_Clear(a1),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      nn_prepo_PlayReport_Save(a1, a1 + 72),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    *(_BYTE*)(a1 + 88) = 0;
  }
}

#pragma GCC visibility pop
