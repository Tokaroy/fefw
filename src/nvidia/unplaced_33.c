#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvRmMemHandleFree_plt(unsigned int);
__int64 NvWsiNativeDisplayUnref_plt(_QWORD, _QWORD);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_859ba0(const char*, const char*,
                                            const char*, int);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nvidia_644da0(unsigned int, int, __int64, __int64);
__int64 nvidia_64b750(__int64 result, __int64, __int64);
__int64 nvu_hash_5ef600(__int64, __int64, unsigned int, char);
extern _UNKNOWN* SdkData_103b080;
extern _UNKNOWN* SdkData_103b088;
extern _UNKNOWN* SdkData_103b090;
extern _UNKNOWN* SdkData_103b098;
extern _UNKNOWN* SdkData_103b0a0;
extern _UNKNOWN* SdkData_103b0a8;
extern _UNKNOWN* SdkData_103b0b0;
extern _UNKNOWN* SdkData_103b0b8;
extern _UNKNOWN* SdkData_103b0c0;
extern _UNKNOWN* SdkData_103b0c8;
extern _UNKNOWN* SdkData_103b0d0;
extern _UNKNOWN* SdkData_103b0d8;
extern _UNKNOWN* SdkData_103b0e0;
extern _UNKNOWN* SdkData_103b0e8;
extern _UNKNOWN* SdkData_103b0f0;
extern _UNKNOWN* SdkData_103b0f8;
extern _UNKNOWN SdkData_103f150;
extern __int64 SdkData_103f158;
__int64 nvidia_5efe60(__int64 a1, unsigned int a2, char a3, char a4);
_QWORD* nvidia_5f6490(_QWORD* result);
__int64 nvidia_5fb5c0(void (*a1)(__int64, __int64), __int64 a2, int a3);
__int64 nvidia_633670(__int64 a1, unsigned int a2, int a3);
__int64 nvidia_6460f0(__int64 a1);
__int64 nvidia_646740(__int64 a1);
__int64 nvidia_64b9e0(__int64 result, char a2, int a3, __int64 a4);

__int64 nvidia_5efe60(__int64 a1, unsigned int a2, char a3, char a4)
{
  int v4;
  __int64 result;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  unsigned int* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v4 = 16;
  if (a3 == 0) {
    v4 = 8;
  }
  if (a4 != 0) {
    v4 |= 4u;
  }
  result = NvOsAlloc_plt(v4 * (__int64)(int)a2 + 31);
  if (result != 0) {
    v11 = *(unsigned int*)(a1 + 16);
    v10 = *(_DWORD*)(a1 + 20);
    v12 = *(_QWORD*)(a1 + 32);
    v13 = *(__int64**)(a1 + 48);
    *(_QWORD*)(a1 + 32) = result;
    *(_DWORD*)(a1 + 16) = a2;
    *(_DWORD*)(a1 + 24) = v10;
    v15 = *(unsigned int**)(a1 + 56);
    v14 = *(_QWORD**)(a1 + 64);
    v16 = (result + 31) & 0xFFFFFFFFFFFFFFE0LL;
    v17 = v16 + 8LL * (int)a2;
    *(_QWORD*)(a1 + 48) = v16;
    if (a4 != 0) {
      *(_QWORD*)(a1 + 56) = v17;
      memset_plt(v16 + 8LL * (int)a2, 0, 4LL * a2);
      if (a3 != 0) {
        v18 = v17 + 4LL * (int)a2;
      }
      else {
        v18 = 0;
      }
      *(_QWORD*)(a1 + 64) = v18;
      if ((int)v11 < 1) {
      LABEL_45:
        NvOsFree_plt(v12);
        return 1;
      }
    }
    else {
      *(_QWORD*)(a1 + 56) = 0;
      memset_plt(v16, (int)((_UNKNOWN*)0xFCLL) + 3, 8LL * a2);
      if (a3 != 0) {
        v19 = v17;
      }
      else {
        v19 = 0;
      }
      *(_QWORD*)(a1 + 64) = v19;
      if ((int)v11 < 1) {
        goto LABEL_45;
      }
    }
    if (v15 != nullptr) {
      if (v14 != nullptr) {
        do {
          v21 = *v15++;
          v20 = v21;
          if ((v21 & 1) != 0) {
            v22 = nvu_hash_5ef600(a1, *v13, v20, 1);
            *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v22) = *v13;
            v23 = *(_QWORD*)(a1 + 64);
            if (v23 != 0) {
              *(_QWORD*)(v23 + 8LL * v22) = *v14;
            }
            v24 = *(_QWORD*)(a1 + 56);
            if (v24 != 0) {
              *(_DWORD*)(v24 + 4LL * v22) = v20;
            }
          }
          ++v14;
          ++v13;
          --v11;
        } while (v11 != 0);
      }
      else {
        do {
          v26 = *v15++;
          v25 = v26;
          if ((v26 & 1) != 0) {
            v27 = nvu_hash_5ef600(a1, *v13, v25, 1);
            v28 = *v13;
            *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v27) = *v13;
            v29 = *(_QWORD*)(a1 + 64);
            if (v29 != 0) {
              *(_QWORD*)(v29 + 8LL * v27) = v28;
            }
            v30 = *(_QWORD*)(a1 + 56);
            if (v30 != 0) {
              *(_DWORD*)(v30 + 4LL * v27) = v25;
            }
          }
          ++v13;
          --v11;
        } while (v11 != 0);
      }
    }
    else if (v14 != nullptr) {
      do {
        if ((unsigned __int64)*v13 <= 0xFFFFFFFFFFFFFFFDLL) {
          v31 = (*(__int64 (**)(__int64))a1)(*v13) | 1;
          v32 = nvu_hash_5ef600(a1, *v13, v31, 1);
          *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v32) = *v13;
          v33 = *(_QWORD*)(a1 + 64);
          if (v33 != 0) {
            *(_QWORD*)(v33 + 8LL * v32) = *v14;
          }
          v34 = *(_QWORD*)(a1 + 56);
          if (v34 != 0) {
            *(_DWORD*)(v34 + 4LL * v32) = v31;
          }
        }
        ++v14;
        ++v13;
        --v11;
      } while (v11 != 0);
    }
    else {
      do {
        if ((unsigned __int64)*v13 <= 0xFFFFFFFFFFFFFFFDLL) {
          v35 = (*(__int64 (**)(__int64))a1)(*v13) | 1;
          v36 = nvu_hash_5ef600(a1, *v13, v35, 1);
          v37 = *v13;
          *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v36) = *v13;
          v38 = *(_QWORD*)(a1 + 64);
          if (v38 != 0) {
            *(_QWORD*)(v38 + 8LL * v36) = v37;
          }
          v39 = *(_QWORD*)(a1 + 56);
          if (v39 != 0) {
            *(_DWORD*)(v39 + 4LL * v36) = v35;
          }
        }
        ++v13;
        --v11;
      } while (v11 != 0);
    }
    goto LABEL_45;
  }
  return result;
}

_QWORD* nvidia_5f6490(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (result != nullptr) {
    v1 = result;
    if (SdkData_103b080 != nullptr) {
      v2 = *result;
      if (*v1 != 0) {
        ((void (*)(__int64))SdkData_103b080)(v2);
      }
    }
    if (SdkData_103b088 != nullptr) {
      v3 = v1[1];
      if (v3 != 0) {
        ((void (*)(__int64))SdkData_103b088)(v3);
      }
    }
    if (SdkData_103b090 != nullptr) {
      v4 = v1[2];
      if (v4 != 0) {
        ((void (*)(__int64))SdkData_103b090)(v4);
      }
    }
    if (SdkData_103b098 != nullptr) {
      v5 = v1[3];
      if (v5 != 0) {
        ((void (*)(__int64))SdkData_103b098)(v5);
      }
    }
    if (SdkData_103b0a0 != nullptr) {
      v6 = v1[4];
      if (v6 != 0) {
        ((void (*)(__int64))SdkData_103b0a0)(v6);
      }
    }
    if (SdkData_103b0a8 != nullptr) {
      v7 = v1[5];
      if (v7 != 0) {
        ((void (*)(__int64))SdkData_103b0a8)(v7);
      }
    }
    if (SdkData_103b0b0 != nullptr) {
      v8 = v1[6];
      if (v8 != 0) {
        ((void (*)(__int64))SdkData_103b0b0)(v8);
      }
    }
    if (SdkData_103b0b8 != nullptr) {
      v9 = v1[7];
      if (v9 != 0) {
        ((void (*)(__int64))SdkData_103b0b8)(v9);
      }
    }
    if (SdkData_103b0c0 != nullptr) {
      v10 = v1[8];
      if (v10 != 0) {
        ((void (*)(__int64))SdkData_103b0c0)(v10);
      }
    }
    if (SdkData_103b0c8 != nullptr) {
      v11 = v1[9];
      if (v11 != 0) {
        ((void (*)(__int64))SdkData_103b0c8)(v11);
      }
    }
    if (SdkData_103b0d0 != nullptr) {
      v12 = v1[10];
      if (v12 != 0) {
        ((void (*)(__int64))SdkData_103b0d0)(v12);
      }
    }
    if (SdkData_103b0d8 != nullptr) {
      v13 = v1[11];
      if (v13 != 0) {
        ((void (*)(__int64))SdkData_103b0d8)(v13);
      }
    }
    if (SdkData_103b0e0 != nullptr) {
      v14 = v1[12];
      if (v14 != 0) {
        ((void (*)(__int64))SdkData_103b0e0)(v14);
      }
    }
    if (SdkData_103b0e8 != nullptr) {
      v15 = v1[13];
      if (v15 != 0) {
        ((void (*)(__int64))SdkData_103b0e8)(v15);
      }
    }
    if (SdkData_103b0f0 != nullptr) {
      v16 = v1[14];
      if (v16 != 0) {
        ((void (*)(__int64))SdkData_103b0f0)(v16);
      }
    }
    if (SdkData_103b0f8 != nullptr) {
      v17 = v1[15];
      if (v17 != 0) {
        ((void (*)(__int64))SdkData_103b0f8)(v17);
      }
    }
    return (_QWORD*)NvOsFree_plt(v1);
  }
  return result;
}

__int64 nvidia_5fb5c0(void (*a1)(__int64, __int64), __int64 a2, int a3)
{
  unsigned int v6;
  __int64 v7;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_103f150);
  v6 = 0;
  if (a3 != -1) {
    v7 = SdkData_103f158;
    if (SdkData_103f158 != 0) {
      while (*(_DWORD*)v7 != a3) {
        v7 = *(_QWORD*)(v7 + 24);
        if (v7 == 0) {
          v6 = 0;
          goto LABEL_7;
        }
      }
      a1(v7, a2);
      v6 = 1;
    }
  }
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_103f150);
  return v6;
}

__int64 nvidia_633670(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3;
  __int64 v5;
  struct {
    _DWORD v6[2];
    __int64 v7;
  } v6_;

  v3 = *(_QWORD*)(a1 + 64);
  if (v3 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(*(_QWORD*)(a1 + 64));
  }
  if (a2 > 2) {
    return 11;
  }
  v6_.v6[0] = a2;
  if ((unsigned int)(a3 - 1) > 5) {
    return 11;
  }
  v5 = *(_QWORD*)(a1 + 56);
  v6_.v6[1] = a3;
  v6_.v7 = 0;
  if (*(_DWORD*)(v5 + 40) < 0x12u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(_DWORD*)(a1 + 48), 1074808850, (__int64)v6_.v6, 16);
  }
}

__int64 nvidia_6460f0(__int64 a1)
{
  __int64 v2;
  unsigned int v3;

  v2 = *(_QWORD*)(a1 + 488);
  if (v2 != 0) {
    (*(void (**)(__int64))(a1 + 496))(v2);
  }
  v3 = *(_DWORD*)(a1 + 392);
  if (v3 != 0) {
    NvRmMemHandleFree_plt(v3);
  }
  return NvOsFree_plt(a1);
}

__int64 nvidia_646740(__int64 a1)
{
  (**(void (***)(__int64))(a1 + 368))(*(_QWORD*)(a1 + 368));
  NvWsiNativeDisplayUnref_plt(*(_QWORD*)(a1 + 360),
                              *(_QWORD*)(*(_QWORD*)(a1 + 360) + 32LL));
  return NvOsFree_plt(a1);
}

__int64 nvidia_64b9e0(__int64 result, char a2, int a3, __int64 a4)
{
  char v4;
  _BOOL4 v5;
  __int64 v9;
  _BOOL4 v10;
  int v11;
  __int64 v12;
  char v13;
  char v14;
  char v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int* v19;
  _DWORD* v20;
  unsigned int v21;
  _OWORD* v22;
  __int128* v23;
  __int64 v24;
  __int128 v25;
  __int128 v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  char v43;
  __int64 (*v44)(__int64, __int64, __int64, __int64);
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  int v49;
  __int64 (*v50)(__int64, __int64, __int64, __int64);
  int v51;
  char* v52;

  if (a3 != 0) {
    v5 = true;
    v9 = result;
    v10 = false;
    v11 = 0;
    do {
      if ((a2 & 1) != 0) {
        v17 = *(_QWORD*)v9;
        if ((*(_BYTE*)(a4 + 20) & 1) != 0) {
          v18 = *(unsigned int*)(a4 + 16);
          v19 = *(int**)(a4 + 8);
          if (v17 + 4 * (unsigned __int64)(unsigned int)v18 >
              *(_QWORD*)(v9 + 8)) {
            result = nvidia_64b750(
                v9, v17, 4LL * (unsigned int)(*(int*)(v9 + 104) + v18));
            v17 = *(_QWORD*)v9;
          }
          if ((_DWORD)v18 != 0) {
            if ((unsigned int)v18 < 8) {
              v20 = (_DWORD*)v17;
              v21 = v18;
              v27 = v18 & 7;
              if ((v18 & 7) != 0) {
                goto LABEL_17;
              }
              goto LABEL_60;
            }
            v20 = (_DWORD*)v17;
            v21 = v18;
            if ((unsigned __int64)(v17 - (_QWORD)v19) < 0x20) {
              goto LABEL_16;
            }
            v22 = (_OWORD*)(v17 + 16);
            v23 = (__int128*)(v19 + 4);
            v20 = (_DWORD*)(v17 + 4LL * ((unsigned int)v18 & 0xFFFFFFF8));
            v21 = v18 - (v18 & 0xFFFFFFF8);
            v24 = (unsigned int)v18 & 0xFFFFFFF8;
            do {
              v25 = *(v23 - 1);
              v26 = *v23;
              v23 += 2;
              v24 -= 8;
              *(v22 - 1) = v25;
              *v22 = v26;
              v22 += 2;
            } while (v24 != 0);
            v19 += (unsigned int)v18 & 0xFFFFFFF8;
            if ((v18 & 0xFFFFFFF8) != v18) {
            LABEL_16:
              v27 = v21 & 7;
              if ((v21 & 7) != 0) {
              LABEL_17:
                v28 = v21 & 0xFFFFFFF8;
                do {
                  v29 = *v19++;
                  --v27;
                  *(_DWORD*)v20++ = v29;
                } while (v27 != 0);
                goto LABEL_61;
              }
            LABEL_60:
              v28 = v21;
            LABEL_61:
              if (v21 - 1 >= 7) {
                do {
                  v28 -= 8;
                  *(_DWORD*)v20 = *v19;
                  v20[1] = v19[1];
                  v20[2] = v19[2];
                  v20[3] = v19[3];
                  v20[4] = v19[4];
                  v20[5] = v19[5];
                  v20[6] = v19[6];
                  v51 = v19[7];
                  v19 += 8;
                  v20[7] = v51;
                  v20 += 8;
                } while (v28 != 0);
              }
            }
          }
          *(_QWORD*)v9 = v17 + 4 * v18;
          goto LABEL_5;
        }
      }
      else {
        v17 = *(_QWORD*)v9;
      }
      v30 = *(_QWORD*)(v9 + 72);
      v12 = *(_QWORD*)(v9 + 40);
      if (v17 != v30) {
        v31 = *(_QWORD*)(v9 + 56);
        v32 = (unsigned __int64)(v17 - v30) >> 2;
        *(_QWORD*)(v9 + 72) = v17;
        if (v5) {
          v33 = 2;
        }
        else {
          v33 = 0;
        }
        v34 = v30 - v31;
        v35 = *(_QWORD*)(v9 + 88);
        v36 = v34 + *(_QWORD*)(v9 + 96);
        if (v10) {
          v37 = 4;
        }
        else {
          v37 = 0;
        }
        v4 = v4 & 0xF8 | v37 | v33 | 1;
        if (v35 != 0) {
          v38 = *(unsigned int*)(v12 - 8);
          v39 = *(_QWORD*)(v12 - 24) + 4 * v38;
          v40 = v38 + v32;
          v41 = (unsigned int)(v38 + v32) >> 21;
          if (v39 == v36 & v41 == 0 && !v10 && v5) {
            v43 = *(_BYTE*)(v12 - 4);
            if ((v43 & 1) != 0) {
              *(_DWORD*)(v12 - 8) = v40;
              *(_BYTE*)(v12 - 4) = v43 & 0xFD | v33;
              v12 = *(_QWORD*)(v9 + 40);
              v45 = *(_QWORD*)(v9 + 88);
              if (v45 == 0) {
                goto LABEL_52;
              }
              goto LABEL_46;
            }
          }
        }
        if ((unsigned __int64)(v12 + 32) > *(_QWORD*)(v9 + 48) &&
            *(_BYTE*)(v9 + 21) != 0) {
          v44 = *(__int64 (**)(__int64, __int64, __int64, __int64))(v9 + 120);
          if (v44 == nullptr) {
            goto LABEL_66;
          }
          result = v44(v9, 1, 256, *(_QWORD*)(v9 + 128));
          v12 = *(_QWORD*)(v9 + 40);
          if ((signed __int64)(*(_QWORD*)(v9 + 48) - v12 + 16) < 48) {
          LABEL_65:
            v52 = "CommandBuffer out-of-memory callback didn't add enough "
                  "control memory.";
            goto LABEL_67;
          }
          v35 = *(_QWORD*)(v9 + 88);
        }
        if (v35 != 0) {
          *(_DWORD*)(v35 + 4) =
              (((unsigned __int64)*(unsigned int*)(v35 + 4) << 32) +
               0x100000000LL) >>
              32;
        }
        else {
          *(_QWORD*)(v12 + 8) = 0;
          *(_QWORD*)(v12 + 16) = 0;
          *(_QWORD*)(v12 + 24) = 0;
          *(_QWORD*)v12 = 0x100000003LL;
          *(_QWORD*)(v9 + 88) = v12;
          v12 += 8;
        }
        *(_QWORD*)v12 = v36;
        *(_QWORD*)(v12 + 8) = v30;
        *(_DWORD*)(v12 + 16) = v32;
        *(_BYTE*)(v12 + 20) = v4;
        v12 += 24;
        *(_QWORD*)(v9 + 40) = v12;
      }
      v45 = *(_QWORD*)(v9 + 88);
      if (v45 == 0) {
        goto LABEL_52;
      }
    LABEL_46:
      v46 = *(unsigned int*)(v12 - 8);
      if (*(_QWORD*)(v12 - 24) + 4 * v46 == *(_QWORD*)a4) {
        v47 = *(int*)(a4 + 16) + v46;
        if (v47 >> 21 == 0) {
          v48 = *(unsigned __int8*)(a4 + 20);
          if ((v48 & 6) == 2) {
            v49 = *(unsigned __int8*)(v12 - 4);
            if (((v49 ^ v48) & 1) == 0) {
              *(_DWORD*)(v12 - 8) = v47;
              *(_BYTE*)(v12 - 4) = v49 & 0xFD | *(_BYTE*)(a4 + 20) & 2;
              goto LABEL_5;
            }
          }
        }
      }
    LABEL_52:
      if ((unsigned __int64)(v12 + 32) > *(_QWORD*)(v9 + 48) &&
          *(_BYTE*)(v9 + 21) != 0) {
        v50 = *(__int64 (**)(__int64, __int64, __int64, __int64))(v9 + 120);
        if (v50 == nullptr) {
        LABEL_66:
          v52 = "CommandBuffer has run out of control memory with no "
                "out-of-memory callback.";
        LABEL_67:
          nn_diag_detail_AbortImpl_plt_859ba0(v52, nullptr, nullptr, 0);
        }
        result = v50(v9, 1, 256, *(_QWORD*)(v9 + 128));
        v12 = *(_QWORD*)(v9 + 40);
        if ((signed __int64)(*(_QWORD*)(v9 + 48) - v12 + 16) < 48) {
          goto LABEL_65;
        }
        v45 = *(_QWORD*)(v9 + 88);
      }
      if (v45 != 0) {
        *(_DWORD*)(v45 + 4) =
            (((unsigned __int64)*(unsigned int*)(v45 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v12 + 8) = 0;
        *(_QWORD*)(v12 + 16) = 0;
        *(_QWORD*)(v12 + 24) = 0;
        *(_QWORD*)v12 = 0x100000003LL;
        *(_QWORD*)(v9 + 88) = v12;
        v12 += 8;
      }
      v13 = *(_BYTE*)(v12 + 20);
      *(_QWORD*)v12 = *(_QWORD*)a4;
      *(_QWORD*)(v12 + 8) = *(_QWORD*)(a4 + 8);
      *(_DWORD*)(v12 + 16) = *(_DWORD*)(a4 + 16);
      v14 = v13 & 0xFE | *(_BYTE*)(a4 + 20) & 1;
      *(_BYTE*)(v12 + 20) = v14;
      v15 = v14 & 0xFD | (2 * ((*(_BYTE*)(a4 + 20) & 2) != 0));
      *(_BYTE*)(v12 + 20) = v15;
      *(_BYTE*)(v12 + 20) = v15 & 0xFB | *(_BYTE*)(a4 + 20) & 4;
      *(_QWORD*)(v9 + 40) = v12 + 24;
    LABEL_5:
      v16 = *(_BYTE*)(a4 + 20);
      ++v11;
      a4 += 24;
      v5 = (v16 & 2) != 0;
      v10 = (v16 & 4) != 0;
    } while (v11 != a3);
  }
  return result;
}

#pragma GCC visibility pop
