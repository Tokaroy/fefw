#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_283950(PSEUDO_X8, __int64 result, int);
__int64 BaseNx_283c80(__int64);
__int64 BaseNx_283ca0(__int64, int);
__int64 BaseNx_2a0820(__int64, __int64, __int64);
__int64 BaseNx_2a0e80(__int64, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_27c570(__int64 result, int);
__int64 GameRoutine_283930(__int64);
__int64 GameRoutine_283ac0(__int64);
__int64 GameRoutine_283c20(_QWORD);
__int64 GameRoutine_283c60(_QWORD);
__int64 rcContext_doStartTimer_283ce0(_QWORD);
bool GameRoutine_283920(_QWORD*);
bool GameRoutine_283b10(__int64);
bool GameRoutine_283cd0(__int64);
bool GameRoutine_283d50(__int64);
float BaseNx_283ae0(__int64, int);
float BasicSound_281ac0(__int64);
float BasicSound_281ca0(__int64, __int64, _QWORD*, int);
void* BaseNx_2a1860();
void nn_detail_UnexpectedDefaultImpl();
__int64 nn_atk_detail_281160(__int64 a1);

__int64 nn_atk_detail_281160(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  int v4;
  int v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  void* v21;
  __int64 v22;
  __int64 result;
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
  int v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  int v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  struct {
    int v72;
    int v73;
    int v74;
    float v75;
    float v76;
    float v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
  } f_;
  _QWORD v88[11];

  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = BasicSound_281ac0(a1),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_DWORD*)(a1 + 312);
  v5 = *(char*)(a1 + 257);
  if (*(_DWORD*)(a1 + 128) != -1) {
    v4 = *(_DWORD*)(a1 + 128);
  }
  f_.v74 = v4;
  f_.v76 =
      (float)(*(float*)(a1 + 300) * *(float*)(a1 + 108)) * *(float*)(a1 + 172);
  f_.v77 = v2;
  f_.v75 = (float)((float)(*(float*)(a1 + 304) + *(float*)(a1 + 112)) +
                   *(float*)(v3 + 80)) +
           *(float*)(a1 + 184);
  if (v5 == -1) {
    v5 = *(_DWORD*)(v3 + 84);
    if (v5 == -1) {
      v5 = *(_DWORD*)(a1 + 188);
      if (v5 == -1) {
        v5 = *(_DWORD*)(a1 + 120);
        v6 = (int*)(a1 + 116);
      }
      else {
        v6 = (int*)(a1 + 192);
      }
    }
    else {
      v6 = (int*)(v3 + 88);
    }
  }
  else {
    v6 = (int*)(a1 + 308);
  }
  f_.v73 = *v6;
  v7 = *(_QWORD*)(a1 + 388);
  v8 = *(_QWORD*)(a1 + 396);
  v9 = *(_QWORD*)(a1 + 404);
  v10 = *(_QWORD*)(a1 + 412);
  v11 = *(_DWORD*)(a1 + 432);
  v12 = *(_QWORD*)(a1 + 420);
  v13 = *(_DWORD*)(a1 + 352);
  v14 =
      (float)(*(float*)(a1 + 444) + *(float*)(a1 + 364)) + *(float*)(v3 + 100);
  f_.v72 = *(_DWORD*)(a1 + 428);
  v15 = *(float*)(a1 + 380) *
        (float)(*(float*)(a1 + 176) *
                (float)(*(float*)(v3 + 96) * *(float*)(a1 + 136)));
  v16 = (float)(*(float*)(a1 + 436) + *(float*)(a1 + 356)) +
        (float)(*(float*)(a1 + 180) + *(float*)(a1 + 140));
  v17 =
      (float)(*(float*)(a1 + 440) + *(float*)(a1 + 360)) + *(float*)(a1 + 144);
  v18 = (float)(*(float*)(a1 + 448) + *(float*)(a1 + 368)) +
        (float)(*(float*)(v3 + 104) + *(float*)(a1 + 148));
  v19 = (float)(*(float*)(a1 + 452) + *(float*)(a1 + 372)) +
        (float)(*(float*)(v3 + 108) + *(float*)(a1 + 152));
  v20 = (float)(*(float*)(a1 + 456) + *(float*)(a1 + 376)) +
        (float)(*(float*)(v3 + 112) + *(float*)(a1 + 156));
  v21 = BaseNx_2a1860(),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  v22 = BaseNx_2a0820((__int64)v21, 136, 8),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  *(_DWORD*)(v22 + 8) = 10;
  *(_QWORD*)(v22 + 24) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                   v47 = COERCE_AS(__typeof__(v47),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
  *(_DWORD*)(v22 + 44) = v5;
  *(float*)(v22 + 56) = v15;
  *(_DWORD*)(v22 + 60) = v13;
  *(_QWORD*)(v22 + 64) = v7;
  *(_QWORD*)(v22 + 72) = v8;
  *(_QWORD*)(v22 + 80) = v9;
  *(_QWORD*)(v22 + 88) = v10;
  *(_QWORD*)(v22 + 96) = v12;
  *(float*)(v22 + 112) = v16;
  *(float*)(v22 + 116) = v17;
  *(float*)(v22 + 120) = v14;
  *(float*)(v22 + 124) = v18;
  *(float*)(v22 + 128) = v19;
  *(float*)(v22 + 132) = v20;
  *(_DWORD*)(v22 + 52) = f_.v74;
  *(float*)(v22 + 32) = f_.v77;
  *(float*)(v22 + 36) = f_.v76;
  *(float*)(v22 + 40) = f_.v75;
  *(_DWORD*)(v22 + 48) = f_.v73;
  *(_DWORD*)(v22 + 104) = f_.v72;
  *(_DWORD*)(v22 + 108) = v11;
  BaseNx_2a0e80((__int64)v21, (_QWORD*)v22),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
  result = *(_QWORD*)(a1 + 464);
  if (result != 0) {
    if (GameRoutine_283920((_QWORD*)result) &&
        (int)GameRoutine_283930(*(_QWORD*)(a1 + 464)) >= 1) {
      v24 = BaseNx_2a0820((__int64)v21, 120, 8),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(v24 + 8) = 11;
      *(_QWORD*)(v24 + 24) =
          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                       v47 = COERCE_AS(__typeof__(v47),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(v24 + 32) = 1;
      v25 = *(_QWORD*)(a1 + 464);
      f_.v86 = 0;
      f_.v87 = 0;
      f_.v80 = 0x3F8000003F800000LL;
      f_.v81 = 0x3F8000003F800000LL;
      f_.v78 = 0;
      f_.v79 = 0x3F8000003F800000LL;
      f_.v84 = 0x3F8000003F800000LL;
      f_.v85 = 0;
      f_.v82 = 0x3F8000003F800000LL;
      f_.v83 = 0x3F8000003F800000LL;
      game_283950((void*)(v88), v25, 1),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      BasicSound_281ca0(a1, (__int64)&f_.v78, v88, 1),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      v26 = f_.v85;
      *(_QWORD*)(v24 + 84) = f_.v84;
      *(_QWORD*)(v24 + 92) = v26;
      v27 = f_.v87;
      *(_QWORD*)(v24 + 100) = f_.v86;
      *(_QWORD*)(v24 + 108) = v27;
      v28 = f_.v81;
      *(_QWORD*)(v24 + 52) = f_.v80;
      *(_QWORD*)(v24 + 60) = v28;
      v29 = f_.v83;
      *(_QWORD*)(v24 + 68) = f_.v82;
      *(_QWORD*)(v24 + 76) = v29;
      v30 = f_.v79;
      *(_QWORD*)(v24 + 36) = f_.v78;
      *(_QWORD*)(v24 + 44) = v30;
      BaseNx_2a0e80((__int64)v21, (_QWORD*)v24),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((int)GameRoutine_283930(*(_QWORD*)(a1 + 464)) >= 2) {
        v31 = BaseNx_2a0820((__int64)v21, 120, 8),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(v31 + 8) = 11;
        v32 = v31;
        *(_QWORD*)(v31 + 24) =
            (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                         v47 = COERCE_AS(__typeof__(v47),
                                         PSEUDO_REGISTER(float, "s0", "=w"));
        f_.v86 = 0;
        f_.v87 = 0;
        f_.v80 = 0x3F8000003F800000LL;
        f_.v81 = 0x3F8000003F800000LL;
        f_.v78 = 0;
        f_.v79 = 0x3F8000003F800000LL;
        f_.v84 = 0x3F8000003F800000LL;
        f_.v85 = 0;
        f_.v82 = 0x3F8000003F800000LL;
        f_.v83 = 0x3F8000003F800000LL;
        *(_DWORD*)(v32 + 32) = 2;
        game_283950((void*)(v88), *(_QWORD*)(a1 + 464), 2),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        BasicSound_281ca0(a1, (__int64)&f_.v78, v88, 2),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        v33 = f_.v85;
        *(_QWORD*)(v32 + 84) = f_.v84;
        *(_QWORD*)(v32 + 92) = v33;
        v34 = f_.v87;
        *(_QWORD*)(v32 + 100) = f_.v86;
        *(_QWORD*)(v32 + 108) = v34;
        v35 = f_.v81;
        *(_QWORD*)(v32 + 52) = f_.v80;
        *(_QWORD*)(v32 + 60) = v35;
        v36 = f_.v83;
        *(_QWORD*)(v32 + 68) = f_.v82;
        *(_QWORD*)(v32 + 76) = v36;
        v37 = f_.v79;
        *(_QWORD*)(v32 + 36) = f_.v78;
        *(_QWORD*)(v32 + 44) = v37;
        BaseNx_2a0e80((__int64)v21, (_QWORD*)v32),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((int)GameRoutine_283930(*(_QWORD*)(a1 + 464)) >= 3) {
          v38 = BaseNx_2a0820((__int64)v21, 120, 8),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
          *(_DWORD*)(v38 + 8) = 11;
          *(_QWORD*)(v38 + 24) =
              (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                           v47 = COERCE_AS(__typeof__(v47),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
          f_.v86 = 0;
          f_.v87 = 0;
          *(_DWORD*)(v38 + 32) = 3;
          v39 = *(_QWORD*)(a1 + 464);
          f_.v80 = 0x3F8000003F800000LL;
          f_.v81 = 0x3F8000003F800000LL;
          f_.v78 = 0;
          f_.v79 = 0x3F8000003F800000LL;
          f_.v84 = 0x3F8000003F800000LL;
          f_.v85 = 0;
          f_.v82 = 0x3F8000003F800000LL;
          f_.v83 = 0x3F8000003F800000LL;
          game_283950((void*)(v88), v39, 3),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          BasicSound_281ca0(a1, (__int64)&f_.v78, v88, 3),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v40 = f_.v85;
          *(_QWORD*)(v38 + 84) = f_.v84;
          *(_QWORD*)(v38 + 92) = v40;
          v41 = f_.v87;
          *(_QWORD*)(v38 + 100) = f_.v86;
          *(_QWORD*)(v38 + 108) = v41;
          v42 = f_.v81;
          *(_QWORD*)(v38 + 52) = f_.v80;
          *(_QWORD*)(v38 + 60) = v42;
          v43 = f_.v83;
          *(_QWORD*)(v38 + 68) = f_.v82;
          *(_QWORD*)(v38 + 76) = v43;
          v44 = f_.v79;
          *(_QWORD*)(v38 + 36) = f_.v78;
          *(_QWORD*)(v38 + 44) = v44;
          BaseNx_2a0e80((__int64)v21, (_QWORD*)v38),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((int)GameRoutine_283930(*(_QWORD*)(a1 + 464)) >= 4) {
            nn_detail_UnexpectedDefaultImpl(),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
      }
    }
    if (GameRoutine_283b10(*(_QWORD*)(a1 + 464))) {
      v45 = *(_QWORD*)(a1 + 32);
      if ((int)GameRoutine_283ac0(*(_QWORD*)(a1 + 464)) >= 1) {
        v46 = 0;
        do {
          v51 = v46 + 4;
          if (v45 != 0) {
            GameRoutine_27c570(v45, v51),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v48 = v47;
          }
          else {
            v48 = 0x0.0p+0f;
          }
          v49 = BaseNx_2a0820((__int64)v21, 40, 8),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
          *(_DWORD*)(v49 + 8) = 12;
          v50 = v49;
          *(_QWORD*)(v49 + 24) =
              (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                           v47 = COERCE_AS(__typeof__(v47),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
          *(_DWORD*)(v50 + 32) = v51;
          *(float*)(v50 + 36) = v48 + BaseNx_283ae0(*(_QWORD*)(a1 + 464), v51),
                          v47 = COERCE_AS(__typeof__(v47),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
          BaseNx_2a0e80((__int64)v21, (_QWORD*)v50),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          ++v46;
        } while (v46 < (int)GameRoutine_283ac0(*(_QWORD*)(a1 + 464)));
      }
    }
    if (GameRoutine_283cd0(*(_QWORD*)(a1 + 464))) {
      v52 = BaseNx_283c80(*(_QWORD*)(a1 + 464)),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      v53 = BaseNx_2a0820((__int64)v21, 40, 8),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(v53 + 8) = 13;
      *(_QWORD*)(v53 + 24) =
          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                       v47 = COERCE_AS(__typeof__(v47),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
      *(_BYTE*)(v53 + 32) = v52 & 1;
      BaseNx_2a0e80((__int64)v21, (_QWORD*)v53),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v52 & 1) != 0) {
        v54 = GameRoutine_283c60(*(_QWORD*)(a1 + 464)),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_1a0b950((__int64)&f_.v78, v54, 0xC0u),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        v55 = BaseNx_2a0820((__int64)v21, 224, 8),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(v55 + 8) = 14;
        *(_QWORD*)(v55 + 24) =
            (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                         v47 = COERCE_AS(__typeof__(v47),
                                         PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_1a0b950(v55 + 32, (__int64)&f_.v78, 0xC0u),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        BaseNx_2a0e80((__int64)v21, (_QWORD*)v55),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        if (*(int*)(GameRoutine_283c20(*(_QWORD*)(a1 + 464)) + 208) >= 1) {
          v56 = 0;
          do {
            v57 = BaseNx_2a0820((__int64)v21, 40, 8),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
            *(_DWORD*)(v57 + 8) = 15;
            v58 = v57;
            *(_QWORD*)(v57 + 24) =
                (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                             v47 =
                                 COERCE_AS(__typeof__(v47),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
            *(_DWORD*)(v58 + 32) = v56;
            *(_BYTE*)(v58 + 36) = BaseNx_283ca0(*(_QWORD*)(a1 + 464), v56) & 1,
                            v47 = COERCE_AS(__typeof__(v47),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
            BaseNx_2a0e80((__int64)v21, (_QWORD*)v58),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            ++v56;
          } while (v56 < (signed __int32)*(
                             _DWORD*)(GameRoutine_283c20(*(_QWORD*)(a1 + 464)) +
                                      208));
        }
      }
    }
    result = ((__int64 (*)(__int64))GameRoutine_283d50)(*(_QWORD*)(a1 + 464)),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((result & 1) != 0) {
      v59 = BaseNx_2a0820((__int64)v21, 40, 8),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_DWORD*)(v59 + 8) = 17;
      *(_QWORD*)(v59 + 24) =
          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                       v47 = COERCE_AS(__typeof__(v47),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
      v60 = *(_QWORD*)(a1 + 464);
      if (v60 != 0) {
        v61 = GameRoutine_283d50(v60),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
        v62 = 0;
        if (!v61 || *(_DWORD*)(a1 + 328) != 1) {
        LABEL_40:
          *(_BYTE*)(v59 + 32) = v62;
          result = BaseNx_2a0e80((__int64)v21, (_QWORD*)v59),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
          if (*(_BYTE*)(v59 + 32) == 1) {
            v66 = *(_DWORD*)(a1 + 296);
            v67 = rcContext_doStartTimer_283ce0(*(_QWORD*)(a1 + 464)),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
            v68 = BaseNx_2a0820((__int64)v21, 40, 8),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
            *(_DWORD*)(v68 + 8) = 16;
            *(_QWORD*)(v68 + 24) =
                (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                             v47 =
                                 COERCE_AS(__typeof__(v47),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
            *(_DWORD*)(v68 + 32) = v66;
            result = BaseNx_2a0e80((__int64)v21, (_QWORD*)v68),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
            if (*(int*)(v67 + 8) >= 1) {
              v69 = 0;
              do {
                v70 = BaseNx_2a0820((__int64)v21, 40, 8),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                *(_DWORD*)(v70 + 8) = 18;
                v71 = v70;
                *(_QWORD*)(v70 +
                           24) =
                    (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1),
                           v47 = COERCE_AS(__typeof__(v47),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
                *(_DWORD*)(v71 + 32) = v69;
                *(_BYTE*)(v71 + 36) = *(_BYTE*)(*(_QWORD*)v67 + v69);
                result = BaseNx_2a0e80((__int64)v21, (_QWORD*)v71),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                ++v69;
              } while (v69 < *(int*)(v67 + 8));
            }
          }
          return result;
        }
        v63 = *(_QWORD*)(a1 + 320);
        if (v63 != 0 && (*(int (**)(_QWORD))(*(_QWORD*)v63 + 16LL))(
                            *(_QWORD*)(a1 + 320)) >= 1) {
          v64 = 0;
          while (1) {
            v65 = rcContext_doStartTimer_283ce0(*(_QWORD*)(a1 + 464)),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v64 < *(int*)(v65 + 8) && *(_BYTE*)(*(_QWORD*)v65 + v64) != 0) {
              break;
            }
            if (++v64 >= (*(int (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63)) {
              goto LABEL_39;
            }
          }
          v62 = 1;
          goto LABEL_40;
        }
      }
    LABEL_39:
      v62 = 0;
      goto LABEL_40;
    }
  }
  return result;
}

#pragma GCC visibility pop
