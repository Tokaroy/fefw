#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6a0c00(unsigned int);
__int64 nn_69bce0(__int64 result, __int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN* SdkData_e89dd0;
extern _UNKNOWN* SdkData_e89dd8;
extern _UNKNOWN* SdkData_e89de0;
extern _UNKNOWN* SdkData_e89de8;
extern _UNKNOWN* SdkData_e89df0;
extern _UNKNOWN* SdkData_e89df8;
extern _UNKNOWN* SdkData_e89e00;
extern _UNKNOWN* SdkData_e89e08;
extern _UNKNOWN* SdkData_e89e10;
extern _UNKNOWN* SdkData_e89e18;
extern _UNKNOWN** SdkData_e89eb0;
extern __int64* SdkData_e89eb8;
long double nn_65fa80(__int64, __int64, __int64);
__int64 nn_69b6e0(__int64 a1, int a2, __int64 a3);

__int64 nn_69b6e0(__int64 a1, int a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 (*v8)(__int64, _QWORD, __int64);
  _QWORD* v9;
  __int64* v12;
  void* v13;
  _UNKNOWN** v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  char* v26;
  _QWORD* v27;
  long double v28;
  unsigned __int8 v29;
  __int128 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  void(__attribute__((noreturn)) * v35)(_QWORD*, __int64, __int64);
  __int64 v36;
  void(__attribute__((noreturn)) * v37)(_QWORD*, __int64, __int64);
  __int64 v38;
  unsigned int v39;
  struct {
    char gap0_[8];
    _QWORD v40[2];
    __int64 v41;
    char gap32_[8];
    __int64 v42;
    char gap48_[1792];
    _QWORD v44[4];
    _QWORD* v45;
  } f_;
  _QWORD v43[224];

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  {
    v3 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  LODWORD(v5) = a2;
  if (v3 != 0) {
    v7 = *(_QWORD*)(v3 + 7272);
    __asm__ volatile("" ::"r"(v7));
  }
  else {
    v7 = 0;
  }
  v8 = *(__int64 (**)(__int64, _QWORD, __int64))(*SdkData_e89eb8 + 3944),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  nn_69bce0(v7, a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v39 = v8(a1, (unsigned int)v5, a3),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_BYTE)v39 != 0) {
    {
      v9 = *(_QWORD**)(a1 + 120);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 != nullptr && *v9 != 0 & (_DWORD)v5 != 0) {
      v12 = (__int64*)(a3 + 8);
      v5 = (unsigned int)v5;
      v13 = SdkData_e89c10;
      v14 = SdkData_e89eb0;
      do {
        {
          v16 = *v12;
          __asm__ volatile("" ::"r"(v16));
        }
        v12 += 2;
        v15 = v16;
        if (v16 != 0) {
          {
            v18 = *(_DWORD*)(v15 + 4);
            __asm__ volatile("" ::"r"(v18));
          }
          {
            v17 = *(_DWORD*)(v15 + 8);
            __asm__ volatile("" ::"r"(v17));
          }
          if (v18 == 201 & v17 < 2) {
            v26 = (char*)SdkData_e89dd0;
          LABEL_53:
            v27 = f_.v44;
            f_.v44[0] = v26 + 16;
            f_.v44[1] = v15;
            f_.v45 = f_.v44;
          LABEL_54:
            v28 = nn_65fa80((__int64)v43, (__int64)v27, 0),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v29 = (*(__int64 (**)(_QWORD*, long double))(*f_.v45 + 168LL))(
                f_.v45, v28),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v30 = *(_OWORD*)&v43[215];
            v31 = v29;
            {
              v32 = **(_QWORD**)(a1 + 120) + 88LL * v29;
              __asm__ volatile("" ::"r"(v32));
            }
            *(_OWORD*)(v32 + 16) = *(_OWORD*)&v43[213];
            *(_OWORD*)(v32 + 32) = v30;
            *(_QWORD*)v32 = a1;
            *(_DWORD*)(v32 + 8) = SdkRoutine_6a0c00(v29),
                             v33 = COERCE_AS(__typeof__(v33),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                             v34 = COERCE_AS(__typeof__(v34),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x2", "=r"));
            nn_os_LockMutex_plt((__int64)v13),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            v35 =
                *(void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
                    (char*)((__int64*)0x48LL) + (_QWORD)v14);
            if (v35 != nullptr) {
              if (v7 != 0) {
                {
                  v36 = *(_QWORD*)(v7 + 16);
                  __asm__ volatile("" ::"r"(v36));
                }
                f_.v41 = v7;
                f_.v40[0] = 0x2800040001LL;
                f_.v40[1] = v36;
                f_.v42 = **(_QWORD**)(a1 + 120) + 88LL * v31;
                v35(f_.v40, v33, v34),
                    v33 = COERCE_AS(
                        __typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
            }
            else if (v7 != 0) {
              v37 = *(
                  void(__attribute__((noreturn))**)(_QWORD*, __int64, __int64))(
                  (char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v14);
              if (v37 != nullptr) {
                {
                  v38 = *(_QWORD*)(v7 + 16);
                  __asm__ volatile("" ::"r"(v38));
                }
                f_.v41 = v7;
                f_.v40[0] = 0x2800080003LL;
                f_.v40[1] = v38;
                f_.v42 = **(_QWORD**)(a1 + 120) + 88LL * v31;
                v37(f_.v40, v33, v34),
                    v33 = COERCE_AS(
                        __typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
            }
            nn_os_UnlockMutex_plt((__int64)v13),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            goto LABEL_13;
          }
          if (v18 == 201 & v17 == 2) {
            v26 = (char*)SdkData_e89de0;
            goto LABEL_53;
          }
          if (v18 == 201 & v17 - 3 < 0xA) {
            v26 = (char*)SdkData_e89de8;
            goto LABEL_53;
          }
          if (v18 == 201 & v17 - 13 < 2) {
            v26 = (char*)SdkData_e89df0;
            goto LABEL_53;
          }
          if (v18 == 201 & v17 == 15) {
            v26 = (char*)SdkData_e89df8;
            goto LABEL_53;
          }
          if (v18 == 201 & v17 == 16) {
            v26 = (char*)SdkData_e89e00;
            goto LABEL_53;
          }
          if (v18 == 201 & v17 == 17) {
            v26 = (char*)SdkData_e89dd8;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 18) {
            v26 = (char*)SdkData_e89e10;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 19) {
            v26 = (char*)SdkData_e89e08;
            goto LABEL_53;
          }
          if (v18 == 201 && v17 == 20) {
            v26 = (char*)SdkData_e89e18;
            goto LABEL_53;
          }
          v27 = f_.v45;
          if (f_.v45 != nullptr) {
            goto LABEL_54;
          }
        }
      LABEL_13:
        --v5;
      } while (v5 != 0);
    }
  }
  return v39;
}

#pragma GCC visibility pop
