#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_859ba0(const char*, const char*,
                                            const char*, int);
__int64 nvidia_64b750(__int64 result, __int64, __int64);
__int64 nvidia_64cf80(__int64, __int64, unsigned int);
__int64 nvidia_64be80(__int64 result, unsigned __int64 a2, char a3);

__int64 nvidia_64be80(__int64 result, unsigned __int64 a2, char a3)
{
  char v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _BOOL4 v12;
  _BOOL4 v13;
  int v14;
  __int64 v15;
  char v16;
  char v17;
  char v18;
  char v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  _DWORD* v23;
  unsigned int v24;
  _OWORD* v25;
  __int128* v26;
  __int64 v27;
  __int128 v28;
  __int128 v29;
  int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  char v41;
  __int64 v42;
  __int64 v43;
  int v44;
  unsigned int v45;
  char v47;
  __int64 (*v49)(__int64, __int64, __int64, _QWORD);
  __int64 v50;
  int v51;
  int v52;
  int v53;
  __int64 (*v55)(__int64, __int64, __int64, _QWORD);
  int v56;
  char* v57;
  struct {
    char gap0_[8];
    unsigned __int64 v58;
    char gap16_[16];
    _QWORD v59[3];
    int v60;
    char v61;
    char gap61_[3];
    __int64 v62;
    int v63;
    int v64;
    _QWORD* v65;
    __int64 v66;
  } f_;

  v5 = result;
  f_.v63 = a2 & 3;
  if (f_.v63 == 1) {
    v8 = 0;
    a2 = (a2 & 0xFFFFFFFFFFFCLL) - 8;
  }
  else {
    if ((a2 & 3) == 2) {
      v6 = a2 & 0xFFFFFFFFFCLL;
      v7 = a2 >> 40;
      f_.v59[2] = 0;
      f_.v64 = 0;
      f_.v60 = a2 >> 40;
      a2 = (unsigned __int64)f_.v59;
      f_.v65 = f_.v59;
      f_.v59[0] = 0x100000003LL;
      f_.v59[1] = v6;
      f_.v61 = 3;
      f_.v62 = 2;
      v8 = 4 * v7;
      goto LABEL_7;
    }
    v8 = 0;
  }
  f_.v64 = 0;
  f_.v65 = (_QWORD*)a2;
LABEL_7:
  f_.v66 = v8;
LABEL_9:
  while (2) {
    {
      v9 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v9));
    }
    switch ((unsigned __int8)*(_QWORD*)a2) {
    case 3u:
      v10 = a2 + 8;
      v11 = DWORDn(v9, sizeof(v9) / 4 - 1);
      f_.v58 = a2 + 8;
      if (DWORDn(v9, sizeof(v9) / 4 - 1) == 0) {
        goto LABEL_21;
      }
      v12 = true;
      v13 = false;
      v14 = 0;
      break;
    case 4u: {
      a2 = *(_QWORD*)(a2 + 8);
      __asm__ volatile("" ::"r"(a2));
    }
      continue;
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x23u:
    case 0x25u:
    case 0x26u:
    case 0x2Cu:
    case 0x2Du:
    case 0x32u:
    case 0x38u:
    case 0x39u:
    case 0x42u:
    case 0x43u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x53u:
    case 0x61u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x6Du:
      result = nvidia_64cf80(v5, a2, 0x10u);
      a2 = result;
      continue;
    case 0xDu:
    case 0xEu:
    case 0x21u:
    case 0x22u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x51u:
    case 0x52u:
    case 0x54u:
    case 0x5Du:
    case 0x69u:
      result = nvidia_64cf80(v5, a2, 0x18u);
      a2 = result;
      continue;
    case 0x16u:
    case 0x33u:
    case 0x50u:
    case 0x62u:
    case 0x63u:
      result = nvidia_64cf80(v5, a2, 0x28u);
      a2 = result;
      continue;
    case 0x24u:
      result = nvidia_64cf80(v5, a2, (((unsigned int)v9 >> 22) & 0x3F8) + 8);
      a2 = result;
      continue;
    case 0x27u:
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Du:
    case 0x3Eu:
    case 0x3Fu:
    case 0x40u:
    case 0x41u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Eu:
    case 0x60u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Fu:
      result = nvidia_64cf80(v5, a2, 8u);
      a2 = result;
      continue;
    case 0x28u:
    case 0x29u:
      result = nvidia_64cf80(v5, a2, 0x48u);
      a2 = result;
      continue;
    case 0x2Au:
      a2 += 24LL;
      continue;
    case 0x2Bu:
      result = nvidia_64cf80(v5, a2, 0x30u);
      a2 = result;
      continue;
    case 0x44u:
      result = nvidia_64cf80(v5, a2, 0x38u);
      a2 = result;
      continue;
    case 0x4Eu:
      result = nvidia_64cf80(v5, a2, 0x60u);
      a2 = result;
      continue;
    case 0x5Au:
    case 0x5Cu:
      result = nvidia_64cf80(v5, a2, 0x20u);
      a2 = result;
      continue;
    case 0x5Bu:
      result = nvidia_64cf80(v5, a2, 0x88u);
      a2 = result;
      continue;
    case 0x5Fu:
      result = nvidia_64cf80(v5, a2, 0x120u);
      a2 = result;
      continue;
    case 0x64u:
    case 0x65u:
      result = nvidia_64cf80(v5, a2, 0x78u);
      a2 = result;
      continue;
    case 0x6Eu:
      result = nvidia_64cf80(v5, a2, 0x40u);
      a2 = result;
      continue;
    default:
      return result;
    }
    break;
  }
  while (1) {
    if ((a3 & 1) != 0) {
      {
        v20 = *(_QWORD*)v5;
        __asm__ volatile("" ::"r"(v20));
      }
      if ((*(_BYTE*)(v10 + 20) & 1) != 0) {
        {
          v21 = *(unsigned int*)(v10 + 16);
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(int**)(v10 + 8);
          __asm__ volatile("" ::"r"(v22));
        }
        if (v20 + 4 * (unsigned __int64)(unsigned int)v21 >
            *(_QWORD*)(v5 + 8)) {
          result = nvidia_64b750(v5, v20,
                                 4LL * (unsigned int)(*(int*)(v5 + 104) + v21));
          {
            v20 = *(_QWORD*)v5;
            __asm__ volatile("" ::"r"(v20));
          }
        }
        if ((_DWORD)v21 != 0) {
          if ((unsigned int)v21 < 8) {
            v23 = (_DWORD*)v20;
            v24 = v21;
            v30 = v21 & 7;
            if ((v21 & 7) != 0) {
              goto LABEL_44;
            }
            goto LABEL_90;
          }
          v23 = (_DWORD*)v20;
          v24 = v21;
          if ((unsigned __int64)(v20 - (_QWORD)v22) < 0x20) {
            goto LABEL_43;
          }
          v25 = (_OWORD*)(v20 + 16);
          v26 = (__int128*)(v22 + 4);
          v23 = (_DWORD*)(v20 + 4LL * ((unsigned int)v21 & 0xFFFFFFF8));
          v24 = v21 - (v21 & 0xFFFFFFF8);
          v27 = (unsigned int)v21 & 0xFFFFFFF8;
          do {
            v28 = *(v26 - 1);
            v29 = *v26;
            v26 += 2;
            v27 -= 8;
            *(v25 - 1) = v28;
            *v25 = v29;
            v25 += 2;
          } while (v27 != 0);
          v22 += (unsigned int)v21 & 0xFFFFFFF8;
          if ((v21 & 0xFFFFFFF8) != v21) {
          LABEL_43:
            v30 = v24 & 7;
            if ((v24 & 7) != 0) {
            LABEL_44:
              v31 = v24 & 0xFFFFFFF8;
              do {
                {
                  v32 = *v22++;
                  __asm__ volatile("" ::"r"(v32));
                }
                --v30;
                *(_DWORD*)v23++ = v32;
              } while (v30 != 0);
              goto LABEL_91;
            }
          LABEL_90:
            v31 = v24;
          LABEL_91:
            if (v24 - 1 >= 7) {
              do {
                v31 -= 8;
                *(_DWORD*)v23 = *v22;
                v23[1] = v22[1];
                v23[2] = v22[2];
                v23[3] = v22[3];
                v23[4] = v22[4];
                v23[5] = v22[5];
                v23[6] = v22[6];
                {
                  v56 = v22[7];
                  __asm__ volatile("" ::"r"(v56));
                }
                v22 += 8;
                v23[7] = v56;
                v23 += 8;
              } while (v31 != 0);
            }
          }
        }
        *(_QWORD*)v5 = v20 + 4 * v21;
        goto LABEL_32;
      }
    }
    else {
      {
        v20 = *(_QWORD*)v5;
        __asm__ volatile("" ::"r"(v20));
      }
    }
    {
      v33 = *(_QWORD*)(v5 + 72);
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v34 = *(_QWORD*)(v5 + 40);
      __asm__ volatile("" ::"r"(v34));
    }
    if (v20 != v33) {
      {
        v35 = *(_QWORD*)(v5 + 88);
        __asm__ volatile("" ::"r"(v35));
      }
      {
        v36 = *(_QWORD*)(v5 + 96);
        __asm__ volatile("" ::"r"(v36));
      }
      v37 = (unsigned __int64)(v20 - v33) >> 2;
      {
        v38 = v33 - *(_QWORD*)(v5 + 56);
        __asm__ volatile("" ::"r"(v38));
      }
      *(_QWORD*)(v5 + 72) = v20;
      v39 = v38 + v36;
      if (v12) {
        v40 = 2;
      }
      else {
        v40 = 0;
      }
      if (v13) {
        v41 = 4;
      }
      else {
        v41 = 0;
      }
      v3 = v3 & 0xF8 | v41 | v40 | 1;
      if (v35 != 0) {
        {
          v42 = *(unsigned int*)(v34 - 8);
          __asm__ volatile("" ::"r"(v42));
        }
        {
          v43 = *(_QWORD*)(v34 - 24) + 4 * v42;
          __asm__ volatile("" ::"r"(v43));
        }
        v44 = v42 + v37;
        v45 = (unsigned int)(v42 + v37) >> 21;
        if (v43 == v39 & v45 == 0 && !v13 && v12) {
          {
            v47 = *(_BYTE*)(v34 - 4);
            __asm__ volatile("" ::"r"(v47));
          }
          if ((v47 & 1) != 0) {
            *(_DWORD*)(v34 - 8) = v44;
            *(_BYTE*)(v34 - 4) = v47 & 0xFD | v40;
            {
              v34 = *(_QWORD*)(v5 + 40);
              __asm__ volatile("" ::"r"(v34));
            }
            {
              v15 = *(_QWORD*)(v5 + 88);
              __asm__ volatile("" ::"r"(v15));
            }
            if (v15 == 0) {
              goto LABEL_82;
            }
            goto LABEL_76;
          }
        }
      }
      if ((unsigned __int64)(v34 + 32) > *(_QWORD*)(v5 + 48) &
          *(_BYTE*)(v5 + 21) != 0) {
        v49 = *(__int64 (**)(__int64, __int64, __int64, _QWORD))(v5 + 120);
        if (v49 == nullptr) {
          goto LABEL_95;
        }
        result = v49(v5, 1, 256, *(_QWORD*)(v5 + 128));
        {
          v34 = *(_QWORD*)(v5 + 40);
          __asm__ volatile("" ::"r"(v34));
        }
        if ((signed __int64)(*(_QWORD*)(v5 + 48) - v34 + 16) < 48) {
        LABEL_94:
          v57 = "CommandBuffer out-of-memory callback didn't add enough "
                "control memory.";
          goto LABEL_96;
        }
        {
          v35 = *(_QWORD*)(v5 + 88);
          __asm__ volatile("" ::"r"(v35));
        }
      }
      if (v35 != 0) {
        *(_DWORD*)(v35 + 4) =
            (((unsigned __int64)*(unsigned int*)(v35 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v34 + 8) = 0;
        *(_QWORD*)(v34 + 16) = 0;
        *(_QWORD*)(v34 + 24) = 0;
        *(_QWORD*)v34 = 0x100000003LL;
        *(_QWORD*)(v5 + 88) = v34;
        v34 += 8;
      }
      *(_QWORD*)v34 = v39;
      *(_QWORD*)(v34 + 8) = v33;
      *(_DWORD*)(v34 + 16) = v37;
      *(_BYTE*)(v34 + 20) = v3;
      v34 += 24;
      *(_QWORD*)(v5 + 40) = v34;
    }
    {
      v15 = *(_QWORD*)(v5 + 88);
      __asm__ volatile("" ::"r"(v15));
    }
    if (v15 == 0) {
      goto LABEL_82;
    }
  LABEL_76:
    {
      v50 = *(unsigned int*)(v34 - 8);
      __asm__ volatile("" ::"r"(v50));
    }
    if (*(_QWORD*)(v34 - 24) + 4 * v50 != *(_QWORD*)v10 ||
        (unsigned int)(v51 = *(int*)(v10 + 16) + v50) >> 21 != 0 ||
        ((v52 = *(unsigned __int8*)(v10 + 20)) & 6) != 2 ||
        (((v53 = *(unsigned __int8*)(v34 - 4)) ^ v52) & 1) != 0) {
    LABEL_82:
      if ((unsigned __int64)(v34 + 32) > *(_QWORD*)(v5 + 48) &
          *(_BYTE*)(v5 + 21) != 0) {
        v55 = *(__int64 (**)(__int64, __int64, __int64, _QWORD))(v5 + 120);
        if (v55 == nullptr) {
        LABEL_95:
          v57 = "CommandBuffer has run out of control memory with no "
                "out-of-memory callback.";
        LABEL_96:
          nn_diag_detail_AbortImpl_plt_859ba0(v57, nullptr, nullptr, 0);
        }
        result = v55(v5, 1, 256, *(_QWORD*)(v5 + 128));
        {
          v34 = *(_QWORD*)(v5 + 40);
          __asm__ volatile("" ::"r"(v34));
        }
        if ((signed __int64)(*(_QWORD*)(v5 + 48) - v34 + 16) < 48) {
          goto LABEL_94;
        }
        {
          v15 = *(_QWORD*)(v5 + 88);
          __asm__ volatile("" ::"r"(v15));
        }
      }
      if (v15 != 0) {
        *(_DWORD*)(v15 + 4) =
            (((unsigned __int64)*(unsigned int*)(v15 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v34 + 8) = 0;
        *(_QWORD*)(v34 + 16) = 0;
        *(_QWORD*)(v34 + 24) = 0;
        *(_QWORD*)v34 = 0x100000003LL;
        *(_QWORD*)(v5 + 88) = v34;
        v34 += 8;
      }
      {
        v16 = *(_BYTE*)(v34 + 20);
        __asm__ volatile("" ::"r"(v16));
      }
      *(_QWORD*)v34 = *(_QWORD*)v10;
      *(_QWORD*)(v34 + 8) = *(_QWORD*)(v10 + 8);
      *(_DWORD*)(v34 + 16) = *(_DWORD*)(v10 + 16);
      {
        v17 = v16 & 0xFE | *(_BYTE*)(v10 + 20) & 1;
        __asm__ volatile("" ::"r"(v17));
      }
      *(_BYTE*)(v34 + 20) = v17;
      {
        v18 = v17 & 0xFD | (2 * ((*(_BYTE*)(v10 + 20) & 2) != 0));
        __asm__ volatile("" ::"r"(v18));
      }
      *(_BYTE*)(v34 + 20) = v18;
      *(_BYTE*)(v34 + 20) = v18 & 0xFB | *(_BYTE*)(v10 + 20) & 4;
      *(_QWORD*)(v5 + 40) = v34 + 24;
      goto LABEL_32;
    }
    *(_DWORD*)(v34 - 8) = v51;
    *(_BYTE*)(v34 - 4) = v53 & 0xFD | *(_BYTE*)(v10 + 20) & 2;
  LABEL_32:
    {
      v19 = *(_BYTE*)(v10 + 20);
      __asm__ volatile("" ::"r"(v19));
    }
    ++v14;
    v10 += 24LL;
    v12 = (v19 & 2) != 0;
    v13 = (v19 & 4) != 0;
    if (v14 == (_DWORD)v11) {
    LABEL_21:
      a2 = f_.v58 + 24LL * (unsigned int)v11;
      goto LABEL_9;
    }
  }
}

#pragma GCC visibility pop
