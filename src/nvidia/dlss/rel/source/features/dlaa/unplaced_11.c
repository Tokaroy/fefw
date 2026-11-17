#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, __int64, __int64*,
                                                 unsigned __int64);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
unsigned __int8 nvidia_dlss_rel_source_features_dlaa_85e00(_QWORD* a1,
                                                           __int64* a2,
                                                           _QWORD* a3,
                                                           __int64* a4);

unsigned __int8 nvidia_dlss_rel_source_features_dlaa_85e00(_QWORD* a1,
                                                           __int64* a2,
                                                           _QWORD* a3,
                                                           __int64* a4)
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

  v5 = a1[1];
  v8 = *(_QWORD*)(v5 + 8);
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
  v38[1] = 96;
  v38[2] = 32;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v38,
                                             &v39, 3u);
  v12 = *a2;
  v11 = a2[1];
  v13 = v11 - *a2;
  if (v11 == *a2) {
    v15 = nullptr;
    v17 = 0;
    result = *a4;
    if (*a4 != 0) {
    LABEL_12:
      v20 = a4[2];
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
    result = *a4;
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
    v23 = *a2 + 8;
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
          v31 = v17 + 2 * v21 + ((v29 | (v24 >> 3) & 0xE) << 9);
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
          v37 = v28[3];
          v28 += 8;
          *(_WORD*)(v36 + v32 + 2) = v37;
        } while (v27 != 32);
        ++v24;
        v25 += 32 * v9;
      } while (v24 != 96);
      v21 += 3072;
      ++v22;
      v23 += 64;
    } while (v22 != v9);
  }
  return result;
}

#pragma GCC visibility pop
