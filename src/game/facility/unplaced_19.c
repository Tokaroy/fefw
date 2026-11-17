#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16d88b0(__int64, __int64, const char*, __int64, __int64,
                            __int64);
_QWORD* GameRoutine_9d1500(__int64, __int64, const char*, __int64, __int64,
                           __int64);
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
__int64 GameRoutine_930b90(__int64, __int64);
extern __int64 (*GameData_209a688[])();
extern __int64 (*GameData_209a808[])();
extern __int64 (*GameData_209bb68[])();
extern __int64 (*GameData_209bc68[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212dcd0;
extern __int64* game_g_empty_item_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_6e3b50(__int64, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_16d8030(__int64 a1);
__int64 game_facility_16da080(__int64 a1);

__int64 game_facility_16d8030(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  struct {
    _BYTE v27[20];
    char gap20_[4];
    __int64 v28;
    _BYTE* v29;
    _QWORD** v30;
    _QWORD* v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    _BYTE* v35;
    int v36;
    __int64 v37;
    char gap100_[12];
    _QWORD v38[4];
    _QWORD* v39;
    char gap152_[8];
    _QWORD v40[4];
    _QWORD* v41;
  } f_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 12) = *(_DWORD*)(a1 + 96) & 0xFFF;
  *(_QWORD*)f_.v27 = GameData_209a688;
  *(_QWORD*)&f_.v27[8] = a1;
  f_.v39 = f_.v38;
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  f_.v29 = f_.v27;
  f_.v41 = f_.v40;
  f_.v40[0] = GameData_209a808;
  f_.v38[0] = GameData_209a808;
  v4 = GameRoutine_16d88b0(v3, (__int64)"MID_ReinforceMenu_Confirm",
                           "MID_Shop_Consumption", (__int64)f_.v27,
                           (__int64)f_.v40, (__int64)f_.v38);
  if (f_.v39 == f_.v38) {
    v5 = 32;
  }
  else {
    if (f_.v39 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*f_.v39 + v5))((__int64)f_.v39);
LABEL_11:
  if (f_.v41 == f_.v40) {
    v7 = 32;
  }
  else {
    if (f_.v41 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*f_.v41 + v7))((__int64)f_.v41);
LABEL_16:
  if (f_.v29 == f_.v27) {
    v8 = 32;
    goto LABEL_20;
  }
  if (f_.v29 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*(_QWORD*)f_.v29 + v8))((__int64)f_.v29);
  }
  v9 = GameData_212c880[0];
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*(_DWORD*)(a1 + 96) & 0xFFF)) +
                   24LL);
  *(_DWORD*)f_.v27 = 8;
  v11 = game_g_empty_item_ptr;
  *(_QWORD*)&f_.v27[4] = *game_g_empty_item_ptr;
  v12 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v13 = *GameData_212ceb0;
  }
  else {
    v13 = 0;
  }
  *(_QWORD*)&f_.v27[12] = v13;
  WORD1(f_.v28) = 0;
  DWORDn(f_.v28, sizeof(f_.v28) / 4 - 1) = 0;
  f_.v32 = 0;
  f_.v33 = 0;
  f_.v34 = 0;
  f_.v35 = nullptr;
  f_.v30 = &f_.v31;
  f_.v31 = nullptr;
  GameRoutine_930b90((__int64)&f_.v28, (__int64)GameData_212c8b0[0]);
  v14 = *(_DWORD*)(v10 + 8);
  f_.v37 = 0;
  f_.v36 = v14;
  ObeliskDestinyMenuItem_1a06060(v4 + 190, (int*)f_.v27, 0);
  LODWORD(f_.v29) = 0;
  f_.v28 = 0;
  if ((f_.v33 & 1) != 0) {
    *f_.v35 = 0;
    f_.v34 = 0;
  }
  else {
    LOWORD(f_.v33) = 0;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, f_.v31);
  f_.v31 = nullptr;
  f_.v32 = 0;
  f_.v30 = &f_.v31;
  if ((f_.v33 & 1) != 0) {
    v15 = f_.v35;
    if (f_.v35 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)f_.v35);
      v15 = f_.v31;
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, v15);
  v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                              8LL * (*(_DWORD*)(a1 + 96) & 0xFFF)) +
                   24LL);
  *(_DWORD*)f_.v27 = 8;
  *(_QWORD*)&f_.v27[4] = *v11;
  if (*(_BYTE*)v12 != 0) {
    v18 = *v12;
  }
  else {
    v18 = 0;
  }
  *(_QWORD*)&f_.v27[12] = v18;
  WORD1(f_.v28) = 0;
  DWORDn(f_.v28, sizeof(f_.v28) / 4 - 1) = 0;
  f_.v32 = 0;
  f_.v33 = 0;
  f_.v34 = 0;
  f_.v35 = nullptr;
  f_.v30 = &f_.v31;
  f_.v31 = nullptr;
  GameRoutine_930b90((__int64)&f_.v28, (__int64)GameData_212c8b0[0]);
  v19 = *(_DWORD*)(v17 + 12);
  f_.v37 = 0;
  f_.v36 = v19;
  ObeliskDestinyMenuItem_1a06060(v4 + 190, (int*)f_.v27, 0);
  LODWORD(f_.v29) = 0;
  f_.v28 = 0;
  if ((f_.v33 & 1) != 0) {
    *f_.v35 = 0;
    f_.v34 = 0;
  }
  else {
    LOWORD(f_.v33) = 0;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, f_.v31);
  f_.v31 = nullptr;
  f_.v32 = 0;
  f_.v30 = &f_.v31;
  if ((f_.v33 & 1) != 0) {
    v20 = f_.v35;
    if (f_.v35 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)f_.v35);
      v20 = f_.v31;
    }
  }
  else {
    v20 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, v20);
  v22 = *(_QWORD*)(*v9 + 64);
  if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v22 +
                                        8LL * (*(_DWORD*)(a1 + 96) & 0xFFF)) +
                             24LL) +
                  8LL) &
       0xFFF) != 0) {
    v23 = *(
        unsigned __int16*)(*(_QWORD*)(v22 +
                                      8LL *
                                          (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v22 +
                                                                            8LL *
                                                                                (*(_DWORD*)(a1 +
                                                                                            96) &
                                                                                 0xFFF)) +
                                                                 24LL) +
                                                      8LL) &
                                           0xFFF)) +
                           728LL);
  }
  else {
    v23 = 0;
  }
  *(_DWORD*)f_.v27 = 7;
  *(_QWORD*)&f_.v27[4] = *v11;
  if (*(_BYTE*)v12 != 0) {
    v24 = *v12;
  }
  else {
    v24 = 0;
  }
  *(_QWORD*)&f_.v27[12] = v24;
  WORD1(f_.v28) = 0;
  DWORDn(f_.v28, sizeof(f_.v28) / 4 - 1) = 0;
  f_.v32 = 0;
  f_.v33 = 0;
  f_.v34 = 0;
  f_.v35 = nullptr;
  f_.v30 = &f_.v31;
  f_.v31 = nullptr;
  GameRoutine_930b90((__int64)&f_.v28, (__int64)GameData_212c8b0[0]);
  f_.v36 = 0;
  f_.v37 = v23;
  ObeliskDestinyMenuItem_1a06060(v4 + 193, (int*)f_.v27, 0);
  LODWORD(f_.v29) = 0;
  f_.v28 = 0;
  if ((f_.v33 & 1) != 0) {
    *f_.v35 = 0;
    f_.v34 = 0;
  }
  else {
    LOWORD(f_.v33) = 0;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, f_.v31);
  f_.v31 = nullptr;
  f_.v32 = 0;
  f_.v30 = &f_.v31;
  if ((f_.v33 & 1) != 0) {
    v25 = f_.v35;
    if (f_.v35 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)f_.v35);
      v25 = f_.v31;
    }
  }
  else {
    v25 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&f_.v30, v25);
  return 12;
}

__int64 game_facility_16da080(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  struct {
    _BYTE v19[20];
    char gap20_[4];
    __int64 v20;
    _BYTE* v21;
    _QWORD** v22;
    _QWORD* v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    _BYTE* v27;
    int v28;
    __int64 v29;
    char gap100_[12];
    _QWORD v30[4];
    _QWORD* v31;
    char gap152_[8];
    _QWORD v32[4];
    _QWORD* v33;
  } f_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 12) = *(_DWORD*)(a1 + 96) & 0xFFF;
  *(_QWORD*)f_.v19 = GameData_209bb68;
  *(_QWORD*)&f_.v19[8] = a1;
  f_.v31 = f_.v30;
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  f_.v21 = f_.v19;
  f_.v33 = f_.v32;
  f_.v32[0] = GameData_209bc68;
  f_.v30[0] = GameData_209bc68;
  v4 = GameRoutine_9d1500(v3, (__int64)"MID_EducateMenu_Confirm",
                          "MID_Shop_Consumption", (__int64)f_.v19,
                          (__int64)f_.v32, (__int64)f_.v30);
  if (f_.v31 == f_.v30) {
    v5 = 32;
  }
  else {
    if (f_.v31 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*f_.v31 + v5))((__int64)f_.v31);
LABEL_11:
  if (f_.v33 == f_.v32) {
    v7 = 32;
  }
  else {
    if (f_.v33 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*f_.v33 + v7))((__int64)f_.v33);
LABEL_16:
  if (f_.v21 == f_.v19) {
    v8 = 32;
    goto LABEL_20;
  }
  if (f_.v21 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*(_QWORD*)f_.v21 + v8))((__int64)f_.v21);
  }
  *(_DWORD*)f_.v19 = 8;
  v9 = game_g_empty_item_ptr;
  *(_QWORD*)&f_.v19[4] = *game_g_empty_item_ptr;
  v10 = GameData_212ceb0;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v11 = *GameData_212ceb0;
  }
  else {
    v11 = 0;
  }
  *(_QWORD*)&f_.v19[12] = v11;
  WORD1(f_.v20) = 0;
  DWORDn(f_.v20, sizeof(f_.v20) / 4 - 1) = 0;
  f_.v24 = 0;
  f_.v25 = 0;
  f_.v26 = 0;
  f_.v27 = nullptr;
  f_.v22 = &f_.v23;
  f_.v23 = nullptr;
  GameRoutine_930b90((__int64)&f_.v20, (__int64)GameData_212c8b0[0]);
  v12 = *(_DWORD*)(a1 + 96);
  f_.v29 = 0;
  f_.v28 = v12;
  ObeliskDestinyMenuItem_1a06060(v4 + 190, (int*)f_.v19, 0);
  LODWORD(f_.v21) = 0;
  f_.v20 = 0;
  if ((f_.v25 & 1) != 0) {
    *f_.v27 = 0;
    f_.v26 = 0;
  }
  else {
    LOWORD(f_.v25) = 0;
  }
  GameRoutine_6e3b50((__int64)&f_.v22, f_.v23);
  f_.v23 = nullptr;
  f_.v24 = 0;
  f_.v22 = &f_.v23;
  if ((f_.v25 & 1) != 0) {
    v13 = f_.v27;
    if (f_.v27 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)f_.v27);
      v13 = f_.v23;
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&f_.v22, v13);
  v15 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*(_DWORD*)(a1 + 96) & 0xFFF)) +
                             752LL);
  *(_DWORD*)f_.v19 = 7;
  *(_QWORD*)&f_.v19[4] = *v9;
  if (*(_BYTE*)v10 != 0) {
    v16 = *v10;
  }
  else {
    v16 = 0;
  }
  *(_QWORD*)&f_.v19[12] = v16;
  WORD1(f_.v20) = 0;
  DWORDn(f_.v20, sizeof(f_.v20) / 4 - 1) = 0;
  f_.v24 = 0;
  f_.v25 = 0;
  f_.v26 = 0;
  f_.v27 = nullptr;
  f_.v22 = &f_.v23;
  f_.v23 = nullptr;
  GameRoutine_930b90((__int64)&f_.v20, (__int64)GameData_212c8b0[0]);
  f_.v28 = 0;
  f_.v29 = v15;
  ObeliskDestinyMenuItem_1a06060(v4 + 193, (int*)f_.v19, 0);
  LODWORD(f_.v21) = 0;
  f_.v20 = 0;
  if ((f_.v25 & 1) != 0) {
    *f_.v27 = 0;
    f_.v26 = 0;
  }
  else {
    LOWORD(f_.v25) = 0;
  }
  GameRoutine_6e3b50((__int64)&f_.v22, f_.v23);
  f_.v23 = nullptr;
  f_.v24 = 0;
  f_.v22 = &f_.v23;
  if ((f_.v25 & 1) != 0) {
    v17 = f_.v27;
    if (f_.v27 != nullptr) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)f_.v27);
      v17 = f_.v23;
    }
  }
  else {
    v17 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&f_.v22, v17);
  return 12;
}

#pragma GCC visibility pop
