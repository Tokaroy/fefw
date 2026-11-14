#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576aa0(__int64, __int64);
__int64 GameHr_5fd970(__int64, __int64, __int64, _DWORD*);
__int64 GameRoutine_577d40(__int64, unsigned int);
__int64 GameRoutine_578940(__int64, int);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58c960(__int64, __int64, __int64, _BYTE*, __int64, __int64,
                           __int64, __int64, __int64, __int64, __int64, __int64,
                           __int128, __int128);
__int64 GameRoutine_5a0010(__int64, __int64, __int64, unsigned int);
__int64 GameRoutine_5fcd30(__int64, unsigned int, unsigned int, _QWORD*,
                           unsigned int, unsigned int);
__int64 GameRoutine_5fd650(__int64, __int64);
__int64 GameRoutine_5fdcb0(__int64 result, int);
__int64 GameRoutine_5fdce0(__int64 result, unsigned int);
__int64 GameRoutine_5fe0a0(__int64, unsigned int, int, unsigned int*,
                           unsigned int*);
__int64 GameRoutine_5fe120(__int64, unsigned int, int, _QWORD*, __int64);
__int64 VectorGraphicsTexture_5987a0(__int64);
extern __int64* GameData_2136060[2];
__int64 nn_ui2d_58d1d0(__int64 a1, __int64 a2, __int64 a3, _BYTE* a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                       __int128 a13, __int128 a14);
__int64 nn_ui2d_5941d0(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int a4,
                       unsigned int a5, char a6);

__int64 nn_ui2d_58d1d0(__int64 a1, __int64 a2, __int64 a3, _BYTE* a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                       __int128 a13, __int128 a14)
{
  __int64* v14;

  v14 = GameData_2136060[0];
  *(_QWORD*)(a1 + 8) = a1 + 8;
  *(_QWORD*)(a1 + 16) = a1 + 8;
  *(_QWORD*)(a1 + 32) = a1 + 32;
  *(_QWORD*)(a1 + 40) = a1 + 32;
  *(_QWORD*)a1 = v14 + 2;
  return GameRoutine_58c960(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
                            a13, a14);
}

__int64 nn_ui2d_5941d0(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int a4,
                       unsigned int a5, char a6)
{
  int* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  signed int v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  bool v33;
  int v34;
  int v35;
  signed int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  _QWORD* v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v55;
  _QWORD v57[2];
  __int64 v58;
  _QWORD v59[2];
  _QWORD v60[2];

  v6 = (int*)a1 + a4;
  v10 = v6[51];
  v11 = v6[48];
  v51 = v6[39];
  v55 = v6[42];
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  v12 = a2[31];
  v13 = a2[42];
  v14 = a1[9];
  v15 = a1[28];
  v59[0] = 0;
  v59[1] = 0;
  v52 = v13;
  v53 = v12;
  if (a1[1] != 0) {
    v16 = v14;
  }
  else {
    v16 = a1[13];
  }
  v17 = a1[15] + 64LL;
  GameHr_5fd970(a3, v17, (__int64)v59, nullptr);
  v18 = *a2;
  a2[31] = v17;
  a2[42] = 0;
  (*(void (**)(_QWORD*, __int64))(v18 + 24))(a2, a3);
  GameRoutine_5fd650(a3, a1[15] + 136LL);
  v19 = *((_DWORD*)a1 + v10 + 58);
  GameRoutine_5a0010((__int64)a2, a3, v15, v19);
  v20 = (__int64*)GameRoutine_578940(a2[23], 36);
  v21 = *(_QWORD*)(v15 + 48);
  v58 = *v20;
  v22 = VectorGraphicsTexture_5987a0(v15);
  GameRoutine_5fe0a0(a3, *(_DWORD*)(v21 + 4LL * v22 * (unsigned __int8)v19), 4,
                     (unsigned int*)(v16 + 8), (unsigned int*)&v58);
  v23 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v25 = *v23;
  v24 = v23[1];
  v26 = *((_DWORD*)a1 + v10 + 96);
  v57[0] = v25 + v11;
  v57[1] = v24;
  if ((v26 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v26, 4, v57, 224);
  }
  v27 = GameRoutine_577d40(a2[23], 1u);
  GameRoutine_58c820(a3, a2, v27);
  v28 = a2[23];
  v29 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v31 = *v29;
  v30 = v29[1];
  v60[0] = v31 + v51;
  v60[1] = v30;
  GameRoutine_5fe120(a3, *(_DWORD*)(*(_QWORD*)(v15 + 24) + 4LL * v19), 0, v60,
                     560);
  GameRoutine_5fcd30(a3, 3u, 1u, (_QWORD*)(v28 + 584), 6u, 0);
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  GameRoutine_5fdcb0(a3, 128);
  GameRoutine_5fdce0(a3, 0x20u);
  a2[31] = v53;
  a2[42] = v52;
  DrawInfo_576aa0((__int64)a2, a3);
  (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a3);
  if (a5 == 8 || a5 == 4) {
    v32 = 16;
    v33 = (a6 & 1) == 0;
    v34 = 8;
  }
  else {
    v32 = 12;
    v33 = (a6 & 1) == 0;
    v34 = 4;
  }
  if (!v33) {
    v34 = v32;
  }
  v35 = v10 + v34 + ((*(unsigned __int8*)(a1[11] + 8LL) >> 2) & 0x10);
  v36 = *((_DWORD*)a1 + v35 + 58);
  GameRoutine_5a0010((__int64)a2, a3, v15, v36);
  v37 = *(_QWORD*)(v15 + 48);
  v38 = VectorGraphicsTexture_5987a0(v15);
  GameRoutine_5fe0a0(a3, *(_DWORD*)(v37 + 4LL * v38 * (unsigned __int8)v36), 4,
                     (unsigned int*)(a1[15] + 8LL), (unsigned int*)&v58);
  if ((*(_BYTE*)(a1[11] + 8LL) & 8) != 0) {
    v39 = a1[1];
    v40 = *(_QWORD*)(v15 + 48);
    v41 = *(_DWORD*)(v40 +
                     4LL * (int)(VectorGraphicsTexture_5987a0(v15) *
                                 (unsigned __int8)v36) +
                     4);
    v42 = a1 + 9;
    if (v39 == 0) {
      v42 = a1 + 13;
    }
    GameRoutine_5fe0a0(a3, v41, 4, (unsigned int*)(*v42 + 8LL),
                       (unsigned int*)&v58);
  }
  v43 = *((_DWORD*)a1 + v35 + 96);
  if ((v43 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v43, 4, v57, 224);
  }
  v44 = GameRoutine_577d40(a2[23], a5);
  GameRoutine_58c820(a3, a2, v44);
  v45 = a2[25];
  v46 = a2[23];
  v47 = (__int64*)(*(_QWORD*)(v45 + 16) + 16LL * *(int*)(v45 + 48));
  v49 = *v47;
  v48 = v47[1];
  v60[0] = v49 + v55;
  v60[1] = v48;
  GameRoutine_5fe120(a3, *(_DWORD*)(*(_QWORD*)(v15 + 24) + 4LL * v36), 0, v60,
                     560);
  return GameRoutine_5fcd30(a3, 3u, 1u, (_QWORD*)(v46 + 584), 6u, 0);
}

#pragma GCC visibility pop
