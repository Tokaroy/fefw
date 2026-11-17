#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*game_map_BattleArea_Impl_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
float game_anonymous_8b9950(_QWORD* a1);

float game_anonymous_8b9950(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  unsigned int v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  __int128 v11;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *a1 = game_map_BattleArea_vtable;
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      384, 16, 0);
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_BYTE*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 152) = 0;
  *(_DWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_BYTE*)(v2 + 208) = 0;
  *(_QWORD*)(v2 + 224) = 0;
  *(_QWORD*)(v2 + 232) = 0;
  *(_QWORD*)v2 = game_map_BattleArea_Impl_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_DWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v21 = v2;
    v13 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v2 = v21;
    if (v13 != 0) {
      v14 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v14;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v2 = v21;
    }
  }
  v3 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v2 + 80) = GameData_21a6120;
  v4 = *(_OWORD*)(v2 + 80);
  *((_QWORD*)&v4 + 1) = v3;
  *(_OWORD*)(v2 + 80) = v4;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v22 = v2;
    v15 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v2 = v22;
    if (v15 != 0) {
      v16 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v16;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v2 = v22;
    }
  }
  v5 = GameData_21a6120;
  *(_QWORD*)(v2 + 128) = 0;
  *(_QWORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_DWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 96) = v5;
  v6 = *(_OWORD*)(v2 + 96);
  *((_QWORD*)&v6 + 1) = DWORD2(v5);
  *(_OWORD*)(v2 + 96) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v23 = v2;
    v17 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v2 = v23;
    if (v17 != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v2 = v23;
    }
  }
  v7 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v2 + 176) = GameData_21a6120;
  v8 = *(_OWORD*)(v2 + 176);
  *((_QWORD*)&v8 + 1) = v7;
  *(_OWORD*)(v2 + 176) = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v24 = v2;
    v19 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v2 = v24;
    if (v19 != 0) {
      v20 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v20;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v2 = v24;
    }
  }
  v9 = GameData_21a6120;
  *(_QWORD*)(v2 + 224) = 0;
  a1[1] = v2;
  *(_QWORD*)(v2 + 240) = 0;
  *(_WORD*)(v2 + 248) = 0;
  v10 = *(_OWORD*)(v2 + 224);
  *(_DWORD*)(v2 + 380) = 0;
  *(_QWORD*)(v2 + 192) = v9;
  v11 = *(_OWORD*)(v2 + 192);
  *((_QWORD*)&v11 + 1) = DWORD2(v9);
  *(_QWORD*)(v2 + 252) = 0;
  *(_QWORD*)(v2 + 260) = 0;
  *(_QWORD*)(v2 + 268) = 0;
  *(_QWORD*)(v2 + 276) = 0;
  *(_QWORD*)(v2 + 284) = 0;
  *(_QWORD*)(v2 + 292) = 0;
  *(_QWORD*)(v2 + 300) = 0;
  *(_QWORD*)(v2 + 308) = 0;
  *(_QWORD*)(v2 + 316) = 0;
  *(_QWORD*)(v2 + 324) = 0;
  *(_QWORD*)(v2 + 332) = 0;
  *(_QWORD*)(v2 + 340) = 0;
  *(_QWORD*)(v2 + 348) = 0;
  *(_QWORD*)(v2 + 356) = 0;
  *(_QWORD*)(v2 + 364) = 0;
  *(_QWORD*)(v2 + 372) = 0;
  *((_QWORD*)&v10 + 1) = 3212836864LL;
  *(_OWORD*)(v2 + 224) = v10;
  *(_OWORD*)(v2 + 192) = v11;
  return 0x0.0p+0f;
}

#pragma GCC visibility pop
