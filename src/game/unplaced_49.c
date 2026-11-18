#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_e07e20(unsigned __int8*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0a8e0(__int64, unsigned __int64, unsigned __int64,
                            const char*, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fffa98[])();
extern __int64 GameData_212dbb8[9];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int GameRoutine_1a09bf0(__int64, const char*, ...);
unsigned __int64 GameRoutine_e99900(_QWORD*);
void GameRoutine_d8d760(__int64);
void game_d8e140(__int64);
void game_d8ec60(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_ff57a0(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2);

__attribute__((swiftcall)) void game_ff57a0(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int8* v6;
  _BYTE* v7;
  __int64 v8;
  signed __int64 v9;
  char v10;
  __int64 v11;
  signed __int64 v12;
  char* v13;
  __int128 v14;
  int v15;
  __int64 v16;
  char* v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int64 v41;
    signed __int64 v42;
    char* v43;
  } v41_;
  char v44[256];
  char v45[264];

  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      872, 16, 0);
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)v5 = GameData_1fffa98;
  *(_QWORD*)(v5 + 64) = 0;
  *(_BYTE*)(v5 + 72) = 0;
  *(_BYTE*)(v5 + 688) = 0;
  *(_BYTE*)(v5 + 696) = 0;
  *(_BYTE*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 768) = 0;
  *(_BYTE*)(v5 + 832) = 0;
  *(_QWORD*)(v5 + 848) = 0;
  *(_QWORD*)(v5 + 856) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  v6 = (unsigned __int8*)(v5 + 24);
  GameRoutine_1a0ba50(v5 + 80, 0, 0x1ECu);
  v7 = (_BYTE*)(v5 + 112);
  *(_QWORD*)(v5 + 576) = 0;
  *(_QWORD*)(v5 + 584) = 0;
  *(_QWORD*)(v5 + 592) = 0;
  *(_QWORD*)(v5 + 600) = 0;
  *(_QWORD*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_BYTE*)(v5 + 624) = 0;
  *(_DWORD*)(v5 + 840) = 0;
  if (v5 + 112 != a1) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(v5 + 112), *(_QWORD*)(a1 + 16),
                         *(_QWORD*)(a1 + 8));
      if ((*v7 & 1) == 0) {
        goto LABEL_5;
      }
      goto LABEL_7;
    }
    v8 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)v7 = *(_QWORD*)a1;
    *(_QWORD*)(v5 + 120) = v8;
    *(_QWORD*)(v5 + 128) = *(_QWORD*)(a1 + 16);
  }
  if ((*v7 & 1) == 0) {
  LABEL_5:
    v9 = *(_QWORD*)(v5 + 120);
    v41_.v41 = *(_QWORD*)v7;
    v41_.v42 = v9;
    v41_.v43 = *(char**)(v5 + 128);
    goto LABEL_8;
  }
LABEL_7:
  fw_text_String_CopyTerminated(&v41_.v41, *(_QWORD*)(v5 + 128),
                                *(_QWORD*)(v5 + 120));
LABEL_8:
  v10 = v41_.v41;
  v11 = (__int64)v41_.v43;
  v12 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  if ((v41_.v41 & 1) != 0) {
    v12 = v41_.v42;
  }
  if (v12 >= 4) {
    if ((v41_.v41 & 1) != 0) {
      v18 = v41_.v43;
    }
    else {
      v18 = (char*)&v41_.v41 + 1;
    }
    v19 = &v18[v12];
  LABEL_21:
    v20 = (__int64)v18;
    do {
      v21 = (char*)GameRoutine_1a09c60(v20, 80, v12 - 3);
      if (v21 == nullptr) {
        break;
      }
      if (*(_DWORD*)v21 == 1598310736) {
        if (v21 != v19 && v21 - v18 != -1) {
          GameRoutine_1a0a8e0((__int64)&v41_.v41, v21 - v18, 4u,
                              &GameData_1a9f09e, 0);
          v10 = v41_.v41;
          v12 = v41_.v42;
          v11 = (__int64)v41_.v43;
          if ((v41_.v41 & 1) != 0) {
            v18 = v41_.v43;
          }
          else {
            v18 = (char*)&v41_.v41 + 1;
          }
          if ((v41_.v41 & 1) == 0) {
            v12 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
          }
          v19 = &v18[v12];
          if (v12 > 3) {
            goto LABEL_21;
          }
        }
        break;
      }
      v20 = (__int64)(v21 + 1);
      v12 = (signed __int64)&v19[-v20];
    } while ((__int64)&v19[-v20] >= 4);
  }
  if ((v10 & 1) != 0) {
    v13 = (const char*)v11;
  }
  else {
    v13 = (char*)&v41_.v41 + 1;
  }
  GameRoutine_60a020(v5 + 136, v13);
  v14 = *(_OWORD*)(a1 + 48);
  *(_QWORD*)(v5 + 208) = v14;
  *(_DWORD*)(v5 + 216) = DWORD2(v14);
  v15 = *(unsigned __int8*)(a1 + 68);
  *(_DWORD*)(v5 + 220) = *(_DWORD*)(a1 + 64);
  v16 = fw_memory_g_heap_manager_ptr;
  if (v15 == 1) {
    if ((*(_BYTE*)(v5 + 368) & 1) != 0) {
      *(_QWORD*)(v5 + 376) = 17;
      v17 = *(char**)(v5 + 384);
    }
    else {
      *(_BYTE*)(v5 + 368) = 34;
      v17 = (char*)(v5 + 369);
    }
    strcpy(v17, "RegisterTalkMonth");
    v23 = *(_QWORD*)(v5 + 392);
    v22 = *(_QWORD*)(v5 + 400);
    if (v23 != v22) {
      v24 = *(_QWORD*)(v5 + 400);
      do {
        v25 = *(_BYTE*)(v24 - 24);
        v24 -= 24;
        if ((v25 & 1) != 0) {
          v26 = *(_QWORD*)(v22 - 8);
          if (v26 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v27, v26);
          }
        }
        v22 = v24;
      } while (v24 != v23);
    }
    *(_QWORD*)(v5 + 400) = v23;
  }
  a3[2] = 0;
  v28 = a3 + 2;
  a3[4] = 0;
  a3[5] = 0;
  a3[3] = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  *a3 = (__int64)v6;
  a3[1] = v5;
  v29 = *(_BYTE*)(a1 + 24);
  if (a3 + 2 == (__int64*)(a1 + 24)) {
    goto LABEL_49;
  }
  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    v30 = *(_QWORD*)(a1 + 32);
    v31 = *(_QWORD*)(a1 + 40);
    *v28 = *(_QWORD*)(a1 + 24);
    a3[3] = v30;
    a3[4] = v31;
  LABEL_49:
    v32 = v5 + 24;
    goto LABEL_51;
  }
  GameRoutine_64df20(v28, *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 32));
  v32 = *a3;
  v29 = *(_BYTE*)(a1 + 24);
LABEL_51:
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v33 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v33 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  if ((v29 & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 40);
  }
  else {
    v34 = a1 + 25;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v35 = *(_QWORD*)(a1 + 16);
  }
  else {
    v35 = a1 + 1;
  }
  GameRoutine_1a09bf0((__int64)v44, "%s::%s", v34, v35);
  GameRoutine_1a09bf0((__int64)v45, "%s=%s", v33, v44);
  GameRoutine_60a020(v32, v45);
  v36 = *a2;
  if ((v36 & 1) != 0) {
    v37 = *((_QWORD*)a2 + 1);
  }
  else {
    v37 = v36 >> 1;
  }
  if ((v36 & 1) != 0) {
    v38 = *((_QWORD*)a2 + 2);
  }
  else {
    v38 = (__int64)(a2 + 1);
  }
  GameRoutine_60a060((char*)(v5 + 848), v38, v37);
  GameRoutine_d8d760((__int64)v6);
  GameRoutine_e07e20(v6);
  game_d8e140((__int64)v6);
  game_d8ec60((__int64)v6);
  GameRoutine_e99900(a3);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v39, (__int64)v41_.v43);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
}

#pragma GCC visibility pop
