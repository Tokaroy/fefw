#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
SeqVoice_1305a0(PSEUDO_X8, __int64, int, __int64, __int64, _DWORD*, char);
__int64 Crc32List_1212c0(__int64, unsigned __int8*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_13fd90(__int64 result);
__int64 VibVoice_1420e0(__int64 result);
__int64 Voice_145cc0(__int64, __int64);
__int64 snd_120f10(__int64, __int64);
__int64 snd_BGM_playSingle(__int64*, __int64, __int64, unsigned int, float,
                           float);
__int64 snd_Fade_CtrlTypeAHDSR_setState(__int64 result, int);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Voice_finish(_BYTE*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_reset(__int64);
bool VibVoice_13fc10(_QWORD*);
bool snd_(__int64);
bool snd_Param_isEnvelopeEnded(__int64);
bool snd_Param_isEnvelopeFading(__int64);
bool snd_Param_isEnvelopeReleased(__int64);
bool snd_Voice_hasFeature6(__int64);
bool snd_Voice_hasFeature8(__int64);
bool snd_Voice_isActorScaled(__int64);
extern __int64* GameData_2134c58[8];
extern __int64* GameData_2134c60[7];
extern __int64* GameData_2134c68[6];
extern __int64* GameData_2134c70[5];
extern __int64* snd_g_memory_ptr[2];
extern __int64 snd_g_proxy_ptr[2];
extern float snd_g_semitoneRatios[170];
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
int rand();
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) snd_a36650();
void snd_Fade_Fade_10c830(__int64, float);
__int64 snd_db740(__int64 result, __int64 a2, __int64 a3);
__int64 snd_129560(__int64 result);
bool snd_141a80(__int64 a1, unsigned __int8 a2);
__int64 snd_188f70(__int64 a1, __int64 a2);
double snd_Fade_Fade_10c830_alt1(__int64, float);

__int64 snd_db740(__int64 result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v4;
  float v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  bool v11;
  struct {
    _QWORD v12[2];
    char* v13;
  } v12_;

  v3 = *(_QWORD*)(result + 16);
  v4 = (_QWORD*)result;
  if (v3 != *(_QWORD*)(result + 8)) {
    if ((*(_BYTE*)(v3 - 75) & 1) != 0) {
      return result;
    }
    if ((*(_BYTE*)(v3 - 79) & 1) == 0 && (*(_BYTE*)(v3 - 78) & 1) == 0 &&
        *(_BYTE*)(v3 - 77) != 1) {
      v6 = a3;
      v7 = (const char*)a2;
      (*(void (**)(__int64))(*(_QWORD*)(v3 - 416) + 32LL))(v3 - 416);
      result = GameRoutine_1a09c70(v7);
      v8 = LOBYTE(v12_.v12[0]) >> 1;
      if ((v12_.v12[0] & 1) != 0) {
        v8 = v12_.v12[1];
      }
      if (result == v8) {
        v9 = result;
        if (result == -1) {
          snd_a36650();
        }
        if ((v12_.v12[0] & 1) != 0) {
          v10 = v12_.v13;
        }
        else {
          v10 = (char*)v12_.v12 + 1;
        }
        result = GameRoutine_1a09cf0((__int64)v10, (__int64)v7, v9);
        v11 = (_DWORD)result == 0;
      }
      else {
        v11 = false;
      }
      if ((v12_.v12[0] & 1) != 0) {
        result = (*(__int64 (**)(__int64, __int64))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     (__int64)v12_.v13);
      }
      if (!v11) {
        snd_Fade_Fade_10c830_alt1((__int64)v12_.v12, 0x0.0p+0f);
        (*(void (**)(__int64, __int64, __int64))(*v4 + 48LL))(
            (__int64)v4, (__int64)v12_.v12, 0);
        snd_Fade_Destroy_Fade(v12_.v12);
        v5 = 0x1.0000000000000p+0f;
        result = (__int64)v4;
        a2 = (__int64)v7;
        a3 = v6;
        goto LABEL_7;
      }
      return result;
    }
  }
  v5 = 0x1.0000000000000p+0f;
LABEL_7:
  result = snd_BGM_playSingle((__int64*)result, a2, a3, 0, 0x0.0p+0f, v5);
  *(_BYTE*)(v4[2] - 75LL) = 1;
  return result;
}

__int64 snd_129560(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _BYTE v13[16];

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(_DWORD*)(result + 5792);
  v2 = result;
  if (v1 != 8) {
    if (v1 != 6) {
      return result;
    }
    if (!snd_Param_isEnvelopeReleased(result + 40) &&
        !snd_Param_isEnvelopeFading(v2 + 40) &&
        !snd_Param_isEnvelopeEnded(v2 + 40)) {
      v3 = *(int*)(*(_QWORD*)(v2 + 6096) + 24LL) - 1;
      v4 = rand(),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
      v5 = *(_QWORD*)(v2 + 6096);
      v6 = *(_DWORD*)(v5 + 24);
      v7 = (int)(float)((float)((float)v3 + 0x1.cccccc0000000p-1f) *
                        vcvts_n_f32_s32(v4, 0x1Fu));
      if (v6 >= 3) {
        v8 = v7 + 1 < v6 ? v7 + 1 : 0;
        if (*(_DWORD*)(v5 + 28) == v7) {
          v7 = v8;
        }
      }
      *(_DWORD*)(v5 + 28) = v7;
      v9 = *(_QWORD*)(v2 + 6096);
      SeqVoice_1305a0(
          (void*)((__int64)v13), v2, *(_DWORD*)(v9 + 28),
          *(_QWORD*)(*(_QWORD*)(v2 + 6088) + 680LL) +
              664LL * *(unsigned __int8*)(*(_QWORD*)v9 + *(int*)(v9 + 28)),
          *(_QWORD*)(v9 + 48) +
              104LL * *(unsigned __int8*)(*(_QWORD*)v9 + *(int*)(v9 + 28)),
          (_DWORD*)(v2 + 5788), 0),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_112180(*(_QWORD*)(v2 + 6104), (__int64)v13),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    *(_DWORD*)(v2 + 5792) = 8;
  }
  v10 = snd_fnd_WeakHandle_get(*(_QWORD*)(v2 + 6104)),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v10 != 0 &&
      (v11 = v10,
       ((*(__int64 (**)(__int64))(*(_QWORD*)(v10 - 5592) + 376LL))(v10 - 5592) &
        1) != 0)) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(v11 - 5592) + 520LL))(v11 - 5592),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(v2 + 5936) = v12;
  }
  else {
    if (*(float*)(*(_QWORD*)(v2 + 5648) + 256LL) < 0x0.0p+0f) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
    }
    if (snd_Param_isEnvelopeReleased(v2 + 40)) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
    }
    if (snd_Param_isEnvelopeFading(v2 + 40)) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
    }
    result = ((__int64 (*)(__int64))snd_Param_isEnvelopeEnded)(v2 + 40),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((result & 1) != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
    }
    else {
      *(_DWORD*)(v2 + 5792) = 10;
    }
  }
  return result;
}

bool snd_141a80(__int64 a1, unsigned __int8 a2)
{
  _BYTE* v2;
  unsigned __int8 v4;
  _BOOL8 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  int v12;
  bool v13;
  __int64 v14;
  double v15;
  float v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  __int64* v26;
  __int64 v27;
  int v28;
  int v29;
  float v30;
  __int64 v31;
  _BYTE v32[24];

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_QWORD*)(a1 + 32) == 0) {
    return false;
  }
  v2 = (_BYTE*)(a1 + 4096);
  v4 = *(_BYTE*)(a1 + 5919);
  *(_BYTE*)(a1 + 5919) = 1;
  if ((*(_BYTE*)(a1 + 5885) & 1) != 0) {
    return false;
  }
  if (*(_BYTE*)(a1 + 5895) == 1) {
    snd_fnd_WeakHandle_reset(a1 + 5864),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    snd_Voice_finish((_BYTE*)a1),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    snd_Fade_CtrlTypeAHDSR_setState(a1 + 3600, 7),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    if (((*(__int64 (**)(__int64))(**(_QWORD**)(a1 + 6136) + 104LL))(
             *(_QWORD*)(a1 + 6136)) &
         1) != 0) {
      (*(void (**)(__int64))(**(_QWORD**)(a1 + 6136) + 152LL))(
          *(_QWORD*)(a1 + 6136)),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    return false;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = snd_fnd_WeakHandle_get(a1 + 5848),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v8 = v7;
  if (v7 != 0) {
    if (v2[1790] == 1 && *(_BYTE*)(v7 + 68) != 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v7 - 5592) + 112LL))(v7 - 5592),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      v10 = a1 + 40;
      v9 = *(_QWORD*)(a1 + 40);
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v7 - 5592) + 96LL))(v7 - 5592),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(__int64, __int64))(*(_QWORD*)(a1 + 40) + 1040LL))(
          a1 + 40, (__int64)v32),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(__int64))(*(_QWORD*)(v8 - 5592) + 112LL))(v8 - 5592),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      v9 = *(_QWORD*)(a1 + 40);
      v10 = a1 + 40;
    }
    (*(void (**)(__int64))(v9 + 1072))(v10),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    snd_120f10(*(_QWORD*)(a1 + 32), a1),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (((a2 ^ 1) & v4 & 1) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v11 <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
        goto LABEL_88;
      }
      if (snd_Voice_hasFeature6(a1) && VibVoice_13fc10((_QWORD*)a1)) {
        return false;
      }
    }
  }
  v12 = *(_DWORD*)(a1 + 5792);
  if (v12 != 2) {
    if (v12 != 1) {
      goto LABEL_23;
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(a1 + 5792) = 2;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) != 0) {
    *(_DWORD*)(a1 + 5792) = 3;
  LABEL_25:
    (*(void (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(a1 + 5792) = 4;
    goto LABEL_26;
  }
  v12 = *(_DWORD*)(a1 + 5792);
LABEL_23:
  if (v12 != 4) {
    if (v12 != 3) {
      goto LABEL_29;
    }
    goto LABEL_25;
  }
LABEL_26:
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 184LL))(a1) & 1) != 0 &&
      (v2[1797] & 1) == 0) {
    *(_DWORD*)(a1 + 5792) = 5;
  }
LABEL_29:
  v13 = snd_Voice_isActorScaled(a1),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v8 != 0 && v13) {
    Voice_145cc0(a1, v8 - 5592),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v14 = *(_QWORD*)(a1 + 32);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 536LL))(a1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64, double, float))(**(_QWORD**)snd_g_proxy_ptr[0] +
                                        240LL))(*(_QWORD*)snd_g_proxy_ptr[0],
                                                v15, *(float*)(v14 + 3096)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)a1 + 544LL))(a1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = -0x1.0000000000000p+1f;
  if (v16 >= -0x1.0000000000000p+1f) {
    v17 = v16;
    if (v16 > 0x1.0000000000000p+1f) {
      v17 = 0x1.0000000000000p+1f;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((int)(float)(v18 * 0x1.8000000000000p+3f) <= -84) {
    v19 = -84;
  }
  else {
    v19 = (int)(float)(v18 * 0x1.8000000000000p+3f);
  }
  if (v19 >= 84) {
    v20 = 84;
  }
  else {
    v20 = v19;
  }
  v21 = -(
      float)((float)(int)(float)(PSEUDO_UNFUSED(v18 * 0x1.8000000000000p+3f)) -
             (float)(v18 * 0x1.8000000000000p+3f));
  v22 = snd_g_semitoneRatios[v20 + 84];
  if (v21 <= 0x0.0p+0f) {
    if (v20 <= -83) {
      v28 = -83;
    }
    else {
      v28 = v20;
    }
    v23 = v22 - snd_g_semitoneRatios[v28 + 83];
    if (v17 >= 0x0.0p+0f) {
      goto LABEL_45;
    }
  LABEL_52:
    if (v17 >= -0x1.0000000000000p+0f) {
      v24 = *(_QWORD*)(a1 + 6136);
      if (((a2 ^ 1) & v4 & 1) == 0) {
        goto LABEL_47;
      }
      goto LABEL_54;
    }
  LABEL_53:
    v24 = *(_QWORD*)(a1 + 6136);
    if (((a2 ^ 1) & v4 & 1) == 0) {
      goto LABEL_47;
    }
  LABEL_54:
    (*(void (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    v26 = *(__int64**)(a1 + 6136);
    v27 = *v26;
    v25 = v22 + (float)(v23 * v21);
    goto LABEL_55;
  }
  if (v19 >= 83) {
    v19 = 83;
  }
  v23 = snd_g_semitoneRatios[v19 + 85] - v22;
  if (v17 < 0x0.0p+0f) {
    goto LABEL_52;
  }
LABEL_45:
  if (v17 > 0x1.0000000000000p+0f) {
    goto LABEL_53;
  }
  v24 = *(_QWORD*)(a1 + 6136);
  if (((a2 ^ 1) & v4 & 1) != 0) {
    goto LABEL_54;
  }
LABEL_47:
  v25 = 0x0.0p+0f;
  (*(void (**)(__int64, double))(*(_QWORD*)v24 + 40LL))(v24, 0x0.0p+0),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  v26 = *(__int64**)(a1 + 6136);
  v27 = *v26;
LABEL_55:
  (*(void (**)(__int64))(v27 + 48))((__int64)v26),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64, float))(**(_QWORD**)(a1 + 6136) + 56LL))(
      *(_QWORD*)(a1 + 6136), v25),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(**(_QWORD**)(a1 + 6136) + 24LL))(
      *(_QWORD*)(a1 + 6136)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v2[1808] & 1) != 0 || (v2[1809] & 1) != 0) {
    return true;
  }
  result = true;
  if ((a2 & 1) == 0 && (v2[1810] & 1) == 0) {
    v29 = *(_DWORD*)(a1 + 5792);
    if (v29 == 5) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 40) + 328LL))(a1 + 40),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v30 <= 0x0.0p+0f) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 728LL))(a1) & 1) == 0) {
          goto LABEL_88;
        }
        if (snd_Voice_hasFeature6(a1) && VibVoice_13fc10((_QWORD*)a1)) {
          return false;
        }
        if (!snd_Voice_hasFeature8(a1)) {
          Crc32List_1212c0(*(_QWORD*)(a1 + 32), (unsigned __int8*)a1),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(double, "d0", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        (*(void (**)(__int64, double))(*(_QWORD*)(a1 + 40) + 32LL))(a1 + 40,
                                                                    0x0.0p+0),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        (*(void (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(a1 + 5792) = 6;
        VibVoice_1420e0(a1),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        v31 = *(_QWORD*)(a1 + 5648);
        if (*(float*)(v31 + 256) >= 0x0.0p+0f) {
        LABEL_71:
          if (!snd_(a1 + 40)) {
            if (v2[1801] != 1) {
              return !snd_Voice_hasFeature6(a1) ||
                     !VibVoice_13fc10((_QWORD*)a1);
            }
            goto LABEL_88;
          }
          v31 = *(_QWORD*)(a1 + 5648);
        }
      LABEL_79:
        if (*(_DWORD*)(v31 + 120) != 0 && *(_DWORD*)(v31 + 124) != 0 &&
                !snd_(a1 + 40) ||
            !snd_Param_isEnvelopeEnded(a1 + 40) &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 376LL))(a1) & 1) !=
                    0) {
          return !snd_Voice_hasFeature6(a1) || !VibVoice_13fc10((_QWORD*)a1);
        }
      LABEL_88:
        GameRoutine_13fd90(a1),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
        return false;
      }
      v29 = *(_DWORD*)(a1 + 5792);
    }
    if (v29 != 6) {
      return true;
    }
    VibVoice_1420e0(a1),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(double, "d0", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w"));
    v31 = *(_QWORD*)(a1 + 5648);
    if (*(float*)(v31 + 256) < 0x0.0p+0f) {
      goto LABEL_79;
    }
    goto LABEL_71;
  }
  return result;
}

__int64 snd_188f70(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 (*v10)(__int64, __int64, __int64);
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 result;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;

  v3 = *(_QWORD*)(a1 + 160);
  v5 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    v6 = *(char*)(a2 + 9);
    *(_BYTE*)(a1 + 42) = v6 > 2;
    if (v6 >= 3) {
    LABEL_3:
      *(_BYTE*)(a1 + 41) = 0;
      goto LABEL_7;
    }
  }
  else {
    v3 = (*(__int64 (**)(__int64, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 104, 32);
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = 0;
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)v3 = 0;
    *(_QWORD*)(v3 + 8) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_BYTE*)(v3 + 100) = 0;
    *(_QWORD*)(v3 + 92) = 0;
    *(_DWORD*)(v3 + 28) = 1;
    *(_DWORD*)(v3 + 88) = 99999;
    *(_QWORD*)(a1 + 160) = v3;
    v7 = *(char*)(a2 + 9);
    *(_BYTE*)(a1 + 42) = v7 > 2;
    if (v7 >= 3) {
      goto LABEL_3;
    }
  }
  if ((*(_BYTE*)(a1 + 41) & 1) != 0) {
    v8 = 2;
    goto LABEL_8;
  }
LABEL_7:
  v8 = 1;
LABEL_8:
  *(_DWORD*)(v3 + 28) = v8;
  v9 = *v5;
  v10 = *(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 160) + 28LL) == 1) {
    if (*(_BYTE*)(a1 + 42) != 0) {
      v11 = v10(v9, 56, 32);
      v12 = GameData_2134c58[0];
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 24) = 0;
      *(_QWORD*)(v11 + 32) = 0;
      *(_QWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      goto LABEL_13;
    }
    v15 = v10(v9, 48, 32);
    v16 = GameData_2134c68[0];
    *(_QWORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 24) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
  LABEL_18:
    *(_QWORD*)v15 = v16 + 2;
    *(_QWORD*)(v15 + 8) = 0;
    **(_QWORD**)(a1 + 160) = v15;
    v13 = *(__int64**)(a1 + 160);
    if (*(_BYTE*)(a1 + 42) == 1) {
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  if (*(_BYTE*)(a1 + 42) == 0) {
    v15 = v10(v9, 64, 32);
    v16 = GameData_2134c70[0];
    *(_QWORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 24) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_DWORD*)(v15 + 56) = 0;
    goto LABEL_18;
  }
  v11 = v10(v9, 72, 32);
  v12 = GameData_2134c60[0];
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_DWORD*)(v11 + 64) = 0;
LABEL_13:
  *(_QWORD*)v11 = v12 + 2;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL) = v11;
  v13 = *(__int64**)(a1 + 160);
  if (*(_BYTE*)(a1 + 42) == 1) {
  LABEL_14:
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v13[1] + 24LL))(v13[1]) & 1) ==
        0) {
      goto LABEL_22;
    }
    v14 = (__int64*)(*(_QWORD*)(a1 + 160) + 8LL);
    goto LABEL_21;
  }
LABEL_19:
  if (((*(__int64 (**)(__int64))(*(_QWORD*)*v13 + 24LL))(*v13) & 1) != 0) {
    v14 = *(__int64**)(a1 + 160);
  LABEL_21:
    (*(void (**)(__int64))(*(_QWORD*)*v14 + 40LL))(*v14);
  }
LABEL_22:
  v17 = *(_QWORD*)(a1 + 160);
  if (*(_QWORD*)(v17 + 16) != 0) {
    v18 = *v5;
    *(_QWORD*)(v17 + 16) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
    v17 = *(_QWORD*)(a1 + 160);
  }
  if (*(_QWORD*)(v17 + 72) != 0) {
    if (*(_BYTE*)(a1 + 42) == 1) {
      goto LABEL_26;
    }
  LABEL_32:
    v25 = (*(__int64 (**)(__int64, __int64, __int64))(
        ***(_QWORD***)(a1 + 160) + 16LL))(**(_QWORD**)(a1 + 160),
                                          *(unsigned int*)(a2 + 12),
                                          (unsigned int)*(char*)(a2 + 9));
    *(_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL) =
        (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
            *v5, v25, 32);
    result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        ***(_QWORD***)(a1 + 160) + 32LL))(
        **(_QWORD**)(a1 + 160), *(unsigned int*)(a2 + 12),
        (unsigned int)*(char*)(a2 + 9), *(_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL),
        v25);
    if ((_DWORD)result == 0) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v23 = *(unsigned __int8*)(a1 + 42);
  *(_QWORD*)(*(_QWORD*)(a1 + 160) + 72LL) =
      (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
          *v5, 4096, 32);
  if (v23 != 0) {
    v24 = 11520;
  }
  else {
    v24 = 3840;
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 160) + 80LL) =
      (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
          *v5, v24, 32);
  if (*(_BYTE*)(a1 + 42) != 1) {
    goto LABEL_32;
  }
LABEL_26:
  v19 = *(unsigned __int8*)(a2 + 40);
  v20 = *(unsigned __int8*)(a2 + 41);
  v21 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 160) + 8LL) + 16LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL), *(unsigned int*)(a2 + 12),
      (unsigned int)*(char*)(a2 + 9), *(unsigned __int8*)(a2 + 40),
      *(unsigned __int8*)(a2 + 41));
  *(_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL) =
      (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
          *v5, v21, 32);
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 160) + 8LL) + 32LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL), *(unsigned int*)(a2 + 12),
      (unsigned int)*(char*)(a2 + 9), v19, v20, a2 + 44,
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL), v21);
  if ((_DWORD)result != 0) {
  LABEL_33:
    result = (*(__int64 (**)(__int64))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0]);
  }
LABEL_34:
  v26 = *(_DWORD*)(a2 + 12);
  if (v26 > 15999) {
    if (v26 == 24000) {
      v27 = 480;
      goto LABEL_44;
    }
    if (v26 == 16000) {
      v27 = 320;
      goto LABEL_44;
    }
  LABEL_41:
    v27 = 960;
    goto LABEL_44;
  }
  if (v26 == 8000) {
    v27 = 160;
    goto LABEL_44;
  }
  if (v26 != 12000) {
    goto LABEL_41;
  }
  v27 = 240;
LABEL_44:
  *(_DWORD*)(*(_QWORD*)(a1 + 160) + 24LL) = v27;
  v28 = *(_QWORD*)(a1 + 160);
  *(_DWORD*)(v28 + 32) = *(char*)(a2 + 9);
  *(_DWORD*)(v28 + 36) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(v28 + 40) = v27;
  *(_QWORD*)(v28 + 48) = (unsigned int)(2 * v27);
  *(_DWORD*)(v28 + 56) = *(__int16*)(a2 + 28);
  *(_DWORD*)(*(_QWORD*)(a1 + 160) + 64LL) = *(int*)(a2 + 16) + 8;
  *(_DWORD*)(*(_QWORD*)(a1 + 160) + 68LL) = 0;
  return result;
}

#pragma GCC visibility pop
