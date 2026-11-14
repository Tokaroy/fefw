#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_facility_140cba0(PSEUDO_X8, __int64,
                                                      float32x4_t*);
__attribute__((swiftcall)) void game_facility_140d5c0(PSEUDO_X8, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memmove(__int64, __int64, unsigned __int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_21310c8[2];
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8 x8_,
                                                      __int64 a1);

__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  __int128* a2 = (__int128*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int128 v20;
  __int64 v21;
  unsigned __int32 v22;
  char v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int8* v35;
  __int64 v36;
  float32x4_t* v37;
  unsigned __int8 v38;
  __int8* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    _QWORD v43[2];
    char* v44;
  } v43_;
  struct {
    _QWORD v45[3];
    char v46;
    char gap57_[15];
    __int64 v47;
  } v45_;
  struct {
    float32x4_t v48;
    __int8* v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
  } v48_;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
  }
  else {
    v4 = a1 + 1;
  }
  v5 = game_HashString(v4);
  if (v5 == 0) {
    goto LABEL_35;
  }
  v6 = *(_QWORD*)(*GameData_21310c8[0] + 96);
  if (v6 == 0 | *(_QWORD*)(*GameData_21310c8[0] + 112) == 0) {
    goto LABEL_35;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v5;
    if (v5 >= v6) {
      v9 = v5 % v6;
    }
  }
  else {
    v9 = v8 & v5;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(*GameData_21310c8[0] + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_35;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_35;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == v5) {
        if (v11[2] == v5) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_35;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_35;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v5) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_35;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_35;
    }
  }
  if (v11[2] != v5) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 == 0) {
  LABEL_35:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v42 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v42;
      __cxa_guard_release((__int64)&GameData_21a6130);
    }
    v20 = GameData_21a6120;
    *((_DWORD*)a2 + 4) = 0;
    *((_WORD*)a2 + 12) = 0;
    *a2 = v20;
    return;
  }
  game_facility_140d5c0((void*)((__int64)a2), a1);
  v15 = *(_QWORD*)(v14 + 56);
  if (v15 == 0) {
    goto LABEL_58;
  }
  v16 = *(const char**)(v15 + 8);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_89;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    v21 = (v17 | 7) == 0x17 ? 26LL : (v17 | 7) + 1;
    v19 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
    v43_.v43[1] = v18;
    v43_.v44 = v19;
    v43_.v43[0] = v21 | 1;
  }
  else {
    LOBYTE(v43_.v43[0]) = 2 * v17;
    v19 = (char*)v43_.v43 + 1;
    if (v17 == 0) {
      goto LABEL_43;
    }
  }
  memmove((__int64)v19, (__int64)v16, v18);
LABEL_43:
  v19[v18] = 0;
  game_facility_140d160((void*)((__int128*)v45_.v45), (__int64)v43_.v43);
  game_facility_140cba0((void*)(&v48_.v48), (__int64)a2,
                        (float32x4_t*)v45_.v45);
  v22 = LANES128(v48_.v48).n128_u32[2];
  v23 = *((_BYTE*)a2 + 24);
  *(_QWORD*)a2 = LANES128(v48_.v48).n128_u64[0];
  v24 = *a2;
  *((_QWORD*)&v24 + 1) = v22;
  *((_DWORD*)a2 + 4) = (_DWORD)v48_.v49;
  *a2 = v24;
  if ((v23 & 1) != 0) {
    v25 = *((_QWORD*)a2 + 5);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
    }
  }
  v27 = v48_.v50;
  v28 = v48_.v51;
  LOWORD(v48_.v50) = 0;
  *((_QWORD*)a2 + 3) = v27;
  *((_QWORD*)a2 + 4) = v28;
  *((_QWORD*)a2 + 5) = v48_.v52;
  if ((v45_.v46 & 1) != 0 && v45_.v47 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  v45_.v47);
  }
  if ((v43_.v43[0] & 1) != 0 && v43_.v44 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  (__int64)v43_.v44);
  }
LABEL_58:
  v31 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
  v32 = game_util_Format("%s_LclF", v31);
  v33 = strlen(v32);
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_89:
    String_60a1d0();
  }
  v34 = v33;
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v33 | 7) + 1;
    }
    v35 = (__int8*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
    LANES128(v48_.v48).n128_u64[1] = v34;
    v48_.v49 = v35;
    LANES128(v48_.v48).n128_u64[0] = v36 | 1;
    goto LABEL_69;
  }
  LANES128(v48_.v48).n128_u8[0] = 2 * v33;
  v35 = &LANES128(v48_.v48).n128_i8[1];
  if (v33 != 0) {
  LABEL_69:
    memmove((__int64)v35, (__int64)v32, v34);
  }
  v35[v34] = 0;
  v37 = (float32x4_t*)((char*)a2 + 24);
  v38 = LANES128(v48_.v48).n128_u8[0];
  if (v37 != &v48_.v48) {
    if ((LANES128(*(v37)).n128_u8[0] & 1) != 0) {
      if ((LANES128(v48_.v48).n128_u8[0] & 1) != 0) {
        v39 = v48_.v49;
      }
      else {
        v39 = &LANES128(v48_.v48).n128_i8[1];
      }
      if ((LANES128(v48_.v48).n128_u8[0] & 1) != 0) {
        v40 = LANES128(v48_.v48).n128_u64[1];
      }
      else {
        v40 = (unsigned __int64)LANES128(v48_.v48).n128_u8[0] >> 1;
      }
      SpineModel_64dde0((__int64*)v37, (__int64)v39, v40);
      v38 = LANES128(v48_.v48).n128_u8[0];
    }
    else if ((LANES128(v48_.v48).n128_u8[0] & 1) != 0) {
      GameRoutine_64df20(v37, (__int64)v48_.v49,
                         LANES128(v48_.v48).n128_u64[1]);
    }
    else {
      *v37 = v48_.v48;
      LANES128(v37[1]).n128_u64[0] = (unsigned __int64)v48_.v49;
    }
  }
  if ((v38 & 1) != 0 && v48_.v49 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)v48_.v49);
  }
}

#pragma GCC visibility pop
