#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_adf6e0(_QWORD*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 gfx_shader_Material_SetColor_ade9d0(__int64, __int64, __int64,
                                            int8x16_t);
__int64 gfx_shader_Material_SetColor_adead0(__int64, __int64, __int64, int);
__int64 gfx_shader_Material_SetVector4(__int64, __int64, __int64, int8x16_t);
__int64 memset(__int64, int, unsigned __int64);
__int64 strncpy(__int64, const char*, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 g3d_b3df00(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4);
__int64 g3d_b3e540(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4);
__int64 g3d_b3e880(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4);
__int64 g3d_b3ebc0(__int64 a1, char* a2, unsigned __int64 a3, int a4);

__int64 g3d_b3df00(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4)
{
  _QWORD* v4;
  __int64* v8;
  _QWORD* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  char* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int16* v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  char* v39;
  _QWORD v40[17];

  v4 = *(_QWORD**)(a1 + 8);
  v39 = a2;
  v40[0] = a3;
  if (v4 != nullptr && v4[19] != v4[18] &&
      (v8 = GameRoutine_adf6e0(v4 + 21, (__int64*)&v39)) != nullptr &&
      *((_DWORD*)v8 + 10) == 3) {
    v9 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 4LL * *((int*)v8 + 11));
    *v9 = LANES128(a4).n128_u64[0];
    v9[1] = LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0];
    v10 = *(_DWORD*)(a1 + 48);
    v11 = *((_DWORD*)v8 + 11);
    if (v10 <= 1) {
      v10 = 1;
    }
    *(_DWORD*)(a1 + 48) = v10;
    v12 = *(_DWORD*)(a1 + 56);
    if (v11 < v12) {
      v12 = v11;
    }
    v13 = v11 + 4;
    if ((signed __int32)*(_DWORD*)(a1 + 60) > v13) {
      v13 = *(_DWORD*)(a1 + 60);
    }
    *(_DWORD*)(a1 + 56) = v12;
    *(_DWORD*)(a1 + 60) = v13;
    return 1;
  }
  else {
    __builtin_memset(v40, 0, 128);
    v39 = nullptr;
    if (a3 != 0) {
      if (a2[a3] != 0) {
        if (a3 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
          v15 = (const char*)v40;
        }
        else {
          v15 = (const char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
          memset((__int64)v15, 0, a3 + 1);
          v39 = v15;
        }
        strncpy((__int64)v15, a2, a3);
        v15[a3] = 0;
      }
      else {
        v15 = a2;
      }
      v16 = *(__int64**)(a1 + 416);
    }
    else {
      v16 = *(__int64**)(a1 + 416);
      v15 = &GameData_1a9f09e;
    }
    v40[16] = v15;
    v17 = *v16;
    v18 = *(_QWORD*)(*v16 + 88);
    if (v18 == 0) {
      goto LABEL_31;
    }
    v19 = strlen(v15);
    v20 = v18 + 8;
    v21 = *(unsigned __int16*)(v18 + 12);
    v22 = v18 + 8 + 16 * v21;
    v23 = *(_DWORD*)v22;
    if ((signed __int32)*(_DWORD*)(v18 + 8) < (signed __int32)*(_DWORD*)v22) {
      do {
        v26 = (__int64)v23 >> 3;
        if (v19 > v26) {
          v24 = ((unsigned __int8)v15[v19 + ~v26] >> (v23 & 7)) & 1;
        }
        else {
          v24 = 0;
        }
        v21 = *(unsigned __int16*)(v18 + 12 + 16 * v21 + 2 * v24);
        v25 = v23 < (signed __int32)*(_DWORD*)(v20 + 16 * v21);
        v23 = *(_DWORD*)(v20 + 16 * v21);
      } while (v25);
      v22 = v20 + 16 * v21;
    }
    v27 = *(unsigned __int16**)(v22 + 8);
    if (v19 != *v27 || memcmp((__int64)(v27 + 1), (__int64)v15, v19) != 0 ||
        (v31 = v22 - v18 - 24, v32 = (unsigned __int64)v31 >> 4,
         (unsigned int)((unsigned __int64)v31 >> 4) == -1)) {
    LABEL_31:
      v14 = 0;
    }
    else {
      v33 = *(_QWORD*)(v17 + 80);
      v34 = v33 + 32LL * (int)(v31 >> 4);
      if ((*(_DWORD*)(v34 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v16[2] + 4LL * ((int)v32 >> 5)) |= 1 << v32;
        *((_BYTE*)v16 + 44) |= 1u;
        v33 = *(_QWORD*)(*v16 + 80);
      }
      v35 = *(unsigned __int16*)(v34 + 24);
      if ((*(_DWORD*)(v33 + 32 * v35 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v16[2] + ((v35 >> 3) & 0x1FFC)) |= 1 << v35;
        *((_BYTE*)v16 + 44) |= 1u;
      }
      v36 = v16[9];
      v14 = 1;
      v37 = (_QWORD*)(v36 + *(unsigned __int16*)(v34 + 18));
      *v37 = LANES128(a4).n128_u64[0];
      v37[1] = LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0];
    }
    v28 = (__int64)v39;
    v39 = nullptr;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
    }
  }
  return v14;
}

__int64 g3d_b3e540(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4)
{
  __int64 result;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int16* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v33;
  _QWORD v34[17];

  if ((gfx_shader_Material_SetVector4(a1, (__int64)a2, a3, a4) & 1) != 0) {
    return 1;
  }
  __builtin_memset(v34, 0, 128);
  v33 = 0;
  if (a3 != 0) {
    if (a2[a3] != 0) {
      if (a3 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
        v8 = (const char*)v34;
      }
      else {
        v8 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
        memset((__int64)v8, 0, a3 + 1);
        v33 = (__int64)v8;
      }
      strncpy((__int64)v8, a2, a3);
      v8[a3] = 0;
    }
    else {
      v8 = a2;
    }
    v9 = *(__int64**)(a1 + 416);
  }
  else {
    v9 = *(__int64**)(a1 + 416);
    v8 = &GameData_1a9f09e;
  }
  v34[16] = v8;
  v10 = *v9;
  v11 = *(_QWORD*)(*v9 + 88);
  if (v11 == 0) {
    goto LABEL_22;
  }
  v12 = strlen(v8);
  v13 = v11 + 8;
  v14 = *(unsigned __int16*)(v11 + 12);
  v15 = v11 + 8 + 16 * v14;
  v16 = *(_DWORD*)v15;
  if ((signed __int32)*(_DWORD*)(v11 + 8) < (signed __int32)*(_DWORD*)v15) {
    do {
      v19 = (__int64)v16 >> 3;
      if (v12 > v19) {
        v17 = ((unsigned __int8)v8[v12 + ~v19] >> (v16 & 7)) & 1;
      }
      else {
        v17 = 0;
      }
      v14 = *(unsigned __int16*)(v11 + 12 + 16 * v14 + 2 * v17);
      v18 = v16 < (signed __int32)*(_DWORD*)(v13 + 16 * v14);
      v16 = *(_DWORD*)(v13 + 16 * v14);
    } while (v18);
    v15 = v13 + 16 * v14;
  }
  v20 = *(unsigned __int16**)(v15 + 8);
  if (v12 != *v20 || memcmp((__int64)(v20 + 1), (__int64)v8, v12) != 0 ||
      (v23 = v15 - v11 - 24, v24 = (unsigned __int64)v23 >> 4,
       (unsigned int)((unsigned __int64)v23 >> 4) == -1)) {
  LABEL_22:
    result = 0;
  }
  else {
    v25 = *(_QWORD*)(v10 + 80);
    v26 = v25 + 32LL * (int)(v23 >> 4);
    v27 = *(unsigned __int8*)(v26 + 16);
    if (v27 == 14) {
      if ((*(_DWORD*)(v26 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + 4LL * ((int)v24 >> 5)) |= 1 << v24;
        *((_BYTE*)v9 + 44) |= 1u;
        v25 = *(_QWORD*)(*v9 + 80);
      }
      v30 = *(unsigned __int16*)(v26 + 24);
      if ((*(_DWORD*)(v25 + 32 * v30 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + ((v30 >> 3) & 0x1FFC)) |= 1 << v30;
        *((_BYTE*)v9 + 44) |= 1u;
      }
      v31 = v9[9] + *(unsigned __int16*)(v26 + 18);
      *(_QWORD*)v31 = LANES128(a4).n128_u64[0];
      *(_DWORD*)(v31 + 8) = LANES128(a4).n128_u32[2];
    }
    else if (v27 == 15) {
      if ((*(_DWORD*)(v26 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + 4LL * ((int)v24 >> 5)) |= 1 << v24;
        *((_BYTE*)v9 + 44) |= 1u;
        v25 = *(_QWORD*)(*v9 + 80);
      }
      v28 = *(unsigned __int16*)(v26 + 24);
      if ((*(_DWORD*)(v25 + 32 * v28 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + ((v28 >> 3) & 0x1FFC)) |= 1 << v28;
        *((_BYTE*)v9 + 44) |= 1u;
      }
      v29 = (_QWORD*)(v9[9] + *(unsigned __int16*)(v26 + 18));
      *v29 = LANES128(a4).n128_u64[0];
      v29[1] = LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0];
    }
    result = 1;
  }
  if (v33 != 0) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v33);
    return v21;
  }
  return result;
}

__int64 g3d_b3e880(__int64 a1, char* a2, unsigned __int64 a3, int8x16_t a4)
{
  __int64 result;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int16* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v33;
  _QWORD v34[17];

  if ((gfx_shader_Material_SetColor_ade9d0(a1, (__int64)a2, a3, a4) & 1) != 0) {
    return 1;
  }
  __builtin_memset(v34, 0, 128);
  v33 = 0;
  if (a3 != 0) {
    if (a2[a3] != 0) {
      if (a3 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
        v8 = (const char*)v34;
      }
      else {
        v8 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
        memset((__int64)v8, 0, a3 + 1);
        v33 = (__int64)v8;
      }
      strncpy((__int64)v8, a2, a3);
      v8[a3] = 0;
    }
    else {
      v8 = a2;
    }
    v9 = *(__int64**)(a1 + 416);
  }
  else {
    v9 = *(__int64**)(a1 + 416);
    v8 = &GameData_1a9f09e;
  }
  v34[16] = v8;
  v10 = *v9;
  v11 = *(_QWORD*)(*v9 + 88);
  if (v11 == 0) {
    goto LABEL_22;
  }
  v12 = strlen(v8);
  v13 = v11 + 8;
  v14 = *(unsigned __int16*)(v11 + 12);
  v15 = v11 + 8 + 16 * v14;
  v16 = *(_DWORD*)v15;
  if ((signed __int32)*(_DWORD*)(v11 + 8) < (signed __int32)*(_DWORD*)v15) {
    do {
      v19 = (__int64)v16 >> 3;
      if (v12 > v19) {
        v17 = ((unsigned __int8)v8[v12 + ~v19] >> (v16 & 7)) & 1;
      }
      else {
        v17 = 0;
      }
      v14 = *(unsigned __int16*)(v11 + 12 + 16 * v14 + 2 * v17);
      v18 = v16 < (signed __int32)*(_DWORD*)(v13 + 16 * v14);
      v16 = *(_DWORD*)(v13 + 16 * v14);
    } while (v18);
    v15 = v13 + 16 * v14;
  }
  v20 = *(unsigned __int16**)(v15 + 8);
  if (v12 != *v20 || memcmp((__int64)(v20 + 1), (__int64)v8, v12) != 0 ||
      (v23 = v15 - v11 - 24, v24 = (unsigned __int64)v23 >> 4,
       (unsigned int)((unsigned __int64)v23 >> 4) == -1)) {
  LABEL_22:
    result = 0;
  }
  else {
    v25 = *(_QWORD*)(v10 + 80);
    v26 = v25 + 32LL * (int)(v23 >> 4);
    v27 = *(unsigned __int8*)(v26 + 16);
    if (v27 == 14) {
      if ((*(_DWORD*)(v26 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + 4LL * ((int)v24 >> 5)) |= 1 << v24;
        *((_BYTE*)v9 + 44) |= 1u;
        v25 = *(_QWORD*)(*v9 + 80);
      }
      v30 = *(unsigned __int16*)(v26 + 24);
      if ((*(_DWORD*)(v25 + 32 * v30 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + ((v30 >> 3) & 0x1FFC)) |= 1 << v30;
        *((_BYTE*)v9 + 44) |= 1u;
      }
      v31 = v9[9] + *(unsigned __int16*)(v26 + 18);
      *(_QWORD*)v31 = LANES128(a4).n128_u64[0];
      *(_DWORD*)(v31 + 8) = LANES128(a4).n128_u32[2];
    }
    else if (v27 == 15) {
      if ((*(_DWORD*)(v26 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + 4LL * ((int)v24 >> 5)) |= 1 << v24;
        *((_BYTE*)v9 + 44) |= 1u;
        v25 = *(_QWORD*)(*v9 + 80);
      }
      v28 = *(unsigned __int16*)(v26 + 24);
      if ((*(_DWORD*)(v25 + 32 * v28 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v9[2] + ((v28 >> 3) & 0x1FFC)) |= 1 << v28;
        *((_BYTE*)v9 + 44) |= 1u;
      }
      v29 = (_QWORD*)(v9[9] + *(unsigned __int16*)(v26 + 18));
      *v29 = LANES128(a4).n128_u64[0];
      v29[1] = LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0];
    }
    result = 1;
  }
  if (v33 != 0) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v33);
    return v21;
  }
  return result;
}

__int64 g3d_b3ebc0(__int64 a1, char* a2, unsigned __int64 a3, int a4)
{

#pragma clang fp contract(off)
  __int64 result;
  char* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int16* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  float* v30;
  unsigned __int64 v31;
  float* v32;
  __int64 v33;
  _QWORD v34[17];

  if ((gfx_shader_Material_SetColor_adead0(a1, (__int64)a2, a3, a4) & 1) != 0) {
    return 1;
  }
  __builtin_memset(v34, 0, 128);
  v33 = 0;
  if (a3 != 0) {
    if (a2[a3] != 0) {
      if (a3 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
        v9 = (const char*)v34;
      }
      else {
        v9 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
        memset((__int64)v9, 0, a3 + 1);
        v33 = (__int64)v9;
      }
      strncpy((__int64)v9, a2, a3);
      v9[a3] = 0;
    }
    else {
      v9 = a2;
    }
    v10 = *(__int64**)(a1 + 416);
  }
  else {
    v10 = *(__int64**)(a1 + 416);
    v9 = &GameData_1a9f09e;
  }
  v34[16] = v9;
  v11 = *v10;
  v12 = *(_QWORD*)(*v10 + 88);
  if (v12 == 0) {
    goto LABEL_22;
  }
  v13 = strlen(v9);
  v14 = v12 + 8;
  v15 = *(unsigned __int16*)(v12 + 12);
  v16 = v12 + 8 + 16 * v15;
  v17 = *(_DWORD*)v16;
  if ((signed __int32)*(_DWORD*)(v12 + 8) < (signed __int32)*(_DWORD*)v16) {
    do {
      v20 = (__int64)v17 >> 3;
      if (v13 > v20) {
        v18 = ((unsigned __int8)v9[v13 + ~v20] >> (v17 & 7)) & 1;
      }
      else {
        v18 = 0;
      }
      v15 = *(unsigned __int16*)(v12 + 12 + 16 * v15 + 2 * v18);
      v19 = v17 < (signed __int32)*(_DWORD*)(v14 + 16 * v15);
      v17 = *(_DWORD*)(v14 + 16 * v15);
    } while (v19);
    v16 = v14 + 16 * v15;
  }
  v21 = *(unsigned __int16**)(v16 + 8);
  if (v13 != *v21 || memcmp((__int64)(v21 + 1), (__int64)v9, v13) != 0 ||
      (v24 = v16 - v12 - 24, v25 = (unsigned __int64)v24 >> 4,
       (unsigned int)((unsigned __int64)v24 >> 4) == -1)) {
  LABEL_22:
    result = 0;
  }
  else {
    v26 = *(_QWORD*)(v11 + 80);
    v27 = v26 + 32LL * (int)(v24 >> 4);
    v28 = *(unsigned __int8*)(v27 + 16);
    if (v28 == 14) {
      if ((*(_DWORD*)(v27 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v10[2] + 4LL * ((int)v25 >> 5)) |= 1 << v25;
        *((_BYTE*)v10 + 44) |= 1u;
        v26 = *(_QWORD*)(*v10 + 80);
      }
      v31 = *(unsigned __int16*)(v27 + 24);
      if ((*(_DWORD*)(v26 + 32 * v31 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v10[2] + ((v31 >> 3) & 0x1FFC)) |= 1 << v31;
        *((_BYTE*)v10 + 44) |= 1u;
      }
      v32 = (float*)(v10[9] + *(unsigned __int16*)(v27 + 18));
      *v32 = (float)(unsigned __int8)a4 / 0x1.fe00000000000p+7f;
      v32[1] = (float)BYTE1(a4) / 0x1.fe00000000000p+7f;
      v32[2] = (float)BYTE2(a4) / 0x1.fe00000000000p+7f;
    }
    else if (v28 == 15) {
      if ((*(_DWORD*)(v27 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v10[2] + 4LL * ((int)v25 >> 5)) |= 1 << v25;
        *((_BYTE*)v10 + 44) |= 1u;
        v26 = *(_QWORD*)(*v10 + 80);
      }
      v29 = *(unsigned __int16*)(v27 + 24);
      if ((*(_DWORD*)(v26 + 32 * v29 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v10[2] + ((v29 >> 3) & 0x1FFC)) |= 1 << v29;
        *((_BYTE*)v10 + 44) |= 1u;
      }
      v30 = (float*)(v10[9] + *(unsigned __int16*)(v27 + 18));
      *v30 = (float)(unsigned __int8)a4 / 0x1.fe00000000000p+7f;
      v30[1] = (float)BYTE1(a4) / 0x1.fe00000000000p+7f;
      v30[2] = (float)BYTE2(a4) / 0x1.fe00000000000p+7f;
      v30[3] = (float)HIBYTE(a4) / 0x1.fe00000000000p+7f;
    }
    result = 1;
  }
  if (v33 != 0) {
    v22 = result;
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v33);
    return v22;
  }
  return result;
}

#pragma GCC visibility pop
