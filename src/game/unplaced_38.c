#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
TextSelector_19063a0(PSEUDO_X8, __int64*, __int64, __int64, __int64, int);
__int64 Registration_a48280(__int64 result, __int64);
extern _UNKNOWN GameData_1bdc977;
extern __int64* GameData_212eb78[3];
extern __int64* GameData_2132270;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
float TextBox_59d550(__int64, __int64);
float ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_156c5d0(__int64 a1, __int64 a2, char a3);

void game_156c5d0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int16 v7;
  __int64 v8;
  bool v9;
  __int16 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int16 v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int16 v20;
  } v19_;
  __int64 v21;
  _QWORD v22[5];
  int v23;
  __int16 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  _BYTE v39[8];
  float v40;

  v21 = 0;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v25 = 0;
  v22[0] = GameData_2132270 + 2;
  v22[1] = 0xFFFF0000FFFFFF00LL;
  v22[2] = 0xFFFF0002FFFF0001LL;
  v22[3] = 0xFFFF0005FFFF0004LL;
  v22[4] = 0xFFFF0007FFFF0006LL;
  v23 = -65528;
  v24 = 3;
  v26 = 16;
  v37 = 13;
  v27 = -4293853184LL;
  TextSelector_19063a0((void*)(&v19_.v19), &v21, a2, a1, (__int64)v22, a3 & 1);
  v4 = v19_.v19;
  v5 = *game_g_frame_clock_ptr[0];
  if (v19_.v19 != 0) {
    v6 = v19_.v20;
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 304LL))(
        a1, v5 + 568, (unsigned int)v19_.v20 + 1);
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 352LL))(
        a1, v4, 0, v6);
    v7 = *(_WORD*)(a1 + 276);
    v8 = ui_Manager_instance_ + 6528;
    v9 = *(_QWORD*)(a1 + 264) == ui_Manager_instance_ + 6528;
    if (*(_QWORD*)(a1 + 264) == ui_Manager_instance_ + 6528) {
      v10 = *(_WORD*)(a1 + 276) & 4;
    }
    else {
      v10 = 4;
    }
  }
  else {
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 304LL))(
        a1, v5 + 568, 4);
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 352LL))(
        a1, (__int64)&GameData_1bdc977, 0, 2);
    v7 = *(_WORD*)(a1 + 276);
    v8 = ui_Manager_instance_ + 6528;
    v11 = *(_QWORD*)(a1 + 264);
    v9 = v11 == ui_Manager_instance_ + 6528;
    if (v11 == ui_Manager_instance_ + 6528) {
      v10 = *(_WORD*)(a1 + 276) & 4;
    }
    else {
      v10 = 4;
    }
  }
  *(_WORD*)(a1 + 276) = v10 | v7 & 0xFFFB;
  if (!v9) {
    *(_QWORD*)(a1 + 264) = v8;
  }
  Registration_a48280(*GameData_212eb78[0], a1);
  v12 = ui_text_190a0c0(&v40, (__int64)v39, &v38, (_QWORD*)a1,
                        *(_QWORD*)(a1 + 216));
  v14 = *(float*)(a1 + 248);
  v22[0] = __PAIR64__(LODWORD(v13), LODWORD(v12));
  if (vabds_f32(v12, v14) > 0x1.0000000000000p-23f ||
      vabds_f32(v13, *(float*)(a1 + 252)) > 0x1.0000000000000p-23f) {
    TextBox_59d550(a1, (__int64)v22);
    v15 = v38;
    v16 = *(float*)(a1 + 260);
    v17 = *(_WORD*)(a1 + 276) & 4;
    if (v16 != v38) {
      v17 = 4;
    }
    *(_WORD*)(a1 + 276) = v17 | *(_WORD*)(a1 + 276) & 0xFFFB;
    if (v16 != v15) {
      *(float*)(a1 + 260) = v15;
    }
  }
  if (v21 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v21);
  }
}

#pragma GCC visibility pop
