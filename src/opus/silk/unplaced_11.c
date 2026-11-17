#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_46260(_BYTE*, __int64, __int64, __int64, __int64, __int64,
                           __int16, __int16);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_45cc0(__int64 result, __int64, __int64, __int64, int, int);
__int64 opus_silk_47020(__int16*, __int16*, int);
__int64 opus_silk_586e0(__int64 result, _DWORD*, int, int);
__int64 silk_NLSF_decode(__int16*, char*, __int64);
__int64 silk_NLSF_unpack(__int64 result, __int64, __int64, int);
__int64 silk_lin2log(unsigned int);
__int64 opus_silk_46a80(char* a1, __int16* a2, __int16* a3, __int64 a4, int a5,
                        unsigned int a6, int a7);

__int64 opus_silk_46a80(char* a1, __int16* a2, __int16* a3, __int64 a4, int a5,
                        unsigned int a6, int a7)
{
  __int16* v9;
  int v10;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _DWORD* v19;
  int v20;
  unsigned __int64 v21;
  char** v22;
  __int64 v23;
  int v24;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int16* v33;
  _WORD* v34;
  __int64 v35;
  unsigned __int8* v36;
  __int16* v37;
  _WORD* v38;
  __int16* v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  unsigned int v53;
  char v54;
  unsigned __int64 v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  bool v60;
  int v61;
  unsigned int v62;
  __int16 v63;
  __int16 v64;
  __int16 v65;
  int v66;
  __int16 v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  unsigned int v73;
  int v74;
  __int64 v75;
  unsigned __int64 v76;
  char v77;
  unsigned int v78;
  char v79;
  unsigned int v80;
  int v81;
  int v82;
  __int64 v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  unsigned int v95;
  unsigned __int64 v96;
  char v97;
  unsigned int v98;
  char v99;
  unsigned int v100;
  int v101;
  int v102;
  unsigned int v103;
  char* v104;
  char* v105;
  __int64 v106;
  struct {
    char* v108;
    __int64 v109;
    char* v110;
    __int16* v111;
    char* v112;
    __int16* v113;
    __int64 v114;
    __int16* v115;
    __int64 v116;
    char gap88_[4];
    int v117;
    int v118;
    int v119;
    _DWORD* v120;
  } v108_;
  _QWORD v121[4];
  _QWORD v122[2];
  _QWORD v123[4];
  struct {
    _QWORD v124[4];
    char gap224_[4];
    int v125[3];
  } v124_;

  v9 = *((__int16**)a3 + 8);
  v10 = a3[1];
  v12 = a6;
  v108_.v119 = a5;
  v108_.v114 = a4;
  v108_.v108 = a1;
  v124_.v125[0] = 0;
  memset(v124_.v124, 0, sizeof(v124_.v124));
  memset(v123, 0, sizeof(v123));
  v122[0] = 0;
  v122[1] = 0;
  memset(v121, 0, sizeof(v121));
  opus_silk_47020(a2, v9, v10);
  v13 = *a3;
  v14 = 4LL * *a3;
  v15 = (char*)&v108_.v108 - ((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v15, 0, v14);
  v16 = *((_QWORD*)a3 + 1);
  v17 = *((_QWORD*)a3 + 2);
  v18 = a3[1];
  v108_.v115 = a2;
  opus_silk_45cc0((__int64)v15, (__int64)a2, v16, v17, v13, v18);
  v19 = (_DWORD*)((char*)&v108_.v108 -
                  ((4LL * (int)v12 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt((__int64)v19, 0, 4LL * (int)v12);
  v20 = *a3;
  v108_.v120 = v19;
  opus_silk_586e0((__int64)v15, v19, v20, v12);
  memset_plt((__int64)v19, 0, 4LL * (int)v12);
  v21 = 16 * (int)v12;
  v22 = &(&v108_.v108)[v21 / 0xFFFFFFFFFFFFFFF8LL];
  memset_plt((__int64)&(&v108_.v108)[v21 / 0xFFFFFFFFFFFFFFF8LL], 0, v21);
  v108_.v109 = v12;
  if ((int)v12 >= 1) {
    v23 = 0;
    v108_.v117 = (__int16)(v108_.v119 >> 2);
    v108_.v118 = a7 >> 1;
    v108_.v116 = (unsigned int)v108_.v109;
    v108_.v112 = (char*)v124_.v124 + 2;
    v108_.v113 = v108_.v115 + 1;
    v108_.v110 = (char*)v123 + 2;
    v108_.v111 = (__int16*)(v108_.v114 + 2);
    do {
      v27 = (int)v108_.v120[v23];
      v28 = a3[1];
      if (v28 >= 1) {
        v30 = *((_QWORD*)a3 + 1);
        v29 = *((_QWORD*)a3 + 2);
        v31 = v27 * v28;
        if (v28 == 1) {
          v32 = 0;
        }
        else {
          v34 = v108_.v112;
          v33 = v108_.v113;
          v35 = 0;
          v36 = (unsigned __int8*)(v30 + v31 + 1);
          v37 = (__int16*)(v29 + 2LL * v31 + 2);
          v38 = v108_.v110;
          v39 = v108_.v111;
          do {
            v40 = *(v37 - 1);
            v35 -= 2;
            v41 = *(v39 - 1);
            v42 = v40 * v40;
            v43 = (__int16)(*(v33 - 1) - (*(v36 - 1) << 7)) * v40;
            if (v41 >= 0) {
              v44 = *(v39 - 1);
            }
            else {
              v44 = -v41;
            }
            v45 = __clz((unsigned int)(v44));
            *(v34 - 1) = v43 >> 14;
            v46 = v41 << (v45 - 1);
            v47 = __clz((unsigned int)(v42));
            v48 = v45 - v47;
            v49 = v42 << (v47 - 1);
            LOBYTE(v47) = v48 + 8;
            v50 = 0x1FFFFFFF / (v49 >> 16);
            v51 = (0x1FFFFFFF / (v49 >> 16) * (__int64)v46) >> 16;
            v52 = v46 - (((unsigned __int64)((int)v51 * (__int64)v49) >> 29) &
                         0xFFFFFFF8);
            v53 = v48 + 29;
            v54 = -8 - v48;
            v55 = v50 * (__int64)v52;
            v56 = (int)0x80000000 >> v54;
            v57 = (v55 >> 16) + v51;
            v58 = v57 >> v47;
            if (v53 >= 0x35) {
              LOWORD(v58) = 0;
            }
            if (v56 <= v57) {
              v56 = v57;
            }
            if ((int)(0x7FFFFFFFu >> v54) >= v57) {
              v59 = v56;
            }
            else {
              v59 = 0x7FFFFFFFu >> v54;
            }
            v60 = v53 > 0x14;
            v61 = *v39;
            v39 += 2;
            v62 = v59 << v54;
            v64 = *v33;
            v33 += 2;
            v63 = v64;
            if (v60) {
              LOWORD(v62) = v58;
            }
            *(v38 - 1) = v62;
            v65 = *v36;
            v36 += 2;
            v66 = *v37;
            v37 += 2;
            v67 = v63 - (v65 << 7);
            if (v61 >= 0) {
              v68 = v61;
            }
            else {
              v68 = -v61;
            }
            v69 = __clz((unsigned int)(v68));
            v70 = v67 * v66;
            v71 = v66 * v66;
            v72 = v61 << (v69 - 1);
            v73 = __clz((unsigned int)(v71));
            *v34 = v70 >> 14;
            v34 += 2;
            v74 = v71 << (v73 - 1);
            v75 = (0x1FFFFFFF / (v74 >> 16) * (__int64)v72) >> 16;
            v76 =
                0x1FFFFFFF / (v74 >> 16) *
                (__int64)(int)(v72 -
                               (((unsigned __int64)((int)v75 * (__int64)v74) >>
                                 29) &
                                0xFFFFFFF8));
            LOBYTE(v74) = v69 - v73;
            v77 = -8 - (v69 - v73);
            v78 = v69 - v73 + 29;
            v79 = v74 + 8;
            v80 = (int)0x80000000 >> v77;
            v81 = (v76 >> 16) + v75;
            if ((int)0x80000000 >> v77 <= v81) {
              v80 = v81;
            }
            v60 = (int)(0x7FFFFFFFu >> v77) < v81;
            v82 = v81 >> v79;
            if (v60) {
              v80 = 0x7FFFFFFFu >> v77;
            }
            if (v78 >= 0x35) {
              LOWORD(v82) = 0;
            }
            if (v78 < 0x15) {
              LOWORD(v82) = v80 << v77;
            }
            *v38 = v82;
            v38 += 2;
          } while (-(__int64)(v28 & 0x7FFE) != v35);
          v32 = -v35;
          if ((v28 & 1) == 0) {
            goto LABEL_3;
          }
        }
        v83 = v30 + v31;
        v84 = *(__int16*)(v29 + 2LL * v31 + 2 * v32);
        LODWORD(v83) =
            (__int16)(v108_.v115[v32] - (*(unsigned __int8*)(v83 + v32) << 7)) *
            v84;
        v85 = v84 * v84;
        *((_WORD*)v124_.v124 + v32) = (unsigned int)v83 >> 14;
        v86 = *(__int16*)(v108_.v114 + 2 * v32);
        if (v86 >= 0) {
          v87 = *(__int16*)(v108_.v114 + 2 * v32);
        }
        else {
          v87 = -v86;
        }
        v88 = __clz((unsigned int)(v87));
        v89 = v86 << (v88 - 1);
        v90 = __clz((unsigned int)(v85));
        v91 = v85 << (v90 - 1);
        v92 = 0x1FFFFFFF / (v91 >> 16);
        v93 = (0x1FFFFFFF / (v91 >> 16) * (__int64)v89) >> 16;
        v94 = v89 - (((unsigned __int64)((int)v93 * (__int64)v91) >> 29) &
                     0xFFFFFFF8);
        v95 = v88 - v90;
        v96 = v92 * (__int64)v94;
        v97 = -8 - (v88 - v90);
        v98 = v95 + 29;
        v99 = v95 + 8;
        v100 = (int)0x80000000 >> v97;
        v101 = (v96 >> 16) + v93;
        if ((int)0x80000000 >> v97 <= v101) {
          v100 = v101;
        }
        v60 = (int)(0x7FFFFFFFu >> v97) < v101;
        v102 = v101 >> v99;
        if (v60) {
          v100 = 0x7FFFFFFFu >> v97;
        }
        v103 = v100 << v97;
        if (v98 >= 0x35) {
          LOWORD(v102) = 0;
        }
        if (v98 < 0x15) {
          LOWORD(v102) = v103;
        }
        *((_WORD*)v123 + v32) = v102;
      }
    LABEL_3:
      silk_NLSF_unpack((__int64)v121, (__int64)v122, (__int64)a3, v27);
      v24 = MovieRoutine_46260(&v22[2 * v23], (__int64)v124_.v124,
                               (__int64)v123, (__int64)v122, (__int64)v121,
                               *((_QWORD*)a3 + 7), a3[2], a3[3]);
      v25 = (unsigned __int8*)(*((_QWORD*)a3 + 3) + *a3 * (__int64)v108_.v118);
      if ((_DWORD)v27 != 0) {
        v25 += v27;
        v26 = *(v25 - 1);
      }
      else {
        v26 = 256;
      }
      v19[v23++] =
          v24 +
          (__int16)(1024 - silk_lin2log(v26 - (unsigned int)*v25)) * v108_.v117;
    } while (v23 != v108_.v116);
  }
  opus_silk_586e0((__int64)v19, v124_.v125, v108_.v109, 1);
  v104 = v108_.v108;
  v105 = v108_.v108;
  v106 = (__int64)&v22[2 * v124_.v125[0]];
  *v108_.v108 = v108_.v120[v124_.v125[0]];
  memcpy_plt((__int64)(v105 + 1), v106, a3[1]);
  silk_NLSF_decode(v108_.v115, v104, (__int64)a3);
  return (unsigned int)*v19;
}

#pragma GCC visibility pop
