#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6e2a20(_QWORD);
__int64 GameRoutine_6e2b60(_QWORD);
__int64 GameRoutine_7fe910(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f9d090[])();
extern __int64 GameData_21c99c0;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c868;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_UnitMastery_GetMaxJobRank(__int64 a1, __int64 a2, __int64 a3);
__int64 UnitMastery_7fcee0(__int64 a1, __int64 a2);
__int64 UnitMastery_7fd6e0_alt1(__int64 a1, __int64 a2, int a3, __int64 a4,
                                __int64 a5,
                                __int64 a6) __asm__("UnitMastery_7fd6e0");
__int64 game_UnitMastery_GetMaxJobRank_lambda0_Invoke(__int64 result,
                                                      __int64 a2, _WORD* a3);
_QWORD* GameRoutine_7fe910_alt1(_QWORD* result, unsigned __int64, __int64,
                                __int64, __int64,
                                __int64) __asm__("GameRoutine_7fe910");
__int64 GameRoutine_2b0();
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
extern __int64 GameData_21da2ea;
extern __int64 GameData_21da2f2;
extern __int64 GameData_21da2fa;
extern __int64 GameData_21da302;
extern __int64 GameData_21da318;
extern __int64 GameData_21da320;
extern __int64 GameData_21da328;
__int64 UnitMastery_7febc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_7fb7a0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UnitMastery_7fe910(__int64* a1, unsigned __int64 a2);
__int64 GameRoutine_6e2a20_alt1(__int64) __asm__("GameRoutine_6e2a20");
__int64 GameRoutine_6e2b60_alt1(__int64) __asm__("GameRoutine_6e2b60");
__int64 UnitMastery_7fd6e0(__int64 a1, __int64 a2, int a3);

__int64 game_UnitMastery_GetMaxJobRank(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  unsigned __int8 v17;
  __int64 v18;

  v17 = 0;
  if (a2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 408) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 400) + 24LL) + 1104LL);
    if (v4 != 0) {
      v17 = *(_BYTE*)(v4 + 49);
    }
  }
  v5 = v15;
  v15[0] = GameData_1f9d090;
  v15[1] = &v17;
  v16 = v15;
  v6 = GameData_21c99c0;
  v7 = *(_QWORD*)(GameData_21c99c0 + 64);
  v8 = (unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v7) >> 3;
  if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 48)) >> 1 == (int)v8 &&
      (int)v8 >= 1) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(a1 + 48);
      if (*(_WORD*)(v12 + v10) != 0) {
        v18 = *(_QWORD*)(v7 + 8 * v11);
        if (v16 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64*, __int64))(*v16 + 48LL))(v16, &v18,
                                                                v12 + v10);
        v6 = GameData_21c99c0;
      }
      v7 = *(_QWORD*)(v6 + 64);
      ++v11;
      v10 += 2;
    } while (v11 < (int)((unsigned __int64)(*(_QWORD*)(v6 + 72) - v7) >> 3));
    v5 = v16;
    if (v16 != v15) {
      if (v16 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v5 + v14))(v5, a2);
      }
      return v17;
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 UnitMastery_7fcee0(__int64 a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  int v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int16 v75;
  __int64 v76;
  unsigned int* v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  int v100;

  v2 = *(void (***)(__int64, int*))a2;
  v100 = 0;
  (*v2)(a2, &v100);
  v5 = *(int*)(a2 + 20);
  v6 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(v6 + v5) = 0;
  if (*(_WORD*)(a1 + 2) != 0) {
    v7 = *(int*)(a2 + 20);
    v8 = 1;
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
    v9 = *(int*)(a2 + 20);
    LOWORD(v7) = *(_WORD*)(a1 + 2);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v7;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v7);
    if (*(_WORD*)(a1 + 4) == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v8 = 0;
  if (*(_WORD*)(a1 + 4) != 0) {
  LABEL_3:
    v11 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 1;
    v12 = *(int*)(a2 + 20);
    LOWORD(v11) = *(_WORD*)(a1 + 4);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v11;
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE1(v11);
  }
LABEL_4:
  if (*(_WORD*)(a1 + 6) != 0) {
    v14 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 2;
    v15 = *(int*)(a2 + 20);
    LOWORD(v14) = *(_WORD*)(a1 + 6);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v14;
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE1(v14);
  }
  if (*(_WORD*)(a1 + 8) != 0) {
    v17 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 3;
    v18 = *(int*)(a2 + 20);
    LOWORD(v17) = *(_WORD*)(a1 + 8);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v17;
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE1(v17);
  }
  if (*(_WORD*)(a1 + 10) != 0) {
    v20 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 4;
    v21 = *(int*)(a2 + 20);
    LOWORD(v20) = *(_WORD*)(a1 + 10);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v20;
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE1(v20);
  }
  if (*(_WORD*)(a1 + 12) != 0) {
    v23 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 5;
    v24 = *(int*)(a2 + 20);
    LOWORD(v23) = *(_WORD*)(a1 + 12);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v23;
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE1(v23);
  }
  if (*(_WORD*)(a1 + 14) != 0) {
    v26 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 6;
    v27 = *(int*)(a2 + 20);
    LOWORD(v26) = *(_WORD*)(a1 + 14);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v26;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE1(v26);
  }
  if (*(_WORD*)(a1 + 16) != 0) {
    v29 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = 7;
    v30 = *(int*)(a2 + 20);
    LOWORD(v29) = *(_WORD*)(a1 + 16);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = v29;
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE1(v29);
  }
  if (*(_WORD*)(a1 + 18) != 0) {
    v32 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = 8;
    v33 = *(int*)(a2 + 20);
    LOWORD(v32) = *(_WORD*)(a1 + 18);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v32;
    v34 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v34 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = BYTE1(v32);
  }
  if (*(_WORD*)(a1 + 20) != 0) {
    v35 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = 9;
    v36 = *(int*)(a2 + 20);
    LOWORD(v35) = *(_WORD*)(a1 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = v35;
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE1(v35);
  }
  if (*(_WORD*)(a1 + 22) != 0) {
    v38 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = 10;
    v39 = *(int*)(a2 + 20);
    LOWORD(v38) = *(_WORD*)(a1 + 22);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v38;
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v38);
  }
  if (*(_WORD*)(a1 + 24) != 0) {
    v41 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = 11;
    v42 = *(int*)(a2 + 20);
    LOWORD(v41) = *(_WORD*)(a1 + 24);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v41;
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = BYTE1(v41);
  }
  if (*(_WORD*)(a1 + 26) != 0) {
    v44 = *(int*)(a2 + 20);
    LOBYTE(v8) = v8 + 1;
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = 12;
    v45 = *(int*)(a2 + 20);
    LOWORD(v44) = *(_WORD*)(a1 + 26);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v44;
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46) = BYTE1(v44);
  }
  else if (v8 == 0) {
    goto LABEL_41;
  }
  v47 = *(_QWORD*)(a2 + 32);
  v48 = *(_QWORD*)(a2 + 40);
  v49 = ((v48 - v47) << 7) - 1;
  if (v48 == v47) {
    v49 = 0;
  }
  v50 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v49 == v50) {
    GameRoutine_660f80(a2 + 24);
    v47 = *(_QWORD*)(a2 + 32);
    v50 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v47 + 8 * (v50 >> 10)) + 4 * (v50 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v8;
  v52 = *(_QWORD*)(a2 + 56);
  v51 = *(_QWORD*)(a2 + 64);
  v54 = *(_QWORD*)(a2 + 32);
  v53 = *(_QWORD*)(a2 + 40);
  v55 = v53 == v54;
  v56 = v51 - 1 + v52;
  v57 = v56 >> 10;
  v58 = v56 & 0x3FF;
  v59 = ((v53 - v54) << 7) - 1;
  v60 = *(_QWORD*)(v54 + 8 * v57);
  if (v55) {
    v59 = 0;
  }
  v61 = *(_DWORD*)(v60 + 4 * v58);
  *(_QWORD*)(a2 + 64) = v51 - 1;
  *(_DWORD*)(a2 + 20) = v61;
  if ((unsigned __int64)(v59 - (v51 + v52) + 1) >= 0x800) {
    v62 = *(_QWORD*)(v53 - 8);
    if (v62 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v62);
      v53 = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v53 - 8;
  }
LABEL_41:
  v64 = *(int*)(a2 + 20);
  v65 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v64 + 1;
  *(_BYTE*)(v65 + v64) = 0;
  v67 = *(_QWORD*)(a1 + 48);
  v66 = *(_QWORD*)(a1 + 56);
  if (v66 != v67) {
    v68 = 0;
    v69 = 0;
    v70 = GameData_212c868;
    do {
      if (*(_WORD*)(v67 + 2 * v68) != 0) {
        v77 = *(unsigned int**)(*(_QWORD*)(*v70 + 64) + 8 * v68);
        v78 = *(int*)(a2 + 20);
        if (v77 != nullptr) {
          v79 = *v77;
          *(_DWORD*)(a2 + 20) = v78 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = v79;
          v80 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v80 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE1(v79);
          v81 = HIWORD(v79);
          LODWORD(v77) = HIBYTE(v79);
          v82 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v82 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = v81;
        }
        else {
          *(_DWORD*)(a2 + 20) = v78 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = 0;
          v71 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v71 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = 0;
          v72 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v72 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = 0;
        }
        v73 = *(int*)(a2 + 20);
        ++v69;
        *(_DWORD*)(a2 + 20) = v73 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = (_BYTE)v77;
        v74 = *(int*)(a2 + 20);
        v75 = *(_WORD*)(*(_QWORD*)(a1 + 48) + 2 * v68);
        *(_DWORD*)(a2 + 20) = v74 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = v75;
        v76 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v76 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = HIBYTE(v75);
        v67 = *(_QWORD*)(a1 + 48);
        v66 = *(_QWORD*)(a1 + 56);
      }
      ++v68;
    } while (v68 < (v66 - v67) >> 1);
    if (v69 > 0) {
      v83 = *(_QWORD*)(a2 + 32);
      v84 = *(_QWORD*)(a2 + 40);
      v85 = ((v84 - v83) << 7) - 1;
      if (v84 == v83) {
        v85 = 0;
      }
      v86 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      if (v85 == v86) {
        GameRoutine_660f80(a2 + 24);
        v83 = *(_QWORD*)(a2 + 32);
        v86 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      }
      *(_DWORD*)(*(_QWORD*)(v83 + 8 * (v86 >> 10)) + 4 * (v86 & 0x3FF)) =
          *(_DWORD*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v64 + 1;
      ++*(_QWORD*)(a2 + 64);
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = v69;
      v88 = *(_QWORD*)(a2 + 56);
      v87 = *(_QWORD*)(a2 + 64);
      v90 = *(_QWORD*)(a2 + 32);
      v89 = *(_QWORD*)(a2 + 40);
      v55 = v89 == v90;
      v91 = v87 - 1 + v88;
      v92 = v91 >> 10;
      v93 = v91 & 0x3FF;
      v94 = ((v89 - v90) << 7) - 1;
      v95 = *(_QWORD*)(v90 + 8 * v92);
      if (v55) {
        v94 = 0;
      }
      v96 = *(_DWORD*)(v95 + 4 * v93);
      *(_QWORD*)(a2 + 64) = v87 - 1;
      *(_DWORD*)(a2 + 20) = v96;
      if ((unsigned __int64)(v94 - (v87 + v88) + 1) >= 0x800) {
        v97 = *(_QWORD*)(v89 - 8);
        if (v97 != 0) {
          v98 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v98 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v97);
          v89 = *(_QWORD*)(a2 + 40);
        }
        *(_QWORD*)(a2 + 40) = v89 - 8;
      }
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 UnitMastery_7fd6e0(__int64 a1, __int64 a2, int a3)
{
  _WORD* v3;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  signed int v20;
  int v21;
  int v22;
  signed int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  signed int v38;
  int v39;
  int v40;
  int v41;
  signed int v42;
  unsigned int v43;
  int v44;
  signed int v45;
  int v46;
  int v47;
  int v48;
  signed int v49;
  unsigned int v50;
  int v51;
  signed int v52;
  int v53;
  int v54;
  int v55;
  signed int v56;
  unsigned int v57;
  int v58;
  signed int v59;
  int v60;
  int v61;
  int v62;
  signed int v63;
  unsigned int v64;
  int v65;
  signed int v66;
  int v67;
  int v68;
  int v69;
  signed int v70;
  unsigned int v71;
  int v72;
  signed int v73;
  int v74;
  int v75;
  int v76;
  signed int v77;
  unsigned int v78;
  int v79;
  signed int v80;
  int v81;
  int v82;
  int v83;
  signed int v84;
  unsigned int v85;
  int v86;
  signed int v87;
  int v88;
  int v89;
  int v90;
  signed int v91;
  unsigned int v92;
  int v93;
  signed int v94;
  int v95;
  int v96;
  int v97;
  signed int v98;
  unsigned int v99;
  int v100;
  signed int v101;
  int v102;
  int v103;
  int v104;
  signed int v105;
  unsigned int v106;
  int v107;
  signed int v108;
  int v109;
  int v110;
  int v111;
  signed int v112;
  unsigned int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  unsigned int v118;
  int v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  int v124;
  int* v125;
  int v126;
  unsigned __int64 v127;
  int v128;
  __int64 v129;
  signed int v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  signed int v139;
  unsigned int v140;
  int v141;
  __int64 v142;
  __int64 v143;
  int v144;
  int* v145;
  int v146;
  unsigned __int64 v147;
  int v148;
  __int64 v149;
  signed int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  signed int v159;
  unsigned int v160;
  int v161;
  int v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int16 v167;
  __int64 v168;
  int v169;
  int* v170;
  unsigned __int64 v171;
  int v172;
  __int64 v173;
  int v174;
  signed int v175;
  int v176;
  int v177;
  signed int v178;
  unsigned int v179;
  int v180;
  __int64 v181;
  __int64 v182;
  int v183;
  int v184;
  int v185;
  signed int v186;
  int v187;
  int v188;
  signed int v189;
  unsigned int v190;
  int v191;
  __int64 v192;
  __int64 v193;
  int v194;
  int v195;
  int v196;
  signed int v197;
  int v198;
  int v199;
  signed int v200;
  unsigned int v201;
  int v202;
  __int64 v203;
  __int64 v204;
  int v205;
  int v206;
  int v207;
  signed int v208;
  int v209;
  int v210;
  signed int v211;
  unsigned int v212;
  int v213;
  __int64 v214;
  __int64 v215;
  int v216;
  int v217;
  int v218;
  signed int v219;
  int v220;
  int v221;
  signed int v222;
  unsigned int v223;
  int v224;
  __int64 v225;
  __int64 v226;
  int v227;
  int v228;
  int v229;
  signed int v230;
  int v231;
  int v232;
  signed int v233;
  unsigned int v234;
  int v235;
  __int64 v236;
  __int64 v237;
  int v238;
  int v239;
  int v240;
  signed int v241;
  int v242;
  int v243;
  signed int v244;
  unsigned int v245;
  int v246;
  __int64 v247;
  __int64 v248;
  int v249;
  int v250;
  int v251;
  signed int v252;
  int v253;
  int v254;
  signed int v255;
  unsigned int v256;
  int v257;
  __int64 v258;
  __int64 v259;
  int v260;
  int v261;
  int v262;
  signed int v263;
  int v264;
  int v265;
  signed int v266;
  unsigned int v267;
  int v268;
  __int64 v269;
  __int64 v270;
  int v271;
  int v272;
  int v273;
  signed int v274;
  int v275;
  int v276;
  signed int v277;
  unsigned int v278;
  int v279;
  __int64 v280;
  __int64 v281;
  int v282;
  int v283;
  int v284;
  signed int v285;
  int v286;
  int v287;
  signed int v288;
  unsigned int v289;
  int v290;
  __int64 v291;
  __int64 v292;
  int v293;
  int v294;
  int v295;
  signed int v296;
  int v297;
  int v298;
  signed int v299;
  unsigned int v300;
  int v301;
  __int64 v302;
  __int64 v303;
  int v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  unsigned int v310;
  int v311;
  __int64 v312;
  __int64 v313;
  int v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int16 v320;
  int v322;

  *(_QWORD*)(a1 + 2) = 0;
  v3 = (_WORD*)(a1 + 2);
  *(_QWORD*)(a1 + 33) = 0;
  *(_QWORD*)(a1 + 18) = 0;
  *(_QWORD*)(a1 + 26) = 0;
  *(_QWORD*)(a1 + 10) = 0;
  if (*GameData_212c868 != 0) {
    {
      v8 = *(_QWORD*)(a1 + 48);
      __asm__ volatile("" ::"r"(v8));
    }
    v7 = (__int64*)(a1 + 48);
    {
      v9 = (*(_QWORD*)(a1 + 56) - v8) >> 1;
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = (int)((__int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                            *(_QWORD*)(*GameData_212c868 + 64)) >>
                  3);
      __asm__ volatile("" ::"r"(v10));
    }
    if (v10 != v9) {
      if (v10 <= v9) {
        if (v10 < v9) {
          *(_QWORD*)(a1 + 56) = v8 + 2 * v10;
        }
      }
      else {
        UnitMastery_7fe910(v7, v10 - v9);
      }
    }
  }
  {
    v11 = *(_QWORD*)(a1 + 48);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(_QWORD*)(a1 + 56);
    __asm__ volatile("" ::"r"(v12));
  }
  if (v11 != v12) {
    memset_alt2(v11, 0, v12 - v11);
  }
  v13 = (int*)GameData_21d99a8;
  v14 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v14 >= 12) {
    v15 = 12;
  }
  else {
    v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v16 = GameData_21d99a8 + 4LL * v15;
  {
    v17 = *(_DWORD*)(v16 - 4);
    __asm__ volatile("" ::"r"(v17));
  }
  v18 = v17 & (v17 >> 31);
  *(_WORD*)(a1 + 2) = v17 & (v17 >> 31);
  if ((int)v14 <= 0) {
    *(_BYTE*)(a1 + 28) = 0;
    LOBYTE(v26) = 0;
    {
      v27 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v27));
    }
    *(_BYTE*)(a1 + 29) = 0;
    *(_WORD*)(a1 + 4) = v27 & (v27 >> 31);
    {
      v28 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v28));
    }
    *(_BYTE*)(a1 + 30) = 0;
    *(_WORD*)(a1 + 6) = v28 & (v28 >> 31);
    {
      v29 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v29));
    }
    *(_BYTE*)(a1 + 31) = 0;
    *(_WORD*)(a1 + 8) = v29 & (v29 >> 31);
    {
      v30 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v30));
    }
    *(_BYTE*)(a1 + 32) = 0;
    *(_WORD*)(a1 + 10) = v30 & (v30 >> 31);
    {
      v31 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v31));
    }
    *(_BYTE*)(a1 + 33) = 0;
    *(_WORD*)(a1 + 12) = v31 & (v31 >> 31);
    {
      v32 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v32));
    }
    *(_BYTE*)(a1 + 34) = 0;
    *(_WORD*)(a1 + 14) = v32 & (v32 >> 31);
    {
      v33 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v33));
    }
    *(_BYTE*)(a1 + 35) = 0;
    *(_WORD*)(a1 + 16) = v33 & (v33 >> 31);
    {
      v34 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v34));
    }
    *(_BYTE*)(a1 + 36) = 0;
    *(_WORD*)(a1 + 18) = v34 & (v34 >> 31);
    {
      v35 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v35));
    }
    *(_BYTE*)(a1 + 37) = 0;
    *(_WORD*)(a1 + 20) = v35 & (v35 >> 31);
    {
      v36 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v36));
    }
    *(_BYTE*)(a1 + 38) = 0;
    *(_WORD*)(a1 + 22) = v36 & (v36 >> 31);
    {
      v37 = *(_DWORD*)(v16 - 4);
      __asm__ volatile("" ::"r"(v37));
    }
    *(_BYTE*)(a1 + 39) = 0;
    *(_WORD*)(a1 + 24) = v37 & (v37 >> 31);
    *(_WORD*)(a1 + 26) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
  }
  else {
    v19 = v14 - 1;
    v20 = 0;
    {
      v21 = v13[(unsigned int)(v14 - 1)];
      __asm__ volatile("" ::"r"(v21));
    }
    if (v21 >= v18) {
      v21 = v18;
    }
    if (v18 >= *v13) {
      v22 = v21;
    }
    else {
      v22 = *v13;
      __asm__ volatile("" ::"r"(v22));
    }
    v23 = v14;
    while (1) {
      v24 = (unsigned int)(v20 + v23) >> 1;
      {
        v25 = v13[v24];
        __asm__ volatile("" ::"r"(v25));
      }
      if (v22 == v25) {
        break;
      }
      if (v22 < v25) {
        v23 = (unsigned int)(v20 + v23) >> 1;
      }
      else {
        v20 = v24 + 1;
      }
      if (v20 >= v23) {
        goto LABEL_27;
      }
    }
    LOBYTE(v20) = v24 + 1;
  LABEL_27:
    *(_BYTE*)(a1 + 28) = v20;
    v38 = 0;
    {
      v39 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v39));
    }
    *(_WORD*)(a1 + 4) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v40 = v13[v19];
      __asm__ volatile("" ::"r"(v40));
    }
    if (v40 >= v39) {
      v40 = v39;
    }
    if (v39 >= *v13) {
      v41 = v40;
    }
    else {
      v41 = *v13;
      __asm__ volatile("" ::"r"(v41));
    }
    v42 = v14;
    while (1) {
      v43 = (unsigned int)(v38 + v42) >> 1;
      {
        v44 = v13[v43];
        __asm__ volatile("" ::"r"(v44));
      }
      if (v41 == v44) {
        break;
      }
      if (v41 < v44) {
        v42 = (unsigned int)(v38 + v42) >> 1;
      }
      else {
        v38 = v43 + 1;
      }
      if (v38 >= v42) {
        goto LABEL_40;
      }
    }
    LOBYTE(v38) = v43 + 1;
  LABEL_40:
    *(_BYTE*)(a1 + 29) = v38;
    v45 = 0;
    {
      v46 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v46));
    }
    *(_WORD*)(a1 + 6) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v47 = v13[v19];
      __asm__ volatile("" ::"r"(v47));
    }
    if (v47 >= v46) {
      v47 = v46;
    }
    if (v46 >= *v13) {
      v48 = v47;
    }
    else {
      v48 = *v13;
      __asm__ volatile("" ::"r"(v48));
    }
    v49 = v14;
    while (1) {
      v50 = (unsigned int)(v45 + v49) >> 1;
      {
        v51 = v13[v50];
        __asm__ volatile("" ::"r"(v51));
      }
      if (v48 == v51) {
        break;
      }
      if (v48 < v51) {
        v49 = (unsigned int)(v45 + v49) >> 1;
      }
      else {
        v45 = v50 + 1;
      }
      if (v45 >= v49) {
        goto LABEL_53;
      }
    }
    LOBYTE(v45) = v50 + 1;
  LABEL_53:
    *(_BYTE*)(a1 + 30) = v45;
    v52 = 0;
    {
      v53 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v53));
    }
    *(_WORD*)(a1 + 8) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v54 = v13[v19];
      __asm__ volatile("" ::"r"(v54));
    }
    if (v54 >= v53) {
      v54 = v53;
    }
    if (v53 >= *v13) {
      v55 = v54;
    }
    else {
      v55 = *v13;
      __asm__ volatile("" ::"r"(v55));
    }
    v56 = v14;
    while (1) {
      v57 = (unsigned int)(v52 + v56) >> 1;
      {
        v58 = v13[v57];
        __asm__ volatile("" ::"r"(v58));
      }
      if (v55 == v58) {
        break;
      }
      if (v55 < v58) {
        v56 = (unsigned int)(v52 + v56) >> 1;
      }
      else {
        v52 = v57 + 1;
      }
      if (v52 >= v56) {
        goto LABEL_66;
      }
    }
    LOBYTE(v52) = v57 + 1;
  LABEL_66:
    *(_BYTE*)(a1 + 31) = v52;
    v59 = 0;
    {
      v60 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v60));
    }
    *(_WORD*)(a1 + 10) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v61 = v13[v19];
      __asm__ volatile("" ::"r"(v61));
    }
    if (v61 >= v60) {
      v61 = v60;
    }
    if (v60 >= *v13) {
      v62 = v61;
    }
    else {
      v62 = *v13;
      __asm__ volatile("" ::"r"(v62));
    }
    v63 = v14;
    while (1) {
      v64 = (unsigned int)(v59 + v63) >> 1;
      {
        v65 = v13[v64];
        __asm__ volatile("" ::"r"(v65));
      }
      if (v62 == v65) {
        break;
      }
      if (v62 < v65) {
        v63 = (unsigned int)(v59 + v63) >> 1;
      }
      else {
        v59 = v64 + 1;
      }
      if (v59 >= v63) {
        goto LABEL_79;
      }
    }
    LOBYTE(v59) = v64 + 1;
  LABEL_79:
    *(_BYTE*)(a1 + 32) = v59;
    v66 = 0;
    {
      v67 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v67));
    }
    *(_WORD*)(a1 + 12) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v68 = v13[v19];
      __asm__ volatile("" ::"r"(v68));
    }
    if (v68 >= v67) {
      v68 = v67;
    }
    if (v67 >= *v13) {
      v69 = v68;
    }
    else {
      v69 = *v13;
      __asm__ volatile("" ::"r"(v69));
    }
    v70 = v14;
    while (1) {
      v71 = (unsigned int)(v66 + v70) >> 1;
      {
        v72 = v13[v71];
        __asm__ volatile("" ::"r"(v72));
      }
      if (v69 == v72) {
        break;
      }
      if (v69 < v72) {
        v70 = (unsigned int)(v66 + v70) >> 1;
      }
      else {
        v66 = v71 + 1;
      }
      if (v66 >= v70) {
        goto LABEL_92;
      }
    }
    LOBYTE(v66) = v71 + 1;
  LABEL_92:
    *(_BYTE*)(a1 + 33) = v66;
    v73 = 0;
    {
      v74 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v74));
    }
    *(_WORD*)(a1 + 14) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v75 = v13[v19];
      __asm__ volatile("" ::"r"(v75));
    }
    if (v75 >= v74) {
      v75 = v74;
    }
    if (v74 >= *v13) {
      v76 = v75;
    }
    else {
      v76 = *v13;
      __asm__ volatile("" ::"r"(v76));
    }
    v77 = v14;
    while (1) {
      v78 = (unsigned int)(v73 + v77) >> 1;
      {
        v79 = v13[v78];
        __asm__ volatile("" ::"r"(v79));
      }
      if (v76 == v79) {
        break;
      }
      if (v76 < v79) {
        v77 = (unsigned int)(v73 + v77) >> 1;
      }
      else {
        v73 = v78 + 1;
      }
      if (v73 >= v77) {
        goto LABEL_105;
      }
    }
    LOBYTE(v73) = v78 + 1;
  LABEL_105:
    *(_BYTE*)(a1 + 34) = v73;
    v80 = 0;
    {
      v81 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v81));
    }
    *(_WORD*)(a1 + 16) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v82 = v13[v19];
      __asm__ volatile("" ::"r"(v82));
    }
    if (v82 >= v81) {
      v82 = v81;
    }
    if (v81 >= *v13) {
      v83 = v82;
    }
    else {
      v83 = *v13;
      __asm__ volatile("" ::"r"(v83));
    }
    v84 = v14;
    while (1) {
      v85 = (unsigned int)(v80 + v84) >> 1;
      {
        v86 = v13[v85];
        __asm__ volatile("" ::"r"(v86));
      }
      if (v83 == v86) {
        break;
      }
      if (v83 < v86) {
        v84 = (unsigned int)(v80 + v84) >> 1;
      }
      else {
        v80 = v85 + 1;
      }
      if (v80 >= v84) {
        goto LABEL_118;
      }
    }
    LOBYTE(v80) = v85 + 1;
  LABEL_118:
    *(_BYTE*)(a1 + 35) = v80;
    v87 = 0;
    {
      v88 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v88));
    }
    *(_WORD*)(a1 + 18) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v89 = v13[v19];
      __asm__ volatile("" ::"r"(v89));
    }
    if (v89 >= v88) {
      v89 = v88;
    }
    if (v88 >= *v13) {
      v90 = v89;
    }
    else {
      v90 = *v13;
      __asm__ volatile("" ::"r"(v90));
    }
    v91 = v14;
    while (1) {
      v92 = (unsigned int)(v87 + v91) >> 1;
      {
        v93 = v13[v92];
        __asm__ volatile("" ::"r"(v93));
      }
      if (v90 == v93) {
        break;
      }
      if (v90 < v93) {
        v91 = (unsigned int)(v87 + v91) >> 1;
      }
      else {
        v87 = v92 + 1;
      }
      if (v87 >= v91) {
        goto LABEL_131;
      }
    }
    LOBYTE(v87) = v92 + 1;
  LABEL_131:
    *(_BYTE*)(a1 + 36) = v87;
    v94 = 0;
    {
      v95 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v95));
    }
    *(_WORD*)(a1 + 20) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v96 = v13[v19];
      __asm__ volatile("" ::"r"(v96));
    }
    if (v96 >= v95) {
      v96 = v95;
    }
    if (v95 >= *v13) {
      v97 = v96;
    }
    else {
      v97 = *v13;
      __asm__ volatile("" ::"r"(v97));
    }
    v98 = v14;
    while (1) {
      v99 = (unsigned int)(v94 + v98) >> 1;
      {
        v100 = v13[v99];
        __asm__ volatile("" ::"r"(v100));
      }
      if (v97 == v100) {
        break;
      }
      if (v97 < v100) {
        v98 = (unsigned int)(v94 + v98) >> 1;
      }
      else {
        v94 = v99 + 1;
      }
      if (v94 >= v98) {
        goto LABEL_144;
      }
    }
    LOBYTE(v94) = v99 + 1;
  LABEL_144:
    *(_BYTE*)(a1 + 37) = v94;
    v101 = 0;
    {
      v102 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v102));
    }
    *(_WORD*)(a1 + 22) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v103 = v13[v19];
      __asm__ volatile("" ::"r"(v103));
    }
    if (v103 >= v102) {
      v103 = v102;
    }
    if (v102 >= *v13) {
      v104 = v103;
    }
    else {
      v104 = *v13;
      __asm__ volatile("" ::"r"(v104));
    }
    v105 = v14;
    while (1) {
      v106 = (unsigned int)(v101 + v105) >> 1;
      {
        v107 = v13[v106];
        __asm__ volatile("" ::"r"(v107));
      }
      if (v104 == v107) {
        break;
      }
      if (v104 < v107) {
        v105 = (unsigned int)(v101 + v105) >> 1;
      }
      else {
        v101 = v106 + 1;
      }
      if (v101 >= v105) {
        goto LABEL_157;
      }
    }
    LOBYTE(v101) = v106 + 1;
  LABEL_157:
    *(_BYTE*)(a1 + 38) = v101;
    v108 = 0;
    {
      v109 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v109));
    }
    *(_WORD*)(a1 + 24) = *(_WORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
    {
      v110 = v13[v19];
      __asm__ volatile("" ::"r"(v110));
    }
    if (v110 >= v109) {
      v110 = v109;
    }
    if (v109 >= *v13) {
      v111 = v110;
    }
    else {
      v111 = *v13;
      __asm__ volatile("" ::"r"(v111));
    }
    v112 = v14;
    while (1) {
      v113 = (unsigned int)(v108 + v112) >> 1;
      {
        v114 = v13[v113];
        __asm__ volatile("" ::"r"(v114));
      }
      if (v111 == v114) {
        break;
      }
      if (v111 < v114) {
        v112 = (unsigned int)(v108 + v112) >> 1;
      }
      else {
        v108 = v113 + 1;
      }
      if (v108 >= v112) {
        goto LABEL_170;
      }
    }
    LOBYTE(v108) = v113 + 1;
  LABEL_170:
    *(_BYTE*)(a1 + 39) = v108;
    v26 = 0;
    {
      v115 = *(_DWORD*)(v16 - 4) & (*(int*)(v16 - 4) >> 31);
      __asm__ volatile("" ::"r"(v115));
    }
    *(_WORD*)(a1 + 26) = v115;
    {
      v116 = v13[v19];
      __asm__ volatile("" ::"r"(v116));
    }
    if (v116 >= v115) {
      v116 = v115;
    }
    if (v115 >= *v13) {
      v117 = v116;
    }
    else {
      v117 = *v13;
      __asm__ volatile("" ::"r"(v117));
    }
    while (1) {
      v118 = (unsigned int)(v26 + v14) >> 1;
      {
        v119 = v13[v118];
        __asm__ volatile("" ::"r"(v119));
      }
      if (v117 == v119) {
        break;
      }
      if (v117 < v119) {
        LODWORD(v14) = (unsigned int)(v26 + v14) >> 1;
      }
      else {
        v26 = v118 + 1;
      }
      if (v26 >= (int)v14) {
        goto LABEL_182;
      }
    }
    LOBYTE(v26) = v118 + 1;
  }
LABEL_182:
  *(_BYTE*)(a1 + 40) = v26;
  v120 = a1 + 28;
  v322 = 0;
  (*(void (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(a2, &v322);
  if (a3 < 34) {
    {
      v142 = *(int*)(a2 + 20);
      __asm__ volatile("" ::"r"(v142));
    }
    {
      v143 = *(_QWORD*)(a2 + 8);
      __asm__ volatile("" ::"r"(v143));
    }
    *(_DWORD*)(a2 + 20) = v142 + 1;
    {
      v144 = *(unsigned __int8*)(v143 + v142);
      __asm__ volatile("" ::"r"(v144));
    }
    if (a3 <= 25) {
      *(_DWORD*)(a2 + 20) = v142 + 2;
      {
        v169 = v144 | (*(unsigned __int8*)(v143 + v142 + 1) << 8);
        __asm__ volatile("" ::"r"(v169));
      }
      v170 = (int*)GameData_21d99a8;
      v171 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v171 >= 12) {
        v172 = 12;
      }
      else {
        v172 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v173 = GameData_21d99a8 + 4LL * v172;
      {
        v174 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v174));
      }
      if (v174 >= v169) {
        v174 = v169;
      }
      *v3 = v174;
      if ((int)v171 < 1) {
        LOBYTE(v175) = 0;
      }
      else {
        v175 = 0;
        {
          v176 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v176));
        }
        if (v176 >= v174) {
          v176 = v174;
        }
        if (v174 >= *v170) {
          v177 = v176;
        }
        else {
          v177 = *v170;
          __asm__ volatile("" ::"r"(v177));
        }
        v178 = v171;
        while (1) {
          v179 = (unsigned int)(v175 + v178) >> 1;
          {
            v180 = v170[v179];
            __asm__ volatile("" ::"r"(v180));
          }
          if (v177 == v180) {
            break;
          }
          if (v177 < v180) {
            v178 = (unsigned int)(v175 + v178) >> 1;
          }
          else {
            v175 = v179 + 1;
          }
          if (v175 >= v178) {
            goto LABEL_257;
          }
        }
        LOBYTE(v175) = v179 + 1;
      }
    LABEL_257:
      *(_BYTE*)(a1 + 28) = v175;
      {
        v181 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v181));
      }
      {
        v182 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v182));
      }
      *(_DWORD*)(a2 + 20) = v181 + 1;
      {
        v183 = *(unsigned __int8*)(v182 + v181);
        __asm__ volatile("" ::"r"(v183));
      }
      *(_DWORD*)(a2 + 20) = v181 + 2;
      {
        v184 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v184));
      }
      {
        v185 = v183 | (*(unsigned __int8*)(v182 + v181 + 1) << 8);
        __asm__ volatile("" ::"r"(v185));
      }
      if (v184 >= v185) {
        v184 = v185;
      }
      *(_WORD*)(a1 + 4) = v184;
      if ((int)v171 < 1) {
        LOBYTE(v186) = 0;
      }
      else {
        v186 = 0;
        {
          v187 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v187));
        }
        if (v187 >= v184) {
          v187 = v184;
        }
        if (v184 >= *v170) {
          v188 = v187;
        }
        else {
          v188 = *v170;
          __asm__ volatile("" ::"r"(v188));
        }
        v189 = v171;
        while (1) {
          v190 = (unsigned int)(v186 + v189) >> 1;
          {
            v191 = v170[v190];
            __asm__ volatile("" ::"r"(v191));
          }
          if (v188 == v191) {
            break;
          }
          if (v188 < v191) {
            v189 = (unsigned int)(v186 + v189) >> 1;
          }
          else {
            v186 = v190 + 1;
          }
          if (v186 >= v189) {
            goto LABEL_274;
          }
        }
        LOBYTE(v186) = v190 + 1;
      }
    LABEL_274:
      *(_BYTE*)(a1 + 29) = v186;
      {
        v192 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v192));
      }
      {
        v193 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v193));
      }
      *(_DWORD*)(a2 + 20) = v192 + 1;
      {
        v194 = *(unsigned __int8*)(v193 + v192);
        __asm__ volatile("" ::"r"(v194));
      }
      *(_DWORD*)(a2 + 20) = v192 + 2;
      {
        v195 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v195));
      }
      {
        v196 = v194 | (*(unsigned __int8*)(v193 + v192 + 1) << 8);
        __asm__ volatile("" ::"r"(v196));
      }
      if (v195 >= v196) {
        v195 = v196;
      }
      *(_WORD*)(a1 + 6) = v195;
      if ((int)v171 < 1) {
        LOBYTE(v197) = 0;
      }
      else {
        v197 = 0;
        {
          v198 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v198));
        }
        if (v198 >= v195) {
          v198 = v195;
        }
        if (v195 >= *v170) {
          v199 = v198;
        }
        else {
          v199 = *v170;
          __asm__ volatile("" ::"r"(v199));
        }
        v200 = v171;
        while (1) {
          v201 = (unsigned int)(v197 + v200) >> 1;
          {
            v202 = v170[v201];
            __asm__ volatile("" ::"r"(v202));
          }
          if (v199 == v202) {
            break;
          }
          if (v199 < v202) {
            v200 = (unsigned int)(v197 + v200) >> 1;
          }
          else {
            v197 = v201 + 1;
          }
          if (v197 >= v200) {
            goto LABEL_291;
          }
        }
        LOBYTE(v197) = v201 + 1;
      }
    LABEL_291:
      *(_BYTE*)(a1 + 30) = v197;
      {
        v203 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v203));
      }
      {
        v204 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v204));
      }
      *(_DWORD*)(a2 + 20) = v203 + 1;
      {
        v205 = *(unsigned __int8*)(v204 + v203);
        __asm__ volatile("" ::"r"(v205));
      }
      *(_DWORD*)(a2 + 20) = v203 + 2;
      {
        v206 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v206));
      }
      {
        v207 = v205 | (*(unsigned __int8*)(v204 + v203 + 1) << 8);
        __asm__ volatile("" ::"r"(v207));
      }
      if (v206 >= v207) {
        v206 = v207;
      }
      *(_WORD*)(a1 + 8) = v206;
      if ((int)v171 < 1) {
        LOBYTE(v208) = 0;
      }
      else {
        v208 = 0;
        {
          v209 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v209));
        }
        if (v209 >= v206) {
          v209 = v206;
        }
        if (v206 >= *v170) {
          v210 = v209;
        }
        else {
          v210 = *v170;
          __asm__ volatile("" ::"r"(v210));
        }
        v211 = v171;
        while (1) {
          v212 = (unsigned int)(v208 + v211) >> 1;
          {
            v213 = v170[v212];
            __asm__ volatile("" ::"r"(v213));
          }
          if (v210 == v213) {
            break;
          }
          if (v210 < v213) {
            v211 = (unsigned int)(v208 + v211) >> 1;
          }
          else {
            v208 = v212 + 1;
          }
          if (v208 >= v211) {
            goto LABEL_308;
          }
        }
        LOBYTE(v208) = v212 + 1;
      }
    LABEL_308:
      *(_BYTE*)(a1 + 31) = v208;
      {
        v214 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v214));
      }
      {
        v215 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v215));
      }
      *(_DWORD*)(a2 + 20) = v214 + 1;
      {
        v216 = *(unsigned __int8*)(v215 + v214);
        __asm__ volatile("" ::"r"(v216));
      }
      *(_DWORD*)(a2 + 20) = v214 + 2;
      {
        v217 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v217));
      }
      {
        v218 = v216 | (*(unsigned __int8*)(v215 + v214 + 1) << 8);
        __asm__ volatile("" ::"r"(v218));
      }
      if (v217 >= v218) {
        v217 = v218;
      }
      *(_WORD*)(a1 + 10) = v217;
      if ((int)v171 < 1) {
        LOBYTE(v219) = 0;
      }
      else {
        v219 = 0;
        {
          v220 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v220));
        }
        if (v220 >= v217) {
          v220 = v217;
        }
        if (v217 >= *v170) {
          v221 = v220;
        }
        else {
          v221 = *v170;
          __asm__ volatile("" ::"r"(v221));
        }
        v222 = v171;
        while (1) {
          v223 = (unsigned int)(v219 + v222) >> 1;
          {
            v224 = v170[v223];
            __asm__ volatile("" ::"r"(v224));
          }
          if (v221 == v224) {
            break;
          }
          if (v221 < v224) {
            v222 = (unsigned int)(v219 + v222) >> 1;
          }
          else {
            v219 = v223 + 1;
          }
          if (v219 >= v222) {
            goto LABEL_325;
          }
        }
        LOBYTE(v219) = v223 + 1;
      }
    LABEL_325:
      *(_BYTE*)(a1 + 32) = v219;
      {
        v225 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v225));
      }
      {
        v226 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v226));
      }
      *(_DWORD*)(a2 + 20) = v225 + 1;
      {
        v227 = *(unsigned __int8*)(v226 + v225);
        __asm__ volatile("" ::"r"(v227));
      }
      *(_DWORD*)(a2 + 20) = v225 + 2;
      {
        v228 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v228));
      }
      {
        v229 = v227 | (*(unsigned __int8*)(v226 + v225 + 1) << 8);
        __asm__ volatile("" ::"r"(v229));
      }
      if (v228 >= v229) {
        v228 = v229;
      }
      *(_WORD*)(a1 + 12) = v228;
      if ((int)v171 < 1) {
        LOBYTE(v230) = 0;
      }
      else {
        v230 = 0;
        {
          v231 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v231));
        }
        if (v231 >= v228) {
          v231 = v228;
        }
        if (v228 >= *v170) {
          v232 = v231;
        }
        else {
          v232 = *v170;
          __asm__ volatile("" ::"r"(v232));
        }
        v233 = v171;
        while (1) {
          v234 = (unsigned int)(v230 + v233) >> 1;
          {
            v235 = v170[v234];
            __asm__ volatile("" ::"r"(v235));
          }
          if (v232 == v235) {
            break;
          }
          if (v232 < v235) {
            v233 = (unsigned int)(v230 + v233) >> 1;
          }
          else {
            v230 = v234 + 1;
          }
          if (v230 >= v233) {
            goto LABEL_342;
          }
        }
        LOBYTE(v230) = v234 + 1;
      }
    LABEL_342:
      *(_BYTE*)(a1 + 33) = v230;
      {
        v236 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v236));
      }
      {
        v237 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v237));
      }
      *(_DWORD*)(a2 + 20) = v236 + 1;
      {
        v238 = *(unsigned __int8*)(v237 + v236);
        __asm__ volatile("" ::"r"(v238));
      }
      *(_DWORD*)(a2 + 20) = v236 + 2;
      {
        v239 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v239));
      }
      {
        v240 = v238 | (*(unsigned __int8*)(v237 + v236 + 1) << 8);
        __asm__ volatile("" ::"r"(v240));
      }
      if (v239 >= v240) {
        v239 = v240;
      }
      *(_WORD*)(a1 + 14) = v239;
      if ((int)v171 < 1) {
        LOBYTE(v241) = 0;
      }
      else {
        v241 = 0;
        {
          v242 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v242));
        }
        if (v242 >= v239) {
          v242 = v239;
        }
        if (v239 >= *v170) {
          v243 = v242;
        }
        else {
          v243 = *v170;
          __asm__ volatile("" ::"r"(v243));
        }
        v244 = v171;
        while (1) {
          v245 = (unsigned int)(v241 + v244) >> 1;
          {
            v246 = v170[v245];
            __asm__ volatile("" ::"r"(v246));
          }
          if (v243 == v246) {
            break;
          }
          if (v243 < v246) {
            v244 = (unsigned int)(v241 + v244) >> 1;
          }
          else {
            v241 = v245 + 1;
          }
          if (v241 >= v244) {
            goto LABEL_359;
          }
        }
        LOBYTE(v241) = v245 + 1;
      }
    LABEL_359:
      *(_BYTE*)(a1 + 34) = v241;
      {
        v247 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v247));
      }
      {
        v248 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v248));
      }
      *(_DWORD*)(a2 + 20) = v247 + 1;
      {
        v249 = *(unsigned __int8*)(v248 + v247);
        __asm__ volatile("" ::"r"(v249));
      }
      *(_DWORD*)(a2 + 20) = v247 + 2;
      {
        v250 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v250));
      }
      {
        v251 = v249 | (*(unsigned __int8*)(v248 + v247 + 1) << 8);
        __asm__ volatile("" ::"r"(v251));
      }
      if (v250 >= v251) {
        v250 = v251;
      }
      *(_WORD*)(a1 + 16) = v250;
      if ((int)v171 < 1) {
        LOBYTE(v252) = 0;
      }
      else {
        v252 = 0;
        {
          v253 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v253));
        }
        if (v253 >= v250) {
          v253 = v250;
        }
        if (v250 >= *v170) {
          v254 = v253;
        }
        else {
          v254 = *v170;
          __asm__ volatile("" ::"r"(v254));
        }
        v255 = v171;
        while (1) {
          v256 = (unsigned int)(v252 + v255) >> 1;
          {
            v257 = v170[v256];
            __asm__ volatile("" ::"r"(v257));
          }
          if (v254 == v257) {
            break;
          }
          if (v254 < v257) {
            v255 = (unsigned int)(v252 + v255) >> 1;
          }
          else {
            v252 = v256 + 1;
          }
          if (v252 >= v255) {
            goto LABEL_376;
          }
        }
        LOBYTE(v252) = v256 + 1;
      }
    LABEL_376:
      *(_BYTE*)(a1 + 35) = v252;
      {
        v258 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v258));
      }
      {
        v259 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v259));
      }
      *(_DWORD*)(a2 + 20) = v258 + 1;
      {
        v260 = *(unsigned __int8*)(v259 + v258);
        __asm__ volatile("" ::"r"(v260));
      }
      *(_DWORD*)(a2 + 20) = v258 + 2;
      {
        v261 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v261));
      }
      {
        v262 = v260 | (*(unsigned __int8*)(v259 + v258 + 1) << 8);
        __asm__ volatile("" ::"r"(v262));
      }
      if (v261 >= v262) {
        v261 = v262;
      }
      *(_WORD*)(a1 + 18) = v261;
      if ((int)v171 < 1) {
        LOBYTE(v263) = 0;
      }
      else {
        v263 = 0;
        {
          v264 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v264));
        }
        if (v264 >= v261) {
          v264 = v261;
        }
        if (v261 >= *v170) {
          v265 = v264;
        }
        else {
          v265 = *v170;
          __asm__ volatile("" ::"r"(v265));
        }
        v266 = v171;
        while (1) {
          v267 = (unsigned int)(v263 + v266) >> 1;
          {
            v268 = v170[v267];
            __asm__ volatile("" ::"r"(v268));
          }
          if (v265 == v268) {
            break;
          }
          if (v265 < v268) {
            v266 = (unsigned int)(v263 + v266) >> 1;
          }
          else {
            v263 = v267 + 1;
          }
          if (v263 >= v266) {
            goto LABEL_393;
          }
        }
        LOBYTE(v263) = v267 + 1;
      }
    LABEL_393:
      *(_BYTE*)(a1 + 36) = v263;
      {
        v269 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v269));
      }
      {
        v270 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v270));
      }
      *(_DWORD*)(a2 + 20) = v269 + 1;
      {
        v271 = *(unsigned __int8*)(v270 + v269);
        __asm__ volatile("" ::"r"(v271));
      }
      *(_DWORD*)(a2 + 20) = v269 + 2;
      {
        v272 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v272));
      }
      {
        v273 = v271 | (*(unsigned __int8*)(v270 + v269 + 1) << 8);
        __asm__ volatile("" ::"r"(v273));
      }
      if (v272 >= v273) {
        v272 = v273;
      }
      *(_WORD*)(a1 + 20) = v272;
      if ((int)v171 < 1) {
        LOBYTE(v274) = 0;
      }
      else {
        v274 = 0;
        {
          v275 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v275));
        }
        if (v275 >= v272) {
          v275 = v272;
        }
        if (v272 >= *v170) {
          v276 = v275;
        }
        else {
          v276 = *v170;
          __asm__ volatile("" ::"r"(v276));
        }
        v277 = v171;
        while (1) {
          v278 = (unsigned int)(v274 + v277) >> 1;
          {
            v279 = v170[v278];
            __asm__ volatile("" ::"r"(v279));
          }
          if (v276 == v279) {
            break;
          }
          if (v276 < v279) {
            v277 = (unsigned int)(v274 + v277) >> 1;
          }
          else {
            v274 = v278 + 1;
          }
          if (v274 >= v277) {
            goto LABEL_410;
          }
        }
        LOBYTE(v274) = v278 + 1;
      }
    LABEL_410:
      *(_BYTE*)(a1 + 37) = v274;
      {
        v280 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v280));
      }
      {
        v281 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v281));
      }
      *(_DWORD*)(a2 + 20) = v280 + 1;
      {
        v282 = *(unsigned __int8*)(v281 + v280);
        __asm__ volatile("" ::"r"(v282));
      }
      *(_DWORD*)(a2 + 20) = v280 + 2;
      {
        v283 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v283));
      }
      {
        v284 = v282 | (*(unsigned __int8*)(v281 + v280 + 1) << 8);
        __asm__ volatile("" ::"r"(v284));
      }
      if (v283 >= v284) {
        v283 = v284;
      }
      *(_WORD*)(a1 + 22) = v283;
      if ((int)v171 < 1) {
        LOBYTE(v285) = 0;
      }
      else {
        v285 = 0;
        {
          v286 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v286));
        }
        if (v286 >= v283) {
          v286 = v283;
        }
        if (v283 >= *v170) {
          v287 = v286;
        }
        else {
          v287 = *v170;
          __asm__ volatile("" ::"r"(v287));
        }
        v288 = v171;
        while (1) {
          v289 = (unsigned int)(v285 + v288) >> 1;
          {
            v290 = v170[v289];
            __asm__ volatile("" ::"r"(v290));
          }
          if (v287 == v290) {
            break;
          }
          if (v287 < v290) {
            v288 = (unsigned int)(v285 + v288) >> 1;
          }
          else {
            v285 = v289 + 1;
          }
          if (v285 >= v288) {
            goto LABEL_427;
          }
        }
        LOBYTE(v285) = v289 + 1;
      }
    LABEL_427:
      *(_BYTE*)(a1 + 38) = v285;
      {
        v291 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v291));
      }
      {
        v292 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v292));
      }
      *(_DWORD*)(a2 + 20) = v291 + 1;
      {
        v293 = *(unsigned __int8*)(v292 + v291);
        __asm__ volatile("" ::"r"(v293));
      }
      *(_DWORD*)(a2 + 20) = v291 + 2;
      {
        v294 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v294));
      }
      {
        v295 = v293 | (*(unsigned __int8*)(v292 + v291 + 1) << 8);
        __asm__ volatile("" ::"r"(v295));
      }
      if (v294 >= v295) {
        v294 = v295;
      }
      *(_WORD*)(a1 + 24) = v294;
      if ((int)v171 < 1) {
        LOBYTE(v296) = 0;
      }
      else {
        v296 = 0;
        {
          v297 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v297));
        }
        if (v297 >= v294) {
          v297 = v294;
        }
        if (v294 >= *v170) {
          v298 = v297;
        }
        else {
          v298 = *v170;
          __asm__ volatile("" ::"r"(v298));
        }
        v299 = v171;
        while (1) {
          v300 = (unsigned int)(v296 + v299) >> 1;
          {
            v301 = v170[v300];
            __asm__ volatile("" ::"r"(v301));
          }
          if (v298 == v301) {
            break;
          }
          if (v298 < v301) {
            v299 = (unsigned int)(v296 + v299) >> 1;
          }
          else {
            v296 = v300 + 1;
          }
          if (v296 >= v299) {
            goto LABEL_444;
          }
        }
        LOBYTE(v296) = v300 + 1;
      }
    LABEL_444:
      *(_BYTE*)(a1 + 39) = v296;
      {
        v302 = *(int*)(a2 + 20);
        __asm__ volatile("" ::"r"(v302));
      }
      {
        v303 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v303));
      }
      *(_DWORD*)(a2 + 20) = v302 + 1;
      {
        v304 = *(unsigned __int8*)(v303 + v302);
        __asm__ volatile("" ::"r"(v304));
      }
      *(_DWORD*)(a2 + 20) = v302 + 2;
      {
        v305 = *(_DWORD*)(v173 - 4);
        __asm__ volatile("" ::"r"(v305));
      }
      {
        v306 = v304 | (*(unsigned __int8*)(v303 + v302 + 1) << 8);
        __asm__ volatile("" ::"r"(v306));
      }
      if (v305 < v306) {
        v306 = v305;
      }
      *(_WORD*)(a1 + 26) = v306;
      if ((int)v171 < 1) {
        *(_BYTE*)(a1 + 40) = 0;
      }
      else {
        v307 = 0;
        {
          v308 = v170[(unsigned int)(v171 - 1)];
          __asm__ volatile("" ::"r"(v308));
        }
        if (v308 >= v306) {
          v308 = v306;
        }
        if (v306 >= *v170) {
          v309 = v308;
        }
        else {
          v309 = *v170;
          __asm__ volatile("" ::"r"(v309));
        }
        while (1) {
          v310 = (unsigned int)(v307 + v171) >> 1;
          {
            v311 = v170[v310];
            __asm__ volatile("" ::"r"(v311));
          }
          if (v309 == v311) {
            break;
          }
          if (v309 < v311) {
            LODWORD(v171) = (unsigned int)(v307 + v171) >> 1;
          }
          else {
            v307 = v310 + 1;
          }
          if (v307 >= (int)v171) {
            goto LABEL_460;
          }
        }
        LOBYTE(v307) = v310 + 1;
      LABEL_460:
        *(_BYTE*)(a1 + 40) = v307;
      }
    }
    else if (*(_BYTE*)(v143 + v142) != 0) {
      v145 = (int*)GameData_21d99a8;
      v146 = 0;
      v147 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v147 >= 12) {
        v148 = 12;
      }
      else {
        v148 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v149 = GameData_21d99a8 + 4LL * v148;
      do {
        {
          v151 = *(int*)(a2 + 20);
          __asm__ volatile("" ::"r"(v151));
        }
        {
          v152 = *(_QWORD*)(a2 + 8);
          __asm__ volatile("" ::"r"(v152));
        }
        *(_DWORD*)(a2 + 20) = v151 + 1;
        {
          v153 = *(unsigned __int8*)(v152 + v151);
          __asm__ volatile("" ::"r"(v153));
        }
        *(_DWORD*)(a2 + 20) = v151 + 2;
        {
          v154 = *(unsigned __int8*)(v152 + v151 + 1);
          __asm__ volatile("" ::"r"(v154));
        }
        *(_DWORD*)(a2 + 20) = v151 + 3;
        {
          v155 = v154 | (*(unsigned __int8*)(v152 + v151 + 2) << 8);
          __asm__ volatile("" ::"r"(v155));
        }
        {
          v156 = *(_DWORD*)(v149 - 4);
          __asm__ volatile("" ::"r"(v156));
        }
        if (v156 >= v155) {
          v156 = v155;
        }
        v3[v153] = v156;
        if ((int)v147 < 1) {
          LOBYTE(v150) = 0;
        }
        else {
          {
            v157 = v145[(unsigned int)(v147 - 1)];
            __asm__ volatile("" ::"r"(v157));
          }
          v150 = 0;
          if (v157 >= v156) {
            v157 = v156;
          }
          if (v156 >= *v145) {
            v158 = v157;
          }
          else {
            v158 = *v145;
            __asm__ volatile("" ::"r"(v158));
          }
          v159 = v147;
          while (1) {
            v160 = (unsigned int)(v150 + v159) >> 1;
            {
              v161 = v145[v160];
              __asm__ volatile("" ::"r"(v161));
            }
            if (v158 == v161) {
              break;
            }
            if (v158 < v161) {
              v159 = (unsigned int)(v150 + v159) >> 1;
            }
            else {
              v150 = v160 + 1;
            }
            if (v150 >= v159) {
              goto LABEL_213;
            }
          }
          LOBYTE(v150) = v160 + 1;
        }
      LABEL_213:
        ++v146;
        *(_BYTE*)(v120 + v153) = v150;
      } while (v146 != v144);
    }
    {
      v312 = *(int*)(a2 + 20);
      __asm__ volatile("" ::"r"(v312));
    }
    *(_DWORD*)(a2 + 20) = v312 + 1;
    {
      v313 = *(_QWORD*)(a2 + 8);
      __asm__ volatile("" ::"r"(v313));
    }
    {
      v314 = *(unsigned __int8*)(v313 + v312);
      __asm__ volatile("" ::"r"(v314));
    }
    if (*(_BYTE*)(v313 + v312) != 0) {
      do {
        while (1) {
          v315 = GameRoutine_6e2b60_alt1(a2);
          if (v315 != 0) {
            break;
          }
          *(_DWORD*)(a2 + 20) += 2;
          if (--v314 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        {
          v316 = *(int*)(a2 + 20);
          __asm__ volatile("" ::"r"(v316));
        }
        {
          v317 = *(_QWORD*)(a2 + 8);
          __asm__ volatile("" ::"r"(v317));
        }
        {
          v318 = *(unsigned __int16*)(v315 + 16);
          __asm__ volatile("" ::"r"(v318));
        }
        {
          v319 = *(_QWORD*)(a1 + 48);
          __asm__ volatile("" ::"r"(v319));
        }
        *(_DWORD*)(a2 + 20) = v316 + 1;
        {
          v320 = *(unsigned __int8*)(v317 + v316);
          __asm__ volatile("" ::"r"(v320));
        }
        *(_DWORD*)(a2 + 20) = v316 + 2;
        *(_WORD*)(v319 + 2 * v318) =
            v320 | (*(unsigned __int8*)(v317 + v316 + 1) << 8);
        --v314;
      } while (v314 != 0);
    }
  }
  else {
    {
      v121 = *(int*)(a2 + 20);
      __asm__ volatile("" ::"r"(v121));
    }
    {
      v122 = *(_QWORD*)(a2 + 8);
      __asm__ volatile("" ::"r"(v122));
    }
    v123 = v121 + 1;
    *(_DWORD*)(a2 + 20) = v121 + 1;
    {
      v124 = *(unsigned __int8*)(v122 + v121);
      __asm__ volatile("" ::"r"(v124));
    }
    if (v124 != 0) {
      v125 = (int*)GameData_21d99a8;
      v126 = 0;
      v127 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v127 >= 12) {
        v128 = 12;
      }
      else {
        v128 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v129 = GameData_21d99a8 + 4LL * v128;
      do {
        {
          v131 = *(int*)(a2 + 20);
          __asm__ volatile("" ::"r"(v131));
        }
        {
          v132 = *(_QWORD*)(a2 + 8);
          __asm__ volatile("" ::"r"(v132));
        }
        *(_DWORD*)(a2 + 20) = v131 + 1;
        {
          v133 = *(unsigned __int8*)(v132 + v131);
          __asm__ volatile("" ::"r"(v133));
        }
        *(_DWORD*)(a2 + 20) = v131 + 2;
        {
          v134 = *(unsigned __int8*)(v132 + v131 + 1);
          __asm__ volatile("" ::"r"(v134));
        }
        *(_DWORD*)(a2 + 20) = v131 + 3;
        {
          v135 = v134 | (*(unsigned __int8*)(v132 + v131 + 2) << 8);
          __asm__ volatile("" ::"r"(v135));
        }
        {
          v136 = *(_DWORD*)(v129 - 4);
          __asm__ volatile("" ::"r"(v136));
        }
        if (v136 >= v135) {
          v136 = v135;
        }
        v3[v133] = v136;
        if ((int)v127 < 1) {
          LOBYTE(v130) = 0;
        }
        else {
          {
            v137 = v125[(unsigned int)(v127 - 1)];
            __asm__ volatile("" ::"r"(v137));
          }
          v130 = 0;
          if (v137 >= v136) {
            v137 = v136;
          }
          if (v136 >= *v125) {
            v138 = v137;
          }
          else {
            v138 = *v125;
            __asm__ volatile("" ::"r"(v138));
          }
          v139 = v127;
          while (1) {
            v140 = (unsigned int)(v130 + v139) >> 1;
            {
              v141 = v125[v140];
              __asm__ volatile("" ::"r"(v141));
            }
            if (v138 == v141) {
              break;
            }
            if (v138 < v141) {
              v139 = (unsigned int)(v130 + v139) >> 1;
            }
            else {
              v130 = v140 + 1;
            }
            if (v130 >= v139) {
              goto LABEL_189;
            }
          }
          LOBYTE(v130) = v140 + 1;
        }
      LABEL_189:
        ++v126;
        *(_BYTE*)(v120 + v133) = v130;
      } while (v126 != v124);
      {
        v123 = *(_DWORD*)(a2 + 20);
        __asm__ volatile("" ::"r"(v123));
      }
      {
        v122 = *(_QWORD*)(a2 + 8);
        __asm__ volatile("" ::"r"(v122));
      }
    }
    *(_DWORD*)(a2 + 20) = v123 + 1;
    {
      v162 = *(unsigned __int8*)(v122 + v123);
      __asm__ volatile("" ::"r"(v162));
    }
    if (*(_BYTE*)(v122 + v123) != 0) {
      do {
        while (1) {
          v168 = GameRoutine_6e2a20_alt1(a2);
          if (v168 == 0) {
            break;
          }
          {
            v163 = *(int*)(a2 + 20);
            __asm__ volatile("" ::"r"(v163));
          }
          {
            v164 = *(_QWORD*)(a2 + 8);
            __asm__ volatile("" ::"r"(v164));
          }
          {
            v165 = *(unsigned __int16*)(v168 + 16);
            __asm__ volatile("" ::"r"(v165));
          }
          {
            v166 = *(_QWORD*)(a1 + 48);
            __asm__ volatile("" ::"r"(v166));
          }
          *(_DWORD*)(a2 + 20) = v163 + 1;
          {
            v167 = *(unsigned __int8*)(v164 + v163);
            __asm__ volatile("" ::"r"(v167));
          }
          *(_DWORD*)(a2 + 20) = v163 + 2;
          *(_WORD*)(v166 + 2 * v165) =
              v167 | (*(unsigned __int8*)(v164 + v163 + 1) << 8);
          if (--v162 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        *(_DWORD*)(a2 + 20) += 2;
        --v162;
      } while (v162 != 0);
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

void UnitMastery_7fe910(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  signed __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = a1[1];
  v2 = a1[2];
  if (a2 <= (v2 - v3) >> 1) {
    if (a2 != 0) {
      memset_alt2(a1[1], 0, 2 * a2);
      v3 += 2 * a2;
    }
    a1[1] = v3;
  }
  else {
    v6 = *a1;
    v7 = v3 - *a1;
    v8 = v7 >> 1;
    v9 = (v7 >> 1) + a2;
    if (v9 < 0) {
      GameRoutine_7fb7a0();
    }
    v10 = v2 - v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 > v9) {
      v9 = v10;
    }
    if (v10 >= 0x7FFFFFFFFFFFFFFELL) {
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 < 0) {
        GameRoutine_60a210();
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 2 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v7;
    v15 = v13 + 2 * v12;
    memset_alt2(v13 + v7, 0, 2 * a2);
    memcpy(v14 - 2 * v8, v6, v7);
    *a1 = v14 - 2 * v8;
    a1[1] = v14 + 2 * a2;
    a1[2] = v15;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v16, v6);
    }
  }
}

__int64 game_UnitMastery_GetMaxJobRank_lambda0_Invoke(__int64 result,
                                                      __int64 a2, _WORD* a3)
{
  _BYTE* v3;
  unsigned int v4;

  if ((*a3 & 0x400) != 0) {
    v3 = *(_BYTE**)(result + 8);
    v4 = *(unsigned __int8*)(*(_QWORD*)a2 + 49LL);
    if ((unsigned __int8)*v3 > v4) {
      LOBYTE(v4) = *v3;
    }
    *v3 = v4;
  }
  return result;
}

__int64 UnitMastery_7febc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64 v6;

  GameData_21da328 = 0;
  GameData_21da320 = 0;
  GameData_21da318 = 0;
  GameData_21da2ea = 0;
  GameData_21da2f2 = 0;
  GameData_21da2fa = 0;
  GameData_21da302 = 0;
  *(__int64*)((char*)&GameData_21da302 + 7) = 0;
  if (GameData_21c99c0 != 0) {
    v6 = *(_QWORD*)(GameData_21c99c0 + 72) - *(_QWORD*)(GameData_21c99c0 + 64);
    if ((unsigned int)((unsigned __int64)v6 >> 3) != 0) {
      GameRoutine_7fe910_alt1(&GameData_21da318, (int)(v6 >> 3), a3, a4, a5,
                              a6);
      if (GameData_21da318 != GameData_21da320) {
        memset_alt1(GameData_21da318, 0, GameData_21da320 - GameData_21da318);
      }
    }
  }
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
