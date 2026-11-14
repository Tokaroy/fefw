#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_bf700(_QWORD* result);

__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);

__int64 NgxRoutine_430(_QWORD, _QWORD);

__int64 NgxRoutine_baf00(_QWORD);

__int64 NgxRoutine_baf00_alt1() __asm__("NgxRoutine_baf00");

__int64 NgxRoutine_bf010(_QWORD);

__int64 NgxRoutine_d6d40(__int64, __int64, __int64, __int64, __int64,
                         unsigned int);

__int64 NgxRoutine_d7f40(__int64, __int64, __int64, __int64, __int64, int);

__int64 NgxRoutine_daf20();

__int64 NgxRoutine_db240(__int64*);

__int64 NgxRoutine_dfc20(__int64*);

__int64 NgxRoutine_e0e80(__int64);

__int64 _Unwind_Resume_plt(_QWORD);

__int64 __cxa_guard_abort_plt(_QWORD);

__int64 free_plt(_QWORD);

__int64 nvidia_c97d0(__int64);

__int64 nvidia_cd0e0(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);

__int64 nvidia_cdb60(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                     __int64, _QWORD*, _QWORD*, __int64*);

__int64 std_exception_Destroy_exception_plt();

char* nvidia_e1af0(_WORD*, char*, unsigned __int64, unsigned int);

char* nvidia_e1af0_alt1(_WORD*) __asm__("nvidia_e1af0");

extern _UNKNOWN NgxData_2b89de8;

extern void (*NgxData_954740)();

unsigned __int64 NgxRoutine_e0fa0(unsigned __int8*);

void __attribute__((noreturn)) NgxRoutine_baf40(__int64);

void __attribute__((noreturn)) nvidia_b3380();

void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);

void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10);

__int64 nvidia_beffc(__int64 a1);

void __attribute__((noreturn))
nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14);

void __attribute__((noreturn)) nvidia_c15c0(__int64 a1);

void __attribute__((noreturn)) nvidia_c1c80(__int64 a1);

void __attribute__((noreturn)) nvidia_c2340(__int64 a1);

void __attribute__((noreturn)) nvidia_c2a00(__int64 a1);

void __attribute__((noreturn)) nvidia_c30c0(__int64 a1);

void __attribute__((noreturn)) nvidia_c3780(__int64 a1);

void __attribute__((noreturn)) nvidia_c3da4(__int64 a1);

void __attribute__((noreturn)) nvidia_c43c4(__int64 a1);

void __attribute__((noreturn)) nvidia_c49e4(__int64 a1);

void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9);

void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1);

void __attribute__((noreturn)) nvidia_c645c(__int64 a1);

void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1);

void __attribute__((noreturn)) nvidia_c71dc(__int64 a1);

void __attribute__((noreturn)) nvidia_c789c(__int64 a1);

void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1);

void __attribute__((noreturn)) nvidia_c8580(__int64 a1);

void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1);

void __attribute__((noreturn)) nvidia_c91c0(__int64 a1);

__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);

__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);

__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);

void __attribute__((noreturn)) nvidia_cb280(__int64 a1);

void __attribute__((noreturn)) nvidia_cb75c(__int64 a1);

__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12);

__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);

__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9);

void __attribute__((noreturn)) nvidia_ccb00(__int64 a1);

void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1);

void __attribute__((noreturn)) nvidia_d0e64(__int64 a1);

void __attribute__((noreturn)) nvidia_d18f8(__int64 a1);

void __attribute__((noreturn)) nvidia_d1c74(__int64 a1);

void __attribute__((noreturn))
nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41);

void __attribute__((noreturn))
nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43);

void __attribute__((noreturn)) nvidia_d8b18(__int64 a1);

void __attribute__((noreturn)) nvidia_dbcac(__int64 a1);

void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1);

void __attribute__((noreturn)) nvidia_dc47c(__int64 a1);

void __attribute__((noreturn)) nvidia_dc868(__int64 a1);

__int64 nvidia_e0e68(__int64 a1);

unsigned __int64 nvidia_e0f88(__int64 a1);

char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10);

void __attribute__((noreturn)) nvidia_e21bc(__int64 a1);

void __attribute__((noreturn)) nvidia_dc738(__int64 a1);

void __attribute__((noreturn)) nvidia_dc750(__int64 a1);

void __attribute__((noreturn))

nvidia_d5510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41)
{
  __int64 v41;
  __int64 v43;

  if ((a27 & 1) != 0) {
    NgxRoutine_430(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  NgxRoutine_430(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  NgxRoutine_430(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      v43 = _Unwind_Resume_plt(a1);
      NgxRoutine_baf40(v43);
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  NgxRoutine_430(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

void __attribute__((noreturn)) nvidia_dc738(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  NgxRoutine_baf40(a1);
}

void __attribute__((noreturn)) nvidia_dc750(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  NgxRoutine_baf40(a1);
}

#pragma GCC visibility pop
