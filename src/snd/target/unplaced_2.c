#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_27e140(__int64* result);
__int64* GameRoutine_27e260(__int64* result);
__int64 BaseNx_278800(__int64, __int64, unsigned int, unsigned int);
__int64 GameRoutine_27e060(__int64 result, __int64*);
__int64 GameRoutine_27e180(__int64 result, __int64*);
__int64 StreamSound_2964c0(__int64);
__int64 WaveSound_2ac560(__int64, __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern __int64 snd_target_s_platform;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void* BaseNx_2a1b90();
void __attribute__((noreturn)) snd_a36650();
__int64 snd_target_14c760(__int64 a1);

__int64 snd_target_14c760(__int64 a1)
{
  void* v2;
  char v3;
  char v4;
  char v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void* v24;
  _DWORD v26[12];
  __int64 v27;

  v2 = BaseNx_2a1b90();
  nn_os_LockMutex((__int64)v2 + 840);
  GameRoutine_27e180((__int64)&v27, (__int64*)(a1 + 32));
  if (v27 == 0) {
    GameRoutine_27e260(&v27);
    GameRoutine_27e060((__int64)&v27, (__int64*)(a1 + 32));
    v6 = v27;
    if (v27 != 0) {
      goto LABEL_4;
    }
  LABEL_8:
    GameRoutine_27e140(&v27);
    v9 = *(_DWORD*)(a1 + 8);
    v10 = *(const char**)(a1 + 16);
    v26[0] = 0;
    v11 = snd_target_s_platform;
    if (v10 == nullptr) {
      goto LABEL_22;
    }
    goto LABEL_9;
  }
  v3 = WaveSound_2ac560(v27, (__int64)v26);
  v4 = v26[0];
  v5 = v3;
  GameRoutine_27e260(&v27);
  if ((v5 & 1) != 0) {
    goto LABEL_26;
  }
  GameRoutine_27e060((__int64)&v27, (__int64*)(a1 + 32));
  v6 = v27;
  if (v27 == 0) {
    goto LABEL_8;
  }
LABEL_4:
  v7 = StreamSound_2964c0(v6);
  v4 = v26[0];
  v8 = v7;
  GameRoutine_27e140(&v27);
  if ((v8 & 1) == 0) {
    v9 = *(_DWORD*)(a1 + 8);
    v10 = *(const char**)(a1 + 16);
    v26[0] = 0;
    v11 = snd_target_s_platform;
    if (v10 == nullptr) {
      goto LABEL_22;
    }
  LABEL_9:
    v12 = v11 + 4088LL * v9;
    v13 = *(_QWORD**)(v12 + 4056);
    v14 = *(__int64**)(v12 + 4048);
    if (v13 != v14) {
      v15 = v13 - (__typeof__(v13))v14;
      while (1) {
        v17 = *v14++;
        v16 = v17;
        if (*(_BYTE*)(v17 + 1440) == 1) {
          v18 = strlen(v10);
          v19 = *(_BYTE*)v16 >> 1;
          if ((*(_BYTE*)v16 & 1) != 0) {
            v19 = *(_QWORD*)(v16 + 8);
          }
          if (v18 == v19) {
            v20 = v18;
            if (v18 == -1) {
              snd_a36650();
            }
            v21 = (*(_BYTE*)v16 & 1) != 0 ? *(_QWORD*)(v16 + 16) : v16 + 1;
            if (memcmp(v21, (__int64)v10, v20) == 0) {
              break;
            }
          }
        }
        if (--v15 == 0) {
          goto LABEL_22;
        }
      }
      v22 = v16 + 32;
      goto LABEL_25;
    }
  LABEL_22:
    v23 = 32;
    if (*(_BYTE*)(v11 + 4088LL * v9 + 4136) != 0) {
      v23 = 1584;
    }
    v22 = v11 + 4088LL * v9 + 56 + v23;
  LABEL_25:
    BaseNx_278800(v22, (__int64)v26, *(_DWORD*)(a1 + 24), 0);
    v4 = (v26[0] & 0x200) != 0;
  }
LABEL_26:
  v24 = BaseNx_2a1b90();
  nn_os_UnlockMutex((__int64)v24 + 840);
  return v4 & 1;
}

#pragma GCC visibility pop
