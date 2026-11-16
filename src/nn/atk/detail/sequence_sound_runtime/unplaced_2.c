#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_290a60(_QWORD* result, __int64, __int64, __int64, __int64,
                           __int64);
__int64 BaseNx_2789b0(__int64, __int64, unsigned int);
__int64 SequenceNoteOnCallback_292d90(__int64, __int64, __int64, unsigned int*,
                                      _QWORD*, unsigned int*);
__int64 SequenceSoundRuntime_292c10(__int64, __int64, __int64, __int64, __int64,
                                    unsigned int*, __int64*);
__int64 SequenceSound_28d5b0(__int64, __int64, int, __int64, char, char,
                             __int64, __int64);
__int64 SequenceSound_28d660(__int64, __int64*, int*);
__int64 SequenceSound_28d8e0(__int64, _QWORD*, _QWORD*);
__int64 nn_atk_detail_sequence_sound_runtime_292970(__int64* a1, _QWORD* a2,
                                                    unsigned int a3, __int64 a4,
                                                    unsigned int* a5,
                                                    __int64 a6);

__int64 nn_atk_detail_sequence_sound_runtime_292970(__int64* a1, _QWORD* a2,
                                                    unsigned int a3, __int64 a4,
                                                    unsigned int* a5,
                                                    __int64 a6)
{
  __int64 v7;
  _DWORD* v8;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 result;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25[2];
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    char gap80_[24];
    __int64 v38;
    unsigned int v39;
    int v40;
    char gap120_[16];
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    _BYTE v57[14];
    __int16 v58;
  } f_;
  unsigned __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  _QWORD v41[2];
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;

  v7 = a2[2];
  v8 = *(_DWORD**)(a6 + 32);
  v59 = 0;
  v62 = 0;
  v63 = 0;
  v60 = -1;
  v61 = -1;
  v13 = BaseNx_2789b0(v7, (__int64)&v59, a3);
  if (v8 != nullptr && (v13 & 1) != 0) {
    if (v8[4] != -1) {
      LODWORD(v60) = v8[4];
    }
    if (v8[5] != -1) {
      DWORDn(v60, sizeof(v60) / 4 - 1) = v8[5];
    }
    if (v8[6] != -1) {
      LODWORD(v61) = v8[6];
    }
    if (v8[7] != -1) {
      DWORDn(v61, sizeof(v61) / 4 - 1) = v8[7];
    }
  }
  if ((v13 & 1) == 0) {
    return 3;
  }
  v14 = *(_QWORD*)(a4 + 32);
  f_.v56 = 0;
  *(_QWORD*)f_.v57 = 0;
  f_.v54 = 0;
  f_.v55 = 0;
  f_.v52 = 0;
  f_.v53 = 0;
  f_.v50 = 0;
  f_.v51 = 0;
  f_.v48 = 0;
  f_.v49 = 0;
  f_.v46 = 0;
  f_.v47 = 0;
  v15 = a2[2];
  v16 = a2[3];
  LODWORD(f_.v48) = -1;
  LODWORD(f_.v50) = -1;
  LODWORD(f_.v52) = -1;
  LODWORD(f_.v54) = -1;
  v17 = *(__int64**)(a6 + 32);
  LODWORD(f_.v56) = -1;
  memset(f_.v57, 0, sizeof(f_.v57));
  f_.v58 = 0;
  LODWORD(v14) = *(_DWORD*)(v14 + 72);
  f_.v45 = 0;
  f_.v43 = 0;
  v41[1] = 0;
  f_.v42 = 0xFFFFFFFFLL;
  f_.v44 = 0xFFFFFFFFLL;
  LODWORD(f_.v46) = -1;
  f_.v39 = v59;
  f_.v40 = v62;
  v41[0] = 0xFFFFFFFFLL;
  f_.v38 = 0;
  *(_WORD*)&f_.v57[12] = (_DWORD)v14 != 0;
  result = SequenceSoundRuntime_292c10((__int64)a1, (__int64)&f_.v38, a4, v15,
                                       v16, a5, v17);
  if ((_DWORD)result == 0) {
    result =
        SequenceNoteOnCallback_292d90((__int64)a1, (__int64)&f_.v38, a4, &v59,
                                      a2, *(unsigned int**)(a6 + 32));
    if ((_DWORD)result == 0) {
      SequenceSound_28d5b0(a4, a1[17], f_.v40, (__int64)(a1 + 24), v63,
                           SBYTE1(v63), a1[26], a1[27]);
      v19 = *(_DWORD*)(a6 + 4);
      if (*(_DWORD*)a6 != 0) {
        if (*(_DWORD*)a6 != 1) {
          v19 = 0;
        }
        v20 = 0;
      }
      else {
        v20 = 1;
      }
      v34 = __PAIR64__(v20, f_.v39);
      v21 = *(_QWORD*)(a6 + 8);
      v35 = v19;
      v36 = v21;
      v37 = *(_DWORD*)(a6 + 16);
      if (f_.v57[13] == 1) {
        v22 = a2[2];
        v23 = a2[3];
        v24 = *(_QWORD*)(a4 + 32);
        f_.v30 = 0;
        f_.v31 = 0;
        f_.v28 = 0;
        f_.v29 = 0;
        f_.v26 = 0;
        f_.v27 = 0;
        f_.v25[0] = 0;
        f_.v25[1] = 0;
        GameRoutine_290a60(f_.v25, v22, v23, (__int64)v41, (__int64)&f_.v42,
                           v24);
        SequenceSound_28d8e0(a4, f_.v25, &v34);
      }
      else {
        f_.v32 = *(_QWORD*)f_.v57;
        f_.v25[0] = f_.v38;
        f_.v25[1] = f_.v43;
        f_.v33 = *(unsigned __int16*)&f_.v57[8];
        f_.v26 = f_.v45;
        f_.v27 = f_.v47;
        f_.v30 = f_.v53;
        f_.v31 = f_.v55;
        WORD1(f_.v33) = *(_WORD*)&f_.v57[10];
        f_.v28 = f_.v49;
        f_.v29 = f_.v51;
        SequenceSound_28d660(a4, f_.v25, (int*)&v34);
      }
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
