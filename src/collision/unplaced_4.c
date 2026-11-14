#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a0820(_QWORD*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 physx_PxCreateStatic(__int64, __int64, __int64);
extern _QWORD GameData_21fdd90[5];
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN GameData_21fde98;
extern __int64 (*GameData_1ff6730[])();
extern __int64 (*collision_Shape_vtable[])();
extern __int64* GameData_212c838;
extern __int64 GameData_21fddd0;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void GameHr_a5aca0(__int64);
void Shape_f64270(__int64*, _QWORD*);
void __cxa_guard_release(__int64);
__attribute__((swiftcall)) void collision_f643c0(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, int a3,
                                                 float a5_bits_, float a6_bits_,
                                                 float a7);

__attribute__((swiftcall)) void collision_f643c0(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, int a3,
                                                 float a5_bits_, float a6_bits_,
                                                 float a7)
{

#pragma clang fp contract(off)
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int a5 = COERCE_AS(unsigned int, a5_bits_);
  unsigned int a6 = COERCE_AS(unsigned int, a6_bits_);
  atomic_uchar* v14;
  unsigned __int8 explicit;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int128 v26;
  int8x16_t v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  _QWORD v32[2];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)&GameData_21fde98);
  }
  nn_os_LockMutex((__int64)GameData_21fdd90);
  v14 = (atomic_uchar*)GameData_212c840;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v16 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 8) = 0;
    *v16 = 0;
    v16[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v16) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v16) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v16) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v16) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v16) =
        (_UNKNOWN*)1065353216;
    game_14a0820(v16);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)GameData_212c840);
  }
  v17 = *v16;
  v29 = __PAIR64__(a6, a5);
  *(float*)&v30 = a7;
  v18 = *(_QWORD*)(v17 + 24);
  LODWORD(v28) = 3;
  if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 8) = 0;
    *v16 = 0;
    v16[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v16) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v16) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v16) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v16) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v16) =
        (_UNKNOWN*)1065353216;
    game_14a0820(v16);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)GameData_212c840);
  }
  v32[0] = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
  LANES128(v27).n128_u8[0] = 11;
  v19 = (*(__int64 (**)(__int64, unsigned __int64*, _QWORD*, __int64, _QWORD,
                        int8x16_t*))(*(_QWORD*)v18 + 248LL))(v18, &v28, v32, 1,
                                                             0, &v27);
  v32[1] = 0;
  v20 = (_QWORD*)v19;
  v32[0] = a2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v19 + 112LL))(v19, v32);
  (*(void (**)(_QWORD*, _QWORD*))(*v20 + 128LL))(v20, v32);
  v26 = *(_OWORD*)(a1 + 48);
  Quat_624bc0((void*)(&v27), a1);
  v28 = LANES128(v27).n128_u64[0];
  v30 = v26;
  v31 = DWORD2(v26);
  v29 = LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0];
  v21 = physx_PxCreateStatic(v18, (__int64)&v28, (__int64)v20);
  v22 = *(_QWORD**)(v17 + 32);
  v23 = v21;
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v22 + 952LL))(*v22, 0, 0);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v22 + 224LL))(*v22, v23, 0);
  v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       112, 16, 0);
  *(_QWORD*)(v24 + 8) = 0;
  *(_QWORD*)(v24 + 16) = 0;
  *(_BYTE*)(v24 + 32) = 1;
  *(_QWORD*)(v24 + 40) = v23;
  *(_QWORD*)(v24 + 48) = a2;
  *(_DWORD*)(v24 + 56) = a3;
  *(_QWORD*)(v24 + 64) = 0;
  *(_QWORD*)(v24 + 72) = 0;
  *(_QWORD*)(v24 + 80) = 0;
  *(_QWORD*)(v24 + 88) = 0;
  *(_QWORD*)(v24 + 96) = 0;
  *(_QWORD*)(v24 + 104) = 0;
  a4[1] = v24;
  *(_QWORD*)v24 = GameData_1ff6730;
  *(_QWORD*)(v24 + 24) = collision_Shape_vtable;
  *a4 = v24 + 24;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)&GameData_21fde98);
  }
  Shape_f64270((__int64*)(GameData_21fddd0 - 24), a4);
  v20[2] = *a4;
  (*(void (**)(_QWORD*))*v20)(v20);
  (*(void (**)(_QWORD))(*(_QWORD*)*v22 + 960LL))(*v22);
  {
    nn_os_UnlockMutex((__int64)GameData_21fdd90);
    return;
  }
}

#pragma GCC visibility pop
