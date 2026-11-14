#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 mkvparser_Chapters_Atom_Atom_plt(__int64);
__int64 mkvparser_Chapters_Atom_Destroy_Atom_plt(__int64);
__int64 mkvparser_Chapters_Display_Destroy_Display_plt(__int64);
__int64 mkvparser_Chapters_Display_Display_plt(__int64);
__int64 nn_os_GetTlsValue_plt(unsigned int);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
void nn_movie_detail_FreeMemory(__int64, _DWORD*);
__int64 libwebm_mkvparser_550320(__int64* a1);
__int64 libwebm_mkvparser_550e60(__int64 a1);

__int64 libwebm_mkvparser_550320(__int64* a1)
{
  int v1;
  atomic_uchar* v3;
  int v4;
  __int64 v5;
  unsigned __int8 explicit;
  unsigned int* v7;
  _QWORD** v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;

  {
    v1 = *((_DWORD*)a1 + 2);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 <= (signed __int32)*((_DWORD*)a1 + 3)) {
    v3 = (atomic_uchar*)SdkData_e88330;
    if (v1 != 0) {
      v4 = 2 * v1;
    }
    else {
      v4 = 1;
    }
    if ((sizeof((v4) * (0x30u)) > 4
             ? ((unsigned __int128)(unsigned long long)(v4) *
                (unsigned long long)(0x30u)) >>
                       64 ==
                   0
             : ((unsigned long long)(unsigned int)(v4) *
                (unsigned int)(0x30u)) >>
                       32 ==
                   0)) {
      v5 = (48LL * v4) | 8;
    }
    else {
      v5 = -1;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    {
      v7 = (unsigned int*)SdkData_e88338[0];
      __asm__ volatile("" ::"r"(v7));
    }
    if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*v7);
    v9 = (_QWORD*)SdkRoutine_4c3860(16, v5, v8);
    *v9 = v4;
    v10 = v9 + 1;
    v11 = v9;
    v12 = 48LL * v4;
    v13 = (__int64)(v9 + 1);
    do {
      mkvparser_Chapters_Atom_Atom_plt(v13);
      v13 += 48;
      v12 -= 48;
    } while (v12 != 0);
    if (*((int*)a1 + 3) >= 1) {
      v14 = 0;
      v15 = 0;
      do {
        {
          v16 = &v11[v14];
          __asm__ volatile("" ::"r"(v16));
        }
        ++v15;
        {
          v17 = *a1 + v14 * 8;
          __asm__ volatile("" ::"r"(v17));
        }
        v14 += 6;
        v16[1] = *(_QWORD*)v17;
        v16[2] = *(_QWORD*)(v17 + 8);
        v16[3] = *(_QWORD*)(v17 + 16);
        v16[4] = *(_QWORD*)(v17 + 24);
        v16[5] = *(_QWORD*)(v17 + 32);
        *((_DWORD*)v16 + 12) = *(_DWORD*)(v17 + 40);
        *((_DWORD*)v16 + 13) = *(_DWORD*)(v17 + 44);
      } while (v15 < *((int*)a1 + 3));
    }
    {
      v18 = *a1;
      __asm__ volatile("" ::"r"(v18));
    }
    if (*a1 != 0) {
      v20 = v18 - 8;
      {
        v19 = *(_QWORD*)(v18 - 8);
        __asm__ volatile("" ::"r"(v19));
      }
      if (v19 != 0) {
        v21 = v18 + 48 * v19 - 48;
        v22 = -48 * v19;
        do {
          mkvparser_Chapters_Atom_Destroy_Atom_plt(v21);
          v21 -= 48;
          v22 += 48;
        } while (v22 != 0);
      }
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *v7 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v23 = (_DWORD*)nn_os_GetTlsValue_plt(*v7);
      nn_movie_detail_FreeMemory(v20, v23);
    }
    *a1 = (__int64)v10;
    *((_DWORD*)a1 + 2) = v4;
  }
  return 1;
}

__int64 libwebm_mkvparser_550e60(__int64 a1)
{
  int v1;
  atomic_uchar* v3;
  int v4;
  __int64 v5;
  _BOOL4 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  unsigned int* v11;
  _QWORD** v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;

  {
    v1 = *(_DWORD*)(a1 + 40);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 <= (signed __int32)*(_DWORD*)(a1 + 44)) {
    v3 = (atomic_uchar*)SdkData_e88330;
    if (v1 != 0) {
      v4 = 2 * v1;
    }
    else {
      v4 = 1;
    }
    v5 = 24LL * v4;
    v6 = !(sizeof((v4) * (0x18u)) > 4
               ? ((unsigned __int128)(unsigned long long)(v4) *
                  (unsigned long long)(0x18u)) >>
                         64 ==
                     0
               : ((unsigned long long)(unsigned int)(v4) *
                  (unsigned int)(0x18u)) >>
                         32 ==
                     0);
    v7 = __CFADD__(v5, 8);
    v8 = v5 + 8;
    if (v7) {
      v6 = true;
    }
    if (v6) {
      v9 = -1;
    }
    else {
      v9 = v8;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    {
      v11 = (unsigned int*)SdkData_e88338[0];
      __asm__ volatile("" ::"r"(v11));
    }
    if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *v11 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v12 = (_QWORD**)nn_os_GetTlsValue_plt(*v11);
    v13 = (_QWORD*)SdkRoutine_4c3860(16, v9, v12);
    *v13 = v4;
    v14 = v13 + 1;
    v15 = v13;
    v16 = 24LL * v4;
    v17 = (__int64)(v13 + 1);
    do {
      mkvparser_Chapters_Display_Display_plt(v17);
      v17 += 24;
      v16 -= 24;
    } while (v16 != 0);
    if (*(int*)(a1 + 44) >= 1) {
      v18 = v15 + 3;
      v19 = 0;
      v20 = 0;
      do {
        ++v20;
        {
          v21 = (_QWORD*)(*(_QWORD*)(a1 + 32) + v19);
          __asm__ volatile("" ::"r"(v21));
        }
        v19 += 24;
        *(v18 - 2) = *v21;
        *(v18 - 1) = v21[1];
        *v18 = v21[2];
        v18 += 3;
      } while (v20 < *(int*)(a1 + 44));
    }
    {
      v22 = *(_QWORD*)(a1 + 32);
      __asm__ volatile("" ::"r"(v22));
    }
    if (v22 != 0) {
      v24 = v22 - 8;
      {
        v23 = *(_QWORD*)(v22 - 8);
        __asm__ volatile("" ::"r"(v23));
      }
      if (v23 != 0) {
        v25 = v22 + 24 * v23 - 24;
        v26 = -24 * v23;
        do {
          mkvparser_Chapters_Display_Destroy_Display_plt(v25);
          v25 -= 24;
          v26 += 24;
        } while (v26 != 0);
      }
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *v11 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v27 = (_DWORD*)nn_os_GetTlsValue_plt(*v11);
      nn_movie_detail_FreeMemory(v24, v27);
    }
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)(a1 + 40) = v4;
  }
  return 1;
}

#pragma GCC visibility pop
