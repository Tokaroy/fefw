#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_11d8c0(PSEUDO_X8, __int64 result, __int64,
                                           __int64, _DWORD*, __int64, __int64,
                                           __int64, __int64);
__int64 GameRoutine_10d050(__int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
extern __int64* snd_Game_s_instance_ptr[3];
extern __int64 snd_g_frameCount_ptr;
extern char GameData_1a9f09e;
void snd_Fade_Fade_10c830(__int64, float);
void snd_e9590();
__attribute__((swiftcall)) void snd_130790(PSEUDO_X8 x8_, __int64 a1, int a2,
                                           _DWORD* a3, __int64 a4, _DWORD* a5,
                                           char a6);

void snd_e9590()
{
  _QWORD* v0;
  __int64 v1;

  v0 = (_QWORD*)*snd_Game_s_instance_ptr[0];
  v1 = *(_QWORD*)snd_g_frameCount_ptr;
  v0[41] = 0;
  v0[39] = v1;
  v0[40] = 0;
}

__attribute__((swiftcall)) void snd_130790(PSEUDO_X8 x8_, __int64 a1, int a2,
                                           _DWORD* a3, __int64 a4, _DWORD* a5,
                                           char a6)
{
  __int64 a7 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  char v13;
  unsigned int v14;
  unsigned int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  struct {
    __int64 v25;
    int v26;
  } v25_;
  struct {
    _QWORD v27[25];
    __int64 v28;
    unsigned __int64 v29;
    _QWORD v30[3];
  } v27_;
  struct {
    __int64 v31;
    int v32;
  } v31_;

  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = a1 + 4096;
  *a5 = 0;
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  GameRoutine_112180((__int64)&v31_.v31, a1 + 5800),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a3[16] != 0) {
    snd_fnd_WeakHandle_reset((__int64)&v31_.v31),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  snd_Fade_Fade_10c830((__int64)&v25_.v25, 0x0.0p+0f),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v13 = *(_BYTE*)(v9 + 1788);
  v14 = *(_DWORD*)(a1 + 5920);
  v15 = *(_DWORD*)(a1 + 5924);
  snd_Fade_Fade_10c830((__int64)v27_.v27, 0x0.0p+0f),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v27_.v30[2] = 0;
  v27_.v30[0] = 0;
  v27_.v28 = 0x3F80000000000000LL;
  v27_.v29 = 0x1000100000000LL;
  *(_DWORD*)((char*)v27_.v30 + 7) = 0;
  GameRoutine_10d050((__int64)v27_.v27),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v27_.v28 = 0x3F80000000000000LL;
  BYTE4(v27_.v30[0]) = v13;
  v27_.v29 = __PAIR64__(v15, v14);
  LODWORD(v27_.v30[0]) = 0;
  snd_Fade_Destroy_Fade(&v25_.v25),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = a6 & 1;
  v17 = *(_QWORD*)(a1 + 32);
  v25_.v25 = 0;
  v25_.v26 = 0x2000;
  HIBYTE(v27_.v30[0]) = v16;
  snd_fnd_WeakHandle_set((__int64)&v25_.v25, a1 + 5592),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_11d8c0((void*)(a7), v17, (__int64)&v31_.v31, (__int64)&GameData_1a9f09e,
             a3, a4, a1 + 5848, (__int64)v27_.v27, (__int64)&v25_.v25),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v18 = snd_fnd_WeakHandle_get(a7),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v18 != 0 &&
      (v19 = v18,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v18 - 5592) + 376LL))(v18 - 5592) &
        1) != 0)) {
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 640LL))(a1),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v19 - 5592) + 632LL))(v19 - 5592,
                                                                    v20),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v19 - 5592) + 672LL))(
        v19 - 5592, *(unsigned __int8*)(v9 + 1802)),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(v19 + 288) = a2;
    (*(void (**)(__int64))(*(_QWORD*)(v19 - 5592) + 112LL))(v19 - 5592),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v21 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 3108LL);
  }
  *a5 = v21;
  {
    snd_Fade_Destroy_Fade(v27_.v27),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    return;
  }
}

#pragma GCC visibility pop
