#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__int64 FloatingHelp_18ae4d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FloatingHelp_18ae4d0_alt1(__int64, _QWORD**, unsigned int);
__int64 MenuItem_188b880(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_21f1e08;
__int64 game_gameui_control_1895490(_QWORD* a1, char a2);
__int64 game_gameui_control_18955b0(_QWORD* a1, char a2);
__int64 game_gameui_control_18956d0(_QWORD* a1, char a2, int a3);
__int64 game_gameui_control_18957f0(_QWORD* a1, char a2, int a3);
__int64 game_gameui_control_189fd50(_QWORD* a1, char a2);
__int64 game_gameui_control_189fe70(_QWORD* a1, char a2);
__int64 game_gameui_control_189ff90(_QWORD* a1, char a2, int a3);
__int64 game_gameui_control_18a00b0(_QWORD* a1, char a2, int a3);
__int64 game_gameui_control_18b2d50(_QWORD* a1);
__int64 game_gameui_control_18b2e10(_QWORD* a1);
__int64 game_gameui_control_18b2ed0(_QWORD* a1);
__int64 game_gameui_control_18b2f90(_QWORD* a1);

__int64 game_gameui_control_1895490(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = FloatingHelp_18ae4d0(GameData_21f1e08, &v10, 2, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 32;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 game_gameui_control_18955b0(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = FloatingHelp_18ae4d0(GameData_21f1e08, &v10, 3, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 31;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 game_gameui_control_18956d0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = FloatingHelp_18ae4d0(GameData_21f1e08, &v12, 0, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 30;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 game_gameui_control_18957f0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = FloatingHelp_18ae4d0(GameData_21f1e08, &v12, 1, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 29;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 game_gameui_control_189fd50(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = FloatingHelp_18ae4d0(GameData_21f1e08, &v10, 2, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 32;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 game_gameui_control_189fe70(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = FloatingHelp_18ae4d0(GameData_21f1e08, &v10, 3, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 31;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 game_gameui_control_189ff90(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = FloatingHelp_18ae4d0(GameData_21f1e08, &v12, 0, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 30;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 game_gameui_control_18a00b0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = FloatingHelp_18ae4d0(GameData_21f1e08, &v12, 1, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 29;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 game_gameui_control_18b2d50(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    FloatingHelp_18ae4d0_alt1(GameData_21f1e08, &v6, 2u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_gameui_control_18b2e10(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    FloatingHelp_18ae4d0_alt1(GameData_21f1e08, &v6, 3u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_gameui_control_18b2ed0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    FloatingHelp_18ae4d0_alt1(GameData_21f1e08, &v6, 0);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_gameui_control_18b2f90(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  Element_1885a60((void*)(&v4), a1);
  v1 = v5;
  v6 = nullptr;
  v7 = 0;
  if (v5 != 0) {
    v1 = std___1___shared_weak_count_lock(v5);
    v7 = v1;
    if (v1 != 0) {
      v6 = v4;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    FloatingHelp_18ae4d0_alt1(GameData_21f1e08, &v6, 1u);
    v1 = v7;
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v2);
  }
  result = v5;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

#pragma GCC visibility pop
