#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BaseNx_2a7880(_QWORD, _QWORD);
__int64 GameRoutine_29bce0(void);
__int64 StreamSoundPlayer_2985e0(_QWORD, _QWORD);
__int64 StreamSoundPlayer_2987b0(_QWORD, _QWORD, long double);
__int64 StreamSoundPlayer_29a0e0(_QWORD);
__int64 StreamSoundPlayer_29a8e0(_QWORD, _QWORD);
__int64 StreamSoundPlayer_29b9e0(void);
__int64 StreamSoundPlayer_29bd80(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 StreamSoundPlayer_298260(__int64, __int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern char GameData_219d029;
void GameRoutine_299260();
__n128 nn_atk_detail_driver_299e80(__int64 a1);

__n128 nn_atk_detail_driver_299e80(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  int v9;
  bool v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  int v18;
  _QWORD* v19;
  __int64 i;

  nn_os_LockMutex(a1 + 72216);
  if (*(_QWORD*)(a1 + 256) != 0) {
    v2 = a1 + 69632;
    if ((*(_BYTE*)(a1 + 71280) & 1) != 0) {
      goto LABEL_10;
    }
  }
  else {
    v4 = *(_QWORD*)(a1 + 248);
    if (v4 == 0) {
      return nn_os_UnlockMutex(a1 + 72216);
    }
    v5 = (__int64*)(v4 + 40);
    v6 = *(__int64**)(v4 + 48);
    if (v6 == v5) {
      return nn_os_UnlockMutex(a1 + 72216);
    }
    v7 = (__int64*)v6[1];
    v8 = *v7;
    *(_QWORD*)(*v6 + 8) = v7;
    *v7 = *v6;
    *(_QWORD*)(v8 + 8) = v6;
    *v6 = v8;
    *(_QWORD*)(a1 + 256) = v6 - 1738;
    v2 = a1 + 69632;
    if ((*(_BYTE*)(a1 + 71280) & 1) != 0) {
      goto LABEL_10;
    }
  }
  StreamSoundPlayer_29b9e0();
  *(__n128*)&v3 = StreamSoundPlayer_298260(a1, a1 + 72032);
  if (*(_BYTE*)(v2 + 2392) == 1) {
    StreamSoundPlayer_2987b0(a1, a1 + 71288, v3);
    *(_BYTE*)(v2 + 2392) = 0;
  }
  StreamSoundPlayer_2985e0(a1, a1 + 70536);
  if (*(_QWORD*)(a1 + 256) == 0) {
    return nn_os_UnlockMutex(a1 + 72216);
  }
LABEL_10:
  GameRoutine_29bce0();
  v9 = *(_DWORD*)(a1 + 304);
  v10 = __OFSUB__(v9, 1);
  v11 = v9 - 1;
  if (v11 < 0 == v10) {
    *(_DWORD*)(a1 + 304) = v11;
    return nn_os_UnlockMutex(a1 + 72216);
  }
  if (*(_BYTE*)(a1 + 234) == 1 && (*(_BYTE*)(a1 + 225) & 1) != 0 &&
      (*(_BYTE*)(a1 + 65) & 1) == 0) {
    ((void (*)(__int64))GameRoutine_299260)(a1);
  }
  StreamSoundPlayer_29a0e0(a1);
  if (*(_BYTE*)(a1 + 65) != 1) {
    goto LABEL_24;
  }
  v12 = *(unsigned int*)(a1 + 1136);
  if ((int)v12 < 1) {
  LABEL_21:
    if (*(int*)(a1 + 1140) >= 1) {
      v14 = 0;
      v15 = a1 + 68736;
      do {
        StreamSoundPlayer_29a8e0(a1, v15);
        ++v14;
        v15 += 128;
      } while (v14 < *(int*)(a1 + 1140));
    }
  LABEL_24:
    if (*(_BYTE*)(a1 + 229) == 1 &&
        (StreamSoundPlayer_29bd80(*(_QWORD*)(a1 + 256)) & 1) == 0 &&
        (GameData_219d029 & 1) == 0) {
      v16 = *(unsigned __int8*)(a1 + 66);
      v17 = *(unsigned __int8*)(a1 + 228);
      *(_BYTE*)(a1 + 229) = 0;
      *(_BYTE*)(a1 + 232) = 0;
      if (v17 != v16) {
        v18 = *(_DWORD*)(a1 + 1136);
        if (v18 >= 1) {
          v19 = (_QWORD*)(a1 + 1160);
          for (i = 0; i < v18; ++i) {
            if (*v19 != 0) {
              BaseNx_2a7880(*v19, v16);
              v18 = *(_DWORD*)(a1 + 1136);
            }
            v19 += 528;
          }
        }
        *(_BYTE*)(a1 + 228) = v16;
      }
    }
    if (*(_BYTE*)(a1 + 231) == 1) {
      *(_BYTE*)(a1 + 231) = 0;
    }
    return nn_os_UnlockMutex(a1 + 72216);
  }
  v13 = 1160;
  while (*(_QWORD*)(a1 + v13) != 0) {
    --v12;
    v13 += 4224;
    if (v12 == 0) {
      goto LABEL_21;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  *(_BYTE*)(a1 + 67) = 1;
  return nn_os_UnlockMutex(a1 + 72216);
}

#pragma GCC visibility pop
