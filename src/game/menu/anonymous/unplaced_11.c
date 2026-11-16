#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_menu_f6be60(PSEUDO_X8, __int64, int);
__int64 GameSituation_906320(__int64, __int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_f70a30(__int64 a1, __int64 a2, __int64 a3);

void game_menu_anonymous_f70a30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  char* v7;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  char v12;
  __int64 v13;
  struct {
    __int64 v14[2];
    __int64 v15[2];
    char* v16;
    char gap40_[24];
    __int64 v17;
  } f_;

  v5 = a1 + 152;
  v4 = *(_QWORD*)(a1 + 152);
  f_.v14[0] = 0;
  f_.v14[1] = v4;
  GameSituation_906320(game_GameModeData_instance_ + 136, f_.v14, a3);
  game_menu_f6be60((void*)(f_.v15), v5,
                   2 * *(unsigned __int16*)(f_.v17 + 104) + 3);
  v6 = f_.v15[0] & 1;
  if ((f_.v15[0] & 1) != 0) {
    v7 = f_.v16;
  }
  else {
    v7 = (char*)f_.v15 + 1;
  }
  if (GameData_21ec7b8 == 0 & v7 != nullptr) {
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v9, v7, nullptr);
    v10 = *(_QWORD*)(a1 + 40);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 48) = v9;
      *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9;
    *(_QWORD*)(v9 + 24) = "talk::Seq";
    *(_QWORD*)(v9 + 32) = a1;
    *(_DWORD*)(v9 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 24;
    *(_QWORD*)(v9 + 80) = 1;
    *(_QWORD*)(v9 + 8) = &GameData_216de68;
    *(_QWORD*)(v9 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
        (*(_WORD*)(v9 + 136) & 0x100) == 0) {
      *(_WORD*)(v9 + 136) |= 0x100u;
    }
    v11 = *(_BYTE**)(v9 + 32);
    v12 = v11[138];
    if (v12 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v11 + 64LL))(*(_QWORD*)(v9 + 32));
      v12 = v11[138];
    }
    v11[138] = v12 + 1;
    *(_WORD*)(v9 + 136) |= 2u;
    v6 = f_.v15[0] & 1;
  }
  if (v6 != 0 && f_.v16 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)f_.v16);
  }
}

#pragma GCC visibility pop
