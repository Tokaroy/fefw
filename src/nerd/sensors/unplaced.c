#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6fefc0(__int64 result, unsigned __int64);

__int64 __cxa_guard_acquire_plt(_QWORD);

__int64 __cxa_guard_release_plt(_QWORD);

__int64 log_plt(void* this_, double);

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);

__int64 memset_plt(void* this_, void*, int, unsigned __int64);

__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64, __int64,
                                  unsigned __int64);

__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
    _QWORD);

extern __int64 SdkData_e89160;

extern __int64 SdkData_e89170;

extern __int64 SdkData_e89180;

extern __int64 SdkData_e89190;

extern __int64 SdkData_e891a0;

extern __int64 SdkData_e891b0;

extern void (*SdkData_e89158[41])();

extern void (*SdkData_e89168[39])();

extern void (*SdkData_e89178[37])();

extern void (*SdkData_e89188[35])();

extern void (*SdkData_e89198[33])();

extern void (*SdkData_e891a8[31])();

void nerd_sensors_6fd620();

void nerd_sensors_6fd680();

void nerd_sensors_6fd6e0();

void nerd_sensors_6fd740();

void nerd_sensors_6fd7b0();

void nerd_sensors_6fd840();

unsigned __int64 nerd_sensors_6fea40(void* this_, __int64 a2, __int64 a3,
                                     unsigned __int64 a4);

void nerd_sensors_6fd620()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89160,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89160) != 0) {
    *(_QWORD*)SdkData_e89158[0] = 0x3FF6A09E667F3BCDLL;
    __cxa_guard_release_plt(SdkData_e89160);
  }
}

void nerd_sensors_6fd680()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89170,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89170) != 0) {
    *(_QWORD*)SdkData_e89168[0] = 0x3FE62E42FEFA39EFLL;
    __cxa_guard_release_plt(SdkData_e89170);
  }
}

void nerd_sensors_6fd6e0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89180,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89180) != 0) {
    *(_QWORD*)SdkData_e89178[0] = 0x400921FB54442D18LL;
    __cxa_guard_release_plt(SdkData_e89180);
  }
}

void nerd_sensors_6fd740()
{

#pragma clang fp contract(off)
  void* v0;
  __int64 v1;

  v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89190,
                            memory_order_acquire) &
       1) == 0) {
    v0 = (void*)__cxa_guard_acquire_plt(SdkData_e89190),
    v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
    if ((_DWORD)v0 != 0) {
      log_plt(v0, *(double*)SdkData_e89178[0]),
          v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
      *(_QWORD*)SdkData_e89188[0] = v1;
      __cxa_guard_release_plt(SdkData_e89190),
          v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
    }
  }
}

void nerd_sensors_6fd7b0()
{
  void(__attribute__((noreturn)) * v0)();
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e891a0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e891a0) != 0) {
    v0 = SdkData_e89198[0];
    *(_QWORD*)SdkData_e89198[0] = 0;
    *((_QWORD*)v0 + 1) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) = 1065353216;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = 0;
    *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v0 + 4) = 0;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 4) =
        0x3F80000000000000LL;
    *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v0 + 4) = 0;
    *(int*)((char*)((int*)0x44LL) + (_QWORD)v0) = 0;
    *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v0 + 8) = 0;
    *(_DWORD*)((char*)((__int64*)0x58LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0 + 4) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x64LL) + (_QWORD)v0) = 0x3F80000000000000LL;
    *(_QWORD*)((char*)((_UNKNOWN*)0x6CLL) + (_QWORD)v0) = 0;
    v1 = SdkData_e891a0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x74LL) + (_QWORD)v0) = 0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x74LL) + (_QWORD)v0 + 4) = 1065353216;
    __cxa_guard_release_plt(v1);
  }
}

void nerd_sensors_6fd840()
{
  void(__attribute__((noreturn)) * v0)();
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e891b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e891b0) != 0) {
    v0 = SdkData_e891a8[0];
    *(_QWORD*)SdkData_e891a8[0] = 0x43C8000043C80000LL;
    *((_QWORD*)v0 + 1) = 0x3E80000043C80000LL;
    *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xB8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xB8LL) + (_QWORD)v0 + 8) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 1048576000;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) =
        0x43C8000043C80000LL;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0) = 0x38D1B71738D1B717LL;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 8) =
        0x38D1B71738D1B717LL;
    *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0) = 0x38D1B71738D1B717LL;
    *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0 + 8) = 0x3D8000003D800000LL;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0) = 0;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0 + 4) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0 + 12) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xD8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = 0x38D1B71743C80000LL;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0 + 8] = 0x38D1B71738D1B717LL;
    *(_DWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((_UNKNOWN*)0x8CLL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v0) = 1031798784;
    *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v0 + 4) = 980581299;
    *(_DWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0) = 980581299;
    *(_DWORD*)((char*)((char*)0x60LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xCCLL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xD8LL) + (_QWORD)v0) = 980151802;
    v1 = SdkData_e891b0;
    *(_DWORD*)((char*)((_UNKNOWN*)0xE0LL) + (_QWORD)v0) = 980581299;
    __cxa_guard_release_plt(v1);
  }
}

#pragma GCC visibility pop
