#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_b87b70(_QWORD* result, _QWORD*);
extern __int64 GameData_212c638;
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_gameui_anonymous_15e2a60();

_QWORD* game_gameui_anonymous_15e2a60()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* result;
  __int64 v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  v0 = (_QWORD*)GameData_2259540;
  if (GameData_2259540 == 0) {
    goto LABEL_32;
  }
  v1 = *(_QWORD*)(GameData_2259540 + 200);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_2259540 + 192);
    v3 = v1 - 1;
    v4 = *(_QWORD*)(GameData_2259540 + 168);
    v5 = *(_QWORD*)(v4 + 8 * ((v2 + v1 - 1) / 0x55uLL)) +
         48 * ((v2 + v1 - 1) % 0x55uLL);
    v6 = *(_QWORD**)(v5 + 32);
    if (v6 == (_QWORD*)v5) {
      v7 = 32;
    }
    else {
      if (v6 == nullptr) {
        goto LABEL_8;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    v2 = v0[24];
    v1 = v0[25];
    v4 = v0[21];
    v3 = v1 - 1;
  LABEL_8:
    v8 = v0[22];
    v9 = v2 + v1;
    v0[25] = v3;
    if (v8 == v4) {
      v10 = 0;
    }
    else {
      v10 = 17 * (((v8 - v4) >> 1) + ((v8 - v4) >> 3)) - 1;
    }
    if ((unsigned __int64)(v10 - v9 + 1) >= 0xAA) {
      v11 = *(_QWORD*)(v8 - 8);
      if (v11 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
        v8 = v0[22];
      }
      v0[22] = v8 - 8;
    }
  }
  v13 = v0[31];
  if (v13 == 0) {
    goto LABEL_32;
  }
  v14 = v0[30];
  v15 = v13 - 1;
  v16 = v0[27];
  v17 = *(_QWORD*)(v16 + 8 * ((v14 + v13 - 1) / 0x55uLL)) +
        48 * ((v14 + v13 - 1) % 0x55uLL);
  v18 = *(_QWORD**)(v17 + 32);
  if (v18 == (_QWORD*)v17) {
    v19 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_23;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
  v14 = v0[30];
  v13 = v0[31];
  v16 = v0[27];
  v15 = v13 - 1;
LABEL_23:
  v20 = v0[28];
  v21 = v14 + v13;
  v0[31] = v15;
  if (v20 == v16) {
    v22 = 0;
  }
  else {
    v22 = 17 * (((v20 - v16) >> 1) + ((v20 - v16) >> 3)) - 1;
  }
  if ((unsigned __int64)(v22 - v21 + 1) >= 0xAA) {
    v23 = *(_QWORD*)(v20 - 8);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
      v20 = v0[28];
    }
    v0[28] = v20 - 8;
  }
LABEL_32:
  v25 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v28_.v29 = nullptr;
  GameRoutine_b87b70(v28_.v28, (_QWORD*)(*(_QWORD*)(v25 + 40) + 512LL));
  result = v28_.v29;
  if (v28_.v29 == v28_.v28) {
    v27 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      return result;
    }
    v27 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v28_.v29 + v27))(
      (__int64)v28_.v29);
}

#pragma GCC visibility pop
