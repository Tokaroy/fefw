#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_654050_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_654050");
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
__attribute__((swiftcall)) void
    LegionGambitCamera_e59fd0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_f31720(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CalculateAllocatedSizeHeap_5c7400(__int64, __int64, __int64*);
__int64 CharacterTrailModule_d3c310(__int64);
__int64 FloatingHelp_18ac7f0(void);
__int64 GameHr_112e290(_QWORD);
__int64 GameHr_15651c0(_QWORD);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_13140f0(__int64 result);
__int64 GameRoutine_15e1350(_QWORD);
__int64 GameRoutine_17b7d20(_QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c7e20(__int64);
__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_66ae00(__int64 result);
__int64 GameRoutine_8ecf00(__int64 result, __int64);
__int64 LayoutArchive_13669e0(_QWORD);
__int64 Manager_130e260(__int64);
__int64 Manager_130f220(__int64);
__int64 Manager_130f9a0(__int64);
__int64 Manager_13114c0(__int64 result);
__int64 ProcLoadingSeq_9b84e0(_QWORD);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 RenderTask_136a130(_QWORD);
__int64 SimpleTelopImpl_17c9530(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a1b00(__int64*, float);
__int64 game_15d1d80(_QWORD);
__int64 game_1735b60(_QWORD);
__int64 game_173df20(_QWORD);
__int64 game_19ef080(_QWORD);
__int64 game_f2f4e0(__int64 result);
__int64 game_gameui_1569ce0(_QWORD);
__int64 game_gameui_17aa8e0(void);
__int64 game_gameui_18a2660(void);
__int64 game_gameui_19aeaf0(void);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_prepo_Array_Clear(__int64);
__int64 nn_prepo_PlayReport_Add_1a0ae20(__int64, const char*, __int64);
__int64 nn_prepo_PlayReport_GetCount(__int64);
__int64 nn_prepo_PlayReport_Save(__int64, __int64);
__int64 nn_prepo_PlayReport_SetEventId(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _DWORD* GameData_212d8a0;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64 (*GameData_1fa94c8[])();
extern __int64 (*GameData_1fa9548[])();
extern __int64 (*GameData_1fa95c8[])();
extern __int64 (*GameData_1fa9648[])();
extern __int64 (*GameData_1fa96c8[])();
extern __int64 (*GameData_1fe6e10[])();
extern __int64 (*GameData_1fe6e60[])();
extern __int64 (*GameData_1fe6eb0[])();
extern __int64 (*GameData_2025c18[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d898;
extern __int64* GameData_212ee40[2];
extern __int64* GameData_212ee68[4];
extern __int64* GameData_212f7d8[3];
extern __int64* GameData_212f878;
extern __int64* GameData_21320a8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_212da38;
extern __int64 GameData_2136448[3];
extern __int64 GameData_21c9668;
extern __int64 GameData_2240f18;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern int* GameData_21320b0[8];
extern int GameData_21d87e8;
extern int GameData_21d87f8;
float log10f(float);
float powf(float, float);
float32x4_t game_10be1a0(__int64, __int64);
int __cxa_guard_acquire(__int64);
struct PseudoSret TextTagProcessor_1908c60(_QWORD, _QWORD);
struct PseudoSret TextTagProcessor_1908f00(_QWORD, _QWORD);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CharacterTrailModule_d3b6a0(__int64);
void GameRoutine_1311810(__int64);
void GameRoutine_1311ce0(__int64);
void GameRoutine_1312b50(__int64);
void Manager_130fb60(__int64);
void Manager_130fdc0(__int64);
void Manager_13122a0(__int64);
void Manager_1312e60(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d38e30();
void __attribute__((noreturn)) GameRoutine_e5aa20();
void __cxa_guard_release(__int64);
void game_playreport_13108c0(__int64, _QWORD*);
void game_playreport_Manager_ReportReliance(__int64);
void nn_diag_detail_AbortImpl_1a0a590();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void nn_prepo_PlayReport_Clear(__int64);
__int64 memory_177800(__int64 a1, __int64 a2, int* a3);
__int64 memory_5c65e0(__int64 result, __int64 a2);
__int64 memory_5c6e20(__int64 a1, __int64 a2, __int64* a3);
_QWORD* memory_8b4c00();
__int64 memory_c0df60(__int64 result);
void memory_d3c160(__int64 a1);
__int64 memory_e59440(__int64 a1, __int64 a2);
void memory_f43d50(__int64 a1);
void memory_130dae0(__int64 a1, __int64 a2);

__int64 memory_177800(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v9;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  float v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  float* v36;
  float v37;
  float v38;
  float v39;
  float v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  float v46;
  float* v47;
  float v48;
  float v49;
  float v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  float v58;
  float v59;
  float v60;
  float v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  float v67;
  float* v68;
  float v69;
  float v70;
  float v71;
  int v72;
  int v73;
  float* v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float* v84;
  __int64 v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float* v94;
  __int64 v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  float* v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float* v114;
  __int64 v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  __int64 v124;
  float* v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  v5 = v3 / v4;
  if (v3 % v4 != 0) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  if (v5 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  nn_os_LockMutex(a1 + 6304);
  v9 = *a3;
  if (v5 >= 1 && v9 >= 1) {
    v11 = 0;
    do {
      if (v9 >= 1) {
        v12 = 0;
        v13 = a2 + 4LL * v9 * a3[3] * v11;
        do {
          v14 = *(_DWORD*)(v13 + 4 * v12++);
          v15 = *(float**)(*(_QWORD*)(a1 + 104) + 8LL);
          v16 = (float)v14;
          v17 = v15[7];
          v18 = v15[9];
          v19 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v17 * v15[5])) +
                                        (float)(v15[4] * v16)) +
                                (float)(v15[6] * v15[8])) -
                        (float)(v15[2] * v18)) -
                (float)(v15[3] * v15[10]);
          *(float*)(a1 + 112 + 4LL * *(int*)(a1 + 1136)) =
              vcvts_n_f32_s32((int)v19, 0xFu);
          v20 = *(_DWORD*)(a1 + 1136);
          if (v20 <= 254) {
            v21 = v20 + 1;
          }
          else {
            v21 = 0;
          }
          *(_DWORD*)(a1 + 1136) = v21;
          v15[7] = v16;
          v15[8] = v17;
          v15[9] = v19;
          v15[10] = v18;
          v9 = *a3;
        } while (v12 < *a3);
        if (v9 >= 1) {
          v22 = v13 + 4LL * v9;
          v23 = 0;
          do {
            v24 = *(_DWORD*)(v22 + 4 * v23++);
            v25 = (float)v24;
            v26 = *(float**)(*(_QWORD*)(a1 + 104) + 8LL);
            v27 = v26[11];
            v28 = v26[13];
            v29 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v27 * v26[5])) +
                                        (float)(v26[4] * v25)) +
                                (float)(v26[6] * v26[12])) -
                        (float)(v26[2] * v28)) -
                (float)(v26[3] * v26[14]);
            *(float*)(a1 + 3208 + 4LL * *(int*)(a1 + 4232)) =
                vcvts_n_f32_s32((int)v29, 0xFu);
            v30 = *(_DWORD*)(a1 + 4232);
            if (v30 <= 254) {
              v31 = v30 + 1;
            }
            else {
              v31 = 0;
            }
            *(_DWORD*)(a1 + 4232) = v31;
            v26[11] = v25;
            v26[12] = v27;
            v26[13] = v29;
            v26[14] = v28;
          } while (v23 < *a3);
          v9 = *a3;
        }
      }
      ++v11;
    } while (v11 != v5);
    if (v9 >= 1) {
      v32 = 0;
      do {
        if (v9 >= 1) {
          v33 = 0;
          v34 = a2 + 4LL * v9 * a3[3] * v32;
          do {
            v35 = *(_DWORD*)(v34 + 4 * v33++);
            v36 = *(float**)(*(_QWORD*)(a1 + 104) + 16LL);
            v37 = (float)v35;
            v38 = v36[7];
            v39 = v36[9];
            v40 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v38 * v36[5])) +
                                        (float)(v36[4] * v37)) +
                                (float)(v36[6] * v36[8])) -
                        (float)(v36[2] * v39)) -
                (float)(v36[3] * v36[10]);
            *(float*)(a1 + 1144 + 4LL * *(int*)(a1 + 2168)) =
                vcvts_n_f32_s32((int)v40, 0xFu);
            v41 = *(_DWORD*)(a1 + 2168);
            if (v41 <= 254) {
              v42 = v41 + 1;
            }
            else {
              v42 = 0;
            }
            *(_DWORD*)(a1 + 2168) = v42;
            v36[7] = v37;
            v36[8] = v38;
            v36[9] = v40;
            v36[10] = v39;
            v9 = *a3;
          } while (v33 < *a3);
          if (v9 >= 1) {
            v43 = v34 + 4LL * v9;
            v44 = 0;
            do {
              v45 = *(_DWORD*)(v43 + 4 * v44++);
              v46 = (float)v45;
              v47 = *(float**)(*(_QWORD*)(a1 + 104) + 16LL);
              v48 = v47[11];
              v49 = v47[13];
              v50 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v48 *
                                                                   v47[5])) +
                                            (float)(v47[4] * v46)) +
                                    (float)(v47[6] * v47[12])) -
                            (float)(v47[2] * v49)) -
                    (float)(v47[3] * v47[14]);
              *(float*)(a1 + 4240 + 4LL * *(int*)(a1 + 5264)) =
                  vcvts_n_f32_s32((int)v50, 0xFu);
              v51 = *(_DWORD*)(a1 + 5264);
              if (v51 <= 254) {
                v52 = v51 + 1;
              }
              else {
                v52 = 0;
              }
              *(_DWORD*)(a1 + 5264) = v52;
              v47[11] = v46;
              v47[12] = v48;
              v47[13] = v50;
              v47[14] = v49;
            } while (v44 < *a3);
            v9 = *a3;
          }
        }
        ++v32;
      } while (v32 != v5);
    }
    if (v9 >= 1) {
      v53 = 0;
      LODWORD(v54) = v9;
      do {
        if ((int)v54 >= 1) {
          v55 = 0;
          v56 = a2 + 4LL * (int)v54 * a3[3] * v53;
          do {
            v57 = *(_DWORD*)(v56 + 4 * v55++);
            v54 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL);
            v58 = (float)v57;
            v59 = *(float*)(v54 + 28);
            v60 = *(float*)(v54 + 36);
            v61 = (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                              v59 * *(float*)(v54 + 20))) +
                                          (float)(*(float*)(v54 + 16) * v58)) +
                                  (float)(*(float*)(v54 + 24) *
                                          *(float*)(v54 + 32))) -
                          (float)(*(float*)(v54 + 8) * v60)) -
                  (float)(*(float*)(v54 + 12) * *(float*)(v54 + 40));
            *(float*)(a1 + 2176 + 4LL * *(int*)(a1 + 3200)) =
                vcvts_n_f32_s32((int)v61, 0xFu);
            v62 = *(_DWORD*)(a1 + 3200);
            if (v62 <= 254) {
              v63 = v62 + 1;
            }
            else {
              v63 = 0;
            }
            *(_DWORD*)(a1 + 3200) = v63;
            *(float*)(v54 + 28) = v58;
            *(float*)(v54 + 32) = v59;
            *(float*)(v54 + 36) = v61;
            *(float*)(v54 + 40) = v60;
            LODWORD(v54) = *a3;
          } while (v55 < *a3);
          if ((int)v54 >= 1) {
            v64 = v56 + 4LL * (int)v54;
            v65 = 0;
            do {
              v66 = *(_DWORD*)(v64 + 4 * v65++);
              v67 = (float)v66;
              v68 = *(float**)(*(_QWORD*)(a1 + 104) + 24LL);
              v69 = v68[11];
              v70 = v68[13];
              v71 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v69 *
                                                                   v68[5])) +
                                            (float)(v68[4] * v67)) +
                                    (float)(v68[6] * v68[12])) -
                            (float)(v68[2] * v70)) -
                    (float)(v68[3] * v68[14]);
              *(float*)(a1 + 5272 + 4LL * *(int*)(a1 + 6296)) =
                  vcvts_n_f32_s32((int)v71, 0xFu);
              v72 = *(_DWORD*)(a1 + 6296);
              if (v72 <= 254) {
                v73 = v72 + 1;
              }
              else {
                v73 = 0;
              }
              *(_DWORD*)(a1 + 6296) = v73;
              v68[11] = v67;
              v68[12] = v69;
              v68[13] = v71;
              v68[14] = v70;
              v54 = *a3;
            } while (v65 < v54);
          }
        }
        ++v53;
      } while (v53 != v5);
    }
  }
  v74 = (float*)(a1 + 172);
  v75 = 255;
  v76 = *(float*)(a1 + 112) * *(float*)(a1 + 112);
  do {
    v75 -= 15;
    v77 = *(v74 - 5);
    v78 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v76 + (float)(*(v74 - 14) * *(v74 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 13) * *(v74 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 12) * *(v74 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v74 - 11) * *(v74 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v74 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v74 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v74 -
                                                                                                                                           9) *
                                                                                                                                         *(v74 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v74 -
                                                                                                            8) *
                                                                                                          *(v74 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v74 -
                                                                          7) *
                                                                        *(v74 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v74 - 6) *
                                                            *(v74 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v77 * v77)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v74 - 4) * *(v74 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v74 - 3) * *(v74 - 3));
    v79 = *(v74 - 1);
    v80 = (float)(PSEUDO_UNFUSED(v78 * 0x1.0000000000000p-1f)) +
          (float)(*(v74 - 2) * *(v74 - 2));
    v81 = *v74;
    v74 += 15;
    v76 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v80 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v79 * v79)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v81 * v81)) *
          0x1.0000000000000p-1f;
  } while (v75 != 0);
  v82 = sqrtf(v76);
  if (v82 == 0x0.0p+0f) {
    v83 = -0x1.9000000000000p+6f;
  }
  else {
    v83 = log10f(v82) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 1140) = v83;
  v84 = (float*)(a1 + 3268);
  v85 = 255;
  v86 = *(float*)(a1 + 3208) * *(float*)(a1 + 3208);
  do {
    v85 -= 15;
    v87 = *(v84 - 5);
    v88 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v86 + (float)(*(v84 - 14) * *(v84 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 13) * *(v84 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 12) * *(v84 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v84 - 11) * *(v84 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v84 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v84 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v84 -
                                                                                                                                           9) *
                                                                                                                                         *(v84 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v84 -
                                                                                                            8) *
                                                                                                          *(v84 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v84 -
                                                                          7) *
                                                                        *(v84 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v84 - 6) *
                                                            *(v84 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v87 * v87)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v84 - 4) * *(v84 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v84 - 3) * *(v84 - 3));
    v89 = *(v84 - 1);
    v90 = (float)(PSEUDO_UNFUSED(v88 * 0x1.0000000000000p-1f)) +
          (float)(*(v84 - 2) * *(v84 - 2));
    v91 = *v84;
    v84 += 15;
    v86 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v90 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v89 * v89)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v91 * v91)) *
          0x1.0000000000000p-1f;
  } while (v85 != 0);
  v92 = sqrtf(v86);
  if (v92 == 0x0.0p+0f) {
    v93 = -0x1.9000000000000p+6f;
  }
  else {
    v93 = log10f(v92) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 4236) = v93;
  v94 = (float*)(a1 + 1204);
  v95 = 255;
  v96 = *(float*)(a1 + 1144) * *(float*)(a1 + 1144);
  do {
    v95 -= 15;
    v97 = *(v94 - 5);
    v98 = (float)(PSEUDO_UNFUSED(
              (
                  float)((float)(PSEUDO_UNFUSED(
                             (
                                 float)((float)(PSEUDO_UNFUSED(
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        (float)((float)(PSEUDO_UNFUSED((
                                                                                           float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v96 + (float)(*(v94 - 14) * *(v94 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 13) * *(v94 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 12) * *(v94 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v94 - 11) * *(v94 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v94 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          *(v94 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            10))) *
                                                                                                                                                        0x1.0000000000000p-1f)) +
                                                                                                                                 (float)(*(v94 -
                                                                                                                                           9) *
                                                                                                                                         *(v94 -
                                                                                                                                           9))) *
                                                                                                                         0x1.0000000000000p-1f)) +
                                                                                                  (float)(*(v94 -
                                                                                                            8) *
                                                                                                          *(v94 -
                                                                                                            8))) *
                                                                                       0x1.0000000000000p-1f)) +
                                                                (float)(*(v94 -
                                                                          7) *
                                                                        *(v94 -
                                                                          7))) *
                                                        0x1.0000000000000p-1f)) +
                                                    (float)(*(v94 - 6) *
                                                            *(v94 - 6))) *
                                            0x1.0000000000000p-1f)) +
                                        (float)(v97 * v97)) *
                             0x1.0000000000000p-1f)) +
                         (float)(*(v94 - 4) * *(v94 - 4))) *
              0x1.0000000000000p-1f)) +
          (float)(*(v94 - 3) * *(v94 - 3));
    v99 = *(v94 - 1);
    v100 = (float)(PSEUDO_UNFUSED(v98 * 0x1.0000000000000p-1f)) +
           (float)(*(v94 - 2) * *(v94 - 2));
    v101 = *v94;
    v94 += 15;
    v96 = (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED(v100 *
                                                     0x1.0000000000000p-1f)) +
                              (float)(v99 * v99)) *
                      0x1.0000000000000p-1f)) +
                  (float)(v101 * v101)) *
          0x1.0000000000000p-1f;
  } while (v95 != 0);
  v102 = sqrtf(v96);
  if (v102 == 0x0.0p+0f) {
    v103 = -0x1.9000000000000p+6f;
  }
  else {
    v103 = log10f(v102) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 2172) = v103;
  v104 = 255;
  v105 = (float*)(a1 + 4300);
  v106 = *(float*)(a1 + 4240) * *(float*)(a1 + 4240);
  do {
    v104 -= 15;
    v107 = *(v105 - 5);
    v108 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v106 + (float)(*(v105 - 14) * *(v105 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 13) * *(v105 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 12) * *(v105 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v105 - 11) * *(v105 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v105 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v105 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v105 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v105 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v105 -
                                                                                                                    8) *
                                                                                                                  *(v105 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v105 -
                                                                                     7) *
                                                                                   *(v105 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v105 - 6) *
                                                    *(v105 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v107 * v107)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v105 - 4) * *(v105 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v105 - 3) * *(v105 - 3));
    v109 = *(v105 - 1);
    v110 = (float)(PSEUDO_UNFUSED(v108 * 0x1.0000000000000p-1f)) +
           (float)(*(v105 - 2) * *(v105 - 2));
    v111 = *v105;
    v105 += 15;
    v106 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v110 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v109 * v109)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v111 * v111)) *
           0x1.0000000000000p-1f;
  } while (v104 != 0);
  v112 = sqrtf(v106);
  if (v112 == 0x0.0p+0f) {
    v113 = -0x1.9000000000000p+6f;
  }
  else {
    v113 = log10f(v112) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 5268) = v113;
  v114 = (float*)(a1 + 2236);
  v115 = 255;
  v116 = *(float*)(a1 + 2176) * *(float*)(a1 + 2176);
  do {
    v115 -= 15;
    v117 = *(v114 - 5);
    v118 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v116 + (float)(*(v114 - 14) * *(v114 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 13) * *(v114 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 12) * *(v114 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v114 - 11) * *(v114 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v114 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v114 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v114 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v114 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v114 -
                                                                                                                    8) *
                                                                                                                  *(v114 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v114 -
                                                                                     7) *
                                                                                   *(v114 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v114 - 6) *
                                                    *(v114 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v117 * v117)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v114 - 4) * *(v114 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v114 - 3) * *(v114 - 3));
    v119 = *(v114 - 1);
    v120 = (float)(PSEUDO_UNFUSED(v118 * 0x1.0000000000000p-1f)) +
           (float)(*(v114 - 2) * *(v114 - 2));
    v121 = *v114;
    v114 += 15;
    v116 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v120 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v119 * v119)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v121 * v121)) *
           0x1.0000000000000p-1f;
  } while (v115 != 0);
  v122 = sqrtf(v116);
  if (v122 == 0x0.0p+0f) {
    v123 = -0x1.9000000000000p+6f;
  }
  else {
    v123 = log10f(v122) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 3204) = v123;
  v124 = 255;
  v125 = (float*)(a1 + 5332);
  v126 = *(float*)(a1 + 5272) * *(float*)(a1 + 5272);
  do {
    v124 -= 15;
    v127 = *(v125 - 5);
    v128 =
        (float)(PSEUDO_UNFUSED(
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED(
                                                                                                                                             (float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)((float)(PSEUDO_UNFUSED((float)(v126 + (float)(*(v125 - 14) * *(v125 - 14))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 13) * *(v125 - 13))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 12) * *(v125 - 12))) * 0x1.0000000000000p-1f)) + (float)(*(v125 - 11) * *(v125 - 11))) * 0x1.0000000000000p-1f)) + (float)(*(v125 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        *(v125 -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          10))) *
                                                                                                                                             0x1.0000000000000p-1f)) +
                                                                                                                                         (float)(*(v125 -
                                                                                                                                                   9) *
                                                                                                                                                 *(v125 -
                                                                                                                                                   9))) *
                                                                                                                                 0x1.0000000000000p-1f)) +
                                                                                                          (float)(*(v125 -
                                                                                                                    8) *
                                                                                                                  *(v125 -
                                                                                                                    8))) *
                                                                                                  0x1.0000000000000p-1f)) +
                                                                           (float)(*(v125 -
                                                                                     7) *
                                                                                   *(v125 -
                                                                                     7))) *
                                                                   0x1.0000000000000p-1f)) +
                                            (float)(*(v125 - 6) *
                                                    *(v125 - 6))) *
                                    0x1.0000000000000p-1f)) +
                                (float)(v127 * v127)) *
                        0x1.0000000000000p-1f)) +
                    (float)(*(v125 - 4) * *(v125 - 4))) *
            0x1.0000000000000p-1f)) +
        (float)(*(v125 - 3) * *(v125 - 3));
    v129 = *(v125 - 1);
    v130 = (float)(PSEUDO_UNFUSED(v128 * 0x1.0000000000000p-1f)) +
           (float)(*(v125 - 2) * *(v125 - 2));
    v131 = *v125;
    v125 += 15;
    v126 = (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v130 *
                                                      0x1.0000000000000p-1f)) +
                               (float)(v129 * v129)) *
                       0x1.0000000000000p-1f)) +
                   (float)(v131 * v131)) *
           0x1.0000000000000p-1f;
  } while (v124 != 0);
  v132 = sqrtf(v126);
  if (v132 == 0x0.0p+0f) {
    v133 = -0x1.9000000000000p+6f;
  }
  else {
    v133 = log10f(v132) * 0x1.4000000000000p+4f;
  }
  *(float*)(a1 + 6300) = v133;
  return nn_os_UnlockMutex(a1 + 6304);
}

__int64 memory_5c65e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _QWORD v32[2];

  v2 = *(unsigned int*)(a2 + 8);
  v3 = result;
  if ((_DWORD)v2 == -1) {
    *(_DWORD*)(result + 104) = 0;
  LABEL_33:
    *(_QWORD*)(result + 112) = 0;
    *(_QWORD*)(result + 120) = 0;
    return result;
  }
  v4 = (_DWORD*)(a2 + v2);
  v6 = 0;
  do {
    v7 = (unsigned int)v4[3];
    if (*v4 == 1296650832) {
      ++v6;
    }
    v4 = (_DWORD*)((char*)v4 + v7);
  } while ((_DWORD)v7 != -1);
  *(_DWORD*)(result + 104) = v6;
  if (v6 == 0) {
    goto LABEL_33;
  }
  v8 = 152LL * v6 + 32;
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(result + 1112) + 16LL))(*(_QWORD*)(result + 1112), v8, 128);
  v10 = *(_QWORD*)(v3 + 1120);
  v11 = *(_DWORD*)(v3 + 104);
  *(_QWORD*)(v3 + 112) = v9;
  *(_QWORD*)(v3 + 1120) = v10 + v8;
  ++*(_DWORD*)(v3 + 1128);
  if (v11 != 0) {
    v12 = GameData_2136448[0];
    v13 = 152LL * v11 - 152;
    v14 = v9;
    if ((~(v13 / 0x98) & 7) != 0) {
      v15 = ((unsigned __int8)(v13 / 0x98) + 1) & 7;
      v14 = v9;
      do {
        *(_QWORD*)v14 = v12 + 16;
        *(_BYTE*)(v14 + 8) = 0;
        --v15;
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        v14 += 152;
      } while (v15 != 0);
    }
    if (v13 >= 0x428) {
      v16 = v9 + 152LL * v11;
      v17 = v12 + 16;
      do {
        *(_QWORD*)v14 = v17;
        *(_BYTE*)(v14 + 8) = 0;
        v18 = (_QWORD*)(v14 + 316);
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        *(_QWORD*)(v14 + 152) = v17;
        *(_BYTE*)(v14 + 160) = 0;
        *(_QWORD*)(v14 + 164) = 0;
        *(_QWORD*)(v14 + 172) = 0;
        *(_QWORD*)(v14 + 180) = 0;
        *(_QWORD*)(v14 + 188) = 0;
        *(_QWORD*)(v14 + 196) = 0;
        *(_QWORD*)(v14 + 204) = 0;
        *(_QWORD*)(v14 + 212) = 0;
        *(_QWORD*)(v14 + 220) = 0;
        *(_QWORD*)(v14 + 228) = 0;
        *(_DWORD*)(v14 + 236) = 0;
        *(_QWORD*)(v14 + 304) = v17;
        *(_BYTE*)(v14 + 312) = 0;
        *(_DWORD*)(v14 + 388) = 0;
        *(_QWORD*)(v14 + 456) = v17;
        *(_BYTE*)(v14 + 464) = 0;
        *(_DWORD*)(v14 + 540) = 0;
        *(_QWORD*)(v14 + 608) = v17;
        *(_BYTE*)(v14 + 616) = 0;
        *(_DWORD*)(v14 + 692) = 0;
        *(_QWORD*)(v14 + 760) = v17;
        *(_BYTE*)(v14 + 768) = 0;
        *(_DWORD*)(v14 + 844) = 0;
        *(_QWORD*)(v14 + 912) = v17;
        *(_BYTE*)(v14 + 920) = 0;
        *(_DWORD*)(v14 + 996) = 0;
        *(_QWORD*)(v14 + 1064) = v17;
        *(_BYTE*)(v14 + 1072) = 0;
        *(_DWORD*)(v14 + 1148) = 0;
        v14 += 1216;
        *v18 = 0;
        v18[1] = 0;
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[40] = 0;
        v18[41] = 0;
        v18[42] = 0;
        v18[43] = 0;
        v18[44] = 0;
        v18[45] = 0;
        v18[46] = 0;
        v18[57] = 0;
        v18[58] = 0;
        v18[59] = 0;
        v18[60] = 0;
        v18[61] = 0;
        v18[62] = 0;
        v18[63] = 0;
        v18[64] = 0;
        v18[65] = 0;
        v18[84] = 0;
        v18[83] = 0;
        v18[82] = 0;
        v18[81] = 0;
        v18[80] = 0;
        v18[79] = 0;
        v18[78] = 0;
        v18[77] = 0;
        v18[76] = 0;
        v18[103] = 0;
        v18[102] = 0;
        v18[101] = 0;
        v18[100] = 0;
        v18[99] = 0;
        v18[98] = 0;
        v18[97] = 0;
        v18[96] = 0;
        v18[95] = 0;
      } while (v14 != v16);
    }
  }
  *(_QWORD*)(v3 + 120) = v9;
  v19 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v19 == -1) {
  LABEL_18:
    v20 = nullptr;
  }
  else {
    v20 = (_DWORD*)(a2 + v19);
    while (*v20 != 1296650832) {
      v21 = (unsigned int)v20[3];
      v20 = (_DWORD*)((char*)v20 + v21);
      if ((_DWORD)v21 == -1) {
        goto LABEL_18;
      }
    }
  }
  v22 = *(__int64**)(v3 + 16);
  v32[0] = 0;
  v32[1] = 0;
  GameRoutine_5fc180(v32);
  HIDWORD(v32[0]) = 4;
  v23 = GameHr_5fc7e0(v22, (__int64)v32);
  v24 = 0;
  if (v20 != nullptr) {
    v25 = v23 - 1;
    v26 = -v23;
    v27 = (__int64)v20;
    do {
      v24 += (v25 + GameRoutine_5c7e20(v27)) & v26;
      v28 = *(unsigned int*)(v27 + 12);
      v27 += v28;
    } while ((_DWORD)v28 != -1);
  }
  if ((GameHr_5ded80(v3 + 672, *(__int64**)(v3 + 16), v3 + 1104, 4, v24) & 1) !=
      0) {
    RectDrawer_5fcbc0(v3 + 672, (__int64*)(v3 + 1072));
  }
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1096) = GameRoutine_5fcb50(v3 + 672);
  if (v20 != nullptr) {
    v29 = 0;
    v30 = 0;
    if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120), v3 + 672, (__int64)v20) &
         1) == 0) {
      goto LABEL_28;
    }
    while (1) {
      *(_QWORD*)(v3 + 224) += (unsigned int)v20[1];
      v31 = (unsigned int)v20[3];
      if ((_DWORD)v31 == -1) {
        break;
      }
      while (1) {
        v20 = (_DWORD*)((char*)v20 + v31);
        ++v30;
        v29 += 152;
        if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120) + v29, v3 + 672,
                                (__int64)v20) &
             1) != 0) {
          break;
        }
      LABEL_28:
        GameRoutine_5c02c0("Faild to initialize primitive: Index %d \n", v30);
        v31 = (unsigned int)v20[3];
        if ((_DWORD)v31 == -1) {
          goto LABEL_31;
        }
      }
    }
  }
LABEL_31:
  GameRoutine_5fcb80(v3 + 672);
  return GameRoutine_5fcb70(v3 + 672);
}

__int64 memory_5c6e20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  _DWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;

  v3 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v3 == -1) {
    v8 = 0;
  }
  else {
    v7 = (_DWORD*)(a2 + v3);
    v8 = 0;
    do {
      v9 = (unsigned int)v7[3];
      if (*v7 == 1413829445) {
        ++v8;
      }
      v7 = (_DWORD*)((char*)v7 + v9);
    } while ((_DWORD)v9 != -1);
  }
  v10 = *(_QWORD*)(a1 + 1112);
  *(_DWORD*)(a1 + 76) = v8;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
      v10, 56LL * v8, 128);
  v12 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 88) = v11;
  *(_QWORD*)(a1 + 1120) = v12 + 56LL * v8;
  ++*(_DWORD*)(a1 + 1128);
  memset(v11, 0, 56LL * *(int*)(a1 + 76));
  v16 = *(int*)(a1 + 76);
  v17 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 1112) + 16LL))(*(_QWORD*)(a1 + 1112), 8 * v16, 128);
  v18 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 96) = v17;
  *(_QWORD*)(a1 + 1120) = v18 + 8 * v16;
  ++*(_DWORD*)(a1 + 1128);
  result = memset(v17, 0, 8LL * *(int*)(a1 + 76));
  v23 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v23 != -1) {
    v24 = (_DWORD*)(a2 + v23);
    while (*v24 != 1413829445) {
      v25 = (unsigned int)v24[3];
      v24 = (_DWORD*)((char*)v24 + v25);
      if ((_DWORD)v25 == -1) {
        return result;
      }
    }
    v26 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL * v26 + 8) = v24;
      result = CalculateAllocatedSizeHeap_5c7400(
          a1, *(_QWORD*)(a1 + 88) + 56LL * v26, a3);
      v27 = (unsigned int)v24[3];
      ++v26;
      v24 = (_DWORD*)((char*)v24 + v27);
    } while ((_DWORD)v27 != -1);
  }
  return result;
}

_QWORD* memory_8b4c00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* result;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD v30[4];
  _QWORD* v31;
  _QWORD v32[4];
  _QWORD* v33;
  _QWORD v34[4];
  _QWORD* v35;

  RenderTask_136a130(ui_Manager_instance_ + 1264);
  LayoutArchive_13669e0("Layout/Common.arc");
  LayoutArchive_13669e0("Layout/CommonMenu.arc");
  v0 = LayoutArchive_13669e0("Layout/Hub.arc");
  game_15d1d80(v0);
  v34[0] = GameData_1fa94c8;
  v35 = v34;
  *(struct PseudoSret*)(v32) =
      TextTagProcessor_1908f00(ui_Manager_instance_ + 6528, v34);
  if (v33 == v32) {
    v1 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v33 + v1))((__int64)v33);
LABEL_6:
  if (v35 == v34) {
    v2 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v35 + v2))((__int64)v35);
LABEL_11:
  v34[0] = GameData_1fa9548;
  v35 = v34;
  *(struct PseudoSret*)(v30) =
      TextTagProcessor_1908c60(ui_Manager_instance_ + 6528, v34);
  if (v31 == v30) {
    v3 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_16;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v31 + v3))((__int64)v31);
LABEL_16:
  if (v35 == v34) {
    v4 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_21;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v35 + v4))((__int64)v35);
LABEL_21:
  v5 = GameData_212c628;
  GameRoutine_15e1350(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628));
  game_1735b60(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  game_173df20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  game_gameui_1569ce0(*v5);
  GameHr_15651c0(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0) {
    GameRoutine_17b7d20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  }
  SimpleTelopImpl_17c9530(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v7[14] = 0;
  v7[15] = 0;
  v8 = GameData_212d898;
  if (*GameData_212d898 == 0) {
    *GameData_212d8a0 = 1;
  }
  v9 = GameData_212da38;
  v7[8] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[6] = 0;
  v7[7] = v7 + 8;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  *((_DWORD*)v7 + 28) = 1065353216;
  v7[15] = 0;
  v7[16] = 0;
  v7[17] = 0;
  *v8 = (__int64)v7;
  *v7 = v9 + 16;
  v7[1] = v9 + 72;
  game_gameui_18a2660();
  v10 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  game_gameui_17aa8e0();
  v11 = *v6;
  *(_QWORD*)GameData_212d8a8[0] = v10;
  v12 = fw_memory_HeapManager_Allocate(v11, 288, 16, 0);
  v13 = (__int64*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    *GameData_21320b0[0] = 1;
  }
  v14 = GameData_21320a8;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_DWORD*)(v12 + 112) = 1065353216;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *v13 = v12;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = v12 + 64;
  *(_QWORD*)v12 = v14 + 2;
  *(_QWORD*)(v12 + 8) = v14 + 9;
  *(_QWORD*)(v12 + 248) = 0xFFFFFFFFLL;
  *(_DWORD*)(v12 + 255) = 0;
  *(_QWORD*)(v12 + 268) = 0;
  *(_QWORD*)(v12 + 276) = 0;
  *(_QWORD*)(v12 + 260) = 0;
  FloatingHelp_18ac7f0();
  v15 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  game_gameui_19aeaf0();
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  *(_QWORD*)GameData_212d6e0[0] = v15;
  v17 = game_19ef080(v16);
  v18 = GameHr_112e290(v17);
  ProcLoadingSeq_9b84e0(v18);
  v19 = v28;
  v28[0] = GameData_1fa95c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
    goto LABEL_36;
  }
  v34[0] = GameData_1fa95c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178);
  if (v35 == v34) {
    v20 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_33;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v20))(v35);
LABEL_33:
  v19 = v29;
  if (v29 == v28) {
  LABEL_36:
    v21 = 32;
    goto LABEL_37;
  }
  if (v29 != nullptr) {
    v21 = 40;
  LABEL_37:
    (*(void (**)(_QWORD*))(*v19 + v21))(v19);
  }
  v22 = v28;
  v28[0] = GameData_1fa9648;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_47:
    v24 = 32;
    goto LABEL_48;
  }
  v34[0] = GameData_1fa9648;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 48);
  if (v35 == v34) {
    v23 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_44;
    }
    v23 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v23))(v35);
LABEL_44:
  v22 = v29;
  if (v29 == v28) {
    goto LABEL_47;
  }
  if (v29 == nullptr) {
    goto LABEL_49;
  }
  v24 = 40;
LABEL_48:
  (*(void (**)(_QWORD*))(*v22 + v24))(v22);
LABEL_49:
  result = v28;
  v28[0] = GameData_1fa96c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_58:
    v27 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
  }
  v34[0] = GameData_1fa96c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 96);
  if (v35 == v34) {
    v26 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_55;
    }
    v26 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v26))(v35);
LABEL_55:
  result = v29;
  if (v29 == v28) {
    goto LABEL_58;
  }
  if (v29 == nullptr) {
    return result;
  }
  v27 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
}

__int64 memory_c0df60(__int64 result)
{
  __int64 v1;
  bool v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;

  v1 = *(_QWORD*)(result + 8);
  v2 = false;
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    if ((*(_BYTE*)(v1 + 300) & 0xFD) == 1) {
      v2 = false;
    }
    else {
      do {
        v1 = *(_QWORD*)(v1 + 736);
        v2 = v1 == 0;
      } while (v1 != 0 && *(_BYTE*)(v1 + 289) == 1 &&
               *(_BYTE*)(v1 + 288) == 1 && (*(_BYTE*)(v1 + 300) & 0xFD) != 1);
    }
  }
  *(_BYTE*)(*(_QWORD*)(result + 24) + 32LL) = v2;
  v3 = *(float32x4_t**)(result + 8);
  v4 = *(float32x4_t*)(result + 96);
  v5 = *(float32x4_t*)(result + 112);
  v6 = *(float32x4_t**)(result + 24);
  v7 = v3[27];
  v8 = v3[28];
  v9 = v3[29];
  v10 = v3[30];
  LOBYTE(v3) = LANES128(v6[21]).n128_u8[0];
  v11 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, COERCE_FLOAT(*(_OWORD*)(result + 80))), v8,
                     *(float32x2_t*)(result + 80), 1),
      v9, *(float32x4_t*)(result + 80), 2);
  v6[17] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, COERCE_FLOAT(*(_OWORD*)(result + 64))), v8,
                     *(float32x2_t*)(result + 64), 1),
      v9, *(float32x4_t*)(result + 64), 2);
  v6[18] = v11;
  v6[19] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v4).n128_f32[0]), v8,
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1),
      v9, v4, 2);
  v6[20] = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v5).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]), 1),
          v9, v5, 2),
      v10);
  if (((unsigned __int8)v3 & 1) == 0) {
    LANES128(v6[21]).n128_u8[0] = 1;
  }
  *(_DWORD*)(*(_QWORD*)(result + 24) + 36LL) =
      *(_DWORD*)(*(_QWORD*)(result + 8) + 284LL);
  return result;
}

void memory_d3c160(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  float* v7;
  __int64 v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  long double v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;

  if ((CharacterTrailModule_d3c310(a1) & 1) == 0) {
    CharacterTrailModule_d3b6a0(a1);
    v2 = 0x0.0p+0f;
    v3 = 0x0.0p+0f;
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 96LL);
    if (v4 != 0) {
      v5 = GameRoutine_d2b5f0(*(_QWORD*)(v4 + 32) + 72LL);
      v3 = 0x0.0p+0f;
      if ((v5 & 0x100000000LL) != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 72LL) +
                        104LL * (int)v5);
        if (v6 != 0) {
          v7 = *(float**)(v6 + 16);
          if (v7 != nullptr) {
            v3 = *v7 * 0x1.1111120000000p-6f;
          }
        }
      }
    }
    *(float*)(a1 + 124) = v3;
    *(_BYTE*)(a1 + 128) = 1;
    if (*(_BYTE*)(a1 + 176) != 0) {
      v8 = *(_QWORD*)(a1 + 32);
      v2 = 0x1.0000000000000p+0f;
      v9 = *(float*)(v8 + 8) / 0x1.e000000000000p+5f;
      if (v3 > v9) {
        v10 = *(float*)(v8 + 32);
        v2 = 0x0.0p+0f;
        if (v10 > 0x0.0p+0f) {
          v2 = 0x1.0000000000000p+0f - (float)((float)(v3 - v9) / v10);
        }
      }
    }
    v11 = *(_QWORD*)(a1 + 224);
    *(float*)(a1 + 120) = v2;
    if (v11 != 0) {
      v20 = *(float32x4_t*)(a1 + 240);
      v12 = powf(v2, 0x1.8000000000000p+0f);
      v13 = *(long double*)&v20;
      HIDWORD(v13) = vmuls_lane_f32(v12, v20, 3);
      (*(void (**)(_QWORD, const char*, __int64, long double))(
          **(_QWORD**)(a1 + 224) + 56LL))(*(_QWORD*)(a1 + 224),
                                          "BaseColorMultiplier0", 20, v13);
      v14 = *(float*)(a1 + 256);
      v15 = 0x1.0000000000000p+0f;
      if (v14 <= 0x1.0000000000000p+0f) {
        v15 = *(float*)(a1 + 256);
      }
      v16 = v14 + -0x1.0000000000000p+0f;
      if (v16 >= 0x0.0p+0f) {
        v17 = v16;
      }
      else {
        v17 = 0x0.0p+0f;
      }
      v18 = *(float*)(a1 + 120);
      v19 =
          (float)(v18 * v15) + (float)(powf(v18, 0x1.0000000000000p+2f) * v17);
      (*(void (**)(_QWORD, const char*, __int64, float))(
          **(_QWORD**)(a1 + 224) + 16LL))(*(_QWORD*)(a1 + 224),
                                          "EmissionIntensity", 17, v19);
    }
  }
}

__int64 memory_e59440(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  unsigned int v9;
  _DWORD* v10;
  char v11;
  __int64 v12;
  __int64* v13;
  unsigned __int8* v14;
  __int64 v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  char v32;
  __int64 v33;
  unsigned __int8* v34;
  __int64 v35;
  int v36;
  unsigned __int8* v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  __int64 v44;
  unsigned __int64 v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int8* v56;
  __int64 v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  unsigned __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  int v73;
  unsigned __int8* v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int* v80;
  __int64 v81;
  unsigned __int64 v82;
  int v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  __int64* v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  _QWORD* v98;
  long double v99;
  __int64 v100;
  _QWORD* v101;
  __int64* v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  __int64 (**v106)();
  __int64 v107;
  __int64 result;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  char* v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  struct {
    __int64 (**v128)();
    __int64 v129;
  } v128_;
  struct {
    __int64 (**v130)();
    __int64 v131;
    unsigned __int8* v132;
    char gap56_[8];
    __int64 (***v133)();
  } v130_;

  *(_BYTE*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_WORD*)(a1 + 148) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 168) = 14;
  strcpy((char*)(a1 + 169), "no name");
  *(_WORD*)(a1 + 264) = 1;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0x3F00000042200000LL;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0x40F0000000000000LL;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 1064514355;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)a1 = a2;
  *(_BYTE*)(a1 + 266) = 1;
  v4 = fw_memory_HeapManager_Allocate_alt1(*v3, 208, 16, 0);
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)v4 = GameData_1fe6e10;
  v5 = GameData_212f7d8[0];
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 32) = v5 + 2;
  v6 = v4 + 32;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0x3F80000000000000LL;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v124 = v4;
    v125 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v4 = v124;
    if (v125 != 0) {
      v126 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v126;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v4 = v124;
    }
  }
  v7 = GameData_21a6120;
  v8 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_DWORD*)(v4 + 176) = 0;
  *(_QWORD*)(a1 + 40) = v6;
  *(_QWORD*)(a1 + 48) = v4;
  *(_OWORD*)(v4 + 112) = v7;
  *(_QWORD*)(v4 + 128) = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    v4 = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_DWORD*)(*(_QWORD*)a1 + 8LL);
  v10 = X8CALL_X0(
      void*, LegionGambitCamera_e59fd0((void*)(&v130_.v130), v4, v9, 1, 0));
  v11 = (char)v130_.v130;
  v12 = (__int64)v130_.v132;
  v13 = GameData_212ee68[0];
  if (((unsigned __int8)v130_.v130 & 1) != 0) {
    v14 = v130_.v132;
  }
  else {
    v14 = (unsigned __int8*)&v130_.v130 + 1;
  }
  if (v14 == nullptr) {
    goto LABEL_23;
  }
  v15 = *GameData_212ee68[0];
  v18 = *v14;
  v17 = v14 + 1;
  v16 = v18;
  if (v18 != 0) {
    v19 = 0;
    do {
      v19 = v16 - v19 + 32 * v19;
      v20 = *v17++;
      v16 = v20;
    } while (v20 != 0);
  }
  else {
    v19 = 0;
  }
  v21 = *(_QWORD*)(v15 + 8);
  v22 = *(_QWORD*)(v15 + 16) - v21;
  if (v22 == 0) {
    goto LABEL_23;
  }
  v23 = (int*)(v21 + 24);
  v24 = 0;
  v25 = 0x4EC4EC4EC4EC4EC5LL * (v22 >> 3);
  while (1) {
    v26 = *v23;
    v23 += 26;
    if (v19 == v26) {
      break;
    }
    if (v25 == ++v24) {
      goto LABEL_23;
    }
  }
  if (v24 < 1) {
  LABEL_23:
    v28 = nullptr;
    v29 = 0;
    if (((unsigned __int8)v130_.v130 & 1) == 0) {
      goto LABEL_28;
    }
  LABEL_24:
    if (v12 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v30, v12);
    }
    goto LABEL_28;
  }
  if (v25 <= (unsigned int)v24) {
    goto LABEL_167;
  }
  v27 = (__int64)v130_.v132;
  v10 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(*v3, 4, 16, 0);
  *v10 = 0;
  v28 = (char*)(v10 + 1);
  v29 = (__int64)v10;
  v12 = v27;
  if ((v11 & 1) != 0) {
    goto LABEL_24;
  }
LABEL_28:
  v31 = X8CALL_X0(
      void*, LegionGambitCamera_e59fd0((void*)(&v130_.v130), v10, v9, 1, 1));
  v32 = (char)v130_.v130;
  v33 = (__int64)v130_.v132;
  if (((unsigned __int8)v130_.v130 & 1) != 0) {
    v34 = v130_.v132;
  }
  else {
    v34 = (unsigned __int8*)&v130_.v130 + 1;
  }
  if (v34 == nullptr) {
    goto LABEL_53;
  }
  v35 = *v13;
  v38 = *v34;
  v37 = v34 + 1;
  v36 = v38;
  if (v38 != 0) {
    v39 = 0;
    do {
      v39 = v36 - v39 + 32 * v39;
      v40 = *v37++;
      v36 = v40;
    } while (v40 != 0);
  }
  else {
    v39 = 0;
  }
  v41 = *(_QWORD*)(v35 + 8);
  v42 = *(_QWORD*)(v35 + 16) - v41;
  if (v42 == 0) {
    goto LABEL_53;
  }
  v43 = (int*)(v41 + 24);
  v44 = 0;
  v45 = 0x4EC4EC4EC4EC4EC5LL * (v42 >> 3);
  while (1) {
    v46 = *v43;
    v43 += 26;
    if (v39 == v46) {
      break;
    }
    if (v45 == ++v44) {
      goto LABEL_53;
    }
  }
  if (v44 < 1) {
  LABEL_53:
    v52 = v28;
    v53 = v29;
    if (((unsigned __int8)v130_.v130 & 1) == 0) {
      goto LABEL_58;
    }
  LABEL_54:
    if (v33 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v33);
    }
    goto LABEL_58;
  }
  if (v45 <= (unsigned int)v44) {
    goto LABEL_167;
  }
  v47 = (unsigned __int64)&v28[-v29];
  v48 = (__int64)&v28[-v29] >> 2;
  v49 = v48 + 1;
  if ((unsigned __int64)(v48 + 1) >> 62 != 0) {
    goto LABEL_168;
  }
  v127 = (__int64)v130_.v132;
  if (v47 >> 1 > v49) {
    v49 = v47 >> 1;
  }
  if (v47 >= 0x7FFFFFFFFFFFFFFCLL) {
    v50 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v50 = v49;
  }
  if (v50 != 0) {
    if (v50 >> 62 != 0) {
      goto LABEL_169;
    }
    v51 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v50, 16, 0);
  }
  else {
    v51 = 0;
  }
  v52 = (char*)(v51 + 4 * v50);
  v118 = (unsigned __int64)&v28[-v29];
  v53 = v51 + v47 - 4 * v48;
  *(_DWORD*)(v51 + v47) = 1;
  v28 = (char*)(v51 + v47 + 4);
  v31 = (_QWORD*)memcpy(v53, v29, v118);
  if (v29 != 0) {
    v119 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v119 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v119,
                                  v29);
  }
  v33 = v127;
  if ((v32 & 1) != 0) {
    goto LABEL_54;
  }
LABEL_58:
  v55 = X8CALL_X0(
      void*, LegionGambitCamera_e59fd0((void*)(&v130_.v130), v31, v9, 1, 2));
  if (((unsigned __int8)v130_.v130 & 1) != 0) {
    v56 = v130_.v132;
  }
  else {
    v56 = (unsigned __int8*)&v130_.v130 + 1;
  }
  if (v56 == nullptr) {
    goto LABEL_76;
  }
  v57 = *v13;
  v60 = *v56;
  v59 = v56 + 1;
  v58 = v60;
  if (v60 != 0) {
    v61 = 0;
    do {
      v61 = v58 - v61 + 32 * v61;
      v62 = *v59++;
      v58 = v62;
    } while (v62 != 0);
  }
  else {
    v61 = 0;
  }
  v63 = *(_QWORD*)(v57 + 8);
  v64 = *(_QWORD*)(v57 + 16) - v63;
  if (v64 == 0) {
    goto LABEL_76;
  }
  v65 = (int*)(v63 + 24);
  v66 = 0;
  v67 = 0x4EC4EC4EC4EC4EC5LL * (v64 >> 3);
  while (1) {
    v68 = *v65;
    v65 += 26;
    if (v61 == v68) {
      break;
    }
    if (v67 == ++v66) {
      goto LABEL_76;
    }
  }
  if (v66 < 1) {
    goto LABEL_76;
  }
  if (v67 <= (unsigned int)v66) {
    goto LABEL_167;
  }
  if (v28 < v52) {
    *(_DWORD*)v28 = 2;
    v28 += 4;
  LABEL_76:
    v69 = v53;
    goto LABEL_77;
  }
  v109 = &v28[-v53];
  v110 = (__int64)&v28[-v53] >> 2;
  v111 = v110 + 1;
  if ((unsigned __int64)(v110 + 1) >> 62 != 0) {
    goto LABEL_168;
  }
  if ((__int64)&v52[-v53] >> 1 > v111) {
    v111 = (__int64)&v52[-v53] >> 1;
  }
  if ((unsigned __int64)&v52[-v53] >= 0x7FFFFFFFFFFFFFFCLL) {
    v112 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v112 = v111;
  }
  if (v112 != 0) {
    if (v112 >> 62 != 0) {
      goto LABEL_169;
    }
    v113 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v112, 16, 0);
  }
  else {
    v113 = 0;
  }
  v52 = (char*)(v113 + 4 * v112);
  v120 = (unsigned __int64)&v28[-v53];
  v69 = (__int64)&v109[v113 + -4 * v110];
  *(_DWORD*)&v109[v113] = 2;
  v28 = &v109[v113 + 4];
  v55 = (_QWORD*)memcpy(v69, v53, v120);
  if (v53 != 0) {
    v121 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v121 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v121,
                                  v53);
  }
LABEL_77:
  if (((unsigned __int8)v130_.v130 & 1) != 0 && v130_.v132 != nullptr) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v70,
                                  (__int64)v130_.v132);
  }
  LegionGambitCamera_e59fd0((void*)(&v130_.v130), v55, v9, 1, 3);
  if (((unsigned __int8)v130_.v130 & 1) != 0) {
    v71 = v130_.v132;
  }
  else {
    v71 = (unsigned __int8*)&v130_.v130 + 1;
  }
  if (v71 == nullptr) {
    goto LABEL_100;
  }
  v72 = *v13;
  v75 = *v71;
  v74 = v71 + 1;
  v73 = v75;
  if (v75 != 0) {
    v76 = 0;
    do {
      v76 = v73 - v76 + 32 * v76;
      v77 = *v74++;
      v73 = v77;
    } while (v77 != 0);
  }
  else {
    v76 = 0;
  }
  v78 = *(_QWORD*)(v72 + 8);
  v79 = *(_QWORD*)(v72 + 16) - v78;
  if (v79 == 0) {
    goto LABEL_100;
  }
  v80 = (int*)(v78 + 24);
  v81 = 0;
  v82 = 0x4EC4EC4EC4EC4EC5LL * (v79 >> 3);
  while (1) {
    v83 = *v80;
    v80 += 26;
    if (v76 == v83) {
      break;
    }
    if (v82 == ++v81) {
      goto LABEL_100;
    }
  }
  if (v81 < 1) {
    goto LABEL_100;
  }
  if (v82 <= (unsigned int)v81) {
  LABEL_167:
    GameRoutine_d38e30();
  }
  if (v28 < v52) {
    *(_DWORD*)v28 = 3;
    v28 += 4;
  LABEL_100:
    v84 = v69;
    v85 = (__int64*)fw_memory_g_heap_manager_ptr;
    goto LABEL_101;
  }
  v114 = &v28[-v69];
  v115 = (__int64)&v28[-v69] >> 2;
  v116 = v115 + 1;
  if ((unsigned __int64)(v115 + 1) >> 62 != 0) {
  LABEL_168:
    GameRoutine_e5aa20();
  }
  if ((__int64)&v52[-v69] >> 1 > v116) {
    v116 = (__int64)&v52[-v69] >> 1;
  }
  if ((unsigned __int64)&v52[-v69] >= 0x7FFFFFFFFFFFFFFCLL) {
    v116 = 0x3FFFFFFFFFFFFFFFLL;
  }
  if (v116 != 0) {
    if (v116 >> 62 == 0) {
      v85 = (__int64*)fw_memory_g_heap_manager_ptr;
      v117 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v116, 16, 0);
      goto LABEL_161;
    }
  LABEL_169:
    GameRoutine_60a210();
  }
  v117 = 0;
  v85 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_161:
  v122 = (unsigned __int64)&v28[-v69];
  v84 = (__int64)&v114[v117 + -4 * v115];
  *(_DWORD*)&v114[v117] = 3;
  v28 = &v114[v117 + 4];
  memcpy(v84, v69, v122);
  if (v69 != 0) {
    v123 = 128;
    if (*(_QWORD*)(*v85 + 200) == 0) {
      v123 = 56;
    }
    nn_mem_StandardAllocator_Free(*v85 + v123, v69);
  }
LABEL_101:
  if (((unsigned __int8)v130_.v130 & 1) != 0 && v130_.v132 != nullptr) {
    v86 = 128;
    if (*(_QWORD*)(*v85 + 200) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*v85 + v86, (__int64)v130_.v132);
  }
  if (v28 == (char*)v84) {
    *(_DWORD*)(a1 + 144) = 0;
    if (v28 == nullptr) {
      goto LABEL_112;
    }
  }
  else {
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v87 = game_map_MapRandom_instance__ptr[0];
    v88 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v89 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v90 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v87 + 1) = v88;
    v91 = (v90 >> 8) ^ (v89 >> 19) ^ v90 ^ v89;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v87) = v89;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v87 + 4) = v91;
    v92 = v91 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    *(_DWORD*)(a1 + 144) =
        *(_DWORD*)(v84 +
                   4LL * (unsigned int)(v92 %
                                        (int)((unsigned __int64)&v28[-v84] >>
                                              2)));
  }
  v93 = 128;
  if (*(_QWORD*)(*v85 + 200) == 0) {
    v93 = 56;
  }
  nn_mem_StandardAllocator_Free(*v85 + v93, v84);
LABEL_112:
  v94 = *(_QWORD*)(*GameData_212d448[0] + 128);
  if (v94 != 0) {
    v95 = *(_QWORD*)(v94 + 72);
    if (v95 != 0) {
      v96 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v85, 240, 16, 0);
      v97 = v96 + 4;
      v98 = v96;
      v96[1] = 0;
      v96[2] = 0;
      *v96 = GameData_1fe6e60;
      *(float32x4_t*)&v99 = game_10be1a0((__int64)(v96 + 4), v95);
      v100 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 8) = v97;
      *(_QWORD*)(a1 + 16) = v98;
      if (v100 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v100 + 16LL))(v100, v99);
        std___1___shared_weak_count___release_weak(v100);
      }
    }
  }
  v101 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v85, 80, 16, 0);
  v101[2] = 0;
  v102 = GameData_212ee40[0];
  v103 = *(_QWORD*)(a1 + 32);
  v101[8] = 0;
  *v101 = v102 + 2;
  v101[1] = 0;
  *(_QWORD*)(a1 + 24) = v101 + 4;
  *(_QWORD*)(a1 + 32) = v101;
  if (v103 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
    std___1___shared_weak_count___release_weak(v103);
  }
  v104 = *(_QWORD**)(a1 + 24);
  v130_.v130 = GameData_1fe6eb0;
  v130_.v131 = a1;
  v130_.v133 = &v130_.v130;
  GameRoutine_654050_alt1(&v130_.v130, v104);
  if (v130_.v133 == &v130_.v130) {
    v105 = 4;
  }
  else {
    if (v130_.v133 == nullptr) {
      goto LABEL_125;
    }
    v105 = 5;
  }
  ((__int64 (*)(__int64))(*v130_.v133)[v105])((__int64)v130_.v133);
LABEL_125:
  v106 = *(__int64 (***)(void))(a1 + 24);
  v107 = *(_QWORD*)(a1 + 32);
  v128_.v128 = v106;
  v128_.v129 = v107;
  if (v107 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16), 1u,
                              memory_order_relaxed);
    v130_.v130 = v106;
    v130_.v131 = v107;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66ae00((__int64)&v130_.v130);
    std___1___shared_weak_count___release_weak(v107);
  }
  else {
    v130_.v130 = v106;
    v130_.v131 = 0;
    GameRoutine_66ae00((__int64)&v130_.v130);
  }
  GameRoutine_66b000(&GameData_21c9668, &v128_.v128);
  result = v128_.v129;
  if (v128_.v129 != 0) {
    return std___1___shared_weak_count___release_weak(v128_.v129);
  }
  return result;
}

void memory_f43d50(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  unsigned __int32 v22;
  float32x4_t v23;
  float32x4_t v24;
  char v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  __int64 v37;
  float v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float32x4_t* v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float v58;
  float v59;
  float v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float v66;
  bool v67;
  float v68;
  float v69;
  float v70;
  float32x4_t v71;
  unsigned __int64 v72;
  float v73;
  float v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  float v82;
  float32x4_t v83;
  int8x16x2_t v84;
  int8x16x2_t v85;
  int8x16x2_t v86;

  v2 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a55c0) != 0) {
    v76 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v76;
    v77 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v77;
    v78 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v78;
    v79 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v79;
    __cxa_guard_release((__int64)&GameData_21a55c0);
  }
  *(_OWORD*)(a1 + 16) = GameData_21a5580;
  *(_OWORD*)(a1 + 32) = GameData_21a5590;
  *(_OWORD*)(a1 + 48) = GameData_21a55a0;
  *(_OWORD*)(a1 + 64) = GameData_21a55b0;
  v3 = *(float*)(a1 + 192) / 0x1.3333340000000p-3f;
  if (v3 <= 0x1.0000000000000p+0f) {
    v4 = *(float*)(a1 + 192) / 0x1.3333340000000p-3f;
  }
  else {
    v4 = 0x1.0000000000000p+0f;
  }
  if (v3 >= 0x0.0p+0f) {
    v5 = v4;
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v6 = powf(v5, 0x1.0000000000000p-1f);
  if (*(_BYTE*)(a1 + 245) != 0) {
    v7 = v6;
  }
  else {
    v7 = 0x1.0000000000000p+0f;
  }
  v8 = (float)(v7 + -0x1.8000000000000p-1f) * 0x1.0000000000000p+2f;
  if (v8 <= 0x1.0000000000000p+0f) {
    v9 = (float)(v7 + -0x1.8000000000000p-1f) * 0x1.0000000000000p+2f;
  }
  else {
    v9 = 0x1.0000000000000p+0f;
  }
  v10 = 0x1.0000000000000p+0f - v9;
  if (v8 >= 0x0.0p+0f) {
    v11 = v10;
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  if ((float)(v7 / 0x1.8000000000000p-1f) <= 0x1.0000000000000p+0f) {
    v12 = v7 / 0x1.8000000000000p-1f;
  }
  else {
    v12 = 0x1.0000000000000p+0f;
  }
  if ((float)(v7 / 0x1.8000000000000p-1f) >= 0x0.0p+0f) {
    v13 = v12;
  }
  else {
    v13 = 0x0.0p+0f;
  }
  if (v7 < 0x1.8000000000000p-1f) {
    v14 = v13;
  }
  else {
    v14 = v11;
  }
  v15 = (float)(fminf(fmaxf(v14, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                0x1.0000000000000p-2f) +
        0x1.0000000000000p+0f;
  v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                            memory_order_acquire) &
       1) == 0) {
    v82 = v15;
    v80 = __cxa_guard_acquire((__int64)&GameData_21a6150);
    v15 = v82;
    v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
    if (v80 != 0) {
      v81 = *((_QWORD*)GameData_212c548 + 1);
      *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
      *((_QWORD*)&GameData_21a6140 + 1) = v81;
      __cxa_guard_release((__int64)&GameData_21a6150);
      v15 = v82;
      v16 = (float)(0x1.0000000000000p+0f - v7) * 0x1.becde60000000p-1f;
    }
  }
  LODWORD(v17) = 0;
  LANES128(v18).n128_u64[0] = 0;
  v19 = *(float32x4_t*)(a1 + 48);
  v20 = *(float32x4_t*)(a1 + 64);
  v21 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_21a6140), v15);
  HIDWORD(v17) = LANES128(v21).n128_u32[1];
  LANES128(v18).n128_u64[1] = LANES128(v21).n128_u32[2];
  v22 = LANES128(v21).n128_u32[0];
  v23 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v21).n128_u32[0]),
                      COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
          COERCE_AS(float32x4_t, v17), *(float32x2_t*)(a1 + 16), 1),
      v18, *(float32x4_t*)(a1 + 16), 2);
  v24 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, LANES128(v21).n128_u32[0]),
                      COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
          COERCE_AS(float32x4_t, v17), *(float32x2_t*)(a1 + 32), 1),
      v18, *(float32x4_t*)(a1 + 32), 2);
  *(float32x4_t*)(a1 + 16) = v23;
  *(float32x4_t*)(a1 + 32) = v24;
  *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(COERCE_AS(float32x4_t, v22), LANES128(v19).n128_f32[0]),
          COERCE_AS(float32x4_t, v17),
          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
      v18, v19, 2);
  *(float32x4_t*)(a1 + 64) = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v22),
                                     LANES128(v20).n128_f32[0]),
                         COERCE_AS(float32x4_t, v17),
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
          v18, v20, 2),
      COERCE_AS(float32x4_t, 0));
  math_Quat_FromYawPitchRoll((void*)(&v83), v16, 0x0.0p+0f, 0x0.0p+0f);
  v25 = *(_BYTE*)(a1 + 224);
  v85.val[1] = v83;
  LANES128(v85.val[1]).n128_u32[3] = 0;
  v26 = LANES64_OF(
            vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v83).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v29 = LANES64_OF(
            vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v27).n128_u64[1] = v26;
  LANES128(v28).n128_u64[1] = v29;
  v30 = vmulq_f32(v27, v27);
  v84.val[1] = vmulq_f32(v28, v28);
  v84.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v84.val[1], v84.val[1]), vaddq_f32(v30, v30)));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[1] = v26;
  v32 = vmulq_f32(v31, v85.val[1]);
  v33 = vaddq_f32(v32, v32);
  LANES128(v85.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v85.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v85.val[1]).n128_u64[1] = v29;
  v34 = vmulq_laneq_f32(v85.val[1], v83, 3);
  v35 = vaddq_f32(v34, v34);
  v86.val[0] = vaddq_f32(v33, v35);
  v86.val[1] = vsubq_f32(v33, v35);
  LANES128(v85.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v84.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85.val[1]).n128_i8[8] =
      vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v84.val[1]).n128_i8[8] =
      vqtbl2_s8(v86, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v85.val[0] = v84.val[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v86.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v86.val[0]).n128_i8[8] =
      vqtbl2_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v85.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85.val[0]).n128_i8[8] =
      vqtbl2_s8(v84, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v36 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 16))),
                     v86.val[0], *(float32x2_t*)(a1 + 16), 1),
      v85.val[0], *(float32x4_t*)(a1 + 16), 2);
  v84.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 32))),
                     v86.val[0], *(float32x2_t*)(a1 + 32), 1),
      v85.val[0], *(float32x4_t*)(a1 + 32), 2);
  v84.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 48))),
                     v86.val[0], *(float32x2_t*)(a1 + 48), 1),
      v85.val[0], *(float32x4_t*)(a1 + 48), 2);
  v85.val[0] = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v33, COERCE_FLOAT(*(_OWORD*)(a1 + 64))),
                         v86.val[0], *(float32x2_t*)(a1 + 64), 1),
          v85.val[0], *(float32x4_t*)(a1 + 64), 2),
      COERCE_AS(float32x4_t, 0));
  v85.val[1] = *(int8x16_t*)(a1 + 176);
  *(float32x4_t*)(a1 + 16) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v36).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), v36, 2);
  *(float32x4_t*)(a1 + 32) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v84.val[0]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v84.val[0]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v84.val[0], 2);
  *(float32x4_t*)(a1 + 48) = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v84.val[1]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v84.val[1]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v84.val[1], 2);
  *(float32x4_t*)(a1 + 64) = vaddq_f32(
      v85.val[1],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                          LANES128(v85.val[0]).n128_f32[0]),
              COERCE_AS(float32x4_t, GameData_1a83610),
              COERCE_AS(float32x2_t, LANES128(v85.val[0]).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v85.val[0], 2));
  v37 = GameData_212d020[0];
  if ((v25 & 1) != 0) {
    v38 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4LL * *(int*)(a1 + 320) +
                    5520);
    *(float*)(a1 + 352) = v38;
  }
  else {
    v38 = *(float*)(a1 + 352);
  }
  v39 = *(unsigned __int8*)(a1 + 328);
  *(float*)(a1 + 92) = v7 * v38;
  if (v39 == 1) {
    v40 = *(_QWORD*)(a1 + 344);
    v41 = *GameData_212f878;
    if (v40 != 0 && *(_QWORD*)(v40 + 8) != -1) {
      goto LABEL_36;
    }
    game_f31720((void*)(&v83), *(_QWORD*)(*(_QWORD*)v37 + 40LL),
                *(unsigned int*)(a1 + 324));
    v40 = LANES128(v83).n128_i64[1];
    v42 = *(_QWORD*)(a1 + 344);
    *(float32x4_t*)(a1 + 336) = v83;
    if (v42 != 0) {
      std___1___shared_weak_count___release_weak(v42);
      v40 = *(_QWORD*)(a1 + 344);
    }
    if (v40 != 0) {
    LABEL_36:
      v43 = std___1___shared_weak_count_lock(v40);
      if (v43 != 0) {
        v44 = *(float32x4_t**)(a1 + 336);
        v45 = v43;
        if (v44 == nullptr) {
          goto LABEL_50;
        }
        v46 = *(float32x4_t*)(a1 + 16);
        v47 = *(float32x4_t*)(a1 + 32);
        LANES128(v48).n128_u32[0] = 0;
        LANES128(v48).n128_u32[3] = 0;
        v49 = *(float32x4_t*)(a1 + 48);
        v50 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 256))),
                           v47, *(float32x2_t*)(a1 + 256), 1),
            v49, *(float32x4_t*)(a1 + 256), 2);
        v51 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 272))),
                           v47, *(float32x2_t*)(a1 + 272), 1),
            v49, *(float32x4_t*)(a1 + 272), 2);
        v52 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 288))),
                           v47, *(float32x2_t*)(a1 + 288), 1),
            v49, *(float32x4_t*)(a1 + 288), 2);
        v53 = vaddq_f32(
            *(float32x4_t*)(a1 + 64),
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v46, COERCE_FLOAT(*(_OWORD*)(a1 + 304))), v47,
                    *(float32x2_t*)(a1 + 304), 1),
                v49, *(float32x4_t*)(a1 + 304), 2));
        v54 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v50).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1);
        v55 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v51).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]), 1);
        v56 = vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                        LANES128(v52).n128_f32[0]),
            COERCE_AS(float32x4_t, GameData_1a83610),
            COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 1);
        v57 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                       LANES128(v53).n128_f32[0]),
                           COERCE_AS(float32x4_t, GameData_1a83610),
                           COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                           1),
            COERCE_AS(float32x4_t, GameData_1a83090), v53, 2);
        v58 = (float)(PSEUDO_UNFUSED(*(float*)(a1 + 228) *
                                     0x1.921fb60000000p+1f)) +
              (float)(roundf(
                          (float)(*(float*)(a1 + 228) * 0x1.921fb60000000p+1f) *
                          0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
        if (v58 <= 0x1.921fb60000000p+0f) {
          v60 = 0x1.0000000000000p+0f;
          if (v58 >= -0x1.921fb60000000p+0f) {
          LABEL_43:
            v61 = vmlaq_laneq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v51, 2);
            v62 = vmlaq_laneq_f32(v56, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v52, 2);
            v63 = vmlaq_laneq_f32(v54, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v50, 2);
            *(unsigned __int64*)((char*)LANES128(v48).n128_u64 + 4) =
                *(unsigned int*)(v41 + 1424);
            v64 = vaddq_f32(v48, v57);
            v65 =
                v60 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c188) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c188 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c188) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c188 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      (float)(v58 *
                                                                                                              v58))) *
                                                                                      (float)(v58 *
                                                                                              v58))) *
                                                                   (float)(v58 *
                                                                           v58))) *
                                                   (float)(v58 * v58))) *
                                (float)(v58 * v58)) +
                        0x1.0000000000000p+0f);
            v66 = fabsf(v65);
            v67 = v65 < 0x0.0p+0f;
            v68 = -0x1.0000000000000p+0f;
            v69 = v66 * 0x1.0000000000000p-1f;
            if (v67) {
              v68 = 0x1.0000000000000p+0f;
            }
            v70 = *(float*)(a1 + 92) *
                  (float)((float)(v69 * v68) + 0x1.0000000000000p-1f);
            if ((LANES128(v44[8]).n128_u8[0] & 1) == 0) {
              LANES128(v44[8]).n128_u8[0] = 1;
            }
            LANES128(v44[2]).n128_u64[0] = LANES128(v64).n128_u64[0];
            v44[4] = v63;
            v44[5] = v61;
            v71 = v44[2];
            LANES128(v71).n128_u64[1] = LANES128(v64).n128_u32[2];
            v44[6] = v62;
            v44[7] = v64;
            LANES128(v44[9]).n128_f32[0] = v70;
            v44[2] = v71;
            game_f2f4e0((__int64)v44);
            LANES128(v44[9]).n128_u8[8] = 1;
            v72 = LANES128(v44[10]).n128_u64[0];
            if (v72 != 0) {
              v73 = LANES128(v44[9]).n128_f32[0];
              v74 = LANES128(v44[9]).n128_f32[1];
              v75 = *(__int64**)(v72 + 8);
            }
            else {
              v75 = (__int64*)LANES128(v44[10]).n128_u64[1];
              if (*v75 == 0 || *(_DWORD*)(*v75 + 16) != *((_DWORD*)v75 + 2)) {
                goto LABEL_50;
              }
              v73 = LANES128(v44[9]).n128_f32[0];
              v74 = LANES128(v44[9]).n128_f32[1];
            }
            game_14a1b00(v75, v73 * v74);
          LABEL_50:
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak(v45);
            }
            return;
          }
          v59 = -0x1.921fb60000000p+1f;
        }
        else {
          v59 = 0x1.921fb60000000p+1f;
        }
        v58 = v59 - v58;
        v60 = -0x1.0000000000000p+0f;
        goto LABEL_43;
      }
    }
  }
}

void memory_130dae0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (*(_OWORD*)(a1 + 8) == 0) {
    return;
  }
  if (*(_BYTE*)(a2 + 6) == 1) {
    if (game_GameModeData_instance_ == 0) {
      return;
    }
    v4 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v4 == 0) {
      return;
    }
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v5 != 0 && *(_QWORD*)(v5 + 136) == v4 && *(_BYTE*)(v5 + 32) == 0) {
      if ((*(_BYTE*)(v4 + 185) & 0x20) != 0) {
        return;
      }
    }
    else if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x40) == 0) {
      return;
    }
  }
  v6 = GameData_2240f18 + 1;
  *(_QWORD*)(a1 + 288) =
      GameData_2240f18 % 0x64uLL +
      100 * (GameData_21d87e8 % 0x989680u +
             10000000LL *
                 ((3600 * (unsigned __int16)GameData_21d87f8 +
                   HIBYTE(GameData_21d87f8) + 60 * BYTE2(GameData_21d87f8)) %
                  0xF4240u)) +
      1000000000000000LL;
  GameData_2240f18 = v6;
  *(_DWORD*)(a1 + 296) = *(_DWORD*)a2;
  v7 = *(_WORD*)(a2 + 4);
  if ((v7 & 1) != 0 && (*(_BYTE*)(a2 + 6) & 1) == 0) {
    if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1 + 32,
                                                     "basic_chapter") == 0) {
      *(_BYTE*)(a1 + 120) = 1;
    }
    Manager_13114c0(a1 + 32);
    Manager_130f9a0(a1 + 32);
    Manager_130f220(a1 + 32);
    Manager_130e260(a1 + 32);
    if (*(_BYTE*)(a1 + 120) == 1) {
      if ((int)nn_prepo_PlayReport_GetCount(a1 + 32) < 2 ||
          *(_OWORD*)(a1 + 104) == 0) {
        nn_prepo_PlayReport_Clear(a1 + 32);
      }
      else {
        nn_prepo_PlayReport_Save(a1 + 32, a1 + 104);
      }
      *(_BYTE*)(a1 + 120) = 0;
    }
    v7 = *(_WORD*)(a2 + 4);
  }
  if ((v7 & 2) != 0) {
    Manager_130fb60(a1 + 32);
    v7 = *(_WORD*)(a2 + 4);
    if ((v7 & 4) == 0) {
    LABEL_22:
      if ((v7 & 8) == 0) {
        goto LABEL_23;
      }
      goto LABEL_27;
    }
  }
  else if ((v7 & 4) == 0) {
    goto LABEL_22;
  }
  Manager_130fdc0(a1 + 32);
  game_playreport_13108c0(a1 + 32, *(_QWORD**)(a2 + 8));
  v7 = *(_WORD*)(a2 + 4);
  if ((v7 & 8) == 0) {
  LABEL_23:
    if ((v7 & 0x10) == 0) {
      return;
    }
    goto LABEL_28;
  }
LABEL_27:
  game_playreport_Manager_ReportReliance(a1 + 32);
  if ((*(_WORD*)(a2 + 4) & 0x10) == 0) {
    return;
  }
LABEL_28:
  if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1 + 32, "misc") == 0) {
    *(_BYTE*)(a1 + 120) = 1;
  }
  Manager_13114c0(a1 + 32);
  Manager_13122a0(a1 + 32);
  Manager_1312e60(a1 + 32);
  GameRoutine_1311ce0(a1 + 32);
  GameRoutine_1311810(a1 + 32);
  nn_prepo_Array_Clear(a1 + 208);
  v10_.v10[2] = a1 + 208;
  v10_.v10[0] = GameData_2025c18;
  v10_.v10[1] = a1 + 128;
  v10_.v11 = v10_.v10;
  GameRoutine_8ecf00(game_GameModeData_instance_ + 168, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
    goto LABEL_34;
  }
  if (v10_.v11 != nullptr) {
    v9 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
  }
  if (*(_BYTE*)(a1 + 120) == 1) {
    nn_prepo_PlayReport_Add_1a0ae20(a1 + 32, "MapGameOverCount", a1 + 208);
  }
  GameRoutine_1312b50(a1 + 32);
  GameRoutine_13140f0(a1 + 32);
  if (*(_BYTE*)(a1 + 120) == 1) {
    if ((int)nn_prepo_PlayReport_GetCount(a1 + 32) < 2 ||
        *(_OWORD*)(a1 + 104) == 0) {
      nn_prepo_PlayReport_Clear(a1 + 32);
    }
    else {
      nn_prepo_PlayReport_Save(a1 + 32, a1 + 104);
    }
    *(_BYTE*)(a1 + 120) = 0;
  }
}

#pragma GCC visibility pop
