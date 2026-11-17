#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_167f6d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameConst_7f8880(PSEUDO_X8);
__attribute__((swiftcall)) void game_185a130(PSEUDO_X8, __int64);
__int64 game_11912b0(__int64, const char**, const char*, __int64);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_20fe4b8[])();
extern __int64 (*GameData_20fe538[])();
extern __int64 (*GameData_211e778[])();
extern __int64 (*GameData_211e7f8[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* msg_MessageManager_empty_text_;
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_anonymous_1725860(__int64 a1);
_QWORD* game_facility_anonymous_1882b70(__int64 a1);
_QWORD* game_facility_anonymous_199b440(__int64 a1);

void game_facility_anonymous_1725860(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned int v11;
  char* v13;
  __int64 v14;
  __int64 v15;
  struct {
    char* v16[2];
    char* v17;
    char* v18;
    __int64 v19[2];
    char* v20;
    unsigned __int64 v21;
    __int64* v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } f_;

  if ((*(_BYTE*)(a1 + 1209) & 1) != 0) {
    return;
  }
  *(_BYTE*)(a1 + 1209) = 1;
  v1 = *(_DWORD*)(a1 + 1204);
  if (v1 == 3) {
    f_.v16[0] = "MID_HeroMenu_Restart_Part3_Attention";
    v2 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, (__int64)f_.v16);
    if (v2 == 0) {
      return;
    }
    f_.v22 = nullptr;
    GameRoutine_6680e0(f_.v19, (_QWORD*)(v2 + 1248));
    v3 = f_.v22;
    if (f_.v22 != f_.v19) {
      goto LABEL_5;
    }
    goto LABEL_27;
  }
  if (*(_BYTE*)(a1 + 1208) != 1) {
    return;
  }
  if (v1 == 1) {
    f_.v16[0] = "MID_HeroMenu_Restart_Attention";
    GameConst_7f8880((void*)(f_.v19));
    if ((f_.v19[0] & 1) != 0) {
      v6 = f_.v20;
    }
    else {
      v6 = (char*)f_.v19 + 1;
    }
    v7 = game_util_Format("MCID_episode_%s", v6);
    if ((f_.v19[0] & 1) != 0 && f_.v20 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    (__int64)f_.v20);
    }
    if (*v7 != 0) {
      f_.v23 = -1;
      f_.v24 = -1;
      f_.v25 = -1;
      f_.v26 = -1;
      v9 = *msg_MessageManager_instance__ptr[0];
      f_.v27 = -1;
      f_.v28 = -1;
      f_.v29 = -1;
      f_.v30 = -1;
      f_.v31 = -1;
      f_.v32 = -1;
      f_.v33 = -1;
      f_.v34 = -1;
      f_.v19[0] = (__int64)msg_TagSelector_vtable;
      f_.v19[1] = 0xFFFF0001FFFF0000LL;
      f_.v20 = (char*)0xFFFF0004FFFF0002LL;
      f_.v21 = 0xFFFF0006FFFF0005LL;
      f_.v35 = 8;
      f_.v22 = (__int64*)0xFFFF0008FFFF0007LL;
      v10 = GameRoutine_a4dbe0(v9, v7, 0);
    }
    else {
      v10 = msg_MessageManager_empty_text_;
    }
    f_.v22 = nullptr;
    game_11912b0(a1, f_.v16, v10, (__int64)f_.v19);
    v3 = f_.v22;
    if (f_.v22 != f_.v19) {
    LABEL_5:
      if (v3 == nullptr) {
        return;
      }
      v4 = 40;
      goto LABEL_28;
    }
  LABEL_27:
    v4 = 32;
  LABEL_28:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
    return;
  }
  v11 = *(unsigned __int8*)(a1 + 1200);
  f_.v18 = "MID_HeroMenu_Restart_Part2_Attention";
  game_185a130((void*)((__int64)f_.v16), v11);
  f_.v22 = nullptr;
  if (((__int64)f_.v16[0] & 1) != 0) {
    v13 = f_.v17;
  }
  else {
    v13 = (char*)f_.v16 + 1;
  }
  game_11912b0(a1, &f_.v18, v13, (__int64)f_.v19);
  if (f_.v22 == f_.v19) {
    v14 = 32;
    goto LABEL_31;
  }
  if (f_.v22 != nullptr) {
    v14 = 40;
  LABEL_31:
    (*(void (**)(__int64))(*f_.v22 + v14))((__int64)f_.v22);
  }
  if (((__int64)f_.v16[0] & 1) != 0 && f_.v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)f_.v17);
  }
}

_QWORD* game_facility_anonymous_1882b70(__int64 a1)
{
  int v1;
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 (**v11)();
    char v12;
    char gap57_[23];
    __int64 (***v13)();
  } v11_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 <
      (unsigned __int64)((signed __int64)(*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_DWORD*)(a1 + 200);
  v9_.v10 = nullptr;
  v11_.v11 = GameData_20fe4b8;
  v11_.v13 = &v11_.v11;
  v11_.v12 = v4;
  GameRoutine_167f6d0(&v11_.v11, v9_.v9);
  if (v11_.v13 == &v11_.v11) {
    v5 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_8;
    }
    v5 = 5;
  }
  ((void (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
LABEL_8:
  v11_.v12 = v1;
  v11_.v11 = GameData_20fe538;
  v11_.v13 = &v11_.v11;
  BasicMenu_16e1f40((_QWORD*)a1, (__int64)&v11_.v11, (__int64)v9_.v9);
  if (v11_.v13 == &v11_.v11) {
    v6 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 5;
  }
  ((void (*)(__int64))(*v11_.v13)[v6])((__int64)v11_.v13);
LABEL_13:
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

_QWORD* game_facility_anonymous_199b440(__int64 a1)
{
  int v1;
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 (**v11)();
    char v12;
    char gap57_[23];
    __int64 (***v13)();
  } v11_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 <
      (unsigned __int64)((signed __int64)(*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_DWORD*)(a1 + 200);
  v9_.v10 = nullptr;
  v11_.v11 = GameData_211e778;
  v11_.v13 = &v11_.v11;
  v11_.v12 = v4;
  GameRoutine_167f6d0(&v11_.v11, v9_.v9);
  if (v11_.v13 == &v11_.v11) {
    v5 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_8;
    }
    v5 = 5;
  }
  ((void (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
LABEL_8:
  v11_.v12 = v1;
  v11_.v11 = GameData_211e7f8;
  v11_.v13 = &v11_.v11;
  BasicMenu_16e1f40((_QWORD*)a1, (__int64)&v11_.v11, (__int64)v9_.v9);
  if (v11_.v13 == &v11_.v11) {
    v6 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 5;
  }
  ((void (*)(__int64))(*v11_.v13)[v6])((__int64)v11_.v13);
LABEL_13:
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

#pragma GCC visibility pop
