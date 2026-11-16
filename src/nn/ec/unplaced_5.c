#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_ec_detail_ShowShopPageArg_GetRequestRelativeUrlBuffer_plt(void);
unsigned __int64 nn_ec_401fe0(__int64, const char*, unsigned __int8*,
                              unsigned __int64);
unsigned __int64 strlen_plt(const char*);
unsigned __int64 nn_ec_401a00(__int64 a1, unsigned __int8* a2, __int64 a3,
                              _BYTE* a4, char* a5, char* a6, __int64 a7,
                              __int64 a8, char a9);

unsigned __int64 nn_ec_401a00(__int64 a1, unsigned __int8* a2, __int64 a3,
                              _BYTE* a4, char* a5, char* a6, __int64 a7,
                              __int64 a8, char a9)
{
  _BYTE* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  unsigned __int64 v17;
  bool v18;
  int v19;
  __int64 v21;
  unsigned __int64 result;
  _BYTE* v23;
  unsigned __int64 v24;
  _BYTE* v25;
  int v26;
  bool v28;
  _BOOL4 v29;
  _BOOL4 v30;
  unsigned __int64 v31;
  _BYTE* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _BYTE* v35;
  unsigned int v36;
  unsigned int v37;
  char* v38;
  char** v39;
  int v40;
  char* v41;
  char** v42;
  __int64 v43;
  unsigned __int64* v44;
  char** v45;
  _BYTE* v46;
  unsigned __int64 v49;
  unsigned __int64 v50;
  int v51;
  bool v53;
  struct {
    char gap0_[144];
    _QWORD v55[2];
    _BYTE* v56;
    __int64 v57;
    char** v58;
    _BYTE** v59;
    _QWORD* v60;
    unsigned __int64 v61;
  } f_;
  __int64 v62;

  v10 = a4;
  v11 = a2;
  v12 = 0;
  f_.v55[0] = a7;
  f_.v55[1] = a8;
  v62 = a3;
  while (1) {
    {
      v13 = &a2[v12];
      __asm__ volatile("" ::"r"(v13));
    }
    if (a2[v12] == 0) {
      goto LABEL_9;
    }
    if (v13[1] == 0) {
      break;
    }
    if (v13[2] == 0) {
      LODWORD(v12) = v12 + 2;
      if ((unsigned int)v12 >= 0x800) {
        v14 = 2048;
      }
      else {
        v14 = (unsigned int)v12;
      }
      if (a4 != nullptr) {
        goto LABEL_13;
      }
      goto LABEL_24;
    }
    v12 += 3;
    if ((_DWORD)v12 == 2049) {
      LODWORD(v12) = 2049;
      v14 = 2048;
      if (a4 == nullptr) {
        goto LABEL_24;
      }
    LABEL_13:
      v15 = 0;
      while (1) {
        {
          v16 = &a4[v15];
          __asm__ volatile("" ::"r"(v16));
        }
        if (a4[v15] == 0) {
          goto LABEL_27;
        }
        if (v16[1] == 0) {
          LODWORD(v15) = v15 + 1;
        LABEL_27:
          v17 = (unsigned int)v15;
          if ((_DWORD)v12 == 0) {
            goto LABEL_25;
          }
          goto LABEL_28;
        }
        if (v16[2] == 0) {
          break;
        }
        v15 += 3;
        if ((_DWORD)v15 == 2049) {
          v17 = 2049;
          if ((_DWORD)v12 != 0) {
            goto LABEL_28;
          }
          goto LABEL_25;
        }
      }
      v17 = (unsigned int)(v15 + 2);
      if ((_DWORD)v12 != 0) {
        goto LABEL_28;
      }
    LABEL_25:
      v18 = false;
      goto LABEL_34;
    }
  }
  LODWORD(v12) = v12 + 1;
LABEL_9:
  if ((unsigned int)v12 >= 0x800) {
    v14 = 2048;
  }
  else {
    v14 = (unsigned int)v12;
  }
  if (a4 != nullptr) {
    goto LABEL_13;
  }
LABEL_24:
  v17 = 0;
  if ((_DWORD)v12 == 0) {
    goto LABEL_25;
  }
LABEL_28:
  {
    v19 = a2[v14 - 1];
    __asm__ volatile("" ::"r"(v19));
  }
  v18 = v19 == 38 | v19 == 63;
LABEL_34:
  v21 = v62;
  f_.v60 = nullptr;
  f_.v61 = 0;
  f_.v58 = nullptr;
  f_.v59 = nullptr;
  result = nn_ec_detail_ShowShopPageArg_GetRequestRelativeUrlBuffer_plt();
  v23 = (_BYTE*)result;
  *(_BYTE*)(result + 3071) = 0;
  f_.v56 = (_BYTE*)result;
  f_.v57 = 3071;
  if ((_DWORD)v12 != 0) {
    v24 = 3071;
    v25 = (_BYTE*)result;
    while (1) {
      {
        v26 = *v11;
        __asm__ volatile("" ::"r"(v26));
      }
      if ((unsigned int)(v26 - 48) >= 0xA & (v26 & 0xFFFFFFDF) - 65 >= 0x1A) {
        v28 =
            (unsigned int)(v26 - 33) > 0x3E ||
            ((1LL << ((unsigned __int8)v26 - 33)) & 0x40000000D6007FF9LL) == 0;
        if (v28 && v26 != 126) {
          break;
        }
      }
      --v24;
      *v25++ = v26;
      ++v11;
      if (v14 + v24 == 3071) {
        v24 = 3071 - v14;
        break;
      }
    }
    f_.v56 = v25;
    f_.v57 = v24;
    v29 = ((unsigned __int64)a5 | v21) != 0;
    v30 = v17 != 0;
    if ((v17 | (unsigned __int64)a5 | v21) != 0 & !v18) {
      if (v24 == 0) {
        return result;
      }
      goto LABEL_54;
    }
  }
  else {
    v24 = 3071;
    v29 = ((unsigned __int64)a5 | v21) != 0;
    v30 = v17 != 0;
    v25 = (_BYTE*)result;
    if ((v17 | (unsigned __int64)a5 | v21) != 0 & !v18) {
    LABEL_54:
      --v24;
      f_.v56 = v25 + 1;
      *v25 = 63;
      f_.v57 = v24;
    }
  }
  if (v21 != 0 && v24 != 0) {
    if ((_BYTE)v62 != 0) {
      if (BYTE1(v62) != 0) {
        if (BYTE2(v62) != 0) {
          if (BYTE3(v62) != 0) {
            if (BYTE4(v62) != 0) {
              if (BYTE5(v62) != 0) {
                if (BYTE6(v62) != 0) {
                  if (HIBYTE(v62) != 0) {
                    v31 = 8;
                  }
                  else {
                    v31 = 7;
                  }
                }
                else {
                  v31 = 6;
                }
              }
              else {
                v31 = 5;
              }
            }
            else {
              v31 = 4;
            }
          }
          else {
            v31 = 3;
          }
        }
        else {
          v31 = 2;
        }
      }
      else {
        v31 = 1;
      }
    }
    else {
      v31 = 0;
    }
    result = nn_ec_401fe0((__int64)&f_.v56, "from_scene",
                          (unsigned __int8*)&v62, v31);
    v24 = f_.v57;
  }
  if (a5 != nullptr && v24 != 0) {
    if (v21 != 0) {
      v32 = f_.v56;
      *f_.v56 = 38;
      f_.v56 = v32 + 1;
      f_.v57 = v24 - 1;
    }
    v33 = strlen_plt(a6);
    result = nn_ec_401fe0((__int64)&f_.v56, a5, (unsigned __int8*)a6, v33);
    v24 = f_.v57;
    f_.v60 = f_.v55;
    f_.v61 = 0xFFFFFF80FFFFFFF0LL;
    f_.v58 = (const char**)&a9;
    f_.v59 = &f_.v56;
    while (v24 != 0) {
      v36 = f_.v61;
      v37 = f_.v61;
      if ((f_.v61 & 0x80000000) != 0 &&
          (v37 = f_.v61 + 8, LODWORD(f_.v61) = f_.v61 + 8, v36 <= 0xFFFFFFF8)) {
        {
          v38 = *(_BYTE**)((char*)f_.v59 + (int)v36);
          __asm__ volatile("" ::"r"(v38));
        }
        if (v38 == nullptr) {
          break;
        }
      }
      else {
        v39 = f_.v58++;
        {
          v38 = *v39;
          __asm__ volatile("" ::"r"(v38));
        }
        if (*v39 == nullptr) {
          break;
        }
      }
      if ((v37 & 0x80000000) != 0) {
        v40 = v37 + 8;
        LODWORD(f_.v61) = v37 + 8;
        if (v37 <= 0xFFFFFFF8) {
          {
            v41 = *(_BYTE**)((char*)f_.v59 + (int)v37);
            __asm__ volatile("" ::"r"(v41));
          }
          if (v41 == nullptr) {
            goto LABEL_95;
          }
          goto LABEL_98;
        }
      }
      else {
        v40 = v37;
      }
      v42 = (char**)f_.v58++;
      {
        v41 = *v42;
        __asm__ volatile("" ::"r"(v41));
      }
      if (*v42 == nullptr) {
      LABEL_95:
        v34 = (unsigned __int64)v41;
        if (v41 == nullptr) {
          continue;
        }
        goto LABEL_84;
      }
    LABEL_98:
      if (v41 == (char*)-1LL) {
        if (v40 < 0 && (v43 = v40 + 8LL, LODWORD(f_.v61) = v40 + 8,
                        (unsigned int)v40 < 0xFFFFFFF9)) {
          {
            v34 = *(unsigned __int64*)((char*)f_.v59 + v40);
            __asm__ volatile("" ::"r"(v34));
          }
          if (v40 <= -9) {
            LODWORD(f_.v61) = v40 + 16;
            if ((unsigned int)v43 <= 0xFFFFFFF8) {
              {
                v41 = *(_BYTE**)((char*)f_.v59 + v43);
                __asm__ volatile("" ::"r"(v41));
              }
              if (v41 == nullptr) {
                continue;
              }
              goto LABEL_84;
            }
          }
        }
        else {
          v44 = (unsigned __int64*)f_.v58++;
          {
            v34 = *v44;
            __asm__ volatile("" ::"r"(v34));
          }
        }
        v45 = (char**)f_.v58++;
        {
          v41 = *v45;
          __asm__ volatile("" ::"r"(v41));
        }
        if (*v45 == nullptr) {
          continue;
        }
      }
      else {
        v34 = strlen_plt(v41);
      }
    LABEL_84:
      v35 = f_.v56;
      *f_.v56 = 38;
      f_.v56 = v35 + 1;
      f_.v57 = v24 - 1;
      result = nn_ec_401fe0((__int64)&f_.v56, v38, (unsigned __int8*)v41, v34);
      v24 = f_.v57;
    }
  }
  v46 = f_.v56;
  if (f_.v56 == v23 | v24 == 0 || !v30) {
    goto LABEL_137;
  }
  if (!v29 || *v10 == 38) {
    if (v17 >= v24) {
      v49 = v24;
    }
    else {
      v49 = v17;
    }
    if (v49 >= 0x800) {
      v49 = 2048;
    }
    goto LABEL_122;
  }
  --v24;
  *f_.v56 = 38;
  ++v46;
  if (v17 >= v24) {
    v49 = v24;
  }
  else {
    v49 = v17;
  }
  if (v49 >= 0x800) {
    v49 = 2048;
  }
  if (v24 != 0) {
  LABEL_122:
    v50 = v24 - v49;
    while (1) {
      v51 = (unsigned __int8)*v10;
      if ((unsigned int)(v51 - 48) >= 0xA & (v51 & 0xFFFFFFDF) - 65 >= 0x1A) {
        v53 =
            (unsigned int)(v51 - 33) > 0x3E ||
            ((1LL << ((unsigned __int8)v51 - 33)) & 0x40000000D6007FF9LL) == 0;
        if (v53 && v51 != 126) {
          break;
        }
      }
      *v46++ = v51;
      --v24;
      ++v10;
      if (--v49 == 0) {
        v24 = v50;
        break;
      }
    }
  LABEL_137:
    if (v24 != 0) {
      *v46 = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
