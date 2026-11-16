#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 physx_source_geomutils_src_contact_471fa0(__int64 result, float a2,
                                                  float a3, float a4);

__int64 physx_source_geomutils_src_contact_471fa0(__int64 result, float a2,
                                                  float a3, float a4)
{
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float* v40;
  float v41;
  float v42;
  __int64 v43;
  unsigned int v44;
  float v45;
  float* v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  int v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  float* v73;
  float v74;
  float v75;
  unsigned int v76;
  __int64 v77;
  float v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  __int64 v83;
  float v84;
  float v85;
  float v86;
  float v87;
  __int64 v88;
  __int64 v89;
  float v90;
  float* v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  __int64 v100;
  float v101;
  float v102;
  float v103;
  float v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned int v108;
  __int64 v109;
  float* v110;
  float v111;
  __int64 v112;
  bool v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 i;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  struct {
    char gap0_[4];
    int v154;
    unsigned int v155;
    unsigned int v156;
    unsigned int v157;
    unsigned int v158;
    char gap24_[4];
    float v159[3];
  } f_;
  float v160;

  v12 = *(unsigned int*)(result + 912);
  if ((unsigned int)v12 < 6) {
    return result;
  }
  v13 = *(float*)(result + 896);
  v14 = *(float*)(result + 900);
  v15 = *(float*)(result + 904);
  v16 = -0x1.0000000000000p+0f;
  v17 = result + 512;
  v18 = result + 640;
  v19 = result + 768;
  v20 = v12 & 3;
  v21 = 0;
  v22 = 0;
  v23 = (float*)(result + 512);
  do {
    v24 = v23[32];
    v25 = *v23;
    v26 = v23[64];
    v27 = (float)((float)(PSEUDO_UNFUSED(v24 * v14)) + (float)(*v23 * v13)) +
          (float)(v26 * v15);
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v24 * v24)) +
                                (float)(v25 * v25)) +
                        (float)(v26 * v26)) -
                (float)(PSEUDO_UNFUSED(v27 * v27))) > v16) {
      a2 = *v23;
      a3 = v23[32];
      v22 = v21;
      a4 = v23[64];
      v16 = (float)((float)((float)(PSEUDO_UNFUSED(v24 * v24)) +
                            (float)(v25 * v25)) +
                    (float)(v26 * v26)) -
            (float)(PSEUDO_UNFUSED(v27 * v27));
    }
    v28 = v23[33];
    v29 = v23[1];
    v30 = v23[65];
    v31 = (float)((float)(PSEUDO_UNFUSED(v28 * v14)) + (float)(v29 * v13)) +
          (float)(v30 * v15);
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v28 * v28)) +
                                (float)(v29 * v29)) +
                        (float)(v30 * v30)) -
                (float)(PSEUDO_UNFUSED(v31 * v31))) > v16) {
      a2 = v23[1];
      a3 = v23[33];
      v22 = v21 + 1;
      a4 = v23[65];
      v16 = (float)((float)((float)(PSEUDO_UNFUSED(v28 * v28)) +
                            (float)(v29 * v29)) +
                    (float)(v30 * v30)) -
            (float)(PSEUDO_UNFUSED(v31 * v31));
    }
    v32 = v23[34];
    v33 = v23[2];
    v34 = v23[66];
    v35 = (float)((float)(PSEUDO_UNFUSED(v32 * v14)) + (float)(v33 * v13)) +
          (float)(v34 * v15);
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v32 * v32)) +
                                (float)(v33 * v33)) +
                        (float)(v34 * v34)) -
                (float)(PSEUDO_UNFUSED(v35 * v35))) > v16) {
      a2 = v23[2];
      a3 = v23[34];
      v22 = v21 + 2;
      a4 = v23[66];
      v16 = (float)((float)((float)(PSEUDO_UNFUSED(v32 * v32)) +
                            (float)(v33 * v33)) +
                    (float)(v34 * v34)) -
            (float)(PSEUDO_UNFUSED(v35 * v35));
    }
    v36 = v23[35];
    v37 = v23[3];
    v38 = v23[67];
    v39 = (float)((float)(PSEUDO_UNFUSED(v36 * v14)) + (float)(v37 * v13)) +
          (float)(v38 * v15);
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v36)) +
                                (float)(v37 * v37)) +
                        (float)(v38 * v38)) -
                (float)(PSEUDO_UNFUSED(v39 * v39))) > v16) {
      a2 = v23[3];
      a3 = v23[35];
      v22 = v21 + 3;
      a4 = v23[67];
      v16 = (float)((float)((float)(PSEUDO_UNFUSED(v36 * v36)) +
                            (float)(v37 * v37)) +
                    (float)(v38 * v38)) -
            (float)(PSEUDO_UNFUSED(v39 * v39));
    }
    v21 += 4;
    v23 += 4;
  } while ((v12 & 0xFFFFFFFC) != v21);
  if ((v12 & 3) != 0) {
    v40 = v23 + 64;
    do {
      v36 = *(v40 - 32);
      v37 = *(v40 - 64);
      v41 = *v40;
      v42 = (float)((float)(PSEUDO_UNFUSED(v36 * v14)) + (float)(v37 * v13)) +
            (float)(*v40 * v15);
      if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v36)) +
                                  (float)(v37 * v37)) +
                          (float)(v41 * v41)) -
                  (float)(PSEUDO_UNFUSED(v42 * v42))) > v16) {
        a2 = *(v40 - 64);
        a3 = *(v40 - 32);
        v22 = v21;
        a4 = *v40;
        v16 = (float)((float)((float)(PSEUDO_UNFUSED(v36 * v36)) +
                              (float)(v37 * v37)) +
                      (float)(v41 * v41)) -
              (float)(PSEUDO_UNFUSED(v42 * v42));
      }
      LODWORD(v21) = v21 + 1;
      ++v40;
      --v20;
    } while (v20 != 0);
  }
  v43 = 0;
  v44 = 0;
  v45 = -0x1.0000000000000p+0f;
  v46 = (float*)(result + 512);
  do {
    v47 = v46[32];
    v48 = v46[64];
    v49 = *v46 - a2;
    v50 = (float)(PSEUDO_UNFUSED((float)(v47 - a3) * (float)(v47 - a3))) +
          (float)(v49 * v49);
    v51 = (float)((float)(PSEUDO_UNFUSED((float)(v47 - a3) * v14)) +
                  (float)(v49 * v13)) +
          (float)((float)(v48 - a4) * v15);
    v52 = (float)(v50 + (float)((float)(v48 - a4) * (float)(v48 - a4))) -
          (float)(PSEUDO_UNFUSED(v51 * v51));
    if (v52 > v45) {
      v16 = *v46;
      v37 = v46[32];
      v44 = v43;
      v36 = v46[64];
      v45 = v52;
    }
    v53 = v46[33];
    v54 = v46[1];
    v55 = v46[65];
    v56 = (float)(v53 - a3) * v14;
    v57 = (float)(v56 + (float)((float)(v54 - a2) * v13)) +
          (float)((float)(v55 - a4) * v15);
    v58 =
        (float)((float)(PSEUDO_UNFUSED((float)(v53 - a3) * (float)(v53 - a3))) +
                (float)((float)(v54 - a2) * (float)(v54 - a2))) +
        (float)((float)(v55 - a4) * (float)(v55 - a4));
    v59 = v58 - (float)(PSEUDO_UNFUSED(v57 * v57));
    if (v59 > v45) {
      v16 = v46[1];
      v37 = v46[33];
      v44 = v43 + 1;
      v36 = v46[65];
      v45 = v59;
    }
    v43 += 2;
    v46 += 2;
  } while ((v12 & 0xFFFFFFFE) != v43);
  if ((v12 & 1) != 0) {
    v60 = *(float*)(v18 + 4 * v43);
    v61 = *(float*)(v17 + 4 * v43);
    v62 = *(float*)(v19 + 4 * v43);
    v56 = (float)(v60 - a3) * v14;
    v63 = (float)(v56 + (float)((float)(v61 - a2) * v13)) +
          (float)((float)(v62 - a4) * v15);
    v58 =
        (float)((float)(PSEUDO_UNFUSED((float)(v60 - a3) * (float)(v60 - a3))) +
                (float)((float)(v61 - a2) * (float)(v61 - a2))) +
        (float)((float)(v62 - a4) * (float)(v62 - a4));
    v59 = v58 - (float)(PSEUDO_UNFUSED(v63 * v63));
    if (v59 > v45) {
      v16 = *(float*)(v17 + 4 * v43);
      v37 = *(float*)(v18 + 4 * v43);
      v44 = v43;
      v36 = *(float*)(v19 + 4 * v43);
    }
  }
  if (v22 == v44) {
    v64 = 1;
    goto LABEL_109;
  }
  v65 = (float)((float)(a3 - v37) * v15) -
        (float)(PSEUDO_UNFUSED((float)(a4 - v36) * v14));
  v66 = -(float)((float)(a2 - v16) * v15);
  v67 = v66 + (float)((float)(a4 - v36) * v13);
  v68 = -(float)((float)(a3 - v37) * v13);
  v69 = v68 + (float)((float)(a2 - v16) * v14);
  v70 = (unsigned int)v12 & 0xFFFFFFFE;
  v71 = -1;
  v72 = 0;
  v73 = (float*)(result + 512);
  v74 = -0x1.fffffe0000000p+127f;
  v75 = 0x1.fffffe0000000p+127f;
  v76 = -1;
  do {
    while (1) {
      v77 = v72;
      if (v22 == v72 || v72 == v44) {
        break;
      }
      v78 = v73[32];
      v79 = *v73;
      v80 = v73[64];
      v81 = (float)((float)(PSEUDO_UNFUSED(v67 * (float)(v78 - a3))) +
                    (float)((float)(*v73 - a2) * v65)) +
            (float)((float)(v80 - a4) * v69);
      if (v81 > v74) {
        v14 = *v73;
        v68 = v73[32];
        v66 = v73[64];
        v74 = (float)((float)(PSEUDO_UNFUSED(v67 * (float)(v78 - a3))) +
                      (float)((float)(*v73 - a2) * v65)) +
              (float)((float)(v80 - a4) * v69);
        v76 = v72;
      }
      if (v81 > v75) {
        break;
      }
      v71 = v72;
      v82 = v72 + 1;
      if (v77 + 1 != v22) {
        goto LABEL_38;
      }
    LABEL_29:
      v58 = v79;
      v56 = v78;
      v59 = v80;
      v75 = v81;
      v73 += 2;
      v72 = v82 + 1;
      if (v72 == v70) {
        goto LABEL_43;
      }
    }
    v79 = v58;
    v78 = v56;
    v80 = v59;
    v81 = v75;
    v82 = v72 + 1;
    if (v77 + 1 == v22) {
      goto LABEL_29;
    }
  LABEL_38:
    if (v82 == v44) {
      goto LABEL_29;
    }
    v56 = v73[33];
    v58 = v73[1];
    v59 = v73[65];
    v75 = (float)((float)(PSEUDO_UNFUSED(v67 * (float)(v56 - a3))) +
                  (float)((float)(v58 - a2) * v65)) +
          (float)((float)(v59 - a4) * v69);
    if (v75 > v74) {
      v14 = v73[1];
      v68 = v73[33];
      v66 = v73[65];
      v74 = (float)((float)(PSEUDO_UNFUSED(v67 * (float)(v56 - a3))) +
                    (float)((float)(v58 - a2) * v65)) +
            (float)((float)(v59 - a4) * v69);
      v76 = v77 + 1;
    }
    if (v75 > v81) {
      goto LABEL_29;
    }
    v71 = v77 + 1;
    v73 += 2;
    v72 = v82 + 1;
  } while (v72 != v70);
LABEL_43:
  v83 = v77 + 2;
  v84 = v58;
  v85 = v56;
  v86 = v59;
  if ((v12 & 1) != 0) {
    if (v83 == v22 || v83 == v44) {
      goto LABEL_49;
    }
    v85 = *(float*)(v18 + 4 * v83);
    v84 = *(float*)(v17 + 4 * v83);
    v86 = *(float*)(v19 + 4 * v83);
    v87 = (float)((float)(PSEUDO_UNFUSED(v67 * (float)(v85 - a3))) +
                  (float)((float)(v84 - a2) * v65)) +
          (float)((float)(v86 - a4) * v69);
    if (v87 > v74) {
      v14 = *(float*)(v17 + 4 * v83);
      v68 = *(float*)(v18 + 4 * v83);
      v76 = v77 + 2;
      v66 = *(float*)(v19 + 4 * v83);
    }
    if (v87 > v75) {
    LABEL_49:
      v84 = v58;
      v85 = v56;
      v86 = v59;
    }
    else {
      v71 = v77 + 2;
    }
  }
  v88 = result + 384;
  f_.v155 = v22;
  f_.v156 = v44;
  v89 = 0;
  f_.v157 = v76;
  f_.v158 = v71;
  v90 = *(float*)(result + 384 + 4LL * v44);
  v91 = (float*)(result + 384);
  v92 = *(float*)(result + 384 + 4LL * v76) + -0x1.0624de0000000p-10f;
  f_.v159[0] = *(float*)(result + 384 + 4LL * v22) + -0x1.0624de0000000p-10f;
  f_.v159[1] = v90 + -0x1.0624de0000000p-10f;
  v93 = *(float*)(result + 384 + 4LL * v71) + -0x1.0624de0000000p-10f;
  f_.v159[2] = v92;
  v160 = v93;
  while (2) {
    v94 = v91[64];
    v95 = v91[32];
    v96 = v91[96];
    v97 =
        (float)((float)(PSEUDO_UNFUSED((float)(a3 - v94) * (float)(a3 - v94))) +
                (float)((float)(a2 - v95) * (float)(a2 - v95))) +
        (float)((float)(a4 - v96) * (float)(a4 - v96));
    if (v97 >= 0x1.fffffe0000000p+127f) {
      v97 = 0x1.fffffe0000000p+127f;
    }
    v98 = (float)((float)(PSEUDO_UNFUSED((float)(v37 - v94) *
                                         (float)(v37 - v94))) +
                  (float)((float)(v16 - v95) * (float)(v16 - v95))) +
          (float)((float)(v36 - v96) * (float)(v36 - v96));
    v99 = v98;
    if (v98 >= v97) {
      v99 = v97;
    }
    v100 = v98 < v97;
    v101 = (float)((float)(PSEUDO_UNFUSED((float)(v68 - v94) *
                                          (float)(v68 - v94))) +
                   (float)((float)(v14 - v95) * (float)(v14 - v95))) +
           (float)((float)(v66 - v96) * (float)(v66 - v96));
    v102 = (float)((float)(PSEUDO_UNFUSED((float)(v85 - v94) *
                                          (float)(v85 - v94))) +
                   (float)((float)(v84 - v95) * (float)(v84 - v95))) +
           (float)((float)(v86 - v96) * (float)(v86 - v96));
    if (v101 >= v99) {
      v103 = v99;
    }
    else {
      v103 = v101;
    }
    if (v101 < v99) {
      v100 = 2;
    }
    if (v102 < v103) {
      v100 = 3;
      v104 = *v91;
      if (*v91 < v160) {
        goto LABEL_66;
      }
    }
    else {
      v104 = *v91;
      if (*v91 < f_.v159[v100]) {
      LABEL_66:
        *(&f_.v155 + v100) = v89;
        f_.v159[v100] = v104;
      }
    }
    ++v89;
    ++v91;
    if (v12 != v89) {
      continue;
    }
    break;
  }
  v105 = f_.v155;
  v106 = v12 & 3;
  v107 = (unsigned int)v12 & 0xFFFFFFFC;
  v108 = 0;
  v109 = 0;
  v110 = (float*)(result + 384);
  v111 = 0x1.fffffe0000000p+127f;
  v112 = 99;
  do {
    v115 = v112 - f_.v155 == 99 || v109 == f_.v156 || v109 == f_.v157 ||
           v109 == f_.v158;
    if (!v115 && *v110 < v111) {
      v111 = *v110;
      v108 = v112 - 99;
    }
    v116 = v109 | 1;
    if ((v109 | 1) != f_.v155 && v116 != f_.v156 && v116 != f_.v157 &&
        v116 != f_.v158 && v110[1] < v111) {
      v111 = v110[1];
      v108 = v112 - 98;
    }
    v117 = v109 | 2;
    if ((v109 | 2) != f_.v155 && v117 != f_.v156 && v117 != f_.v157 &&
        v117 != f_.v158 && v110[2] < v111) {
      v111 = v110[2];
      v108 = v112 - 97;
    }
    v118 = v109 | 3;
    if ((v109 | 3) != f_.v155 && v118 != f_.v156 && v118 != f_.v157 &&
        v118 != f_.v158 && v110[3] < v111) {
      v111 = v110[3];
      v108 = v112 - 96;
    }
    v109 += 4;
    v110 += 4;
    v112 += 4;
  } while (v109 != v107);
  if (v106 != 0) {
    for (i = 0; i != v106; ++i) {
      if (v112 - f_.v155 + i != 99 && v112 - f_.v156 + i != 99 &&
          v112 - f_.v157 + i != 99 && v112 - f_.v158 + i != 99 &&
          *v110 < v111) {
        v111 = *v110;
        v108 = v112 + i - 99;
      }
      ++v110;
    }
  }
  v120 = *(_DWORD*)(result + 4LL * f_.v155);
  v121 = *(_DWORD*)(v88 + 4LL * f_.v155);
  v122 = *(_DWORD*)(v17 + 4LL * f_.v156);
  v123 = *(_DWORD*)(result + 4LL * f_.v156);
  v124 = *(_DWORD*)(v88 + 4LL * f_.v156);
  v125 = *(_DWORD*)(v17 + 4LL * f_.v157);
  v126 = *(_DWORD*)(result + 4LL * f_.v157);
  v127 = *(_DWORD*)(v88 + 4LL * f_.v157);
  v128 = *(_DWORD*)(v17 + 4LL * f_.v158);
  v129 = *(_DWORD*)(result + 128 + 4LL * f_.v155);
  v130 = *(_DWORD*)(result + 256 + 4LL * f_.v155);
  v131 = *(_DWORD*)(result + 128 + 4LL * f_.v156);
  v132 = *(_DWORD*)(result + 256 + 4LL * f_.v156);
  v133 = *(_DWORD*)(result + 128 + 4LL * f_.v157);
  v134 = *(_DWORD*)(result + 256 + 4LL * f_.v157);
  v135 = *(_DWORD*)(result + 4LL * f_.v158);
  v136 = *(_DWORD*)(result + 128 + 4LL * f_.v158);
  v137 = *(_DWORD*)(result + 256 + 4LL * f_.v158);
  v138 = *(_DWORD*)(v88 + 4LL * f_.v158);
  v139 = *(_DWORD*)(v17 + 4LL * v108);
  v140 = *(_DWORD*)(result + 4LL * v108);
  v141 = *(_DWORD*)(result + 128 + 4LL * v108);
  v142 = *(_DWORD*)(result + 256 + 4LL * v108);
  v143 = *(_DWORD*)(v88 + 4LL * v108);
  v144 = *(_DWORD*)(v18 + 4LL * f_.v156);
  v145 = *(_DWORD*)(v18 + 4LL * f_.v157);
  v146 = *(_DWORD*)(v18 + 4LL * f_.v158);
  v147 = *(_DWORD*)(v18 + 4LL * v108);
  v148 = *(_DWORD*)(v19 + 4LL * f_.v156);
  v149 = *(_DWORD*)(v19 + 4LL * f_.v157);
  v150 = *(_DWORD*)(v19 + 4LL * f_.v158);
  *(_DWORD*)(result + 512) = *(_DWORD*)(v17 + 4LL * f_.v155);
  v151 = *(_DWORD*)(v18 + 4 * v105);
  f_.v154 = v126;
  v152 = *(_DWORD*)(v19 + 4LL * v108);
  *(_DWORD*)(result + 384) = v121;
  *(_DWORD*)(result + 516) = v122;
  *(_DWORD*)(result + 644) = v144;
  *(_DWORD*)result = v120;
  *(_DWORD*)(result + 4) = v123;
  *(_DWORD*)(result + 388) = v124;
  *(_DWORD*)(result + 520) = v125;
  *(_DWORD*)(result + 648) = v145;
  *(_DWORD*)(result + 392) = v127;
  *(_DWORD*)(result + 524) = v128;
  *(_DWORD*)(result + 652) = v146;
  *(_DWORD*)(result + 396) = v138;
  *(_DWORD*)(result + 528) = v139;
  *(_DWORD*)(result + 656) = v147;
  *(_DWORD*)(result + 16) = v140;
  *(_DWORD*)(result + 400) = v143;
  *(_DWORD*)(result + 256) = v130;
  *(_DWORD*)(result + 128) = v129;
  *(_DWORD*)(result + 132) = v131;
  *(_DWORD*)(result + 260) = v132;
  *(_DWORD*)(result + 264) = v134;
  *(_DWORD*)(result + 136) = v133;
  *(_DWORD*)(result + 140) = v136;
  *(_DWORD*)(result + 268) = v137;
  *(_DWORD*)(result + 144) = v141;
  *(_DWORD*)(result + 272) = v142;
  *(_DWORD*)(result + 640) = v151;
  v153 = *(_DWORD*)(v19 + 4 * v105);
  v64 = 5;
  *(_DWORD*)(result + 772) = v148;
  *(_DWORD*)(result + 776) = v149;
  *(_DWORD*)(result + 780) = v150;
  *(_DWORD*)(result + 784) = v152;
  *(_DWORD*)(result + 768) = v153;
  *(_DWORD*)(result + 8) = f_.v154;
  *(_DWORD*)(result + 12) = v135;
LABEL_109:
  *(_DWORD*)(result + 912) = v64;
  return result;
}

#pragma GCC visibility pop
