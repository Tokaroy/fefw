#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a762f0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void WorkerThread_194dc70(PSEUDO_X8, _QWORD*);
__int64 ElementRenderer_a75980(_QWORD*, _QWORD*, _QWORD*, _QWORD*,
                               __int64 (**)(_QWORD));
__int64 GameRoutine_194dbd0(_QWORD*, __int64);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 gxc_NvnStateCache_CopyLocks(__int64 result, __int64);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 nn_os_ClearLightEvent(__int64);
__int64 nn_os_SignalLightEvent(__int64);
__int64 nn_os_WaitLightEvent(__int64);
extern __int64 (*GameData_1fc0650[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfx_render_a73e50(__int64 result, __int64 a2);
bool gfx_render_a75ae0(__int64* a1, __int64* a2,
                       __int64 (**a3)(__int64, __int64));

__int64 gfx_render_a73e50(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  int* v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int* v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  int* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  int* v26;
  int* v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  int* v36;
  int* v37;
  __int64 v38;
  __int64 v39;
  int* v40;
  __int64* v41;
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
  __int64 v57;
  __int64 v58;
  __int64 v59;
  struct {
    __int64 (**v60)();
    __int64 v61;
    __int64 v62;
    char gap24_[8];
    __int64* v63;
  } v60_;

  if (*(_BYTE*)(result + 76) != 1) {
    if ((unsigned int)((*(_QWORD*)(result + 56) - *(_QWORD*)(result + 48)) >>
                       3) == 0) {
      return result;
    }
  LABEL_5:
    if (*(_BYTE*)(result + 160) == 1) {
      v2 = result;
      v3 = (__int64*)a2;
      v4 = game_g_frame_clock_ptr[0];
      v5 = (_QWORD*)*game_g_frame_clock_ptr[0];
      nn_os_WaitLightEvent(*game_g_frame_clock_ptr[0] + 13952);
      v6 = (int*)v5[1755];
      v7 = &v6[6 * v6[24]];
      v8 = v6[22];
      v6[22] = v8 + 1;
      v10 = v7 + 10;
      v9 = *((_QWORD*)v7 + 5);
      if (v8 < (signed __int64)(*((_QWORD*)v10 + 1) - v9) >> 4) {
        v11 = (__int64*)(v9 + 16 * v8);
        ++v6[23];
        v12 = *v11;
        if (*v11 != 0) {
          v13 = v11[1];
          v14 = v5[1757];
          v5[1752] = v12;
          v5[1753] = v14;
          v5[1754] = v13;
          gxc_NvnStateCache_Reset(v14);
          gxc_NvnStateCache_CopyLocks(v5[1753], v3[1]);
          v15 = (_QWORD*)*v4;
          nn_os_WaitLightEvent(*v4 + 14576);
          v16 = (int*)v15[1833];
          v17 = &v16[6 * v16[24]];
          v18 = v16[22];
          v16[22] = v18 + 1;
          v20 = v17 + 10;
          v19 = *((_QWORD*)v17 + 5);
          if (v18 < (signed __int64)(*((_QWORD*)v20 + 1) - v19) >> 4) {
            v21 = (__int64*)(v19 + 16 * v18);
            ++v16[23];
            v22 = *v21;
            if (*v21 != 0) {
              v23 = v21[1];
              v24 = v15[1835];
              v15[1830] = v22;
              v15[1831] = v24;
              v15[1832] = v23;
              gxc_NvnStateCache_Reset(v24);
              gxc_NvnStateCache_CopyLocks(v15[1831], v3[1]);
              v25 = (_QWORD*)*v4;
              nn_os_WaitLightEvent(*v4 + 15200);
              v26 = (int*)v25[1911];
              v27 = &v26[6 * v26[24]];
              v28 = v26[22];
              v26[22] = v28 + 1;
              v30 = v27 + 10;
              v29 = *((_QWORD*)v27 + 5);
              if (v28 < (signed __int64)(*((_QWORD*)v30 + 1) - v29) >> 4) {
                v31 = (__int64*)(v29 + 16 * v28);
                ++v26[23];
                v32 = *v31;
                if (*v31 != 0) {
                  v33 = v31[1];
                  v34 = v25[1913];
                  v25[1908] = v32;
                  v25[1909] = v34;
                  v25[1910] = v33;
                  gxc_NvnStateCache_Reset(v34);
                  gxc_NvnStateCache_CopyLocks(v25[1909], v3[1]);
                  v35 = (_QWORD*)*v4;
                  nn_os_WaitLightEvent(*v4 + 15824);
                  v36 = (int*)v35[1989];
                  v37 = &v36[6 * v36[24]];
                  v38 = v36[22];
                  v36[22] = v38 + 1;
                  v40 = v37 + 10;
                  v39 = *((_QWORD*)v37 + 5);
                  if (v38 < (signed __int64)(*((_QWORD*)v40 + 1) - v39) >> 4) {
                    v41 = (__int64*)(v39 + 16 * v38);
                    ++v36[23];
                    v42 = *v41;
                    if (*v41 != 0) {
                      v43 = v41[1];
                      v44 = v35[1991];
                      v35[1986] = v42;
                      v35[1987] = v44;
                      v35[1988] = v43;
                      gxc_NvnStateCache_Reset(v44);
                      gxc_NvnStateCache_CopyLocks(v35[1987], v3[1]);
                      if ((GameRoutine_194dbd0((_QWORD*)(*v4 + 15952),
                                               (__int64)v3) &
                           1) != 0) {
                        v45 = *v4;
                        v46 = *v4 + 13456;
                        nn_os_WaitLightEvent(*v4 + 13952);
                        v60_.v62 = v2;
                        v60_.v60 = GameData_1fc0650;
                        v60_.v61 = v46;
                        v60_.v63 = (__int64*)&v60_.v60;
                        GameRoutine_a762f0(&v60_.v60, (_QWORD*)(v45 + 13968));
                        if (v60_.v63 == (__int64*)&v60_.v60) {
                          v47 = 32;
                        }
                        else {
                          if (v60_.v63 == nullptr) {
                            goto LABEL_22;
                          }
                          v47 = 40;
                        }
                        (*(void (**)(__int64))(*v60_.v63 + v47))(
                            (__int64)v60_.v63);
                      LABEL_22:
                        nn_os_ClearLightEvent(v45 + 13952);
                        nn_os_SignalLightEvent(v45 + 13940);
                        v48 = *v4;
                        v49 = *v4 + 14080;
                        nn_os_WaitLightEvent(*v4 + 14576);
                        v60_.v60 = GameData_1fc0650;
                        v60_.v61 = v49;
                        v60_.v62 = v2;
                        v60_.v63 = (__int64*)&v60_.v60;
                        GameRoutine_a762f0(&v60_.v60, (_QWORD*)(v48 + 14592));
                        if (v60_.v63 == (__int64*)&v60_.v60) {
                          v50 = 32;
                        }
                        else {
                          if (v60_.v63 == nullptr) {
                            goto LABEL_27;
                          }
                          v50 = 40;
                        }
                        (*(void (**)(__int64))(*v60_.v63 + v50))(
                            (__int64)v60_.v63);
                      LABEL_27:
                        nn_os_ClearLightEvent(v48 + 14576);
                        nn_os_SignalLightEvent(v48 + 14564);
                        v51 = *v4;
                        v52 = *v4 + 14704;
                        nn_os_WaitLightEvent(*v4 + 15200);
                        v60_.v60 = GameData_1fc0650;
                        v60_.v61 = v52;
                        v60_.v62 = v2;
                        v60_.v63 = (__int64*)&v60_.v60;
                        GameRoutine_a762f0(&v60_.v60, (_QWORD*)(v51 + 15216));
                        if (v60_.v63 == (__int64*)&v60_.v60) {
                          v53 = 32;
                        }
                        else {
                          if (v60_.v63 == nullptr) {
                            goto LABEL_32;
                          }
                          v53 = 40;
                        }
                        (*(void (**)(__int64))(*v60_.v63 + v53))(
                            (__int64)v60_.v63);
                      LABEL_32:
                        nn_os_ClearLightEvent(v51 + 15200);
                        nn_os_SignalLightEvent(v51 + 15188);
                        v54 = *v4;
                        v55 = *v4 + 15328;
                        nn_os_WaitLightEvent(*v4 + 15824);
                        v60_.v60 = GameData_1fc0650;
                        v60_.v61 = v55;
                        v60_.v62 = v2;
                        v60_.v63 = (__int64*)&v60_.v60;
                        GameRoutine_a762f0(&v60_.v60, (_QWORD*)(v54 + 15840));
                        if (v60_.v63 == (__int64*)&v60_.v60) {
                          v56 = 32;
                        }
                        else {
                          if (v60_.v63 == nullptr) {
                            goto LABEL_37;
                          }
                          v56 = 40;
                        }
                        (*(void (**)(__int64))(*v60_.v63 + v56))(
                            (__int64)v60_.v63);
                      LABEL_37:
                        nn_os_ClearLightEvent(v54 + 15824);
                        nn_os_SignalLightEvent(v54 + 15812);
                        v57 = *v4;
                        v58 = *v4 + 15952;
                        nn_os_WaitLightEvent(*v4 + 16448);
                        v60_.v60 = GameData_1fc0650;
                        v60_.v61 = v58;
                        v60_.v62 = v2;
                        v60_.v63 = (__int64*)&v60_.v60;
                        GameRoutine_a762f0(&v60_.v60, (_QWORD*)(v57 + 16464));
                        if (v60_.v63 == (__int64*)&v60_.v60) {
                          v59 = 32;
                        }
                        else {
                          if (v60_.v63 == nullptr) {
                          LABEL_42:
                            nn_os_ClearLightEvent(v57 + 16448);
                            nn_os_SignalLightEvent(v57 + 16436);
                            nn_os_WaitLightEvent(*v4 + 13952);
                            nn_os_WaitLightEvent(*v4 + 14576);
                            nn_os_WaitLightEvent(*v4 + 15200);
                            nn_os_WaitLightEvent(*v4 + 15824);
                            nn_os_WaitLightEvent(*v4 + 16448);
                            WorkerThread_194dc70((void*)(&v60_.v60),
                                                 (_QWORD*)(*v4 + 13456));
                            (*(void (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 312LL))(*v3, (__int64)v60_.v60);
                            WorkerThread_194dc70((void*)(&v60_.v60),
                                                 (_QWORD*)(*v4 + 14080));
                            (*(void (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 312LL))(*v3, (__int64)v60_.v60);
                            WorkerThread_194dc70((void*)(&v60_.v60),
                                                 (_QWORD*)(*v4 + 14704));
                            (*(void (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 312LL))(*v3, (__int64)v60_.v60);
                            WorkerThread_194dc70((void*)(&v60_.v60),
                                                 (_QWORD*)(*v4 + 15328));
                            (*(void (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 312LL))(*v3, (__int64)v60_.v60);
                            WorkerThread_194dc70((void*)(&v60_.v60),
                                                 (_QWORD*)(*v4 + 15952));
                            (*(void (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 312LL))(*v3, (__int64)v60_.v60);
                            return (*(__int64 (**)(__int64, __int64))(
                                *(_QWORD*)*v3 + 216LL))(*v3, 0xFFFF);
                          }
                          v59 = 40;
                        }
                        (*(void (**)(__int64))(*v60_.v63 + v59))(
                            (__int64)v60_.v63);
                        goto LABEL_42;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      result = v2;
      a2 = (__int64)v3;
    }
    return GameRoutine_a73d40(result, a2);
  }
  if (*(_DWORD*)(result + 72) != 0) {
    goto LABEL_5;
  }
  return result;
}

bool gfx_render_a75ae0(__int64* a1, __int64* a2,
                       __int64 (**a3)(__int64, __int64))
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char v16;
  char v17;
  __int64 v18;
  char v19;
  __int64* v20;
  char v21;
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
  __int64* v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;

  v6 = a2 - a1;
  if (v6 > 2) {
    switch (v6) {
    case 3LL:
      v16 = (*a3)(a1[1], *a1);
      v17 = (*a3)(*(a2 - 1), a1[1]);
      if ((v16 & 1) != 0) {
        v18 = *a1;
        if ((v17 & 1) != 0) {
          *a1 = *(a2 - 1);
          *(a2 - 1) = v18;
        }
        else {
          *a1 = a1[1];
          a1[1] = v18;
          if ((((__int64 (*)(__int64))*a3)(*(a2 - 1)) & 1) != 0) {
            v30 = a1[1];
            a1[1] = *(a2 - 1);
            *(a2 - 1) = v30;
          }
        }
        return true;
      }
      if ((v17 & 1) == 0) {
        return true;
      }
      v24 = a1[1];
      a1[1] = *(a2 - 1);
      *(a2 - 1) = v24;
      v15 = (*a3)(a1[1], *a1);
      break;
    case 4LL:
      ElementRenderer_a75980(a1, a1 + 1, a1 + 2, a2 - 1,
                             (__int64 (**)(_QWORD))a3);
      return true;
    case 5LL:
      ElementRenderer_a75980(a1, a1 + 1, a1 + 2, a1 + 3,
                             (__int64 (**)(_QWORD))a3);
      if (((*a3)(*(a2 - 1), a1[3]) & 1) == 0) {
        return true;
      }
      v8 = a1[3];
      a1[3] = *(a2 - 1);
      *(a2 - 1) = v8;
      if (((*a3)(a1[3], a1[2]) & 1) == 0) {
        return true;
      }
      v10 = a1[2];
      v9 = a1[3];
      v11 = a1[1];
      a1[2] = v9;
      a1[3] = v10;
      if (((*a3)(v9, v11) & 1) == 0) {
        return true;
      }
      v13 = a1[1];
      v12 = a1[2];
      v14 = *a1;
      a1[1] = v12;
      a1[2] = v13;
      v15 = (*a3)(v12, v14);
      break;
    default:
      goto LABEL_16;
    }
    if ((v15 & 1) != 0) {
      v25 = *a1;
      *a1 = a1[1];
      a1[1] = v25;
    }
    return true;
  }
  if ((unsigned __int64)v6 < 2) {
    return true;
  }
  if (v6 == 2) {
    if (((*a3)(*(a2 - 1), *a1) & 1) != 0) {
      v7 = *a1;
      *a1 = *(a2 - 1);
      *(a2 - 1) = v7;
    }
    return true;
  }
LABEL_16:
  v19 = (*a3)(a1[1], *a1);
  v20 = a1 + 2;
  v21 = (*a3)(a1[2], a1[1]);
  if ((v19 & 1) != 0) {
    v22 = *a1;
    if ((v21 & 1) != 0) {
      v23 = a1[2];
      a1[2] = v22;
      *a1 = v23;
    }
    else {
      v31 = a1[2];
      *a1 = a1[1];
      a1[1] = v22;
      if ((((__int64 (*)(__int64))*a3)(v31) & 1) != 0) {
        v32 = a1[1];
        a1[1] = a1[2];
        a1[2] = v32;
      }
    }
  }
  else if ((v21 & 1) != 0) {
    v27 = a1[1];
    v26 = a1[2];
    v28 = *a1;
    a1[1] = v26;
    a1[2] = v27;
    if (((*a3)(v26, v28) & 1) != 0) {
      v29 = *a1;
      *a1 = a1[1];
      a1[1] = v29;
    }
  }
  v33 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v34 = 0;
  v35 = 0;
  while (1) {
    if (((*a3)(*v33, *v20) & 1) != 0) {
      v37 = *v33;
      v38 = v34;
      do {
        v39 = (char*)a1 + v38;
        *(__int64*)((char*)a1 + v38 + 24) = *(__int64*)((char*)a1 + v38 + 16);
        if (v38 == -16) {
          v36 = a1;
          goto LABEL_34;
        }
        v38 -= 8;
      } while (((*a3)(v37, *((_QWORD*)v39 + 1)) & 1) != 0);
      v36 = (__int64*)((char*)a1 + v38 + 24);
    LABEL_34:
      ++v35;
      *v36 = v37;
      if (v35 == 8) {
        return v33 + 1 == a2;
      }
    }
    v20 = v33++;
    v34 += 8;
    if (v33 == a2) {
      return true;
    }
  }
}

#pragma GCC visibility pop
