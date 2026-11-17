#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_60a340(_QWORD* result, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_6340a0();
__int64 GameRoutine_634100();
__int64 GameRoutine_6341c0();
__int64 fs_633ae0();
__int64 fs_634280();
__int64 fw_memory_AllocateForFileSystem();
__int64 fw_memory_FreeForFileSystem();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_diag_detail_AbortImpl_1a0a080(__int64);
__int64 nn_fs_DisableGlobalFileDataCache();
__int64 nn_fs_EnableGlobalFileDataCache(__int64, unsigned __int64);
__int64 nn_fs_MountRom(const char*, __int64, unsigned __int64);
__int64 nn_fs_QueryMountRomCacheSize(__int64);
__int64 nn_fs_SetAllocator(__int64, __int64);
__int64 nn_os_InitializeConditionVariable(__int64);
__int64 nn_os_InitializeEvent();
__int64 nn_os_InitializeMutex(__int64, bool, int);
__int64 nn_os_InitializeReaderWriterLock(__int64);
__int64 nn_os_InitializeTimerEvent();
__int64 nn_os_StartPeriodicTimerEvent();
__int64 nn_os_StartThread(__int64);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 (*GameData_1f8ea80[])();
extern __int64 (*GameData_1f8eb20[])();
extern __int64 (*fs_Memory_vtable_ptr)();
extern __int64 fw_memory_g_heap_manager;
extern char GameData_21c67a0;
void GameRoutine_6430c0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void fw_world_InitializeWorker(__int64, unsigned __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 memory_631e60(__int64 a1);

__int64 memory_631e60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 primeEm;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    char gap0_[12];
    int v24;
    __int64 v25[4];
    __int64* v26;
  } f_;

  v2 = a1 + 4096;
  GameRoutine_1a0ba50(a1, 0, 0x1F0u);
  *(_QWORD*)a1 = GameData_1f8ea80;
  GameRoutine_1a0ba50(a1 + 488, 0, 0x5E8u);
  *(_QWORD*)(a1 + 504) = GameData_1f8ea80;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  GameRoutine_1a0ba50(a1 + 1016, 0, 0x1D9u);
  *(_QWORD*)(a1 + 1008) = GameData_1f8ea80;
  *(_QWORD*)(a1 + 1496) = 0;
  *(_QWORD*)(a1 + 1504) = 0;
  GameRoutine_1a0ba50(a1 + 1520, 0, 0x1D9u);
  *(_QWORD*)(a1 + 1512) = GameData_1f8ea80;
  GameRoutine_1a0ba50(a1 + 2000, 0, 0x200u);
  *(_QWORD*)(a1 + 2016) = GameData_1f8ea80;
  GameRoutine_1a0ba50(a1 + 2504, 0, 0x1F8u);
  *(_QWORD*)(a1 + 2520) = GameData_1f8ea80;
  GameRoutine_1a0ba50(a1 + 3008, 0, 0x200u);
  *(_QWORD*)(a1 + 3024) = GameData_1f8ea80;
  *(_QWORD*)(a1 + 3600) = 0;
  *(_DWORD*)(a1 + 3608) = 0;
  *(_QWORD*)(a1 + 3512) = 0;
  *(_QWORD*)(a1 + 3520) = 0;
  *(_QWORD*)(a1 + 3528) = 0;
  *(_QWORD*)(a1 + 3536) = 0;
  *(_QWORD*)(a1 + 3544) = 0;
  *(_QWORD*)(a1 + 3588) = 0;
  *(_QWORD*)(a1 + 3552) = 0;
  *(_QWORD*)(a1 + 3560) = 0;
  *(_QWORD*)(a1 + 3568) = 0;
  *(_QWORD*)(a1 + 3576) = 0;
  *(_WORD*)(a1 + 3584) = 0;
  nn_os_InitializeMutex(a1 + 3584, false, 0);
  nn_os_InitializeConditionVariable(a1 + 3616);
  *(_QWORD*)(a1 + 3624) = 0;
  *(_BYTE*)(a1 + 3632) = 0;
  *(_QWORD*)(a1 + 3704) = 0;
  *(_DWORD*)(a1 + 3712) = 0;
  *(_QWORD*)(a1 + 3640) = 0;
  *(_QWORD*)(a1 + 3648) = 0;
  *(_QWORD*)(a1 + 3656) = 0;
  *(_QWORD*)(a1 + 3664) = 0;
  *(_QWORD*)(a1 + 3692) = 0;
  *(_QWORD*)(a1 + 3672) = 0;
  *(_QWORD*)(a1 + 3680) = 0;
  *(_WORD*)(a1 + 3688) = 0;
  nn_os_InitializeMutex(a1 + 3688, false, 0);
  nn_os_InitializeConditionVariable(a1 + 3720);
  *(_QWORD*)(a1 + 3728) = 0;
  *(_BYTE*)(a1 + 3736) = 0;
  *(_QWORD*)(a1 + 3808) = 0;
  *(_DWORD*)(a1 + 3816) = 0;
  *(_QWORD*)(a1 + 3744) = 0;
  *(_QWORD*)(a1 + 3752) = 0;
  *(_QWORD*)(a1 + 3760) = 0;
  *(_QWORD*)(a1 + 3768) = 0;
  *(_QWORD*)(a1 + 3796) = 0;
  *(_QWORD*)(a1 + 3776) = 0;
  *(_QWORD*)(a1 + 3784) = 0;
  *(_WORD*)(a1 + 3792) = 0;
  nn_os_InitializeMutex(a1 + 3792, false, 0);
  *(_QWORD*)(a1 + 3824) = 0;
  *(_BYTE*)(a1 + 3832) = 0;
  *(_QWORD*)(a1 + 3904) = 0;
  *(_DWORD*)(a1 + 3912) = 0;
  *(_QWORD*)(a1 + 3840) = 0;
  *(_QWORD*)(a1 + 3848) = 0;
  *(_QWORD*)(a1 + 3856) = 0;
  *(_QWORD*)(a1 + 3864) = 0;
  *(_QWORD*)(a1 + 3892) = 0;
  *(_QWORD*)(a1 + 3872) = 0;
  *(_QWORD*)(a1 + 3880) = 0;
  *(_WORD*)(a1 + 3888) = 0;
  nn_os_InitializeMutex(a1 + 3888, false, 0);
  nn_os_InitializeConditionVariable(a1 + 3920);
  *(_QWORD*)(a1 + 3928) = 0;
  *(_BYTE*)(a1 + 3936) = 0;
  *(_QWORD*)(a1 + 4008) = 0;
  *(_DWORD*)(a1 + 4016) = 0;
  *(_QWORD*)(a1 + 3944) = 0;
  *(_QWORD*)(a1 + 3952) = 0;
  *(_QWORD*)(a1 + 3960) = 0;
  *(_QWORD*)(a1 + 3968) = 0;
  *(_QWORD*)(a1 + 3996) = 0;
  *(_QWORD*)(a1 + 3976) = 0;
  *(_QWORD*)(a1 + 3984) = 0;
  *(_WORD*)(a1 + 3992) = 0;
  nn_os_InitializeMutex(a1 + 3992, false, 0);
  nn_os_InitializeConditionVariable(a1 + 4024);
  *(_QWORD*)(a1 + 4032) = 0;
  *(_BYTE*)(a1 + 4040) = 0;
  *(_QWORD*)(a1 + 4112) = 0;
  *(_DWORD*)(a1 + 4120) = 0;
  *(_QWORD*)(a1 + 4048) = 0;
  *(_QWORD*)(a1 + 4056) = 0;
  *(_QWORD*)(a1 + 4064) = 0;
  *(_QWORD*)(a1 + 4072) = 0;
  *(_QWORD*)(a1 + 4100) = 0;
  *(_QWORD*)(a1 + 4080) = 0;
  *(_QWORD*)(a1 + 4088) = 0;
  *(_WORD*)(a1 + 4096) = 0;
  nn_os_InitializeMutex(v2, false, 0);
  *(_QWORD*)(a1 + 4128) = 0;
  *(_BYTE*)(v2 + 40) = 0;
  nn_os_InitializeEvent();
  nn_os_InitializeTimerEvent();
  *(_QWORD*)(a1 + 4248) = 0;
  nn_os_InitializeTimerEvent();
  *(_QWORD*)(v2 + 336) = 0;
  *(_BYTE*)(a1 + 4441) = 0;
  *(_WORD*)(a1 + 4442) = 0;
  *(_DWORD*)(a1 + 4444) = 0;
  *(_BYTE*)(v2 + 336) = 20;
  *(_QWORD*)(a1 + 4448) = 0;
  *(_BYTE*)(v2 + 224) = 1;
  *(_QWORD*)(a1 + 4384) = 0;
  *(_QWORD*)(a1 + 4392) = 0;
  *(_QWORD*)(a1 + 4400) = 0;
  *(_QWORD*)(a1 + 4328) = 0;
  *(_QWORD*)(a1 + 4336) = 0;
  *(_QWORD*)(a1 + 4344) = 0;
  *(_QWORD*)(a1 + 4352) = 0;
  *(_QWORD*)(a1 + 4360) = 0;
  *(_QWORD*)(a1 + 4368) = 0;
  *(_BYTE*)(v2 + 321) = 0;
  *(_WORD*)(a1 + 4456) = 0;
  *(_QWORD*)(a1 + 4472) = 0;
  *(_DWORD*)(a1 + 4480) = 0;
  *(_BYTE*)(a1 + 4376) = 0;
  *(_BYTE*)(v2 + 312) = 16;
  *(_QWORD*)(a1 + 4409) = 0x73746E65746E6F43LL;
  *(_QWORD*)(a1 + 4433) = 0x73746E65746E6F43LL;
  *(_WORD*)(a1 + 4441) = 0x2F3A;
  *(_QWORD*)(a1 + 4460) = 0;
  nn_os_InitializeMutex(a1 + 4456, true, 0);
  *(_QWORD*)(a1 + 4512) = 0;
  *(_QWORD*)(a1 + 4504) = 0;
  *(_QWORD*)(a1 + 4496) = 0;
  *(_QWORD*)(a1 + 4488) = 0;
  *(_DWORD*)(a1 + 4520) = 1065353216;
  nn_os_InitializeReaderWriterLock(a1 + 4528);
  *(_BYTE*)(v2 + 644) = 1;
  *(_DWORD*)(a1 + 4584) = 0;
  *(_QWORD*)(a1 + 4640) = 0;
  *(_QWORD*)(a1 + 4688) = 0;
  *(_QWORD*)(a1 + 4704) = 0;
  *(_DWORD*)(a1 + 4736) = 0;
  *(_QWORD*)(a1 + 4752) = 0;
  *(_QWORD*)(a1 + 4576) = 10240;
  *(_QWORD*)(a1 + 4592) = 0x800000;
  *(_QWORD*)(a1 + 4600) = 0x8000000;
  *(_QWORD*)(a1 + 4608) = 0x8000000;
  *(_QWORD*)(a1 + 4616) = 0x20000000;
  *(_DWORD*)(a1 + 4624) = 500;
  *(_QWORD*)(a1 + 4632) = 0x4000000;
  *(_QWORD*)(a1 + 4712) = 5;
  *(_QWORD*)(a1 + 4720) = 0x300000000LL;
  *(_QWORD*)(a1 + 4728) = 0x4000000064LL;
  *(_BYTE*)(a1 + 4745) = 0;
  *(_DWORD*)(a1 + 4741) = 0;
  if ((GameData_21c67a0 & 1) == 0) {
    nn_fs_SetAllocator((__int64)fw_memory_AllocateForFileSystem,
                       (__int64)fw_memory_FreeForFileSystem);
    GameData_21c67a0 = 1;
  }
  v3 = *(_QWORD*)(a1 + 4328);
  if ((unsigned __int64)(*(_QWORD*)(a1 + 4344) - v3) >> 16 == 0) {
    v4 = *(_QWORD*)(a1 + 4336) - v3;
    v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 0x10000, 16,
                                        0);
    GameRoutine_1a0b950(v5, v3, v4);
    *(_QWORD*)(a1 + 4328) = v5;
    *(_QWORD*)(a1 + 4336) = v5 + v4;
    *(_QWORD*)(a1 + 4344) = v5 + 0x10000;
    if (v3 != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6, v3);
    }
  }
  primeEm = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 4576) /
                           *(float*)(a1 + 4520));
  if (primeEm == 1) {
    primeEm = 2;
  }
  else if ((primeEm & (primeEm - 1)) != 0) {
    primeEm = std___1___next_prime(primeEm);
  }
  v8 = *(_QWORD*)(a1 + 4496);
  if (primeEm > v8) {
    goto LABEL_13;
  }
  if (primeEm < v8) {
    v9 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 4512) /
                        *(float*)(a1 + 4520));
    if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
      v9 = std___1___next_prime(v9);
    }
    else {
      v10 = 1LL << ((-(char)__clz((unsigned long long)(v9 - 1))) & 63);
      if (v9 >= 2) {
        v9 = v10;
      }
    }
    if (primeEm <= v9) {
      primeEm = v9;
    }
    if (primeEm < v8) {
    LABEL_13:
      GameRoutine_6430c0((__int64*)(a1 + 4488), primeEm);
    }
  }
  f_.v25[0] = 0;
  nn_fs_QueryMountRomCacheSize((__int64)f_.v25);
  v11 = f_.v25[0];
  v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, f_.v25[0], 16,
                                       0);
  GameRoutine_1a0ba50(v12, 0, v11);
  v13 = *(_QWORD*)(a1 + 3528);
  *(_QWORD*)(a1 + 3528) = v12;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14, v13);
    v12 = *(_QWORD*)(a1 + 3528);
    v11 = f_.v25[0];
  }
  if ((*(_BYTE*)(v2 + 312) & 1) != 0) {
    v15 = *(const char**)(a1 + 4424);
  }
  else {
    v15 = (const char*)(a1 + 4409);
  }
  f_.v24 = nn_fs_MountRom(v15, v12, v11);
  if (f_.v24 != 0) {
    nn_diag_detail_AbortImpl_1a0a080((__int64)&f_.v24);
  }
  if (*(_DWORD*)(a1 + 4584) != 3) {
    *(_DWORD*)(a1 + 4584) = 3;
    nn_fs_DisableGlobalFileDataCache();
    v16 = *(_QWORD*)(a1 + 4640);
    *(_QWORD*)(a1 + 4640) = 0;
    if (v16 != 0) {
      v17 = *(_QWORD*)(a1 + 4688);
      f_.v25[0] = v16;
      if (v17 == 0) {
        goto LABEL_47;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 48LL))(v17,
                                                             (__int64)f_.v25);
    }
    v18 = *(_QWORD*)(a1 + 4632);
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(
        (char*)((__int128*)0x10LL) + (_QWORD)fs_Memory_vtable_ptr))(
        (__int64)&fs_Memory_vtable_ptr, v18, 16);
    v20 = *(_QWORD*)(a1 + 4640);
    *(_QWORD*)(a1 + 4640) = v19;
    if (v20 == 0) {
      goto LABEL_39;
    }
    v21 = *(_QWORD*)(a1 + 4688);
    f_.v25[0] = v20;
    if (v21 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 48LL))(v21,
                                                             (__int64)f_.v25);
    LABEL_39:
      f_.v25[0] = (__int64)GameData_1f8eb20;
      f_.v25[1] = v18;
      f_.v26 = f_.v25;
      GameRoutine_60a340(f_.v25, (_QWORD*)(a1 + 4656));
      if (f_.v26 == f_.v25) {
        v22 = 32;
      }
      else {
        if (f_.v26 == nullptr) {
        LABEL_44:
          nn_fs_EnableGlobalFileDataCache(*(_QWORD*)(a1 + 4640), v18);
          goto LABEL_45;
        }
        v22 = 40;
      }
      (*(void (**)(__int64))(*f_.v26 + v22))((__int64)f_.v26);
      goto LABEL_44;
    }
  LABEL_47:
    GameRoutine_60a310();
  }
LABEL_45:
  *(_QWORD*)(a1 + 488) = fs_633ae0;
  *(_QWORD*)(a1 + 496) = a1;
  fw_world_InitializeWorker(a1, 0x20000001u, 0x8000);
  nn_os_StartThread(a1 + 32);
  *(_QWORD*)(a1 + 1000) = a1;
  *(_QWORD*)(a1 + 992) = GameRoutine_6340a0;
  fw_world_InitializeWorker(a1 + 504, 0x20000002u, 0x8000);
  nn_os_StartThread(a1 + 536);
  *(_QWORD*)(a1 + 1496) = GameRoutine_6340a0;
  *(_QWORD*)(a1 + 1504) = a1;
  fw_world_InitializeWorker(a1 + 1008, 0x120000002uLL, 0x8000);
  nn_os_StartThread(a1 + 1040);
  *(_QWORD*)(a1 + 2000) = GameRoutine_6340a0;
  *(_QWORD*)(a1 + 2008) = a1;
  fw_world_InitializeWorker(a1 + 1512, 0x220000002uLL, 0x8000);
  nn_os_StartThread(a1 + 1544);
  *(_QWORD*)(a1 + 2512) = a1;
  *(_QWORD*)(a1 + 2504) = GameRoutine_634100;
  fw_world_InitializeWorker(a1 + 2016, 0x20000003u, 0x8000);
  nn_os_StartThread(a1 + 2048);
  *(_QWORD*)(a1 + 3016) = a1;
  *(_QWORD*)(a1 + 3008) = GameRoutine_6341c0;
  fw_world_InitializeWorker(a1 + 2520, 0x20000004u, 0x8000);
  nn_os_StartThread(a1 + 2552);
  atomic_store(0, (unsigned __int8*)(v2 + 224));
  *(_QWORD*)(a1 + 3520) = a1;
  *(_QWORD*)(a1 + 3512) = fs_634280;
  fw_world_InitializeWorker(a1 + 3024, 0x20000005u, 0x8000);
  nn_os_StartThread(a1 + 3056);
  return nn_os_StartPeriodicTimerEvent();
}

#pragma GCC visibility pop
