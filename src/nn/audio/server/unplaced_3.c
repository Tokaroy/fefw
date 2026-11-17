#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 command_generator_242b10(__int64, __int64, __int64, unsigned __int64,
                                 __int16, int);
__int64 command_generator_242c00(__int64, __int64, __int64, unsigned __int64,
                                 __int16, int);
__int64 command_generator_242e60(__int64, __int64, __int64, unsigned __int64,
                                 __int16, __int16);
__int64 nn_audio_server_242980(__int64, __int64, __int64, unsigned __int64,
                               __int16, int);
__int64 nn_audio_server_BehaviorInfo_IsWaveBufferVer2Supported_plt(_QWORD,
                                                                   long double);
__int64 nn_audio_server_ISplitterDestinationData_GetMixId_plt(__int64);
__int64 nn_audio_server_ISplitterDestinationData_IsConfigured_plt(void);
__int64 nn_audio_server_MemoryPoolInfo_Translate_plt(__int64, unsigned __int64,
                                                     __int64);
__int64 nn_audio_server_MixContext_GetCount_plt(__int64);
__int64 nn_audio_server_MixContext_GetInfo_plt(__int64, int);
__int64 nn_audio_server_SplitterContext_GetDestinationData_plt(_QWORD);
float command_generator_23c0e0(__int64, int, unsigned __int64*,
                               unsigned __int64*, int*, __int16*, char*);
float command_generator_23c2b0(__int64, int, unsigned __int64,
                               unsigned __int64*, int*, __int16*, char*);
void nn_detail_UnexpectedDefaultImpl_plt_857150();
float nn_audio_server_23bac0();

float nn_audio_server_23bac0()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  __int64 v1;
  unsigned __int64 v2;
  int v3;
  long double v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  _QWORD* v10;
  int v12;
  float v13;
  float v14;
  __int64 v15;
  unsigned __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int64* v34;
  int v35;
  __int64 v36;
  char v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char v63;
  __int64 v64;
  __int64 v65;
  float v66;
  char v68[4];
  struct {
    int v69;
    int v70;
  } v69_;
  unsigned __int64 v71;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = v1;
  v6 = *(_DWORD*)(v1 + 64);
  v7 = *(_DWORD*)(v5 + 16);
  v8 = v3;
  v9 = v2;
  v10 = v0;
  if (v6 != -1 | v7 != 0x7FFFFFFF) {
    if (v6 == -1) {
      v32 = nn_audio_server_MixContext_GetInfo_plt(v0[5], v7),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v33 = *(_DWORD*)(v32 + 20);
      v34 = (unsigned __int64*)(v10[3] + 24LL);
      v69_.v70 = *(_DWORD*)(v32 + 2364);
      LODWORD(v71) = v33;
      v35 = *(_DWORD*)(v5 + 12);
      v36 = v10[1];
      LOBYTE(v69_.v69) = (*(_BYTE*)(v5 + 36) & 4) != 0;
      *(float*)&v4 =
          command_generator_23c2b0(v36, v35, v9 + 144, v34, (int*)&v71,
                                   (__int16*)&v69_.v70, (char*)&v69_.v69),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v12 = 0;
      do {
        v18 = nn_audio_server_SplitterContext_GetDestinationData_plt(v10[8]),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v18 == 0) {
          break;
        }
        v19 = v18;
        if ((nn_audio_server_ISplitterDestinationData_IsConfigured_plt() & 1) !=
            0) {
          v20 = nn_audio_server_ISplitterDestinationData_GetMixId_plt(v19),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v20 < (int)nn_audio_server_MixContext_GetCount_plt(v10[5]) &&
              (unsigned int)
                      nn_audio_server_ISplitterDestinationData_GetMixId_plt(
                          v19) != 0x7FFFFFFF) {
            v21 = v10[5];
            v22 = nn_audio_server_ISplitterDestinationData_GetMixId_plt(v19),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v23 = nn_audio_server_MixContext_GetInfo_plt(v21, v22),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v25 = v9 + 144;
            if (v24 != 0) {
              v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19),
              v0 = COERCE_AS(__typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v1 = COERCE_AS(__typeof__(v1),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v71 = v25;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19) & 1) !=
                0) {
              v26 = v10[1];
              v27 = *(_QWORD*)(v26 + 24) + *(_QWORD*)(v26 + 8);
              *(_DWORD*)(v27 + 8) = *(_DWORD*)(v5 + 12);
              v28 = *(_BYTE*)v27;
              *(_WORD*)(v27 + 2) = 48;
              *(_BYTE*)(v27 + 1) = 41;
              *(_BYTE*)v27 = v28 | 1;
              v29 = *(_QWORD*)(v26 + 40);
              v30 = v71;
              ++*(_DWORD*)(v26 + 32);
              *(_QWORD*)(v26 + 24) += 48LL;
              *(_QWORD*)(v27 +
                         16) =
                  nn_audio_server_MemoryPoolInfo_Translate_plt(v29, v30, 96),
                         v0 = COERCE_AS(
                             __typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                         v1 = COERCE_AS(
                             __typeof__(v1),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                         v2 = COERCE_AS(
                             __typeof__(v2),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                         v3 = COERCE_AS(
                             __typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                         v4 = COERCE_AS(__typeof__(v4),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_BYTE*)(v27 + 32) = 0;
              *(_DWORD*)(v27 + 28) = 96;
              v31 = *(_QWORD*)(v26 + 48);
              if (v31 != 0) {
                v13 = (float)(*(unsigned int (**)(__int64, __int64))(
                    *(_QWORD*)v31 + 328LL))(v31, v27),
                v0 = COERCE_AS(__typeof__(v0),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v1 = COERCE_AS(__typeof__(v1),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v2 = COERCE_AS(__typeof__(v2),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v3 = COERCE_AS(__typeof__(v3),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              else {
                v13 = 0x0.0p+0f;
              }
              v14 = v13 * *(float*)(v26 + 64);
              *(_DWORD*)(v27 + 4) = (unsigned int)v14;
              *(_DWORD*)(v26 + 36) += (unsigned int)v14;
            }
            v15 = v10[1];
            v16 = (unsigned __int64*)(v10[3] + 24LL);
            v69_.v70 = *(_DWORD*)(v23 + 20);
            v17 = *(_DWORD*)(v5 + 12);
            v69_.v69 = *(_DWORD*)(v23 + 2364);
            v68[0] = (*(_BYTE*)(v5 + 36) & 4) != 0;
            *(float*)&v4 = command_generator_23c0e0(
                v15, v17, &v71, v16, &v69_.v70, (__int16*)&v69_.v69, v68),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        ++v12;
      } while (*(_DWORD*)(v5 + 64) != -1);
    }
  }
  if ((*(_WORD*)(v5 + 36) & 4) == 0) {
    v37 = nn_audio_server_BehaviorInfo_IsWaveBufferVer2Supported_plt(
        *(_QWORD*)(v10[3] + 16LL), v4),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v38 = *(unsigned __int8*)(v5 + 38);
    if ((v37 & 1) != 0) {
      switch (v38) {
      case 6:
        v39 = v10[1];
        v58 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v59 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 256;
        *(_BYTE*)(v41 + 1) = 6;
        *(_BYTE*)v41 = v59 | 1;
        v60 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 256LL;
        command_generator_242b10(v41, v60, v5, v9, *(_DWORD*)(v58 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v61 = *(_QWORD*)(v39 + 48);
        if (v61 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v61 + 32LL))(v61,
                                                                          v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_41;
        }
        goto LABEL_42;
      case 5:
        v39 = v10[1];
        v50 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v51 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 256;
        *(_BYTE*)(v41 + 1) = 4;
        *(_BYTE*)v41 = v51 | 1;
        v52 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 256LL;
        nn_audio_server_242980(v41, v52, v5, v9, *(_DWORD*)(v50 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v53 = *(_QWORD*)(v39 + 48);
        if (v53 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v53 + 48LL))(v53,
                                                                          v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_41;
        }
        goto LABEL_42;
      case 2:
        v39 = v10[1];
        v40 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v42 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 256;
        *(_BYTE*)(v41 + 1) = 2;
        *(_BYTE*)v41 = v42 | 1;
        v43 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 256LL;
        nn_audio_server_242980(v41, v43, v5, v9, *(_DWORD*)(v40 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v44 = *(_QWORD*)(v39 + 48);
        if (v44 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v44 + 16LL))(v44,
                                                                          v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LABEL_41:
          v66 = (float)v45;
        LABEL_43:
          *(float*)&v4 = v66 * *(float*)(v39 + 64);
          *(_DWORD*)(v41 + 4) = (unsigned int)*(float*)&v4;
          *(_DWORD*)(v39 + 36) += (unsigned int)*(float*)&v4;
          return *(float*)&v4;
        }
        goto LABEL_42;
      default:
        break;
      }
    }
    else {
      switch (v38) {
      case 6:
        v39 = v10[1];
        v62 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v63 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 216;
        *(_BYTE*)(v41 + 1) = 5;
        *(_BYTE*)v41 = v63 | 1;
        v64 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 216LL;
        command_generator_242e60(v41, v64, v5, v9, *(_DWORD*)(v62 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v65 = *(_QWORD*)(v39 + 48);
        if (v65 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v65 + 24LL))(v65,
                                                                          v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_41;
        }
        goto LABEL_42;
      case 5:
        v39 = v10[1];
        v54 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v55 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 216;
        *(_BYTE*)(v41 + 1) = 3;
        *(_BYTE*)v41 = v55 | 1;
        v56 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 216LL;
        command_generator_242c00(v41, v56, v5, v9, *(_DWORD*)(v54 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v57 = *(_QWORD*)(v39 + 48);
        if (v57 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v57 + 40LL))(v57,
                                                                          v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_41;
        }
        goto LABEL_42;
      case 2:
        v39 = v10[1];
        v46 = v10[3];
        v41 = *(_QWORD*)(v39 + 24) + *(_QWORD*)(v39 + 8);
        *(_DWORD*)(v41 + 8) = *(_DWORD*)(v5 + 12);
        v47 = *(_BYTE*)v41;
        *(_WORD*)(v41 + 2) = 216;
        *(_BYTE*)(v41 + 1) = 1;
        *(_BYTE*)v41 = v47 | 1;
        v48 = *(_QWORD*)(v39 + 40);
        ++*(_DWORD*)(v39 + 32);
        *(_QWORD*)(v39 + 24) += 216LL;
        command_generator_242c00(v41, v48, v5, v9, *(_DWORD*)(v46 + 8), v8),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v49 = *(_QWORD*)(v39 + 48);
        if (v49 != 0) {
          v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v49 + 8LL))(v49,
                                                                         v41),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_41;
        }
      LABEL_42:
        v66 = 0x0.0p+0f;
        goto LABEL_43;
      default:
        break;
      }
    }
    nn_detail_UnexpectedDefaultImpl_plt_857150(),
        v0 = COERCE_AS(__typeof__(v0),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v1 = COERCE_AS(__typeof__(v1),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return *(float*)&v4;
}

#pragma GCC visibility pop
