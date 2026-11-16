#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void RouteNavMesh_fe7b50(PSEUDO_X8, _QWORD* result,
                                                    __int128*, __int128*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
extern __int64* GameData_212ebd0[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_fe6ea0(__int64 a1, __int64 a2, char** a3);

__int64 game_fe6ea0(__int64 a1, __int64 a2, char** a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  char v12;
  __int64 result;
  unsigned int v14;
  __int64 v15;
  struct {
    __int128 v16;
    __int128 v17;
    char* v18;
    char* v19;
    char gap48_[8];
    char v20;
  } f_;

  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(_QWORD**)(a1 + 8);
  *(_QWORD*)&f_.v17 = *(_QWORD*)a2;
  *((_QWORD*)&f_.v17 + 1) = v3;
  v7 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)&f_.v16 = *(_QWORD*)(a2 + 16);
  *((_QWORD*)&f_.v16 + 1) = v7;
  RouteNavMesh_fe7b50((void*)((__int64)&f_.v18), v4, &f_.v17, &f_.v16);
  if (f_.v20 == 1) {
    if (*(_BYTE*)(a2 + 76) == 1) {
      v8 = -1;
      v9 = 0;
      v10 = GameData_212ebd0[0];
      while (((f_.v19 - f_.v18) >> 4) - 1 > (unsigned __int64)++v8) {
        v11 = v9 + 16;
        v12 = game_zview_d17160(*(float*)(a2 + 72), *v10, a2 + 32,
                                (float32x4_t*)&f_.v18[v9],
                                (float32x4_t*)&f_.v18[v9 + 16]);
        v9 = v11;
        if ((v12 & 1) == 0) {
          goto LABEL_6;
        }
      }
    }
    if (a3 != &f_.v18) {
      CharacterController_d42d20((__int64)a3, f_.v18, f_.v19,
                                 (f_.v19 - f_.v18) >> 4);
    }
    result = 1;
  }
  else {
  LABEL_6:
    result = 0;
  }
  if (f_.v20 == 1 && f_.v18 != nullptr) {
    f_.v19 = f_.v18;
    v14 = result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)f_.v18);
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
