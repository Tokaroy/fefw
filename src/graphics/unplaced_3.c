#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* timeline_5aa0(_QWORD*, float);
_QWORD* timeline_ValueWriter_Key(_QWORD*);
_QWORD* timeline_ValueWriter_Write(_QWORD*, char);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1a09c70(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void graphics_c5ab10(_QWORD** a1, __int64 a2);
void graphics_c5ac70(_QWORD** a1, __int64 a2);

void graphics_c5ab10(_QWORD** a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  const char* v9;
  _QWORD* v10;
  __int64 v11;
  struct {
    __int64 v12;
    unsigned __int64 v13;
    const char* v14;
  } v12_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v12_.v12, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v4 = *(_QWORD*)(a2 + 8);
    v12_.v12 = *(_QWORD*)a2;
    v12_.v13 = v4;
    v12_.v14 = *(const char**)(a2 + 16);
  }
  if ((v12_.v12 & 1) != 0) {
    v5 = v12_.v13;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v12_.v12 >> 1;
  }
  if ((v12_.v12 & 1) != 0 && v12_.v14 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v12_.v14);
  }
  v7 = *a1;
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(&v12_.v12, *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
    }
    else {
      v8 = *(_QWORD*)(a2 + 8);
      v12_.v12 = *(_QWORD*)a2;
      v12_.v13 = v8;
      v12_.v14 = *(const char**)(a2 + 16);
    }
    if ((v12_.v12 & 1) != 0) {
      v9 = v12_.v14;
    }
    else {
      v9 = (char*)&v12_.v12 + 1;
    }
    GameRoutine_1a09c70(v9);
    v10 = timeline_ValueWriter_Key(v7);
    timeline_ValueWriter_Write(v10, **(_BYTE**)(a2 + 24));
    if ((v12_.v12 & 1) != 0 && v12_.v14 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v14);
    }
  }
  else {
    timeline_ValueWriter_Write(v7, **(_BYTE**)(a2 + 24));
  }
}

void graphics_c5ac70(_QWORD** a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  const char* v9;
  _QWORD* v10;
  __int64 v11;
  struct {
    __int64 v12;
    unsigned __int64 v13;
    const char* v14;
  } v12_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v12_.v12, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v4 = *(_QWORD*)(a2 + 8);
    v12_.v12 = *(_QWORD*)a2;
    v12_.v13 = v4;
    v12_.v14 = *(const char**)(a2 + 16);
  }
  if ((v12_.v12 & 1) != 0) {
    v5 = v12_.v13;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v12_.v12 >> 1;
  }
  if ((v12_.v12 & 1) != 0 && v12_.v14 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v12_.v14);
  }
  v7 = *a1;
  if (v5 != 0) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(&v12_.v12, *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
    }
    else {
      v8 = *(_QWORD*)(a2 + 8);
      v12_.v12 = *(_QWORD*)a2;
      v12_.v13 = v8;
      v12_.v14 = *(const char**)(a2 + 16);
    }
    if ((v12_.v12 & 1) != 0) {
      v9 = v12_.v14;
    }
    else {
      v9 = (char*)&v12_.v12 + 1;
    }
    GameRoutine_1a09c70(v9);
    v10 = timeline_ValueWriter_Key(v7);
    timeline_5aa0(v10, **(float**)(a2 + 24));
    if ((v12_.v12 & 1) != 0 && v12_.v14 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v14);
    }
  }
  else {
    timeline_5aa0(v7, **(float**)(a2 + 24));
  }
}

#pragma GCC visibility pop
