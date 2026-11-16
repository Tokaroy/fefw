#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_8aef60(__int64, unsigned __int16*);
__int64 ItemSupport_f2e0a0(__int64, __int64);
__int64 TelopParts_17cbca0(__int64, __int64, int);
__int64 TelopParts_17cc5d0(__int64, __int64);
__int64 game_eb7440(_QWORD*, unsigned __int16*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
bool game_8ae640(__int64*, __int64, char);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
void game_hub_ItemSupport_TryAutoEquipReloadCheck(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_hub_f2e340(__int64 a1, __int64 a2);

__int64 game_hub_f2e340(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  _BOOL8 v18;
  bool v19;
  __int64 v20;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64 v24;

  result = ItemSupport_f2e0a0(a1, a2);
  if (result != 0) {
    v3 = result;
    v24 = 0x100000000LL;
    LOWORD(v24) = *(_WORD*)(result + 16);
    v4 = GameData_212c878[0];
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v24) +
                  73LL) == 17) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v5 = game_map_MapRandom_instance__ptr[0];
      v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v8 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v5 + 1) = v6;
      v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v7;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v9;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      DWORDn(v24, sizeof(v24) / 4 - 1) =
          (16 * ((_WORD)v9 -
                 1000 * (unsigned __int16)((v9 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v21_.v21 = 0;
    if ((game_eb7440(&v21_.v21, (unsigned __int16*)&v24) & 1) == 0) {
      goto LABEL_15;
    }
    v10 = *v4;
    v11 = v21_.v21;
    v24 = 0x100000000LL;
    v12 = *(_QWORD*)(v10 + 64);
    LOWORD(v24) = *(_WORD*)(v3 + 16);
    if (*(_BYTE*)(*(_QWORD*)(v12 + 8LL * (unsigned __int16)v24) + 73LL) == 17) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v13 = game_map_MapRandom_instance__ptr[0];
      v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v16 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v13 + 1) = v14;
      v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) = v17;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      DWORDn(v24, sizeof(v24) / 4 - 1) =
          (16 * ((_WORD)v17 -
                 1000 * (unsigned __int16)((v17 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v21_.v22 = 0;
    v21_.v23 = 0;
    v21_.v21 = 0;
    game_8aef60((__int64)&v21_.v21, (unsigned __int16*)&v24);
    v18 = game_8ae640(&v21_.v21, v11, 0);
    v19 = v18;
    if (v21_.v21 != 0) {
      v21_.v22 = v21_.v21;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v21_.v21);
    }
    if (v19) {
      game_hub_ItemSupport_TryAutoEquipReloadCheck(v18, v11, v3);
      if (GameData_2241720 != 0) {
        TelopParts_17cbca0(GameData_2241720, *(_QWORD*)(v3 + 8), 1);
      }
      return 1;
    }
    else {
    LABEL_15:
      result = GameData_2241720;
      if (GameData_2241720 != 0) {
        TelopParts_17cc5d0(GameData_2241720, v3);
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
