#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nvidia_be5c0(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64* NgxRoutine_daf50();
__int64* NgxRoutine_db210(__int64* result, __int64*);
__int64* nvidia_28900(__int64*, __int64, __int64);
__int64* nvidia_bd030(__int64*);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf00(_QWORD, _QWORD);
__int64 NgxRoutine_bc9e0(_QWORD);
__int64 NgxRoutine_be820(__int64, __int64);
__int64 NgxRoutine_db160(__int64 result);
__int64 NgxRoutine_db240(__int64*);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_b5580(__int64 result);
extern __int64 (***NgxData_951168)();
extern __int64* NgxData_951118;
extern __int64* NgxData_951148[3];
extern __int64* NgxData_951158;
void** NgxRoutine_db280(void** result, void**);
void __attribute__((noreturn)) nvidia_27cb0();
__int64* nvidia_dlss_rel_source_common_b52a0(__int64* a1, __int64 a2);

__int64* nvidia_dlss_rel_source_common_b52a0(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64** v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;
  __int64 v29;
  struct {
    __int64* v30;
    __int64* v31;
    __int64 v32;
    _QWORD v33[2];
    unsigned __int64 v34;
    __int64 v35;
    unsigned __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    unsigned __int64 v41;
    int v42;
    char gap140_[4];
    _QWORD v43[19];
    __int64 v44;
  } v30_;

  v30_.v43[6] = 0;
  v3 = NgxData_951158;
  v4 = (__int64**)NgxData_951168;
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)NgxData_951168);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)NgxData_951168 + 8);
  v7 = NgxData_951158 + 8;
  v30_.v43[0] = NgxData_951158 + 8;
  v30_.v30 = (__int64*)v5;
  *(__int64**)((char*)&v30_.v30 + *(_QWORD*)(v5 + 0xFFFFFFFFFFFFFFE8LL)) =
      (__int64*)v6;
  v8 = (char*)&v30_.v30 + *(v30_.v30 - 3);
  NgxRoutine_be820((__int64)v8, (__int64)&v30_.v31);
  *((_QWORD*)v8 + 17) = 0;
  v30_.v43[0] = v7;
  *((_DWORD*)v8 + 36) = -1;
  v9 = NgxData_951118;
  v30_.v30 = v3 + 3;
  v30_.v31 = NgxData_951118 + 2;
  NgxRoutine_db160((__int64)&v30_.v32);
  v30_.v33[1] = 0;
  v30_.v34 = 0;
  v30_.v35 = 0;
  v30_.v36 = 0;
  v10 = NgxData_951148[0];
  v30_.v33[0] = 0;
  v30_.v37 = 0;
  v30_.v38 = 0;
  v30_.v39 = 0;
  v30_.v40 = 0;
  v30_.v41 = 0;
  v30_.v31 = NgxData_951148[0] + 2;
  v30_.v42 = 16;
  nvidia_dlss_rel_source_b5580((__int64)&v30_.v31);
  v11 = (__int64**)((char*)&v30_.v30 + *(v30_.v30 - 3));
  v12 = NgxRoutine_daf50();
  nvidia_be650((void*)((__int64)&v29), (__int64)v11);
  nvidia_be5c0((void*)((__int64)&v26_.v26), v11, (__int64)v12);
  NgxRoutine_db240(&v26_.v26);
  v13 = (__int64*)v11[5];
  if (v13 != nullptr) {
    v14 = v13 + 1;
    (*(void (**)(__int64*, __int64*))(*v13 + 16))(v13, v12);
    NgxRoutine_db210(&v30_.v44, v14);
    NgxRoutine_db280((void**)v14, (void**)v12);
    NgxRoutine_db240(&v30_.v44);
  }
  NgxRoutine_db240(&v29);
  nvidia_bd030((__int64*)&v30_.v30);
  if ((v30_.v42 & 0x10) != 0) {
    v17 = v30_.v41;
    v18 = &v30_.v35;
    if (v30_.v41 < v30_.v36) {
      v30_.v41 = v30_.v36;
      v17 = v30_.v36;
    }
  }
  else {
    if ((v30_.v42 & 8) == 0) {
      v15 = 0;
      LOBYTE(v26_.v26) = 0;
      v16 = (char*)&v26_.v26 + 1;
      goto LABEL_18;
    }
    v17 = v30_.v34;
    v18 = v30_.v33;
  }
  v19 = *v18;
  v15 = v17 - *v18;
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    nvidia_27cb0();
  }
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v15 | 7) + 1;
    }
    v16 = (char*)NgxRoutine_420(v20);
    v26_.v27 = v15;
    v26_.v28 = v16;
    v26_.v26 = v20 | 1;
    goto LABEL_17;
  }
  LOBYTE(v26_.v26) = 2 * v15;
  v16 = (char*)&v26_.v26 + 1;
  if (v15 != 0) {
  LABEL_17:
    memmove_plt(v16, v19, v15);
  }
LABEL_18:
  v16[v15] = 0;
  if ((v26_.v26 & 1) != 0) {
    v21 = v26_.v28;
  }
  else {
    v21 = (char*)&v26_.v26 + 1;
  }
  if ((v26_.v26 & 1) != 0) {
    v22 = v26_.v27;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v26_.v26 >> 1;
  }
  v23 = nvidia_28900(a1, (__int64)v21, v22);
  if ((v26_.v26 & 1) != 0) {
    NgxRoutine_430(v26_.v28, v26_.v26 & 0xFFFFFFFFFFFFFFFELL);
  }
  v24 = *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v4 + 8];
  v30_.v30 = *v4;
  *(__int64**)((char*)&v30_.v30 + *(v30_.v30 - 3)) = (__int64*)v24;
  v30_.v31 = v10 + 2;
  if ((v30_.v38 & 1) != 0) {
    NgxRoutine_430(v30_.v40, v30_.v38 & 0xFFFFFFFFFFFFFFFELL);
  }
  v30_.v31 = v9 + 2;
  NgxRoutine_db240(&v30_.v32);
  NgxRoutine_baf00(&v30_.v30, v4 + 1);
  NgxRoutine_bc9e0(v30_.v43);
  return v23;
}

#pragma GCC visibility pop
