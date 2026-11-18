#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_cmdbtl_Manager_IsAnyLoading();
extern __int64* GameData_212ea58;
extern __int64* as_g_script_manager_ptr;
extern __int64 as_g_thread_info;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
void UnitActor_81d740(__int64);
_QWORD* game_script_eafec0(int a1);

_QWORD* game_script_eafec0(int a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 (*v13)(void);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* result;
  __int64 v19;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(__int64))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = *GameData_212ea58 + ((__int64)a1 << 7);
    v7 = *(__int64***)(v6 + 712);
    v8 = *(__int64***)(v6 + 720);
    while (v7 != v8) {
      v9 = *v7;
      *(_WORD*)((*v7)[2] + 20) |= 1u;
      if (v9[53] == v9[52]) {
        UnitActor_81d740(v9[2]);
      }
      v7 += 2;
    }
    v11 = *v2;
    v12 = *(_QWORD*)(v11 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v13 = *(__int64 (**)(void))(
        **(_QWORD**)((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12) +
                     24) +
        448LL);
    return (_QWORD*)v13();
  }
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    v10 = game_cmdbtl_Manager_IsAnyLoading();
  }
  else {
    v10 = 0;
  }
  v14 = *v2;
  v15 = *(
      _QWORD*)(v14 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v15 != 0) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 472LL))(v15);
  }
  else {
    v16 = 0;
  }
  v17 = *(_QWORD*)(v16 + 24);
  v13 = *(__int64 (**)(void))(*(_QWORD*)v17 + 448LL);
  if ((v10 & 1) != 0) {
    return (_QWORD*)v13();
  }
  ((void (*)(__int64, __int64))v13)(v17, 1);
  result = *(_QWORD**)(v16 + 2240);
  *(_QWORD*)(v16 + 2240) = 0;
  if (result == (_QWORD*)(v16 + 2208)) {
    v19 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v19 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v19))((__int64)result);
}

#pragma GCC visibility pop
