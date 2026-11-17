#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void Manager_a501f0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void Manager_a503b0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void fs_a50740(PSEUDO_X8, __int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Hub_1199f00(__int64 result, unsigned __int8*);
__int64 Hub_119a0b0(__int64 result, __int64);
__int64 Seq_1131620(__int64, const char*, __int64);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int8* GameRoutine_148a100(unsigned __int8* result, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
unsigned __int8* game_talk_1134110(unsigned __int8* result);

unsigned __int8* game_talk_1134110(unsigned __int8* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  struct __attribute__((packed)) {
    __int128 v22;
    char* v23;
  } g_;

  if ((result[204] & 1) == 0) {
    v1 = (__int64)result;
    v2 = msg_MessageManager_instance__ptr[0];
    if ((result[1144] & 1) != 0) {
      v3 = *((_QWORD*)result + 145);
    }
    else {
      v3 = (__int64)(result + 1145);
    }
    Manager_a501f0((void*)((__int64*)&g_.v22),
                   *msg_MessageManager_instance__ptr[0], v3);
    v4 = (__int64*)(v1 + 1200);
    if ((*(_BYTE*)(v1 + 1200) & 1) != 0) {
      v5 = *(_QWORD*)(v1 + 1216);
      if (v5 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
      }
    }
    v7 = *((_QWORD*)&g_.v22 + 1);
    v8 = *v2;
    *v4 = g_.v22;
    *(_QWORD*)(v1 + 1208) = v7;
    *(_QWORD*)(v1 + 1216) = g_.v23;
    Manager_a503b0((void*)((__int64*)&g_.v22), v8, v3);
    if ((*(_BYTE*)(v1 + 1224) & 1) != 0) {
      v9 = *(_QWORD*)(v1 + 1240);
      if (v9 != 0) {
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
      }
    }
    *(_OWORD*)(v1 + 1224) = g_.v22;
    *(_QWORD*)(v1 + 1240) = g_.v23;
    Hub_1199f00(v1 + 536, (unsigned __int8*)(v1 + 1200));
    if (GameData_2203490 != 0) {
      v11 = *(unsigned __int8*)(v1 + 1200);
      v12 = (__int64*)(v1 + 872);
      if ((*(_BYTE*)(v1 + 872) & 1) != 0) {
        v14 = (v11 & 1) == 0;
        v15 = v11 >> 1;
        if (v14) {
          v16 = v1 + 1201;
        }
        else {
          v16 = *(_QWORD*)(v1 + 1216);
        }
        if (v14) {
          v17 = v15;
        }
        else {
          v17 = *(_QWORD*)(v1 + 1208);
        }
        SpineModel_64dde0(v12, v16, v17);
      }
      else if ((v11 & 1) != 0) {
        GameRoutine_64df20(v12, *(_QWORD*)(v1 + 1216), *(_QWORD*)(v1 + 1208));
      }
      else {
        v13 = *(_QWORD*)(v1 + 1208);
        *v12 = *v4;
        *(_QWORD*)(v1 + 880) = v13;
        *(_QWORD*)(v1 + 888) = *(_QWORD*)(v1 + 1216);
      }
    }
    if ((*(_BYTE*)(v1 + 1200) & 1) != 0) {
      v18 = *(const char**)(v1 + 1216);
    }
    else {
      v18 = (const char*)(v1 + 1201);
    }
    fs_a50740((void*)(&g_.v22), *v2, v3);
    if ((g_.v22 & 1) != 0) {
      v19 = g_.v23;
    }
    else {
      v19 = (char*)&g_.v22 + 1;
    }
    v20 = Seq_1131620(v1, v18, (__int64)v19);
    if ((g_.v22 & 1) != 0 && g_.v23 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)g_.v23);
    }
    Hub_119a0b0(v1 + 536, v20);
    if (GameData_2203490 != 0) {
      *(_QWORD*)(v1 + 864) = v20;
    }
    return GameRoutine_148a100((unsigned __int8*)(v1 + 944), v20);
  }
  return result;
}

#pragma GCC visibility pop
