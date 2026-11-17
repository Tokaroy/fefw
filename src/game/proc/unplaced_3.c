#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* RouteMenuItem_166e450(__int64, const char**, __int64, __int64, __int64);
extern __int64 (*GameData_208a920[])();
extern __int64 (*GameData_208a9a0[])();
extern __int64 (*GameData_208aa20[])();
extern __int64 (*GameData_208aaa0[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64* GameData_212d2b8;
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_proc_16afc20(__int64 a1);
__int64 game_proc_16afdf0(__int64 a1);

__int64 game_proc_16afc20(__int64 a1)
{
  unsigned __int64 v2;
  char* v3;
  char* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    __int64 (*v12[4])();
    __int64 (**v13)();
    char gap40_[16];
    unsigned __int8 v14;
    _BYTE v15[15];
    char* v16;
  } v12_;
  struct {
    __int64 (*v17[4])();
    __int64 (**v18)();
  } v17_;
  char* v19;

  v17_.v17[0] = (__int64 (*)())GameData_208a920;
  v17_.v17[1] = (__int64 (*)())a1;
  v12_.v13 = v12_.v12;
  v17_.v18 = v17_.v17;
  v12_.v12[0] = (__int64 (*)())GameData_208a9a0;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  v2 = *(_QWORD*)&v12_.v15[7];
  if ((v12_.v14 & 1) != 0) {
    v3 = v12_.v16;
  }
  else {
    v2 = (unsigned __int64)v12_.v14 >> 1;
    v3 = v12_.v15;
  }
  if (v2 != 0) {
    v4 = v3;
  }
  else {
    v4 = nullptr;
  }
  v19 = v4;
  v5 = RouteMenuItem_166e450(a1, &v19, (__int64)v17_.v17, (__int64)v12_.v12,
                             (__int64)v12_.v12);
  if ((v12_.v14 & 1) != 0 && v12_.v16 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v12_.v16);
  }
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_17;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v12_.v13 + v7))((__int64)v12_.v13);
LABEL_17:
  if (v17_.v18 == v17_.v17) {
    v8 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v17_.v18 + v8))((__int64)v17_.v18);
LABEL_22:
  v12_.v13 = v12_.v12;
  v17_.v18 = v17_.v17;
  v12_.v12[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v12_.v12[1] = game_sound_PlayDecideLightSe_ptr[0];
  v17_.v17[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v17_.v17[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v17_.v17, v5 + 144);
  if (v17_.v18 == v17_.v17) {
    v9 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_27;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*v17_.v18 + v9))((__int64)v17_.v18);
LABEL_27:
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))((char*)*v12_.v13 + v11))((__int64)v12_.v13);
}

__int64 game_proc_16afdf0(__int64 a1)
{
  unsigned __int64 v2;
  char* v3;
  char* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    __int64 (*v12[4])();
    __int64 (**v13)();
    char gap40_[16];
    unsigned __int8 v14;
    _BYTE v15[15];
    char* v16;
  } v12_;
  struct {
    __int64 (*v17[4])();
    __int64 (**v18)();
  } v17_;
  char* v19;

  v17_.v17[0] = (__int64 (*)())GameData_208aa20;
  v17_.v17[1] = (__int64 (*)())a1;
  v12_.v13 = v12_.v12;
  v17_.v18 = v17_.v17;
  v12_.v12[0] = (__int64 (*)())GameData_208aaa0;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
  v2 = *(_QWORD*)&v12_.v15[7];
  if ((v12_.v14 & 1) != 0) {
    v3 = v12_.v16;
  }
  else {
    v2 = (unsigned __int64)v12_.v14 >> 1;
    v3 = v12_.v15;
  }
  if (v2 != 0) {
    v4 = v3;
  }
  else {
    v4 = nullptr;
  }
  v19 = v4;
  v5 = RouteMenuItem_166e450(a1, &v19, (__int64)v17_.v17, (__int64)v12_.v12,
                             (__int64)v12_.v12);
  if ((v12_.v14 & 1) != 0 && v12_.v16 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v12_.v16);
  }
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_17;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v12_.v13 + v7))((__int64)v12_.v13);
LABEL_17:
  if (v17_.v18 == v17_.v17) {
    v8 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v17_.v18 + v8))((__int64)v17_.v18);
LABEL_22:
  v12_.v13 = v12_.v12;
  v17_.v18 = v17_.v17;
  v12_.v12[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v12_.v12[1] = game_sound_PlayDecideSe_ptr[0];
  v17_.v17[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v17_.v17[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(v17_.v17, v5 + 144);
  if (v17_.v18 == v17_.v17) {
    v9 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_27;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*v17_.v18 + v9))((__int64)v17_.v18);
LABEL_27:
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))((char*)*v12_.v13 + v11))((__int64)v12_.v13);
}

#pragma GCC visibility pop
