#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 frac_div32(int, unsigned int);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_celt_35700(__int64 a1, signed int* a2, int a3);

__int64 opus_celt_35700(__int64 a1, signed int* a2, int a3)
{
  signed int v3;
  __int64 result;
  int* v5;
  int* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int* v15;
  __int64 v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned __int64 v29;
  int* v30;
  int* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  int* v39;
  int* v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  int v47;
  unsigned __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int* v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _DWORD* v63;
  _WORD* v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  int v69;
  _WORD* v70;
  int* v71;
  int v72;
  struct {
    char gap0_[40];
    int* v75;
    __int64 v76;
    __int64 v77;
  } f_;
  _QWORD v78[10];

  v3 = *a2;
  f_.v75 = a2;
  f_.v76 = 0;
  memset(v78, 0, sizeof(v78));
  f_.v77 = 0;
  result = memset_plt((__int64)&f_.v76, 0, 4LL * a3);
  if (v3 != 0) {
    v5 = f_.v75;
    v6 = (int*)&f_.v75 + 1;
    v7 = 1;
    v8 = 0;
    v9 = f_.v75 - 1;
    while (1) {
      if (v7 >> 1 <= 1) {
        v10 = 1;
      }
      else {
        v10 = v7 >> 1;
      }
      if ((v8 + 1) >> 1 <= 1) {
        LOBYTE(v11) = 1;
      }
      else {
        v11 = (v8 + 1) >> 1;
      }
      if (v8 == (a3 & ~(a3 >> 31))) {
        goto LABEL_31;
      }
      if (v8 != 0) {
        break;
      }
      v14 = 0;
    LABEL_22:
      result = frac_div32((f_.v75[v8 + 1] + v14) & 0xFFFFFFF8, v3);
      *((_DWORD*)&f_.v76 + v8) = -(int)result >> 3;
      v35 = -(int)result >> 16;
      v36 = (unsigned __int16)-(__int16)result;
      v37 = 2 * v35;
      if (v8 != 0) {
        if (v8 >= 7) {
          v39 = (int*)&f_.v77;
          v38 = 0;
          v40 = v6;
          do {
            v41 = *v40;
            v42 = *(v39 - 2);
            *(v39 - 2) = v42 + v37 * (*v40 >> 16) +
                         (((unsigned __int16)*v40 * v35) >> 15) +
                         (((*v40 >> 16) * v36) >> 15);
            v43 = v42 >> 16;
            v44 =
                v41 + v37 * (v42 >> 16) + (((unsigned __int16)v42 * v35) >> 15);
            v45 = v8 + (v38 ^ 0x3FFFFFFFFFFFFFFELL);
            *v40 = v44 + ((v43 * v36) >> 15);
            v40 -= 4;
            v46 = *((_DWORD*)&f_.v76 + v45);
            v47 = *(v39 - 1);
            *(v39 - 1) = v47 + v37 * (v46 >> 16) +
                         (((unsigned __int16)v46 * v35) >> 15) +
                         (((v46 >> 16) * v36) >> 15);
            *((_DWORD*)&f_.v76 + v45) = v46 + v37 * (v47 >> 16) +
                                        (((unsigned __int16)v47 * v35) >> 15) +
                                        (((v47 >> 16) * v36) >> 15);
            v48 = v8 + (v38 ^ 0xFFFFFFFFFFFFFFFDLL);
            v49 = *v39;
            v50 = *((_DWORD*)&f_.v76 + v48);
            *v39 += v37 * (v50 >> 16) + (((unsigned __int16)v50 * v35) >> 15) +
                    (((v50 >> 16) * v36) >> 15);
            *((_DWORD*)&f_.v76 + v48) = v50 + v37 * (v49 >> 16) +
                                        (((unsigned __int16)v49 * v35) >> 15) +
                                        (((v49 >> 16) * v36) >> 15);
            v51 = v38 ^ 0x3FFFFFFFFFFFFFFCLL;
            v38 += 4;
            v52 = v8 + v51;
            v53 = v39[1];
            v54 = *((_DWORD*)&f_.v76 + v52);
            v39[1] = v53 + v37 * (v54 >> 16) +
                     (((unsigned __int16)v54 * v35) >> 15) +
                     (((v54 >> 16) * v36) >> 15);
            v39 += 4;
            result = (unsigned int)((v53 >> 16) * v36);
            *((_DWORD*)&f_.v76 + v52) = v54 + v37 * (v53 >> 16) +
                                        (((unsigned __int16)v53 * v35) >> 15) +
                                        ((int)result >> 15);
          } while ((v10 & 0x7FFFFFFFFFFFFFFCLL) != v38);
        }
        else {
          v38 = 0;
        }
        if ((v11 & 3) != 0) {
          v55 = v10 & 3;
          v56 = -1 * v38;
          v57 = (int*)&f_.v76 + v38;
          do {
            v58 = v6[v56];
            v59 = *v57;
            --v55;
            *v57++ += v37 * (v58 >> 16) +
                      (((unsigned __int16)v58 * v35) >> 15) +
                      (((v58 >> 16) * v36) >> 15);
            v6[v56--] = v58 + v37 * (v59 >> 16) +
                        (((unsigned __int16)v59 * v35) >> 15) +
                        (((v59 >> 16) * v36) >> 15);
          } while (v55 != 0);
        }
      }
      ++v9;
      ++v5;
      ++v7;
      ++v8;
      ++v6;
      v3 = v3 - 2 * (v3 >> 16) * ((v37 * v35 + 2 * ((v35 * v36) >> 15)) >> 16) -
           (((((v37 * v35 + 2 * ((v35 * v36) >> 15)) >> 16) *
              (unsigned __int16)v3) >>
             15) +
            ((((v37 * v35 + 2 * ((v35 * v36) >> 15)) & 0xFFFE) * (v3 >> 16)) >>
             15));
      if (v3 < *f_.v75 >> 10) {
        goto LABEL_31;
      }
    }
    if (v8 >= 4) {
      v15 = (int*)&f_.v77;
      v16 = 0;
      v13 = 0;
      v17 = v9;
      do {
        v16 -= 4;
        v18 = *(v15 - 2) >> 16;
        v19 = v17[1] >> 16;
        v20 = (unsigned __int16)v17[1] * v18;
        v21 = v13 + 2 * v18 * v19;
        v22 = *v17 >> 16;
        v23 = v21 + (v20 >> 15) + ((v19 * (unsigned __int16)*(v15 - 2)) >> 15) +
              2 * (*(v15 - 1) >> 16) * v22 +
              (((unsigned __int16)*v17 * (*(v15 - 1) >> 16)) >> 15);
        v25 = *(v17 - 2);
        v24 = *(v17 - 1);
        v17 -= 4;
        v26 = v23 + ((v22 * (unsigned __int16)*(v15 - 1)) >> 15);
        v27 = *v15;
        v28 = v15[1];
        v15 += 4;
        v13 = v26 + 2 * (v27 >> 16) * (v24 >> 16) +
              (((unsigned __int16)v24 * (v27 >> 16)) >> 15) +
              (((v24 >> 16) * (unsigned __int16)v27) >> 15) +
              2 * (v28 >> 16) * (v25 >> 16) +
              (((unsigned __int16)v25 * (v28 >> 16)) >> 15) +
              (((v25 >> 16) * (unsigned __int16)v28) >> 15);
      } while (-(__int64)(v8 & 0xFFFFFFFFFFFFFFFCLL) != v16);
      v12 = -v16;
      if ((v8 & 3) == 0) {
        goto LABEL_21;
      }
    }
    else {
      v12 = 0;
      v13 = 0;
      if ((v8 & 3) == 0) {
      LABEL_21:
        v14 = 8 * v13;
        goto LABEL_22;
      }
    }
    v29 = v8 & 3;
    v30 = &v5[-v12];
    v31 = (int*)&f_.v76 + v12;
    do {
      v33 = *v31++;
      v32 = v33;
      v34 = *v30--;
      --v29;
      v13 += 2 * (v32 >> 16) * (v34 >> 16) +
             (((unsigned __int16)v34 * (v32 >> 16)) >> 15) +
             (((v34 >> 16) * (unsigned __int16)v32) >> 15);
    } while (v29 != 0);
    goto LABEL_21;
  }
LABEL_31:
  if (a3 >= 1) {
    v60 = a3 & 7;
    if ((unsigned int)a3 < 8) {
      v61 = 0;
      if ((a3 & 7) == 0) {
        return result;
      }
      goto LABEL_38;
    }
    v62 = 0;
    v63 = v78;
    v64 = (_WORD*)(a1 + 8);
    do {
      v62 -= 8;
      v65 = (unsigned int)(*(v63 - 3) + 0x8000) >> 16;
      *(v64 - 4) = (unsigned int)(*(v63 - 4) + 0x8000) >> 16;
      *(v64 - 3) = v65;
      v66 = (unsigned int)(*(v63 - 1) + 0x8000) >> 16;
      *(v64 - 2) = (unsigned int)(*(v63 - 2) + 0x8000) >> 16;
      *(v64 - 1) = v66;
      v67 = (unsigned int)(v63[1] + 0x8000) >> 16;
      *v64 = (unsigned int)(*(int*)v63 + 0x8000) >> 16;
      v64[1] = v67;
      v68 = v63[2];
      v69 = v63[3];
      v63 += 8;
      v64[2] = (unsigned int)(v68 + 0x8000) >> 16;
      v64[3] = (unsigned int)(v69 + 0x8000) >> 16;
      v64 += 8;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v62);
    v61 = -v62;
    if ((a3 & 7) != 0) {
    LABEL_38:
      v70 = (_WORD*)(a1 + 2 * v61);
      v71 = (int*)&f_.v76 + v61;
      do {
        v72 = *v71++;
        --v60;
        *v70++ = (unsigned int)(v72 + 0x8000) >> 16;
      } while (v60 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
