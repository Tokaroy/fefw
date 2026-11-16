#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_99e80(__int64, unsigned __int64*);
__int64 cuda_driver_9a090(__int64, int, _DWORD*);
extern _UNKNOWN* CudaDriverData_1422118;
__int64 nvidia_214d50(int a1, unsigned int a2, int a3, _QWORD* a4, __int64 a5);

__int64 nvidia_214d50(int a1, unsigned int a2, int a3, _QWORD* a4, __int64 a5)
{
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  int v14;
  char v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;

  if (a4 == nullptr) {
    return 1;
  }
  result = 1;
  *a4 = 0;
  a4[1] = 0;
  if (a3 == 1) {
    *(_DWORD*)a4 = 1;
    a4[1] = (a2 & 0xE0000000) != 0;
    return 0;
  }
  else if (a3 == 0) {
    if (a2 >> 28 != 0) {
      if (a2 >> 29 != 0) {
        if (a2 >> 28 > 2) {
          switch (a2) {
          case 0x30000000u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3480LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000001u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3724LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000002u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3736LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000003u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3732LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000004u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3748LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000005u:
            v9 = 1;
            goto LABEL_197;
          case 0x30000006u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3756LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000009u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3760LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000000Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3768LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000000Bu:
          case 0x30000040u:
            goto LABEL_198;
          case 0x3000000Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3772LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000000Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3776LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000000Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3780LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000000Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3788LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000010u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3792LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000011u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3796LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000012u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3800LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000014u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3808LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000015u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3812LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000016u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3816LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000017u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3820LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000018u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3824LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000019u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3828LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_164;
          case 0x3000001Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3832LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_164;
          case 0x3000001Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3836LL);
            __asm__ volatile("" ::"r"(v9));
          }
          LABEL_164:
            a4[1] = v9;
            if ((*((_BYTE*)((_UNKNOWN*)0x1840LL) +
                   (_QWORD)CudaDriverData_1422118) &
                 8) != 0) {
              if ((unsigned int)v9 >= 0xFFFF) {
                v9 = 0xFFFF;
              }
              else {
                v9 = (unsigned int)v9;
              }
            LABEL_197:
              a4[1] = v9;
            }
          LABEL_198:
            *(_DWORD*)a4 = 2;
            result = 0;
            break;
          case 0x3000001Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3844LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000001Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3856LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000001Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3860LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000021u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3864LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000023u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3868LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000026u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3880LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000027u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3888LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000028u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3892LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3896LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3900LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3904LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3908LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3912LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000002Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3916LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000030u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3920LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000031u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3924LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000032u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3928LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000035u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3936LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000036u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3944LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000037u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3948LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000038u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3952LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000039u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3976LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3980LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3984LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4004LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4064LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4068LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000003Fu:
            v9 = 0xFFFFFFFFLL;
            goto LABEL_197;
          case 0x30000041u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4080LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000042u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4084LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000043u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4088LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000044u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4100LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000045u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4104LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000046u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4108LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000047u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4008LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000048u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4012LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000049u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4016LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4020LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4024LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4028LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4112LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4116LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000004Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4128LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000050u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4072LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000051u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4076LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000052u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3940LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000053u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4000LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000054u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4092LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000055u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4096LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000056u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4032LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000057u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4036LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000058u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4040LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000059u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4044LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000005Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4048LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000005Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4052LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000005Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4056LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000005Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4060LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000005Eu:
            v18 = a4;
            v19 = (*(__int64 (**)(__int64))(*(_QWORD*)(a5 + 8LL * a1) +
                                            19768LL))(16);
            a4 = v18;
            v18[1] = v19;
            goto LABEL_198;
          case 0x3000005Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3956LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000060u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3960LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000061u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3964LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000062u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4140LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000063u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4144LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000064u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4136LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000065u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4152LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000066u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4164LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000067u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3752LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000068u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3764LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3968LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3972LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3988LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3992LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Eu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3996LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000006Fu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4132LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000070u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4176LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000071u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4168LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000072u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4172LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000073u: {
            v9 = *(unsigned __int8*)(*(_QWORD*)(a5 + 8LL * a1) + 3744LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000074u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4180LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000075u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4184LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000076u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4188LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000077u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4192LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000078u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4196LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x30000079u: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4200LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000007Au: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4204LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000007Bu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3456LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000007Cu: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4232LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          case 0x3000007Du: {
            v9 = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 4236LL);
            __asm__ volatile("" ::"r"(v9));
          }
            goto LABEL_197;
          default:
            return result;
          }
        }
        else {
          switch (a2) {
          case 0x20000000u:
            *(_DWORD*)a4 = 2;
            a4[1] = **(unsigned int**)(a5 + 8LL * a1);
            result = 0;
            break;
          case 0x20000001u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 3128LL);
            result = 0;
            break;
          case 0x20000002u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 3136LL);
            result = 0;
            break;
          case 0x20000003u:
            result = 999;
            *(_DWORD*)a4 = 2;
            {
              v17 = *(_DWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 3168LL);
              __asm__ volatile("" ::"r"(v17));
            }
            if (v17 > 3) {
              if (v17 == 4) {
              LABEL_80:
                v11 = 3;
                goto LABEL_81;
              }
              if (v17 == 8) {
                goto LABEL_41;
              }
            }
            else {
              if (v17 == 1) {
              LABEL_45:
                v11 = 1;
                goto LABEL_81;
              }
              if (v17 == 3) {
              LABEL_67:
                v11 = 8;
                goto LABEL_81;
              }
            }
            break;
          case 0x20000006u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3432LL);
            result = 0;
            break;
          case 0x20000008u:
            *(_DWORD*)a4 = 3;
            a4[1] = *(_QWORD*)(a5 + 8LL * a1) + 6LL;
            result = 0;
            break;
          case 0x20000009u:
            *(_DWORD*)a4 = 3;
            a4[1] = *(_QWORD*)(a5 + 8LL * a1) + 2054LL;
            result = 0;
            break;
          case 0x2000000Au:
            *(_DWORD*)a4 = 2;
            a4[1] =
                (*(_WORD*)(*(_QWORD*)(a5 + 8LL * a1) + 16848LL) & 0x200) != 0;
            result = 0;
            break;
          case 0x2000000Bu:
            *(_DWORD*)a4 = 2;
            a4[1] =
                (*(_WORD*)(*(_QWORD*)(a5 + 8LL * a1) + 16848LL) & 0x400) != 0;
            result = 0;
            break;
          case 0x2000000Cu:
            *(_DWORD*)a4 = 4;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 14808LL);
            result = 0;
            break;
          case 0x2000000Du:
            *(_DWORD*)a4 = 2;
            a4[1] =
                (*(_WORD*)(*(_QWORD*)(a5 + 8LL * a1) + 16848LL) & 0x2000) != 0;
            result = 0;
            break;
          case 0x2000000Eu:
            a4[1] = 0;
            result = 0;
            *(_DWORD*)a4 = 2;
            if (*(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 3368LL) != 0) {
              v16 = 2;
            }
            else {
              v16 = 0;
            }
            a4[1] = v16;
            break;
          case 0x2000000Fu:
          case 0x20000016u:
            a4[1] = 0;
            *(_DWORD*)a4 = 2;
            result = 0;
            break;
          case 0x20000010u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 17168LL);
            result = 0;
            break;
          case 0x20000011u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 17176LL);
            result = 0;
            break;
          case 0x20000012u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 17184LL);
            result = 0;
            break;
          case 0x20000013u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_QWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 17192LL);
            result = 0;
            break;
          case 0x20000014u:
            *(_DWORD*)a4 = 2;
            a4[1] = (*(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 3370LL) & 8) != 0;
            result = 0;
            break;
          case 0x20000015u:
            *(_DWORD*)a4 = 2;
            a4[1] = (*(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 3370LL) & 0x10) != 0;
            result = 0;
            break;
          case 0x20000017u:
            result = 0;
            *(_DWORD*)a4 = 2;
            {
              v15 = *(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 16856LL);
              __asm__ volatile("" ::"r"(v15));
            }
            goto LABEL_76;
          case 0x20000018u:
            result = 0;
            *(_DWORD*)a4 = 2;
            {
              v15 = *(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 3360LL);
              __asm__ volatile("" ::"r"(v15));
            }
          LABEL_76:
            a4[1] = (v15 & 4) != 0;
            break;
          case 0x20000019u:
            *(_DWORD*)a4 = 2;
            a4[1] = *(_BYTE*)(*(_QWORD*)(a5 + 8LL * a1) + 17272LL) & 1;
            result = 0;
            break;
          case 0x2000001Au:
            *(_DWORD*)a4 = 2;
            a4[1] =
                (*(_WORD*)(*(_QWORD*)(a5 + 8LL * a1) + 16848LL) & 0x40LL) != 0;
            result = 0;
            break;
          default:
            return result;
          }
        }
      }
      else {
        switch (a2) {
        case 0x10000000u:
          *(_DWORD*)a4 = 3;
          a4[1] = *(_QWORD*)(a5 + 8LL * a1) + 1030LL;
          return 0;
        case 0x10000001u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3152LL);
          return 0;
        case 0x10000002u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3156LL);
          return 0;
        case 0x10000003u: {
          v12 = *(_QWORD*)(a5 + 8LL * a1);
          __asm__ volatile("" ::"r"(v12));
        }
          v13 = a4;
          v21 = 0;
          result = CudaDriverRoutine_99e80(v12, &v21);
          if ((_DWORD)result == 0) {
            *(_DWORD*)v13 = 2;
            v13[1] = v21;
          }
          return result;
        case 0x10000004u:
          *(_DWORD*)a4 = 2;
          switch (*(_DWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 14816LL)) {
          case 1:
            goto LABEL_45;
          case 2:
            goto LABEL_46;
          case 3:
            goto LABEL_80;
          case 4:
            goto LABEL_41;
          case 5:
            v11 = 5;
            goto LABEL_81;
          case 6:
            v11 = 6;
            goto LABEL_81;
          case 7:
            v11 = 7;
            goto LABEL_81;
          case 8:
            goto LABEL_67;
          case 9:
            v11 = 9;
            goto LABEL_81;
          case 0xC:
            v11 = 12;
            goto LABEL_81;
          case 0xD:
            v11 = 13;
            goto LABEL_81;
          case 0xE:
            v11 = 14;
            goto LABEL_81;
          case 0xF:
            v11 = 15;
            goto LABEL_81;
          case 0x10:
            v11 = 16;
            goto LABEL_81;
          case 0x11:
            v11 = 17;
            goto LABEL_81;
          default:
            goto LABEL_47;
          }
        case 0x10000005u:
          *(_DWORD*)a4 = 2;
          {
            v14 = *(_DWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 14820LL);
            __asm__ volatile("" ::"r"(v14));
          }
          if (v14 == 2) {
            goto LABEL_80;
          }
          if (v14 == 1) {
            goto LABEL_46;
          }
          if (v14 != 0) {
            goto LABEL_47;
          }
          goto LABEL_45;
        case 0x10000006u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3188LL);
          return 0;
        case 0x10000007u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3192LL);
          return 0;
        case 0x10000008u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3196LL);
          return 0;
        case 0x10000009u:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3200LL);
          return 0;
        case 0x1000000Au:
          *(_DWORD*)a4 = 2;
          {
            v10 = *(_DWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 3204LL);
            __asm__ volatile("" ::"r"(v10));
          }
          goto LABEL_37;
        case 0x1000000Bu:
          *(_DWORD*)a4 = 2;
          {
            v10 = *(_DWORD*)(*(_QWORD*)(a5 + 8LL * a1) + 3208LL);
            __asm__ volatile("" ::"r"(v10));
          }
        LABEL_37:
          result = 999;
          if (v10 <= 2) {
            if (v10 == 1) {
            LABEL_47:
              a4[1] = 0;
              return 0;
            }
            if (v10 != 2) {
              return result;
            }
            goto LABEL_45;
          }
          if (v10 == 3) {
          LABEL_46:
            v11 = 2;
            goto LABEL_81;
          }
          if (v10 == 4) {
            goto LABEL_80;
          }
          if (v10 != 5) {
            return result;
          }
          break;
        case 0x1000000Cu:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3212LL);
          return 0;
        case 0x1000000Du:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3216LL);
          return 0;
        case 0x1000000Eu:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3220LL);
          return 0;
        case 0x1000000Fu:
          *(_DWORD*)a4 = 2;
          a4[1] = *(unsigned int*)(*(_QWORD*)(a5 + 8LL * a1) + 3224LL);
          return 0;
        default:
          return result;
        }
      LABEL_41:
        v11 = 4;
      LABEL_81:
        a4[1] = v11;
        return 0;
      }
    }
    else {
      {
        v7 = *(_QWORD*)(a5 + 8LL * a1);
        __asm__ volatile("" ::"r"(v7));
      }
      v8 = a4;
      v20 = 0;
      result = cuda_driver_9a090(v7, a2, &v20);
      if ((_DWORD)result == 0) {
        *(_DWORD*)v8 = 1;
        v8[1] = v20;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
