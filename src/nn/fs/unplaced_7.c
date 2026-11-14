#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fs_file_data_cache_system_12bea0(__int64, unsigned __int64, __int64,
                                         unsigned __int64, unsigned __int64);
__int64 nn_diag_detail_NotNullImpl_plt(unsigned __int64);
extern _QWORD SdkData_e51868[3];
extern __int64 SdkData_e86df8;
extern __int64 SdkData_e86e00;
extern __int64 SdkData_e86e08;
void nn_detail_UnexpectedDefaultImpl_plt_857150();
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_fs_12b800(__int64 a1, _QWORD* a2, unsigned __int64 a3,
                     unsigned int a4, unsigned int a5);

__int64 nn_fs_12b800(__int64 a1, _QWORD* a2, unsigned __int64 a3,
                     unsigned int a4, unsigned int a5)
{
  __int64 result;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64* v51;
  __int64 v52;
  __int64** v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;

  if ((nn_diag_detail_NotNullImpl_plt((unsigned __int64)a2) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  result = 3124226;
  if (a3 < 0xA8 || a3 >> 3 < 0x219) {
    return result;
  }
  v11 = a3 - 4296;
  if (a3 - 4296 <= 0x446E7) {
    if (v11 >> 3 < 0x80D) {
      return result;
    }
    v12 = a3 - 4312;
    v13 = (a3 - 4312) / 0x4068;
    if (a3 - 4312 > 0x446E7) {
      goto LABEL_6;
    }
  LABEL_9:
    v14 = 1;
    goto LABEL_10;
  }
  v12 =
      v11 -
      (((unsigned __int64)(1LL << ((-(char)__clz((
                                       unsigned long long)(v11 / 0x4068 - 1))) &
                                   63)) >>
        1) &
       0x3FFFFFFFFFFFFFF0LL);
  v13 = v12 / 0x4068;
  if (v12 <= 0x446E7) {
    goto LABEL_9;
  }
LABEL_6:
  v14 =
      (unsigned __int64)(1LL << ((-(char)__clz((unsigned long long)(v13 - 1))) &
                                 63)) >>
      5;
LABEL_10:
  if (v12 >> 3 >= 0x80D && v14 != 0) {
    *(_QWORD*)(a1 + 16) = a2;
    *(_QWORD*)(a1 + 24) = a2 + 9;
    {
      v15 = ((unsigned __int64)&a2[8 * v13 + 21] + 7) & 0xFFFFFFFFFFFFFFF8LL;
      __asm__ volatile("" ::"r"(v15));
    }
    v16 = v15 + 16 * v14;
    v17 = v15 + 16 * (v14 + v13);
    *(_QWORD*)(a1 + 48) = v17;
    v18 = (v17 + 24 * v13 + 4095) & 0xFFFFFFFFFFFFF000LL;
    *(_QWORD*)a1 = v18;
    *(_QWORD*)(a1 + 8) = v16;
    if (v18 + (v13 << 14) > (unsigned __int64)a2 + a3) {
      *(_QWORD*)(a1 + 48) = 0;
      *(_QWORD*)a1 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)(a1 + 24) = 0;
      return result;
    }
    if (a4 < 3) {
      {
        v19 = SdkData_e51868[a4];
        __asm__ volatile("" ::"r"(v19));
      }
      a2[3] = 0;
      a2[4] = a2 + 4;
      a2[5] = a2 + 4;
      a2[6] = a2 + 6;
      a2[7] = a2 + 6;
      a2[8] = 0;
      *a2 = v19;
      *(_QWORD*)(a1 + 16) = a2;
      fs_file_data_cache_system_12bea0(
          (__int64)a2, ((unsigned __int64)a2 + 175) & 0xFFFFFFFFFFFFFFF8LL,
          v16 - (((unsigned __int64)a2 + 175) & 0xFFFFFFFFFFFFFFF8LL), v13,
          v14);
      v20 = 0;
      if (v13 <= 1) {
        v21 = 1;
      }
      else {
        v21 = v13;
      }
      if (v12 >> 5 >= 0x80D) {
        v22 = 49152;
        v23 = 56;
        v20 = 0;
        do {
          v20 += 4;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 56) =
              *(_QWORD*)a1 + v22 - 49152;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 48) =
              *(_QWORD*)(a1 + 8) + v23 - 56;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 40) =
              *(_QWORD*)a1 + v22 - 0x8000;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 32) =
              *(_QWORD*)(a1 + 8) + v23 - 40;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 24) =
              *(_QWORD*)a1 + v22 - 0x4000;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 16) =
              *(_QWORD*)(a1 + 8) + v23 - 24;
          {
            v24 = *(_QWORD*)a1 + v22;
            __asm__ volatile("" ::"r"(v24));
          }
          v22 += 0x10000;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v23 - 8) = v24;
          {
            v25 = (_QWORD*)(*(_QWORD*)(a1 + 8) + v23);
            __asm__ volatile("" ::"r"(v25));
          }
          v23 += 64;
          *v25 = v25 - 1;
        } while ((v21 & 0x3FFFFFFFFFFFCLL) != v20);
      }
      if ((v21 & 3) != 0) {
        v26 = 16 * v20;
        v27 = v20 << 14;
        v28 = (unsigned __int64)(v21 & 3) << 10;
        do {
          v28 -= 1024LL;
          {
            v29 = *(_QWORD*)a1 + v27;
            __asm__ volatile("" ::"r"(v29));
          }
          v27 += 0x4000;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v26) = v29;
          {
            v30 = *(_QWORD*)(a1 + 8) + v26;
            __asm__ volatile("" ::"r"(v30));
          }
          v26 += 16;
          *(_QWORD*)(v30 + 8) = v30;
        } while (v28 != 0);
      }
      v31 = a1 + 56;
      v32 = v21 & 3;
      if (v12 >= 0x101A0) {
        v34 = v21 & 0x3FFFFFFFFFFFCLL;
        v35 = 88;
        v33 = 0;
        do {
          v33 += 4;
          {
            v36 = *(_QWORD*)(a1 + 48) + v35;
            __asm__ volatile("" ::"r"(v36));
          }
          *(_QWORD*)(v36 - 80) = v36 - 88;
          *(_QWORD*)(v36 - 72) = 0;
          *(_QWORD*)(v36 - 88) = v36 - 88;
          {
            v37 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v35);
            __asm__ volatile("" ::"r"(v37));
          }
          {
            v38 = *(v37 - 11);
            __asm__ volatile("" ::"r"(v38));
          }
          v37 -= 11;
          *v37 = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(v38 + 8) = v31;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v37;
          *(_QWORD*)(a1 + 56) = v38;
          {
            v39 = *(_QWORD*)(a1 + 48) + v35;
            __asm__ volatile("" ::"r"(v39));
          }
          *(_QWORD*)(v39 - 56) = v39 - 64;
          *(_QWORD*)(v39 - 48) = 0;
          *(_QWORD*)(v39 - 64) = v39 - 64;
          {
            v40 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v35);
            __asm__ volatile("" ::"r"(v40));
          }
          {
            v41 = *(v40 - 8);
            __asm__ volatile("" ::"r"(v41));
          }
          v40 -= 8;
          *v40 = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(v41 + 8) = v31;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v40;
          *(_QWORD*)(a1 + 56) = v41;
          {
            v42 = *(_QWORD*)(a1 + 48) + v35;
            __asm__ volatile("" ::"r"(v42));
          }
          *(_QWORD*)(v42 - 32) = v42 - 40;
          *(_QWORD*)(v42 - 24) = 0;
          *(_QWORD*)(v42 - 40) = v42 - 40;
          {
            v43 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v35);
            __asm__ volatile("" ::"r"(v43));
          }
          {
            v44 = *(v43 - 5);
            __asm__ volatile("" ::"r"(v44));
          }
          v43 -= 5;
          *v43 = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(v44 + 8) = v31;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v43;
          *(_QWORD*)(a1 + 56) = v44;
          {
            v45 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v35);
            __asm__ volatile("" ::"r"(v45));
          }
          *(v45 - 1) = v45 - 2;
          *v45 = 0;
          *(v45 - 2) = v45 - 2;
          {
            v46 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v35);
            __asm__ volatile("" ::"r"(v46));
          }
          v35 += 96;
          {
            v47 = *(v46 - 2);
            __asm__ volatile("" ::"r"(v47));
          }
          v46 -= 2;
          *v46 = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(v47 + 8) = v31;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v46;
          *(_QWORD*)(a1 + 56) = v47;
        } while (v34 != v33);
      }
      else {
        v33 = 0;
      }
      if (v32 != 0) {
        v48 = 24 * v33;
        v49 = 24 * v32;
        do {
          v49 -= 24;
          {
            v50 = (_QWORD*)(*(_QWORD*)(a1 + 48) + v48);
            __asm__ volatile("" ::"r"(v50));
          }
          v50[1] = v50;
          v50[2] = 0;
          *v50 = v50;
          {
            v51 = (__int64*)(*(_QWORD*)(a1 + 48) + v48);
            __asm__ volatile("" ::"r"(v51));
          }
          v48 += 24;
          {
            v52 = *v51;
            __asm__ volatile("" ::"r"(v52));
          }
          *v51 = *(_QWORD*)(a1 + 56);
          *(_QWORD*)(v52 + 8) = v31;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v51;
          *(_QWORD*)(a1 + 56) = v52;
        } while (v49 != 0);
      }
      {
        v53 = *(__int64***)(a1 + 64);
        __asm__ volatile("" ::"r"(v53));
      }
      {
        v54 = v53[1];
        __asm__ volatile("" ::"r"(v54));
      }
      v55 = (__int64*)*v54;
      (*v53)[1] = (__int64)v54;
      *v54 = (__int64)*v53;
      v55[1] = (__int64)v53;
      *v53 = v55;
      *((_DWORD*)v53 + 4) = 0;
      *((_DWORD*)v53 + 5) = v13;
      *v53 = *(__int64**)(a1 + 72);
      v55[1] = a1 + 72;
      *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL) = v53;
      *(_QWORD*)(a1 + 72) = v55;
      *(_DWORD*)(a1 + 32) = v13;
      *(_DWORD*)(a1 + 36) = v13;
      *(_DWORD*)(a1 + 40) = 0;
      if (a5 < 2) {
        {
          v56 = *(_QWORD*)(a1 + 24);
          __asm__ volatile("" ::"r"(v56));
        }
        v57 = SdkData_e86e00;
        *(_DWORD*)(v56 + 8) = 0;
        *(_QWORD*)(v56 + 24) = 0;
        *(_QWORD*)(v56 + 32) = 0;
        *(_QWORD*)(v56 + 40) = 0;
        *(_QWORD*)(v56 + 48) = 0;
        *(_QWORD*)(v56 + 56) = 0;
        *(_QWORD*)(v56 + 64) = 0;
        *(_QWORD*)(v56 + 72) = 0;
        *(_QWORD*)(v56 + 80) = 0;
        *(_QWORD*)(v56 + 88) = 0;
        *(_QWORD*)v56 = v57 + 16;
        goto LABEL_37;
      }
      if (a5 == 2) {
        {
          v56 = *(_QWORD*)(a1 + 24);
          __asm__ volatile("" ::"r"(v56));
        }
        v58 = SdkData_e86e08;
        *(_DWORD*)(v56 + 8) = 0;
        *(_QWORD*)(v56 + 24) = 0;
        *(_QWORD*)(v56 + 32) = 0;
        *(_QWORD*)(v56 + 40) = 0;
        *(_QWORD*)(v56 + 48) = 0;
        *(_QWORD*)(v56 + 56) = 0;
        *(_QWORD*)(v56 + 64) = 0;
        *(_QWORD*)(v56 + 72) = 0;
        *(_QWORD*)(v56 + 80) = 0;
        *(_QWORD*)v56 = v58 + 16;
        *(_QWORD*)(v56 + 88) = 0x20000;
        goto LABEL_37;
      }
      if (a5 == 3) {
        {
          v56 = *(_QWORD*)(a1 + 24);
          __asm__ volatile("" ::"r"(v56));
        }
        *(_QWORD*)v56 = SdkData_e86df8 + 16;
      LABEL_37:
        *(_QWORD*)(a1 + 24) = v56;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v56 + 16LL))(v56, 0x4000);
        return 0;
      }
    }
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  return result;
}

#pragma GCC visibility pop
