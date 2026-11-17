#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* BF_set_key(_BYTE* result, __int64, _DWORD*, unsigned __int8);
__int64 BF_crypt(__int64, _BYTE*, __int64, unsigned int);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
extern _BYTE SdkData_bc12d1[12];
extern _UNKNOWN SdkData_bc4097;
extern char SdkData_caf0e6[];
extern unsigned __int8 SdkData_caf12a[26];
int memcmp_plt(__int64, __int64, unsigned __int64);
char* musl_src_crypt_791180(__int64 a1, _BYTE* a2, __int64 a3);

char* musl_src_crypt_791180(__int64 a1, _BYTE* a2, __int64 a3)
{
  __int64 v4;
  char* v5;
  _BYTE* v6;
  _BYTE* v7;
  _BOOL4 v8;
  int v9;
  bool v10;
  struct {
    _DWORD v12[18];
    _BYTE v13[68];
    int v14;
    _DWORD v15[18];
    _BYTE v16[75];
    _BYTE v17[2];
    unsigned __int8 v18;
    char gap294_[27];
    _BYTE v19[63];
  } f_;

  v4 = BF_crypt(a1, a2, a3, 0x10u);
  memcpy_plt((__int64)f_.v17, (__int64)"$2a$00$abcdefghijklmnopqrstuu", 0x1Eu);
  v5 = "i1D709vfamulimlGcq0qq3UvuUasvEa";
  if (v4 != 0) {
    f_.v18 = a2[2];
    v5 = &SdkData_caf0e6[34 * (SdkData_caf12a[f_.v18 - 97] & 1)];
  }
  memset_plt((__int64)f_.v19, (int)((__int64*)0x50LL) + 5, 0x3Fu);
  f_.v19[62] = 0;
  v6 = (_BYTE*)BF_crypt((__int64)&SdkData_bc4097, f_.v17, (__int64)f_.v19, 1u);
  v8 = v6 == f_.v19 &&
       (v7 = v6, memcmp_plt((__int64)v6, (__int64)f_.v17, 0x1Du) == 0) &&
       memcmp_plt((__int64)(v7 + 29), (__int64)v5, 0x22u) == 0;
  BF_set_key(SdkData_bc12d1, (__int64)f_.v16, f_.v15, 2u);
  BF_set_key(SdkData_bc12d1, (__int64)f_.v13, f_.v12, 4u);
  v9 = f_.v15[0];
  v10 = false;
  f_.v15[0] ^= 0x10000u;
  if (v8 && v9 == -610444868 && f_.v14 == 859059456) {
    v10 = memcmp_plt((__int64)f_.v16, (__int64)f_.v13, 0x48u) == 0 &&
          memcmp_plt((__int64)f_.v15, (__int64)f_.v12, 0x48u) == 0;
  }
  if (v4 != 0 && v10) {
    return (const char*)v4;
  }
  else {
    return "*";
  }
}

#pragma GCC visibility pop
