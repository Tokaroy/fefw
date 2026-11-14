#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);

__int64 memset_plt(void* this_, void*, int, unsigned __int64);

__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);

__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);

__int64 nn_codec_FDKsbrEnc_EncodeIcc_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);

__int64 nn_codec_FDKsbrEnc_EncodeIid_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD);

__int64 nn_codec_LdDataVector_plt(_QWORD, _QWORD, _QWORD);

__int64 nn_codec_calculateICC(__int64 result, int*, _DWORD*, __int64,
                              unsigned int*, int, int);

extern _DWORD SdkData_c36f04[15];

extern _DWORD SdkData_c36f40[4];

extern _UNKNOWN SdkData_c36f50;

extern void (*SdkData_e87c50[714])();

__int64 fdk_aac_libSBRenc_src_3e2e00(int* a1, _DWORD* a2, __int64 a3,
                                     unsigned __int64 a4, __int64 a5, int a6,
                                     int a7);

#pragma GCC visibility pop
