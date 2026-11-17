#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BufferAllocator_5b57b0(__int64);
__int64 BufferAllocator_Unknown2(__int64, __int64);
__int64 GameRoutine_5b9980(void);
__int64 GameRoutine_5c01b0(_QWORD);
__int64 GameRoutine_5c0260(_QWORD);
__int64 GameRoutine_5c0270(_QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c03e0();
__int64 GameRoutine_5c5590();
__int64 GameRoutine_5ca6f0(__int64);
__int64 GameRoutine_5cde10(__int64);
__int64 GameRoutine_5dbab0(_QWORD);
__int64 GameRoutine_5de4f0(_QWORD, _QWORD);
__int64 GameRoutine_5debc0(_QWORD, _QWORD);
__int64 GameRoutine_5deed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5dfc90(_QWORD);
__int64 GameRoutine_5fca00(_QWORD);
__int64 GameRoutine_5fe300(_QWORD);
__int64 Resource_5c6100(__int64, __int64);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*nn_vfx_detail_BufferAllocator_vtable[])();
extern __int64* GameData_21364f8[3];
extern __int64* GameData_2136500[2];
__int64 System_Destructor(__int64 a1);
_QWORD* GameRoutine_5def40(_QWORD* result);
_QWORD* GameRoutine_5fc9e0(_QWORD* result);
__int64 GameHr_5b47e0(__int64, __int64*);
__int64 GameHr_5de7c0(__int64, __int64);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5df920(__int64, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_5b9920(__int64, __int64);
__int64 GameRoutine_5c01b0_alt1(__int64 result) __asm__("GameRoutine_5c01b0");
__int64 GameRoutine_5c0250();
__int64 GameRoutine_5c0260_alt1(__int64 result) __asm__("GameRoutine_5c0260");
__int64 GameRoutine_5c04e0(_QWORD);
__int64 GameRoutine_5c04f0(const char*, ...);
__int64 GameRoutine_5c52f0(__int64 result);
__int64 GameRoutine_5c5380();
__int64 GameRoutine_5ca630(__int64, __int64, unsigned int, unsigned int);
__int64 GameRoutine_5cdd50(__int64, __int64, unsigned int, unsigned int);
__int64 GameRoutine_5dba10(__int64, __int64, unsigned int);
__int64 GameRoutine_5ddca0(_QWORD*);
__int64 GameRoutine_5de3b0(__int64, __int64*, __int64, int);
__int64 GameRoutine_5de4d0(__int64 result);
__int64 GameRoutine_5dfd00();
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fc190(__int64 result);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_5fe2d0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2e0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2f0(__int64);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 game_5c0350(int);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_lmem_AllocateFromFrameHeap(__int64, unsigned __int64, int);
__int64 nn_lmem_CreateFrameHeap_1a0cf40(void);
__int64 nn_lmem_DestroyFrameHeap(__int64);
extern __int64 (*GameData_212e988)();
extern __int64 (*GameData_212e9f0)();
__int64 System_Unknown2(__int64 a1, __int64 a2, __int64* a3, __int64 a4);
__int64 game_5c52f0(__int64 result);
__int64 game_5c5380();
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_5b47e0(__int64, __int64);
__int64 GameRoutine_5c01b0_alt2(__int64 result);
__int64 GameRoutine_5c0260_alt2(__int64 result);
__int64 GameRoutine_5de7c0(__int64, __int64);
__int64 GameRoutine_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameRoutine_5df920(__int64, __int64);
__int64 GameRoutine_5fc7e0(__int64*, __int64);
__int64 GameRoutine_5fe2f0_alt1();
__int64 nn_lmem_CreateFrameHeap_1a0cf40_alt1();

__int64 System_Unknown2(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  int v7;
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
  int v20;
  unsigned int v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 FrameHeapEPvmi;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  int v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 (*v76)();
  __int64 (*v77)();
  __int64 v78;
  unsigned int v79;
  unsigned int v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  int v97;
  struct {
    char gap0_[8];
    __int64 v99;
    int v100;
    char gap20_[4];
    unsigned __int64 v101;
    _QWORD v102[3];
    __int64 v103;
    __int64 v104;
    __int64 v105;
    _QWORD v106[2];
    __int64 v107;
    __int64 v108;
  } f_;

  *(_QWORD*)(a1 + 56) = *(_QWORD*)(a4 + 8);
  v7 = *(_DWORD*)(a4 + 48);
  *(_DWORD*)(a1 + 100) = v7 + 32;
  *(_DWORD*)(a1 + 104) = v7;
  *(_DWORD*)(a1 + 108) = *(_DWORD*)(a4 + 36);
  *(_DWORD*)(a1 + 112) = *(_DWORD*)(a4 + 32);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)(a4 + 72);
  *(_DWORD*)(a1 + 140) = *(_DWORD*)(a4 + 40);
  v8 = *(_DWORD*)(a4 + 44);
  *(_QWORD*)(a1 + 72) = a2;
  *(_DWORD*)(a1 + 144) = v8;
  *(_BYTE*)(a1 + 54) = *(_BYTE*)(a4 + 76);
  GameRoutine_5c01b0_alt2(a1 + 64);
  GameRoutine_5c0260_alt2((__int64)a3);
  f_.v102[0] = *(_QWORD*)(a1 + 56);
  f_.v102[1] = 0x4C00000012LL;
  v9 = *a3;
  f_.v103 = 112LL * *(int*)(a4 + 32) + 32;
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(v9 + 16))((__int64)a3,
                                                              f_.v103, 128);
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 5808) = v10;
  f_.v102[2] = v10;
  f_.v107 = 0;
  f_.v108 = 0;
  f_.v106[0] = 0;
  f_.v106[1] = 0;
  GameRoutine_5fc190((__int64)f_.v106);
  LODWORD(f_.v106[0]) = 18;
  v12 = GameRoutine_5fe2d0(v11, f_.v106);
  v13 = *(_QWORD*)(a1 + 56);
  v14 = *(_QWORD*)(a4 + 80);
  v15 = v12;
  f_.v107 = 0;
  f_.v108 = 0;
  f_.v106[0] = 0;
  f_.v106[1] = 0;
  GameRoutine_5fc190((__int64)f_.v106);
  LODWORD(f_.v106[0]) = 18;
  v16 = GameRoutine_5fe2e0(v13, f_.v106);
  v17 = *a3;
  f_.v105 = (v14 + v16 - 1) & -v16;
  v18 = (*(__int64 (**)(__int64, __int64, __int64))(v17 + 16))((__int64)a3,
                                                               f_.v105, v15);
  *(_QWORD*)(a1 + 5816) = v18;
  f_.v104 = v18;
  GameRoutine_5b47e0(a1 + 5320, (__int64)f_.v102);
  v19 = *(_QWORD*)(a1 + 56);
  if (*(_BYTE*)(a1 + 54) != 0) {
    v20 = 3;
  }
  else {
    v20 = 2;
  }
  *(_DWORD*)(a1 + 96) = v20;
  GameRoutine_5de7c0(v19, a1 + 64);
  v21 = GameRoutine_5c0250();
  game_5c0350(2 * *(int*)(a1 + 112));
  *(_QWORD*)(a1 + 4632) = GameRoutine_5c0250() - v21;
  GameRoutine_5c04e0(*(unsigned __int8*)(a4 + 68));
  v22 = *(int*)(a1 + 112);
  *(_WORD*)(a1 + 50) = 257;
  *(_BYTE*)(a1 + 52) = 1;
  v23 = *(_BYTE*)(a4 + 79);
  *(_QWORD*)(a1 + 116) = 0;
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 4704) = 0;
  *(_QWORD*)(a1 + 4712) = 0;
  *(_QWORD*)(a1 + 4720) = 0;
  *(_QWORD*)(a1 + 4728) = 0;
  *(_QWORD*)(a1 + 4736) = 0;
  *(_QWORD*)(a1 + 4744) = 0;
  *(_DWORD*)(a1 + 4752) = 0;
  *(_QWORD*)(a1 + 4760) = 0;
  *(_QWORD*)(a1 + 4768) = 0;
  *(_DWORD*)(a1 + 124) = 0;
  *(_DWORD*)(a1 + 128) = v22;
  *(_BYTE*)(a1 + 53) = v23;
  v24 = *(int*)(a4 + 64);
  *(_BYTE*)(a1 + 5888) = 0;
  *(_DWORD*)(a1 + 4792) = v24;
  GameRoutine_1a0ba50(a1 + 176, 0, 0x80Cu);
  v25 = *(int*)(a1 + 108);
  v26 = *(int*)(a1 + 100);
  v27 = *(int*)(a1 + 8);
  v28 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 4680) = 96;
  *(_QWORD*)(a1 + 4472) = 0;
  v29 = (8 * v22 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4480) = 0;
  *(_QWORD*)(a1 + 4584) = 0;
  *(_QWORD*)(a1 + 4592) = 0;
  *(_QWORD*)(a1 + 4664) = 2112 * v22;
  *(_QWORD*)(a1 + 4600) = 0;
  *(_QWORD*)(a1 + 4608) = 0;
  v30 = ((8 * v24 + 15) & 0xFFFFFFFFFFFFFFF0LL) * v27;
  v31 = (int)v25 * (__int64)(int)v27;
  *(_QWORD*)(a1 + 4808) = 0;
  *(_QWORD*)(a1 + 4816) = 0;
  *(_QWORD*)(a1 + 4824) = 0;
  *(_QWORD*)(a1 + 4832) = 0;
  v32 = (8 * v26 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4648) = 624LL * (int)v25;
  *(_QWORD*)(a1 + 4840) = 0;
  *(_QWORD*)(a1 + 4640) = v32;
  *(_QWORD*)(a1 + 4696) = 16 * v31;
  v33 = (8 * v25 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4848) = 0;
  *(_QWORD*)(a1 + 4856) = 0;
  *(_QWORD*)(a1 + 4864) = 0;
  *(_QWORD*)(a1 + 4872) = 0;
  *(_QWORD*)(a1 + 24) = 2544LL * (int)v27;
  *(_QWORD*)(a1 + 4880) = 0;
  *(_QWORD*)(a1 + 4656) = v33;
  *(_QWORD*)(a1 + 4672) = v29;
  *(_QWORD*)(a1 + 4800) = v30;
  *(_QWORD*)(a1 + 40) = v27 << 6;
  v34 = ((2112 * v22 + v29 + 624LL * (int)v25 + v32 + v33 + v30 + 16 * v31 +
          2544LL * (int)v27 + (v27 << 6) + 111) &
         0xFFFFFFFFFFFFFFF0LL) +
        256;
  v35 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v28 + 16LL))(v28, v34);
  v36 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 4616) = v35;
  *(_QWORD*)(a1 + 80) = v36 + v34;
  ++*(_DWORD*)(a1 + 88);
  FrameHeapEPvmi = nn_lmem_CreateFrameHeap_1a0cf40_alt1();
  v38 = 8LL * *(int*)(a1 + 100);
  *(_QWORD*)(a1 + 4640) = v38;
  v39 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v38, 16);
  v40 = *(_QWORD*)(a1 + 4640);
  *(_QWORD*)(a1 + 152) = v39;
  GameRoutine_1a0ba50(v39, 0, v40);
  v41 =
      nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 4648), 16);
  v42 = *(_QWORD*)(a1 + 4648);
  *(_QWORD*)(a1 + 160) = v41;
  GameRoutine_1a0ba50(v41, 0, v42);
  v43 = *(int*)(a1 + 108);
  if ((int)v43 >= 1) {
    v44 = 0;
    v45 = 0;
    do {
      ++v45;
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + v44 + 32) = a1;
      v46 = *(_QWORD*)(a1 + 160) + v44;
      v44 += 624;
      *(_BYTE*)(v46 + 12) = 0;
      v43 = *(int*)(a1 + 108);
    } while (v45 < v43);
  }
  v47 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, 8 * v43, 16);
  v48 = *(_DWORD*)(a1 + 96);
  v49 = *(_QWORD*)(a1 + 4664);
  *(_QWORD*)(a1 + 2224) = v47;
  if (v48 == 3) {
    v50 = 3;
  }
  else {
    v50 = 2;
  }
  v51 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v49, 16);
  v52 = *(_QWORD*)(a1 + 4664);
  *(_QWORD*)(a1 + 168) = v51;
  GameRoutine_1a0ba50(v51, 0, v52);
  v53 = *(_QWORD*)(a1 + 168);
  v54 = *(__int64**)(a1 + 56);
  f_.v106[0] = 0;
  f_.v106[1] = 0;
  GameRoutine_5fc180(f_.v106);
  DWORDn(f_.v106[0], sizeof(f_.v106[0]) / 4 - 1) = 16;
  v55 = GameRoutine_5fc7e0(v54, (__int64)f_.v106);
  v56 = ((v55 + 191) & -v55) * *(int*)(a1 + 112) * v50;
  if ((GameRoutine_5ded80(a1 + 4888, *(__int64**)(a1 + 56), a1 + 64, 16, v56) &
       1) != 0) {
    RectDrawer_5fcbc0(a1 + 4888, (__int64*)(a1 + 5288));
  }
  *(_QWORD*)(a1 + 4688) = v56;
  *(_QWORD*)(a1 + 5304) = 0;
  v57 = GameRoutine_5fcb50(a1 + 4888);
  v58 = *(_DWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 5312) = v57;
  if (v58 >= 1) {
    v59 = v53 + 1728;
    v60 = 0;
    v61 = GameData_2136500[0] + 2;
    do {
      game_5c52f0(v59 - 1560);
      GameRoutine_5def40((_QWORD*)(v59 + 232));
      *(_QWORD*)v59 = 0;
      *(_QWORD*)(v59 + 8) = 0;
      *(_QWORD*)(v59 + 360) = v61;
      *(_QWORD*)(v59 + 368) = 0;
      v62 = 0;
      *(_DWORD*)(v59 + 376) = 0;
      *(_QWORD*)(v59 + 16) = 0;
      *(_QWORD*)(v59 + 24) = a1 + 4888;
      *(_QWORD*)(v59 + 64) = a1 + 5320;
      v63 = *(_QWORD*)(a1 + 5304);
      v64 = ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v63;
      if (v64 <= *(_QWORD*)(a1 + 4960)) {
        v65 = *(_QWORD*)(a1 + 5312);
        *(_QWORD*)(a1 + 5304) = v64;
        v62 = v65 + v63;
      }
      *(_QWORD*)v59 = v62;
      v66 = *(_QWORD*)(a1 + 5304);
      v67 = ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v66;
      if (v67 <= *(_QWORD*)(a1 + 4960)) {
        v68 = *(_QWORD*)(a1 + 5312);
        *(_QWORD*)(a1 + 5304) = v67;
        *(_QWORD*)(v59 + 8) = v68 + v66;
        if (*(_BYTE*)(a1 + 54) == 1) {
        LABEL_22:
          v69 = *(_QWORD*)(a1 + 5304);
          v70 = 0;
          v71 =
              ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v69;
          if (v71 <= *(_QWORD*)(a1 + 4960)) {
            v72 = *(_QWORD*)(a1 + 5312);
            *(_QWORD*)(a1 + 5304) = v71;
            v70 = v72 + v69;
          }
          *(_QWORD*)(v59 + 16) = v70;
        }
      }
      else {
        *(_QWORD*)(v59 + 8) = 0;
        if (*(_BYTE*)(a1 + 54) == 1) {
          goto LABEL_22;
        }
      }
      ++v60;
      v59 += 2112;
    } while (v60 < (signed __int32)*(_DWORD*)(a1 + 112));
  }
  GameRoutine_5fcb80(a1 + 4888);
  GameRoutine_5fcb70(a1 + 4888);
  v73 =
      nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 4680), 16);
  GameRoutine_5b9920(v73, a1);
  *(_QWORD*)(a1 + 2240) = v73;
  LODWORD(v73) = GameRoutine_5c0250();
  game_5c5380();
  v74 = GameRoutine_5c0250() - (unsigned int)v73;
  v75 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 4624) = v74;
  GameRoutine_5df920(v75, a1 + 64);
  *(_BYTE*)(a1 + 2264) = 0;
  *(_QWORD*)(a1 + 2256) = 0;
  v76 = GameData_212e988;
  *(_QWORD*)(a1 + 2272) = GameData_212e988;
  v77 = GameData_212e9f0;
  v78 = *(_QWORD*)(a1 + 80);
  v79 = *(_DWORD*)(a1 + 96);
  v80 = *(_DWORD*)(a1 + 140);
  *(_QWORD*)(a1 + 2360) = v76;
  *(_QWORD*)(a1 + 2448) = v76;
  *(_QWORD*)(a1 + 2536) = v76;
  *(_QWORD*)(a1 + 2624) = v76;
  *(_QWORD*)(a1 + 2712) = v76;
  *(_QWORD*)(a1 + 2800) = v76;
  *(_QWORD*)(a1 + 2888) = v76;
  *(_QWORD*)(a1 + 2976) = v76;
  *(_QWORD*)(a1 + 3064) = v76;
  *(_QWORD*)(a1 + 3152) = v76;
  *(_QWORD*)(a1 + 3240) = v76;
  *(_QWORD*)(a1 + 3328) = v76;
  *(_QWORD*)(a1 + 3416) = v76;
  *(_QWORD*)(a1 + 3504) = v76;
  *(_QWORD*)(a1 + 3592) = v76;
  *(_QWORD*)(a1 + 3680) = v76;
  *(_QWORD*)(a1 + 2248) = 0;
  *(_QWORD*)(a1 + 2352) = v77;
  *(_QWORD*)(a1 + 2440) = v77;
  *(_QWORD*)(a1 + 2528) = v77;
  *(_QWORD*)(a1 + 2616) = v77;
  *(_QWORD*)(a1 + 2704) = v77;
  *(_QWORD*)(a1 + 2792) = v77;
  *(_QWORD*)(a1 + 2880) = v77;
  *(_QWORD*)(a1 + 2968) = v77;
  *(_QWORD*)(a1 + 3056) = v77;
  *(_QWORD*)(a1 + 3144) = v77;
  *(_QWORD*)(a1 + 3232) = v77;
  *(_QWORD*)(a1 + 3320) = v77;
  *(_QWORD*)(a1 + 3408) = v77;
  *(_QWORD*)(a1 + 3496) = v77;
  *(_QWORD*)(a1 + 3584) = v77;
  f_.v100 = v78;
  *(_QWORD*)(a1 + 3672) = v77;
  *(_QWORD*)(a1 + 3760) = v77;
  GameRoutine_5ca630(a1 + 64, a1, v79, v80);
  GameRoutine_5dba10(a1 + 64, a1, *(_DWORD*)(a1 + 96));
  GameRoutine_5cdd50(a1 + 64, a1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 144));
  f_.v99 = *(_QWORD*)(a1 + 80);
  GameRoutine_5ddca0((_QWORD*)a1);
  v81 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 24), 16);
  v82 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 16) = v81;
  *(_QWORD*)(a1 + 32) = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v82, 16);
  v83 = *(_QWORD*)(a4 + 56);
  if (*(int*)(a1 + 8) >= 1) {
    v84 = 0;
    v85 = 0;
    v86 = 0;
    f_.v101 = 16LL * *(int*)(a1 + 108);
    v87 = 8LL * *(int*)(a1 + 4792);
    do {
      v88 = FrameHeapEPvmi;
      v89 = v83;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v84) = -1;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v84 + 4) = 0;
      v90 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v84);
      v90[31] = 0;
      v90[32] = 0;
      v90[29] = 0;
      v90[30] = 0;
      v90[27] = 0;
      v90[28] = 0;
      v90[25] = 0;
      v90[26] = 0;
      v90[23] = 0;
      v90[24] = 0;
      v90[21] = 0;
      v90[22] = 0;
      v90[19] = 0;
      v90[20] = 0;
      v90[17] = 0;
      v90[18] = 0;
      v90[15] = 0;
      v90[16] = 0;
      v90[13] = 0;
      v90[14] = 0;
      v90[11] = 0;
      v90[12] = 0;
      v90[9] = 0;
      v90[10] = 0;
      v90[7] = 0;
      v90[8] = 0;
      v90[5] = 0;
      v90[6] = 0;
      v90[3] = 0;
      v90[4] = 0;
      v90[1] = 0;
      v90[2] = 0;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v84 + 264) = 0;
      v91 = *(_QWORD*)(a1 + 16) + v84;
      GameRoutine_5fc9e0((_QWORD*)(v91 + 328));
      *(_BYTE*)(v91 + 408) = 0;
      GameRoutine_5fe2f0_alt1();
      *(_QWORD*)(v91 + 752) = 0;
      *(_QWORD*)(v91 + 744) = 0;
      *(_QWORD*)(v91 + 736) = 0;
      *(_QWORD*)(v91 + 728) = 0;
      GameRoutine_5fc9e0((_QWORD*)(v91 + 760));
      *(_BYTE*)(v91 + 840) = 0;
      GameRoutine_5fe2f0_alt1();
      *(_QWORD*)(v91 + 1184) = 0;
      *(_QWORD*)(v91 + 1176) = 0;
      *(_QWORD*)(v91 + 1168) = 0;
      *(_QWORD*)(v91 + 1160) = 0;
      GameRoutine_5fc9e0((_QWORD*)(v91 + 1192));
      *(_BYTE*)(v91 + 1272) = 0;
      GameRoutine_5fe2f0_alt1();
      v92 = v91 + 272;
      *(_QWORD*)(v91 + 1616) = 0;
      *(_QWORD*)(v91 + 1608) = 0;
      *(_QWORD*)(v91 + 1600) = 0;
      *(_QWORD*)(v91 + 1592) = 0;
      v83 = v89;
      FrameHeapEPvmi = v88;
      GameRoutine_5de4d0(v92);
      GameRoutine_5de3b0(*(_QWORD*)(a1 + 16) + v84 + 272, *(__int64**)(a1 + 56),
                         v83, *(_DWORD*)(a1 + 96));
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v84 + 1960) = -1;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v84 + 1968) = -1;
      v93 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v84);
      v93[247] = 0;
      v93[248] = 0;
      v93[249] = 0;
      v93[250] = 0;
      v93[251] = 0;
      v93[252] = 0;
      v93[253] = 0;
      v93[254] = 0;
      v93[255] = 0;
      v93[256] = 0;
      v93[257] = 0;
      v93[258] = 0;
      v93[259] = 0;
      v93[260] = 0;
      v93[261] = 0;
      v93[262] = 0;
      v93[263] = 0;
      v93[264] = 0;
      v93[265] = 0;
      v93[266] = 0;
      v93[267] = 0;
      v93[268] = 0;
      v93[269] = 0;
      v93[270] = 0;
      v93[271] = 0;
      v93[272] = 0;
      v93[273] = 0;
      v93[274] = 0;
      v93[275] = 0;
      v93[276] = 0;
      v93[277] = 0;
      v93[278] = 0;
      v94 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v84);
      v94[310] = 0;
      v94[309] = 0;
      v94[308] = 0;
      v94[307] = 0;
      v94[306] = 0;
      v94[305] = 0;
      v94[304] = 0;
      v94[303] = 0;
      v94[302] = 0;
      v94[301] = 0;
      v94[300] = 0;
      v94[299] = 0;
      v94[298] = 0;
      v94[297] = 0;
      v94[296] = 0;
      v94[295] = 0;
      v94[294] = 0;
      v94[293] = 0;
      v94[292] = 0;
      v94[291] = 0;
      v94[290] = 0;
      v94[289] = 0;
      v94[288] = 0;
      v94[287] = 0;
      v94[286] = 0;
      v94[285] = 0;
      v94[284] = 0;
      v94[283] = 0;
      v94[282] = 0;
      v94[281] = 0;
      v94[280] = 0;
      v94[279] = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v84 + 2488) = 0;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v84 + 2496) = 6;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v84 + 2512) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v84 + 2504) =
          nn_lmem_AllocateFromFrameHeap(v88, f_.v101, 16);
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v84 + 2520) =
          nn_lmem_AllocateFromFrameHeap(v88, v87, 16);
      *(_DWORD*)(*(_QWORD*)(a1 + 32) + v85) = v86++;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 8) =
          *(_QWORD*)(a1 + 16) + v84 + 1624;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 16) = 0xFFFFFFFFLL;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 48) =
          *(_QWORD*)(a1 + 16) + v84 + 272;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 40) =
          *(_QWORD*)(a1 + 16) + v84 + 1944;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 24) = -1;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v85 + 32) = -1;
      v95 = *(_QWORD*)(a1 + 16) + v84;
      v96 = *(_QWORD*)(a1 + 32) + v85;
      v85 += 64;
      v84 += 2536;
      *(_QWORD*)(v96 + 56) = *(_QWORD*)(v95 + 2520);
    } while (v86 < *(int*)(a1 + 8));
  }
  nn_lmem_DestroyFrameHeap(FrameHeapEPvmi);
  *(_QWORD*)(a1 + 4576) = 0;
  *(_QWORD*)(a1 + 4568) = 0;
  *(_QWORD*)(a1 + 4560) = 0;
  *(_QWORD*)(a1 + 4552) = 0;
  *(_QWORD*)(a1 + 4544) = 0;
  *(_QWORD*)(a1 + 4536) = 0;
  *(_QWORD*)(a1 + 4528) = 0;
  *(_QWORD*)(a1 + 4520) = 0;
  *(_QWORD*)(a1 + 4512) = 0;
  *(_QWORD*)(a1 + 4504) = 0;
  *(_QWORD*)(a1 + 4496) = 0;
  *(_QWORD*)(a1 + 4488) = 0;
  GameRoutine_5c04f0("\n");
  GameRoutine_5c04f0("System Static     WorkSize : %d \n", *(_QWORD*)(a1 + 80));
  GameRoutine_5c04f0("System Static     AlcCount : %d \n", *(_DWORD*)(a1 + 88));
  GameRoutine_5c04f0("  DelayFree       WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4632));
  GameRoutine_5c04f0("  Random          WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4624));
  GameRoutine_5c04f0("  Resource        WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4640));
  GameRoutine_5c04f0("  EmitterSet      WorkSize : %d ( EmitterSetNum:%d )\n",
                     *(_QWORD*)(a1 + 4648), *(_DWORD*)(a1 + 108));
  GameRoutine_5c04f0("  Emitter         WorkSize : %d ( EmitterNum:%d )\n",
                     *(_QWORD*)(a1 + 4664), *(_DWORD*)(a1 + 112));
  GameRoutine_5c04f0("  EmitterCalc     WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4680));
  GameRoutine_5c04f0("  EmitterConstBuf WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4688));
  GameRoutine_5c04f0("  EmitterSetSort  WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4696));
  GameRoutine_5c04f0("  ParticleSort    WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4800));
  v97 = GameRoutine_5dfd00();
  GameRoutine_5c04f0("  NoiseTexture    WorkSize : %d \n", v97);
  GameRoutine_5c04f0("  TempBuffer      WorkSize : %d \n", v83);
  GameRoutine_5c04f0("-------------------------------\n");
  GameRoutine_5c04f0("Stripe            WorkSize : %d \n", f_.v99 - f_.v100);
  return GameRoutine_5c04f0("-------------------------------\n");
}

__int64 System_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = GameData_21364f8[0] + 2;
  if (*(int*)(a1 + 108) >= 1) {
    v2 = 0;
    v3 = 0;
    do {
      BufferAllocator_5b57b0(*(_QWORD*)(a1 + 160) + v2);
      ++v3;
      v2 += 624;
    } while (v3 < *(int*)(a1 + 108));
  }
  v4 = *(_DWORD*)(a1 + 100);
  if (v4 >= 1) {
    for (i = 0; i < v4; ++i) {
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * i);
      if (v6 != 0) {
        Resource_5c6100(v6, 0);
        GameRoutine_5c02c0(
            "vfx system deleted the registered binary. resource id : %d.", i);
        v4 = *(_DWORD*)(a1 + 100);
      }
    }
  }
  v7 = BufferAllocator_Unknown2(a1 + 5320, *(_QWORD*)(a1 + 56));
  v8 = GameRoutine_5c0270(v7);
  v9 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 24LL))(
      v8, *(_QWORD*)(a1 + 5808));
  v10 = GameRoutine_5c0270(v9);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v10 + 24LL))(v10,
                                                        *(_QWORD*)(a1 + 5816));
  GameRoutine_5deed0(a1 + 4888, *(_QWORD*)(a1 + 56), a1 + 64);
  if (*(int*)(a1 + 112) >= 1) {
    v11 = 2088;
    v12 = 0;
    v13 = GameData_2136500[0] + 2;
    do {
      ++v12;
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + v11) = v13;
      v11 += 2112;
    } while (v12 < *(int*)(a1 + 112));
  }
  if (*(_QWORD*)(a1 + 2240) != 0) {
    GameRoutine_5b9980();
  }
  if (*(int*)(a1 + 8) >= 1) {
    v14 = 272;
    v15 = 0;
    do {
      GameRoutine_5de4f0(*(_QWORD*)(a1 + 16) + v14, *(_QWORD*)(a1 + 56));
      ++v15;
      v14 += 2536;
    } while (v15 < *(int*)(a1 + 8));
  }
  v16 = *(_QWORD*)(a1 + 72);
  v17 = *(_QWORD*)(a1 + 4616);
  --*(_DWORD*)(a1 + 88);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
  GameRoutine_5dfc90(*(_QWORD*)(a1 + 56));
  GameRoutine_5c5590();
  GameRoutine_5c03e0();
  GameRoutine_5debc0(*(_QWORD*)(a1 + 56), a1 + 64);
  GameRoutine_5c01b0(0);
  GameRoutine_5c0260(0);
  GameRoutine_5ca6f0(a1 + 64);
  GameRoutine_5cde10(a1 + 64);
  GameRoutine_5dbab0(a1 + 64);
  nn_os_FinalizeMutex(a1 + 5856);
  nn_os_FinalizeMutex(a1 + 5824);
  *(_QWORD*)(a1 + 5320) = nn_vfx_detail_BufferAllocator_vtable;
  GameRoutine_5fe300(a1 + 5400);
  GameRoutine_5fca00(a1 + 5328);
  GameRoutine_5fe300(a1 + 4976);
  return GameRoutine_5fca00(a1 + 4888);
}

#pragma GCC visibility pop
