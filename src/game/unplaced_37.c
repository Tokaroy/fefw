#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _QWORD GameData_212d280;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_21f4cb8;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d270;
extern int* GameData_212deb0;
extern int GameData_21f4cb0;
float GameRoutine_5eaef0();
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_edf510(__int64 a1);
float game_111d7a0();
float game_11c4de0();

void game_edf510(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  GameRoutine_5eaef0();
}

float game_111d7a0()
{

#pragma clang fp contract(off)
  __int64 v0;
  int v1;
  float result;
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  int v12;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = 0x1.0000000000000p-1f;
  v3 = *(_QWORD*)(v0 + 96LL * v1 + 240);
  if (v3 != 0) {
    v4 = &GameData_21f4cb0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4cb8,
                              memory_order_acquire) &
         1) == 0) {
      v12 = __cxa_guard_acquire((__int64)&GameData_21f4cb8),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = 0x1.0000000000000p-1f;
      v4 = GameData_212deb0;
      if (v12 != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 0x10u),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        __cxa_guard_release((__int64)&GameData_21f4cb8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = 0x1.0000000000000p-1f;
        v4 = GameData_212deb0;
      }
    }
    v5 = *(_QWORD*)(v3 + 512);
    for (i = v5; i != *(_QWORD*)(v3 + 504); i -= 16) {
      v7 = *(_DWORD*)(i - 16);
      v5 -= 16;
      if (v7 == *v4) {
        if (*(_QWORD*)(v3 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          if (v8 != 0) {
            v9 = *(_QWORD*)(v8 + 392);
            v10 = *(_QWORD*)(v8 + 400);
            if (v10 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                        memory_order_relaxed);
              result = (float)(*(float*)(*(_QWORD*)(v9 + 11792) + 44LL) *
                               *(float*)(v9 + 32)) +
                       0x1.0624de0000000p-10f;
              if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v11 = result;
                (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v1 = COERCE_AS(
                        __typeof__(v1),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v10),
                    v0 = COERCE_AS(
                        __typeof__(v0),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v1 = COERCE_AS(
                        __typeof__(v1),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                return v11;
              }
            }
            else {
              return (float)(*(float*)(*(_QWORD*)(v9 + 11792) + 44LL) *
                             *(float*)(v9 + 32)) +
                     0x1.0624de0000000p-10f;
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

float game_11c4de0()
{

#pragma clang fp contract(off)
  __int64 v0;
  char v1;
  float result;
  __int64 v3;
  int v4;
  __int128 v5;
  __int128 v6;
  __int64 v7;
  int* v8;
  int v9;
  float v10;
  unsigned __int8 explicit;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(v0 + 152);
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(v0 + 240);
    *(_DWORD*)(v0 + 332) = 0;
    *(float*)(v0 + 336) = result;
    if (v4 == 1) {
      if (*(_BYTE*)(v0 + 272) == 1) {
        v5 = *(_OWORD*)(v0 + 352);
        *(_QWORD*)(v0 + 256) = v5;
        v6 = *(_OWORD*)(v0 + 256);
        *((_QWORD*)&v6 + 1) = DWORD2(v5);
        *(_OWORD*)(v0 + 256) = v6;
      }
      else {
        v7 = *(_QWORD*)(v0 + 360);
        *(_QWORD*)(v0 + 256) = *(_QWORD*)(v0 + 352);
        *(_QWORD*)(v0 + 264) = v7;
        *(_BYTE*)(v0 + 272) = 1;
      }
    }
    else if (*(_BYTE*)(v0 + 272) == 1) {
      *(_BYTE*)(v0 + 272) = 0;
    }
    if (*(_BYTE*)(v0 + 304) == 1) {
      *(_BYTE*)(v0 + 304) = 0;
    }
    *(_DWORD*)(v0 + 328) = 0;
    *(_QWORD*)(v0 + 320) = 0;
    *(_BYTE*)(v0 + 240) = 1;
    *(_BYTE*)(v0 + 241) = v1 & 1;
    v8 = (int*)GameData_212d280;
    *(_DWORD*)(v0 + 376) = 0;
    v9 = *v8;
    v10 = 0x1.e000000000000p+5f /
          (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    result = 0x0.0p+0f;
    if (v10 > 0x0.0p+0f) {
      result = 0x0.0p+0f / v10;
    }
    *(_DWORD*)(v0 + 380) = v9 + (int)result;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v12 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v22 = v3;
      v21 = __cxa_guard_acquire((__int64)GameData_212deb8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = GameData_212deb0;
      v3 = v22;
      if (v21 != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        __cxa_guard_release((__int64)GameData_212deb8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = GameData_212deb0;
        v3 = v22;
      }
    }
    v13 = *v12;
    v15 = *(_QWORD*)(v3 + 504);
    v14 = *(_QWORD*)(v3 + 512);
    v16 = v14;
    for (i = v14; i != v15; i -= 16) {
      v18 = *(_DWORD*)(i - 16);
      v16 -= 16;
      if (v18 == v13) {
        if (v14 != v16) {
          v19 = *(_QWORD*)(v16 + 8);
          if (v19 != 0) {
            v20 = *(_QWORD*)(v19 + 112);
            if (v20 != 0) {
              *(_DWORD*)(v20 + 148) = 1065353216;
              result = *(float*)(*(_QWORD*)GameData_212d270 + 512LL);
              *(float*)(v20 + 152) = result;
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
