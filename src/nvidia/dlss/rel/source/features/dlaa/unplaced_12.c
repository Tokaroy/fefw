#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_a9a30(_QWORD*, _QWORD*, _QWORD*);
__int64 NgxRoutine_baf10(__int64 result);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_dlss_rel_source_features_dlaa_606b0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   unsigned __int8* a7);

__int64 nvidia_dlss_rel_source_features_dlaa_606b0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5, __int64 a6,
                                                   unsigned __int8* a7)
{

#pragma clang fp contract(off)
  __int64* v7;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  float v21;
  float v22;
  int v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  float v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  float v34;
  _QWORD* v35;
  int v36;
  int v37;
  int v38;
  float v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int v47;
  int v48;
  float v49;
  int v50;
  float v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  __int64 v62;
  float v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  float v83;
  __int64 v85;
  _BOOL4 v126;
  struct __attribute__((packed)) {
    __int64 v86;
    _QWORD v87[2];
    int v88;
    int v89;
    unsigned __int64 v90;
    float v91;
    float v92;
    int v93;
    int v94;
    int v95;
    int v96;
    unsigned __int64 v97;
    unsigned __int64 v98;
    unsigned __int64 v99;
    __int64 v100;
    int v101;
    int v102;
    int v103;
    int v104;
    int v105;
    int v106;
    int v107;
    int v108;
    int v109;
    int v110;
    float v111;
    float v112;
    int v113;
    int v114;
    float v115;
    float v116;
    float v117;
    float v118;
    float v119;
    int v120;
    int v121;
    int v122;
    unsigned __int64 v123;
    int v124;
    int v125;
    char gap200_[4];
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
    float v141;
    float v142;
    __int64 v143;
    int v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
  } g_;

  v7 = *(__int64**)(a4 + 704);
  v13 = *v7;
  v14 = v7[1];
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD**)(v13 + 120);
  v16 = *(_DWORD*)(a4 + 512);
  v17 = -1160773630;
  if (v16 >= -15) {
    v18 = v16 + 15;
  }
  else {
    v18 = v16 + 30;
  }
  v19 = *(_DWORD*)(a4 + 516);
  if (v19 >= -15) {
    v20 = v19 + 15;
  }
  else {
    v20 = v19 + 30;
  }
  if (a7[2] == 1) {
    v22 = *((float*)a7 + 2);
    v21 = *((float*)a7 + 3);
    v23 = *(_DWORD*)(a4 + 592);
    if (v23 != 0) {
      if (v23 != 1) {
        goto LABEL_38;
      }
      g_.v86 = a2;
      v24 = 192;
      v25 = a7[1] == 0;
      v26 = 200;
    }
    else {
      g_.v86 = a2;
      v24 = 176;
      v25 = a7[1] == 0;
      v26 = 184;
    }
  }
  else {
    v27 = (float)v16;
    v28 = *(_DWORD*)(a4 + 592);
    v22 = (float)*(int*)(a4 + 104) / v27;
    v21 = (float)*(int*)(a4 + 108) / (float)v19;
    if (v28 != 0) {
      if (v28 != 1) {
        goto LABEL_38;
      }
      g_.v86 = a2;
      v24 = 144;
      v25 = a7[1] == 0;
      v26 = 152;
    }
    else {
      v24 = 128;
      g_.v86 = a2;
      v25 = a7[1] == 0;
      v26 = 136;
    }
  }
  if (!v25) {
    v26 = v24;
  }
  v29 = *(_QWORD*)(a1 + 8);
  v30 = *(_QWORD*)(a1 + v26);
  if (v30 != 0) {
    v31 = v30;
  }
  else {
    v31 = *(_QWORD*)(a1 + 256);
  }
  if ((*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v29 + 240LL))(
          v29, v31) == 0) {
    v32 = a7[7];
    v33 = *(unsigned __int8*)(a6 + 56);
    v34 = *((float*)a7 + 20);
    v35 = a7 + 16;
    if (*(_BYTE*)(a4 + 639) != 0) {
      v32 = 0;
    }
    if (*(_BYTE*)(a6 + 56) == 0) {
      v35 = (_QWORD*)(a4 + 1296);
    }
    *((_QWORD*)a7 + 3) = *v35;
    if (v34 <= 0x0.0p+0f) {
      v37 = *(_DWORD*)(a4 + 512);
      v36 = *(_DWORD*)(a4 + 516);
      v39 = 0x1.0000000000000p+0f;
    }
    else {
      v36 = *(_DWORD*)(a4 + 516);
      v37 = *(_DWORD*)(a4 + 512);
      if (v36 >= v37) {
        v38 = *(_DWORD*)(a4 + 512);
      }
      else {
        v38 = *(_DWORD*)(a4 + 516);
      }
      v39 = v34 / (float)v38;
    }
    v40 = *((_DWORD*)a7 + 16);
    v41 = *((_DWORD*)a7 + 17);
    v42 = *(_DWORD*)(a4 + 620);
    v43 = (float)v37;
    v44 = *(float*)(a6 + 64);
    v45 = *(float*)(a6 + 68);
    g_.v107 = v33;
    g_.v108 = v32;
    v46 = (float)v36;
    v47 = *a7;
    v48 = a7[1];
    g_.v87[0] = __PAIR64__(v36, v37);
    v49 = v44 / v22;
    g_.v98 = __PAIR64__(v41, v40);
    v50 = *(_DWORD*)(a4 + 624);
    v51 = 0x1.0000000000000p+0f / (float)v37;
    g_.v90 = __PAIR64__(v36, v37);
    v52 = a7[2];
    v53 = *(_DWORD*)(a6 + 168);
    v54 = *(_DWORD*)(a6 + 172);
    g_.v105 = v47;
    g_.v106 = v48;
    v55 = *(_DWORD*)(a4 + 104);
    v56 = *(_DWORD*)(a4 + 108);
    v57 = *((_DWORD*)a7 + 11);
    v58 = *(_DWORD*)(a6 + 96);
    v59 = *(_DWORD*)(a6 + 100);
    v60 = *(_DWORD*)(a4 + 496);
    v61 = *(_DWORD*)(a4 + 500);
    v62 = *(_QWORD*)(a6 + 88);
    g_.v88 = *((_DWORD*)a7 + 10);
    g_.v89 = v57;
    g_.v99 = __PAIR64__(LODWORD(v21), LODWORD(v22));
    g_.v101 = v58;
    g_.v102 = v59;
    v63 = v45 / v21;
    g_.v87[1] = __PAIR64__(v61, v60);
    g_.v100 = v62;
    g_.v93 = v53 - 1;
    g_.v94 = v54 - 1;
    g_.v145 = 0;
    g_.v146 = 0;
    g_.v147 = 0;
    g_.v148 = 0;
    g_.v149 = 0;
    g_.v150 = 0;
    g_.v151 = 0;
    g_.v152 = 0;
    g_.v153 = 0;
    g_.v154 = 0;
    g_.v155 = 0;
    g_.v156 = 0;
    g_.v157 = 0;
    g_.v158 = 0;
    g_.v159 = 0;
    g_.v160 = 0;
    g_.v161 = 0;
    if (v52 != 0) {
      v55 = v53;
      v56 = v54;
    }
    g_.v103 = v42;
    g_.v104 = v50;
    g_.v95 = v55 - 1;
    g_.v96 = v56 - 1;
    v64 = *(_DWORD*)(a4 + 652);
    v65 = *(_DWORD*)(a4 + 656);
    g_.v97 = __PAIR64__(LODWORD(v63), LODWORD(v49));
    v66 = *((_DWORD*)a7 + 2);
    v67 = *((_DWORD*)a7 + 3);
    g_.v113 = v64;
    g_.v114 = v65;
    g_.v91 = v51;
    g_.v92 = 0x1.0000000000000p+0f / v46;
    v68 = *(_DWORD*)(a5 + 644);
    v69 = *(_DWORD*)(a5 + 648);
    g_.v109 = v66;
    g_.v110 = v67;
    g_.v111 = (float)v68 / v43;
    g_.v112 = (float)v69 / v46;
    g_.v121 = *((_DWORD*)a7 + 12);
    g_.v123 = 0xFFFFFFFF00000000LL;
    g_.v124 = a7[3];
    g_.v125 = v52;
    v70 = *(_DWORD*)(a4 + 112);
    g_.v115 = (float)v64 / v43;
    g_.v116 = (float)v65 / v46;
    v71 = *(_DWORD*)(a4 + 660);
    v72 = *(_DWORD*)(a4 + 664);
    v126 = (v70 & 0x80) != 0;
    g_.v129 = *(_DWORD*)(a4 + 592);
    g_.v130 = 0;
    v73 = *(_DWORD*)(a6 + 124);
    g_.v131 = *(_DWORD*)(a6 + 120);
    g_.v132 = v73;
    v74 = *(_DWORD*)(a6 + 132);
    g_.v133 = *(_DWORD*)(a6 + 128);
    g_.v134 = v74;
    v75 = *(_DWORD*)(a6 + 136);
    v76 = *(_DWORD*)(a6 + 140);
    g_.v117 = 0x1.0000000000000p+0f / (float)v71;
    g_.v118 = 0x1.0000000000000p+0f / (float)v72;
    v77 = *((_DWORD*)a7 + 21);
    g_.v135 = v75;
    g_.v136 = v76;
    g_.v119 = v39;
    g_.v120 = v77;
    v78 = *((_DWORD*)a7 + 13);
    v79 = *(_DWORD*)(a4 + 632);
    v80 = *(_DWORD*)(a6 + 156);
    g_.v137 = *(_DWORD*)(a6 + 152);
    g_.v138 = v80;
    g_.v122 = v78;
    v81 = *(_DWORD*)(a4 + 628);
    g_.v143 = 0x3E4CCCCD38D1B717LL;
    g_.v144 = *(unsigned __int8*)(a4 + 638);
    g_.v127 = v81;
    g_.v128 = v79;
    v82 = *((_DWORD*)a7 + 19);
    g_.v139 = *((_DWORD*)a7 + 18);
    v83 = *(float*)(a6 + 176);
    g_.v140 = v82;
    g_.v141 = v83;
    g_.v142 = 0x1.0000000000000p+0f / v83;
    memcpy_plt(a4 + 1384, (__int64)g_.v87, 0x198u);
    if ((*(unsigned int (**)(__int64, __int64, __int64, __int64))(
            **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), *(_QWORD*)a6,
                                           a4 + 1664, 2) == 0 &&
        (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
            **(_QWORD**)(a1 + 8) + 192LL))(
            *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 1264), a4 + 1672, 0) == 0) {
      v85 = *(_QWORD*)(a4 + 1272);
      if ((v85 == 0 ||
           (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
               **(_QWORD**)(a1 + 8) + 192LL))(*(_QWORD*)(a1 + 8), v85,
                                              a4 + 1680, 0) == 0) &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a6 + 8), a4 + 1688, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a6 + 16), a4 + 1696, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a6 + 24), a4 + 1720, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *((_QWORD*)a7 + 2), a4 + 1728, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *((_QWORD*)a7 + 3), a4 + 1736, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *((_QWORD*)a7 + 4), a4 + 1744, 2) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 200LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 1288), a4 + 1752) == 0 &&
          (unsigned int)nvidia_dlss_a9a30(v15, *(_QWORD**)(a1 + 8),
                                          (_QWORD*)(a4 + 1760)) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 200LL))(
              *(_QWORD*)(a1 + 8), *((_QWORD*)a7 + 7), a4 + 1768) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 200LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a5 + 1304), a4 + 1712) == 0 &&
          (*(unsigned int (**)(__int64, __int64, __int64, __int64))(
              **(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8), *(_QWORD*)(a4 + 1312), a4 + 1704, 0) == 0) {
        if ((*(unsigned int (**)(__int64, __int64, __int64, __int64, __int64,
                                 __int64))(**(_QWORD**)(a1 + 8) + 344LL))(
                *(_QWORD*)(a1 + 8), a4 + 1376, g_.v86, (unsigned int)(v18 >> 4),
                (unsigned int)(v20 >> 4), 1) != 0) {
          v17 = -1160773630;
        }
        else {
          v17 = 1;
        }
      }
    }
  }
LABEL_38:
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    NgxRoutine_baf10(v14);
  }
  return v17;
}

#pragma GCC visibility pop
