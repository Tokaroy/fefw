#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_bcd70(_QWORD*);
_QWORD* NgxRoutine_bd1d0(_QWORD*, unsigned __int8);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64* nvidia_28900(__int64*, __int64, __int64);
__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_db310(__int64*, __int64);
__int64 atoi_plt(_QWORD);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memcmp_plt(_QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern _UNKNOWN* NgxData_9511b8;
extern __int64* NgxData_9521e8[8];
extern __int64 NgxData_951178[7];
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) cornflower_rook_00389_2b250();
_QWORD* nvidia_dlss_rel_source_312c0(__int64 a1, _QWORD* a2);

_QWORD* nvidia_dlss_rel_source_312c0(__int64 a1, _QWORD* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  _BYTE* v44;
  _BYTE* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  unsigned __int8 v55;
  _QWORD* result;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned __int8 v60;
  __int64 v61;
  char* v62;
  char v63;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    char* v66;
    __int64 v67;
    unsigned __int64 v68;
    char* v69;
  } f_;

  v4 = NgxData_9521e8[0];
  *(_QWORD*)(a1 + 16) = 0x100000001LL;
  *(_QWORD*)(a1 + 24) = 0x100000001LL;
  *(_QWORD*)(a1 + 32) = 0;
  v5 = a1 + 32;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 8) = 0x100000001LL;
  if ((*(_BYTE*)a2 & 1) != 0) {
    NgxRoutine_29320((__int64*)(a1 + 56), a2[2], a2[1]);
  }
  else {
    v6 = *a2;
    v7 = a2[2];
    *(_QWORD*)(a1 + 64) = a2[1];
    *(_QWORD*)(a1 + 72) = v7;
    *(_QWORD*)(a1 + 56) = v6;
  }
  *(_DWORD*)(a1 + 84) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 96) = 1;
  v8 = *(unsigned __int8*)a2;
  v9 = a2[1];
  if ((v8 & 1) != 0) {
    v10 = (char*)a2[2];
  }
  else {
    v10 = (char*)a2 + 1;
  }
  v11 = strlen_plt(".");
  if (v11 != 0) {
    v12 = v8 >> 1;
    v13 = v11;
    if ((v8 & 1) != 0) {
      v12 = v9;
    }
    if (v12 < v11) {
      goto LABEL_88;
    }
    v14 = &v10[v12];
    v15 = v10;
    while (1) {
      v16 = memchr_plt(v15, 46, v12 - v13 + 1);
      if (v16 == 0) {
        goto LABEL_88;
      }
      v17 = v16;
      if ((unsigned int)memcmp_plt(v16, ".") == 0) {
        break;
      }
      v15 = (char*)(v17 + 1);
      v12 = (__int64)&v14[-v17 - 1];
      if (v12 < v13) {
        goto LABEL_88;
      }
    }
    if ((char*)v17 == v14 ||
        (v18 = v17 - (_QWORD)v10, v17 - (_QWORD)v10 == -1)) {
    LABEL_88:
      v57 = strlen_plt("No dot in kernel name");
      v58 = nvidia_28900((__int64*)NgxData_951178[0],
                         (__int64)"No dot in kernel name", v57);
      nvidia_be650((void*)((__int64)&f_.v67),
                   (__int64)v58 + *(_QWORD*)(*v58 - 24));
      v59 = NgxRoutine_db310(&f_.v67, (__int64)NgxData_9511b8);
      v60 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v59 + 56LL))(v59, 10);
      NgxRoutine_db240(&f_.v67);
      NgxRoutine_bd1d0(v58, v60);
      result = NgxRoutine_bcd70(v58);
      *(_DWORD*)(a1 + 84) = 2;
      return result;
    }
  }
  else {
    v18 = 0;
  }
  v19 = strlen_plt("_kernel");
  if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v20 = (char*)a2 + 1;
  v21 = v19;
  if (v19 >= 0x17) {
    if ((v19 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v19 | 7) + 1;
    }
    v22 = (char*)NgxRoutine_420(v23);
    f_.v65 = v21;
    f_.v66 = v22;
    f_.v64 = v23 | 1;
    goto LABEL_25;
  }
  LOBYTE(f_.v64) = 2 * v19;
  v22 = (char*)&f_.v64 + 1;
  if (v19 != 0) {
  LABEL_25:
    memcpy_plt(v22, "_kernel", v21);
  }
  v22[v21] = 0;
  if ((f_.v64 & 1) != 0) {
    v24 = f_.v65;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)f_.v64 >> 1;
  }
  v25 = *(unsigned __int8*)a2;
  v26 = v18 - v24;
  v27 = v25 >> 1;
  v28 = (v25 & 1) == 0;
  v29 = a2[1];
  if (v28) {
    v29 = v27;
    v30 = (char*)a2 + 1;
  }
  else {
    v30 = (char*)a2[2];
  }
  if (v29 >= v26) {
    v31 = v26;
  }
  else {
    v31 = v29;
  }
  if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v31 | 7) + 1;
    }
    v32 = (char*)NgxRoutine_420(v41);
    f_.v68 = v31;
    f_.v69 = v32;
    f_.v67 = v41 | 1;
  }
  else {
    LOBYTE(f_.v67) = 2 * v31;
    v32 = (char*)&f_.v67 + 1;
    if (v31 == 0) {
      BYTE1(f_.v67) = 0;
      if ((*(_BYTE*)v5 & 1) == 0) {
        goto LABEL_40;
      }
      goto LABEL_39;
    }
  }
  memmove_plt(v32, v30, v31);
  v32[v31] = 0;
  if ((*(_BYTE*)v5 & 1) != 0) {
  LABEL_39:
    NgxRoutine_430(*(_QWORD*)(a1 + 48),
                   *(_QWORD*)(a1 + 32) & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_40:
  v33 = f_.v68;
  *(_QWORD*)v5 = f_.v67;
  *(_QWORD*)(v5 + 8) = v33;
  *(_QWORD*)(v5 + 16) = f_.v69;
  if ((f_.v64 & 1) != 0) {
    NgxRoutine_430(f_.v66, f_.v64 & 0xFFFFFFFFFFFFFFFELL);
  }
  v34 = *(unsigned __int8*)a2;
  v35 = a2[1];
  if ((v34 & 1) == 0) {
    v35 = v34 >> 1;
  }
  if (v18 >= v35) {
    goto LABEL_101;
  }
  v36 = (char*)a2[2];
  v37 = v18 + 1;
  v38 = v35 - (v18 + 1);
  if ((v34 & 1) != 0) {
    v39 = v36;
  }
  else {
    v39 = v20;
  }
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_100:
    NgxRoutine_27cb0();
  }
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v42 = 26;
    }
    else {
      v42 = (v38 | 7) + 1;
    }
    v40 = (char*)NgxRoutine_420(v42);
    f_.v68 = v38;
    f_.v69 = v40;
    f_.v67 = v42 | 1;
  }
  else {
    LOBYTE(f_.v67) = 2 * v38;
    v40 = (char*)&f_.v67 + 1;
    if (v35 == v37) {
      goto LABEL_63;
    }
  }
  memmove_plt(v40, &v39[v37], v38);
LABEL_63:
  v40[v38] = 0;
  v43 = (unsigned __int8)f_.v67;
  if ((f_.v67 & 1) != 0) {
    v44 = f_.v69;
  }
  else {
    v44 = (char*)&f_.v67 + 1;
  }
  if (*v44 == 115) {
    v45 = (char*)&f_.v67 + 2;
    if ((f_.v67 & 1) != 0) {
      v45 = f_.v69 + 1;
    }
    if (*v45 == 109) {
      v46 = f_.v68;
      if ((f_.v67 & 1) == 0) {
        v46 = (unsigned __int64)(unsigned __int8)f_.v67 >> 1;
      }
      if (v46 <= 1) {
      LABEL_101:
        cornflower_rook_00389_2b250();
      }
      v47 = v46 - 2;
      if ((f_.v67 & 1) != 0) {
        v48 = f_.v69 + 2;
      }
      else {
        v48 = (char*)&f_.v67 + 3;
      }
      if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_100;
      }
      if (v47 >= 0x17) {
        if ((v47 | 7) == 0x17) {
          v61 = 26;
        }
        else {
          v61 = (v47 | 7) + 1;
        }
        v49 = (char*)NgxRoutine_420(v61);
        f_.v65 = v47;
        f_.v66 = v49;
        f_.v64 = v61 | 1;
      }
      else {
        LOBYTE(f_.v64) = 2 * v47;
        v49 = (char*)&f_.v64 + 1;
        if (v46 == 2) {
          goto LABEL_95;
        }
      }
      memmove_plt(v49, v48, v47);
    LABEL_95:
      v49[v47] = 0;
      if ((f_.v64 & 1) != 0) {
        v62 = f_.v66;
      }
      else {
        v62 = (char*)&f_.v64 + 1;
      }
      result = (_QWORD*)atoi_plt(v62);
      v63 = f_.v64;
      *(_DWORD*)(a1 + 80) = (_DWORD)result;
      if ((v63 & 1) != 0) {
        result = (_QWORD*)NgxRoutine_430(f_.v66, f_.v64 & 0xFFFFFFFFFFFFFFFELL);
      }
    LABEL_84:
      if ((f_.v67 & 1) != 0) {
        return (_QWORD*)NgxRoutine_430(f_.v69, f_.v67 & 0xFFFFFFFFFFFFFFFELL);
      }
      return result;
    }
  }
  v50 = strlen_plt("Incorrect sm name: ");
  v51 = nvidia_28900((__int64*)NgxData_951178[0],
                     (__int64)"Incorrect sm name: ", v50);
  if ((v43 & 1) != 0) {
    v52 = f_.v68;
  }
  else {
    v52 = v43 >> 1;
  }
  v53 = nvidia_28900(v51, (__int64)v44, v52);
  nvidia_be650((void*)((__int64)&f_.v64), (__int64)v53 + *(_QWORD*)(*v53 - 24));
  v54 = NgxRoutine_db310(&f_.v64, (__int64)NgxData_9511b8);
  v55 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v54 + 56LL))(v54, 10);
  NgxRoutine_db240(&f_.v64);
  NgxRoutine_bd1d0(v53, v55);
  result = NgxRoutine_bcd70(v53);
  *(_DWORD*)(a1 + 84) = 2;
  goto LABEL_84;
}

#pragma GCC visibility pop
