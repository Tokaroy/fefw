#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* opus_src_7b9e0(__int64, __int64, _DWORD*);
__int64 MovieRoutine_7b9d0(_QWORD);
__int64 MovieRoutine_82590(_DWORD*);
__int64 MovieRoutine_82720(_QWORD*, int*, __int64, __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_src_7bce0(_QWORD*, __int64, _DWORD*, __int64);
__int64 opus_src_7e740(_QWORD*, __int64, _QWORD*, __int64, int);
__int64 opus_src_825a0(__int64, int*, __int64);
unsigned __int64 MovieRoutine_7d020(int, int*);
__int64 opus_src_7c480(_QWORD* a1, int* a2);

__int64 opus_src_7c480(_QWORD* a1, int* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _DWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _DWORD* v21;
  unsigned __int64 v22;
  char* v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int8* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 i;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _DWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  _DWORD* v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  bool v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v73;
  unsigned __int8* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int* v78;
  int* v79;
  __int64 v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int* v91;
  int* v92;
  __int64 j;
  int v94;
  int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int* v102;
  _DWORD* v103;
  __int64 v104;
  struct {
    __int64 v106;
    __int64 v107;
    char* v108;
    __int64 v109;
    _QWORD* v110;
    _QWORD* v111;
  } v106_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v2 = *a1;
  v5 = *(int*)(*a1 + 4LL);
  v6 = *(_QWORD*)(*(_QWORD*)(*a1 + 48LL) + 8LL * a1[11]);
  v106_.v110 = *(_QWORD**)(*a1 + 48LL);
  v106_.v107 = v6;
  v7 = (__int64*)((char*)&v106_.v106 - ((8 * v5 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt((__int64)v7, 0, 8 * v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v8 = (char*)&v106_.v106 - ((4 * v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v8, 0, 4 * v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  memset_plt((__int64)v8, 0, 4 * v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v9 = v2;
  v106_.v111 = v7;
  memset_plt((__int64)v7, 0, 8 * v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if ((int)v5 >= 1) {
    v11 = 0;
    v106_.v109 = 2 * (v106_.v107 & 0x3FFFFFFFFFFFFFFFLL);
    do {
      if (*a2 < 2) {
        v16 = 0;
      }
      else {
        v16 = *(unsigned __int8*)(*((_QWORD*)a2 + 1) + v11);
      }
      v17 = a2;
      v18 = *((_QWORD*)a2 + 2);
      v19 = v106_.v110;
      v20 = *(unsigned __int8*)(v18 + 2 * v16);
      v21 = *(_DWORD**)(v106_.v110[8] + 8 * v20);
      if (*(_BYTE*)(v106_.v110[7] + v20) != 0) {
        v12 = 4LL * (int)MovieRoutine_7b9d0(v21),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v13 =
            (_DWORD*)((char*)&v106_.v106 - ((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL));
        memset_plt((__int64)v13, 0, v12),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v14 = (__int64)opus_src_7b9e0((__int64)a1, *(_QWORD*)(v19[8] + 8 * v20),
                                      v13),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
      else {
        v22 = 4LL * (int)MovieRoutine_82590(v21),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v23 = (char*)&v106_.v106 - ((v22 + 15) & 0xFFFFFFFFFFFFFFF0LL);
        memset_plt((__int64)v23, 0, v22),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v14 = opus_src_825a0((__int64)a1, *(int**)(v19[8] + 8 * v20),
                             (__int64)v23),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
      v15 = v106_.v109;
      v106_.v111[v11] = v14;
      *(_DWORD*)&v8[4 * v11] = v14 != 0;
      memset_plt(*(_QWORD*)(a1[7] + 8 * v11++), 0, v15),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      v9 = v2;
      a2 = v17;
    } while (v11 < *(int*)(v2 + 4));
  }
  v24 = a2[6];
  v25 = v106_.v110;
  if (v24 < 1) {
    goto LABEL_41;
  }
  v26 = *((_QWORD*)a2 + 4);
  v27 = v24 & 3;
  if ((unsigned int)v24 >= 4) {
    v29 = (unsigned __int8*)(v26 + 3);
    v30 = 0;
    while (1) {
      v32 = *(v29 - 3);
      if (*(_DWORD*)&v8[4 * v32] != 0) {
        v33 = *(v29 - 2);
      }
      else {
        v33 = *(v29 - 2);
        if (*(_DWORD*)&v8[4 * v33] == 0) {
          goto LABEL_22;
        }
      }
      *(_DWORD*)&v8[4 * v32] = 1;
      *(_DWORD*)&v8[4 * v33] = 1;
    LABEL_22:
      v34 = *(v29 - 1);
      if (*(_DWORD*)&v8[4 * v34] != 0) {
        v35 = *v29;
      }
      else {
        v35 = *v29;
        if (*(_DWORD*)&v8[4 * v35] == 0) {
          goto LABEL_26;
        }
      }
      *(_DWORD*)&v8[4 * v34] = 1;
      *(_DWORD*)&v8[4 * v35] = 1;
    LABEL_26:
      v36 = v29[1];
      if (*(_DWORD*)&v8[4 * v36] != 0) {
        v37 = v29[2];
      }
      else {
        v37 = v29[2];
        if (*(_DWORD*)&v8[4 * v37] == 0) {
          goto LABEL_30;
        }
      }
      *(_DWORD*)&v8[4 * v36] = 1;
      *(_DWORD*)&v8[4 * v37] = 1;
    LABEL_30:
      v38 = v29[3];
      if (*(_DWORD*)&v8[4 * v38] != 0) {
        v31 = v29[4];
      }
      else {
        v31 = v29[4];
        if (*(_DWORD*)&v8[4 * v31] == 0) {
          goto LABEL_17;
        }
      }
      *(_DWORD*)&v8[4 * v38] = 1;
      *(_DWORD*)&v8[4 * v31] = 1;
    LABEL_17:
      v30 -= 4;
      v29 += 8;
      if (-(__int64)(v24 & 0x7FFFFFFC) == v30) {
        v28 = -v30;
        if ((v24 & 3) == 0) {
          goto LABEL_41;
        }
      LABEL_34:
        v39 = (unsigned __int8*)(v26 + 2 * v28 + 1);
        while (2) {
          v41 = *(v39 - 1);
          if (*(_DWORD*)&v8[4 * v41] != 0) {
            v40 = *v39;
          }
          else {
            v40 = *v39;
            if (*(_DWORD*)&v8[4 * v40] == 0) {
            LABEL_37:
              v39 += 2;
              if (--v27 == 0) {
                goto LABEL_41;
              }
              continue;
            }
          }
          break;
        }
        *(_DWORD*)&v8[4 * v41] = 1;
        *(_DWORD*)&v8[4 * v40] = 1;
        goto LABEL_37;
      }
    }
  }
  v28 = 0;
  if ((v24 & 3) != 0) {
    goto LABEL_34;
  }
LABEL_41:
  if (*a2 >= 1) {
    v42 = 0;
    v106_.v108 = v8 + 16;
    v106_.v109 = (__int64)(v7 + 4);
    while (1) {
      v43 = *(_DWORD*)(v9 + 4);
      if (v43 < 1) {
        LODWORD(v10) = 0;
      }
      else {
        v44 = *((_QWORD*)a2 + 1);
        if (v44 != 0) {
          if ((unsigned int)v43 < 8) {
            v45 = 0;
            LODWORD(v10) = 0;
          LABEL_49:
            for (i = v43 & 7; i != 0; --i) {
              if (v42 == *(unsigned __int8*)(v44 + v45)) {
                *(_DWORD*)&v8[4 * (int)v10] = *(_DWORD*)&v8[4 * v45] != 0;
                v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45);
                LODWORD(v10) = v10 + 1;
              }
              ++v45;
            }
            goto LABEL_44;
          }
          v50 = v44 + 3;
          v45 = 0;
          LODWORD(v10) = 0;
          v51 = v8 + 16;
          while (2) {
            v52 = v50 + v45;
            if (v42 == *(unsigned __int8*)(v44 + v45)) {
              *(_DWORD*)&v8[4 * (int)v10] = *(v51 - 4) != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45);
              LODWORD(v10) = v10 + 1;
              if (v42 == *(unsigned __int8*)(v52 - 2)) {
                goto LABEL_69;
              }
            LABEL_61:
              if (v42 != *(unsigned __int8*)(v50 + v45 - 1)) {
                goto LABEL_62;
              }
            LABEL_70:
              *(_DWORD*)&v8[4 * (int)v10] = *(v51 - 2) != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 16);
              LODWORD(v10) = v10 + 1;
              if (v42 == *(unsigned __int8*)(v50 + v45)) {
                goto LABEL_71;
              }
            LABEL_63:
              v53 = v50 + v45;
              if (v42 != *(unsigned __int8*)(v50 + v45 + 1)) {
                goto LABEL_64;
              }
            LABEL_72:
              *(_DWORD*)&v8[4 * (int)v10] = *(_DWORD*)v51 != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 32);
              LODWORD(v10) = v10 + 1;
              if (v42 == *(unsigned __int8*)(v53 + 2)) {
                goto LABEL_73;
              }
            LABEL_65:
              v54 = v50 + v45;
              if (v42 != *(unsigned __int8*)(v50 + v45 + 3)) {
                goto LABEL_66;
              }
            LABEL_74:
              *(_DWORD*)&v8[4 * (int)v10] = v51[2] != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 48);
              LODWORD(v10) = v10 + 1;
              if (v42 == *(unsigned __int8*)(v54 + 4)) {
              LABEL_75:
                *(_DWORD*)&v8[4 * (int)v10] = v51[3] != 0;
                v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 56);
                LODWORD(v10) = v10 + 1;
              }
            }
            else {
              if (v42 != *(unsigned __int8*)(v52 - 2)) {
                goto LABEL_61;
              }
            LABEL_69:
              *(_DWORD*)&v8[4 * (int)v10] = *(v51 - 3) != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 8);
              LODWORD(v10) = v10 + 1;
              if (v42 == *(unsigned __int8*)(v50 + v45 - 1)) {
                goto LABEL_70;
              }
            LABEL_62:
              if (v42 != *(unsigned __int8*)(v50 + v45)) {
                goto LABEL_63;
              }
            LABEL_71:
              *(_DWORD*)&v8[4 * (int)v10] = *(v51 - 1) != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 24);
              LODWORD(v10) = v10 + 1;
              v53 = v50 + v45;
              if (v42 == *(unsigned __int8*)(v50 + v45 + 1)) {
                goto LABEL_72;
              }
            LABEL_64:
              if (v42 != *(unsigned __int8*)(v53 + 2)) {
                goto LABEL_65;
              }
            LABEL_73:
              *(_DWORD*)&v8[4 * (int)v10] = v51[1] != 0;
              v7[(int)v10] = *(_QWORD*)(a1[7] + 8 * v45 + 40);
              LODWORD(v10) = v10 + 1;
              v54 = v50 + v45;
              if (v42 == *(unsigned __int8*)(v50 + v45 + 3)) {
                goto LABEL_74;
              }
            LABEL_66:
              if (v42 == *(unsigned __int8*)(v54 + 4)) {
                goto LABEL_75;
              }
            }
            v45 += 8;
            v51 += 8;
            if ((v43 & 0x7FFFFFF8) == v45) {
              goto LABEL_49;
            }
            continue;
          }
        }
        v47 = a1[7];
        if ((unsigned int)v43 >= 8) {
          v55 = v106_.v108;
          v56 = (_QWORD*)v106_.v109;
          v57 = (_QWORD*)(v47 + 32);
          v58 = 0;
          v59 = v8 + 16;
          do {
            v60 = *(v59 - 3);
            v58 -= 8;
            *((_DWORD*)v55 - 4) = *(v59 - 4) != 0;
            *(v56 - 4) = *(v57 - 4);
            *((_DWORD*)v55 - 3) = v60 != 0;
            *(v56 - 3) = *(v57 - 3);
            v61 = *(v59 - 1);
            *((_DWORD*)v55 - 2) = *(v59 - 2) != 0;
            *(v56 - 2) = *(v57 - 2);
            *((_DWORD*)v55 - 1) = v61 != 0;
            *(v56 - 1) = *(v57 - 1);
            v62 = v59[1];
            *(_DWORD*)v55 = *(_DWORD*)v59 != 0;
            *v56 = *v57;
            *((_DWORD*)v55 + 1) = v62 != 0;
            v56[1] = v57[1];
            v63 = v59[2];
            v64 = v59[3];
            v59 += 8;
            *((_DWORD*)v55 + 2) = v63 != 0;
            v56[2] = v57[2];
            *((_DWORD*)v55 + 3) = v64 != 0;
            v55 += 32;
            v65 = v57[3];
            v57 += 8;
            v56[3] = v65;
            v56 += 8;
          } while (-(__int64)(v43 & 0x7FFFFFF8) != v58);
          v10 = -v58;
          v48 = -v58;
          v49 = v43 & 7;
          if (v49 == 0) {
            goto LABEL_44;
          }
          do {
          LABEL_79:
            LODWORD(v10) = v48 + 1;
            --v49;
            *(_DWORD*)&v8[4 * v48] = *(_DWORD*)&v8[4 * v48] != 0;
            v7[v48] = *(_QWORD*)(v47 + 8 * v48);
            ++v48;
          } while (v49 != 0);
          goto LABEL_44;
        }
        v48 = 0;
        v49 = v43 & 7;
        if (v49 != 0) {
          goto LABEL_79;
        }
      }
    LABEL_44:
      opus_src_7e740(a1,
                     v25[9] + 48LL * *(unsigned __int8*)(*((_QWORD*)a2 + 2) +
                                                         2 * v42++ + 1),
                     v7, (__int64)v8, v10),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if (v42 >= *a2) {
        v24 = a2[6];
        break;
      }
    }
  }
  v66 = v106_.v107;
  v67 = __OFSUB__(v24, 1);
  v68 = (unsigned int)(v24 - 1);
  if ((int)v68 < 0 == v67 && v106_.v107 >= 2) {
    v69 = v106_.v107 / 2 - 1;
    v70 = (v106_.v107 / 2) & 3;
    v71 = -((v106_.v107 / 2) & 0x3FFFFFFFFFFFFFFCLL);
    do {
      v73 = a1[7];
      v74 = (unsigned __int8*)(*((_QWORD*)a2 + 4) + 2 * v68);
      v75 = *(_QWORD*)(v73 + 8LL * *v74);
      v76 = *(_QWORD*)(v73 + 8LL * v74[1]);
      if (v69 < 3) {
        v77 = 0;
        if (v70 != 0) {
          goto LABEL_124;
        }
        continue;
      }
      v78 = (int*)(v75 + 8);
      v79 = (int*)(v76 + 8);
      v80 = 0;
      do {
        v82 = *(v78 - 2);
        v83 = *(v79 - 2);
        if (v82 <= 0) {
          if (v83 > 0) {
            v84 = v83 + v82;
          LABEL_98:
            *(v79 - 2) = v84;
            v85 = *(v78 - 1);
            v86 = *(v79 - 1);
            if (v85 > 0) {
              goto LABEL_101;
            }
            goto LABEL_107;
          }
          *(v79 - 2) = v82;
          *(v78 - 2) = v82 - v83;
          v85 = *(v78 - 1);
          v86 = *(v79 - 1);
          if (v85 > 0) {
          LABEL_101:
            if (v86 <= 0) {
              *(v79 - 1) = v85;
              *(v78 - 1) = v86 + v85;
              v87 = *v78;
              v88 = *v79;
              if (*v78 > 0) {
                goto LABEL_109;
              }
            }
            else {
              *(v79 - 1) = v85 - v86;
              v87 = *v78;
              v88 = *v79;
              if (*v78 > 0) {
                goto LABEL_109;
              }
            }
            goto LABEL_115;
          }
        }
        else {
          if (v83 > 0) {
            v84 = v82 - v83;
            goto LABEL_98;
          }
          *(v79 - 2) = v82;
          *(v78 - 2) = v83 + v82;
          v85 = *(v78 - 1);
          v86 = *(v79 - 1);
          if (v85 > 0) {
            goto LABEL_101;
          }
        }
      LABEL_107:
        if (v86 <= 0) {
          *(v79 - 1) = v85;
          *(v78 - 1) = v85 - v86;
          v87 = *v78;
          v88 = *v79;
          if (*v78 > 0) {
          LABEL_109:
            if (v88 <= 0) {
              *v79 = v87;
              *v78 = v88 + v87;
              v89 = v78[1];
              v90 = v79[1];
              if (v89 <= 0) {
                goto LABEL_120;
              }
            }
            else {
              *v79 = v87 - v88;
              v89 = v78[1];
              v90 = v79[1];
              if (v89 <= 0) {
                goto LABEL_120;
              }
            }
            goto LABEL_117;
          }
        }
        else {
          *(v79 - 1) = v86 + v85;
          v87 = *v78;
          v88 = *v79;
          if (*v78 > 0) {
            goto LABEL_109;
          }
        }
      LABEL_115:
        if (v88 <= 0) {
          *v79 = v87;
          *v78 = v87 - v88;
          v89 = v78[1];
          v90 = v79[1];
          if (v89 <= 0) {
          LABEL_120:
            if (v90 > 0) {
              v81 = v90 + v89;
              goto LABEL_91;
            }
            v79[1] = v89;
            v78[1] = v89 - v90;
            goto LABEL_92;
          }
        }
        else {
          *v79 = v88 + v87;
          v89 = v78[1];
          v90 = v79[1];
          if (v89 <= 0) {
            goto LABEL_120;
          }
        }
      LABEL_117:
        if (v90 > 0) {
          v81 = v89 - v90;
        LABEL_91:
          v79[1] = v81;
          goto LABEL_92;
        }
        v79[1] = v89;
        v78[1] = v90 + v89;
      LABEL_92:
        v80 -= 4;
        v78 += 4;
        v79 += 4;
      } while (v71 != v80);
      v77 = -v80;
      if (v70 != 0) {
      LABEL_124:
        v91 = (int*)(v76 + 4 * v77);
        v92 = (int*)(v75 + 4 * v77);
        for (j = (v66 / 2) & 3; j != 0; --j) {
          v95 = *v92;
          v96 = *v91;
          if (*v92 <= 0) {
            if (v96 <= 0) {
              *v91 = v95;
              *v92 = v95 - v96;
              goto LABEL_127;
            }
            v94 = v96 + v95;
          }
          else {
            if (v96 <= 0) {
              *v91 = v95;
              *v92 = v96 + v95;
              goto LABEL_127;
            }
            v94 = v95 - v96;
          }
          *v91 = v94;
        LABEL_127:
          ++v91;
          ++v92;
        }
      }
    } while (v68-- > 0);
  }
  if (*(int*)(v9 + 4) >= 1) {
    v97 = 0;
    do {
      while (1) {
        v99 = *a2 < 2 ? 0LL : *(unsigned __int8*)(*((_QWORD*)a2 + 1) + v97);
        v100 = *(_QWORD*)(a1[7] + 8 * v97);
        v101 = *(unsigned __int8*)(*((_QWORD*)a2 + 2) + 2 * v99);
        v102 = *(int**)(v25[8] + 8 * v101);
        v103 = (_DWORD*)v106_.v111[v97];
        if (*(_BYTE*)(v25[7] + v101) == 0) {
          break;
        }
        opus_src_7bce0(a1, (__int64)v102, v103, v100),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v98 = *(int*)(v9 + 4);
        if (++v97 >= v98) {
          goto LABEL_142;
        }
      }
      MovieRoutine_82720(a1, v102, (__int64)v103, v100),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      v98 = *(int*)(v9 + 4);
      ++v97;
    } while (v97 < v98);
  LABEL_142:
    if ((int)v98 >= 1) {
      v104 = 0;
      do {
        MovieRoutine_7d020(v66, *(int**)(a1[7] + 8 * v104++)),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      } while (v104 < *(int*)(v9 + 4));
    }
  }
  return 0;
}

#pragma GCC visibility pop
