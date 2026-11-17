#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
double GameRoutine_dcd0(unsigned __int8, __int64);
extern _UNKNOWN* GameData_212ce38;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_dc10(unsigned __int8, __int64);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
float world_c47a00();

float world_c47a00()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  __int64 v1;
  double v2;
  unsigned __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned int* v15;
  unsigned int* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _DWORD* v24;
  double v25;
  int v26;
  __int64 v27;
  struct {
    __int64 v29;
    unsigned __int64 v30;
    char* v31;
  } v29_;
  __int64 v32[2];

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = v0[7] + v0[6] - 1LL;
  v4 = *(unsigned __int8**)(*(_QWORD*)(v0[3] + 8 * (v3 >> 9)) +
                            8 * (v3 & 0x1FF));
  if (v4 == nullptr) {
    return *(float*)&v2;
  }
  v5 = v1;
  v6 = v0;
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(&v29_.v29, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8)),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v7 = *(_QWORD*)(v1 + 8);
    v29_.v29 = *(_QWORD*)v1;
    v29_.v30 = v7;
    v29_.v31 = *(const char**)(v1 + 16);
  }
  if ((v29_.v29 & 1) != 0) {
    v8 = v29_.v30;
  }
  else {
    v8 = (unsigned __int64)(unsigned __int8)v29_.v29 >> 1;
  }
  if ((v29_.v29 & 1) != 0 && v29_.v31 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v29_.v31),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v8 != 0) {
    v10 = v6[7] + v6[6] - 1LL;
    v11 = *(_QWORD*)(*(_QWORD*)(v6[3] + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
    if ((*(_BYTE*)v5 & 1) != 0) {
      fw_text_String_CopyTerminated(&v29_.v29, *(_QWORD*)(v5 + 16),
                                    *(_QWORD*)(v5 + 8)),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    else {
      v12 = *(_QWORD*)(v5 + 8);
      v29_.v29 = *(_QWORD*)v5;
      v29_.v30 = v12;
      v29_.v31 = *(const char**)(v5 + 16);
    }
    if ((*(_BYTE*)v11 & 0x7F) == 8 &&
        ((v29_.v29 & 1) == 0 ? (v13 = (char*)&v29_.v29 + 1) : (v13 = v29_.v31),
         v14 = GameRoutine_1a09c70(v13), v15 = *(unsigned int**)(v11 + 1),
         v32[0] = (__int64)v13, v32[1] = v14,
         v16 = game_6b7f00(v15, 0, v15, v15[1], v32), v17 != v15[1])) {
      v18 = *v16;
      if (v17 >= v18) {
        v20 = v17 - v18;
        v21 = __clz((unsigned int)(v20 + 16));
        v19 = *(_QWORD*)(*((_QWORD*)v16 + 2) + 8 * (27 - v21) + 8) +
              32LL *
                  (unsigned int)(v20 - *((_DWORD*)GameData_212ce38 + 28 - v21));
      }
      else {
        v19 = *((_QWORD*)v16 + 1) + 32 * v17;
      }
      v4 = (unsigned __int8*)(v19 + 16);
      if ((v29_.v29 & 1) == 0) {
        goto LABEL_32;
      }
    }
    else {
      v4 = nullptr;
      if ((v29_.v29 & 1) == 0) {
        goto LABEL_32;
      }
    }
    if (v29_.v31 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v29_.v31),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  LABEL_32:
    if (v4 == nullptr) {
      return *(float*)&v2;
    }
  }
  v23 = *v4;
  if ((v23 & 0x7F) == 5) {
    v2 = GameRoutine_dcd0(v23, *((_QWORD*)v4 + 1)),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v26 != 0) {
      return *(float*)&v2;
    }
    *(float*)&v2 = v25;
  LABEL_42:
    **(_DWORD**)(v5 + 24) = LODWORD(v2);
    return *(float*)&v2;
  }
  if ((v23 & 0x7F) == 4) {
    v24 = *(_DWORD**)(v5 + 24);
    *(_DWORD*)v24 = GameRoutine_dc10(v23, *((_QWORD*)v4 + 1)) >> 32,
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return *(float*)&v2;
  }
  v27 = *((_QWORD*)v4 + 1);
  if (v23 == 3 || v23 == 2 && (v27 & 0x8000000000000000LL) == 0) {
    *(float*)&v2 = (float)v27;
    goto LABEL_42;
  }
  return *(float*)&v2;
}

#pragma GCC visibility pop
