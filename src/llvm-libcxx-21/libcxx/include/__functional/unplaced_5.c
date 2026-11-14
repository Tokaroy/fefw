#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_1789cf0(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1b45704;
extern __int64 (*GameData_2091090[])();
extern __int64 (*GameData_2091228[])();
extern __int64 (*game_facility_anonymous_ProcStableBreedingUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2091160[])();
extern __int64 (*snd_Archive_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212dcd0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 llvm_libcxx_21_libcxx_include___functional_104020(__int64 result,
                                                          __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_888560(__int64 a1);
_QWORD* llvm_libcxx_21_libcxx_include___functional_16c1e00(__int64 a1);

__int64 llvm_libcxx_21_libcxx_include___functional_104020(__int64 result,
                                                          __int64 a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 40) = 0;
  *(_QWORD*)result = snd_Archive_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

_QWORD* llvm_libcxx_21_libcxx_include___functional_16c1e00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* result;
  __int64*** v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  _BOOL4 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1392, 16, 0),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_menu_1789cf0(v2, (__int64)"StableBreedingUnitMenu"),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v2 + 1184) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)(v2 + 1216) = 0;
  *(_QWORD*)(v2 + 1224) = 0;
  *(_QWORD*)(v2 + 1232) = 0;
  *(_QWORD*)(v2 + 1200) = 0xFFFFFFFFLL;
  *(_QWORD*)(v2 + 1280) = 0;
  *(_QWORD*)(v2 + 1296) = 0;
  *(_QWORD*)(v2 + 1304) = 0;
  *(_BYTE*)(v2 + 1312) = 0;
  *(_QWORD*)(v2 + 1328) = 0;
  *(_QWORD*)(v2 + 1336) = 0;
  *(_QWORD*)(v2 + 1344) = 0;
  *(_QWORD*)(v2 + 1352) = 0;
  *(_QWORD*)(v2 + 1360) = 0;
  *(_QWORD*)(v2 + 1368) = 0;
  *(_DWORD*)(v2 + 1240) = 2;
  *(_QWORD*)v2 = game_facility_anonymous_ProcStableBreedingUnitMenu_vtable;
  *(_QWORD*)(v2 + 1376) = 0;
  *(_QWORD*)(v2 + 176) = GameData_2091090;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_2091160;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  ProcInst_657850(v2, (__int64)GameData_212c730,
                  (__int64)"ProcStableBreedingUnitMenu", 1, a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v12_.v12;
  v12_.v12[0] = GameData_2091228;
  v12_.v12[1] = v2;
  v5 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v12_.v13 = v12_.v12;
  v6 = *v5;
  v7 = v5[1];
  if (*v5 == v7) {
    goto LABEL_19;
  }
  do {
    v8 = *v6;
    v9 = v6[1];
    if (v9 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v8 != nullptr) {
      v10 = (v8[6] & 0x20) == 0;
      if (v9 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v10 = false;
      if (v9 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v9 + 16))(v9),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v9),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (!v10) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v10) {
    LABEL_12:
      v14 = **v6;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13, &v14),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_3:
    v6 += 2;
  } while (v6 != v7);
  result = v12_.v13;
  if (v12_.v13 != v12_.v12) {
    if (v12_.v13 != nullptr) {
      v11 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                         v3);
    }
    return result;
  }
LABEL_19:
  v11 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

#pragma GCC visibility pop
