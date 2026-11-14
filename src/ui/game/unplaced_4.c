#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, const char**);
__int64 Element_1884860(__int64, __int64, __int64, __int64);
__int64 GameRoutine_576600(__int64, const char*);
__int64 LayoutEx_579160(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 ui_control_1888c80(__int64, __int64, __int64);
extern __int64 (*Element_1888840_ptr_2100378[])();
extern __int64 (*Element_1888840_ptr_21005a0[])();
extern __int64 (*GameData_21004e0[])();
extern __int64 (*GameData_2100550[])();
extern __int64 (*GameData_2100708[])();
extern __int64 GameData_2100500;
extern __int64 GameData_2100510;
extern __int64 GameData_2100520;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21004f8;
extern char* GameData_2100508;
extern char* GameData_2100518;
unsigned __int64 GameRoutine_1a09c70(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void ui_game_188f010(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64 a3);

__attribute__((swiftcall)) void ui_game_188f010(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  char* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  struct {
    char* v22;
    unsigned __int64 v23;
  } v22_;

  v8 = (_QWORD*)LayoutEx_579160(1056, 8);
  v9 = (__int64)(v8 + 3);
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2100550;
  Element_1884860((__int64)(v8 + 3), a1, a2, a3);
  v10[3] = Element_1888840_ptr_2100378;
  v10[12] = GameData_21004e0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  v13 = GameData_2100510;
  *(_QWORD*)(v12 + 16) = GameData_2100508;
  *(_QWORD*)(v12 + 24) = v13;
  v14 = GameData_2100520;
  *(_QWORD*)(v12 + 32) = GameData_2100518;
  *(_QWORD*)(v12 + 40) = v14;
  v15 = GameData_2100500;
  *(_QWORD*)v12 = GameData_21004f8;
  *(_QWORD*)(v12 + 8) = v15;
  v16 = (const char*)GameRoutine_576600(a1, "Text");
  if (v16 != nullptr) {
    v22_.v22 = v16;
    v22_.v23 = GameRoutine_1a09c70(v16);
    if (v22_.v23 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v22_.v22);
    }
  }
  v17 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 16));
  if (v17 != nullptr) {
    v22_.v22 = v17;
    v22_.v23 = GameRoutine_1a09c70(v17);
    if (v22_.v23 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v22_.v22);
    }
  }
  v18 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 32));
  if (v18 != nullptr) {
    v22_.v22 = v18;
    v22_.v23 = GameRoutine_1a09c70(v18);
    if (v22_.v23 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 32, (__int64)&v22_.v22);
    }
  }
  v22_.v22 = "Icon";
  v22_.v23 = 4;
  v19 = Element_1886290(v9, &v22_.v22);
  if (v19 != nullptr) {
    *((_BYTE*)v19 + 88) &= ~1u;
  }
  v22_.v22 = "IconDamage";
  v22_.v23 = 10;
  v20 = Element_1886290(v9, &v22_.v22);
  if (v20 != nullptr) {
    *((_BYTE*)v20 + 88) &= ~1u;
  }
  v21 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v21 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v21, v12);
  *a4 = v9;
  a4[1] = (__int64)v10;
  v10[3] = Element_1888840_ptr_21005a0;
  v10[12] = GameData_2100708;
}

#pragma GCC visibility pop
