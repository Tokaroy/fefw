#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameHr_1562680(_QWORD, _QWORD, float);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_156c910(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
__int64 ui_game_19ac9e0(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5,
                        int a6);

__int64 ui_game_19ac9e0(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5,
                        int a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  const char* v26;
  char v27;
  char v28;
  int v29;
  char v31;
  int v32;
  __int64 v33;
  __int64 v34;

  LayoutAccessor_1560070((void*)(&v33), a1 + 88, "L_Num");
  result = v34;
  if (v34 == 0) {
    goto LABEL_46;
  }
  v13 = std___1___shared_weak_count_lock(v34);
  v14 = v33;
  result = v34;
  if (v34 != 0) {
    result = std___1___shared_weak_count___release_weak(v34);
  }
  if (v13 == 0 || v14 == 0) {
    if (v13 == 0) {
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v16 = (a2 > a3) & a5;
  v17 = ui_LayoutAccessor_FindPane(v14, "T_Num");
  if (v17 != 0) {
    v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
    if (v18 != 0) {
      v19 = v18;
      if (a2 == a3 || (a5 & 1) == 0) {
        v20 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        v21 = Pane_58f8a0(v18);
        if (v21 != 0) {
        LABEL_20:
          *(_DWORD*)(v21 + 12) = v20;
        }
      }
      else {
        v20 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                         (_QWORD)GameData_212da30);
        v32 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                         (_QWORD)GameData_212da30 + 4);
        v21 = Pane_58f8a0(v18);
        if (v21 != 0) {
          if (((a2 > a3) & a5) != 0) {
            v20 = v32;
          }
          goto LABEL_20;
        }
      }
      game_156c910(v19, "%d", 1);
      v16 = (a2 > a3) & a5;
    }
  }
  v22 = ui_LayoutAccessor_FindPane(v14, "IconUpDown");
  if (v22 != 0) {
    v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    if (v23 != 0) {
      v24 = *(_BYTE*)(v23 + 88);
      if (a2 == a3 || (a5 & 1) == 0) {
        v28 = v24 & 0xFE;
      }
      else {
        v25 = v23;
        *(_BYTE*)(v23 + 88) = v24 | 1;
        if (v16 != 0) {
          v26 = "Up";
        }
        else {
          v26 = "Down";
        }
        GameHr_1562680(v14, v26, 1.0f);
        v27 = *(_BYTE*)(v25 + 88);
        v23 = v25;
        *(_DWORD*)(v25 + 68) = 0;
        v28 = v27 | 0x10;
      }
      *(_BYTE*)(v23 + 88) = v28;
    }
  }
  result = ui_LayoutAccessor_FindPane(v14, "IconMax");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      if (a6 >= 0) {
        v29 = a6;
      }
      else {
        v29 = a3;
      }
      if (a4 <= 0 || v29 < a4) {
        v31 = *(_BYTE*)(result + 88) & 0xFE;
      }
      else {
        v31 = (*(_BYTE*)(result + 88) & 0xFE) + 1;
      }
      *(_BYTE*)(result + 88) = v31;
    }
  }
LABEL_44:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
LABEL_46:
  *(_DWORD*)(a1 + 1076) = a2;
  return result;
}

#pragma GCC visibility pop
