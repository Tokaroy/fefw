#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_53b660(__int64, __int64, float*, unsigned int,
                           unsigned int*, float*);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 local_QuickHull_buildHull(__int64);
__int64 local_QuickHull_doPostAdjacentMerge(__int64, float*, float);
__int64 physx_ConvexHullLib_cleanupVertices(__int64, __int64, float*,
                                            unsigned int, unsigned int*,
                                            float*);
__int64 physx_QuickHullConvexHullLib_expandHull(__int64);
__int64 physx_QuickHullConvexHullLib_expandHullOBB(_QWORD*);
bool physx_QuickHullConvexHullLib_cleanupForSimplex(__int64, float*,
                                                    unsigned int, float*,
                                                    float*, float*, float*);
extern char GameData_1a9f09e;
extern int GameData_21a3670;
__int64 physx_source_geomutils_src_cooking_538140(_QWORD* a1);

__int64 physx_source_geomutils_src_cooking_538140(_QWORD* a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  float* v5;
  __int64 v6;
  float* v7;
  float* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 result;
  bool v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  _DWORD* v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  _DWORD* v31;
  float* v32;
  __int64 v33;
  int v34;
  int v35;
  float v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 i;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 j;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  struct {
    int v86;
    float v87;
    __int64 v88;
    int v89;
    __int64 v90;
    __int64 v91;
    int v92;
    __int64 v93;
    int v94;
    __int64 v95;
    __int64 v96;
    int v97;
    __int64 v98;
    int v99;
    __int64 v100;
    __int64 v101;
    int v102;
    __int64 v103;
    int v104;
    __int64 v105;
    __int64 v106;
    int v107;
    __int64 v108;
    int v109;
    __int64 v110;
    __int64 v111;
    int v112;
    __int64 v113;
    int v114;
    __int64 v115;
    __int64 v116;
    int v117;
  } f_;
  unsigned int v118;

  v2 = *(_DWORD*)(a1[1] + 12LL);
  if (v2 <= 8) {
    v2 = 8;
  }
  v3 = 12LL * v2;
  v4 = PxGetBroadcastAllocator(nullptr);
  v5 = (float*)(*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v4 + 16LL))(v4, v3, &GameData_1a9f09e,
                            "/Inside/Lib/PhysX/O/physx/source/geomutils/src/"
                            "cooking/GuCookingQuickHullConvexHullLib.cpp",
                            1859);
  v6 = a1[1];
  v7 = v5;
  v8 = *(float**)v6;
  v10 = *(_DWORD*)(v6 + 8);
  v9 = *(unsigned int*)(v6 + 12);
  if ((*(_WORD*)(v6 + 48) & 0x100) != 0) {
    if ((GameRoutine_53b660((__int64)a1, v9, v8, v10, &v118, v5) & 1) == 0) {
      goto LABEL_5;
    }
  }
  else if ((physx_ConvexHullLib_cleanupVertices((__int64)a1, v9, v8, v10, &v118,
                                                v5) &
            1) == 0) {
  LABEL_5:
    if (v7 != nullptr) {
      v11 = PxGetBroadcastAllocator(nullptr);
      (*(void (**)(__int64, float*))(*(_QWORD*)v11 + 24LL))(v11, v7);
    }
    return 3;
  }
  v13 = physx_QuickHullConvexHullLib_cleanupForSimplex(
      (__int64)a1, v7, v118, (float*)&f_.v103, (float*)&f_.v88, &f_.v87,
      (float*)&f_.v86);
  v14 = a1[7];
  v15 = v118;
  *(_DWORD*)(v14 + 32) = v118;
  if (v15 != 0) {
    v16 = *(_QWORD*)(v14 + 48);
    v17 = v15 & 3;
    if (v15 >= 4) {
      v19 = v15 & 0xFFFFFFFC;
      v20 = (_DWORD*)(v16 + 64);
      v21 = v7 + 6;
      v18 = 0;
      do {
        v22 = *((_QWORD*)v21 - 3);
        *(v20 - 13) = v18;
        *((_QWORD*)v20 - 8) = v22;
        v23 = *(v21 - 4);
        v24 = *(v21 - 3);
        *(v20 - 5) = v18 + 1;
        v20[3] = v18 + 2;
        LODWORD(v22) = v18 + 3;
        v18 += 4;
        v20[11] = v22;
        *(v20 - 14) = v23;
        v25 = *(v21 - 2);
        v26 = *(v21 - 1);
        *(v20 - 8) = v24;
        *(v20 - 7) = v25;
        *(v20 - 6) = v26;
        v27 = v21[1];
        *(_DWORD*)v20 = *(_DWORD*)v21;
        v20[1] = v27;
        v28 = v21[3];
        v20[2] = v21[2];
        v29 = v21[4];
        v30 = v21[5];
        v21 += 12;
        v20[8] = v28;
        v20[9] = v29;
        v20[10] = v30;
        v20 += 32;
      } while (v18 != v19);
    }
    else {
      v18 = 0;
    }
    if (v17 != 0) {
      v31 = (_DWORD*)(v16 + 32 * v18 + 8);
      v32 = &v7[3 * v18 + 2];
      do {
        v33 = *((_QWORD*)v32 - 1);
        v31[1] = v18;
        LODWORD(v18) = v18 + 1;
        --v17;
        *((_QWORD*)v31 - 1) = v33;
        v34 = *(_DWORD*)v32;
        v32 += 3;
        *(_DWORD*)v31 = v34;
        v31 += 8;
      } while (v17 != 0);
    }
  }
  if (v13) {
    v35 = f_.v104;
    v37 = f_.v86;
    v36 = f_.v87;
    v38 = f_.v111;
    *(_QWORD*)(v14 + 144) = f_.v103;
    v39 = f_.v105;
    *(_DWORD*)(v14 + 152) = v35;
    v40 = f_.v88;
    *(_QWORD*)(v14 + 156) = v39;
    v41 = f_.v106;
    *(_QWORD*)(v14 + 240) = v40;
    v42 = f_.v89;
    *(_QWORD*)(v14 + 164) = v41;
    *(_DWORD*)(v14 + 172) = f_.v107;
    *(_QWORD*)(v14 + 252) = f_.v90;
    v43 = v14 + 252;
    v44 = f_.v91;
    *(_DWORD*)(v43 - 4) = v42;
    v45 = f_.v109;
    *(float*)(v43 + 84) = v36;
    *(_DWORD*)(v43 + 88) = v37;
    *(_QWORD*)(v43 + 8) = v44;
    LODWORD(v44) = f_.v92;
    *(_DWORD*)(v43 - 68) = v45;
    v46 = f_.v93;
    *(_DWORD*)(v43 + 16) = v44;
    v47 = f_.v108;
    *(_QWORD*)(v43 + 20) = v46;
    v48 = f_.v94;
    *(_QWORD*)(v43 - 76) = v47;
    *(_QWORD*)(v43 - 64) = f_.v110;
    *(_QWORD*)(v43 - 56) = v38;
    LODWORD(v47) = f_.v112;
    v49 = f_.v95;
    *(_DWORD*)(v43 + 28) = v48;
    v50 = f_.v114;
    *(_DWORD*)(v43 - 48) = v47;
    LODWORD(v47) = f_.v97;
    *(_DWORD*)(v43 - 36) = v50;
    v51 = f_.v99;
    *(_DWORD*)(v43 + 48) = v47;
    v52 = f_.v96;
    *(_DWORD*)(v43 + 60) = v51;
    *(_QWORD*)(v43 + 32) = v49;
    *(_QWORD*)(v43 + 40) = v52;
    *(_QWORD*)(v43 - 44) = f_.v113;
    v53 = f_.v116;
    *(_QWORD*)(v43 - 32) = f_.v115;
    *(_QWORD*)(v43 - 24) = v53;
    LODWORD(v52) = f_.v102;
    *(_DWORD*)(v43 - 16) = f_.v117;
    v54 = f_.v98;
    *(_DWORD*)(v43 + 80) = v52;
    v55 = f_.v101;
    *(_QWORD*)(v43 + 52) = v54;
    *(_QWORD*)(v43 + 64) = f_.v100;
    *(_QWORD*)(v43 + 72) = v55;
    *(_BYTE*)(v43 - 112) = 1;
    v14 = a1[7];
  }
  v56 = local_QuickHull_buildHull(v14);
  result = 3;
  if (v56 <= 1) {
    if (v56 != 0) {
      if (v56 == 1) {
        result = 1;
      }
      goto LABEL_46;
    }
    v59 = a1[7];
    v60 = *(unsigned int*)(v59 + 128);
    if ((_DWORD)v60 != 0) {
      for (i = 0; i < v60; ++i) {
        v62 = *(_QWORD*)(*(_QWORD*)(v59 + 120) + 8 * i);
        if (*(_DWORD*)(v62 + 60) == 0) {
          while ((local_QuickHull_doPostAdjacentMerge(
                      v59, (float*)v62, *(float*)&GameData_21a3670) &
                  1) != 0)
            ;
          v60 = *(unsigned int*)(v59 + 128);
        }
      }
    }
  LABEL_36:
    result = 0;
    goto LABEL_46;
  }
  if (v56 == 2) {
    if ((*(_WORD*)(a1[1] + 48LL) & 0x20) != 0) {
      result = physx_QuickHullConvexHullLib_expandHull((__int64)a1);
      goto LABEL_46;
    }
    physx_QuickHullConvexHullLib_expandHullOBB(a1);
    goto LABEL_36;
  }
  if (v56 == 3) {
    v57 = a1[7];
    v58 = a1[1];
    if (*(_DWORD*)(v57 + 36) <= (unsigned int)*(unsigned __int16*)(v58 + 50)) {
      v63 = *(unsigned int*)(v57 + 128);
      if ((_DWORD)v63 != 0) {
        for (j = 0; j < v63; ++j) {
          v65 = *(_QWORD*)(*(_QWORD*)(v57 + 120) + 8 * j);
          if (*(_DWORD*)(v65 + 60) == 0) {
            while ((local_QuickHull_doPostAdjacentMerge(
                        v57, (float*)v65, *(float*)&GameData_21a3670) &
                    1) != 0)
              ;
            v63 = *(unsigned int*)(v57 + 128);
          }
        }
      }
    }
    else if ((*(_WORD*)(v58 + 48) & 0x20) != 0) {
      physx_QuickHullConvexHullLib_expandHull((__int64)a1);
    }
    else {
      physx_QuickHullConvexHullLib_expandHullOBB(a1);
    }
    result = 2;
  }
LABEL_46:
  if ((result & 1) == 0 && (*(_BYTE*)(a1[2] + 14LL) & 1) != 0 && a1[8] == 0) {
    v66 = a1[7];
    v67 = *(_DWORD*)(v66 + 128);
    if (v67 != 0) {
      v68 = *(_QWORD*)(v66 + 120);
      v69 = v67 & 3;
      if (v67 < 4) {
        v70 = 0;
        v71 = 0;
        if ((v67 & 3) != 0) {
        LABEL_73:
          v83 = v68 + 8 * v70;
          do {
            if (*(_DWORD*)(*(_QWORD*)v83 + 60LL) == 0 &&
                v71 <= *(unsigned __int16*)(*(_QWORD*)v83 + 8LL)) {
              v71 = *(unsigned __int16*)(*(_QWORD*)v83 + 8LL);
            }
            v83 += 8;
            --v69;
          } while (v69 != 0);
        }
      LABEL_78:
        if (v71 >= 0x20) {
          physx_QuickHullConvexHullLib_expandHullOBB(a1);
          result = 0;
        }
        goto LABEL_80;
      }
      v72 = (_QWORD*)(v68 + 16);
      v73 = 0;
      v71 = 0;
      v74 = -(__int64)(v67 & 0xFFFFFFFC);
      while (1) {
        v77 = *(v72 - 2);
        if (*(_DWORD*)(v77 + 60) != 0) {
          v78 = *(v72 - 1);
          if (*(_DWORD*)(v78 + 60) != 0) {
            goto LABEL_60;
          }
        LABEL_65:
          v81 = *(unsigned __int16*)(v78 + 8);
          if (v71 <= v81) {
            v71 = v81;
          }
          v79 = *v72;
          if (*(_DWORD*)(*v72 + 60LL) != 0) {
            goto LABEL_68;
          }
        LABEL_54:
          v75 = *(unsigned __int16*)(v79 + 8);
          if (v71 <= v75) {
            v71 = v75;
          }
          v76 = v72[1];
          if (*(_DWORD*)(v76 + 60) != 0) {
            goto LABEL_57;
          }
        LABEL_69:
          v82 = *(unsigned __int16*)(v76 + 8);
          if (v71 <= v82) {
            v71 = v82;
          }
          v73 -= 4;
          v72 += 4;
          if (v74 == v73) {
          LABEL_72:
            v70 = -v73;
            if (v69 != 0) {
              goto LABEL_73;
            }
            goto LABEL_78;
          }
        }
        else {
          v80 = *(unsigned __int16*)(v77 + 8);
          if (v71 <= v80) {
            v71 = v80;
          }
          v78 = *(v72 - 1);
          if (*(_DWORD*)(v78 + 60) == 0) {
            goto LABEL_65;
          }
        LABEL_60:
          v79 = *v72;
          if (*(_DWORD*)(*v72 + 60LL) == 0) {
            goto LABEL_54;
          }
        LABEL_68:
          v76 = v72[1];
          if (*(_DWORD*)(v76 + 60) == 0) {
            goto LABEL_69;
          }
        LABEL_57:
          v73 -= 4;
          v72 += 4;
          if (v74 == v73) {
            goto LABEL_72;
          }
        }
      }
    }
  }
LABEL_80:
  if (v7 != nullptr) {
    v84 = result;
    v85 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, float*))(*(_QWORD*)v85 + 24LL))(v85, v7);
    return v84;
  }
  return result;
}

#pragma GCC visibility pop
