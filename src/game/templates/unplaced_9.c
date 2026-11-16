#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void UnitActor_81d0c0(PSEUDO_X8, __int64,
                                                 float32x4_t*);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a831c0;
extern __int128 GameData_21a6120;
float Unit_6c7fa0(__int64, __int64);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_templates_961090(__int128* a1, __int64 a2, char a3, char a4,
                           __n128 result);

void game_templates_961090(__int128* a1, __int64 a2, char a3, char a4,
                           __n128 result)
{
  char v5;
  __int64 v9;
  int v10;
  float v11;
  float32x4_t v12;
  float v13;
  __int128 v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  char v19;
  __int128 v20;
  float32x4_t v21;

  v5 = a4 & 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v19 = a4 & 1;
    v15 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v5 = v19;
    if (v15 != 0) {
      v16 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v16;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v5 = v19;
    }
  }
  v9 = *((_QWORD*)&GameData_21a6120 + 1);
  *((_BYTE*)a1 + 24) = 0;
  *((_BYTE*)a1 + 25) = v5;
  *((_QWORD*)a1 + 1) = v9;
  *((_QWORD*)a1 + 2) = 1065353216;
  *(_QWORD*)a1 = GameData_21a6120;
  if (a2 != 0) {
    v10 = *(_DWORD*)(a2 + 592);
    v11 = (float)(unsigned int)(v10 - 1) * 0x1.4000000000000p+1f;
    if (v10 <= 0) {
      v11 = 0x0.0p+0f;
    }
    *(float*)&v17 =
        (float)((float)((float)((float)(unsigned int)(*(char*)(a2 + 584) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v11;
    *(float*)&v18 =
        (float)((float)((float)((float)(unsigned int)(*(char*)(a2 + 585) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v11;
    LANES128(v12).n128_u64[0] = v17;
    LANES128(v12).n128_u64[1] = v18;
    v21 = v12;
    v13 = Unit_6c7fa0(a2, (__int64)&v21);
    *(float*)a1 = *(float*)&v17;
    *((float*)a1 + 1) = v13;
    result = COERCE_AS(__n128, *a1);
    LANES128(result).n128_u64[1] = v18;
    *a1 = (__int128)result;
    LANES128(result).n128_f32[0] = (float)*(int*)(a2 + 592);
    *((_DWORD*)a1 + 4) = LANES128(result).n128_u32[0];
    switch (a3) {
    case 1:
      v20 = (__typeof__(v20)){0};
      break;
    case 3:
      v20 = GameData_1a831c0;
      break;
    case 2:
      UnitActor_81d430((void*)(&v21), a2);
      goto LABEL_12;
    default:
      return;
    }
    UnitActor_81d0c0((void*)(&v21), a2, (float32x4_t*)&v20);
  LABEL_12:
    result = v21;
    *(_QWORD*)a1 = LANES128(v21).n128_u64[0];
    v14 = *a1;
    *((_QWORD*)&v14 + 1) = LANES128(result).n128_u32[2];
    *a1 = v14;
  }
  return;
}

#pragma GCC visibility pop
