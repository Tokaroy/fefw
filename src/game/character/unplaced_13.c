#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* kaneko_disposable_10aa900(__int64*, __int64*);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_10aa280(__int64, __int64,
                                                           __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_200b700[])();
extern __int64 (*GameData_200b780[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_character_10cd6a0(_QWORD* a1, char* a2, float a3, float a4);

void game_character_10cd6a0(_QWORD* a1, char* a2, float a3, float a4)
{

#pragma clang fp contract(off)
  _QWORD* v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 i;
  char v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  char v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _BYTE v37[32];
    _BYTE* v38;
    char gap40_[8];
    _QWORD* v39;
    unsigned __int64 v40;
  } v37_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
    char gap88_[4];
    float v44;
  } v41_;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;
  struct {
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v47_;

  v41_.v44 = 0x1.fffffe0000000p+127f;
  v7 = (_QWORD*)a1[5];
  if (a4 >= 0x0.0p+0f) {
    v8 = a4;
  }
  else {
    v8 = 0x1.5555560000000p-2f;
  }
  (void)*(volatile __int64*)(a1[4] + 8);
  v45_.v46 = v45_.v45;
  v45_.v45[0] = GameData_200b700;
  v45_.v45[1] = &v41_.v44;
  CharacterBuilder_1083e90(v7, (__int64)v45_.v45);
  if (v45_.v46 == v45_.v45) {
    v9 = 32;
  }
  else {
    if (v45_.v46 == nullptr) {
      goto LABEL_9;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v45_.v46 + v9))((__int64)v45_.v46);
LABEL_9:
  if (v41_.v44 == 0x1.fffffe0000000p+127f) {
    return;
  }
  v10 = a1[49];
  v11 = a1[50];
  if (v10 != v11) {
    do {
      v12 = *(_QWORD*)(v10 + 8);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v10 + 16);
        v14 = *(_QWORD*)(v12 + 8) == -1 | v13 == 0;
        if (!v14 && ((void)*(volatile __int64*)(v12 + 8),
                     (*(_WORD*)(v13 + 136) & 1) == 0)) {
          ProcInst_657a50(v13, 1);
        }
      }
      v10 += 24;
    } while (v10 != v11);
    v10 = a1[49];
    for (i = a1[50]; i != v10; i -= 24) {
      v18 = *(_QWORD*)(i - 16);
      if (v18 != 0) {
        std___1___shared_weak_count___release_weak(v18);
      }
    }
  }
  a1[50] = v10;
  v37_.v39 = a1;
  v16 = *a2;
  v37_.v40 = __PAIR64__(LODWORD(a3), LODWORD(v41_.v44));
  if ((v16 & 1) != 0) {
    fw_text_String_CopyTerminated(&v41_.v41, *((_QWORD*)a2 + 2),
                                  *((_QWORD*)a2 + 1));
  }
  else {
    v17 = *((_QWORD*)a2 + 1);
    v41_.v41 = *(_QWORD*)a2;
    v41_.v42 = v17;
    v41_.v43 = *((_QWORD*)a2 + 2);
  }
  v19 = fw_memory_g_heap_manager_ptr;
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v21 = v37_.v39;
  v22 = v37_.v40;
  v23 = (__int64)v20;
  *v20 = GameData_200b780;
  v20[1] = v21;
  v24 = v41_.v41;
  v20[2] = v22;
  if ((v24 & 1) != 0) {
    fw_text_String_CopyTerminated(v20 + 3, v41_.v43, v41_.v42);
  }
  else {
    v25 = v41_.v42;
    v20[3] = v41_.v41;
    v20[4] = v25;
    v20[5] = v41_.v43;
  }
  v45_.v46 = (_QWORD*)v23;
  v37_.v38 = nullptr;
  v26 = (_QWORD*)llvm_libcxx_21_libcxx_include___functional_10aa280(
      0, (__int64)v45_.v45, (__int64)v37_.v37, v8);
  v27 = v26[21];
  v28 = v26[22];
  v47_.v47 = v27;
  v47_.v48 = v28;
  if (v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                              memory_order_relaxed);
  }
  v29 = v26[23];
  v30 = (__int64*)a1[50];
  v31 = a1[51];
  v47_.v49 = v29;
  if ((unsigned __int64)v30 >= v31) {
    v32 = kaneko_disposable_10aa900(a1 + 49, &v47_.v47);
    v33 = v47_.v48;
    a1[50] = v32;
    if (v33 != 0) {
      std___1___shared_weak_count___release_weak(v33);
    }
  }
  else {
    *v30 = v27;
    v30[1] = v28;
    v30[2] = v29;
    a1[50] = v30 + 3;
  }
  if (v37_.v38 == v37_.v37) {
    v34 = 32;
  }
  else {
    if (v37_.v38 == nullptr) {
      goto LABEL_41;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v37_.v38 + v34))((__int64)v37_.v38);
LABEL_41:
  if (v45_.v46 == v45_.v45) {
    v35 = 32;
    goto LABEL_45;
  }
  if (v45_.v46 != nullptr) {
    v35 = 40;
  LABEL_45:
    (*(void (**)(__int64))(*v45_.v46 + v35))((__int64)v45_.v46);
  }
  if ((v41_.v41 & 1) != 0 && v41_.v43 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v36, v41_.v43);
  }
}

#pragma GCC visibility pop
