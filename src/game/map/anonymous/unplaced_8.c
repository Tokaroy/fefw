#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_UnitPool_Get(_BYTE*);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_753bb0(__int64 result);
__int64 TargetEnumerator_77c150(__int64 result, __int64*, int, int);
__int64 TargetEnumerator_77e300(__int64, _WORD*, __int64);
__int64 TargetEnumerator_77eea0(__int64, __int64, __int16);
__int64 TargetEnumerator_77f010(__int64, char*);
__int64 Trick_7d2180(__int64, unsigned int, unsigned int, __int64);
bool GameRoutine_6fc380(__int64);
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21cd158;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_map_anonymous_7807a0(__int64 a1, _WORD* a2, int a3, int a4,
                                  __int64 a5);

__int64 game_map_anonymous_7807a0(__int64 a1, _WORD* a2, int a3, int a4,
                                  __int64 a5)
{
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  char v25;
  __int64* v26;
  int v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _BYTE* v40;
  int v41;
  __int64 v42;
  struct {
    __int64 v43;
    char gap8_[12];
    char v44;
    char v45;
    char v46;
    __int16 v47;
    char v48;
    __int16 v49;
  } f_;
  int v50;

  if ((*a2 & 0xFFF) == 0) {
    if ((MapUtil_753570(a3, a4) & 1) == 0) {
      return 0;
    }
    v23 = *(__int64**)(a5 + 32);
    f_.v44 = 0;
    v50 = 0;
    f_.v48 = 0;
    f_.v45 = a3;
    f_.v46 = a4;
    f_.v49 = -1;
    f_.v47 = 9;
    if (v23 == nullptr) {
      goto LABEL_61;
    }
  LABEL_39:
    v34 = *v23;
    goto LABEL_40;
  }
  TargetEnumerator_77c150((__int64)&f_.v44, (__int64*)a1, a3, a4);
  v10 = *(_DWORD*)a2 & 0xFFFLL;
  if ((*(_DWORD*)a2 & 0xFFF) == 0) {
    return 0;
  }
  v11 = &GameData_21c99b0;
  v12 = *(_QWORD*)(GameData_21c99b0 + 64);
  v13 = *(_QWORD*)(v12 + 8 * v10);
  v14 = *(unsigned __int16*)(v13 + 656);
  if (*(_WORD*)(v13 + 656) != 0) {
    v15 = (__int64*)(*(_QWORD*)(v13 + 664) + 8LL);
    while (1) {
      v17 = *v15;
      v15 += 2;
      v16 = v17;
      if (*(_WORD*)(v17 + 16) != 0 &&
          *(_WORD*)(*(_QWORD*)(v16 + 48) + 16LL) != 0) {
        break;
      }
      if (--v14 == 0) {
        goto LABEL_10;
      }
    }
    if ((TargetEnumerator_77eea0(a1, (__int64)&f_.v44, *(_DWORD*)a2) & 1) ==
        0) {
      return 0;
    }
    v12 = *(_QWORD*)(GameData_21c99b0 + 64);
    v10 = *(_DWORD*)a2 & 0xFFF;
  }
LABEL_10:
  v18 = *(_QWORD*)(v12 + 8 * v10);
  v19 = *(unsigned __int16*)(v18 + 656);
  if (*(_WORD*)(v18 + 656) == 0) {
    goto LABEL_34;
  }
  v20 = *(unsigned __int16*)(v18 + 656);
  v21 = (__int64*)(*(_QWORD*)(v18 + 664) + 8LL);
  while (1) {
    v22 = *v21;
    v21 += 2;
    if (*(_BYTE*)(v22 + 57) == 14) {
      break;
    }
    if (--v20 == 0) {
    LABEL_34:
      if (f_.v48 != 0) {
        v33 = game_UnitPool_Get(&f_.v48);
      }
      else {
        v33 = nullptr;
      }
      if ((TargetEnumerator_77e300(a1, a2, (__int64)v33) & 1) != 0) {
      LABEL_38:
        v23 = *(__int64**)(a5 + 32);
        if (v23 != nullptr) {
          goto LABEL_39;
        }
      LABEL_61:
        GameRoutine_60a310();
      }
      if ((f_.v49 & 0x8000000000000000LL) == 0) {
        v36 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
        if (v36 != 0) {
          v37 = v36 + 144LL * f_.v49;
          if ((MapUtil_753bb0(v37) & 1) != 0) {
            v38 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                             8LL * (*(_DWORD*)a2 & 0xFFF));
            if (v38 == 0) {
              goto LABEL_47;
            }
            v39 = *(unsigned __int8*)(v38 + 250);
            if ((unsigned int)v39 <= 0x25) {
              if (((1LL << v39) & 0x6018181) != 0) {
              LABEL_47:
                v41 = *(unsigned __int8*)(a1 + 8);
                v40 = (_BYTE*)(a1 + 8);
                if (v41 != 0) {
                  game_UnitPool_Get(v40);
                }
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 280LL))(v37) &
                     1) != 0 &&
                        GameRoutine_6fc380(
                            *(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                                       8LL * (*(_DWORD*)a2 & 0xFFF))) ||
                    ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v37 + 296LL))(
                         v37, (__int64)a2) &
                     1) != 0) {
                  goto LABEL_52;
                }
              }
              else if (v39 == 37 &&
                       ((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 272LL))(v37) &
                        1) != 0) {
              LABEL_52:
                v42 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                                 8LL * (*(_DWORD*)a2 & 0xFFF));
                if (v42 != 0 &&
                    (unsigned int)*(unsigned __int8*)(v42 + 250) - 15 <= 1) {
                  HIBYTE(f_.v47) |= 1u;
                }
                goto LABEL_38;
              }
            }
          }
        }
      }
      if ((MapUtil_753570(a3, a4) & 1) == 0) {
        return 0;
      }
      v23 = *(__int64**)(a5 + 32);
      if (v23 == nullptr) {
        goto LABEL_61;
      }
      v34 = *v23;
    LABEL_40:
      (*(void (**)(__int64))(v34 + 48))((__int64)v23);
      return 1;
    }
  }
  f_.v43 = a5;
  v24 = 8;
  v25 = 0;
  v26 = GameData_212ce90[0];
  do {
    LOBYTE(v27) = *(_BYTE*)(a1 + 8);
    if ((_BYTE)v27 == 0) {
      goto LABEL_20;
    }
    v28 = *(_QWORD*)(*(_QWORD*)(v18 + 664) + v24);
    v29 = game_UnitPool_Get((_BYTE*)(a1 + 8));
    if (v29 == nullptr) {
      goto LABEL_19;
    }
    if (*v26 != 0 && (*(_BYTE*)(*v26 + 21) & 2) != 0) {
      v30 = v29[55];
      if (v30 != 0) {
        v31 = *(unsigned __int8*)(v30 + 16);
      }
      else {
        v31 = 9;
      }
      LOBYTE(v27) = 0;
      v32 = *GameData_212ce98[0];
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
              (unsigned int)(unsigned __int8)(f_.v45 -
                                              *(_BYTE*)(*GameData_212ce98[0] +
                                                        16)) ||
          *(unsigned __int8*)(v32 + 19) <=
              (unsigned int)(unsigned __int8)(f_.v46 - *(_BYTE*)(v32 + 17))) {
        goto LABEL_20;
      }
      if (((*(_DWORD*)(*(_QWORD*)(v32 + 160) + (v31 << 7) +
                       4LL * ((f_.v45 + 32 * f_.v46) >> 5) + 8) >>
            f_.v45) &
           1) == 0) {
        goto LABEL_19;
      }
    }
    if ((Trick_7d2180(*(_QWORD*)(*GameData_212cfb8[0] + 16), f_.v45, f_.v46,
                      v28) &
         1) == 0) {
    LABEL_19:
      LOBYTE(v27) = 0;
      goto LABEL_20;
    }
    v27 = TargetEnumerator_77f010(a1, &f_.v44) ^ 1;
  LABEL_20:
    --v19;
    v24 += 16;
    v25 |= v27;
  } while (v19 != 0);
  a5 = f_.v43;
  v11 = GameData_212c880[0];
  if ((v25 & 1) != 0) {
    goto LABEL_34;
  }
  return 0;
}

#pragma GCC visibility pop
