#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6bd60(const char*);
__int64 nndetailImagePng_png_warning_plt(__int64, __int64);
unsigned __int64 png_format_buffer(unsigned __int64 result, _BYTE*, __int64);
__int64 libpng_6c4e0(__int64 a1, char* a2);

__int64 libpng_6c4e0(__int64 a1, char* a2)
{
  unsigned __int64 v3;
  char v5;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE v31[13];

  if (a1 == 0) {
    return SdkRoutine_6bd60(a2);
  }
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  memset(v31, 0, sizeof(v31));
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  {
    v3 = *(unsigned int*)(a1 + 648);
    __asm__ volatile("" ::"r"(v3));
  }
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  png_format_buffer(v3, &v5, (__int64)a2);
  return nndetailImagePng_png_warning_plt(a1, (__int64)&v5);
}

#pragma GCC visibility pop
