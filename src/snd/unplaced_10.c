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

_QWORD* ConstructString_1901f0(_QWORD* result);

_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);

__attribute__((swiftcall)) void Manager_11ec80(PSEUDO_X8, __int64, int*);

__attribute__((swiftcall)) void snd_1319c0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD, _QWORD);

__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);

__int64* snd_131280(__int64* result, unsigned __int64);

__int64 Crc32List_1163b0();

__int64 GameAlloc_e5eb0(__int64);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);

__int64 GameRoutine_a1efd0(__int64);

__int64 TargetFile_a392e0(__int64, __int64, ...);

__int64 Wind_e5340(__int64 result, char*, const char*, const char*, __int64,
                   __int64);

__int64 nn_os_LockMutex(_QWORD);

__int64 nn_os_LockMutex_alt1(__int64);

__int64 nn_os_UnlockMutex(_QWORD);

__int64 nn_os_UnlockMutex_alt1(__int64);

__int64 snd_Env_removeGroup(__int64 result, _QWORD*);

__n128 nn_os_UnlockMutex_alt2(_QWORD);

extern __int16* GameData_2134648[7];

extern __int16 GameData_2198f28;

extern __int64* snd_g_memory_ptr[2];

extern __int64 GameData_212e2d8;

extern __int64 snd_g_memory;

int rand();

unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);

void __attribute__((noreturn)) GameRoutine_131460();

void __attribute__((noreturn)) GameRoutine_60a310();

void __attribute__((noreturn)) GameRoutine_e6680();

void __attribute__((noreturn)) snd_a36650();

void nn_diag_detail_AbortImpl_1a0a590();

__int64 snd_dfd00(__int64 a1, __int64 a2);

__int64 snd_e4f40(__int64 result, _DWORD* a2, char* a3, char* a4);

__n128 snd_11f260(__int64 a1, __int64 a2);

_QWORD* snd_130d20(_QWORD* result, unsigned __int64 a2, char a3);

__int64 snd_dfd00(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  char* v4;
  char* v5;
  __int64* v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  _BOOL4 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* i;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int16 v19;
  unsigned int v20;
  char* v21;
  signed __int64 v22;
  struct {
    _QWORD v24[2];
    char* v25;
  } v24_;

  nn_os_LockMutex(a1 + 416);
  v4 = *(char**)(a1 + 8);
  if (v4 == *(char**)(a1 + 16)) {
    return nn_os_UnlockMutex(a1 + 416);
  }
  v5 = v4 + 8;
  v6 = snd_g_memory_ptr[0];
  while (1) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(**(_QWORD**)v4 + 32LL))(
        (void*)(v24_.v24));
    v7 = GameRoutine_1a09c70(a2);
    v8 = v24_.v24[0];
    v9 = LOBYTE(v24_.v24[0]) >> 1;
    if ((v24_.v24[0] & 1) != 0) {
      v9 = v24_.v24[1];
    }
    if (v7 == v9) {
      break;
    }
    v12 = false;
    if ((v24_.v24[0] & 1) == 0) {
      goto LABEL_15;
    }
  LABEL_3:
    (*(void (**)(__int64, char*))(*(_QWORD*)*v6 + 24LL))(*v6, v24_.v25);
    if (v12) {
      goto LABEL_16;
    }
  LABEL_4:
    v4 += 8;
    v5 += 8;
    if (v4 == *(char**)(a1 + 16)) {
      return nn_os_UnlockMutex(a1 + 416);
    }
  }
  v10 = v7;
  if (v7 == -1) {
    snd_a36650();
  }
  if ((v24_.v24[0] & 1) != 0) {
    v11 = v24_.v25;
  }
  else {
    v11 = (char*)v24_.v24 + 1;
  }
  v12 = GameRoutine_1a09cf0(v11, a2, v10) == 0;
  if ((v8 & 1) != 0) {
    goto LABEL_3;
  }
LABEL_15:
  if (!v12) {
    goto LABEL_4;
  }
LABEL_16:
  v13 = *(_QWORD**)v4;
  snd_Fade_Fade_10c830((__int64)v24_.v24, 0x0.0p+0f);
  v14 = (_QWORD*)v13[4];
  for (i = (_QWORD*)v13[5]; v14 != i; ++v14) {
    v16 = snd_fnd_WeakHandle_get(*v14 + 40LL);
    if (v16 != 0) {
      (*(void (**)(__int64, _QWORD*, __int64, double))(
          *(_QWORD*)(v16 - 5592) + 248LL))(v16 - 5592, v24_.v24, 1, 0x0.0p+0);
    }
  }
  snd_Env_removeGroup(a1, v13);
  snd_Fade_Destroy_Fade(v24_.v24);
  v17 = *(_QWORD*)v4;
  (***(void (****)(_QWORD))v4)(*(_QWORD*)v4);
  nn_os_LockMutex(a1 + 256);
  v18 = *(_QWORD*)(a1 + 240);
  v19 = *(_WORD*)(a1 + 248) - 1;
  v20 = (unsigned int)(v17 - *(_DWORD*)(a1 + 232)) >> 6;
  *(_WORD*)(a1 + 248) = v19;
  *(_WORD*)(v18 + 2LL * v19) = v20;
  nn_os_UnlockMutex(a1 + 256);
  v21 = *(char**)(a1 + 16);
  v22 = v21 - v5;
  if (v21 != v5) {
    GameRoutine_1a0b940(v5 - 8, v5, v21 - v5);
  }
  *(_QWORD*)(a1 + 16) = &v5[v22 - 8];
  return nn_os_UnlockMutex(a1 + 416);
}

__int64 snd_e4f40(__int64 result, _DWORD* a2, char* a3, char* a4)
{

#pragma clang fp contract(off)
  _DWORD* v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  char* v50;
  char* v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  struct {
    _DWORD* v55;
    char gap8_[16];
    __int64 v58;
    char gap32_[4];
    unsigned int v59;
    __int64 v60;
    unsigned __int64 v61;
    char* v62;
  } f_;

  v4 = *(_DWORD**)(result + 272);
  v5 = a2;
  v6 = result;
  if (v4 != nullptr && *(_DWORD*)v4 == *(_DWORD*)a2) {
    return result;
  }
  *(_QWORD*)(result + 304) = a2;
  *(_QWORD*)(result + 272) = a2;
  v7 = *(_DWORD*)a2;
  ConstructString_1901f0(&f_.v60);
  result = TargetFile_a392e0((__int64)&f_.v60, (__int64)"[ %08x ]", v7);
  v8 = (_QWORD*)(v6 + 280);
  if ((__int64*)(v6 + 280) == &f_.v60) {
    if ((*(_BYTE*)(v6 + 280) & 1) != 0) {
      result = (*(__int64 (**)(_QWORD, _QWORD))(
          **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(v6 + 296));
    }
    v10 = f_.v60;
    v11 = f_.v61;
    LOWORD(f_.v60) = 0;
    *v8 = v10;
    *(_QWORD*)(v6 + 288) = v11;
    *(_QWORD*)(v6 + 296) = f_.v62;
    goto LABEL_19;
  }
  if ((*(_BYTE*)(v6 + 280) & 1) != 0) {
    if ((f_.v60 & 1) != 0) {
      v12 = f_.v62;
    }
    else {
      v12 = (char*)&f_.v60 + 1;
    }
    if ((f_.v60 & 1) != 0) {
      v13 = f_.v61;
    }
    else {
      v13 = (unsigned __int64)(unsigned __int8)f_.v60 >> 1;
    }
    result =
        (__int64)GameRoutine_a3a260((__int64*)(v6 + 280), (__int64)v12, v13);
    if ((f_.v60 & 1) != 0) {
      goto LABEL_18;
    }
  }
  else {
    if ((f_.v60 & 1) == 0) {
      v9 = f_.v61;
      *v8 = f_.v60;
      *(_QWORD*)(v6 + 288) = v9;
      *(_QWORD*)(v6 + 296) = f_.v62;
      if ((f_.v60 & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_18:
      result = (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      f_.v62);
      goto LABEL_19;
    }
    result = (__int64)GameRoutine_a3a3a0((_QWORD*)(v6 + 280), (__int64)f_.v62,
                                         f_.v61);
    if ((f_.v60 & 1) != 0) {
      goto LABEL_18;
    }
  }
LABEL_19:
  v14 = v5[4];
  if (v14 >= 1) {
    v15 = 0;
    f_.v55 = v5;
    v16 = GameData_212e2d8 + 16;
    do {
      v19 = *((_QWORD*)v5 + 1) + 1856 * v15;
      if (*(_QWORD*)v19 != 0) {
        v20 = GameAlloc_e5eb0(v6 + 112);
        *(_DWORD*)(v20 + 32) = *(_DWORD*)(v19 + 16);
        v21 = *(float*)(v19 + 24);
        *(float*)(v20 + 164) = v21;
        v22 = *(float*)(v19 + 28);
        *(float*)(v20 + 168) = v22;
        f_.v58 = v19;
        v23 = v19 + 60;
        v24 = 0;
        *(float*)(v20 + 160) =
            *(float*)(v20 + 164) +
            (float)((float)(v22 - v21) * vcvts_n_f32_s32(rand(), 0x1Fu));
        do {
          v26 = (int*)(v23 + 28 * v24);
          v27 = *v26;
          if (*v26 != 0) {
            v28 = v26[1];
            v29 = v26[2];
            v31 = v26[3];
            v30 = v26[4];
            v32 = v26[5];
            v33 = v26[6];
            nn_os_LockMutex_alt1(v6 + 72);
            nn_os_LockMutex_alt1(v6 + 72);
            v34 = *(unsigned __int16*)(v6 + 64);
            v35 = *(unsigned __int16*)(v6 + 66);
            nn_os_UnlockMutex_alt1(v6 + 72);
            if (v34 >= v35) {
              GameRoutine_a1efd0(v6 + 72);
              nn_diag_detail_AbortImpl_1a0a590();
            }
            v36 = *(unsigned __int16*)(v6 + 64);
            v37 = *(_QWORD*)(v6 + 56);
            v38 = *(unsigned __int16*)(v37 + 2 * v36);
            *(_WORD*)(v6 + 64) = v36 + 1;
            *(_WORD*)(v37 + 2 * v36) = -1;
            v39 = *(_QWORD*)(v6 + 48) + 56LL * v38;
            nn_os_UnlockMutex_alt1(v6 + 72);
            *(_DWORD*)v39 = v27;
            *(_QWORD*)(v39 + 8) = v16;
            *(_DWORD*)(v39 + 16) = v28;
            *(_DWORD*)(v39 + 20) = v29;
            *(_DWORD*)(v39 + 24) = v31;
            *(_QWORD*)(v39 + 32) = v16;
            *(_DWORD*)(v39 + 40) = v30;
            *(_DWORD*)(v39 + 44) = v32;
            *(_DWORD*)(v39 + 48) = v33;
            v41 = *(__int64**)(v20 + 64);
            v40 = *(_QWORD*)(v20 + 72);
            if ((unsigned __int64)v41 < v40) {
              *v41 = v39;
              v25 = (__int64)(v41 + 1);
            }
            else {
              v42 = *(_QWORD*)(v20 + 56);
              v43 = (__int64)v41 - v42;
              v44 = (v43 >> 3) + 1;
              if (v44 >> 61 != 0) {
                GameRoutine_e6680();
              }
              v45 = v40 - v42;
              v46 = v45 >> 2;
              if (v45 >> 2 <= v44) {
                v46 = (v43 >> 3) + 1;
              }
              if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
                v47 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v47 = v46;
              }
              v48 = (*(__int64 (**)(__int64, __int64, __int64))(
                  *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 8 * v47, 32);
              v49 = (__int64*)(v48 + v43);
              *v49 = v39;
              v25 = v48 + v43 + 8;
              v50 = *(char**)(v20 + 56);
              v51 = *(char**)(v20 + 64);
              v52 = (__int64*)((char*)v49 + ((char*)v50 - (char*)v51));
              if (v51 != v50) {
                v53 = v52;
                do {
                  v54 = *(_QWORD*)v50;
                  v50 += 8;
                  *v53++ = v54;
                } while (v50 != v51);
                v50 = *(char**)(v20 + 56);
              }
              *(_QWORD*)(v20 + 56) = v52;
              *(_QWORD*)(v20 + 64) = v25;
              *(_QWORD*)(v20 + 72) = v48 + 8 * v47;
              if (v50 != nullptr) {
                (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
                    snd_g_memory);
              }
            }
            *(_QWORD*)(v20 + 64) = v25;
          }
          ++v24;
        } while (v24 != 64);
        v17 = *(char**)f_.v58;
        v18 = Crc32List_1163b0();
        f_.v59 = (unsigned int)snd_fnd_calcCrc32(*(unsigned __int8**)(f_.v58 + 8), 0);
        Manager_11ec80((void*)((__int64)&f_.v60), v18, (int*)&f_.v59);
        result = Wind_e5340(v6, v17, a3, a4, v20, (__int64)&f_.v60);
        v5 = f_.v55;
        v14 = f_.v55[4];
      }
      ++v15;
    } while (v15 < v14);
  }
  return result;
}

__n128 snd_11f260(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _BYTE v8[32];
    _BYTE* v9;
  } v8_;
  __int64 v10;

  nn_os_LockMutex(GameData_2134648[0]);
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v8_.v9 = v8_.v8;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v8_.v8);
      v5 = **(_QWORD**)(a1 + 40);
      if (v5 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v8_.v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      v5 = **(_QWORD**)(a1 + 40);
      if (v5 == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
    v8_.v9 = nullptr;
    v5 = **(_QWORD**)(a1 + 40);
    if (v5 == 0) {
      goto LABEL_8;
    }
  }
  do {
    v10 = v5;
    v5 = *(_QWORD*)(v5 + 5616);
    if (v8_.v9 == nullptr) {
      GameRoutine_60a310();
    }
    (*(void (**)(_BYTE*, __int64*))(*(_QWORD*)v8_.v9 + 48LL))(v8_.v9, &v10);
  } while (v5 != 0);
LABEL_8:
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v8_.v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*(_QWORD*)v8_.v9 + v6))((__int64)v8_.v9);
  }
  return nn_os_UnlockMutex_alt2(&GameData_2198f28);
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

_QWORD* snd_130d20(_QWORD* result, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  struct {
    char gap0_[8];
    __int64 v26;
    unsigned __int64 v27;
    __int64 v28;
    __int64 v29;
    int v30;
    char gap44_[4];
    _QWORD v31[3];
    int v32;
    char gap76_[35];
    char v33;
  } f_;

  v3 = result[1];
  v4 = a2 - v3;
  if (a2 <= v3) {
    result[1] = a2;
    return result;
  }
  v5 = result[2];
  v6 = v5 << 6;
  if (v5 << 6 < v4 || v3 > (v5 << 6) - v4) {
    f_.v27 = 0;
    f_.v28 = 0;
    f_.v26 = 0;
    if ((a2 & 0x8000000000000000LL) != 0) {
      GameRoutine_131460();
    }
    v8 = v5 << 7;
    v9 = result;
    if (v8 <= ((a2 + 63) & 0xFFFFFFFFFFFFFFC0LL)) {
      v8 = (a2 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    }
    if (v6 <= 0x3FFFFFFFFFFFFFFELL) {
      v11 = v8;
    }
    else {
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    snd_131280(&f_.v26, v11);
    v12 = *v9;
    v13 = v9[1];
    v14 = v9;
    f_.v30 = 0;
    f_.v27 = v13 + v4;
    f_.v29 = f_.v26;
    result = X8CALL_X0(void*,
                       snd_1319c0((void*)(f_.v31), &f_.v33, v12, 0,
                                  v12 + 8 * (v13 >> 6), v13 & 0x3F, &f_.v29));
    v15 = *v9;
    v16 = v9[1];
    v17 = f_.v27;
    v18 = (_QWORD*)f_.v31[2];
    LODWORD(v19) = f_.v32;
    *v14 = f_.v26;
    v14[1] = v17;
    f_.v26 = v15;
    f_.v27 = v16;
    v20 = v14[2];
    v14[2] = f_.v28;
    f_.v28 = v20;
    if (v15 != 0) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory +
                                                  24LL))(snd_g_memory);
    }
    if ((a3 & 1) != 0) {
    LABEL_27:
      if ((_DWORD)v19 != 0) {
        if (v4 >= (unsigned int)(64 - v19)) {
          v25 = (unsigned int)(64 - v19);
        }
        else {
          v25 = v4;
        }
        v4 -= v25;
        *v18++ |= (0xFFFFFFFFFFFFFFFFLL >>
                   (64 - (unsigned __int8)v19 - (unsigned __int8)v25)) &
                  (-1LL << v19);
      }
      v22 = v4 >> 6;
      if (v4 >= 0x40) {
        result = (_QWORD*)GameRoutine_1a0ba50((__int64)v18, 255, 8 * v22);
      }
      if ((v4 & 0x3F) != 0) {
        v23 = v18[v22] | (0xFFFFFFFFFFFFFFFFLL >> -(v4 & 0x3F));
        goto LABEL_36;
      }
      return result;
    }
  }
  else {
    v24 = *result;
    v19 = result[1] & 0x3FLL;
    result[1] = a2;
    v18 = (_QWORD*)(v24 + 8 * (v3 >> 6));
    if ((a3 & 1) != 0) {
      goto LABEL_27;
    }
  }
  if ((_DWORD)v19 != 0) {
    if (v4 >= (unsigned int)(64 - v19)) {
      v21 = (unsigned int)(64 - v19);
    }
    else {
      v21 = v4;
    }
    v4 -= v21;
    *v18++ &= ~((0xFFFFFFFFFFFFFFFFLL >>
                 (64 - (unsigned __int8)v19 - (unsigned __int8)v21)) &
                (-1LL << v19));
  }
  v22 = v4 >> 6;
  if (v4 >= 0x40) {
    result = (_QWORD*)GameRoutine_1a0ba50((__int64)v18, 0, 8 * v22);
  }
  if ((v4 & 0x3F) != 0) {
    v23 = v18[v22] & ~(0xFFFFFFFFFFFFFFFFLL >> -(v4 & 0x3F));
  LABEL_36:
    v18[v22] = v23;
  }
  return result;
}

#pragma GCC visibility pop
