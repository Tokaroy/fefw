#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BufferAllocator_5b2c60(__int64 result);
__int64 BufferAllocator_5b4b20(__int64, __int64, __int64);
__int64 BufferAllocator_5b4d20(__int64 result, __int64, char);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_5c0280(__int64, __int64, __int64);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5c02d0(__int64, char);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fc7e0(__int64*, __int64);
__int64 nn_5b3d80(__int64, __int64);
long double nn_5b4190(__int64);
float nn_5b3210(unsigned __int8* a1, __int64* a2, __int64 a3);

float nn_5b3210(unsigned __int8* a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  signed int v13;
  signed int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  float result;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  _DWORD* v107;
  _DWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  _QWORD v113[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *((_QWORD*)a1 + 20);
  if (*(_BYTE*)(v3 + 1874) != 0) {
    goto LABEL_2;
  }
  if (*(int*)(v3 + 2400) >= 1 && (v22 = *((_QWORD*)a1 + 124)) != 0 &&
          *(_QWORD*)(v22 + 72) != 0 ||
      *(_DWORD*)(v3 + 2340) != 0 && (v23 = *((_QWORD*)a1 + 125)) != 0 &&
          *(_QWORD*)(v23 + 72) != 0) {
    LOBYTE(v6) = 1;
    goto LABEL_3;
  }
  if (*(int*)(*((_QWORD*)a1 + 71) + 816LL) < 1) {
  LABEL_2:
    LOBYTE(v6) = 0;
  }
  else {
    v6 = *((_QWORD*)a1 + 126);
    if (v6 != 0) {
      LOBYTE(v6) = *(_QWORD*)(v6 + 72) != 0;
    }
  }
LABEL_3:
  v7 = *((_DWORD*)a1 + 9);
  a1[1504] = v6;
  if (v7 == 0) {
    v7 = nn_5b3d80((__int64)a1, a3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v7 == 0) {
      GameRoutine_5c02b0(a1, 2),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      return result;
    }
  }
  if (*((_DWORD*)a1 + 140) == v7) {
    goto LABEL_148;
  }
  BufferAllocator_5b2c60((__int64)a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v8 = *((_QWORD*)a1 + 69);
  if (v8 != 0) {
    --*((_DWORD*)a1 + 526);
    GameRoutine_5c02d0(v8, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    *((_QWORD*)a1 + 69) = 0;
  }
  v9 = *((_QWORD*)a1 + 220);
  if (v9 != 0) {
    BufferAllocator_5b4d20(*((_QWORD*)a1 + 222), v9, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    *((_QWORD*)a1 + 220) = 0;
  }
  v10 = *((_QWORD*)a1 + 20);
  v113[0] = 0;
  v113[1] = 0;
  v11 = *(unsigned __int8*)(v10 + 1874);
  v12 = *(unsigned __int8*)(*(_QWORD*)(*((_QWORD*)a1 + 15) + 32LL) + 54LL);
  if ((v7 & 0x80000001) == 1) {
    v13 = v7 + 1;
  }
  else {
    v13 = v7;
  }
  if (v11 == 2) {
    v14 = (v13 + 31) & 0xFFFFFFE0;
  }
  else {
    v14 = v13;
  }
  GameRoutine_5fc180(v113),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  DWORDn(v113[0], sizeof(v113[0]) / 4 - 1) = 68;
  v15 = GameRoutine_5fc7e0(a2, (__int64)v113),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = 16LL * v14;
  v17 = v16 - 1;
  v18 = (v15 + v16 - 1) & -v15;
  if (v11 != 0) {
    v19 = *a1;
    v20 = 8 * v18;
    v21 = 6 * v18;
  }
  else {
    v24 = 11;
    v25 = 15;
    if (v12 != 0) {
      v24 = 16;
    }
    v19 = *a1;
    if (v12 != 0) {
      v25 = 22;
    }
    v21 = v18 * v24;
    v20 = v18 * v25;
  }
  v26 = *((_QWORD*)a1 + 224);
  v27 = 3 * v18;
  if (v19 != 0) {
    v21 = v20;
  }
  v28 = *(unsigned __int8*)(*((_QWORD*)a1 + 20) + 1875LL);
  *((_QWORD*)a1 + 222) = v26;
  if (v28 == 0) {
    v27 = 0;
  }
  *((_QWORD*)a1 + 223) = v21 + v27;
  v29 = BufferAllocator_5b4b20(v26, v21 + v27, *(_QWORD*)(v26 + 456)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  *((_QWORD*)a1 + 220) = v29;
  if (v29 != 0) {
    v31 = *((_QWORD*)a1 + 222);
    *((_QWORD*)a1 + 221) = 0;
    v32 = (*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456);
    v33 = *((_QWORD*)a1 + 223);
    if (v32 <= v33) {
      *((_QWORD*)a1 + 221) = v32;
      v34 = v29;
    }
    else {
      v32 = 0;
      v34 = 0;
    }
    *((_QWORD*)a1 + 25) = v34;
    v35 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v35 <= v33) {
      v36 = v29 + v32;
      *((_QWORD*)a1 + 221) = v35;
      v32 = v35;
    }
    else {
      v36 = 0;
    }
    *((_QWORD*)a1 + 26) = v36;
    v37 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v37 <= v33) {
      v38 = v29 + v32;
      *((_QWORD*)a1 + 221) = v37;
      v32 = v37;
      *((_QWORD*)a1 + 27) = v38;
      if (v11 != 0) {
        goto LABEL_47;
      }
    }
    else {
      v38 = 0;
      *((_QWORD*)a1 + 27) = 0;
      if (v11 != 0) {
      LABEL_47:
        *((_QWORD*)a1 + 36) = v34;
        *((_QWORD*)a1 + 37) = v36;
        *((_QWORD*)a1 + 38) = v38;
        *((_QWORD*)a1 + 47) = v34;
        *((_QWORD*)a1 + 48) = v36;
      LABEL_48:
        *((_QWORD*)a1 + 49) = v38;
        goto LABEL_49;
      }
    }
    v41 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v41 <= v33) {
      v42 = v29 + v32;
      *((_QWORD*)a1 + 221) = v41;
      v32 = v41;
    }
    else {
      v42 = 0;
    }
    *((_QWORD*)a1 + 36) = v42;
    v57 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v57 <= v33) {
      v58 = v29 + v32;
      *((_QWORD*)a1 + 221) = v57;
      v32 = v57;
    }
    else {
      v58 = 0;
    }
    *((_QWORD*)a1 + 37) = v58;
    v60 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v60 <= v33) {
      v64 = v29 + v32;
      *((_QWORD*)a1 + 221) = v60;
      v32 = v60;
      *((_QWORD*)a1 + 38) = v64;
      if (v12 != 0) {
      LABEL_90:
        v65 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v65 <= v33) {
          v66 = v29 + v32;
          *((_QWORD*)a1 + 221) = v65;
          v32 = v65;
        }
        else {
          v66 = 0;
        }
        *((_QWORD*)a1 + 47) = v66;
        v72 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v72 <= v33) {
          v73 = v29 + v32;
          *((_QWORD*)a1 + 221) = v72;
          v32 = v72;
        }
        else {
          v73 = 0;
        }
        *((_QWORD*)a1 + 48) = v73;
        v74 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v74 <= v33) {
          v38 = v29 + v32;
          *((_QWORD*)a1 + 221) = v74;
          v32 = v74;
        }
        else {
          v38 = 0;
        }
        goto LABEL_48;
      }
    }
    else {
      *((_QWORD*)a1 + 38) = 0;
      if (v12 != 0) {
        goto LABEL_90;
      }
    }
  LABEL_49:
    v39 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v39 <= v33) {
      v40 = v29 + v32;
      *((_QWORD*)a1 + 221) = v39;
      v32 = v39;
    }
    else {
      v40 = 0;
    }
    *((_QWORD*)a1 + 28) = v40;
    v43 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v43 <= v33) {
      v44 = v29 + v32;
      *((_QWORD*)a1 + 221) = v43;
      v32 = v43;
      *((_QWORD*)a1 + 30) = v44;
      if (v11 != 0) {
        goto LABEL_57;
      }
    }
    else {
      v44 = 0;
      *((_QWORD*)a1 + 30) = 0;
      if (v11 != 0) {
      LABEL_57:
        *((_QWORD*)a1 + 39) = v40;
        *((_QWORD*)a1 + 41) = v44;
        *((_QWORD*)a1 + 50) = v40;
      LABEL_58:
        *((_QWORD*)a1 + 52) = v44;
        goto LABEL_59;
      }
    }
    v50 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v50 <= v33) {
      v51 = v29 + v32;
      *((_QWORD*)a1 + 221) = v50;
      v32 = v50;
    }
    else {
      v51 = 0;
    }
    *((_QWORD*)a1 + 39) = v51;
    v59 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v59 <= v33) {
      v61 = v29 + v32;
      *((_QWORD*)a1 + 221) = v59;
      v32 = v59;
      *((_QWORD*)a1 + 41) = v61;
      if (v12 != 0) {
      LABEL_87:
        v62 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v62 <= v33) {
          v63 = v29 + v32;
          *((_QWORD*)a1 + 221) = v62;
          v32 = v62;
        }
        else {
          v63 = 0;
        }
        *((_QWORD*)a1 + 50) = v63;
        v71 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v71 <= v33) {
          v44 = v29 + v32;
          *((_QWORD*)a1 + 221) = v71;
          v32 = v71;
        }
        else {
          v44 = 0;
        }
        goto LABEL_58;
      }
    }
    else {
      *((_QWORD*)a1 + 41) = 0;
      if (v12 != 0) {
        goto LABEL_87;
      }
    }
  LABEL_59:
    v45 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
    if (v45 <= v33) {
      v52 = v29 + v32;
      *((_QWORD*)a1 + 221) = v45;
      v32 = v45;
      v46 = *a1;
      v47 = v14;
      *((_QWORD*)a1 + 29) = v52;
      *((_QWORD*)a1 + 40) = v52;
      *((_QWORD*)a1 + 51) = v52;
      if (v46 != 0) {
      LABEL_61:
        v48 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v48 <= v33) {
          v49 = v29 + v32;
          *((_QWORD*)a1 + 221) = v48;
          v32 = v48;
        }
        else {
          v49 = 0;
        }
        *((_QWORD*)a1 + 31) = v49;
        v53 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v53 <= v33) {
          v54 = v29 + v32;
          *((_QWORD*)a1 + 221) = v53;
          v32 = v53;
          *((_QWORD*)a1 + 32) = v54;
          if (v11 != 0) {
            goto LABEL_71;
          }
        }
        else {
          v54 = 0;
          *((_QWORD*)a1 + 32) = 0;
          if (v11 != 0) {
          LABEL_71:
            *((_QWORD*)a1 + 42) = v49;
            *((_QWORD*)a1 + 43) = v54;
            *((_QWORD*)a1 + 53) = v49;
            *((_QWORD*)a1 + 54) = v54;
            goto LABEL_114;
          }
        }
        v55 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v55 <= v33) {
          v56 = v29 + v32;
          *((_QWORD*)a1 + 221) = v55;
          v32 = v55;
        }
        else {
          v56 = 0;
        }
        *((_QWORD*)a1 + 42) = v56;
        v67 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
        if (v67 <= v33) {
          v68 = v29 + v32;
          *((_QWORD*)a1 + 221) = v67;
          v32 = v67;
        }
        else {
          v68 = 0;
        }
        *((_QWORD*)a1 + 43) = v68;
        if (v12 != 0) {
          v69 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
          if (v69 <= v33) {
            v70 = v29 + v32;
            *((_QWORD*)a1 + 221) = v69;
            v32 = v69;
          }
          else {
            v70 = 0;
          }
          *((_QWORD*)a1 + 53) = v70;
          v75 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
          if (v75 <= v33) {
            v76 = v29 + v32;
            *((_QWORD*)a1 + 221) = v75;
            v32 = v75;
            *((_QWORD*)a1 + 54) = v76;
          }
          else {
            *((_QWORD*)a1 + 54) = 0;
          }
        }
      LABEL_114:
        v77 = *((_QWORD*)a1 + 20);
        if (*(_BYTE*)(v77 + 1875) != 0) {
          v78 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
          if (v78 <= v33) {
            v79 = v29 + v32;
            *((_QWORD*)a1 + 221) = v78;
            v32 = v78;
          }
          else {
            v79 = 0;
          }
          *((_QWORD*)a1 + 33) = v79;
          v80 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
          if (v80 <= v33) {
            v81 = v29 + v32;
            *((_QWORD*)a1 + 221) = v80;
            v32 = v80;
          }
          else {
            v81 = 0;
          }
          *((_QWORD*)a1 + 34) = v81;
          v82 = 0;
          v83 = ((*(_QWORD*)(v31 + 456) + v17) & -*(_QWORD*)(v31 + 456)) + v32;
          if (v83 <= v33) {
            v82 = v29 + v32;
            *((_QWORD*)a1 + 221) = v83;
          }
          *((_QWORD*)a1 + 35) = v82;
          *((_QWORD*)a1 + 44) = v79;
          *((_QWORD*)a1 + 45) = v81;
          *((_QWORD*)a1 + 46) = v82;
          *((_QWORD*)a1 + 55) = v79;
          *((_QWORD*)a1 + 56) = v81;
          *((_QWORD*)a1 + 57) = v82;
        }
        else {
          *((_QWORD*)a1 + 34) = 0;
          *((_QWORD*)a1 + 35) = 0;
          *((_QWORD*)a1 + 33) = 0;
          *((_QWORD*)a1 + 44) = 0;
          *((_QWORD*)a1 + 45) = 0;
          *((_QWORD*)a1 + 46) = 0;
          *((_QWORD*)a1 + 55) = 0;
          *((_QWORD*)a1 + 56) = 0;
          *((_QWORD*)a1 + 57) = 0;
        }
        v84 = 32 * v47;
        v85 = 0;
        *((_QWORD*)a1 + 24) = &a1[88 * *((unsigned int*)a1 + 12) + 200];
        if (*(_DWORD*)(*((_QWORD*)a1 + 71) + 136LL) != 0) {
          v86 = 344LL * (int)v47;
        }
        else {
          v86 = 0;
        }
        if (v11 == 0) {
          if (v46 != 0) {
            v87 = 8;
          }
          else {
            v87 = 6;
          }
          if (*(_BYTE*)(v77 + 1875) != 0) {
            v85 = v87 + 6;
          }
          else {
            v85 = v87;
          }
        }
        v88 = v86 + v84 + v85 * v16;
        v89 = GameRoutine_5c0280(v88, 32, 256),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v89 == 0) {
          *((_QWORD*)a1 + 69) = 0;
          return result;
        }
        v90 = *((_QWORD*)a1 + 262);
        v91 = v89;
        *((_QWORD*)a1 + 69) = v89;
        *((_QWORD*)a1 + 22) = v89;
        *((_QWORD*)a1 + 262) = v90 + ((v88 + 255) & 0xFFFFFFFFFFFFFF00LL);
        ++*((_DWORD*)a1 + 526);
        GameRoutine_1a0ba50(v89, 0, 32 * v47),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        if (v11 != 0) {
          v92 = *((_QWORD*)a1 + 26);
          *((_QWORD*)a1 + 58) = *((_QWORD*)a1 + 25);
          *((_QWORD*)a1 + 59) = v92;
          v93 = *((_QWORD*)a1 + 28);
          *((_QWORD*)a1 + 60) = *((_QWORD*)a1 + 27);
          *((_QWORD*)a1 + 61) = v93;
          v94 = *((_QWORD*)a1 + 30);
          *((_QWORD*)a1 + 62) = *((_QWORD*)a1 + 29);
          *((_QWORD*)a1 + 63) = v94;
          v95 = *((_QWORD*)a1 + 32);
          *((_QWORD*)a1 + 64) = *((_QWORD*)a1 + 31);
          *((_QWORD*)a1 + 65) = v95;
          v96 = *((_QWORD*)a1 + 34);
          *((_QWORD*)a1 + 66) = *((_QWORD*)a1 + 33);
          v97 = *((_QWORD*)a1 + 35);
          *((_QWORD*)a1 + 67) = v96;
        }
        else {
          v98 = v91 + v84;
          v84 = v47 << 7;
          *((_QWORD*)a1 + 58) = v98;
          *((_QWORD*)a1 + 59) = v91 + 48LL * (int)v47;
          *((_QWORD*)a1 + 60) = v91 + (v47 << 6);
          *((_QWORD*)a1 + 61) = v91 + 80LL * (int)v47;
          *((_QWORD*)a1 + 62) = v91 + 96LL * (int)v47;
          *((_QWORD*)a1 + 63) = v91 + 112LL * (int)v47;
          if (*a1 != 0) {
            *((_QWORD*)a1 + 64) = v91 + v84;
            v84 = 160 * v47;
            *((_QWORD*)a1 + 65) = v91 + 144LL * (int)v47;
          }
          if (*(_BYTE*)(*((_QWORD*)a1 + 20) + 1875LL) == 0) {
            goto LABEL_144;
          }
          *((_QWORD*)a1 + 66) = v91 + v84;
          v99 = v84 + v16 + v16;
          *((_QWORD*)a1 + 67) = v91 + v84 + v16;
          v97 = v91 + v99;
          v84 = v99 + v16;
        }
        *((_QWORD*)a1 + 68) = v97;
      LABEL_144:
        if (*(_DWORD*)(*((_QWORD*)a1 + 71) + 136LL) != 0) {
          *((_QWORD*)a1 + 23) = v91 + v84;
          GameRoutine_1a0ba50(v91 + v84, 0, v86),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          *((_QWORD*)a1 + 23) = 0;
        }
        *((_DWORD*)a1 + 140) = v7;
        *((_DWORD*)a1 + 141) = 0;
        *((_DWORD*)a1 + 10) = 0;
      LABEL_148:
        nn_5b4190((__int64)a1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        v100 = *((_QWORD*)a1 + 71);
        v101 = *(_QWORD*)(v100 + 16);
        v102 = *(_QWORD*)(v101 + 1952);
        *((_DWORD*)a1 + 386) = *(_DWORD*)(v101 + 1960);
        *((_QWORD*)a1 + 192) = v102;
        v103 = *(_QWORD*)(v100 + 16);
        v104 = *(_DWORD*)(v103 + 1936);
        *(_QWORD*)(a1 + 1548) = *(_QWORD*)(v103 + 1928);
        *((_DWORD*)a1 + 389) = v104;
        v105 = *(_QWORD*)(v100 + 16);
        v106 = *(_QWORD*)(v105 + 1904);
        *((_DWORD*)a1 + 392) = *(_DWORD*)(v105 + 1912);
        *((_QWORD*)a1 + 195) = v106;
        v107 = *(_DWORD**)(v100 + 16);
        *((_DWORD*)a1 + 393) = v107[491];
        *((_DWORD*)a1 + 394) = v107[492];
        *((_DWORD*)a1 + 395) = v107[493];
        v108 = *(_DWORD**)(v100 + 16);
        *((_DWORD*)a1 + 396) = v108[495];
        *((_DWORD*)a1 + 397) = v108[496];
        *((_DWORD*)a1 + 398) = v108[497];
        v109 = *(_QWORD*)(v100 + 16);
        v110 = *(_QWORD*)(v109 + 2496);
        *((_DWORD*)a1 + 419) = *(_DWORD*)(v109 + 2504);
        *(_QWORD*)(a1 + 1668) = v110;
        v111 = *(_QWORD*)(v100 + 16);
        v112 = *(_QWORD*)(v111 + 2152);
        *((_DWORD*)a1 + 422) = *(_DWORD*)(v111 + 2160);
        *((_QWORD*)a1 + 210) = v112;
        *((_DWORD*)a1 + 399) = *(_DWORD*)(*(_QWORD*)(v100 + 16) + 2048LL);
        *((float*)a1 + 402) = (float)*(int*)(*(_QWORD*)(v100 + 16) + 2232LL);
        *((_DWORD*)a1 + 405) = *(_DWORD*)(*(_QWORD*)(v100 + 16) + 1976LL);
        *((_DWORD*)a1 + 408) = *(_DWORD*)(*(_QWORD*)(v100 + 16) + 1992LL);
        *((_DWORD*)a1 + 411) = *(_DWORD*)(*(_QWORD*)(v100 + 16) + 2404LL);
        *((_DWORD*)a1 + 414) = *(_DWORD*)(*(_QWORD*)(v100 + 16) + 2408LL);
        result = *(float*)(*(_QWORD*)(v100 + 16) + 2068LL);
        *((float*)a1 + 423) = result;
        return result;
      }
    }
    else {
      v46 = *a1;
      v47 = v14;
      *((_QWORD*)a1 + 29) = 0;
      *((_QWORD*)a1 + 40) = 0;
      *((_QWORD*)a1 + 51) = 0;
      if (v46 != 0) {
        goto LABEL_61;
      }
    }
    *((_QWORD*)a1 + 31) = 0;
    *((_QWORD*)a1 + 32) = 0;
    *((_QWORD*)a1 + 42) = 0;
    *((_QWORD*)a1 + 43) = 0;
    goto LABEL_114;
  }
  return result;
}

#pragma GCC visibility pop
