#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_CorpsManager_EachUnit(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 GameData_21ca310;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 Troop_133ed80(__int64 result, __int64 a2);
__int64
game_CorpsManager_EachUnit_alt1(__int64 result,
                                __int64) __asm__("game_CorpsManager_EachUnit");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 Troop_133ed80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;

  v2 = *(_QWORD*)(result + 96);
  if (v2 != 0) {
    if (*(_BYTE*)(v2 + 32) == 1) {
      v4 = *(_QWORD*)(result + 568);
      v5 = *(_QWORD*)(result + 576);
      if (v4 != v5) {
        while (1) {
          v6 = *(_QWORD*)(a2 + 32);
          v16 = v4;
          if (v6 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(
              v6, &v16);
          v4 += 2224;
          if (v4 == v5) {
            return result;
          }
        }
        goto LABEL_34;
      }
    }
  }
  else if (*(_QWORD*)(result + 552) == 0) {
    v7 = *(unsigned int*)(result + 84);
    if ((v7 & 0x80000000) != 0) {
      LODWORD(v16) = 17;
      result = game_UnitPool_GetFirst_alt1((int*)&v16);
      if (result != 0) {
        v8 = *(_QWORD*)(result + 432);
        if (v8 == 0) {
          v9 = *(_QWORD*)(result + 440);
          if (v9 != 0 &&
              (unsigned int)(v10 = *(unsigned __int8*)(v9 + 16)) <= 8) {
            v15 = v10 - 3;
            while (1) {
              if (v15 == 0) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v8 != 0) {
                  break;
                }
              }
              if (++v15 == 6) {
                goto LABEL_15;
              }
            }
          }
          else {
          LABEL_15:
            v8 = 0;
          }
        }
        v16 = result;
        v11 = *(_QWORD*)(a2 + 32);
        if (v11 == 0) {
        LABEL_34:
          GameRoutine_60a310_alt1();
        }
        while (1) {
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v16);
          if (v8 == 0) {
            break;
          }
          v12 = *(_QWORD*)(v8 + 432);
          if (v12 == 0) {
            v12 = *(_QWORD*)(v8 + 440);
            if (v12 != 0) {
              v13 = *(unsigned __int8*)(v12 + 16);
              if (v13 > 8) {
              LABEL_18:
                v12 = 0;
              }
              else {
                v14 = v13 - 3;
                while (1) {
                  if (v14 == 0) {
                    v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                     556096LL);
                    if (v12 != 0) {
                      break;
                    }
                  }
                  if (++v14 == 6) {
                    goto LABEL_18;
                  }
                }
              }
            }
          }
          v11 = *(_QWORD*)(a2 + 32);
          v16 = v8;
          v8 = v12;
          if (v11 == 0) {
            goto LABEL_34;
          }
        }
      }
    }
    else {
      return game_CorpsManager_EachUnit_alt1(v7, a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
