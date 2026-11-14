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
void __attribute__((noreturn)) nvidia_b3380() { NgxData_954740(); }

void __attribute__((noreturn)) nvidia_bbecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_bc6dc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10)
{
  _QWORD* v10;
  __int64 v11;

  NgxRoutine_db240(&a10);
  *v10 = v11;
  NgxRoutine_db240(v10 + 1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_beffc(__int64 a1)
{
  __int64 v3;

  std_exception_Destroy_exception_plt();
  v3 = _Unwind_Resume_plt(a1);
  return NgxRoutine_bf010(v3);
}

void __attribute__((noreturn))

nvidia_c0a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  v16 = _Unwind_Resume_plt(a1);
  v17 = _Unwind_Resume_plt(v16);
  NgxRoutine_db240((__int64*)(v14 - 32));
  v18 = _Unwind_Resume_plt(v17);
  NgxRoutine_db240((__int64*)(v14 - 32));
  _Unwind_Resume_plt(v18);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c15c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c1c80(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c2340(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c2a00(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c30c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c3780(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 48),
                   *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 24),
                 *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c3da4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c43c4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c49e4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c5238(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  NgxRoutine_bf700((_QWORD*)(v9 + 24));
  NgxRoutine_bf700(&a9);
  v12 = _Unwind_Resume_plt(a1);
  NgxRoutine_bf700(&a9);
  v13 = _Unwind_Resume_plt(v12);
  v14 = _Unwind_Resume_plt(v13);
  NgxRoutine_db240((__int64*)(v10 - 32));
  v15 = _Unwind_Resume_plt(v14);
  NgxRoutine_db240((__int64*)(v10 - 32));
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c5d9c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c645c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c6b1c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c71dc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c789c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c7f5c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(*(_QWORD*)(v1 - 152),
                   *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(*(_QWORD*)(v1 - 128),
                 *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8580(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c8ba0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_c91c0(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt(a1);
  LABEL_4:
    NgxRoutine_430(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_430(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_c9770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  if ((a10 & 1) != 0) {
    NgxRoutine_430(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return nvidia_c97d0(v13);
}

__int64 nvidia_ca54c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _BYTE v45[45];
  unsigned __int8 v46;
  unsigned __int8 v47;
  _BYTE v48[6];
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v47;
      v46 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v47;
      v46 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v49, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v46;
    goto LABEL_60;
  }
  if (v46 != 45 && v46 != 43) {
    if (v26 - (char*)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v47;
LABEL_60:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46, v40, v27, (__int64)v45, &v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v45, v44, v43, v18, v16);
}

__int64 nvidia_ca88c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _BYTE v45[45];
  unsigned __int8 v46;
  unsigned __int8 v47;
  _BYTE v48[22];
  _QWORD v49[8];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v47;
      v46 = 48;
    }
    else if (v21 == 8) {
      v17 = v48;
      v46 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v47 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v49, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 && v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v46;
    goto LABEL_54;
  }
  if (v46 != 45 && v46 != 43) {
    if (v25 - (char*)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v47;
LABEL_54:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cd0e0(&v46, v40, v26, (__int64)v45, &v44, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d6d40(v20, (__int64)v45, v44, v43, v18, v16);
}

void __attribute__((noreturn)) nvidia_cb280(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_cb75c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

__int64 nvidia_cba24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  unsigned __int8* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned __int64 v28;
  char v29;
  char* v30;
  unsigned __int8* v31;
  unsigned __int64 v32;
  __int64 i;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned __int8* v44;
  __int64 v46;
  __int64 v47;
  _BYTE v48[180];
  unsigned __int8 v49;
  unsigned __int8 v50;
  _BYTE v51[6];
  _QWORD v52[2];
  __int64 v53[7];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a12),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = _Unwind_Resume_plt(a1),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a9 & 1) != 0) {
    NgxRoutine_430(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  _Unwind_Resume_plt(v14),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52[0] = v12;
  v52[1] = v16;
  v53[6] = v14;
  v18 = *(_DWORD*)(v17 + 8);
  v20 = v19;
  v21 = &v49;
  v22 = v17;
  v24 = v23;
  v25 = v18 & 0x4A;
  if (v25 == 8) {
    v26 = 16;
  }
  else {
    v26 = 10;
  }
  if (v25 == 64) {
    v27 = 8;
  }
  else {
    v27 = v26;
  }
  if ((v15 & 0x8000000000000000LL) != 0) {
    if (v25 == 8) {
      goto LABEL_17;
    }
    v28 = v15;
    if (v25 != 64) {
      v28 = -(__int64)v15;
      v21 = &v50;
      v49 = 45;
    }
  }
  else {
    if ((v18 & 0x800) == 0 || v25 == 8) {
      goto LABEL_17;
    }
    v28 = v15;
    if (v25 != 64) {
      v21 = &v50;
      v49 = 43;
    LABEL_17:
      v28 = v15;
    }
  }
  if (v15 != 0 && (v18 & 0x200) != 0) {
    if (v25 == 64) {
      *v21++ = 48;
    }
    else if (v25 == 8) {
      *v21 = 48;
      if ((v18 & 0x4000) != 0) {
        v29 = 88;
      }
      else {
        v29 = 120;
      }
      v21[1] = v29;
      v21 += 2;
    }
  }
  v30 = nvidia_e1af0(v21, (char*)v52, v28, v27),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = (unsigned __int8*)v30;
  if ((~v18 & 0x4008) == 0) {
    v32 = v21 - (unsigned __int8*)v30;
    if (v21 != (unsigned __int8*)v30) {
      for (i = ((_BYTE)v30 - (_BYTE)v21) & 7; i != 0; *v21++ = v34) {
        v34 = *v21;
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        --i;
      }
      if (v32 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v35 = *v21;
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          *v21 = v35;
          v36 = v21[1];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v21[1] = v36;
          v37 = v21[2];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v21[2] = v37;
          v38 = v21[3];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v21[3] = v38;
          v39 = v21[4];
          if ((unsigned int)(v39 - 97) < 6) {
            LOBYTE(v39) = v39 - 32;
          }
          v21[4] = v39;
          v40 = v21[5];
          if ((unsigned int)(v40 - 97) < 6) {
            LOBYTE(v40) = v40 - 32;
          }
          v21[5] = v40;
          v41 = v21[6];
          if ((unsigned int)(v41 - 97) < 6) {
            LOBYTE(v41) = v41 - 32;
          }
          v21[6] = v41;
          v42 = v21[7];
          if ((unsigned int)(v42 - 97) < 6) {
            LOBYTE(v42) = v42 - 32;
          }
          v21[7] = v42;
          v21 += 8;
        } while (v21 != (unsigned __int8*)v30);
      }
    }
  }
  v43 = *(_DWORD*)(v22 + 8) & 0xB0;
  if (v43 == 32) {
    v44 = (unsigned __int8*)v30;
    goto LABEL_62;
  }
  if (v43 != 16) {
  LABEL_61:
    v44 = &v49;
    goto LABEL_62;
  }
  if (v49 != 45 && v49 != 43) {
    if (v30 - (char*)&v49 >= 2 && v49 == 48 && (v50 | 0x20) == 0x78) {
      v44 = v51;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  v44 = &v50;
LABEL_62:
  nvidia_be650((void*)(&v46), v22),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v49, v44, v31, (__int64)v48, v53, &v47, &v46),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v46),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v24, (__int64)v48, v53[0], v47, v22, v20);
}

__int64 nvidia_cbd9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned __int64 v24;
  char v25;
  char* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 i;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  unsigned __int8 v45;
  unsigned __int8 v46;
  _BYTE v47[6];
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if ((v11 & 0x8000000000000000LL) != 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -(__int64)v11;
      v17 = &v46;
      v45 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = &v46;
      v45 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = nvidia_e1af0(v17, (char*)v48, v24, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (unsigned __int8*)v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = v17 - (unsigned __int8*)v26;
    if (v17 != (unsigned __int8*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = *v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = *v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (unsigned __int8*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v45;
    goto LABEL_60;
  }
  if (v45 != 45 && v45 != 43) {
    if (v26 - (char*)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = &v46;
LABEL_60:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45, v40, v27, (__int64)v44, v49, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v44, v49[0], v43, v18, v16);
}

__int64 nvidia_cc0dc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  char* v25;
  unsigned __int8* v26;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  unsigned __int8 v45;
  unsigned __int8 v46;
  _BYTE v47[22];
  _QWORD v48[2];
  __int64 v49[7];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&a9),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _Unwind_Resume_plt(a1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = &v46;
      v45 = 48;
    }
    else if (v21 == 8) {
      v17 = v47;
      v45 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v46 = v24;
    }
  }
  v25 = nvidia_e1af0(v17, (char*)v48, v11, v23),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = (unsigned __int8*)v25;
  if ((~v14 & 0x4008) == 0 && v17 != (unsigned __int8*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = *v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)(v17 - (unsigned __int8*)v25) <=
        0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = *v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (unsigned __int8*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (unsigned __int8*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v45;
    goto LABEL_54;
  }
  if (v45 != 45 && v45 != 43) {
    if (v25 - (char*)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = &v46;
LABEL_54:
  nvidia_be650((void*)(&v42), v18),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nvidia_cdb60(&v45, v40, v26, (__int64)v44, v49, &v43, &v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  NgxRoutine_db240(&v42),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return NgxRoutine_d7f40(v20, (__int64)v44, v49[0], v43, v18, v16);
}

void __attribute__((noreturn)) nvidia_ccb00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_ccfdc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v4 = _Unwind_Resume_plt(a1);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v5 = _Unwind_Resume_plt(v4);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v6 = _Unwind_Resume_plt(v5);
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v7 = _Unwind_Resume_plt(v6);
  v8 = _Unwind_Resume_plt(v7);
  v9 = _Unwind_Resume_plt(v8);
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt(v9);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt(v9);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d0e64(__int64 a1)
{
  __int64 v1;

  NgxRoutine_db240((__int64*)(v1 - 32));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d18f8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_d1c74(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  NgxRoutine_db240((__int64*)(v1 - 152));
  v3 = *(_QWORD*)(v1 - 136);
  *(_QWORD*)(v1 - 136) = 0;
  if (v3 != 0) {
    (*(void (**)(void))(v1 - 128))();
  }
  v4 = _Unwind_Resume_plt(a1);
  NgxRoutine_baf40(v4);
}

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

void __attribute__((noreturn))

nvidia_d6260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19, __int64 a20,
             __int64 a21, __int64 a22, __int64 a23, __int64 a24, __int64 a25,
             __int64 a26, __int64 a27, __int64 a28, __int64 a29, __int64 a30,
             __int64 a31, __int64 a32, __int64 a33, __int64 a34, __int64 a35,
             __int64 a36, __int64 a37, __int64 a38, __int64 a39, __int64 a40,
             __int64 a41, __int64 a42, __int64 a43)
{
  __int64 v43;
  __int64 v44;
  __int64 v46;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v46 = _Unwind_Resume_plt(a1);
  if ((a35 & 1) != 0) {
    NgxRoutine_430(a37, a35 & 0xFFFFFFFFFFFFFFFELL);
    if ((a38 & 1) == 0) {
    LABEL_3:
      if ((a41 & 1) == 0) {
      LABEL_8:
        NgxRoutine_db240((__int64*)(v44 - 232));
        if (v43 != 0) {
          goto LABEL_11;
        }
        while (a17 == 0) {
          _Unwind_Resume_plt(v46);
        LABEL_11:
          free_plt(v43);
        }
        free_plt(a17);
        _Unwind_Resume_plt(v46);
        __udf(0);
      }
    LABEL_7:
      NgxRoutine_430(a43, a41 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_8;
    }
  }
  else if ((a38 & 1) == 0) {
    goto LABEL_3;
  }
  NgxRoutine_430(a40, a38 & 0xFFFFFFFFFFFFFFFELL);
  if ((a41 & 1) == 0) {
    goto LABEL_8;
  }
  goto LABEL_7;
}

void __attribute__((noreturn)) nvidia_d8b18(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  NgxRoutine_baf00(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(v1 + 304),
                   *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_daf20();
  NgxRoutine_baf00(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dbcac(__int64 a1)
{

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  NgxRoutine_baf00_alt1();
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc47c(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc868(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_e0e68(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = _Unwind_Resume_plt(a1);
  return NgxRoutine_e0e80(v2);
}

unsigned __int64 nvidia_e0f88(__int64 a1)
{
  unsigned __int8* v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = (unsigned __int8*)_Unwind_Resume_plt(a1);
  return NgxRoutine_e0fa0(v2);
}

char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{
  _WORD* v11;

  NgxRoutine_db240(&a10);
  v11 = (_WORD*)_Unwind_Resume_plt(a1);
  return nvidia_e1af0_alt1(v11);
}

void __attribute__((noreturn)) nvidia_e21bc(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 40));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

#pragma GCC visibility pop
