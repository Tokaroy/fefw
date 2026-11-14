#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 mkvparser_AudioTrack_AudioTrack_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Colour_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_ParseElementHeader_plt(__int64, __int64, __int64, __int64,
                                         __int64);
__int64 mkvparser_Projection_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Track_Info_Copy_plt(__int64, __int64);
__int64 mkvparser_UnserializeString_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_VideoTrack_VideoTrack_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_GetTlsValue_plt(unsigned int);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
int __cxa_guard_acquire_plt(__int64);
void SdkRoutine_85c8b0(void*);
void SdkRoutine_85c8b0_alt1(void*, void*);
void __cxa_guard_release_plt(__int64);
void libwebm_mkvparser_55dc80(__int64, __int64);
void nn_movie_detail_FreeMemory(__int64, _DWORD*);
__int64 libwebm_mkvparser_5575e0(__int64 result, __int64 a2, __int64 a3,
                                 __int64* a4);
__int64 libwebm_mkvparser_557e40(void* this_, void* a2, void* a3, __int64 a4,
                                 __int64* a5, void** a6);
__int64 libwebm_mkvparser_559200(void* this_, void* a2, void* a3, __int64 a4,
                                 __int64* a5, void** a6);

__int64 libwebm_mkvparser_5575e0(__int64 result, __int64 a2, __int64 a3,
                                 __int64* a4)
{

#pragma clang fp contract(off)
  __int64 (***v5)(_QWORD, __int64, __int64, __int64*);
  unsigned __int8 explicit;
  unsigned int* v9;
  _QWORD** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void** v15;
  float v16;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 (**v21)(_QWORD, __int64, __int64, __int64*);
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD** v24;
  __int64 v25;
  __int64 v26;
  __int64 (**v27)(_QWORD, __int64, __int64, __int64*);
  int v28;
  double v29;
  __int64 (**v30)(_QWORD, __int64, __int64, __int64*);
  unsigned __int64 v31;
  unsigned __int64 v32;
  float v34;
  float v35;
  __int64 (**v36)(_QWORD, __int64, __int64, __int64*);
  __int64 (**v37)(_QWORD, __int64, __int64, __int64*);
  __int64 (**v38)(_QWORD, __int64, __int64, __int64*);
  __int64 (**v39)(_QWORD, __int64, __int64, __int64*);
  __int64 (**v40)(_QWORD, __int64, __int64, __int64*);
  __int64 (**v41)(_QWORD, __int64, __int64, __int64*);
  unsigned __int64 v42;
  void(__attribute__((noreturn)) * v43)();
  _DWORD* v44;
  unsigned __int8 v45;
  unsigned int* v46;
  _DWORD* v47;
  void(__attribute__((noreturn)) * v48)();
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  if (result == 0) {
    return result;
  }
  if (*a4 != 0) {
    return 0;
  }
  v5 = (__int64 (***)(_QWORD, __int64, __int64, __int64*))result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  {
    v9 = (unsigned int*)SdkData_e88338[0];
    __asm__ volatile("" ::"r"(v9));
  }
  if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *v9 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v9) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD**)nn_os_GetTlsValue_plt(*v9);
  v11 = SdkRoutine_4c3860(16, 40, v10);
  v12 = a2;
  v13 = a3 + a2;
  v14 = v11;
  v51 = v12;
  *(_DWORD*)v11 = -1;
  *(_DWORD*)(v11 + 32) = 2139095039;
  *(_QWORD*)(v11 + 8) = 0;
  v15 = (void**)(v11 + 8);
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = 0x7F7FFFFF7F7FFFFFLL;
  do {
    if (v12 >= v13) {
      *a4 = v14;
      return 1;
    }
    v49 = 0;
    v50 = 0;
    if (mkvparser_ParseElementHeader_plt((__int64)v5, (__int64)&v51, v13,
                                         (__int64)&v50, (__int64)&v49) < 0) {
      break;
    }
    v18 = v50;
    if (v50 == 30322) {
      v23 = v49;
      if (v49 - 2147483649u < 0xFFFFFFFF80000000LL) {
        break;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        v43 = SdkData_e88338[0];
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v43) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v24 = (_QWORD**)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
      v25 = SdkRoutine_4c3860(16, v23, v24);
      if (v25 == 0) {
        break;
      }
      v26 = v25;
      memset_plt(v25, 0, v23);
      v19 = v51;
      v20 = v49;
      if ((unsigned int)(**v5)(v5, v51, v49, (__int64*)v26) != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v48 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v48) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v44 = (_DWORD*)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
        nn_movie_detail_FreeMemory(v26, v44);
        break;
      }
      *(_QWORD*)(v14 + 8) = v26;
      *(_QWORD*)(v14 + 16) = v20;
    }
    else {
      if (v50 == 30321) {
        v19 = v51;
        if (v51 < 0) {
          break;
        }
        v20 = v49;
        if (v49 - 9 < 0xFFFFFFFFFFFFFFF8LL) {
          break;
        }
        v21 = *v5;
        LOBYTE(v52) = 0;
        if (((*v21)(v5, v51, 1, &v52) & 0x80000000) != 0) {
          break;
        }
        v22 = (unsigned __int8)v52;
        if (v20 == 1) {
          goto LABEL_46;
        }
        v30 = *v5;
        LOBYTE(v52) = 0;
        if (((*v30)(v5, v19 + 1, 1, &v52) & 0x80000000) != 0) {
          break;
        }
        v31 = (unsigned __int8)v52 |
              ((unsigned __int64)(unsigned __int8)v22 << 8);
        if (v20 == 2) {
        LABEL_29:
          v32 = v22 << 8;
          LODWORD(v22) = v31;
          if ((v32 & 0x8000000000000000LL) != 0) {
            break;
          }
        }
        else {
          v36 = *v5;
          LOBYTE(v52) = 0;
          if (((*v36)(v5, v19 + 2, 1, &v52) & 0x80000000) != 0) {
            break;
          }
          v22 = (unsigned __int8)v52 |
                ((unsigned __int64)(unsigned __int16)v31 << 8);
          if (v20 == 3) {
            goto LABEL_45;
          }
          v37 = *v5;
          LOBYTE(v52) = 0;
          if (((*v37)(v5, v19 + 3, 1, &v52) & 0x80000000) != 0) {
            break;
          }
          v31 = (unsigned __int8)v52 | ((v22 & 0xFFFFFF) << 8);
          if (v20 == 4) {
            goto LABEL_29;
          }
          v38 = *v5;
          LOBYTE(v52) = 0;
          if (((*v38)(v5, v19 + 4, 1, &v52) & 0x80000000) != 0) {
            break;
          }
          v22 =
              (unsigned __int8)v52 | ((unsigned __int64)(unsigned int)v31 << 8);
          if (v20 == 5) {
            goto LABEL_45;
          }
          v39 = *v5;
          LOBYTE(v52) = 0;
          if (((*v39)(v5, v19 + 5, 1, &v52) & 0x80000000) != 0) {
            break;
          }
          v31 = (unsigned __int8)v52 | ((v22 & 0xFFFFFFFFFFLL) << 8);
          if (v20 == 6) {
            goto LABEL_29;
          }
          v40 = *v5;
          LOBYTE(v52) = 0;
          if (((*v40)(v5, v19 + 6, 1, &v52) & 0x80000000) != 0) {
            break;
          }
          v22 = (unsigned __int8)v52 | ((v31 & 0xFFFFFFFFFFFFLL) << 8);
          if (v20 == 7) {
          LABEL_45:
            if (((v31 << 8) & 0x8000000000000000LL) != 0) {
              break;
            }
          }
          else {
            v41 = *v5;
            LOBYTE(v52) = 0;
            if (((*v41)(v5, v19 + 7, 1, &v52) & 0x80000000) != 0) {
              break;
            }
            v42 = v22 << 8;
            LODWORD(v22) = (unsigned __int8)v52 | ((_DWORD)v22 << 8);
            if ((v42 & 0x8000000000000000LL) != 0) {
              break;
            }
          }
        }
      LABEL_46:
        *(_DWORD*)v14 = v22;
        goto LABEL_6;
      }
      v19 = v51;
      if (v51 < 0) {
        break;
      }
      v20 = v49;
      if (v49 != 8 && v49 != 4) {
        break;
      }
      v27 = *v5;
      v52 = 0;
      if (((*v27)(v5, v51, v49, &v52) & 0x80000000) != 0) {
        break;
      }
      v28 = ((unsigned __int8)v52 << 16) | (BYTE1(v52) << 8);
      if (v20 == 4) {
        v29 = COERCE_FLOAT(BYTE3(v52) | ((v28 | BYTE2(v52)) << 8));
      }
      else {
        *(_QWORD*)&v29 =
            ((unsigned __int64)BYTE6(v52) << 8) |
            ((unsigned __int64)BYTE5(v52) << 16) |
            ((((unsigned __int64)(v28 | (unsigned int)BYTE2(v52)) << 16) |
              ((unsigned __int64)BYTE3(v52) << 8) | BYTE4(v52))
             << 24) |
            HIBYTE(v52);
      }
      if (fabs(v29) == __builtin_inff() || fabs(v29) > 0x1.fffffe0000000p+127) {
        break;
      }
      if (v29 > 0x0.0p+0 && v29 < 0x1.0000000000000p-126) {
        break;
      }
      switch (v18) {
      case 30325LL:
        v35 = v29;
        *(float*)(v14 + 32) = v35;
        break;
      case 30324LL:
        v16 = v29;
        *(float*)(v14 + 28) = v16;
        break;
      case 30323LL:
        v34 = v29;
        *(float*)(v14 + 24) = v34;
        break;
      default:
        goto LABEL_63;
      }
    }
  LABEL_6:
    v12 = v19 + v20;
    v51 = v19 + v20;
  } while ((__int64)(v19 + v20) <= v13);
LABEL_63:
  if (*v15 != nullptr) {
    SdkRoutine_85c8b0(*v15);
  }
  v45 = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                             memory_order_acquire);
  {
    v46 = (unsigned int*)SdkData_e88338[0];
    __asm__ volatile("" ::"r"(v46));
  }
  if ((v45 & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *v46 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v46) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v47 = (_DWORD*)nn_os_GetTlsValue_plt(*v46);
  nn_movie_detail_FreeMemory(v14, v47);
  return 0;
}

__int64 libwebm_mkvparser_557e40(void* this_, void* a2, void* a3, __int64 a4,
                                 __int64* a5, void** a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  void* v11;
  __int64 (***v12)(_QWORD, _QWORD, _QWORD, _QWORD);
  double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  void* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  void* v29;
  __int64 v30;
  void* v31;
  __int64 v32;
  void* v33;
  __int64 v34;
  void* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  void* v40;
  _DWORD* v41;
  void* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  void(__attribute__((noreturn)) * v49)();
  _QWORD** v50;
  __int64 v51;
  __int64 v52;
  void* v53;
  _DWORD* v54;
  __int64 v55;
  __int64 v56;
  void* v57;
  __int64 v58;
  void(__attribute__((noreturn)) * v59)();
  void(__attribute__((noreturn)) * v60)();
  void* v62;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  void* v71;
  void* v72;
  _QWORD v73[2];
  _QWORD v74[3];

  if (*a5 != 0 || *(_QWORD*)a2 != 1) {
    return -1;
  }
  v73[1] = v8;
  v74[1] = v6;
  v74[2] = v7;
  {
    v11 = *((void**)a2 + 13);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = *(__int64 (****)(_QWORD, _QWORD, _QWORD, _QWORD))this_;
  v13 = 0x0.0p+0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  {
    v19 = (__int64)v11 + *((_QWORD*)a2 + 14);
    __asm__ volatile("" ::"r"(v19));
  }
  v62 = a2;
  v66 = 0;
  v67 = 0;
  v71 = nullptr;
  v72 = v11;
  v73[0] = 0;
  while ((__int64)v11 < v19) {
    v69 = 0;
    v70 = 0;
    result = mkvparser_ParseElementHeader_plt((__int64)v12, (__int64)&v72, v19,
                                              (__int64)&v70, (__int64)&v69);
    if (result < 0) {
      goto LABEL_189;
    }
    if (v70 > 21689) {
      if (v70 <= 30319) {
        if (v70 == 21690) {
          v33 = v72;
          result = -2;
          if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
            goto LABEL_189;
          }
          v34 = v69;
          if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
              v12 == nullptr) {
            goto LABEL_189;
          }
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
            goto LABEL_188;
          }
          {
            v15 = LOBYTE(v74[0]);
            __asm__ volatile("" ::"r"(v15));
          }
          if (v34 != 1) {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v33 + 1, 1, v74) & 0x80000000) != 0) {
              goto LABEL_188;
            }
            {
              v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
              __asm__ volatile("" ::"r"(v15));
            }
            if (v34 != 2) {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v33 + 2, 1, v74) & 0x80000000) != 0) {
                goto LABEL_188;
              }
              {
                v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                __asm__ volatile("" ::"r"(v15));
              }
              if (v34 != 3) {
                LOBYTE(v74[0]) = 0;
                if (((**v12)(v12, (char*)v33 + 3, 1, v74) & 0x80000000) != 0) {
                  goto LABEL_188;
                }
                {
                  v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                  __asm__ volatile("" ::"r"(v15));
                }
                if (v34 != 4) {
                  LOBYTE(v74[0]) = 0;
                  if (((**v12)(v12, (char*)v33 + 4, 1, v74) & 0x80000000) !=
                      0) {
                    goto LABEL_188;
                  }
                  {
                    v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                    __asm__ volatile("" ::"r"(v15));
                  }
                  if (v34 != 5) {
                    LOBYTE(v74[0]) = 0;
                    if (((**v12)(v12, (char*)v33 + 5, 1, v74) & 0x80000000) !=
                        0) {
                      goto LABEL_188;
                    }
                    {
                      v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                      __asm__ volatile("" ::"r"(v15));
                    }
                    if (v34 != 6) {
                      LOBYTE(v74[0]) = 0;
                      if (((**v12)(v12, (char*)v33 + 6, 1, v74) & 0x80000000) !=
                          0) {
                        goto LABEL_188;
                      }
                      {
                        v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                        __asm__ volatile("" ::"r"(v15));
                      }
                      if (v34 != 7) {
                        LOBYTE(v74[0]) = 0;
                        if (((**v12)(v12, (char*)v33 + 7, 1, v74) &
                             0x80000000) != 0) {
                          goto LABEL_188;
                        }
                        {
                          v15 = LOBYTE(v74[0]) | (unsigned __int64)(v15 << 8);
                          __asm__ volatile("" ::"r"(v15));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (v15 < 1) {
            goto LABEL_188;
          }
        }
        else if (v70 == 21936) {
          v74[0] = 0;
          if ((mkvparser_Colour_Parse_plt(v12, v72, v69, v74) & 1) == 0) {
            goto LABEL_188;
          }
          a2 = v71;
          {
            v71 = (void*)v74[0];
            __asm__ volatile("" ::"r"(v71));
          }
          if (a2 != nullptr) {
            libwebm_mkvparser_55dc80((__int64)&v71, (__int64)a2);
          }
        }
      }
      else {
        switch (v70) {
        case 30320LL:
          v74[0] = 0;
          if ((mkvparser_Projection_Parse_plt(v12, v72, v69, v74) & 1) == 0) {
            goto LABEL_188;
          }
          {
            v39 = v74[0];
            __asm__ volatile("" ::"r"(v39));
          }
          if (v14 != 0) {
            {
              v40 = *(void**)(v14 + 8);
              __asm__ volatile("" ::"r"(v40));
            }
            if (v40 != nullptr) {
              SdkRoutine_85c8b0_alt1(v40, a2);
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire) &
                 1) == 0 &&
                __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
              v49 = SdkData_e88338[0];
              *(_DWORD*)SdkData_e88338[0] = 0;
              *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v49) = 1;
              __cxa_guard_release_plt(SdkData_e88330);
            }
            v41 = (_DWORD*)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
            nn_movie_detail_FreeMemory(v14, v41);
          }
          v14 = v39;
          break;
        case 2327523LL:
          result = -2;
          if (v12 == nullptr) {
            goto LABEL_189;
          }
          a2 = v72;
          if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
            goto LABEL_189;
          }
          v44 = v69;
          if (v69 != 8 && v69 != 4) {
            goto LABEL_189;
          }
          v74[0] = 0;
          LODWORD(result) = (**v12)(v12, v72, v69, v74);
          if ((result & 0x80000000) != 0) {
            result = (int)result;
            if (v14 == 0) {
              goto LABEL_194;
            }
            goto LABEL_190;
          }
          {
            v45 = (LOBYTE(v74[0]) << 16) | (BYTE1(v74[0]) << 8);
            __asm__ volatile("" ::"r"(v45));
          }
          if (v44 == 4) {
            v13 = COERCE_FLOAT(BYTE3(v74[0]) | ((v45 | BYTE2(v74[0])) << 8));
            __asm__ volatile("" ::"w"(v13));
          }
          else {
            *(_QWORD*)&v13 =
                ((unsigned __int64)BYTE6(v74[0]) << 8) |
                ((unsigned __int64)BYTE5(v74[0]) << 16) |
                ((((unsigned __int64)(v45 | (unsigned int)BYTE2(v74[0]))
                   << 16) |
                  ((unsigned __int64)BYTE3(v74[0]) << 8) | BYTE4(v74[0]))
                 << 24) |
                HIBYTE(v74[0]);
          }
          if (fabs(v13) >= __builtin_inff() || v13 <= 0x0.0p+0) {
            goto LABEL_188;
          }
          break;
        case 3061028LL:
          result = mkvparser_UnserializeString_plt(v12, v72, v69, v73);
          if (result < 0) {
            goto LABEL_189;
          }
          break;
        default:
          break;
        }
      }
    }
    else if (v70 <= 21431) {
      if (v70 == 176) {
        v31 = v72;
        result = -2;
        if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
          goto LABEL_189;
        }
        v32 = v69;
        if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
            v12 == nullptr) {
          goto LABEL_189;
        }
        LOBYTE(v74[0]) = 0;
        if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
          goto LABEL_188;
        }
        {
          v18 = LOBYTE(v74[0]);
          __asm__ volatile("" ::"r"(v18));
        }
        if (v32 != 1) {
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v31 + 1, 1, v74) & 0x80000000) != 0) {
            goto LABEL_188;
          }
          {
            v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
            __asm__ volatile("" ::"r"(v18));
          }
          if (v32 != 2) {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v31 + 2, 1, v74) & 0x80000000) != 0) {
              goto LABEL_188;
            }
            {
              v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
              __asm__ volatile("" ::"r"(v18));
            }
            if (v32 != 3) {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v31 + 3, 1, v74) & 0x80000000) != 0) {
                goto LABEL_188;
              }
              {
                v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
                __asm__ volatile("" ::"r"(v18));
              }
              if (v32 != 4) {
                LOBYTE(v74[0]) = 0;
                if (((**v12)(v12, (char*)v31 + 4, 1, v74) & 0x80000000) != 0) {
                  goto LABEL_188;
                }
                {
                  v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
                  __asm__ volatile("" ::"r"(v18));
                }
                if (v32 != 5) {
                  LOBYTE(v74[0]) = 0;
                  if (((**v12)(v12, (char*)v31 + 5, 1, v74) & 0x80000000) !=
                      0) {
                    goto LABEL_188;
                  }
                  {
                    v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
                    __asm__ volatile("" ::"r"(v18));
                  }
                  if (v32 != 6) {
                    LOBYTE(v74[0]) = 0;
                    if (((**v12)(v12, (char*)v31 + 6, 1, v74) & 0x80000000) !=
                        0) {
                      goto LABEL_188;
                    }
                    {
                      v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
                      __asm__ volatile("" ::"r"(v18));
                    }
                    if (v32 != 7) {
                      LOBYTE(v74[0]) = 0;
                      if (((**v12)(v12, (char*)v31 + 7, 1, v74) & 0x80000000) !=
                          0) {
                        goto LABEL_188;
                      }
                      {
                        v18 = LOBYTE(v74[0]) | (unsigned __int64)(v18 << 8);
                        __asm__ volatile("" ::"r"(v18));
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (v18 < 1) {
          goto LABEL_188;
        }
      }
      else if (v70 == 186) {
        v29 = v72;
        result = -2;
        if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
          goto LABEL_189;
        }
        v30 = v69;
        if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
            v12 == nullptr) {
          goto LABEL_189;
        }
        LOBYTE(v74[0]) = 0;
        if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
          goto LABEL_188;
        }
        {
          v17 = LOBYTE(v74[0]);
          __asm__ volatile("" ::"r"(v17));
        }
        if (v30 != 1) {
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v29 + 1, 1, v74) & 0x80000000) != 0) {
            goto LABEL_188;
          }
          {
            v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
            __asm__ volatile("" ::"r"(v17));
          }
          if (v30 != 2) {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v29 + 2, 1, v74) & 0x80000000) != 0) {
              goto LABEL_188;
            }
            {
              v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
              __asm__ volatile("" ::"r"(v17));
            }
            if (v30 != 3) {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v29 + 3, 1, v74) & 0x80000000) != 0) {
                goto LABEL_188;
              }
              {
                v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
                __asm__ volatile("" ::"r"(v17));
              }
              if (v30 != 4) {
                LOBYTE(v74[0]) = 0;
                if (((**v12)(v12, (char*)v29 + 4, 1, v74) & 0x80000000) != 0) {
                  goto LABEL_188;
                }
                {
                  v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
                  __asm__ volatile("" ::"r"(v17));
                }
                if (v30 != 5) {
                  LOBYTE(v74[0]) = 0;
                  if (((**v12)(v12, (char*)v29 + 5, 1, v74) & 0x80000000) !=
                      0) {
                    goto LABEL_188;
                  }
                  {
                    v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
                    __asm__ volatile("" ::"r"(v17));
                  }
                  if (v30 != 6) {
                    LOBYTE(v74[0]) = 0;
                    if (((**v12)(v12, (char*)v29 + 6, 1, v74) & 0x80000000) !=
                        0) {
                      goto LABEL_188;
                    }
                    {
                      v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
                      __asm__ volatile("" ::"r"(v17));
                    }
                    if (v30 != 7) {
                      LOBYTE(v74[0]) = 0;
                      if (((**v12)(v12, (char*)v29 + 7, 1, v74) & 0x80000000) !=
                          0) {
                        goto LABEL_188;
                      }
                      {
                        v17 = LOBYTE(v74[0]) | (unsigned __int64)(v17 << 8);
                        __asm__ volatile("" ::"r"(v17));
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (v17 < 1) {
          goto LABEL_188;
        }
      }
    }
    else {
      if (v70 == 21432) {
        v35 = v72;
        result = -2;
        if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
          goto LABEL_189;
        }
        v36 = v69;
        if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
            v12 == nullptr) {
          goto LABEL_189;
        }
        LOBYTE(v74[0]) = 0;
        v68 = v14;
        v23 = v18;
        v24 = v17;
        v25 = v16;
        v37 = v15;
        if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
          goto LABEL_187;
        }
        {
          v38 = LOBYTE(v74[0]);
          __asm__ volatile("" ::"r"(v38));
        }
        if (v36 == 1) {
          goto LABEL_155;
        }
        LOBYTE(v74[0]) = 0;
        if (((**v12)(v12, (char*)v35 + 1, 1, v74) & 0x80000000) != 0) {
          goto LABEL_187;
        }
        {
          v46 = LOBYTE(v74[0]) | ((unsigned __int64)(unsigned __int8)v38 << 8);
          __asm__ volatile("" ::"r"(v46));
        }
        if (v36 == 2) {
        LABEL_146:
          v47 = v38 << 8;
          v38 = v46;
          if ((v47 & 0x8000000000000000LL) != 0) {
            goto LABEL_187;
          }
        }
        else {
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v35 + 2, 1, v74) & 0x80000000) != 0) {
            goto LABEL_187;
          }
          {
            v38 =
                LOBYTE(v74[0]) | ((unsigned __int64)(unsigned __int16)v46 << 8);
            __asm__ volatile("" ::"r"(v38));
          }
          if (v36 != 3) {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v35 + 3, 1, v74) & 0x80000000) != 0) {
              goto LABEL_187;
            }
            {
              v46 = LOBYTE(v74[0]) | ((v38 & 0xFFFFFF) << 8);
              __asm__ volatile("" ::"r"(v46));
            }
            if (v36 == 4) {
              goto LABEL_146;
            }
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v35 + 4, 1, v74) & 0x80000000) != 0) {
              goto LABEL_187;
            }
            {
              v38 = LOBYTE(v74[0]) | ((unsigned __int64)(unsigned int)v46 << 8);
              __asm__ volatile("" ::"r"(v38));
            }
            if (v36 != 5) {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v35 + 5, 1, v74) & 0x80000000) != 0) {
                goto LABEL_187;
              }
              {
                v46 = LOBYTE(v74[0]) | ((v38 & 0xFFFFFFFFFFLL) << 8);
                __asm__ volatile("" ::"r"(v46));
              }
              if (v36 == 6) {
                goto LABEL_146;
              }
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v35 + 6, 1, v74) & 0x80000000) != 0) {
                goto LABEL_187;
              }
              {
                v38 = LOBYTE(v74[0]) | ((v46 & 0xFFFFFFFFFFFFLL) << 8);
                __asm__ volatile("" ::"r"(v38));
              }
              if (v36 != 7) {
                LOBYTE(v74[0]) = 0;
                if (((**v12)(v12, (char*)v35 + 7, 1, v74) & 0x80000000) != 0 ||
                    (v48 = v38 << 8, v38 = LOBYTE(v74[0]) | (v38 << 8),
                     (v48 & 0x8000000000000000LL) != 0)) {
                LABEL_187:
                  v14 = v68;
                  goto LABEL_188;
                }
                goto LABEL_155;
              }
            }
          }
          if (((v46 << 8) & 0x8000000000000000LL) != 0) {
            goto LABEL_187;
          }
        }
      LABEL_155:
        v15 = v37;
        v67 = v38;
        goto LABEL_10;
      }
      if (v70 != 21680) {
        if (v70 != 21682) {
          goto LABEL_11;
        }
        v21 = v72;
        result = -2;
        if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
          goto LABEL_189;
        }
        v22 = v69;
        if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
            v12 == nullptr) {
          goto LABEL_189;
        }
        LOBYTE(v74[0]) = 0;
        v68 = v14;
        v23 = v18;
        v24 = v17;
        v25 = v16;
        v26 = v15;
        if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
          goto LABEL_187;
        }
        {
          v27 = LOBYTE(v74[0]);
          __asm__ volatile("" ::"r"(v27));
        }
        if (v22 == 1) {
          v20 = 0;
        }
        else {
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v21 + 1, 1, v74) & 0x80000000) != 0) {
            goto LABEL_187;
          }
          {
            v28 =
                LOBYTE(v74[0]) | ((unsigned __int64)(unsigned __int8)v27 << 8);
            __asm__ volatile("" ::"r"(v28));
          }
          if (v22 == 2) {
            goto LABEL_26;
          }
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v21 + 2, 1, v74) & 0x80000000) != 0) {
            goto LABEL_187;
          }
          {
            v27 =
                LOBYTE(v74[0]) | ((unsigned __int64)(unsigned __int16)v28 << 8);
            __asm__ volatile("" ::"r"(v27));
          }
          if (v22 == 3) {
          LABEL_158:
            v20 = v28 << 8;
          }
          else {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v21 + 3, 1, v74) & 0x80000000) != 0) {
              goto LABEL_187;
            }
            {
              v28 = LOBYTE(v74[0]) | ((v27 & 0xFFFFFF) << 8);
              __asm__ volatile("" ::"r"(v28));
            }
            if (v22 == 4) {
              goto LABEL_26;
            }
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v21 + 4, 1, v74) & 0x80000000) != 0) {
              goto LABEL_187;
            }
            {
              v27 = LOBYTE(v74[0]) | ((unsigned __int64)(unsigned int)v28 << 8);
              __asm__ volatile("" ::"r"(v27));
            }
            if (v22 == 5) {
              goto LABEL_158;
            }
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v21 + 5, 1, v74) & 0x80000000) != 0) {
              goto LABEL_187;
            }
            {
              v28 = LOBYTE(v74[0]) | ((v27 & 0xFFFFFFFFFFLL) << 8);
              __asm__ volatile("" ::"r"(v28));
            }
            if (v22 == 6) {
            LABEL_26:
              v20 = v27 << 8;
              v27 = v28;
            }
            else {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v21 + 6, 1, v74) & 0x80000000) != 0) {
                goto LABEL_187;
              }
              {
                v27 = LOBYTE(v74[0]) | ((v28 & 0xFFFFFFFFFFFFLL) << 8);
                __asm__ volatile("" ::"r"(v27));
              }
              if (v22 == 7) {
                goto LABEL_158;
              }
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v21 + 7, 1, v74) & 0x80000000) != 0) {
                goto LABEL_187;
              }
              v20 = v27 << 8;
              {
                v27 = LOBYTE(v74[0]) | (v27 << 8);
                __asm__ volatile("" ::"r"(v27));
              }
            }
          }
        }
        if ((v20 & 0x8000000000000000LL) != 0) {
          goto LABEL_187;
        }
        v15 = v26;
        v66 = v27;
      LABEL_10:
        v16 = v25;
        v17 = v24;
        v18 = v23;
        v14 = v68;
        goto LABEL_11;
      }
      v42 = v72;
      result = -2;
      if (((unsigned __int64)v72 & 0x8000000000000000LL) != 0) {
        goto LABEL_189;
      }
      v43 = v69;
      if ((unsigned __int64)(v69 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
          v12 == nullptr) {
        goto LABEL_189;
      }
      LOBYTE(v74[0]) = 0;
      if (((**v12)(v12, v72, 1, v74) & 0x80000000) != 0) {
        goto LABEL_188;
      }
      {
        v16 = LOBYTE(v74[0]);
        __asm__ volatile("" ::"r"(v16));
      }
      if (v43 != 1) {
        LOBYTE(v74[0]) = 0;
        if (((**v12)(v12, (char*)v42 + 1, 1, v74) & 0x80000000) != 0) {
          goto LABEL_188;
        }
        {
          v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
          __asm__ volatile("" ::"r"(v16));
        }
        if (v43 != 2) {
          LOBYTE(v74[0]) = 0;
          if (((**v12)(v12, (char*)v42 + 2, 1, v74) & 0x80000000) != 0) {
            goto LABEL_188;
          }
          {
            v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
            __asm__ volatile("" ::"r"(v16));
          }
          if (v43 != 3) {
            LOBYTE(v74[0]) = 0;
            if (((**v12)(v12, (char*)v42 + 3, 1, v74) & 0x80000000) != 0) {
              goto LABEL_188;
            }
            {
              v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
              __asm__ volatile("" ::"r"(v16));
            }
            if (v43 != 4) {
              LOBYTE(v74[0]) = 0;
              if (((**v12)(v12, (char*)v42 + 4, 1, v74) & 0x80000000) != 0) {
                goto LABEL_188;
              }
              {
                v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
                __asm__ volatile("" ::"r"(v16));
              }
              if (v43 != 5) {
                LOBYTE(v74[0]) = 0;
                if (((**v12)(v12, (char*)v42 + 5, 1, v74) & 0x80000000) != 0) {
                  goto LABEL_188;
                }
                {
                  v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
                  __asm__ volatile("" ::"r"(v16));
                }
                if (v43 != 6) {
                  LOBYTE(v74[0]) = 0;
                  if (((**v12)(v12, (char*)v42 + 6, 1, v74) & 0x80000000) !=
                      0) {
                    goto LABEL_188;
                  }
                  {
                    v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
                    __asm__ volatile("" ::"r"(v16));
                  }
                  if (v43 != 7) {
                    LOBYTE(v74[0]) = 0;
                    if (((**v12)(v12, (char*)v42 + 7, 1, v74) & 0x80000000) !=
                        0) {
                      goto LABEL_188;
                    }
                    {
                      v16 = LOBYTE(v74[0]) | (unsigned __int64)(v16 << 8);
                      __asm__ volatile("" ::"r"(v16));
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (v16 < 1) {
        goto LABEL_188;
      }
    }
  LABEL_11:
    v11 = (void*)((char*)v72 + v69);
    v72 = v11;
    if ((__int64)v11 > v19) {
      goto LABEL_188;
    }
  }
  if (v11 != (void*)v19) {
  LABEL_188:
    result = -2;
  LABEL_189:
    if (v14 == 0) {
      goto LABEL_194;
    }
    goto LABEL_190;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    v60 = SdkData_e88338[0];
    *(_DWORD*)SdkData_e88338[0] = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v60) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v50 = (_QWORD**)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
  v51 = SdkRoutine_4c3860(16, 272, v50);
  mkvparser_VideoTrack_VideoTrack_plt(v51, this_, a3, a4);
  if ((unsigned int)mkvparser_Track_Info_Copy_plt((__int64)v62, v51 + 32) ==
      0) {
    result = 0;
    *(_QWORD*)(v51 + 192) = v18;
    *(_QWORD*)(v51 + 200) = v17;
    *(_QWORD*)(v51 + 208) = v16;
    *(_QWORD*)(v51 + 216) = v15;
    *(double*)(v51 + 248) = v13;
    *(_QWORD*)(v51 + 224) = v66;
    *(_QWORD*)(v51 + 232) = v67;
    v57 = v71;
    {
      v58 = v73[0];
      __asm__ volatile("" ::"r"(v58));
    }
    v71 = nullptr;
    *(_QWORD*)(v51 + 256) = v57;
    *(_QWORD*)(v51 + 264) = v14;
    *(_QWORD*)(v51 + 240) = v58;
    *a5 = v51;
    goto LABEL_194;
  }
  (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  result = -1;
  if (v14 != 0) {
  LABEL_190:
    v52 = result;
    {
      v53 = *(void**)(v14 + 8);
      __asm__ volatile("" ::"r"(v53));
    }
    if (v53 != nullptr) {
      SdkRoutine_85c8b0_alt1(v53, a2);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v59 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v59) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v54 = (_DWORD*)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
    nn_movie_detail_FreeMemory(v14, v54);
    result = v52;
  }
LABEL_194:
  v55 = (__int64)v71;
  v71 = nullptr;
  if (v55 != 0) {
    v56 = result;
    libwebm_mkvparser_55dc80((__int64)&v71, v55);
    return v56;
  }
  return result;
}

__int64 libwebm_mkvparser_559200(void* this_, void* a2, void* a3, __int64 a4,
                                 __int64* a5, void** a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v11;
  __int64 (***v12)(_QWORD, __int64, __int64, _QWORD*);
  __int64 v13;
  __int64 v18;
  __int64 v19;
  double v20;
  __int64 v21;
  __int64 v22;
  int v23;
  unsigned __int8 explicit;
  unsigned int* v25;
  _QWORD** v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  _QWORD v31[2];
  _QWORD v32[3];

  if (*a5 != 0 || *(_QWORD*)a2 != 2) {
    return -1;
  }
  v31[1] = v8;
  v32[1] = v6;
  v32[2] = v7;
  {
    v11 = *((_QWORD*)a2 + 13);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = *(__int64 (****)(_QWORD, __int64, __int64, _QWORD*))this_;
  v13 = 1;
  v18 = 0;
  {
    v19 = *((_QWORD*)a2 + 14) + v11;
    __asm__ volatile("" ::"r"(v19));
  }
  v31[0] = v11;
  v20 = 0x1.f400000000000p+12;
  while (v11 < v19) {
    v29 = 0;
    v30 = 0;
    result = mkvparser_ParseElementHeader_plt((__int64)v12, (__int64)v31, v19,
                                              (__int64)&v30, (__int64)&v29);
    if (result < 0) {
      return result;
    }
    switch (v30) {
    case 159LL: {
      v22 = v31[0];
      __asm__ volatile("" ::"r"(v22));
    }
      result = -2;
      if ((v31[0] & 0x8000000000000000LL) != 0) {
        return result;
      }
      v21 = v29;
      if ((unsigned __int64)(v29 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
          v12 == nullptr) {
        return result;
      }
      LOBYTE(v32[0]) = 0;
      if (((**v12)(v12, v31[0], 1, v32) & 0x80000000) != 0) {
        return -2;
      }
      {
        v13 = LOBYTE(v32[0]);
        __asm__ volatile("" ::"r"(v13));
      }
      if (v21 != 1) {
        LOBYTE(v32[0]) = 0;
        if (((**v12)(v12, v22 + 1, 1, v32) & 0x80000000) != 0) {
          return -2;
        }
        {
          v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
          __asm__ volatile("" ::"r"(v13));
        }
        if (v21 != 2) {
          LOBYTE(v32[0]) = 0;
          if (((**v12)(v12, v22 + 2, 1, v32) & 0x80000000) != 0) {
            return -2;
          }
          {
            v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
            __asm__ volatile("" ::"r"(v13));
          }
          if (v21 != 3) {
            LOBYTE(v32[0]) = 0;
            if (((**v12)(v12, v22 + 3, 1, v32) & 0x80000000) != 0) {
              return -2;
            }
            {
              v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
              __asm__ volatile("" ::"r"(v13));
            }
            if (v21 != 4) {
              LOBYTE(v32[0]) = 0;
              if (((**v12)(v12, v22 + 4, 1, v32) & 0x80000000) != 0) {
                return -2;
              }
              {
                v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
                __asm__ volatile("" ::"r"(v13));
              }
              if (v21 != 5) {
                LOBYTE(v32[0]) = 0;
                if (((**v12)(v12, v22 + 5, 1, v32) & 0x80000000) != 0) {
                  return -2;
                }
                {
                  v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
                  __asm__ volatile("" ::"r"(v13));
                }
                if (v21 != 6) {
                  LOBYTE(v32[0]) = 0;
                  if (((**v12)(v12, v22 + 6, 1, v32) & 0x80000000) != 0) {
                    return -2;
                  }
                  {
                    v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
                    __asm__ volatile("" ::"r"(v13));
                  }
                  if (v21 != 7) {
                    LOBYTE(v32[0]) = 0;
                    if (((**v12)(v12, v22 + 7, 1, v32) & 0x80000000) != 0) {
                      return -2;
                    }
                    {
                      v13 = LOBYTE(v32[0]) | (unsigned __int64)(v13 << 8);
                      __asm__ volatile("" ::"r"(v13));
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (v13 < 1) {
        return -2;
      }
      break;
    case 181LL:
      result = -2;
      if (v12 == nullptr) {
        return result;
      }
      {
        v22 = v31[0];
        __asm__ volatile("" ::"r"(v22));
      }
      if ((v31[0] & 0x8000000000000000LL) != 0) {
        return result;
      }
      v21 = v29;
      if (v29 != 8 && v29 != 4) {
        return result;
      }
      v32[0] = 0;
      LODWORD(result) = (**v12)(v12, v31[0], v29, v32);
      if ((result & 0x80000000) != 0) {
        return (int)result;
      }
      {
        v23 = (LOBYTE(v32[0]) << 16) | (BYTE1(v32[0]) << 8);
        __asm__ volatile("" ::"r"(v23));
      }
      if (v21 == 4) {
        v20 = COERCE_FLOAT(BYTE3(v32[0]) | ((v23 | BYTE2(v32[0])) << 8));
        __asm__ volatile("" ::"w"(v20));
      }
      else {
        *(_QWORD*)&v20 =
            ((unsigned __int64)BYTE6(v32[0]) << 8) |
            ((unsigned __int64)BYTE5(v32[0]) << 16) |
            ((((unsigned __int64)(v23 | (unsigned int)BYTE2(v32[0])) << 16) |
              ((unsigned __int64)BYTE3(v32[0]) << 8) | BYTE4(v32[0]))
             << 24) |
            HIBYTE(v32[0]);
      }
      if (fabs(v20) >= __builtin_inff() || v20 <= 0x0.0p+0) {
        return -2;
      }
      break;
    case 25188LL: {
      v22 = v31[0];
      __asm__ volatile("" ::"r"(v22));
    }
      result = -2;
      if ((v31[0] & 0x8000000000000000LL) != 0) {
        return result;
      }
      v21 = v29;
      if ((unsigned __int64)(v29 - 9) < 0xFFFFFFFFFFFFFFF8LL ||
          v12 == nullptr) {
        return result;
      }
      LOBYTE(v32[0]) = 0;
      if (((**v12)(v12, v31[0], 1, v32) & 0x80000000) != 0) {
        return -2;
      }
      {
        v18 = LOBYTE(v32[0]);
        __asm__ volatile("" ::"r"(v18));
      }
      if (v21 != 1) {
        LOBYTE(v32[0]) = 0;
        if (((**v12)(v12, v22 + 1, 1, v32) & 0x80000000) != 0) {
          return -2;
        }
        {
          v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
          __asm__ volatile("" ::"r"(v18));
        }
        if (v21 != 2) {
          LOBYTE(v32[0]) = 0;
          if (((**v12)(v12, v22 + 2, 1, v32) & 0x80000000) != 0) {
            return -2;
          }
          {
            v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
            __asm__ volatile("" ::"r"(v18));
          }
          if (v21 != 3) {
            LOBYTE(v32[0]) = 0;
            if (((**v12)(v12, v22 + 3, 1, v32) & 0x80000000) != 0) {
              return -2;
            }
            {
              v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
              __asm__ volatile("" ::"r"(v18));
            }
            if (v21 != 4) {
              LOBYTE(v32[0]) = 0;
              if (((**v12)(v12, v22 + 4, 1, v32) & 0x80000000) != 0) {
                return -2;
              }
              {
                v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
                __asm__ volatile("" ::"r"(v18));
              }
              if (v21 != 5) {
                LOBYTE(v32[0]) = 0;
                if (((**v12)(v12, v22 + 5, 1, v32) & 0x80000000) != 0) {
                  return -2;
                }
                {
                  v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
                  __asm__ volatile("" ::"r"(v18));
                }
                if (v21 != 6) {
                  LOBYTE(v32[0]) = 0;
                  if (((**v12)(v12, v22 + 6, 1, v32) & 0x80000000) != 0) {
                    return -2;
                  }
                  {
                    v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
                    __asm__ volatile("" ::"r"(v18));
                  }
                  if (v21 != 7) {
                    LOBYTE(v32[0]) = 0;
                    if (((**v12)(v12, v22 + 7, 1, v32) & 0x80000000) != 0) {
                      return -2;
                    }
                    {
                      v18 = LOBYTE(v32[0]) | (unsigned __int64)(v18 << 8);
                      __asm__ volatile("" ::"r"(v18));
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (v18 <= 0) {
        return -2;
      }
      break;
    default:
      v21 = v29;
      {
        v22 = v31[0];
        __asm__ volatile("" ::"r"(v22));
      }
      break;
    }
    v11 = v22 + v21;
    v31[0] = v22 + v21;
    if (v22 + v21 > v19) {
      return -2;
    }
  }
  if (v11 != v19) {
    return -2;
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  {
    v25 = (unsigned int*)SdkData_e88338[0];
    __asm__ volatile("" ::"r"(v25));
  }
  if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *v25 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v25) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v26 = (_QWORD**)nn_os_GetTlsValue_plt(*v25);
  v27 = SdkRoutine_4c3860(16, 216, v26);
  mkvparser_AudioTrack_AudioTrack_plt(v27, this_, a3, a4);
  if ((unsigned int)mkvparser_Track_Info_Copy_plt((__int64)a2, v27 + 32) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    return -1;
  }
  else {
    *(double*)(v27 + 192) = v20;
    *(_QWORD*)(v27 + 200) = v13;
    *(_QWORD*)(v27 + 208) = v18;
    *a5 = v27;
    return 0;
  }
}

#pragma GCC visibility pop
