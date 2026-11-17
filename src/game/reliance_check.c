#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211eeb8[])();
extern __int64 (*game_RelianceCheck_vtable[])();
extern __int64 GameData_21c9708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_RelianceCheck_unknown_;
extern int GameData_2272240;
_QWORD* RelianceCheck_Destructor_alt1(_QWORD* result) __asm__(
    "RelianceCheck_Destructor");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_19a85a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 RelianceCheck_19a7f00_alt1(__int64 result, __int64 a2,
                                   int a3) __asm__("RelianceCheck_19a7f00");
void RelianceCheck_19a8310();
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_telop_TelopRelianceLvUp_CreateBind(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2176168;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*game_RelianceCheck_CheckSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn))
GameRoutine_19a85a0_alt1(_QWORD) __asm__("GameRoutine_19a85a0");
__int64 RelianceCheck_19a8080(__int64 a1);
__int64 RelianceCheck_19a8340_alt1(__int64 result, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_19a85a0_alt2() __asm__("GameRoutine_19a85a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceCheck_19a7f00(__int64 a1, __int64 a2, int a3);
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void RelianceCheck_Destructor(_QWORD* a1);
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64, __int64);
__int64 game_telop_TelopRelianceLvUp_CreateBind_alt1(__int64, __int64, __int64,
                                                     char, unsigned __int8);
__int64 RelianceCheck_19a8340(__int64 result);

void RelianceCheck_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_RelianceCheck_vtable;
  v2 = game_RelianceCheck_unknown_;
  if (game_RelianceCheck_unknown_ != 0) {
    v3 = *(_QWORD*)game_RelianceCheck_unknown_;
    v4 = fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)game_RelianceCheck_unknown_ != 0) {
      v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      *(_QWORD*)(game_RelianceCheck_unknown_ + 8) = v3;
      v6 = 128;
      if (*(_QWORD*)(v5 + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v5 + v6, v3);
    }
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, v2);
    game_RelianceCheck_unknown_ = 0;
  }
  *a1 = GameData_211eeb8;
  if ((_QWORD*)GameData_21c9708 == a1) {
    GameData_21c9708 = 0;
    GameData_2272240 = 0;
  }
}

void RelianceCheck_19a7f00(__int64 a1, __int64 a2, int a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = (__int64*)game_RelianceCheck_unknown_;
  v5 = *(_QWORD*)(game_RelianceCheck_unknown_ + 8);
  v4 = *(_QWORD*)(game_RelianceCheck_unknown_ + 16);
  if (v5 >= v4) {
    v7 = *(_QWORD*)game_RelianceCheck_unknown_;
    v8 = v5 - *(_QWORD*)game_RelianceCheck_unknown_;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 3);
    if (v9 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_19a85a0_alt2();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v12 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v13 = a1;
      v14 = a2;
      v15 = a3;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v12, 16, 0);
      a3 = v15;
      a2 = v14;
      a1 = v13;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v8;
    v18 = v16 + 24 * v12;
    *(_QWORD*)v17 = a1;
    *(_QWORD*)(v17 + 8) = a2;
    *(_DWORD*)(v17 + 16) = a3;
    v6 = v16 + v8 + 24;
    memcpy_alt1(v16, v7, v8);
    *v3 = v16;
    v3[1] = v6;
    v3[2] = v18;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v19, v7);
    }
  }
  else {
    *(_QWORD*)v5 = a1;
    *(_QWORD*)(v5 + 8) = a2;
    v6 = v5 + 24;
    *(_DWORD*)(v5 + 16) = a3;
  }
  v3[1] = v6;
}

__int64 RelianceCheck_19a8080(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = game_RelianceCheck_unknown_;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
  *(_QWORD*)(v4 + 144) = 0;
  v5 = v4;
  v6 = GameData_212c608[0];
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  v7 = (_QWORD*)(v4 + 152);
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)v4 = v6 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register_alt1(v4);
  *v7 = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_DWORD*)(v5 + 176) = 0;
  *(_QWORD*)v5 = game_RelianceCheck_CheckSeq_vtable;
  result = ProcInst_657850_alt1(v5, (__int64)&GameData_2176168,
                                "RelianceCheck::CheckSeq", 1, a1);
  v9 = *(_DWORD*)(v2 + 24);
  if (v9 >= 1) {
    v10 = *(_QWORD*)v2;
    v11 = *(_QWORD*)(v2 + 8);
    if (*(_QWORD*)v2 != v11) {
      do {
        *(_DWORD*)(v10 + 16) = v9;
        v10 += 24;
      } while (v10 != v11);
    }
  }
  if (v7 != (_QWORD*)v2) {
    v12 = *(_QWORD*)v2;
    v13 = *(_QWORD*)(v2 + 8);
    v14 = *(_QWORD*)(v5 + 168);
    v15 = v13 - *(_QWORD*)v2;
    v16 = *(_QWORD*)(v5 + 152);
    if (v15 <= (unsigned __int64)(v14 - v16)) {
      v24 = *(_QWORD*)(v5 + 160);
      v25 = v24 - v16;
      if (v15 > (unsigned __int64)(v24 - v16)) {
        v26 = v12 + v25;
        if (v24 != v16) {
          result = memmove_alt1(*(_QWORD*)(v5 + 152), v12, v25);
          v24 = *(_QWORD*)(v5 + 160);
        }
        if (v13 != v26) {
          result = memmove_alt1(v24, v26, v13 - v26);
        }
        v27 = v24 + v13 - v26;
        goto LABEL_28;
      }
      if (v13 != v12) {
        result = memmove_alt1(*(_QWORD*)(v5 + 152), v12, v15);
      }
    }
    else {
      v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
      if (v16 != 0) {
        v18 = *v3;
        *(_QWORD*)(v5 + 160) = v16;
        v19 = 128;
        if (*(_QWORD*)(v18 + 200) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v18 + v19, v16);
        v14 = 0;
        v7[1] = 0;
        v7[2] = 0;
        *v7 = 0;
      }
      if (v17 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_30;
      }
      v20 = 0xAAAAAAAAAAAAAAABLL * (v14 >> 3);
      v21 = 2 * v20;
      if (2 * v20 <= v17) {
        v21 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
      }
      v22 = v20 >= 0x555555555555555LL ? 0xAAAAAAAAAAAAAAALL : v21;
      if (v22 > 0xAAAAAAAAAAAAAAALL) {
      LABEL_30:
        GameRoutine_19a85a0_alt2();
      }
      v23 = 3 * v22;
      result = fw_memory_HeapManager_Allocate_alt1(*v3, 24 * v22, 16, 0);
      v16 = result;
      *(_QWORD*)(v5 + 152) = result;
      *(_QWORD*)(v5 + 160) = result;
      *(_QWORD*)(v5 + 168) = result + 8 * v23;
      if (v13 != v12) {
        result = memcpy_alt1(result, v12, v15);
      }
    }
    v27 = v16 + v15;
  LABEL_28:
    *(_QWORD*)(v5 + 160) = v27;
  }
  return result;
}

void RelianceCheck_19a8310()
{
  __int64 v0;
  __int64 v1;

  v0 = game_RelianceCheck_unknown_;
  v1 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v0 + 8) = v1;
}

__int64 RelianceCheck_19a8340(__int64 result)
{

#pragma clang fp contract(on)

  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  _QWORD* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  _QWORD v22[3];
  _QWORD v23[3];

  v1 = *(_QWORD*)(result + 152);
  v2 = *(_QWORD*)(result + 160);
  if (v1 != v2) {
    v3 = *(int*)(result + 176);
    if (0xAAAAAAAAAAAAAAABLL * ((v2 - v1) >> 3) > v3) {
      v4 = v1 + 24LL * (int)v3;
      v5 = *(_QWORD*)v4;
      v23[0] = 0;
      v23[1] = v5;
      if (v5 != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 1784LL) + 272LL);
      }
      v23[2] = v5;
      v6 = *(_QWORD*)(v4 + 8);
      v22[0] = 0;
      v22[1] = v6;
      if (v6 != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 24) + 1784LL) + 272LL);
        v22[2] = v7;
        v8 = GameData_212dae8;
        if (v5 != 0 && v7 != 0) {
          v9 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          v10 = result;
          v11 = GameReliance_8e17a0_alt1(v9, (__int64)v23, (__int64)v22);
          if ((v11 & 0x80000000) != 0) {
            v8 = &game_GameReliance_Impl_Data_vtable_ptr;
          }
          else {
            v8 = (__int64 (***)(void))(v9[1] + 56LL * v11);
          }
          result = v10;
          if (*((_BYTE*)v8 + 10) == 0) {
            goto LABEL_37;
          }
          goto LABEL_22;
        }
      }
      else {
        v8 = &game_GameReliance_Impl_Data_vtable_ptr;
      }
      if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 2) == 0) {
        goto LABEL_37;
      }
    LABEL_22:
      v13 = *((unsigned __int8*)v8 + 11);
      v14 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
      if ((int)v14 < 1) {
        LOBYTE(v15) = 0;
      LABEL_35:
        if (v13 == (unsigned __int8)v15) {
          goto LABEL_37;
        }
      }
      else {
        v15 = 0;
        v16 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v14 - 1));
        v17 = *((unsigned __int16*)v8 + 6) - *(int*)(v4 + 16);
        if (v16 >= v17) {
          v16 = v17;
        }
        if (v17 >= (signed __int32)*(_DWORD*)GameData_21d99c8) {
          v18 = v16;
        }
        else {
          v18 = *(_DWORD*)GameData_21d99c8;
        }
        while (1) {
          v19 = (unsigned int)(v15 + v14) >> 1;
          v20 = *(_DWORD*)(GameData_21d99c8 + 4LL * v19);
          if (v18 == v20) {
            break;
          }
          if (v18 < v20) {
            LODWORD(v14) = (unsigned int)(v15 + v14) >> 1;
          }
          else {
            v15 = v19 + 1;
          }
          if (v15 >= (int)v14) {
            goto LABEL_35;
          }
        }
        LOBYTE(v15) = v19 + 1;
        if (v13 == (unsigned __int8)(v19 + 1)) {
          goto LABEL_37;
        }
      }
      v21 = result;
      game_telop_TelopRelianceLvUp_CreateBind_alt1(
          result, *(_QWORD*)v4, *(_QWORD*)(v4 + 8), v15, v13);
      result = v21;
    LABEL_37:
      ++*(_DWORD*)(result + 176);
      v12 = *(_QWORD*)(result + 8);
      if (v12 != 0) {
        while (1) {
          if (*(_BYTE*)v12 == 2) {
            if (*(_DWORD*)(v12 + 32) == 0) {
              goto LABEL_44;
            }
          }
          else if (*(_BYTE*)v12 == 0) {
            return result;
          }
          v12 += 64;
        }
      }
      return result;
    }
  }
  v12 = *(_QWORD*)(result + 8);
  if (v12 != 0) {
    while (1) {
      if (*(_BYTE*)v12 == 2) {
        if (*(_DWORD*)(v12 + 32) == 1) {
        LABEL_44:
          *(_QWORD*)(result + 16) = v12;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v12 == 0) {
        return result;
      }
      v12 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
