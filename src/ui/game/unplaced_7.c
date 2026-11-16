#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 GameRoutine_1647b80(__int64, const char**);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20378d0[])();
extern __int64* GameData_2130d38[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ui_game_13fa850(__int64 a1, char** a2);

__int64 ui_game_13fa850(__int64 a1, char** a2)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
    char gap40_[8];
    char* v12[4];
    char** v13;
  } f_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1648, 16, 0);
  f_.v12[0] = *a2;
  GameRoutine_1647b80(v4, f_.v12);
  v5 = GameData_2130d38[0];
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 176) = v5 + 140;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 1568) = -1;
  *(_DWORD*)(v4 + 1576) = -1;
  v6 = game_g_empty_item_ptr;
  *(_WORD*)(v4 + 1592) = 0;
  *(_QWORD*)(v4 + 1616) = 0;
  *(_QWORD*)(v4 + 1624) = 0;
  *(_QWORD*)(v4 + 1632) = 0;
  *(_QWORD*)(v4 + 1580) = *v6;
  ProcInst_657850(v4, (__int64)GameData_212c730, "T", 1, a1);
  f_.v13 = f_.v12;
  f_.v10[0] = GameData_20378d0;
  f_.v11 = f_.v10;
  f_.v12[0] = (const char*)GameData_20378d0;
  GameRoutine_654050(f_.v12, (_QWORD*)(v4 + 1200));
  if (f_.v13 == f_.v12) {
    v7 = 32;
    goto LABEL_7;
  }
  if (f_.v13 != nullptr) {
    v7 = 40;
  LABEL_7:
    (*(void (**)(void*)) & (*f_.v13)[v7])((void*)f_.v13);
  }
  if (f_.v11 == f_.v10) {
    v8 = 32;
    goto LABEL_12;
  }
  if (f_.v11 != nullptr) {
    v8 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*f_.v11 + v8))((__int64)f_.v11);
  }
  return v4;
}

#pragma GCC visibility pop
