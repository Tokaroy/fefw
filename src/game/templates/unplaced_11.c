#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* wld_map_c1f5e0(float*, unsigned __int8*, char*);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_a85710(__int64 result);
__int64 GameRoutine_c380b0(__int64);
__int64 GameRoutine_c4e8c0(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64, __int64, char);
__int64 GameRoutine_c55ca0(_QWORD*);
__int64 ObjectBuildCreate_c1b700(__int64, __int64, __int64, __int64, __int64,
                                 __int64, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_c37860(__int64, __int64, unsigned __int64, __int64,
                   unsigned __int64, __int64, unsigned __int64, __int64,
                   __int64, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
__int64 game_templates_c1a9e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64* a5, __int64 a6, unsigned __int64 a7,
                              __int64 a8, __int64 a9, unsigned __int64 a10,
                              __int64 a11, unsigned __int64 a12, __int64 a13,
                              unsigned __int64 a14);

__int64 game_templates_c1a9e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64* a5, __int64 a6, unsigned __int64 a7,
                              __int64 a8, __int64 a9, unsigned __int64 a10,
                              __int64 a11, unsigned __int64 a12, __int64 a13,
                              unsigned __int64 a14)
{

#pragma clang fp contract(off)
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  bool v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  bool v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 result;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  struct {
    __int64 v76;
    unsigned __int64 v77;
    __int64 v78;
  } v76_;
  struct {
    _QWORD v79[2];
    __int64 v80;
    __int64 v81;
  } v79_;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v18 = a11;
  v19 = a12;
  v20 = a9;
  v21 = a10;
  *a1 = a2;
  a1[1] = a3;
  v22 = *(_QWORD*)(a2 + 24);
  a1[2] = *(_QWORD*)(a2 + 16);
  a1[3] = v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
  }
  a1[4] = *a5;
  v23 = a5[1];
  a1[5] = v23;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
  }
  v24 = *(_QWORD*)(a4 + 24);
  v25 = *(_QWORD*)(a4 + 32);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    a1[6] = v24;
    a1[7] = v25;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v26 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(v25),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v20 = a9;
      v21 = a10;
      a1 = v26;
      v18 = a11;
      v19 = a12;
    }
  }
  else {
    a1[6] = v24;
    a1[7] = 0;
  }
  *((_DWORD*)a1 + 48) = 0;
  a1[22] = 0;
  a1[23] = 0;
  v27 = a6;
  v28 = a7;
  a1[20] = 0;
  a1[21] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[8] = 0;
  a1[9] = 0;
  *((_DWORD*)a1 + 62) = 1065353216;
  a1[29] = 0;
  a1[30] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[25] = 0;
  a1[26] = 0;
  *((_WORD*)a1 + 148) = 0;
  a1[32] = 0;
  a1[33] = 0;
  *((_WORD*)a1 + 136) = 0;
  *((_WORD*)a1 + 180) = 0;
  a1[40] = 0;
  a1[41] = 0;
  *((_WORD*)a1 + 168) = 0;
  a1[48] = 0;
  a1[49] = 0;
  a1[50] = -1;
  v29 = a1;
  v30 = v19;
  v31 = v18;
  v32 = v21;
  v33 = v20;
  v73 = v27;
  v74 = v28;
  GameRoutine_60a060((char*)a1 + 64, v27, v28),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v75 = v33;
  GameRoutine_60a060((char*)v29 + 88, v33, v32),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_60a060((char*)v29 + 112, v31, v30),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_60a060((char*)v29 + 136, a13, a14),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *((_DWORD*)v29 + 48) = 3;
  v29[50] = -1;
  *(_BYTE*)(*v29 + 224) = 1;
  v34 = v29[3];
  if (v34 != 0) {
    v35 = std___1___shared_weak_count_lock(v34),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v35 != 0) {
      v36 = v29[2];
    }
    else {
      v36 = 0;
    }
  }
  else {
    v36 = 0;
    v35 = 0;
  }
  GameRoutine_a85710(*(_QWORD*)(v36 + 288)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_c55ca0((_QWORD*)(*(_QWORD*)(v36 + 288) + 864LL)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v37 = *v29;
  v38 = (__int64*)fw_memory_g_heap_manager_ptr;
  v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       200, 16, 0),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_QWORD*)v39 = v37;
  v41 = v39;
  v42 = *(_QWORD*)(v37 + 24);
  *(_QWORD*)(v39 + 8) = *(_QWORD*)(v37 + 16);
  *(_QWORD*)(v39 + 16) = v42;
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(v39 + 160) = 0;
  *(_QWORD*)(v39 + 168) = 0;
  *(_QWORD*)(v39 + 144) = 0;
  *(_QWORD*)(v39 + 152) = 0;
  *(_QWORD*)(v39 + 24) = 0;
  *(_QWORD*)(v39 + 32) = 0;
  *(_QWORD*)(v39 + 40) = 0;
  *(_QWORD*)(v39 + 48) = 0;
  *(_QWORD*)(v39 + 56) = 0;
  *(_QWORD*)(v39 + 64) = 0;
  *(_QWORD*)(v39 + 72) = 0;
  *(_QWORD*)(v39 + 80) = 0;
  *(_QWORD*)(v39 + 88) = 0;
  *(_QWORD*)(v39 + 96) = 0;
  *(_QWORD*)(v39 + 104) = 0;
  *(_QWORD*)(v39 + 112) = 0;
  *(_QWORD*)(v39 + 120) = 0;
  *(_QWORD*)(v39 + 128) = 0;
  *(_DWORD*)(v39 + 136) = 0;
  *(_DWORD*)(v39 + 176) = 1065353216;
  *(_QWORD*)(v39 + 184) = 0;
  *(_DWORD*)(v39 + 191) = 0;
  wld_c37860(v39, v73, v74, v75, v32, v31, v30, v40, a13, a14),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v29[25] = v41;
  if (a14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (a14 >= 0x17) {
    v44 = v35;
    if ((a14 | 7) == 0x17) {
      v45 = 26;
    }
    else {
      v45 = (a14 | 7) + 1;
    }
    v76_.v78 =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v45, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v46 = v45 | 1;
    v35 = v44;
    v43 = (char*)v76_.v78;
    v38 = (__int64*)fw_memory_g_heap_manager_ptr;
    v76_.v76 = v46;
    v76_.v77 = a14;
    goto LABEL_24;
  }
  LOBYTE(v76_.v76) = 2 * a14;
  v43 = (char*)&v76_.v76 + 1;
  if (a14 != 0) {
  LABEL_24:
    GameRoutine_1a0b940(v43, a13, a14),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v43[a14] = 0;
  v79_.v79[0] = v76_.v76;
  v79_.v79[1] = v76_.v77;
  v79_.v80 = v76_.v78;
  v79_.v81 = v41;
  wld_map_c1f5e0((float*)v29 + 54, (unsigned __int8*)v79_.v79, (char*)v79_.v79),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v79_.v81 != 0) {
    GameRoutine_c380b0(v79_.v81),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v47 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v38 + v47),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v79_.v79[0] & 1) != 0 && v79_.v80 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*v38 + v48),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  ObjectBuildCreate_c1b700(v73, v74, v75, v32, v31, v30, a13, a14,
                           (__int64)(v29 + 32)),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v49 = (_QWORD*)fw_memory_HeapManager_Allocate(*v38, 16, 16, 0),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v51 = *((unsigned __int8*)v29 + 64);
  v53 = v29[9];
  v52 = v29[10];
  v54 = v49;
  v55 = (v51 & 1) == 0;
  v56 = v51 >> 1;
  *v49 = 0;
  v49[1] = 0;
  if (v55) {
    v57 = v56;
  }
  else {
    v57 = v53;
  }
  v58 = *((unsigned __int8*)v29 + 88);
  if (v55) {
    v59 = (__int64)v29 + 65;
  }
  else {
    v59 = v52;
  }
  v60 = (v58 & 1) == 0;
  v61 = v58 >> 1;
  if (v60) {
    v62 = v61;
  }
  else {
    v62 = v29[12];
  }
  v63 = *((unsigned __int8*)v29 + 112);
  if (v60) {
    v64 = (__int64)v29 + 89;
  }
  else {
    v64 = v29[13];
  }
  v65 = (v63 & 1) == 0;
  v66 = v63 >> 1;
  if (v65) {
    v67 = (__int64)v29 + 113;
  }
  else {
    v67 = v29[16];
  }
  if (v65) {
    v68 = v66;
  }
  else {
    v68 = v29[15];
  }
  result =
      GameRoutine_c4e8c0(v49, v59, v57, v64, v62, v67, v68, v50, a13, a14, 1),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v70 = (__int64*)v29[48];
  v29[48] = (__int64)v54;
  if (v70 != nullptr) {
    if (*v70 != 0) {
      GameRoutine_634d80(*(_QWORD*)(*v70 + 8), *v70),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *v70 = 0;
    }
    v71 = v70[1];
    if (v71 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v71 + 8), v71),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v50 = COERCE_AS(__typeof__(v50),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v70[1] = 0;
    }
    v72 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v72 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v38 + v72),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v29[23] = 1;
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return std___1___shared_weak_count___release_weak(v35);
  }
  return result;
}

#pragma GCC visibility pop
