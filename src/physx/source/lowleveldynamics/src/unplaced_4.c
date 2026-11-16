#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset(__int64, int, unsigned __int64);
__int64 physx_source_lowleveldynamics_src_36f220(__int64 a1, _DWORD* a2,
                                                 _DWORD* a3, __int64 a4);

__int64 physx_source_lowleveldynamics_src_36f220(__int64 a1, _DWORD* a2,
                                                 _DWORD* a3, __int64 a4)
{
  __int64 result;
  char v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned int* v17;
  unsigned int* v18;
  __int64 v19;
  _BOOL4 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  _BOOL4 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  _BOOL4 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  char v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned int v42;
  unsigned int* v43;
  unsigned int* v44;
  __int64 v45;
  _BOOL4 v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  __int64 v51;
  _BOOL4 v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  _BOOL4 v58;
  unsigned int v59;
  unsigned int v60;
  char v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  unsigned int* v68;
  unsigned int* v69;
  __int64 v70;
  _BOOL4 v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  __int64 v76;
  _BOOL4 v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  __int64 v82;
  _BOOL4 v83;
  unsigned int v84;
  unsigned int v85;
  char v86;
  unsigned int v87;
  int v88;
  __int64 v89;
  int v90;
  __int64 v91;
  unsigned int v92;
  unsigned int* v93;
  unsigned int* v94;
  __int64 v95;
  _BOOL4 v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  __int64 v101;
  _BOOL4 v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  __int64 v107;
  _BOOL4 v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  __int64 v117;
  _DWORD* v118;
  bool v119;
  int v120;
  int v121;
  int* v122;
  int v123;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  _DWORD* v129;
  __int64* v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int* v136;
  int* v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  struct {
    _BYTE v145[4];
    _BYTE v146[12];
    char gap16_[112];
    _DWORD v148[1];
    _BYTE v149[12];
  } f_;
  _BYTE v147[112];
  __int64 v150;

  memset((__int64)f_.v148, 0, 0x80u);
  result = memset((__int64)f_.v145, 0, 0x80u);
  v9 = *(_BYTE*)(a1 + 149);
  v10 = *(_DWORD*)(a1 + 172);
  v11 = a4 + 12288;
  v12 = a4 + 16768;
  if (v10 == 0) {
    v15 = 0;
    goto LABEL_38;
  }
  v13 = *(_DWORD*)(a1 + 168);
  if (v10 == 1) {
    v14 = 0;
    v15 = 0;
    goto LABEL_28;
  }
  v16 = 0;
  v15 = 0;
  LODWORD(result) = *(_DWORD*)(a1 + 168);
  v17 = (unsigned int*)f_.v149;
  v18 = (unsigned int*)f_.v146;
  do {
    v19 = v11 + 104LL * (unsigned int)result;
    if ((*(_BYTE*)(v19 + 1) & 1) != 0) {
      v20 = false;
      v21 = *(_DWORD*)(v12 + 4LL * (unsigned int)result);
      if (v21 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v20 = *(_WORD*)(v19 + 2) != 0;
      v21 = *(_DWORD*)(v12 + 4LL * (unsigned int)result);
      if (v21 == 0) {
        goto LABEL_17;
      }
    }
    v22 = *(v17 - 1);
    v15 += v21;
    if (v21 > v22) {
      v22 = v21;
    }
    *(v17 - 1) = v22;
    if (v20) {
      v23 = 2 * *(unsigned __int16*)(v19 + 2);
      v15 += v23;
      if (v23 <= *(v18 - 1)) {
        v23 = *(v18 - 1);
      }
      *(v18 - 1) = v23;
    }
  LABEL_17:
    v24 = result + 1;
    v25 = v11 + 104LL * (unsigned int)(result + 1);
    if ((*(_BYTE*)(v25 + 1) & 1) != 0) {
      v26 = false;
      v27 = *(_DWORD*)(v12 + 4LL * v24);
      if (v27 == 0) {
        goto LABEL_6;
      }
    }
    else {
      v26 = *(_WORD*)(v25 + 2) != 0;
      v27 = *(_DWORD*)(v12 + 4LL * v24);
      if (v27 == 0) {
        goto LABEL_6;
      }
    }
    v28 = *v17;
    v15 += v27;
    if (v27 > *v17) {
      v28 = v27;
    }
    *v17 = v28;
    if (v26) {
      v29 = 2 * *(unsigned __int16*)(v25 + 2);
      v15 += v29;
      if (v29 <= *v18) {
        v29 = *v18;
      }
      *v18 = v29;
    }
  LABEL_6:
    result = (unsigned int)(result + 2);
    v16 -= 2;
    v17 += 2;
    v18 += 2;
  } while (-(__int64)(v10 & 0xFFFFFFFE) != v16);
  v14 = -v16;
  if ((v10 & 1) == 0) {
    goto LABEL_38;
  }
LABEL_28:
  v30 = v13 + v14;
  v31 = v11 + 104LL * (unsigned int)(v13 + v14);
  if ((*(_BYTE*)(v31 + 1) & 1) != 0) {
    v32 = false;
    v33 = *(_DWORD*)(v12 + 4LL * v30);
    if (v33 == 0) {
      goto LABEL_38;
    }
  }
  else {
    v32 = *(_WORD*)(v31 + 2) != 0;
    v33 = *(_DWORD*)(v12 + 4LL * v30);
    if (v33 == 0) {
      goto LABEL_38;
    }
  }
  v15 += v33;
  v34 = f_.v148[v14];
  if (v33 > v34) {
    v34 = v33;
  }
  f_.v148[v14] = v34;
  if (v32) {
    v35 = 2 * *(unsigned __int16*)(v31 + 2);
    v15 += v35;
    if (v35 <= *(_DWORD*)&f_.v145[4 * v14]) {
      v35 = *(_DWORD*)&f_.v145[4 * v14];
    }
    *(_DWORD*)&f_.v145[4 * v14] = v35;
  }
LABEL_38:
  *(_DWORD*)a3 = v15;
  if ((v9 & 1) != 0) {
    v36 = 1;
    v37 = *(_DWORD*)(a1 + 364);
    if (v37 != 0) {
      goto LABEL_40;
    }
  LABEL_43:
    v40 = 0;
    goto LABEL_78;
  }
  v36 = *(_BYTE*)(a1 + 341);
  v37 = *(_DWORD*)(a1 + 364);
  if (v37 == 0) {
    goto LABEL_43;
  }
LABEL_40:
  v38 = *(_DWORD*)(a1 + 360);
  if (v37 == 1) {
    v39 = 0;
    v40 = 0;
    goto LABEL_67;
  }
  result = 104;
  v41 = 0;
  v40 = 0;
  v42 = *(_DWORD*)(a1 + 360);
  v43 = (unsigned int*)f_.v146;
  v44 = (unsigned int*)f_.v149;
  while (2) {
    v45 = v11 + 104LL * v42;
    if ((*(_BYTE*)(v45 + 1) & 1) != 0) {
      v46 = false;
      v47 = *(_DWORD*)(v12 + 4LL * v42);
      if (v47 == 0) {
        goto LABEL_56;
      }
    }
    else {
      v46 = *(_WORD*)(v45 + 2) != 0;
      v47 = *(_DWORD*)(v12 + 4LL * v42);
      if (v47 == 0) {
        goto LABEL_56;
      }
    }
    v48 = *(v44 - 1);
    v40 += v47;
    if (v47 > v48) {
      v48 = v47;
    }
    *(v44 - 1) = v48;
    if (v46) {
      v49 = 2 * *(unsigned __int16*)(v45 + 2);
      v40 += v49;
      if (v49 <= *(v43 - 1)) {
        v49 = *(v43 - 1);
      }
      *(v43 - 1) = v49;
    }
  LABEL_56:
    v50 = v42 + 1;
    v51 = v11 + 104LL * (v42 + 1);
    if ((*(_BYTE*)(v51 + 1) & 1) != 0) {
      v52 = false;
      v53 = *(_DWORD*)(v12 + 4LL * v50);
      if (v53 == 0) {
        goto LABEL_45;
      }
    }
    else {
      v52 = *(_WORD*)(v51 + 2) != 0;
      v53 = *(_DWORD*)(v12 + 4LL * v50);
      if (v53 == 0) {
        goto LABEL_45;
      }
    }
    v54 = *v44;
    v40 += v53;
    if (v53 > *v44) {
      v54 = v53;
    }
    *v44 = v54;
    if (v52) {
      v55 = 2 * *(unsigned __int16*)(v51 + 2);
      v40 += v55;
      if (v55 <= *v43) {
        v55 = *v43;
      }
      *v43 = v55;
    }
  LABEL_45:
    v42 += 2;
    v41 -= 2;
    v43 += 2;
    v44 += 2;
    if (-(__int64)(v37 & 0xFFFFFFFE) != v41) {
      continue;
    }
    break;
  }
  v39 = -v41;
  if ((v37 & 1) == 0) {
    goto LABEL_78;
  }
LABEL_67:
  v56 = v38 + v39;
  v57 = v11 + 104LL * (unsigned int)(v38 + v39);
  if ((*(_BYTE*)(v57 + 1) & 1) != 0) {
    v58 = false;
    v59 = *(_DWORD*)(v12 + 4LL * v56);
    if (v59 == 0) {
      goto LABEL_78;
    }
  }
  else {
    v58 = *(_WORD*)(v57 + 2) != 0;
    v59 = *(_DWORD*)(v12 + 4LL * v56);
    if (v59 == 0) {
      goto LABEL_78;
    }
  }
  v40 += v59;
  LODWORD(result) = f_.v148[v39];
  if (v59 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v59;
  }
  f_.v148[v39] = result;
  if (v58) {
    v60 = 2 * *(unsigned __int16*)(v57 + 2);
    v40 += v60;
    if (v60 <= *(_DWORD*)&f_.v145[4 * v39]) {
      v60 = *(_DWORD*)&f_.v145[4 * v39];
    }
    *(_DWORD*)&f_.v145[4 * v39] = v60;
  }
LABEL_78:
  a3[1] = v40;
  if (v37 > v10) {
    v10 = v37;
  }
  if ((v36 & 1) != 0) {
    v61 = 1;
    v62 = *(_DWORD*)(a1 + 556);
    if (v62 != 0) {
      goto LABEL_82;
    }
  LABEL_85:
    v65 = 0;
    goto LABEL_120;
  }
  v61 = *(_BYTE*)(a1 + 533);
  v62 = *(_DWORD*)(a1 + 556);
  if (v62 == 0) {
    goto LABEL_85;
  }
LABEL_82:
  v63 = *(_DWORD*)(a1 + 552);
  if (v62 == 1) {
    v64 = 0;
    v65 = 0;
    goto LABEL_109;
  }
  result = 104;
  v66 = 0;
  v65 = 0;
  v67 = *(_DWORD*)(a1 + 552);
  v68 = (unsigned int*)f_.v146;
  v69 = (unsigned int*)f_.v149;
  while (2) {
    v70 = v11 + 104LL * v67;
    if ((*(_BYTE*)(v70 + 1) & 1) != 0) {
      v71 = false;
      v72 = *(_DWORD*)(v12 + 4LL * v67);
      if (v72 == 0) {
        goto LABEL_98;
      }
    }
    else {
      v71 = *(_WORD*)(v70 + 2) != 0;
      v72 = *(_DWORD*)(v12 + 4LL * v67);
      if (v72 == 0) {
        goto LABEL_98;
      }
    }
    v73 = *(v69 - 1);
    v65 += v72;
    if (v72 > v73) {
      v73 = v72;
    }
    *(v69 - 1) = v73;
    if (v71) {
      v74 = 2 * *(unsigned __int16*)(v70 + 2);
      v65 += v74;
      if (v74 <= *(v68 - 1)) {
        v74 = *(v68 - 1);
      }
      *(v68 - 1) = v74;
    }
  LABEL_98:
    v75 = v67 + 1;
    v76 = v11 + 104LL * (v67 + 1);
    if ((*(_BYTE*)(v76 + 1) & 1) != 0) {
      v77 = false;
      v78 = *(_DWORD*)(v12 + 4LL * v75);
      if (v78 == 0) {
        goto LABEL_87;
      }
    }
    else {
      v77 = *(_WORD*)(v76 + 2) != 0;
      v78 = *(_DWORD*)(v12 + 4LL * v75);
      if (v78 == 0) {
        goto LABEL_87;
      }
    }
    v79 = *v69;
    v65 += v78;
    if (v78 > *v69) {
      v79 = v78;
    }
    *v69 = v79;
    if (v77) {
      v80 = 2 * *(unsigned __int16*)(v76 + 2);
      v65 += v80;
      if (v80 <= *v68) {
        v80 = *v68;
      }
      *v68 = v80;
    }
  LABEL_87:
    v67 += 2;
    v66 -= 2;
    v68 += 2;
    v69 += 2;
    if (-(__int64)(v62 & 0xFFFFFFFE) != v66) {
      continue;
    }
    break;
  }
  v64 = -v66;
  if ((v62 & 1) == 0) {
    goto LABEL_120;
  }
LABEL_109:
  v81 = v63 + v64;
  v82 = v11 + 104LL * (unsigned int)(v63 + v64);
  if ((*(_BYTE*)(v82 + 1) & 1) != 0) {
    v83 = false;
    v84 = *(_DWORD*)(v12 + 4LL * v81);
    if (v84 == 0) {
      goto LABEL_120;
    }
  }
  else {
    v83 = *(_WORD*)(v82 + 2) != 0;
    v84 = *(_DWORD*)(v12 + 4LL * v81);
    if (v84 == 0) {
      goto LABEL_120;
    }
  }
  v65 += v84;
  LODWORD(result) = f_.v148[v64];
  if (v84 <= (unsigned int)result) {
    result = (unsigned int)result;
  }
  else {
    result = v84;
  }
  f_.v148[v64] = result;
  if (v83) {
    v85 = 2 * *(unsigned __int16*)(v82 + 2);
    v65 += v85;
    if (v85 <= *(_DWORD*)&f_.v145[4 * v64]) {
      v85 = *(_DWORD*)&f_.v145[4 * v64];
    }
    *(_DWORD*)&f_.v145[4 * v64] = v85;
  }
LABEL_120:
  a3[2] = v65;
  if (v62 <= v10) {
    v62 = v10;
  }
  if ((v61 & 1) != 0) {
    v86 = 1;
    v87 = *(_DWORD*)(a1 + 748);
    if (v87 != 0) {
      goto LABEL_124;
    }
  LABEL_127:
    v90 = 0;
    goto LABEL_161;
  }
  v86 = *(_BYTE*)(a1 + 725);
  v87 = *(_DWORD*)(a1 + 748);
  if (v87 == 0) {
    goto LABEL_127;
  }
LABEL_124:
  v88 = *(_DWORD*)(a1 + 744);
  if (v87 == 1) {
    v89 = 0;
    v90 = 0;
    goto LABEL_151;
  }
  result = 104;
  v91 = 0;
  v90 = 0;
  v92 = *(_DWORD*)(a1 + 744);
  v93 = (unsigned int*)f_.v146;
  v94 = (unsigned int*)f_.v149;
  while (2) {
    v95 = v11 + 104LL * v92;
    if ((*(_BYTE*)(v95 + 1) & 1) != 0) {
      v96 = false;
      v97 = *(_DWORD*)(v12 + 4LL * v92);
      if (v97 == 0) {
        goto LABEL_140;
      }
    }
    else {
      v96 = *(_WORD*)(v95 + 2) != 0;
      v97 = *(_DWORD*)(v12 + 4LL * v92);
      if (v97 == 0) {
        goto LABEL_140;
      }
    }
    v98 = *(v94 - 1);
    v90 += v97;
    if (v97 > v98) {
      v98 = v97;
    }
    *(v94 - 1) = v98;
    if (v96) {
      v99 = 2 * *(unsigned __int16*)(v95 + 2);
      v90 += v99;
      if (v99 <= *(v93 - 1)) {
        v99 = *(v93 - 1);
      }
      *(v93 - 1) = v99;
    }
  LABEL_140:
    v100 = v92 + 1;
    v101 = v11 + 104LL * (v92 + 1);
    if ((*(_BYTE*)(v101 + 1) & 1) != 0) {
      v102 = false;
      v103 = *(_DWORD*)(v12 + 4LL * v100);
      if (v103 == 0) {
        goto LABEL_129;
      }
    }
    else {
      v102 = *(_WORD*)(v101 + 2) != 0;
      v103 = *(_DWORD*)(v12 + 4LL * v100);
      if (v103 == 0) {
        goto LABEL_129;
      }
    }
    v104 = *v94;
    v90 += v103;
    if (v103 > *v94) {
      v104 = v103;
    }
    *v94 = v104;
    if (v102) {
      v105 = 2 * *(unsigned __int16*)(v101 + 2);
      v90 += v105;
      if (v105 <= *v93) {
        v105 = *v93;
      }
      *v93 = v105;
    }
  LABEL_129:
    v92 += 2;
    v91 -= 2;
    v93 += 2;
    v94 += 2;
    if (-(__int64)(v87 & 0xFFFFFFFE) != v91) {
      continue;
    }
    break;
  }
  v89 = -v91;
  if ((v87 & 1) == 0) {
    goto LABEL_161;
  }
LABEL_151:
  v106 = v88 + v89;
  v107 = v11 + 104LL * v106;
  if ((*(_BYTE*)(v107 + 1) & 1) != 0) {
    v108 = false;
    v109 = *(_DWORD*)(v12 + 4LL * v106);
    if (v109 == 0) {
      goto LABEL_161;
    }
  }
  else {
    v108 = *(_WORD*)(v107 + 2) != 0;
    v109 = *(_DWORD*)(v12 + 4LL * v106);
    if (v109 == 0) {
      goto LABEL_161;
    }
  }
  v90 += v109;
  v110 = f_.v148[v89];
  if (v109 > v110) {
    v110 = v109;
  }
  f_.v148[v89] = v110;
  if (v108) {
    v111 = 2 * *(unsigned __int16*)(v107 + 2);
    v90 += v111;
    if (v111 <= *(_DWORD*)&f_.v145[4 * v89]) {
      v111 = *(_DWORD*)&f_.v145[4 * v89];
    }
    *(_DWORD*)&f_.v145[4 * v89] = v111;
  }
LABEL_161:
  a3[3] = v90;
  if (v87 <= v62) {
    v112 = v62;
  }
  else {
    v112 = v87;
  }
  if (v112 != 0) {
    v113 = v112 & 7;
    if (v112 >= 8) {
      v117 = 0;
      v115 = 0;
      v118 = v147;
      do {
        v117 -= 8;
        if (*(v118 - 4) != 0) {
          ++v115;
        }
        if (*(v118 - 3) != 0) {
          ++v115;
        }
        if (*(v118 - 2) != 0) {
          ++v115;
        }
        if (*(v118 - 1) != 0) {
          ++v115;
        }
        if (*(_DWORD*)v118 != 0) {
          ++v115;
        }
        v119 = v118[1] == 0;
        v120 = v118[2];
        v121 = v118[3];
        v118 += 8;
        if (!v119) {
          ++v115;
        }
        if (v120 != 0) {
          ++v115;
        }
        if (v121 != 0) {
          ++v115;
        }
      } while (-(__int64)(v112 & 0xFFFFFFF8) != v117);
      v114 = -v117;
      if ((v112 & 7) != 0) {
        goto LABEL_188;
      }
    }
    else {
      v114 = 0;
      v115 = 0;
      if ((v112 & 7) == 0) {
        goto LABEL_192;
      }
    LABEL_188:
      v122 = (int*)&f_.v145[4 * v114];
      do {
        v123 = *v122++;
        if (v123 != 0) {
          ++v115;
        }
        --v113;
      } while (v113 != 0);
    }
  LABEL_192:
    v116 = 144 * v115;
    v124 = v112 & 7;
    if (v112 >= 8) {
      v128 = 0;
      v127 = 0;
      v126 = 0;
      v129 = v147;
      v130 = &v150;
      do {
        v128 -= 8;
        v131 = *((_DWORD*)v130 + 1) + *(int*)v130 + *((_DWORD*)v130 - 1) +
               *((_DWORD*)v130 - 2) + *((_DWORD*)v130 - 3) +
               *((_DWORD*)v130 - 4) + v126;
        v132 = v129[1] + *(int*)v129 + *(v129 - 1) + *(v129 - 2) + *(v129 - 3) +
               *(v129 - 4) + v127;
        v134 = *((_DWORD*)v130 + 2);
        v133 = *((_DWORD*)v130 + 3);
        v130 += 4;
        v126 = v133 + v134 + v131;
        v135 = v129[2];
        result = (unsigned int)v129[3];
        v129 += 8;
        v127 = result + v135 + v132;
      } while (-(__int64)(v112 & 0xFFFFFFF8) != v128);
      v125 = -v128;
      if ((v112 & 7) != 0) {
        goto LABEL_198;
      }
    }
    else {
      v125 = 0;
      v127 = 0;
      v126 = 0;
      if ((v112 & 7) == 0) {
        goto LABEL_200;
      }
    LABEL_198:
      v136 = (int*)&f_.v145[4 * v125];
      v137 = &f_.v148[v125];
      do {
        v138 = *v137++;
        --v124;
        v126 += v138;
        v139 = *v136++;
        v127 += v139;
      } while (v124 != 0);
    }
  }
  else {
    v116 = 0;
    v126 = 0;
    v127 = 0;
  }
LABEL_200:
  if (*(_DWORD*)(a1 + 116) == 1 || *(_DWORD*)(a1 + 308) == 1 ||
      *(_DWORD*)(a1 + 500) == 1 || *(_DWORD*)(a1 + 692) == 1) {
    v140 = 144;
    v141 = 160;
  }
  else {
    v140 = 96;
    v141 = 112;
  }
  v142 = v126 * v141 + v127 * v140;
  v143 = v127 + v126;
  if ((v86 & 1) != 0) {
    v144 = v126;
  }
  else {
    v144 = 0;
  }
  *(_DWORD*)a2 = v116 + 208 * v112 + 16 * (v143 + v144) + v142;
  return result;
}

#pragma GCC visibility pop
