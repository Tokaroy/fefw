#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e87c88;
unsigned __int64 fdk_aac_libFDK_src_36d0d0(void* this_, char a2);
unsigned __int64 fdk_aac_libFDK_src_36d1a0(void* this_, char a2);

unsigned __int64 fdk_aac_libFDK_src_36d0d0(void* this_, char a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned __int64 v6;
  __int16 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int16* v12;
  unsigned __int16* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = ((unsigned __int64)(683565276LL * (int)this_) >> 31) & 0xFFFFFFFE;
  v3 = v2 >> (21 - a2);
  if (v3 >= 0) {
    LOWORD(v4) = v2 >> (21 - a2);
  }
  else {
    v4 = -v3;
  }
  v5 = v4 & 0x3FF;
  v6 = 1686629713LL * (v2 & (unsigned int)~(-1 << (21 - a2)));
  v7 = v3 + 512;
  if (v5 > 0x200) {
    v5 = 1024 - v5;
  }
  v8 = v5 > 0x100;
  v9 = SdkData_e87c88 + 4LL * (512 - v5);
  v10 = SdkData_e87c88 + 4LL * v5;
  v11 = ((v6 >> 29) & 0xFFFFFFF8) << a2;
  if (v5 <= 0x100) {
    v12 = (unsigned __int16*)(v10 + 2);
  }
  else {
    v12 = (unsigned __int16*)(SdkData_e87c88 + 4LL * (512 - v5));
  }
  if (v8) {
    v13 = (unsigned __int16*)(v9 + 2);
  }
  else {
    v13 = (unsigned __int16*)v10;
  }
  v14 = *v12;
  v15 = *v13;
  if ((v3 & 0x400) != 0) {
    v16 = -v14;
  }
  else {
    v16 = v14;
  }
  v17 = v16 << 16;
  if ((v7 & 0x400) != 0) {
    v18 = -v15;
  }
  else {
    v18 = v15;
  }
  return (v18 << 16) -
         (((unsigned __int64)(v17 * (__int64)v11) >> 31) & 0xFFFFFFFE);
}

unsigned __int64 fdk_aac_libFDK_src_36d1a0(void* this_, char a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned __int64 v6;
  __int16 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int16* v12;
  unsigned __int16* v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v2 = ((unsigned __int64)(683565276LL * (int)this_) >> 31) & 0xFFFFFFFE;
  v3 = v2 >> (21 - a2);
  if (v3 >= 0) {
    LOWORD(v4) = v2 >> (21 - a2);
  }
  else {
    v4 = -v3;
  }
  v5 = v4 & 0x3FF;
  v6 = 1686629713LL * (v2 & (unsigned int)~(-1 << (21 - a2)));
  v7 = v3 + 512;
  if (v5 > 0x200) {
    v5 = 1024 - v5;
  }
  v8 = v5 > 0x100;
  v9 = SdkData_e87c88 + 4LL * (512 - v5);
  v10 = SdkData_e87c88 + 4LL * v5;
  v11 = ((v6 >> 29) & 0xFFFFFFF8) << a2;
  if (v5 <= 0x100) {
    v12 = (unsigned __int16*)(v10 + 2);
  }
  else {
    v12 = (unsigned __int16*)(SdkData_e87c88 + 4LL * (512 - v5));
  }
  if (v8) {
    v13 = (unsigned __int16*)(v9 + 2);
  }
  else {
    v13 = (unsigned __int16*)v10;
  }
  v14 = *v12;
  v15 = *v13;
  if ((v3 & 0x400) != 0) {
    v16 = -v14;
  }
  else {
    v16 = v14;
  }
  if ((v7 & 0x400) != 0) {
    v17 = -v15;
  }
  else {
    v17 = v15;
  }
  return (((unsigned __int64)((v17 << 16) * (__int64)v11) >> 31) & 0xFFFFFFFE) +
         (v16 << 16);
}

#pragma GCC visibility pop
