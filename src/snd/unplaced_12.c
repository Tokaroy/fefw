#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameAlloc_e22b0(__int64);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void Manager_11ec80(PSEUDO_X8, __int64, int*);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 Crc32List_1163b0();
__int64 Env_de340(__int64 result, __int64);
__int64 GameRoutine_a1efd0(__int64);
__int64 TargetFile_a392e0(__int64, __int64, ...);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212e2d8;
extern __int64 snd_g_memory;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void Env_e0580(__int64, _QWORD*, const char*, const char*, char*, char, __int64,
               __int64, __int64);
void __attribute__((noreturn)) GameRoutine_e30d0();
void nn_diag_detail_AbortImpl_1a0a590();
_QWORD* snd_e0040(_QWORD* result, __int64 a2, int* a3, char* a4, char* a5,
                  char a6, __int64 a7);

_QWORD* snd_e0040(_QWORD* result, __int64 a2, int* a3, char* a4, char* a5,
                  char a6, __int64 a7)
{
  __int64 v7;
  unsigned __int64 v9;
  _QWORD* v10;
  _BOOL4 v11;
  _DWORD* v12;
  int v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _DWORD* v17;
  int v18;
  bool v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int* v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  char* v59;
  char* v60;
  _QWORD* v61;
  _QWORD* v62;
  __int64 v63;
  struct {
    char gap0_[8];
    int* v64;
    char gap16_[40];
    __int64 v70;
    char gap64_[4];
    unsigned int v71;
    __int64 v72;
    unsigned __int64 v73;
    _QWORD* v74;
  } f_;

  if (a2 == 0) {
    return result;
  }
  v7 = (__int64)result;
  result = X8CALL_X0(_QWORD*,
                     (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
                         *(_QWORD*)a2 + 32LL))((void*)&f_.v72, (void*)a2));
  v9 = f_.v73;
  if ((f_.v72 & 1) == 0) {
    v9 = (unsigned __int8)f_.v72 >> 1;
  }
  if (v9 != 8) {
    v11 = false;
    if ((f_.v72 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v10 = f_.v74;
  if ((f_.v72 & 1) == 0) {
    v10 = (__int64*)((char*)&f_.v72 + 1);
  }
  v11 = *v10 == 0x627553646C656966LL;
  if ((f_.v72 & 1) != 0) {
  LABEL_10:
    result = (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD*))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], f_.v74);
  }
LABEL_11:
  if (v11) {
    v12 = *(_DWORD**)(v7 + 328);
    if (v12 != nullptr && *(_DWORD*)v12 == *a3) {
      return result;
    }
    *(_QWORD*)(v7 + 368) = a3;
    *(_QWORD*)(v7 + 328) = a3;
    v13 = *a3;
    ConstructString_1901f0(&f_.v72);
    TargetFile_a392e0((__int64)&f_.v72, (__int64)"[ %08x ]", v13);
    v14 = (__int64*)(v7 + 336);
    if ((__int64*)(v7 + 336) != &f_.v72) {
      v15 = (unsigned __int8)f_.v72;
      if ((*(_BYTE*)(v7 + 336) & 1) == 0) {
        if ((f_.v72 & 1) == 0) {
          goto LABEL_17;
        }
      LABEL_24:
        GameRoutine_a3a3a0(v14, (__int64)f_.v74, f_.v73);
        if ((f_.v72 & 1) == 0) {
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      goto LABEL_26;
    }
    if ((*(_BYTE*)(v7 + 336) & 1) != 0) {
      v23 = *(_QWORD*)(v7 + 352);
    LABEL_38:
      (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
          snd_g_memory, v23);
    }
  }
  else {
    v17 = *(_DWORD**)(v7 + 296);
    if (v17 != nullptr && *(_DWORD*)v17 == *a3) {
      return result;
    }
    *(_QWORD*)(v7 + 360) = a3;
    *(_QWORD*)(v7 + 296) = a3;
    v18 = *a3;
    ConstructString_1901f0(&f_.v72);
    TargetFile_a392e0((__int64)&f_.v72, (__int64)"[ %08x ]", v18);
    v14 = (__int64*)(v7 + 304);
    if ((__int64*)(v7 + 304) != &f_.v72) {
      v15 = (unsigned __int8)f_.v72;
      if ((*(_BYTE*)(v7 + 304) & 1) == 0) {
        if ((f_.v72 & 1) == 0) {
        LABEL_17:
          v16 = f_.v73;
          *v14 = f_.v72;
          v14[1] = v16;
          v14[2] = (__int64)f_.v74;
          if ((f_.v72 & 1) == 0) {
            goto LABEL_41;
          }
          goto LABEL_40;
        }
        goto LABEL_24;
      }
    LABEL_26:
      v19 = (v15 & 1) == 0;
      v20 = v15 >> 1;
      if (v19) {
        v21 = (char*)&f_.v72 + 1;
      }
      else {
        v21 = (char*)f_.v74;
      }
      if (v19) {
        v22 = v20;
      }
      else {
        v22 = f_.v73;
      }
      GameRoutine_a3a260(v14, (__int64)v21, v22);
      if ((f_.v72 & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_40:
      (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], f_.v74);
      goto LABEL_41;
    }
    if ((*(_BYTE*)(v7 + 304) & 1) != 0) {
      v23 = *(_QWORD*)(v7 + 320);
      goto LABEL_38;
    }
  }
  v24 = f_.v72;
  v25 = f_.v73;
  LOWORD(f_.v72) = 0;
  *v14 = v24;
  v14[1] = v25;
  v14[2] = (__int64)f_.v74;
LABEL_41:
  if (a3[4] >= 1) {
    v26 = 0;
    f_.v64 = a3;
    v27 = GameData_212e2d8 + 16;
    do {
      f_.v70 = v26;
      v30 = *((_QWORD*)a3 + 1) + 1856 * v26;
      v31 = GameAlloc_e22b0(v7 + 136);
      v32 = 0;
      *((_DWORD*)v31 + 8) = *(_DWORD*)(v30 + 16);
      *((_DWORD*)v31 + 39) = *(_DWORD*)(v30 + 52);
      *((_BYTE*)v31 + 150) = *(_DWORD*)(v30 + 44) != 0;
      *((_DWORD*)v31 + 40) = *(_DWORD*)(v30 + 48);
      *((_DWORD*)v31 + 42) = *(_DWORD*)(v30 + 28);
      *((_DWORD*)v31 + 43) = *(_DWORD*)(v30 + 32);
      *((_DWORD*)v31 + 44) = *(_DWORD*)(v30 + 36);
      v33 = *(_DWORD*)(v30 + 24);
      *((_BYTE*)v31 + 151) = 0;
      *((_DWORD*)v31 + 41) = v33;
      *((_BYTE*)v31 + 152) = *(_BYTE*)(v30 + 20) ^ 1;
      *((_BYTE*)v31 + 153) = *(_BYTE*)(v30 + 21);
      *((_DWORD*)v31 + 45) = *(_DWORD*)(v30 + 56);
      do {
        v35 = (int*)(v30 + 60 + 28 * v32);
        v36 = *v35;
        if (*v35 != 0) {
          v37 = v35[1];
          v38 = v35[2];
          v40 = v35[3];
          v39 = v35[4];
          v41 = v35[5];
          v42 = v35[6];
          nn_os_LockMutex(v7 + 96);
          nn_os_LockMutex(v7 + 96);
          v43 = *(unsigned __int16*)(v7 + 88);
          v44 = *(unsigned __int16*)(v7 + 90);
          nn_os_UnlockMutex(v7 + 96);
          if (v43 >= v44) {
            GameRoutine_a1efd0(v7 + 96);
            nn_diag_detail_AbortImpl_1a0a590();
          }
          v45 = *(unsigned __int16*)(v7 + 88);
          v46 = *(_QWORD*)(v7 + 80);
          v47 = *(unsigned __int16*)(v46 + 2 * v45);
          *(_WORD*)(v7 + 88) = v45 + 1;
          *(_WORD*)(v46 + 2 * v45) = -1;
          v48 = *(_QWORD*)(v7 + 72) + 56LL * v47;
          nn_os_UnlockMutex(v7 + 96);
          *(_DWORD*)v48 = v36;
          *(_QWORD*)(v48 + 8) = v27;
          *(_DWORD*)(v48 + 16) = v37;
          *(_DWORD*)(v48 + 20) = v38;
          *(_DWORD*)(v48 + 24) = v40;
          *(_QWORD*)(v48 + 32) = v27;
          *(_DWORD*)(v48 + 40) = v39;
          *(_DWORD*)(v48 + 44) = v41;
          *(_DWORD*)(v48 + 48) = v42;
          v50 = (__int64*)v31[8];
          v49 = v31[9];
          if ((unsigned __int64)v50 < v49) {
            *v50 = v48;
            v34 = (__int64)(v50 + 1);
          }
          else {
            v51 = v31[7];
            v52 = (__int64)v50 - v51;
            v53 = (v52 >> 3) + 1;
            if (v53 >> 61 != 0) {
              GameRoutine_e30d0();
            }
            v54 = v49 - v51;
            v55 = v54 >> 2;
            if (v54 >> 2 <= v53) {
              v55 = (v52 >> 3) + 1;
            }
            if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
              v56 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v56 = v55;
            }
            v57 = (*(__int64 (**)(__int64, __int64, __int64))(
                *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 8 * v56, 32);
            v58 = (__int64*)(v57 + v52);
            *v58 = v48;
            v34 = v57 + v52 + 8;
            v59 = (char*)v31[7];
            v60 = (char*)v31[8];
            v61 = (__int64*)((char*)v58 + ((char*)v59 - (char*)v60));
            if (v60 != v59) {
              v62 = v61;
              do {
                v63 = *(_QWORD*)v59;
                v59 += 8;
                *v62++ = v63;
              } while (v59 != v60);
              v59 = (char*)v31[7];
            }
            v31[7] = v61;
            v31[8] = v34;
            v31[9] = v57 + 8 * v56;
            if (v59 != nullptr) {
              (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
                  snd_g_memory);
            }
          }
          v31[8] = v34;
        }
        ++v32;
      } while (v32 != 64);
      v28 = *(const char**)v30;
      v29 = Crc32List_1163b0();
      f_.v71 =
          (unsigned int)snd_fnd_calcCrc32(*(unsigned __int8**)(v30 + 8), 0);
      Manager_11ec80((void*)((__int64)&f_.v72), v29, (int*)&f_.v71);
      Env_e0580(v7, (_QWORD*)a2, v28, a4, a5, a6 & 1, (__int64)v31,
                (__int64)&f_.v72, a7);
      a3 = f_.v64;
      v26 = f_.v70 + 1;
    } while (f_.v70 + 1 < f_.v64[4]);
  }
  *(_BYTE*)(a2 + 57) = 1;
  return (_QWORD*)Env_de340(v7, a2);
}

#pragma GCC visibility pop
