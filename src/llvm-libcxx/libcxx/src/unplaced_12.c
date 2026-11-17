#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* SdkRoutine_7c8d40(__int64*, __int64*, __int64*);
bool algorithm_7c8a60(__int64*, __int64*);
bool algorithm_7c9880(unsigned __int64*, unsigned __int64*);
char* algorithm_7c9ec0(char*, char*);
unsigned __int64* SdkRoutine_7c9b60(unsigned __int64*, unsigned __int64*,
                                    unsigned __int64*);
unsigned __int64* algorithm_7c90a0(unsigned __int64*, char*);
unsigned __int8 llvm_libcxx_libcxx_src_7bfcc0(unsigned __int64* result,
                                              unsigned __int64* a2, __int64 a3,
                                              __int64 a4, char a5);
unsigned __int8 llvm_libcxx_libcxx_src_7c0300(__int64* result, __int64* a2,
                                              __int64 a3, __int64 a4, char a5);

unsigned __int8 llvm_libcxx_libcxx_src_7bfcc0(unsigned __int64* result,
                                              unsigned __int64* a2, __int64 a3,
                                              __int64 a4, char a5)
{
  unsigned __int64* v7;
  unsigned __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  bool v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64* v54;
  char v55;
  bool v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64* v66;
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
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64* v108;
  bool v110;
  __int64 v111;
  unsigned __int64* v112;
  unsigned __int64* v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;

  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = result;
LABEL_2:
  v8 = v7;
LABEL_3:
  v9 = 1 - a4;
  while (1) {
    v10 = v9;
    v7 = v8;
    v11 = a2 - v8;
    if (v11 > 2) {
      switch (v11) {
      case 3LL:
        v67 = v8[1];
        v68 = *(a2 - 1);
        if (v67 >= v68) {
          v69 = *(a2 - 1);
        }
        else {
          v69 = v8[1];
        }
        if (v67 <= v68) {
          v67 = *(a2 - 1);
        }
        *(a2 - 1) = v67;
        v8[1] = v69;
        v70 = *(a2 - 1);
        if (v70 >= *v8) {
          v71 = *v8;
        }
        else {
          v71 = *(a2 - 1);
        }
        if (v70 <= *v8) {
          v70 = *v8;
        }
        *(a2 - 1) = v70;
        v73 = *v8;
        v72 = v8[1];
        if (v71 >= v72) {
          v73 = v8[1];
        }
        if (v71 > v72) {
          v72 = v71;
        }
        *v8 = v73;
        v8[1] = v72;
        return result;
      case 4LL:
        v97 = v8[1];
        v96 = v8[2];
        if (*v8 >= v96) {
          v98 = v8[2];
        }
        else {
          v98 = *v8;
        }
        if (*v8 > v96) {
          v96 = *v8;
        }
        v8[2] = v96;
        *v8 = v98;
        v99 = *(a2 - 1);
        if (v97 >= v99) {
          v100 = *(a2 - 1);
        }
        else {
          v100 = v97;
        }
        if (v97 > v99) {
          v99 = v97;
        }
        *(a2 - 1) = v99;
        v101 = *v8;
        if (*v8 >= v100) {
          v102 = v100;
        }
        else {
          v102 = *v8;
        }
        if (*v8 <= v100) {
          v101 = v100;
        }
        *v8 = v102;
        v8[1] = v101;
        v103 = v8[2];
        v104 = *(a2 - 1);
        if (v103 >= v104) {
          v105 = *(a2 - 1);
        }
        else {
          v105 = v8[2];
        }
        if (v103 <= v104) {
          v103 = *(a2 - 1);
        }
        *(a2 - 1) = v103;
        v106 = v8[1];
        if (v106 >= v105) {
          v107 = v105;
        }
        else {
          v107 = v8[1];
        }
        if (v106 <= v105) {
          v106 = v105;
        }
        v8[1] = v107;
        v8[2] = v106;
        return result;
      case 5LL:
        v74 = *v8;
        v75 = v8[1];
        if (*v8 >= v75) {
          v76 = v8[1];
        }
        else {
          v76 = *v8;
        }
        if (*v8 <= v75) {
          v74 = v8[1];
        }
        *v8 = v76;
        v8[1] = v74;
        v77 = v8[3];
        v78 = *(a2 - 1);
        if (v77 >= v78) {
          v79 = *(a2 - 1);
        }
        else {
          v79 = v8[3];
        }
        if (v77 <= v78) {
          v77 = *(a2 - 1);
        }
        *(a2 - 1) = v77;
        v8[3] = v79;
        v80 = *(a2 - 1);
        v81 = v8[2];
        if (v80 >= v81) {
          v82 = v8[2];
        }
        else {
          v82 = *(a2 - 1);
        }
        if (v80 <= v81) {
          v80 = v8[2];
        }
        *(a2 - 1) = v80;
        v84 = v8[2];
        v83 = v8[3];
        v85 = v8[1];
        if (v82 >= v83) {
          v84 = v8[3];
        }
        if (v82 > v83) {
          v83 = v82;
        }
        v8[2] = v84;
        v8[3] = v83;
        v86 = *(a2 - 1);
        if (v85 >= v86) {
          v87 = *(a2 - 1);
        }
        else {
          v87 = v85;
        }
        if (v85 > v86) {
          v86 = v85;
        }
        *(a2 - 1) = v86;
        v88 = *v8;
        v90 = v8[2];
        v89 = v8[3];
        if (v89 >= *v8) {
          v91 = *v8;
        }
        else {
          v91 = v8[3];
        }
        if (v89 <= *v8) {
          v89 = *v8;
        }
        if (v91 >= v90) {
          v88 = v8[2];
        }
        if (v91 > v90) {
          v90 = v91;
        }
        if (v89 >= v87) {
          v92 = v87;
        }
        else {
          v92 = v89;
        }
        if (v89 <= v87) {
          v89 = v87;
        }
        if (v92 >= v90) {
          v87 = v90;
        }
        *v8 = v88;
        v8[1] = v87;
        if (v92 <= v90) {
          v93 = v90;
        }
        else {
          v93 = v92;
        }
        v8[2] = v93;
        v8[3] = v89;
        return result;
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        v94 = *(a2 - 1);
        v95 = *v8;
        if (v94 < *v8) {
          *v8 = v94;
          *(a2 - 1) = v95;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (v9 == 1) {
      if (v8 != a2) {
        return SdkRoutine_7c9b60(v8, a2, a2);
      }
      return result;
    }
    v12 = *(a2 - 1);
    v13 = &v8[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      v45 = *v8;
      if (*v8 >= v12) {
        v46 = *(a2 - 1);
      }
      else {
        v46 = *v8;
      }
      if (*v8 <= v12) {
        v45 = *(a2 - 1);
      }
      *(a2 - 1) = v45;
      *v8 = v46;
      v47 = *(a2 - 1);
      if (v47 >= *v13) {
        v48 = *v13;
      }
      else {
        v48 = *(a2 - 1);
      }
      if (v47 <= *v13) {
        v47 = *v13;
      }
      *(a2 - 1) = v47;
      v49 = *v8;
      v50 = v48 >= *v8;
      if (v48 < *v8) {
        v49 = *v13;
      }
      *v13 = v49;
      v51 = *v8;
      if (v50) {
        v51 = v48;
      }
      *v8 = v51;
      if ((a5 & 1) != 0) {
        goto LABEL_93;
      }
    }
    else {
      v14 = *v13;
      if (*v13 >= v12) {
        v15 = *(a2 - 1);
      }
      else {
        v15 = *v13;
      }
      if (*v13 <= v12) {
        v14 = *(a2 - 1);
      }
      *(a2 - 1) = v14;
      *v13 = v15;
      v16 = *(a2 - 1);
      if (v16 >= *v8) {
        v17 = *v8;
      }
      else {
        v17 = *(a2 - 1);
      }
      if (v16 <= *v8) {
        v16 = *v8;
      }
      *(a2 - 1) = v16;
      v18 = *v13;
      v19 = v17 >= *v13;
      if (v17 < *v13) {
        v18 = *v8;
      }
      *v8 = v18;
      v21 = *(v13 - 1);
      v20 = *v13;
      if (v19) {
        v20 = v17;
      }
      *v13 = v20;
      v22 = *(a2 - 2);
      if (v21 >= v22) {
        v23 = *(a2 - 2);
      }
      else {
        v23 = v21;
      }
      if (v21 > v22) {
        v22 = v21;
      }
      *(a2 - 2) = v22;
      *(v13 - 1) = v23;
      v24 = *(a2 - 2);
      v25 = v8[1];
      if (v24 >= v25) {
        v26 = v8[1];
      }
      else {
        v26 = *(a2 - 2);
      }
      if (v24 <= v25) {
        v24 = v8[1];
      }
      *(a2 - 2) = v24;
      v27 = *(v13 - 1);
      v28 = v26 >= v27;
      if (v26 < v27) {
        v27 = v8[1];
      }
      v8[1] = v27;
      v29 = *(v13 - 1);
      if (v28) {
        v29 = v26;
      }
      *(v13 - 1) = v29;
      v30 = v13[1];
      v31 = *(a2 - 3);
      if (v30 >= v31) {
        v32 = *(a2 - 3);
      }
      else {
        v32 = v13[1];
      }
      if (v30 <= v31) {
        v30 = *(a2 - 3);
      }
      *(a2 - 3) = v30;
      v13[1] = v32;
      v33 = *(a2 - 3);
      v34 = v8[2];
      if (v33 >= v34) {
        v35 = v8[2];
      }
      else {
        v35 = *(a2 - 3);
      }
      if (v33 <= v34) {
        v33 = v8[2];
      }
      *(a2 - 3) = v33;
      v36 = v13[1];
      v37 = v35 >= v36;
      if (v35 < v36) {
        v36 = v8[2];
      }
      v8[2] = v36;
      v39 = *v13;
      v38 = v13[1];
      if (v37) {
        v38 = v35;
      }
      v40 = *(v13 - 1);
      if (v39 >= v38) {
        v41 = v38;
      }
      else {
        v41 = *v13;
      }
      if (v39 > v38) {
        v38 = *v13;
      }
      if (v38 >= v40) {
        v42 = *(v13 - 1);
      }
      else {
        v42 = v38;
      }
      if (v38 <= v40) {
        v38 = *(v13 - 1);
      }
      v13[1] = v38;
      if (v40 >= v41) {
        v43 = v41;
      }
      else {
        v43 = v40;
      }
      if (v40 < v41) {
        v42 = v41;
      }
      *(v13 - 1) = v43;
      *v13 = v42;
      v44 = *v8;
      *v8 = v42;
      *v13 = v44;
      if ((a5 & 1) != 0) {
        goto LABEL_93;
      }
    }
    v52 = *v8;
    if (*(v8 - 1) >= *v8) {
      if (v52 >= *(a2 - 1)) {
        v59 = (unsigned __int64)(v8 + 1);
        do {
          v8 = (unsigned __int64*)v59;
          if (v59 >= (unsigned __int64)a2) {
            break;
          }
          v59 += 8LL;
        } while (v52 >= *v8);
      }
      else {
        do {
          v58 = v8[1];
          ++v8;
        } while (v52 >= v58);
      }
      v60 = a2;
      if (v8 < a2) {
        v60 = a2;
        do {
          v61 = *--v60;
        } while (v52 < v61);
      }
      if (v8 < v60) {
        v62 = *v8;
        v63 = *v60;
        do {
          *v8 = v63;
          *v60 = v62;
          do {
            v64 = v8[1];
            ++v8;
            v62 = v64;
          } while (v52 >= v64);
          do {
            v65 = *--v60;
            v63 = v65;
          } while (v52 < v65);
        } while (v8 < v60);
      }
      v66 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v66;
      }
      *v66 = v52;
      goto LABEL_115;
    }
  LABEL_93:
    v54 = algorithm_7c90a0(v8, (char*)a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v55 & 1) == 0) {
      goto LABEL_96;
    }
    v56 = algorithm_7c9880(v8, v54),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v54 + 1;
    v57 = v56;
    result = (unsigned __int64*)algorithm_7c9880(v54 + 1, a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v10;
      a2 = v54;
      if (v57) {
        return result;
      }
      goto LABEL_2;
    }
    v9 = v10 + 1;
    if (!v57) {
    LABEL_96:
      result = llvm_libcxx_libcxx_src_7bfcc0(v7, v54, v53, -v10, a5 & 1),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v54 + 1;
    LABEL_115:
      a5 = 0;
      a4 = -v10;
      goto LABEL_3;
    }
  }
  v108 = v8 + 1;
  v110 = v8 == a2 | v108 == a2;
  if ((a5 & 1) != 0) {
    if (!v110) {
      v111 = 0;
      v112 = v8;
      do {
        v115 = *v112;
        v114 = v112[1];
        v112 = v108;
        if (v114 < v115) {
          v116 = v111;
          do {
            *(unsigned __int64*)((char*)v8 + v116 + 8) = v115;
            if (v116 == 0) {
              v113 = v8;
              goto LABEL_215;
            }
            v115 = *(unsigned __int64*)((char*)v8 + v116 - 8);
            v116 -= 8;
          } while (v114 < v115);
          v113 = (unsigned __int64*)((char*)v8 + v116 + 8);
        LABEL_215:
          *v113 = v114;
        }
        v108 = v112 + 1;
        v111 += 8;
      } while (v112 + 1 != a2);
    }
  }
  else if (!v110) {
    do {
      v118 = *v7;
      v117 = v7[1];
      v7 = v108;
      if (v117 < v118) {
        do {
          *v108 = v118;
          v118 = *(v108 - 2);
          --v108;
        } while (v117 < v118);
        *v108 = v117;
      }
      v108 = v7 + 1;
    } while (v7 + 1 != a2);
  }
  return result;
}

unsigned __int8 llvm_libcxx_libcxx_src_7c0300(__int64* result, __int64* a2,
                                              __int64 a3, __int64 a4, char a5)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
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
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  char v55;
  bool v56;
  bool v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
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
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64* v108;
  bool v110;
  __int64 v111;
  __int64* v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;

  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = result;
LABEL_2:
  v8 = v7;
LABEL_3:
  v9 = 1 - a4;
  while (1) {
    v10 = v9;
    v7 = v8;
    v11 = a2 - v8;
    if (v11 > 2) {
      switch (v11) {
      case 3LL:
        v67 = v8[1];
        v68 = *(a2 - 1);
        if (v67 >= v68) {
          v69 = *(a2 - 1);
        }
        else {
          v69 = v8[1];
        }
        if (v67 <= v68) {
          v67 = *(a2 - 1);
        }
        *(a2 - 1) = v67;
        v8[1] = v69;
        v70 = *(a2 - 1);
        if (v70 >= *v8) {
          v71 = *v8;
        }
        else {
          v71 = *(a2 - 1);
        }
        if (v70 <= *v8) {
          v70 = *v8;
        }
        *(a2 - 1) = v70;
        v73 = *v8;
        v72 = v8[1];
        if (v71 >= v72) {
          v73 = v8[1];
        }
        if (v71 > v72) {
          v72 = v71;
        }
        *v8 = v73;
        v8[1] = v72;
        return result;
      case 4LL:
        v97 = v8[1];
        v96 = v8[2];
        if (*v8 >= v96) {
          v98 = v8[2];
        }
        else {
          v98 = *v8;
        }
        if (*v8 > v96) {
          v96 = *v8;
        }
        v8[2] = v96;
        *v8 = v98;
        v99 = *(a2 - 1);
        if (v97 >= v99) {
          v100 = *(a2 - 1);
        }
        else {
          v100 = v97;
        }
        if (v97 > v99) {
          v99 = v97;
        }
        *(a2 - 1) = v99;
        v101 = *v8;
        if (*v8 >= v100) {
          v102 = v100;
        }
        else {
          v102 = *v8;
        }
        if (*v8 <= v100) {
          v101 = v100;
        }
        *v8 = v102;
        v8[1] = v101;
        v103 = v8[2];
        v104 = *(a2 - 1);
        if (v103 >= v104) {
          v105 = *(a2 - 1);
        }
        else {
          v105 = v8[2];
        }
        if (v103 <= v104) {
          v103 = *(a2 - 1);
        }
        *(a2 - 1) = v103;
        v106 = v8[1];
        if (v106 >= v105) {
          v107 = v105;
        }
        else {
          v107 = v8[1];
        }
        if (v106 <= v105) {
          v106 = v105;
        }
        v8[1] = v107;
        v8[2] = v106;
        return result;
      case 5LL:
        v74 = *v8;
        v75 = v8[1];
        if (*v8 >= v75) {
          v76 = v8[1];
        }
        else {
          v76 = *v8;
        }
        if (*v8 <= v75) {
          v74 = v8[1];
        }
        *v8 = v76;
        v8[1] = v74;
        v77 = v8[3];
        v78 = *(a2 - 1);
        if (v77 >= v78) {
          v79 = *(a2 - 1);
        }
        else {
          v79 = v8[3];
        }
        if (v77 <= v78) {
          v77 = *(a2 - 1);
        }
        *(a2 - 1) = v77;
        v8[3] = v79;
        v80 = *(a2 - 1);
        v81 = v8[2];
        if (v80 >= v81) {
          v82 = v8[2];
        }
        else {
          v82 = *(a2 - 1);
        }
        if (v80 <= v81) {
          v80 = v8[2];
        }
        *(a2 - 1) = v80;
        v84 = v8[2];
        v83 = v8[3];
        v85 = v8[1];
        if (v82 >= v83) {
          v84 = v8[3];
        }
        if (v82 > v83) {
          v83 = v82;
        }
        v8[2] = v84;
        v8[3] = v83;
        v86 = *(a2 - 1);
        if (v85 >= v86) {
          v87 = *(a2 - 1);
        }
        else {
          v87 = v85;
        }
        if (v85 > v86) {
          v86 = v85;
        }
        *(a2 - 1) = v86;
        v88 = *v8;
        v90 = v8[2];
        v89 = v8[3];
        if (v89 >= *v8) {
          v91 = *v8;
        }
        else {
          v91 = v8[3];
        }
        if (v89 <= *v8) {
          v89 = *v8;
        }
        if (v91 >= v90) {
          v88 = v8[2];
        }
        if (v91 > v90) {
          v90 = v91;
        }
        if (v89 >= v87) {
          v92 = v87;
        }
        else {
          v92 = v89;
        }
        if (v89 <= v87) {
          v89 = v87;
        }
        if (v92 >= v90) {
          v87 = v90;
        }
        *v8 = v88;
        v8[1] = v87;
        if (v92 <= v90) {
          v93 = v90;
        }
        else {
          v93 = v92;
        }
        v8[2] = v93;
        v8[3] = v89;
        return result;
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        v94 = *(a2 - 1);
        v95 = *v8;
        if (v94 < *v8) {
          *v8 = v94;
          *(a2 - 1) = v95;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (v9 == 1) {
      if (v8 != a2) {
        return SdkRoutine_7c8d40(v8, a2, a2);
      }
      return result;
    }
    v12 = *(a2 - 1);
    v13 = &v8[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      v45 = *v8;
      if (*v8 >= v12) {
        v46 = *(a2 - 1);
      }
      else {
        v46 = *v8;
      }
      if (*v8 <= v12) {
        v45 = *(a2 - 1);
      }
      *(a2 - 1) = v45;
      *v8 = v46;
      v47 = *(a2 - 1);
      if (v47 >= *v13) {
        v48 = *v13;
      }
      else {
        v48 = *(a2 - 1);
      }
      if (v47 <= *v13) {
        v47 = *v13;
      }
      *(a2 - 1) = v47;
      v49 = *v8;
      v50 = v48 < *v8;
      if (v48 < *v8) {
        v49 = *v13;
      }
      *v13 = v49;
      v51 = *v8;
      if (!v50) {
        v51 = v48;
      }
      *v8 = v51;
      if ((a5 & 1) != 0) {
        goto LABEL_89;
      }
    }
    else {
      v14 = *v13;
      if (*v13 >= v12) {
        v15 = *(a2 - 1);
      }
      else {
        v15 = *v13;
      }
      if (*v13 <= v12) {
        v14 = *(a2 - 1);
      }
      *(a2 - 1) = v14;
      *v13 = v15;
      v16 = *(a2 - 1);
      if (v16 >= *v8) {
        v17 = *v8;
      }
      else {
        v17 = *(a2 - 1);
      }
      if (v16 <= *v8) {
        v16 = *v8;
      }
      *(a2 - 1) = v16;
      v18 = *v13;
      v19 = v17 < *v13;
      if (v17 < *v13) {
        v18 = *v8;
      }
      *v8 = v18;
      v21 = *(v13 - 1);
      v20 = *v13;
      if (!v19) {
        v20 = v17;
      }
      *v13 = v20;
      v22 = *(a2 - 2);
      if (v21 >= v22) {
        v23 = *(a2 - 2);
      }
      else {
        v23 = v21;
      }
      if (v21 > v22) {
        v22 = v21;
      }
      *(a2 - 2) = v22;
      *(v13 - 1) = v23;
      v24 = *(a2 - 2);
      v25 = v8[1];
      if (v24 >= v25) {
        v26 = v8[1];
      }
      else {
        v26 = *(a2 - 2);
      }
      if (v24 <= v25) {
        v24 = v8[1];
      }
      *(a2 - 2) = v24;
      v27 = *(v13 - 1);
      v28 = v26 < v27;
      if (v26 < v27) {
        v27 = v8[1];
      }
      v8[1] = v27;
      v29 = *(v13 - 1);
      if (!v28) {
        v29 = v26;
      }
      *(v13 - 1) = v29;
      v30 = v13[1];
      v31 = *(a2 - 3);
      if (v30 >= v31) {
        v32 = *(a2 - 3);
      }
      else {
        v32 = v13[1];
      }
      if (v30 <= v31) {
        v30 = *(a2 - 3);
      }
      *(a2 - 3) = v30;
      v13[1] = v32;
      v33 = *(a2 - 3);
      v34 = v8[2];
      if (v33 >= v34) {
        v35 = v8[2];
      }
      else {
        v35 = *(a2 - 3);
      }
      if (v33 <= v34) {
        v33 = v8[2];
      }
      *(a2 - 3) = v33;
      v36 = v13[1];
      v37 = v35 < v36;
      if (v35 < v36) {
        v36 = v8[2];
      }
      v8[2] = v36;
      v39 = *v13;
      v38 = v13[1];
      if (!v37) {
        v38 = v35;
      }
      v40 = *(v13 - 1);
      if (v39 >= v38) {
        v41 = v38;
      }
      else {
        v41 = *v13;
      }
      if (v39 > v38) {
        v38 = *v13;
      }
      if (v38 >= v40) {
        v42 = *(v13 - 1);
      }
      else {
        v42 = v38;
      }
      if (v38 <= v40) {
        v38 = *(v13 - 1);
      }
      v13[1] = v38;
      if (v40 >= v41) {
        v43 = v41;
      }
      else {
        v43 = v40;
      }
      if (v40 < v41) {
        v42 = v41;
      }
      *(v13 - 1) = v43;
      *v13 = v42;
      v44 = *v8;
      *v8 = v42;
      *v13 = v44;
      if ((a5 & 1) != 0) {
        goto LABEL_89;
      }
    }
    v52 = *v8;
    if (*(v8 - 1) >= *v8) {
      if (v52 >= *(a2 - 1)) {
        v59 = (unsigned __int64)(v8 + 1);
        do {
          v8 = (__int64*)v59;
          if (v59 >= (unsigned __int64)a2) {
            break;
          }
          v59 += 8LL;
        } while (v52 >= *v8);
      }
      else {
        do {
          v58 = v8[1];
          ++v8;
        } while (v52 >= v58);
      }
      v60 = a2;
      if (v8 < a2) {
        v60 = a2;
        do {
          v61 = *--v60;
        } while (v52 < v61);
      }
      if (v8 < v60) {
        v62 = *v8;
        v63 = *v60;
        do {
          *v8 = v63;
          *v60 = v62;
          do {
            v64 = v8[1];
            ++v8;
            v62 = v64;
          } while (v52 >= v64);
          do {
            v65 = *--v60;
            v63 = v65;
          } while (v52 < v65);
        } while (v8 < v60);
      }
      v66 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v66;
      }
      *v66 = v52;
      goto LABEL_111;
    }
  LABEL_89:
    v54 = (__int64*)algorithm_7c9ec0((char*)v8, (char*)a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v55 & 1) == 0) {
      goto LABEL_92;
    }
    v56 = algorithm_7c8a60(v8, v54),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v54 + 1;
    v57 = v56;
    result = (__int64*)algorithm_7c8a60(v54 + 1, a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v10;
      a2 = v54;
      if (v57) {
        return result;
      }
      goto LABEL_2;
    }
    v9 = v10 + 1;
    if (!v57) {
    LABEL_92:
      result = llvm_libcxx_libcxx_src_7c0300(v7, v54, v53, -v10, a5 & 1),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v54 + 1;
    LABEL_111:
      a5 = 0;
      a4 = -v10;
      goto LABEL_3;
    }
  }
  v108 = v8 + 1;
  v110 = v8 == a2 | v108 == a2;
  if ((a5 & 1) != 0) {
    if (!v110) {
      v111 = 0;
      v112 = v8;
      do {
        v115 = *v112;
        v114 = v112[1];
        v112 = v108;
        if (v114 < v115) {
          v116 = v111;
          do {
            *(__int64*)((char*)v8 + v116 + 8) = v115;
            if (v116 == 0) {
              v113 = v8;
              goto LABEL_211;
            }
            v115 = *(__int64*)((char*)v8 + v116 - 8);
            v116 -= 8;
          } while (v114 < v115);
          v113 = (__int64*)((char*)v8 + v116 + 8);
        LABEL_211:
          *v113 = v114;
        }
        v108 = v112 + 1;
        v111 += 8;
      } while (v112 + 1 != a2);
    }
  }
  else if (!v110) {
    do {
      v118 = *v7;
      v117 = v7[1];
      v7 = v108;
      if (v117 < v118) {
        do {
          *v108 = v118;
          v118 = *(v108 - 2);
          --v108;
        } while (v117 < v118);
        *v108 = v117;
      }
      v108 = v7 + 1;
    } while (v7 + 1 != a2);
  }
  return result;
}

#pragma GCC visibility pop
