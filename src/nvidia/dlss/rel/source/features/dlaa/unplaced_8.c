#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_29ca0(__int64 result);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_a9080(__int64, const char*);
__int64 nvidia_29cf0(_DWORD*, int, int, int, int, int);
__int64 nvidia_dlss_a9960(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, __int64, __int64*,
                                                 unsigned __int64);
extern _DWORD* NgxData_952a50;
extern __int64 (*nvidia_dlss_rel_source_features_dlaa_659c0_ptr)();
extern __int64 NgxData_952a70;
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_dlss_rel_source_features_dlaa_70310(__int64 a1, __int64 a2,
                                                   __int64* a3, _QWORD* a4,
                                                   int a5, int a6, int a7,
                                                   __int64 a8, char a9,
                                                   int a10);
__int64 nvidia_dlss_rel_source_features_dlaa_81900(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_8ace0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
__int64 nvidia_dlss_rel_source_features_dlaa_93c20(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);

__int64 nvidia_dlss_rel_source_features_dlaa_70310(__int64 a1, __int64 a2,
                                                   __int64* a3, _QWORD* a4,
                                                   int a5, int a6, int a7,
                                                   __int64 a8, char a9, int a10)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int* v34;
  __int64 result;

  *(_QWORD*)a1 = &nvidia_dlss_rel_source_features_dlaa_659c0_ptr;
  *(_QWORD*)(a1 + 8) = a2;
  {
    v16 = a4[1];
    __asm__ volatile("" ::"r"(v16));
  }
  *(_QWORD*)(a1 + 16) = *a4;
  *(_QWORD*)(a1 + 24) = v16;
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    NgxRoutine_29320((__int64*)(a1 + 64), a3[2], a3[1]);
  }
  else {
    {
      v17 = *a3;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = a3[2];
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(a1 + 72) = a3[1];
    *(_QWORD*)(a1 + 80) = v18;
    *(_QWORD*)(a1 + 64) = v17;
  }
  {
    v19 = *(_BYTE*)(a1 + 64);
    __asm__ volatile("" ::"r"(v19));
  }
  {
    v20 = *(const char**)(a1 + 80);
    __asm__ volatile("" ::"r"(v20));
  }
  *(_DWORD*)(a1 + 104) = a10;
  *(_DWORD*)(a1 + 108) = a7;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 112) = 1;
  if ((v19 & 1) != 0) {
    v21 = v20;
  }
  else {
    v21 = (const char*)(a1 + 65);
  }
  *(_QWORD*)(a1 + 120) = NgxRoutine_a9080(a8, v21);
  *(_DWORD*)(a1 + 128) = 0;
  v22 = NgxData_952a70;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)a1 = v22 + 16;
  NgxRoutine_29ca0(a1 + 216);
  NgxRoutine_29ca0(a1 + 264);
  {
    v23 = *a4;
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = *(_QWORD*)(a1 + 120);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_BYTE*)(a1 + 312) = a9 & 1;
  *(_DWORD*)(a1 + 208) = 1;
  *(_DWORD*)(a1 + 200) = *(_DWORD*)(v23 + 100);
  *(_DWORD*)(a1 + 204) = a5;
  {
    v25 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v25));
  }
  {
    v26 = *(_DWORD*)(v25 + 92);
    __asm__ volatile("" ::"r"(v26));
  }
  {
    v27 = *(_DWORD*)(v25 + 96);
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = *(_QWORD*)(v25 + 120);
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v29 = *(unsigned int*)(v28 + 48);
    __asm__ volatile("" ::"r"(v29));
  }
  {
    v30 = *(unsigned int*)(v28 + 52);
    __asm__ volatile("" ::"r"(v30));
  }
  *(_DWORD*)(a1 + 92) = v26;
  *(_DWORD*)(a1 + 96) = v27;
  nvidia_dlss_a9960(v24, v29, v30);
  {
    v31 = *(_DWORD*)(a1 + 204);
    __asm__ volatile("" ::"r"(v31));
  }
  {
    v32 = *(_DWORD*)(a1 + 208);
    __asm__ volatile("" ::"r"(v32));
  }
  *(_DWORD*)(a1 + 100) = a6;
  v33 = v32 * a6;
  v34 = (int*)NgxData_952a50;
  nvidia_29cf0((_DWORD*)(a1 + 216), v33, v31, v31, *(_DWORD*)(a1 + 200),
               *NgxData_952a50);
  result = nvidia_29cf0((_DWORD*)(a1 + 264), 1, 1, 1,
                        *(int*)(a1 + 208) * *(int*)(a1 + 100), *v34);
  if (*(_DWORD*)(a1 + 104) == 1) {
    *(_DWORD*)(a1 + 256) = 2;
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_81900(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _WORD* v25;
  int v26;
  __int64 v27;
  _WORD* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  _QWORD v38[3];
  __int64 v39;

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, v5, a1[2], (signed __int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 64;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v38,
                                             &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
      a4[1] = result;
      result = NgxRoutine_430(result, v20 - result);
    }
  }
  else {
    if (v13 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v14 = NgxRoutine_420(v11 - *a2);
    v15 = (_QWORD*)(v14 + v13);
    v16 = v13 & 7;
    v17 = v14;
    v18 = (_QWORD*)v14;
    if ((v13 & 7) != 0) {
      v18 = (_QWORD*)v14;
      do {
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v17;
  a4[1] = (__int64)v15;
  a4[2] = (__int64)v15;
  if (v8 >= 0x20) {
    v21 = 0;
    v22 = 0;
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
    do {
      v24 = 0;
      v25 = (_WORD*)v23;
      do {
        v26 = 0;
        v27 = 0;
        v28 = v25;
        result = 4 * (unsigned int)(v24 & 7);
        do {
          v29 = (unsigned int)v27 >> 4;
          v30 = v26 & 4;
          v27 += 8;
          v26 += 4;
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 6) << 9);
          v32 = v30 | (unsigned int)(v24 & 8);
          v33 = v31 + 16 * result;
          *(_WORD*)(v33 + v32) = *(v28 - 4);
          *(_WORD*)(v33 + v32 + 2) = *(v28 - 3);
          v34 = v31 + 16 * ((4 * (v24 & 7)) | 1);
          *(_WORD*)(v34 + v32) = *(v28 - 2);
          *(_WORD*)(v34 + v32 + 2) = *(v28 - 1);
          v35 = v31 + 16 * ((4 * (v24 & 7)) | 2);
          v36 = v31 + 16 * ((4 * (v24 & 7)) | 3);
          *(_WORD*)(v35 + v32) = *v28;
          *(_WORD*)(v35 + v32 + 2) = v28[1];
          *(_WORD*)(v36 + v32) = v28[2];
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 64);
      v21 += 2048;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_8ace0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _WORD* v25;
  int v26;
  __int64 v27;
  _WORD* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  _QWORD v38[3];
  __int64 v39;

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, v5, a1[2], (signed __int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 160;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v38,
                                             &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
      a4[1] = result;
      result = NgxRoutine_430(result, v20 - result);
    }
  }
  else {
    if (v13 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v14 = NgxRoutine_420(v11 - *a2);
    v15 = (_QWORD*)(v14 + v13);
    v16 = v13 & 7;
    v17 = v14;
    v18 = (_QWORD*)v14;
    if ((v13 & 7) != 0) {
      v18 = (_QWORD*)v14;
      do {
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v17;
  a4[1] = (__int64)v15;
  a4[2] = (__int64)v15;
  if (v8 >= 0x20) {
    v21 = 0;
    v22 = 0;
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
    do {
      v24 = 0;
      v25 = (_WORD*)v23;
      do {
        v26 = 0;
        v27 = 0;
        v28 = v25;
        result = v24 & 8;
        do {
          v29 = (unsigned int)v27 >> 4;
          v30 = v26 & 4;
          v27 += 8;
          v26 += 4;
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 0x1E) << 9);
          v32 = v30 | (unsigned int)result;
          v33 = v31 + 64 * (v24 & 7);
          *(_WORD*)(v33 + v32) = *(v28 - 4);
          *(_WORD*)(v33 + v32 + 2) = *(v28 - 3);
          v34 = v31 + 16 * ((4 * (v24 & 7)) | 1);
          *(_WORD*)(v34 + v32) = *(v28 - 2);
          *(_WORD*)(v34 + v32 + 2) = *(v28 - 1);
          v35 = v31 + 16 * ((4 * (v24 & 7)) | 2);
          v36 = v31 + 16 * ((4 * (v24 & 7)) | 3);
          *(_WORD*)(v35 + v32) = *v28;
          *(_WORD*)(v35 + v32 + 2) = v28[1];
          *(_WORD*)(v36 + v32) = v28[2];
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 160);
      v21 += 5120;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_93c20(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _WORD* v25;
  int v26;
  __int64 v27;
  _WORD* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int16 v37;
  _QWORD v38[3];
  __int64 v39;

  {
    v5 = a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  v9 = v8 >> 5;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, v5, a1[2], (signed __int64)(a1[2] - v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v38[0] = v8 >> 5;
  v38[1] = 64;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v38,
                                             &v39, 3u);
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v20 = a4[2];
        __asm__ volatile("" ::"r"(v20));
      }
      a4[1] = result;
      result = NgxRoutine_430(result, v20 - result);
    }
  }
  else {
    if (v13 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v14 = NgxRoutine_420(v11 - *a2);
    v15 = (_QWORD*)(v14 + v13);
    v16 = v13 & 7;
    v17 = v14;
    v18 = (_QWORD*)v14;
    if ((v13 & 7) != 0) {
      v18 = (_QWORD*)v14;
      do {
        *(_BYTE*)v18 = 0;
        v18 = (_QWORD*)((char*)v18 + 1);
        --v16;
      } while (v16 != 0);
    }
    if ((unsigned __int64)(v12 - v11) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v18++ = 0;
      } while (v18 != v15);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v17;
  a4[1] = (__int64)v15;
  a4[2] = (__int64)v15;
  if (v8 >= 0x20) {
    v21 = 0;
    v22 = 0;
    {
      v23 = *a2 + 8;
      __asm__ volatile("" ::"r"(v23));
    }
    do {
      v24 = 0;
      v25 = (_WORD*)v23;
      do {
        v26 = 0;
        v27 = 0;
        v28 = v25;
        result = 4 * (unsigned int)(v24 & 7);
        do {
          v29 = (unsigned int)v27 >> 4;
          v30 = v26 & 4;
          v27 += 8;
          v26 += 4;
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 6) << 9);
          v32 = v30 | (unsigned int)(v24 & 8);
          v33 = v31 + 16 * result;
          *(_WORD*)(v33 + v32) = *(v28 - 4);
          *(_WORD*)(v33 + v32 + 2) = *(v28 - 3);
          v34 = v31 + 16 * ((4 * (v24 & 7)) | 1);
          *(_WORD*)(v34 + v32) = *(v28 - 2);
          *(_WORD*)(v34 + v32 + 2) = *(v28 - 1);
          v35 = v31 + 16 * ((4 * (v24 & 7)) | 2);
          v36 = v31 + 16 * ((4 * (v24 & 7)) | 3);
          *(_WORD*)(v35 + v32) = *v28;
          *(_WORD*)(v35 + v32 + 2) = v28[1];
          *(_WORD*)(v36 + v32) = v28[2];
          {
            v37 = v28[3];
            __asm__ volatile("" ::"r"(v37));
          }
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 64);
      v21 += 2048;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

#pragma GCC visibility pop
