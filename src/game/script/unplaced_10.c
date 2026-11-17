#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_cb4e70(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_cb5190(_QWORD* result, _QWORD*);
__int64* HubCharacterNatives_cb40c0(__int64*, __int64*);
__int64* HubCharacterNatives_cb4210(__int64*, __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1fd3f70[])();
extern __int64 (*GameData_1fd4000[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_script_cab670(_QWORD* a1);

void game_script_cab670(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[4];
    _QWORD v13[4];
    _QWORD* v14;
    char gap72_[8];
    __int64 v15;
    char gap88_[24];
    __int64* v16;
    char gap120_[8];
    _QWORD v17[4];
    _QWORD* v18;
    char gap168_[8];
    _QWORD v19[4];
    _QWORD* v20;
  } f_;

  v1 = a1[95];
  v2 = a1[96];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v1 != 0 && *(_BYTE*)(v1 + 288) == 1) {
    HIBYTE(f_.v12[2]) = 0;
    f_.v14 = nullptr;
    f_.v16 = nullptr;
    f_.v18 = nullptr;
    strcpy((char*)f_.v12, "*MID_HubMenu_SideStory");
    f_.v20 = f_.v19;
    f_.v19[0] = GameData_1fd3f70;
    f_.v19[1] = a1;
    GameRoutine_cb4e70(f_.v19, f_.v17);
    if (f_.v20 == f_.v19) {
      v4 = 32;
    }
    else {
      if (f_.v20 == nullptr) {
        goto LABEL_10;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*f_.v20 + v4))((__int64)f_.v20);
  LABEL_10:
    f_.v20 = f_.v19;
    f_.v19[0] = GameData_1fd4000;
    f_.v19[1] = a1;
    GameRoutine_cb5190(f_.v19, f_.v13);
    if (f_.v20 == f_.v19) {
      v5 = 32;
    }
    else {
      if (f_.v20 == nullptr) {
        goto LABEL_15;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*f_.v20 + v5))((__int64)f_.v20);
  LABEL_15:
    v6 = a1[147];
    if (v6 >= a1[148]) {
      v7 = HubCharacterNatives_cb40c0(a1 + 146, f_.v12);
    }
    else {
      HubCharacterNatives_cb4210((__int64*)a1[147], f_.v12);
      v7 = (__int64*)(v6 + 176);
    }
    a1[147] = v7;
    if (f_.v18 == f_.v17) {
      v8 = 32;
    }
    else {
      if (f_.v18 == nullptr) {
        goto LABEL_23;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*f_.v18 + v8))((__int64)f_.v18);
  LABEL_23:
    if (f_.v16 == &f_.v15) {
      v9 = 32;
    }
    else {
      if (f_.v16 == nullptr) {
        goto LABEL_28;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*f_.v16 + v9))((__int64)f_.v16);
  LABEL_28:
    if (f_.v14 == f_.v13) {
      v10 = 32;
    }
    else {
      if (f_.v14 == nullptr) {
      LABEL_33:
        if ((f_.v12[0] & 1) != 0 && f_.v12[2] != 0) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, f_.v12[2]);
        }
        goto LABEL_38;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*f_.v14 + v10))((__int64)f_.v14);
    goto LABEL_33;
  }
LABEL_38:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
}

#pragma GCC visibility pop
