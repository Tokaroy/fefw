#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64* GameData_212d460[6];
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
float GameRoutine_1a0ac90(const char*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64* game_evt_demo_1156100(__int64 a1);

__int64* game_evt_demo_1156100(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  char* v10;
  char* v11;
  char* v12;
  float v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  float v21;
  char* v22;
  char* v23;
  char* v24;
  float v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64* result;
  __int64 v32;
  __int64 v33;
  __int128 v34;
  __int128 v35;
  unsigned int v36;
  __int64 v37;
  struct {
    __int64 v38[2];
    __int64 v39;
  } v38_;
  _BYTE* v40;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v38_.v38, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v38_.v38[1] = *(_QWORD*)(v4 + 8);
    v38_.v39 = v6;
    v38_.v38[0] = v5;
  }
  v7 = *(unsigned __int8*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  v9 = 0x0.0p+0f;
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v10 = *(const char**)(v4 + 40);
    v11 = (const char*)(v4 + 25);
    v40 = nullptr;
    if ((v7 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    v13 = GameRoutine_1a0ac90(v12, (__int64)&v40);
    if (*v40 != 0) {
      if (*v40 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v40) != 0) {
          v13 = 0x0.0p+0f;
        }
      }
      else {
        v13 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v13 = 0x0.0p+0f;
  }
  v14 = *(unsigned __int8*)(v4 + 48);
  v15 = *(_QWORD*)(v4 + 56);
  if ((v14 & 1) == 0) {
    v15 = v14 >> 1;
  }
  if (v15 != 0) {
    v16 = *(const char**)(v4 + 64);
    v17 = (const char*)(v4 + 49);
    v40 = nullptr;
    if ((v14 & 1) != 0) {
      v18 = v16;
    }
    else {
      v18 = v17;
    }
    v9 = GameRoutine_1a0ac90(v18, (__int64)&v40);
    if (*v40 != 0) {
      if (*v40 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v40) != 0) {
          v9 = 0x0.0p+0f;
        }
      }
      else {
        v9 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  v19 = *(unsigned __int8*)(v4 + 72);
  v20 = *(_QWORD*)(v4 + 80);
  v21 = 0x0.0p+0f;
  if ((v19 & 1) == 0) {
    v20 = v19 >> 1;
  }
  if (v20 != 0) {
    v22 = *(const char**)(v4 + 88);
    v23 = (const char*)(v4 + 73);
    v40 = nullptr;
    if ((v19 & 1) != 0) {
      v24 = v22;
    }
    else {
      v24 = v23;
    }
    v25 = GameRoutine_1a0ac90(v24, (__int64)&v40);
    if (*v40 != 0) {
      if (*v40 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v40) != 0) {
          v25 = 0x0.0p+0f;
        }
      }
      else {
        v25 = 0x0.0p+0f;
      }
    }
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v25 = 0x0.0p+0f;
  }
  v26 = *(unsigned __int8*)(v4 + 96);
  v27 = *(_QWORD*)(v4 + 104);
  if ((v26 & 1) == 0) {
    v27 = v26 >> 1;
  }
  if (v27 != 0) {
    v28 = *(_QWORD*)(v4 + 112);
    v29 = v4 + 97;
    v40 = nullptr;
    v30 = (const char*)((v26 & 1) != 0 ? v28 : v29);
    v21 = GameRoutine_1a0ac90(v30, (__int64)&v40);
    if (*v40 != 0) {
      if (*v40 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v40) != 0) {
          v21 = 0x0.0p+0f;
        }
      }
      else {
        v21 = 0x0.0p+0f;
      }
    }
  }
  if (GameData_22336e0 == 0) {
    goto LABEL_75;
  }
  result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                               (unsigned __int8*)v38_.v38);
  if (result != nullptr) {
    v32 = result[5];
    if (v32 == 0 || *(_QWORD*)(v32 + 136) == 0 || GameData_22336e0 == 0) {
      goto LABEL_75;
    }
    result = GameRoutine_1152360((_QWORD*)(GameData_22336e0 + 560),
                                 (unsigned __int8*)v38_.v38);
    if (result != nullptr) {
      v33 = result[5];
      if (v33 == 0 || *(_BYTE*)(v33 + 128) != 1) {
        goto LABEL_75;
      }
      result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
      if (*(_BYTE*)(v33 + 129) == 1) {
        v34 = *(_OWORD*)(v33 + 176);
        *(_BYTE*)(v33 + 192) = 1;
        *(_BYTE*)(v33 + 228) = 1;
        *(_QWORD*)(v33 + 216) = 0x3F8000003F800000LL;
        *(_DWORD*)(v33 + 224) = 3;
        *(float*)(v33 + 176) = v13 + *(float*)&v34;
        *(float*)(v33 + 180) = v9 + *((float*)&v34 + 1);
        v35 = *(_OWORD*)(v33 + 176);
        *((float*)&v35 + 2) = v25 + *((float*)&v34 + 2);
        DWORDn(v35, sizeof(v35) / 4 - 1) = 0;
        *(float*)&v34 = v21 + *(float*)(v33 + 200);
        *(_DWORD*)(v33 + 200) = v34;
        *(_DWORD*)(v33 + 204) = v34;
        *(_DWORD*)(v33 + 208) = v34;
        *(_DWORD*)(v33 + 212) = v34;
        *(_OWORD*)(v33 + 176) = v35;
      LABEL_75:
        result = nullptr;
      }
    }
  }
  if ((v38_.v38[0] & 1) != 0 && v38_.v39 != 0) {
    v36 = (unsigned int)result;
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  v38_.v39);
    return (__int64*)v36;
  }
  return result;
}

#pragma GCC visibility pop
