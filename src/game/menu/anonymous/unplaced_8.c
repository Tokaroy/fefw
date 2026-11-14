#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameSubquestData_1256d00(PSEUDO_X8, __int64);
__int64 UnitUtil_1212520(unsigned __int16*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_menu_EmptyTransportMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(_QWORD*,
                                                               __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_171f920(_QWORD* a1);

void game_menu_anonymous_171f920(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  __int64* v14;
  __int64 i;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26[3];

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)v2 = game_menu_EmptyTransportMenuItem_vtable;
  v5 = a1[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[134];
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 88);
    if (v7 != 0) {
    LABEL_5:
      game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(a1, v7);
      return;
    }
    goto LABEL_8;
  }
  v8 = a1[133];
  v9 = *(_QWORD*)v8;
  if (*(_WORD*)(*(_QWORD*)v8 + 320LL) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(v9 + 328) + 8LL);
    if (v7 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    v8 = a1[133];
    v9 = *(_QWORD*)v8;
  }
  v10 = *(_QWORD*)(v9 + 344);
  if (v10 != 0 && *(_WORD*)(v10 + 40) != 0) {
    GameSubquestData_1256d00((void*)(v26), v8);
    v13 = v26[1];
    v24 = v26[0];
    if (v26[0] != v26[1]) {
      v14 = game_map_MapRandom_instance__ptr[0];
      for (i = v26[0]; i != v13; i += 8) {
        v16 = *(_QWORD*)i;
        if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)i + 72LL)) |
              (1LL << *(_BYTE*)(*(_QWORD*)i + 73LL))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          v17 = 1;
        }
        else {
          v18 = *(unsigned __int16*)(v16 + 16);
          v25 = 0x100000000LL;
          LOWORD(v25) = v18;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v18) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14);
            v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4);
            v21 = *(_DWORD*)v14 ^ (*(_DWORD*)v14 << 11);
            *(_DWORD*)v14 = *((_DWORD*)v14 + 1);
            *((_DWORD*)v14 + 1) = v19;
            v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v20;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v22;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            HIDWORD(v25) =
                HIDWORD(v25) & 0xFFFFC00F |
                (16 *
                 (((16 * (v22 - 1000 * ((v22 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
          v17 = UnitUtil_1212520((unsigned __int16*)&v25);
          if (v17 < 1) {
            continue;
          }
        }
        do {
          game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(a1, v16);
          --v17;
        } while (v17 != 0);
      }
    }
    if (v24 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v24);
    }
  }
}

#pragma GCC visibility pop
