#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* DrawInfo_5769d0(_QWORD* result, __int64*);
_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_5fc3e0(_QWORD* result);
_QWORD* GameRoutine_64adb0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* Manager_136b340(_QWORD* result, __int64);
_QWORD* MultiArcResourceAccessor_574050(__int64, __int64);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
__attribute__((swiftcall)) void LocatorDispos_db4a70(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_6222e0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, int8x16_t*);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* InstanceObject_bffee0(__int64* result, __int64*, __int64**, __int64,
                               __int64*, __int64);
__int64 ControlCreator_1362940(__int64);
__int64 ControlCreator_1362b00();
__int64 DrawInfo_5769c0(__int64 result, __int64, int, int);
__int64 GameHr_1366e60(__int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_55d9a0(__int64, __int64, __int64);
__int64 GameRoutine_574470(__int64, __int64, __int64);
__int64 GameRoutine_575cb0(_QWORD);
__int64 GameRoutine_5fc3f0(_QWORD);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791c0(__int64 result, int, int, int);
__int64 LayoutEx_5797d0(__int64, __int64, __int64, __int64, __int64, __int64,
                        __int64, __int64);
__int64 MultiArcResourceAccessor_Unknown3(__int64, __int64, __int64);
__int64 SceneCharacterLookAt_1416a00(__int64, __int64, float, float);
__int64 SceneManager_138e5e0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_1366260(const char*, char);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN** GameData_2130eb0[2];
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83120;
extern __int128 GameData_1a83260;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a6120;
extern __int64 (***GameData_2132260)();
extern __int64 (*GameData_202f048[])();
extern __int64 (*GameData_203de10[])();
extern __int64 (*ui_Layout_ControlCreator_vtable[])();
extern __int64* GameData_212eb78[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212c060;
extern __int64 GameData_212dce8;
extern __int64 GameData_212ec00;
extern __int64 GameData_220b680;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void ProcPerchSceneGaze_14393f0();
void ProcPerchSceneGaze_1439bb0();
void ProcPerchSceneGaze_143c080();
void __attribute__((noreturn)) GameRoutine_1364380();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 memory_bff180(__int64 result);
__attribute__((swiftcall)) void memory_d91650(PSEUDO_X8 x8_, __int64 a1,
                                              float a3);
void memory_e5c540(__int64 a1, unsigned __int8* a2, __int64* a3, float a4,
                   float a5, double a6);
void memory_1361b40(unsigned __int64 a1, char* a2, char* a3, unsigned int* a4);
__int64 memory_1438bc0(__int64 a1);
__int64 memory_143b500(__int64 a1);
__int64 memory_143c2f0(__int64 a1);

__int64 memory_bff180(__int64 result)
{
  __int64* v1;
  _BYTE* v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned __int64 v54;
  float v55;
  __int64 v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t* v64;
  int32x4_t* v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int32x4_t v69;
  int32x4_t v70;
  int32x4_t v71;
  int32x4_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  float32x2x2_t v81;
  float32x2x2_t v82;

  if (*(_BYTE*)(result + 32) == 1) {
    v1 = (__int64*)(result + 136);
    v2 = *(_BYTE**)(result + 136);
    v3 = result;
    v4 = *(_BYTE**)(result + 144);
    v5 = *(_QWORD*)(result + 160);
    *(_DWORD*)(result + 256) = 0;
    v78 = (__int64*)(result + 136);
    *(_QWORD*)(result + 168) = v5;
    v6 = 0x5555555555555556LL * ((v4 - v2) >> 5);
    if (v6 > (signed __int64)(*(_QWORD*)(result + 176) - v5) >> 3) {
      if (v6 >> 61 != 0) {
      LABEL_72:
        GameRoutine_65c760();
      }
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr,
          0xAAAAAAAAAAAAAAB0LL * ((v4 - v2) >> 5), 16, 0);
      v1 = v78;
      *(_QWORD*)(v3 + 160) = v7;
      *(_QWORD*)(v3 + 168) = v7;
      *(_QWORD*)(v3 + 176) = v7 - 0x5555555555555550LL * ((v4 - v2) >> 5);
      if (v5 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v5);
        v1 = v78;
        v2 = *(_BYTE**)(v3 + 136);
        v4 = *(_BYTE**)(v3 + 144);
      }
    }
    if (v2 != v4) {
      v9 = 0;
      do {
        if (*v2 == 1 && (v2[48] & 1) == 0) {
          v12 = *(_QWORD**)(v3 + 168);
          v11 = *(_QWORD*)(v3 + 176);
          if ((unsigned __int64)v12 < v11) {
            *v12 = v9;
            v10 = (__int64)(v12 + 1);
          }
          else {
            v13 = *(_QWORD*)(v3 + 160);
            v14 = (char*)v12 - v13;
            v15 = ((__int64)v12 - v13) >> 3;
            v16 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              goto LABEL_72;
            }
            v17 = v11 - v13;
            if (v17 >> 2 > v16) {
              v16 = v17 >> 2;
            }
            if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
              v18 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v18 = v16;
            }
            if (v18 != 0) {
              if (v18 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v19 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
            }
            else {
              v19 = 0;
            }
            v20 = v19 + 8 * v18;
            v21 = (unsigned __int64)v12 - v13;
            v22 = (__int64)&v14[v19 + -8 * v15];
            *(_QWORD*)&v14[v19] = v9;
            v10 = (__int64)&v14[v19 + 8];
            memcpy(v22, v13, v21);
            *(_QWORD*)(v3 + 160) = v22;
            *(_QWORD*)(v3 + 168) = v10;
            *(_QWORD*)(v3 + 176) = v20;
            if (v13 != 0) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v13);
            }
            v1 = v78;
          }
          *(_QWORD*)(v3 + 168) = v10;
        }
        ++v9;
        v2 += 96;
      } while (v2 != v4);
    }
    if ((*(_BYTE*)(v3 + 360) & 1) != 0) {
      v24 = *(__int64**)(v3 + 160);
      v25 = *(__int64**)(v3 + 168);
      v80 = v1;
      if (v25 - v24 < 129) {
        v29 = 0;
      LABEL_38:
        InstanceObject_bffee0(v24, v25, &v80, v25 - v24, nullptr, v29);
      }
      else {
        v26 = v25 - v24;
        v27 = GameData_212c060;
        while (1) {
          v28 = (__int64*)GameRoutine_1a09d20(8 * v26, v27);
          if (v28 != nullptr) {
            break;
          }
          v29 = v26 >> 1;
          v30 = v26 > 1;
          v26 >>= 1;
          if (!v30) {
            goto LABEL_38;
          }
        }
        v31 = (__int64)v28;
        InstanceObject_bffee0(v24, v25, &v80, v25 - v24, v28, v26);
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
      }
    }
    if (*(int*)(v3 + 112) < 1) {
      v34 = 0;
    }
    else {
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      do {
        v37 = *(_QWORD*)(v3 + 232);
        v38 = 56 * v33;
        *(_DWORD*)(v37 + 4 * v33) = 0;
        v39 = *(_QWORD*)(v3 + 184) + 56 * v33;
        v40 = *(_DWORD*)(v39 + 16);
        v30 = v40 < -1;
        v41 = ((_BYTE)v40 + 1) & 1;
        if (v30) {
          v41 = -v41;
        }
        *(_DWORD*)(v39 + 16) = v41;
        v42 = *(_QWORD*)(v3 + 208) + v38;
        v43 = *(_DWORD*)(v42 + 16);
        v30 = v43 < -1;
        v44 = ((_BYTE)v43 + 1) & 1;
        if (v30) {
          v44 = -v44;
        }
        *(_DWORD*)(v42 + 16) = v44;
        v45 = *(_QWORD*)(*(_QWORD*)(v3 + 184) + v38 +
                         8LL * *(int*)(*(_QWORD*)(v3 + 184) + v38 + 16));
        v79 = v45;
        v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 56LL))(v45);
        v47 = *(_QWORD*)(*(_QWORD*)(v3 + 208) + v38 +
                         8LL * *(int*)(*(_QWORD*)(v3 + 208) + v38 + 16));
        v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 56LL))(v47);
        v50 = *(_QWORD*)(v3 + 160);
        v49 = *(_QWORD*)(v3 + 168);
        v51 = v35;
        if (v35 < (unsigned __int64)((v49 - v50) >> 3)) {
          while (1) {
            v52 = *v78 + 96LL * *(_QWORD*)(v50 + 8 * v51);
            if (*(_BYTE*)v52 == 1 && (*(_BYTE*)(v52 + 48) & 1) == 0) {
              v53 = *(_DWORD*)(v37 + 4 * v33);
              v54 =
                  0x6DB6DB6DB6DB6DB7LL *
                  ((__int64)(*(_QWORD*)(v52 + 72) - *(_QWORD*)(v52 + 64)) >> 4);
              v55 = *(float*)(v52 + 52) * (float)v54;
              if (v54 >= (unsigned __int64)v55) {
                v54 = (unsigned __int64)v55;
              }
              v56 = v36;
              if (v54 > v36) {
                while (v53 != 1024) {
                  v64 = (int32x4_t*)(v46 + 48LL * v53);
                  v65 = (int32x4_t*)(*(_QWORD*)(v52 + 64) + 112 * v56);
                  if (*(_BYTE*)(v3 + 336) == 1) {
                    v66 = *(float32x4_t*)(v3 + 272);
                    v67 = *(float32x4_t*)(v3 + 288);
                    v68 = *(float32x4_t*)(v3 + 304);
                    v69 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(vmulq_n_f32(v66, COERCE_FLOAT(*v65)),
                                       v67,
                                       COERCE_AS(float32x2_t,
                                                 LANES128(*(v65)).n128_u64[0]),
                                       1),
                        v68, *v65, 2);
                    v70 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v66, COERCE_FLOAT(*(_OWORD*)&v65[1])),
                            v67,
                            COERCE_AS(float32x2_t,
                                      LANES128(v65[1]).n128_u64[0]),
                            1),
                        v68, v65[1], 2);
                    v71 = vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v66, COERCE_FLOAT(*(_OWORD*)&v65[2])),
                            v67,
                            COERCE_AS(float32x2_t,
                                      LANES128(v65[2]).n128_u64[0]),
                            1),
                        v68, v65[2], 2);
                    v72 = vzip1q_s32(v69, v71);
                    v73 = vaddq_f32(
                        vmlaq_laneq_f32(
                            vmlaq_lane_f32(
                                vmulq_n_f32(v66,
                                            COERCE_FLOAT(*(_OWORD*)&v65[3])),
                                v67,
                                COERCE_AS(float32x2_t,
                                          LANES128(v65[3]).n128_u64[0]),
                                1),
                            v68, v65[3], 2),
                        *(float32x4_t*)(v3 + 320));
                    v74 = vzip1q_s32(v70, v73);
                    v75 = vzip2q_s32(v70, v73);
                    v62 = vzip2q_s32(v72, v74);
                    v63 = vzip1q_s32(vzip2q_s32(v69, v71), v75);
                    LANES64(v82.val[0]).n64_u64[0] = LANES128(v72).n128_u64[0];
                    LANES64(v82.val[1]).n64_u64[0] = LANES128(v74).n128_u64[0];
                    vst2_f32((float*)v64, v82);
                  }
                  else {
                    v57 = v65[1];
                    v58 = v65[2];
                    v59 = v65[3];
                    v60 = vzip1q_s32(*v65, v58);
                    v61 = vzip1q_s32(v57, v59);
                    v62 = vzip2q_s32(v60, v61);
                    v63 =
                        vzip1q_s32(vzip2q_s32(*v65, v58), vzip2q_s32(v57, v59));
                    LANES64(v81.val[0]).n64_u64[0] = LANES128(v60).n128_u64[0];
                    LANES64(v81.val[1]).n64_u64[0] = LANES128(v61).n128_u64[0];
                    vst2_f32((float*)v64, v81);
                  }
                  v64[1] = v62;
                  v64[2] = v63;
                  ++v34;
                  *(int32x4_t*)(v48 + 48LL * *(int*)(v37 + 4 * v33)) = v65[4];
                  *(int32x4_t*)(v48 + 48LL * *(int*)(v37 + 4 * v33) + 16) =
                      v65[5];
                  *(int32x4_t*)(v48 + 48LL * *(int*)(v37 + 4 * v33) + 32) =
                      v65[6];
                  v53 = *(int*)(v37 + 4 * v33) + 1;
                  *(_DWORD*)(v37 + 4 * v33) = v53;
                  v56 = ++v36;
                  if (v54 <= v36) {
                    goto LABEL_58;
                  }
                }
                break;
              }
              LODWORD(v56) = v36;
            LABEL_58:
              if (v53 == 1024) {
                LODWORD(v51) = v35;
                v36 = v56;
                goto LABEL_66;
              }
              v50 = *(_QWORD*)(v3 + 160);
              v49 = *(_QWORD*)(v3 + 168);
              v36 = 0;
            }
            v51 = ++v35;
            if (v35 >= (unsigned __int64)((v49 - v50) >> 3)) {
              goto LABEL_66;
            }
          }
        }
        LODWORD(v51) = v35;
      LABEL_66:
        (*(void (**)(__int64))(*(_QWORD*)v47 + 64LL))(v47);
        (*(void (**)(__int64))(*(_QWORD*)v79 + 64LL))(v79);
        v76 = *(_DWORD*)(v37 + 4 * v33++);
        if (v76 >= 1) {
          *(_DWORD*)(v3 + 256) = v33;
        }
        v35 = v51;
      } while (v33 < *(int*)(v3 + 112));
    }
    v77 = *(_QWORD*)(v3 + 120);
    *(_DWORD*)(v3 + 352) = v34;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
  }
  return result;
}

__attribute__((swiftcall)) void memory_d91650(PSEUDO_X8 x8_, __int64 a1,
                                              float a3)
{
  int8x16_t* a2 = (int8x16_t*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v7;
  int v11;
  int v12;
  __int64* v13;
  int v14;
  float v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v27;
  float32x4_t v28;
  float32x4_t v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float v38;
  float32x4_t v39;
  float32x4_t v40;
  float v41;
  float32x4_t v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float v57;
  float v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int32x4_t v69;
  int32x4_t v70;
  int8x16_t v71;
  int8x16_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  unsigned __int64 v77;
  int8x16_t v78;
  float32x4_t v79;
  int8x16_t v80;
  int8x16_t v81;
  int8x16_t v82;
  unsigned __int64 v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  int8x16_t v93;
  int8x16_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  int8x16_t v102;
  float32x4_t v103;
  float32x4_t v104;
  int8x16_t result;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 (*v113)(__int64);
  int v114;
  int v115;
  float32x4_t v116;
  float32x4_t v117;
  __int64* v118;
  __int64 v119;
  int v120;
  float v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  int8x16_t v129;
  int32x4_t v130;
  int8x16_t v131;
  int8x16_t v132;
  int v133;
  int v134;
  float v135;
  int v136;
  int v138;
  int v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float v149;
  bool v150;
  unsigned __int64 v151;
  float v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  int8x16_t v160;
  int8x16_t v161;
  float32x4_t v162;
  int8x16_t v163;
  float32x4_t v164;
  float32x4_t v165;
  __int64 v166;
  __int64 v167;
  int v168;
  __int64 v169;
  int v170;
  __int64 v171;
  int v172;
  __int64 v173;
  int v174;
  __int64 v175;
  float32x4_t v176;
  __int128 v177;
  float32x4_t v178;
  float32x4_t v179;
  __int128 v180;
  float32x4_t v181;
  int8x16_t v182;
  struct {
    int32x4_t v183;
    int8x16_t v184;
    int8x16_t v185;
    float32x4_t v186;
  } v183_;
  int8x16_t v187;
  int8x16_t v192;

  if (*(_BYTE*)(a1 + 13) == 1) {
    LANES128(v187).n128_u64[0] = v7;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v106 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v106;
      __cxa_guard_release((__int64)&GameData_21a6130);
    }
    v177 = GameData_21a6120;
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    v12 = v11 - 2;
    if (v11 >= 2) {
      v14 = v11;
      v15 = fmodf(a3, 0x1.0000000000000p+0f);
      v16 = (int)a3;
      v17 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v18 = v16 % v17;
      }
      else {
        v19 = v17 - 1;
        if (v17 - 1 >= v16) {
          v19 = (int)a3;
        }
        if (v16 >= 0) {
          v18 = v19;
        }
        else {
          v18 = 0;
        }
      }
      v20 = v18 + 1;
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v23 = v20 % v21;
      }
      else {
        v24 = v21 - 1;
        v25 = v14 - 1;
        if (v21 - 1 >= v20) {
          v24 = v18 + 1;
        }
        if (v18 >= -1) {
          v23 = v24;
        }
        else {
          v23 = 0;
        }
        if (v18 == v25 & v23 == v25) {
          v15 = 0x1.0000000000000p+0f;
          v23 = v24;
          v18 = v12;
        }
      }
      v27 = *(_QWORD*)(a1 + 56);
      if (*(_QWORD*)(a1 + 64) == v27) {
        goto LABEL_31;
      }
      v13 = (__int64*)(v27 + 16LL * v18);
      if (v18 != v23) {
        v31 = 16LL * v23;
        v32 = *v13;
        v33 = *(_QWORD*)(v27 + v31);
        LANES128(v34).n128_u64[0] = 0x4110000041100000LL;
        LANES128(v34).n128_u64[1] = 0x4110000041100000LL;
        LANES128(v35).n128_u64[0] = *(_QWORD*)(*v13 + 16);
        LANES128(v36).n128_u64[0] = *(_QWORD*)(*v13 + 64);
        LANES128(v37).n128_u64[0] = *(_QWORD*)(*v13 + 88);
        if (v15 <= 0x1.0000000000000p+0f) {
          v38 = v15;
        }
        else {
          v38 = 0x1.0000000000000p+0f;
        }
        LANES128(v40).n128_u64[0] = *(_QWORD*)(v33 + 16);
        {
          __typeof__(v22) z_ = (__typeof__(v22)){0};
          LODWORD(z_) = *(_DWORD*)(*v13 + 24);
          v22 = z_;
        }
        LANES128(v35).n128_u64[1] = v22;
        {
          __typeof__(v22) z_ = (__typeof__(v22)){0};
          LODWORD(z_) = *(_DWORD*)(v32 + 72);
          v22 = z_;
        }
        LANES128(v36).n128_u64[1] = v22;
        {
          __typeof__(v22) z_ = (__typeof__(v22)){0};
          LODWORD(z_) = *(_DWORD*)(v32 + 96);
          v22 = z_;
        }
        LANES128(v37).n128_u64[1] = v22;
        {
          __typeof__(v22) z_ = (__typeof__(v22)){0};
          LODWORD(z_) = *(_DWORD*)(v33 + 24);
          v22 = z_;
        }
        v39 = vmulq_f32(v36, v34);
        LANES128(v40).n128_u64[1] = v22;
        v41 = 0x0.0p+0f;
        v42 = vmulq_f32(v37, v34);
        if (v15 >= 0x0.0p+0f) {
          v43 = v38;
        }
        else {
          v43 = 0x0.0p+0f;
        }
        v44 = (float)(0x1.0000000000000p+0f - v43) * 0x1.8000000000000p+1f;
        v45 = (float)(0x1.0000000000000p+0f - v43) *
              (float)((float)(0x1.0000000000000p+0f - v43) *
                      (float)(0x1.0000000000000p+0f - v43));
        v46 = v43 * (float)((float)(0x1.0000000000000p+0f - v43) * v44);
        v47 = v43 * (float)(v43 * v44);
        v48 = v43 * (float)(v43 * v43);
        v29 = vaddq_f32(
            vaddq_f32(vaddq_f32(vmulq_n_f32(v35, v45), vmulq_n_f32(v36, v46)),
                      vmulq_n_f32(v37, v47)),
            vmulq_n_f32(v40, v48));
        LANES128(v49).n128_u64[0] = 0x4040000040400000LL;
        LANES128(v49).n128_u64[1] = 0x4040000040400000LL;
        v50 = vmulq_f32(v35, v49);
        LANES128(v29).n128_u32[3] = 0;
        v51 =
            vaddq_f32(vsubq_f32(vsubq_f32(v39, v50), v42), vmulq_f32(v40, v49));
        LANES128(v52).n128_u64[0] = 0xC1400000C1400000LL;
        LANES128(v52).n128_u64[1] = 0xC1400000C1400000LL;
        LANES128(v53).n128_u64[0] = 0x40C0000040C00000LL;
        LANES128(v53).n128_u64[1] = 0x40C0000040C00000LL;
        v54 = vaddq_f32(
            vmulq_f32(v36, v49),
            vsubq_f32(
                vaddq_f32(vmulq_n_f32(vaddq_f32(vaddq_f32(vmulq_f32(v35, v53),
                                                          vmulq_f32(v36, v52)),
                                                vmulq_f32(v37, v53)),
                                      v43),
                          vmulq_n_f32(v51, v43 * v43)),
                v50));
        LANES128(v54).n128_u32[3] = 0;
        v55 = vmulq_f32(v54, v54);
        v56 = vextq_s8(v55, v55, 8u);
        LANES128(v55).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
                .n64_u64[0];
        LANES128(v56).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v55).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
                .n64_u64[0];
        v28 = vbslq_s8(
            vdupq_lane_s32(
                COERCE_AS(int32x2_t,
                          LANES128_OF(vcgtq_f32(v56, v55)).n128_u64[0]),
                0),
            COERCE_AS(int8x16_t, GameData_1a83090), v54);
        v57 = *(float*)(v32 + 36);
        if (*(_BYTE*)(*(_QWORD*)(v32 + 8) + 13LL) == 0) {
          v57 = 0x0.0p+0f;
        }
        v58 = (float)(PSEUDO_UNFUSED(v46 * *(float*)(v32 + 84))) +
              (float)(v45 * v57);
        if (*(_BYTE*)(*(_QWORD*)(v33 + 8) + 13LL) != 0) {
          v41 = *(float*)(v33 + 36);
        }
        v30 = (float)(v58 + (float)(v47 * *(float*)(v32 + 108))) +
              (float)(v48 * v41);
        goto LABEL_43;
      }
    }
    else {
      v13 = *(__int64**)(a1 + 56);
      if (*(__int64**)(a1 + 64) == v13) {
      LABEL_31:
        v28 = COERCE_AS(float32x4_t, GameData_1a83090);
        v29 = COERCE_AS(float32x4_t, v177);
        v30 = 0x0.0p+0f;
      LABEL_43:
        LANES128(*(a2)).n128_u64[0] = 0;
        LANES128(*(a2)).n128_u64[1] = 0;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                  memory_order_acquire) &
             1) == 0) {
          v176 = v28;
          v178 = v29;
          v107 = __cxa_guard_acquire((__int64)&GameData_21a5680);
          v28 = v176;
          v29 = v178;
          if (v107 != 0) {
            v108 = *((_QWORD*)GameData_212c2f8 + 1);
            *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
            *((_QWORD*)&GameData_21a5670 + 1) = v108;
            __cxa_guard_release((__int64)&GameData_21a5680);
            v28 = v176;
            v29 = v178;
          }
        }
        LANES128(*(a2)).n128_u64[0] = LANES128(v29).n128_u64[0];
        v59 = *a2;
        LANES128(v59).n128_u64[1] = LANES128(v29).n128_u32[2];
        *a2 = v59;
        v180 = GameData_1a83610;
        v181 = vsubq_f32(COERCE_AS(float32x4_t, 0), v28);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
          v109 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v109;
          __cxa_guard_release((__int64)&GameData_21a6130);
        }
        math_6222e0((void*)(&v183_.v183), (float32x4_t*)&GameData_21a6120,
                    &v181, (int8x16_t*)&v180);
        LANES128(v60).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v183_.v184, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v61).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v183_.v185, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v60).n128_i8[8] =
            vqtbl1_s8(v183_.v184, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v61).n128_i8[8] =
            vqtbl1_s8(v183_.v185, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v62 = vmulq_f32(vmulq_f32(v183_.v183, v60), v61);
        LANES128(v61).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v183_.v184, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v61).n128_i8[8] =
            vqtbl1_s8(v183_.v184, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v63).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v183_.v185, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v63).n128_i8[8] =
            vqtbl1_s8(v183_.v185, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v64 = vsubq_f32(v62, vmulq_f32(vmulq_f32(v183_.v183, v61), v63));
        LANES128(v64).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v64, v64)).n128_u64[0];
        v65 = vaddq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v64).n128_u64[0]), 0),
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v64).n128_u64[0]), 1));
        v66 = vrecpeq_f32(v65);
        v67 = vmulq_f32(v66, vrecpsq_f32(v66, v65));
        v68 = vmulq_f32(v67, vrecpsq_f32(v67, v65));
        v69 = vzip1q_s32(v183_.v183, v183_.v185);
        v70 = vzip1q_s32(v183_.v184, COERCE_AS(int32x4_t, 0));
        v71 = vzip2q_s32(v69, v70);
        v72 = vzip1q_s32(vzip2q_s32(v183_.v183, v183_.v185),
                         vzip2q_s32(v183_.v184, COERCE_AS(int32x4_t, 0)));
        v73 = vzip1q_s32(v69, v70);
        LANES128(v74).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v75).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v76).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v69).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v74).n128_i8[8] =
            vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v77 =
            LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v76).n128_i8[8] =
            vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v72).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v75).n128_u64[1] = v77;
        *(int8x8_t*)&LANES128(v72).n128_i8[8] =
            vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v69).n128_i8[8] =
            vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v78 = vmulq_f32(v68, vmlsq_f32(vmulq_f32(v74, v75), v72, v76));
        LANES128(v79).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v79).n128_i8[8] =
            vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v80 = vmulq_f32(v68, vmlsq_f32(vmulq_f32(v76, v69), v75, v79));
        v81 = vmulq_f32(v68, vmlsq_f32(vmulq_f32(v72, v79), v69, v74));
        v82 = vceqzq_f32(v65);
        v183_.v183 = vbicq_s8(v78, v82);
        v183_.v184 = vbicq_s8(v80, v82);
        v183_.v185 = vbicq_s8(v81, v82);
        v183_.v186 = vbicq_s8(
            vmlsq_laneq_f32(
                vmlsq_lane_f32(
                    vmulq_n_f32(vnegq_f32(v78),
                                LANES128(v183_.v186).n128_f32[0]),
                    v80,
                    COERCE_AS(float32x2_t, LANES128(v183_.v186).n128_u64[0]),
                    1),
                v81, v183_.v186, 2),
            v82);
        Quat_624bc0((void*)(&v182), (__int64)&v183_.v183);
        v83 = LANES128_OF(vextq_s8(v182, v182, 8u)).n128_u64[0];
        LANES128(a2[1]).n128_u64[0] = LANES128(v182).n128_u64[0];
        LANES128(a2[1]).n128_u64[1] = v83;
        v84 = (float)(PSEUDO_UNFUSED((float)(v30 * 0x1.1df46a0000000p-6f) *
                                     0x1.0000000000000p-1f)) +
              (float)(roundf((float)((float)(v30 * 0x1.1df46a0000000p-6f) *
                                     0x1.0000000000000p-1f) *
                             0x1.45f3060000000p-3f) *
                      -0x1.921fb60000000p+2f);
        if (v84 < -0x1.921fb60000000p+0f) {
          v85 = -0x1.0000000000000p+0f;
        }
        else {
          v85 = 0x1.0000000000000p+0f;
        }
        v86 = -0x1.921fb60000000p+1f - v84;
        if (v84 >= -0x1.921fb60000000p+0f) {
          v86 = v84;
        }
        if (v84 > 0x1.921fb60000000p+0f) {
          v87 = 0x1.921fb60000000p+1f - v84;
        }
        else {
          v87 = v86;
        }
        if (v84 > 0x1.921fb60000000p+0f) {
          v88 = -0x1.0000000000000p+0f;
        }
        else {
          v88 = v85;
        }
        LANES128(v89).n128_u64[0] =
            LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                 COERCE_AS(float32x2_t, 1065353216LL)))
                .n64_u64[0];
        LANES128(v89).n128_u64[1] = LANES128(v89).n128_u64[0];
        v90 = vrsqrteq_f32(v89);
        v91 = vmulq_f32(v90, vrsqrtsq_f32(v90, vmulq_f32(v89, v90)));
        v92 = vbicq_s8(
            vmulq_f32(vmulq_f32(v91, vrsqrtsq_f32(v91, vmulq_f32(v89, v91))),
                      COERCE_AS(float32x4_t, GameData_1a83090)),
            vceqzq_f32(v89));
        PSEUDO_LOW_LANE128(v91, n128_f32, v87 * v87);
        v93 = vmulq_n_f32(
            v92,
            v87 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c190) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c190 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c190) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c190 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c190 *
                                                                                                      (float)(v87 *
                                                                                                              v87))) *
                                                                                      (float)(v87 *
                                                                                              v87))) *
                                                                   (float)(v87 *
                                                                           v87))) *
                                                   (float)(v87 * v87))) *
                                (float)(v87 * v87)) +
                        0x1.0000000000000p+0f));
        LANES128(v92).n128_u64[0] =
            LANES64_OF(vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1))
                .n64_u64[0];
        LANES128(v93).n128_f32[3] =
            v88 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                                  LANES128(
                                                                                                      v91)
                                                                                                      .n128_f32
                                                                                                          [0])) *
                                                                                  LANES128(
                                                                                      v91)
                                                                                      .n128_f32
                                                                                          [0])) *
                                                               LANES128(v91)
                                                                   .n128_f32
                                                                       [0])) *
                                               LANES128(v91).n128_f32[0])) *
                            LANES128(v91).n128_f32[0]) +
                    0x1.0000000000000p+0f);
        v94 = a2[1];
        LANES128(v95).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        v192 = v93;
        LANES128(v96).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v97).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
        LANES128(v95).n128_u64[1] = LANES128(v95).n128_u64[0];
        LANES128(v97).n128_u64[1] = LANES128(v96).n128_u64[0];
        v98 = vmulq_f32(v93, v95);
        LANES128(v93).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v93).n128_i8[8] =
            vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v99 = vmulq_f32(v97, v93);
        LANES128(v97).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v100 = vmlaq_f32(v98, COERCE_AS(float32x4_t, GameData_1a83800), v99);
        LANES128(v99).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v97).n128_u64[1] = LANES128(v92).n128_u64[0];
        LANES128(v96).n128_u64[1] = LANES128(v99).n128_u64[0];
        LANES128(v99).n128_u64[1] = LANES128(a2[1]).n128_u64[0];
        LANES128(v94).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v94).n128_i8[8] =
            vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v101 =
            vmlsq_f32(vmlaq_f32(v100, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v99, v97)),
                      v94, v96);
        v102 = vmulq_f32(v101, v101);
        LANES128(v102).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v102, v102, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])))
                .n64_u64[0];
        LANES128(v102).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0])))
                .n64_u64[0];
        LANES128(v102).n128_u64[1] = LANES128(v102).n128_u64[0];
        v103 = vrsqrteq_f32(v102);
        v104 = vmulq_f32(v103, vrsqrtsq_f32(v103, vmulq_f32(v102, v103)));
        result = vbicq_s8(
            vmulq_f32(v101, vmulq_f32(v104, vrsqrtsq_f32(
                                                v104, vmulq_f32(v102, v104)))),
            vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v102));
        a2[1] = result;
        {
          result;
          return;
        }
      }
    }
    LANES128(v29).n128_u64[0] = *(_QWORD*)(*v13 + 16);
    v28 = COERCE_AS(float32x4_t, GameData_1a83090);
    LANES128(v29).n128_u64[1] = *(unsigned int*)(*v13 + 24);
    if (*(_BYTE*)(*(_QWORD*)(*v13 + 8) + 13LL) != 0) {
      v30 = *(float*)(*v13 + 36);
    }
    else {
      v30 = 0x0.0p+0f;
    }
    goto LABEL_43;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v166 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v166;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  v183_.v186 = COERCE_AS(float32x4_t, GameData_21a6120);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v167 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v167;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  v113 = *(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL);
  v183_.v185 = COERCE_AS(int8x16_t, GameData_21a6120);
  v114 = v113(a1);
  v115 = v114 - 2;
  if (v114 >= 2) {
    v120 = v114;
    v121 = fmodf(a3, 0x1.0000000000000p+0f);
    v122 = (int)a3;
    v123 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v124 = v122 % v123;
    }
    else {
      v125 = v123 - 1;
      if (v123 - 1 >= v122) {
        v125 = (int)a3;
      }
      if (v122 >= 0) {
        v124 = v125;
      }
      else {
        v124 = 0;
      }
    }
    v126 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    v133 = v126 - 1;
    v134 = v120 - 1;
    v135 = 0x1.0000000000000p+0f;
    v116 = v183_.v185;
    v117 = v183_.v186;
    if (v126 - 1 >= v124 + 1) {
      v133 = v124 + 1;
    }
    if (v124 >= -1) {
      v136 = v133;
    }
    else {
      v136 = 0;
    }
    if (v124 == v134 & v136 == v134) {
      v138 = v115;
    }
    else {
      v135 = v121;
      v133 = v136;
      v138 = v124;
    }
    if (*(_BYTE*)(a1 + 12) == 1) {
      v138 = v124;
      v135 = v121;
      v139 = (v124 + 1) % v126;
    }
    else {
      v139 = v133;
    }
    v140 = *(_QWORD*)(a1 + 56);
    if (*(_QWORD*)(a1 + 64) == v140) {
      goto LABEL_110;
    }
    v118 = (__int64*)(v140 + 16LL * v138);
    if (v138 != v139) {
      v142 = (__int64*)(v140 + 16LL * v139);
      v143 = *v118;
      v144 = *v142;
      LANES128(v145).n128_u64[0] = *(_QWORD*)(*v118 + 16);
      {
        __typeof__(v127) z_ = (__typeof__(v127)){0};
        LODWORD(z_) = *(_DWORD*)(*v118 + 24);
        v127 = z_;
      }
      LANES128(v117).n128_u32[0] = *(_DWORD*)(*v118 + 72);
      {
        __typeof__(v128) z_ = (__typeof__(v128)){0};
        LODWORD(z_) = *(_DWORD*)(*v118 + 96);
        v128 = z_;
      }
      PSEUDO_LOW_LANE128(v129, n128_u32, *(_DWORD*)(*v142 + 24));
      LANES128(v145).n128_u64[1] = v127;
      LANES128(v146).n128_u64[0] = *(_QWORD*)(*v118 + 64);
      LANES128(v146).n128_u64[1] = LANES128(v117).n128_u64[0];
      LANES128(v147).n128_u64[0] = *(_QWORD*)(*v118 + 88);
      LANES128(v147).n128_u64[1] = v128;
      LANES128(v148).n128_u64[0] = *(_QWORD*)(*v142 + 16);
      LANES128(v148).n128_u64[1] = LANES128(v129).n128_u64[0];
      if (v135 <= 0x1.0000000000000p+0f) {
        v149 = v135;
      }
      else {
        v149 = 0x1.0000000000000p+0f;
      }
      v150 = v135 < 0x0.0p+0f;
      v151 = 0;
      if (!v150) {
        *(float*)&v151 = v149;
      }
      v152 = 0x1.0000000000000p+0f - *(float*)&v151;
      PSEUDO_LOW_LANE128(v131, n128_f32, v152 * (float)(v152 * v152));
      PSEUDO_LOW_LANE128(
          v129, n128_f32,
          *(float*)&v151 *
              (float)(v152 * (float)(v152 * 0x1.8000000000000p+1f)));
      PSEUDO_LOW_LANE128(
          v130, n128_f32,
          *(float*)&v151 *
              (float)(*(float*)&v151 *
                      (float)((float)(0x1.0000000000000p+0f - *(float*)&v151) *
                              0x1.8000000000000p+1f)));
      v153 = vaddq_f32(vaddq_f32(vmulq_n_f32(v145, LANES128(v131).n128_f32[0]),
                                 vmulq_n_f32(v146, LANES128(v129).n128_f32[0])),
                       vmulq_n_f32(v147, LANES128(v130).n128_f32[0]));
      PSEUDO_LOW_LANE128(v132, n128_f32,
                         *(float*)&v151 *
                             (float)(*(float*)&v151 * *(float*)&v151));
      v154 = vmulq_n_f32(v148, LANES128(v132).n128_f32[0]);
      if (*(_BYTE*)(*(_QWORD*)(*v118 + 8) + 13LL) == 1) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v183_.v185 = v131;
          v183_.v183 = v130;
          v183_.v184 = v129;
          v182 = v132;
          v183_.v186 = v153;
          v181 = v154;
          v172 = __cxa_guard_acquire((__int64)&GameData_21a6130);
          v154 = v181;
          v132 = v182;
          v131 = v183_.v185;
          v153 = v183_.v186;
          v130 = v183_.v183;
          v129 = v183_.v184;
          if (v172 != 0) {
            v173 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v173;
            __cxa_guard_release((__int64)&GameData_21a6130);
            v154 = v181;
            v132 = v182;
            v131 = v183_.v185;
            v153 = v183_.v186;
            v130 = v183_.v183;
            v129 = v183_.v184;
          }
        }
        v155 = COERCE_AS(float32x4_t, GameData_21a6120);
        v143 = *v118;
        v144 = *v142;
      }
      else {
        LANES128(v155).n128_u64[0] = *(_QWORD*)(v143 + 28);
        {
          __typeof__(v151) z_ = (__typeof__(v151)){0};
          LODWORD(z_) = *(_DWORD*)(v143 + 36);
          v151 = z_;
        }
        LANES128(v155).n128_u64[1] = v151;
      }
      LANES128(v156).n128_u64[0] = *(_QWORD*)(v143 + 76);
      {
        __typeof__(v151) z_ = (__typeof__(v151)){0};
        LODWORD(z_) = *(_DWORD*)(v143 + 84);
        v151 = z_;
      }
      LANES128(v157).n128_u64[0] = *(_QWORD*)(v143 + 100);
      v117 = vaddq_f32(v153, v154);
      LANES128(v156).n128_u64[1] = v151;
      {
        __typeof__(v151) z_ = (__typeof__(v151)){0};
        LODWORD(z_) = *(_DWORD*)(v143 + 108);
        v151 = z_;
      }
      LANES128(v157).n128_u64[1] = v151;
      if (*(_BYTE*)(*(_QWORD*)(v144 + 8) + 13LL) == 1) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v183_.v185 = v131;
          v183_.v186 = v117;
          v179 = v157;
          v180 = (__int128)v156;
          v181 = v155;
          v182 = v132;
          v183_.v183 = v130;
          v183_.v184 = v129;
          v174 = __cxa_guard_acquire((__int64)&GameData_21a6130);
          v157 = v179;
          v156 = COERCE_AS(float32x4_t, v180);
          v155 = v181;
          LANES128(v132).n128_u32[0] = LANES128(v182).n128_u32[0];
          LANES128(v130).n128_u32[0] = LANES128(v183_.v183).n128_u32[0];
          LANES128(v129).n128_u32[0] = LANES128(v183_.v184).n128_u32[0];
          LANES128(v131).n128_u32[0] = LANES128(v183_.v185).n128_u32[0];
          v117 = v183_.v186;
          if (v174 != 0) {
            v175 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v175;
            __cxa_guard_release((__int64)&GameData_21a6130);
            v157 = v179;
            v156 = COERCE_AS(float32x4_t, v180);
            v155 = v181;
            LANES128(v132).n128_u32[0] = LANES128(v182).n128_u32[0];
            LANES128(v130).n128_u32[0] = LANES128(v183_.v183).n128_u32[0];
            LANES128(v129).n128_u32[0] = LANES128(v183_.v184).n128_u32[0];
            LANES128(v131).n128_u32[0] = LANES128(v183_.v185).n128_u32[0];
            v117 = v183_.v186;
          }
        }
        v158 = COERCE_AS(float32x4_t, GameData_21a6120);
      }
      else {
        LANES128(v158).n128_u64[0] = *(_QWORD*)(v144 + 28);
        PSEUDO_LOW_LANE128(v154, n128_u32, *(_DWORD*)(v144 + 36));
        LANES128(v158).n128_u64[1] = LANES128(v154).n128_u64[0];
      }
      LANES128(v117).n128_u32[3] = 0;
      v116 = vaddq_f32(
          vaddq_f32(vaddq_f32(vmulq_n_f32(v155, LANES128(v131).n128_f32[0]),
                              vmulq_n_f32(v156, LANES128(v129).n128_f32[0])),
                    vmulq_n_f32(v157, LANES128(v130).n128_f32[0])),
          vmulq_n_f32(v158, LANES128(v132).n128_f32[0]));
      goto LABEL_109;
    }
  LABEL_91:
    v141 = *v118;
    LANES128(v117).n128_u64[0] = *(_QWORD*)(*v118 + 16);
    LANES128(v117).n128_u64[1] = *(unsigned int*)(*v118 + 24);
    if (*(_BYTE*)(*(_QWORD*)(*v118 + 8) + 13LL) == 1) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v183_.v186 = v117;
        v170 = __cxa_guard_acquire((__int64)&GameData_21a6130);
        v117 = v183_.v186;
        if (v170 != 0) {
          v171 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v171;
          __cxa_guard_release((__int64)&GameData_21a6130);
          v117 = v183_.v186;
        }
      }
      v116 = COERCE_AS(float32x4_t, GameData_21a6120);
    }
    else {
      LANES128(v116).n128_u64[0] = *(_QWORD*)(v141 + 28);
      LANES128(v116).n128_u32[2] = *(_DWORD*)(v141 + 36);
    }
  LABEL_109:
    LANES128(v116).n128_u32[3] = 0;
    goto LABEL_110;
  }
  v116 = v183_.v185;
  v117 = v183_.v186;
  v119 = a1 + 56;
  v118 = *(__int64**)(a1 + 56);
  if (*(__int64**)(v119 + 8) != v118) {
    goto LABEL_91;
  }
LABEL_110:
  LANES128(*(a2)).n128_u64[0] = 0;
  LANES128(*(a2)).n128_u64[1] = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v183_.v185 = v116;
    v183_.v186 = v117;
    v168 = __cxa_guard_acquire((__int64)&GameData_21a5680);
    v116 = v183_.v185;
    v117 = v183_.v186;
    if (v168 != 0) {
      v169 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v169;
      __cxa_guard_release((__int64)&GameData_21a5680);
      v116 = v183_.v185;
      v117 = v183_.v186;
    }
  }
  LANES128(*(a2)).n128_u64[0] = LANES128(v117).n128_u64[0];
  v159 = vmulq_f32(v116, vdupq_n_s32(0x3C8EFA35u));
  v160 = *a2;
  LANES128(v160).n128_u64[1] = LANES128(v117).n128_u32[2];
  *a2 = v160;
  math_Quat_FromYawPitchRoll((void*)(&v187), LANES128(v159).n128_f32[0],
                             LANES128(v159).n128_f32[1],
                             LANES128(v159).n128_f32[2]);
  v161 = v187;
  LANES128(a2[1]).n128_u64[0] = LANES128(v187).n128_u64[0];
  LANES128(a2[1]).n128_u64[1] =
      LANES128_OF(vextq_s8(v161, v161, 8u)).n128_u64[0];
  v162 = a2[1];
  v163 = vmulq_f32(v162, v162);
  LANES128(v163).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v163, v163, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])))
          .n64_u64[0];
  LANES128(v163).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])))
          .n64_u64[0];
  LANES128(v163).n128_u64[1] = LANES128(v163).n128_u64[0];
  v164 = vrsqrteq_f32(v163);
  v165 = vmulq_f32(v164, vrsqrtsq_f32(v164, vmulq_f32(v163, v164)));
  result = vbicq_s8(
      vmulq_f32(v162,
                vmulq_f32(v165, vrsqrtsq_f32(v165, vmulq_f32(v163, v165)))),
      vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v163));
  a2[1] = result;
  {
    result;
    return;
  }
}

void memory_e5c540(__int64 a1, unsigned __int8* a2, __int64* a3, float a4,
                   float a5, double a6)
{
  int v6;
  __int64* v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  int8x16_t v18;
  unsigned __int64 v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  unsigned __int64 v23;
  float32x4_t v24;
  bool v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int8* v30;
  unsigned __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  unsigned __int64 v55;
  float32x4_t v56;
  _QWORD v57[2];
  struct {
    __int64 v58;
    __int64 v59;
  } v58_;
  int8x16_t v60;
  struct {
    float32x4_t v61;
    int v62;
  } v61_;
  struct {
    __int64 v63;
    __int64 v64;
    __int64 v65;
  } v63_;
  struct {
    __int64 v66;
    __int64 v67;
    __int64 v68;
  } v66_;

  v6 = LODWORD(a6);
  v9 = (__int64*)(a1 + 88);
  v61_.v62 = 0;
  v61_.v61 = (__typeof__(v61_.v61)){0};
  v63_.v63 = 0;
  v63_.v64 = 0;
  v63_.v65 = 0;
  v66_.v66 = 0;
  v66_.v67 = 0;
  v66_.v68 = 0;
  v54 = a4;
  if (&v63_.v63 != (__int64*)(a1 + 88)) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      GameRoutine_64df20(&v63_.v63, *(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 96));
      a4 = v54;
    }
    else {
      v12 = *v9;
      v13 = *(_QWORD*)(a1 + 96);
      v14 = *(_QWORD*)(a1 + 104);
      v63_.v63 = v12;
      v63_.v64 = v13;
      v63_.v65 = v14;
    }
  }
  if (&v66_.v66 != (__int64*)(a1 + 112)) {
    GameRoutine_6b7aa0(
        (__int64)&v66_.v66, *(__int64**)(a1 + 112), *(__int64**)(a1 + 120),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a1 + 120) - *(_QWORD*)(a1 + 112)) >> 3));
    a4 = v54;
  }
  LANES128(v15).n128_u64[0] = *(_QWORD*)(a1 + 136);
  {
    __typeof__(a6) z_ = (__typeof__(a6)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 144);
    a6 = z_;
  }
  LANES128(v15).n128_f64[1] = a6;
  v56 = v15;
  v55 = LODWORD(a4);
  math_Quat_FromYawPitchRoll((void*)(&v60), a5 * 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f);
  LANES128(v16).n128_u64[0] = 0;
  LANES128(v17).n128_u64[0] = 0;
  v61_.v62 = v6;
  LANES128(v16).n128_u64[1] = v55;
  v18 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a829d0));
  v19 = LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v21).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int32x2_t*)&LANES128(v20).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1);
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v23 = *a2;
  v24 = vmulq_f32(v18, v16);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v25 = (v23 & 1) == 0;
  v26 = v23 >> 1;
  v27 = vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v17, v29));
  v28 = vmulq_f32(v20, v18);
  LANES128(v29).n128_u64[0] = LANES128(v60).n128_u64[0];
  if (v25) {
    v30 = a2 + 1;
  }
  else {
    v30 = *((unsigned __int8**)a2 + 2);
  }
  if (v25) {
    v31 = v26;
  }
  else {
    v31 = *((_QWORD*)a2 + 1);
  }
  v32 = vmlaq_f32(v27, COERCE_AS(float32x4_t, GameData_1a83800), v28);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v34 = vmlsq_f32(v32, v22, v21);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v35).n128_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v35).n128_u64[1] = LANES128(v36).n128_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v60).n128_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v38).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v39).n128_i8[8] =
      vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v40 = vaddq_f32(
      v56,
      vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v33, v34),
                                    COERCE_AS(float32x4_t, GameData_1a83800),
                                    vmulq_f32(v29, v37)),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v36, v38)),
                v39, v35));
  LANES128(v38).n128_u64[0] = LANES128(v40).n128_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v40).n128_u32[2];
  v61_.v61 = v38;
  v41 = *a3;
  v42 = a3[1];
  v43 = *(_QWORD*)GameData_212ec00;
  v57[0] = v41;
  v57[1] = v42;
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  LocatorDispos_db4a70((void*)(&v58_.v58), v43, &v61_.v61, v30, v31, v57);
  v44 = v58_.v59;
  if (v58_.v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58_.v59 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    std___1___shared_weak_count___release_weak(v44);
  }
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v42);
  }
  v45 = v66_.v66;
  if (v66_.v66 != 0) {
    v46 = v66_.v67;
    v47 = fw_memory_g_heap_manager_ptr;
    if (v66_.v66 == v66_.v67) {
      goto LABEL_32;
    }
    v48 = v66_.v67;
    do {
      v49 = *(_BYTE*)(v48 - 24);
      v48 -= 24;
      if ((v49 & 1) != 0) {
        v50 = *(_QWORD*)(v46 - 8);
        if (v50 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) != 0) {
            v51 = 128;
          }
          else {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v51, v50);
        }
      }
      v46 = v48;
    } while (v48 != v45);
    v66_.v67 = v45;
    v45 = v66_.v66;
    if (v66_.v66 != 0) {
    LABEL_32:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v52, v45);
    }
  }
  if ((v63_.v63 & 1) != 0 && v63_.v65 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  v63_.v65);
  }
}

void memory_1361b40(unsigned __int64 a1, char* a2, char* a3, unsigned int* a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  char** v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char** v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  char** v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  char** v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  char** v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  char** v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char** v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  char** v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  char** v49;
  char* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int* v69;
  unsigned __int64* v70;
  unsigned __int64* v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int8 v76;
  char* v77;
  int v78;
  char* v79;
  unsigned __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  char* v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  char* v139;
  __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  __int64 v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  int8x16_t v155;
  int8x16_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  int8x16_t v162;
  float32x4_t v163;
  float32x4_t v164;
  int8x16_t v165;
  float32x4_t v166;
  float32x4_t v167;
  int8x16_t v168;
  int8x16_t v169;
  int8x16_t v170;
  float v171;
  char v172;
  int v173;
  int v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  char* v186;
  unsigned int* i;
  struct {
    __int64 (**v188)();
    unsigned __int64 v189;
    __int64 v190;
    __int64 v191;
  } v188_;
  struct {
    int8x16_t v192;
    float32x4_t v193;
    __int128 v194;
    __int128 v195;
  } v192_;
  struct {
    unsigned __int64 v196;
    unsigned __int64 v197;
  } v196_;
  struct {
    _QWORD v198[2];
    char* v199;
  } v198_;

  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    return;
  }
  v8 = strlen(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v8 | 7) + 1;
    }
    v12 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v198_.v198[1] = v9;
    v198_.v199 = v12;
    v11 = (__int64)a2;
    v198_.v198[0] = v13 | 1;
    goto LABEL_10;
  }
  v11 = (__int64)a2;
  LOBYTE(v198_.v198[0]) = 2 * v8;
  v12 = (char*)v198_.v198 + 1;
  if (v8 != 0) {
  LABEL_10:
    memcpy((__int64)v12, v11, v9);
  }
  v12[v9] = 0;
  v14 = GameData_212eb78[0];
  v15 = **(_QWORD**)GameData_212eb78[0];
  if (v15 != 0) {
    v16 = *(char***)(v15 + 8);
    if (v16 != nullptr) {
      v17 = *v16;
    }
    else {
      v17 = &GameData_1a9f09e;
    }
    v18 = *(_QWORD*)(v15 + 16);
  }
  else {
    v17 = nullptr;
    v18 = 0;
  }
  v19 = *game_g_frame_clock_ptr[0];
  GameRoutine_574470(a1 + 80, (__int64)v17, v18);
  v20 = *(_QWORD*)(*v14 + 8);
  if (v20 != 0) {
    v21 = *(char***)(v20 + 8);
    if (v21 != nullptr) {
      v22 = *v21;
    }
    else {
      v22 = &GameData_1a9f09e;
    }
    v23 = *(_QWORD*)(v20 + 16);
  }
  else {
    v22 = nullptr;
    v23 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v22, v23);
  v24 = *(_QWORD*)(*v14 + 16);
  if (v24 != 0) {
    v25 = *(char***)(v24 + 8);
    if (v25 != nullptr) {
      v26 = *v25;
    }
    else {
      v26 = &GameData_1a9f09e;
    }
    v27 = *(_QWORD*)(v24 + 16);
  }
  else {
    v26 = nullptr;
    v27 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v26, v27);
  v28 = *(_QWORD*)(*v14 + 24);
  if (v28 != 0) {
    v29 = *(char***)(v28 + 8);
    if (v29 != nullptr) {
      v30 = *v29;
    }
    else {
      v30 = &GameData_1a9f09e;
    }
    v31 = *(_QWORD*)(v28 + 16);
  }
  else {
    v30 = nullptr;
    v31 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v30, v31);
  v32 = *(_QWORD*)(*v14 + 32);
  if (v32 != 0) {
    v33 = *(char***)(v32 + 8);
    if (v33 != nullptr) {
      v34 = *v33;
    }
    else {
      v34 = &GameData_1a9f09e;
    }
    v35 = *(_QWORD*)(v32 + 16);
  }
  else {
    v34 = nullptr;
    v35 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v34, v35);
  v36 = *(_QWORD*)(*v14 + 40);
  if (v36 != 0) {
    v37 = *(char***)(v36 + 8);
    if (v37 != nullptr) {
      v38 = *v37;
    }
    else {
      v38 = &GameData_1a9f09e;
    }
    v39 = *(_QWORD*)(v36 + 16);
  }
  else {
    v38 = nullptr;
    v39 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v38, v39);
  v40 = *(_QWORD*)(*v14 + 48);
  if (v40 != 0) {
    v41 = *(char***)(v40 + 8);
    if (v41 != nullptr) {
      v42 = *v41;
    }
    else {
      v42 = &GameData_1a9f09e;
    }
    v43 = *(_QWORD*)(v40 + 16);
  }
  else {
    v42 = nullptr;
    v43 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v42, v43);
  v44 = *(_QWORD*)(*v14 + 56);
  if (v44 != 0) {
    v45 = *(char***)(v44 + 8);
    if (v45 != nullptr) {
      v46 = *v45;
    }
    else {
      v46 = &GameData_1a9f09e;
    }
    v47 = *(_QWORD*)(v44 + 16);
  }
  else {
    v46 = nullptr;
    v47 = 0;
  }
  GameRoutine_574470(a1 + 80, (__int64)v46, v47);
  v185 = v19;
  v48 = *(_QWORD*)(*v14 + 64);
  if (v48 != 0) {
    v49 = *(char***)(v48 + 8);
    if (v49 != nullptr) {
      v50 = *v49;
    }
    else {
      v50 = &GameData_1a9f09e;
    }
    v51 = *(_QWORD*)(v48 + 16);
  }
  else {
    v50 = nullptr;
    v51 = 0;
  }
  v186 = a3;
  GameRoutine_574470(a1 + 80, (__int64)v50, v51);
  if ((v198_.v198[0] & 1) != 0) {
    v52 = v198_.v199;
  }
  else {
    v52 = (char*)v198_.v198 + 1;
  }
  v53 = game_1366260(v52, 0);
  v55 = *(__int64**)(a1 + 40);
  v54 = *(_QWORD*)(a1 + 48);
  v56 = v53;
  if ((unsigned __int64)v55 >= v54) {
    v58 = *(_QWORD*)(a1 + 32);
    v59 = (char*)v55 - v58;
    v60 = ((__int64)v55 - v58) >> 3;
    v61 = v60 + 1;
    if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
      goto LABEL_203;
    }
    v62 = v54 - v58;
    if (v62 >> 2 > v61) {
      v61 = v62 >> 2;
    }
    if ((unsigned __int64)v62 >= 0x7FFFFFFFFFFFFFF8LL) {
      v63 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v63 = v61;
    }
    if (v63 != 0) {
      if (v63 >> 61 != 0) {
        goto LABEL_204;
      }
      v64 = fw_memory_HeapManager_Allocate(*v10, 8 * v63, 16, 0);
    }
    else {
      v64 = 0;
    }
    v65 = v64 + 8 * v63;
    v66 = (unsigned __int64)v55 - v58;
    v67 = (__int64)&v59[v64 + -8 * v60];
    *(_QWORD*)&v59[v64] = v56;
    v57 = (__int64)&v59[v64 + 8];
    memcpy(v67, v58, v66);
    *(_QWORD*)(a1 + 32) = v67;
    *(_QWORD*)(a1 + 40) = v57;
    *(_QWORD*)(a1 + 48) = v65;
    if (v58 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v68, v58);
    }
  }
  else {
    *v55 = v53;
    v57 = (__int64)(v55 + 1);
  }
  *(_QWORD*)(a1 + 40) = v57;
  MultiArcResourceAccessor_574050(a1 + 80, v56 + 32);
  v69 = a4;
  v70 = *((unsigned __int64**)a4 + 7);
  v71 = *((unsigned __int64**)v69 + 8);
  for (i = v69; v70 != v71; v70 += 3) {
    if ((*(_BYTE*)v70 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v192_.v192, v70[2], v70[1]);
    }
    else {
      v72 = *v70;
      v73 = v70[2];
      LANES128(v192_.v192).n128_u64[1] = v70[1];
      LANES128(v192_.v193).n128_u64[0] = v73;
      LANES128(v192_.v192).n128_u64[0] = v72;
    }
    v74 = *(_QWORD*)(a1 + 32);
    v75 = *(_QWORD*)(a1 + 40);
    v76 = LANES128(v192_.v192).n128_u8[0];
    if (v74 != v75) {
      v77 = (const char*)LANES128(v192_.v193).n128_u64[0];
      v78 = LANES128(v192_.v192).n128_u8[0] & 1;
      if ((LANES128(v192_.v192).n128_u8[0] & 1) != 0) {
        v79 = (const char*)LANES128(v192_.v193).n128_u64[0];
      }
      else {
        v79 = &LANES128(v192_.v192).n128_i8[1];
      }
      v80 = strlen(v79);
      v81 = std___1___hash_memory((__int64)v79, v80);
      while (*(_QWORD*)(*(_QWORD*)v74 + 8LL) != v81) {
        v74 += 8;
        if (v74 == v75) {
          goto LABEL_100;
        }
      }
    }
    if (v74 == v75) {
      v77 = (const char*)LANES128(v192_.v193).n128_u64[0];
      v78 = v76 & 1;
    LABEL_100:
      if (v78 != 0) {
        v82 = v77;
      }
      else {
        v82 = &LANES128(v192_.v192).n128_i8[1];
      }
      v83 = game_1366260(v82, 0);
      v85 = *(__int64**)(a1 + 40);
      v84 = *(_QWORD*)(a1 + 48);
      v86 = v83;
      if ((unsigned __int64)v85 >= v84) {
        v88 = *(_QWORD*)(a1 + 32);
        v89 = (char*)v85 - v88;
        v90 = ((__int64)v85 - v88) >> 3;
        v91 = v90 + 1;
        if ((unsigned __int64)(v90 + 1) >> 61 != 0) {
          goto LABEL_203;
        }
        v92 = v84 - v88;
        if (v92 >> 2 > v91) {
          v91 = v92 >> 2;
        }
        if ((unsigned __int64)v92 >= 0x7FFFFFFFFFFFFFF8LL) {
          v93 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v93 = v91;
        }
        if (v93 != 0) {
          if (v93 >> 61 != 0) {
            goto LABEL_204;
          }
          v94 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v93, 16, 0);
        }
        else {
          v94 = 0;
        }
        v95 = v94 + 8 * v93;
        v96 = (unsigned __int64)v85 - v88;
        v97 = (__int64)&v89[v94 + -8 * v90];
        *(_QWORD*)&v89[v94] = v86;
        v87 = (__int64)&v89[v94 + 8];
        memcpy(v97, v88, v96);
        *(_QWORD*)(a1 + 32) = v97;
        *(_QWORD*)(a1 + 40) = v87;
        *(_QWORD*)(a1 + 48) = v95;
        if (v88 != 0) {
          v98 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v98 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v88);
        }
      }
      else {
        *v85 = v83;
        v87 = (__int64)(v85 + 1);
      }
      *(_QWORD*)(a1 + 40) = v87;
      MultiArcResourceAccessor_574050(a1 + 80, v86 + 32);
      v76 = LANES128(v192_.v192).n128_u8[0];
    }
    if ((v76 & 1) != 0 && LANES128(v192_.v193).n128_u64[0] != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v99,
                                    LANES128(v192_.v193).n128_i64[0]);
    }
  }
  v101 = *(_QWORD*)(a1 + 32);
  v100 = *(_QWORD*)(a1 + 40);
  v102 = (__int64*)fw_memory_g_heap_manager_ptr;
  v103 = v101;
  if (v101 != v100) {
    v104 = std___1___hash_memory((__int64)"Layout/Common.arc", 0x11u);
    v103 = v101;
    while (*(_QWORD*)(*(_QWORD*)v103 + 8LL) != v104) {
      v103 += 8;
      if (v103 == v100) {
        goto LABEL_133;
      }
    }
  }
  if (v103 == v100) {
  LABEL_133:
    v105 = game_1366260("Layout/Common.arc", 0);
    v107 = *(__int64**)(a1 + 64);
    v106 = *(_QWORD*)(a1 + 72);
    v108 = v105;
    if ((unsigned __int64)v107 >= v106) {
      v110 = *(_QWORD*)(a1 + 56);
      v111 = (char*)v107 - v110;
      v112 = ((__int64)v107 - v110) >> 3;
      v113 = v112 + 1;
      if ((unsigned __int64)(v112 + 1) >> 61 != 0) {
        goto LABEL_203;
      }
      v114 = v106 - v110;
      if (v114 >> 2 > v113) {
        v113 = v114 >> 2;
      }
      if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFF8LL) {
        v115 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v115 = v113;
      }
      if (v115 != 0) {
        if (v115 >> 61 != 0) {
          goto LABEL_204;
        }
        v116 = fw_memory_HeapManager_Allocate(*v102, 8 * v115, 16, 0);
      }
      else {
        v116 = 0;
      }
      v117 = v116 + 8 * v115;
      v118 = (unsigned __int64)v107 - v110;
      v119 = (__int64)&v111[v116 + -8 * v112];
      *(_QWORD*)&v111[v116] = v108;
      v109 = (__int64)&v111[v116 + 8];
      memcpy(v119, v110, v118);
      *(_QWORD*)(a1 + 56) = v119;
      *(_QWORD*)(a1 + 64) = v109;
      *(_QWORD*)(a1 + 72) = v117;
      if (v110 != 0) {
        v120 = 128;
        if (*(_QWORD*)(*v102 + 200) == 0) {
          v120 = 56;
        }
        nn_mem_StandardAllocator_Free(*v102 + v120, v110);
      }
    }
    else {
      *v107 = v105;
      v109 = (__int64)(v107 + 1);
    }
    *(_QWORD*)(a1 + 64) = v109;
    MultiArcResourceAccessor_574050(a1 + 80, v108 + 32);
    v101 = *(_QWORD*)(a1 + 32);
    v100 = *(_QWORD*)(a1 + 40);
    if (v101 == v100) {
    LABEL_155:
      v122 = game_1366260("Layout/CommonMenu.arc", 0);
      v124 = *(__int64**)(a1 + 64);
      v123 = *(_QWORD*)(a1 + 72);
      v125 = v122;
      if ((unsigned __int64)v124 < v123) {
        *v124 = v122;
        v126 = (__int64)(v124 + 1);
      LABEL_171:
        *(_QWORD*)(a1 + 64) = v126;
        MultiArcResourceAccessor_574050(a1 + 80, v125 + 32);
        goto LABEL_172;
      }
      v127 = *(_QWORD*)(a1 + 56);
      v128 = (char*)v124 - v127;
      v129 = ((__int64)v124 - v127) >> 3;
      v130 = v129 + 1;
      if ((unsigned __int64)(v129 + 1) >> 61 == 0) {
        v131 = v123 - v127;
        if (v131 >> 2 > v130) {
          v130 = v131 >> 2;
        }
        if ((unsigned __int64)v131 >= 0x7FFFFFFFFFFFFFF8LL) {
          v132 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v132 = v130;
        }
        if (v132 == 0) {
          v133 = 0;
        LABEL_167:
          v134 = v133 + 8 * v132;
          v135 = (unsigned __int64)v124 - v127;
          v136 = (__int64)&v128[v133 + -8 * v129];
          *(_QWORD*)&v128[v133] = v125;
          v126 = (__int64)&v128[v133 + 8];
          memcpy(v136, v127, v135);
          *(_QWORD*)(a1 + 56) = v136;
          *(_QWORD*)(a1 + 64) = v126;
          *(_QWORD*)(a1 + 72) = v134;
          if (v127 != 0) {
            v137 = 128;
            if (*(_QWORD*)(*v102 + 200) == 0) {
              v137 = 56;
            }
            nn_mem_StandardAllocator_Free(*v102 + v137, v127);
          }
          goto LABEL_171;
        }
        if (v132 >> 61 == 0) {
          v133 = fw_memory_HeapManager_Allocate(*v102, 8 * v132, 16, 0);
          goto LABEL_167;
        }
      LABEL_204:
        GameRoutine_60a210();
      }
    LABEL_203:
      GameRoutine_1364380();
    }
  }
  else if (v101 == v100) {
    goto LABEL_155;
  }
  v121 = std___1___hash_memory((__int64)"Layout/CommonMenu.arc", 0x15u);
  while (*(_QWORD*)(*(_QWORD*)v101 + 8LL) != v121) {
    v101 += 8;
    if (v101 == v100) {
      goto LABEL_155;
    }
  }
  if (v101 == v100) {
    goto LABEL_155;
  }
LABEL_172:
  Manager_136b340((_QWORD*)(ui_Manager_instance_ + 1264), a1 + 80);
  GameRoutine_60a020((__int64)v198_.v198, v186);
  GameRoutine_1a09ce0((__int64)v198_.v198, ".bflyt", 6u);
  LANES128(v192_.v192).n128_u8[0] = 0;
  LANES128(v192_.v193).n128_u64[1] = 0;
  *((_QWORD*)&v192_.v194 + 1) = 0;
  *(_QWORD*)&v192_.v195 = 0;
  LOWORD(v192_.v194) = 257;
  GameRoutine_575cb0(&v196_.v196);
  LayoutEx_5791c0(*i, i[1], i[2], i[3]);
  v138 = *((_QWORD*)i + 4);
  LANES128(v192_.v192).n128_u64[1] = *((_QWORD*)i + 3);
  LANES128(v192_.v193).n128_u64[0] = v138;
  v188_.v188 = ui_Layout_ControlCreator_vtable;
  v188_.v189 = a1;
  if ((v198_.v198[0] & 1) != 0) {
    v139 = v198_.v199;
  }
  else {
    v139 = (char*)v198_.v198 + 1;
  }
  LayoutEx_5797d0(a1 + 152, (__int64)&v196_.v196, v185 + 568, a1 + 80,
                  (__int64)&v188_.v188, (__int64)GameData_2132260,
                  (__int64)&v192_.v192, (__int64)v139);
  v140 = ControlCreator_1362940(*(_QWORD*)(a1 + 176));
  v196_.v197 += v140;
  v141 = *(_QWORD*)(GameData_220b680 + 8);
  if ((int)i[4] <= 0) {
    v142 = v196_.v196;
  }
  else {
    v142 = i[4];
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, unsigned __int64,
                                          __int64))(*(_QWORD*)v141 + 48LL))(
      (void*)(&v192_.v192), *(_QWORD*)(GameData_220b680 + 8), 2 * v142, 4096);
  GameRoutine_5d610((_QWORD*)(a1 + 1840), &v192_.v192);
  gxc_GpuMemory_Destroy_GpuMemory(&v192_.v192);
  if ((int)i[5] <= 0) {
    v143 = v196_.v197;
  }
  else {
    v143 = i[5];
  }
  if (2 * v143 != 0) {
    (*(__attribute__((swiftcall)) void (**)(
        PSEUDO_X8, __int64, unsigned __int64, __int64))(*(_QWORD*)v141 + 48LL))(
        (void*)(&v192_.v192), v141, 2 * v143, 4096);
    GameRoutine_5d610((_QWORD*)(a1 + 1952), &v192_.v192);
    gxc_GpuMemory_Destroy_GpuMemory(&v192_.v192);
  }
  WORD4(v192_.v195) = 0;
  v144 = GameData_220b680 + 56;
  LANES128(v192_.v192).n128_u32[0] = 16;
  LANES128(v192_.v192).n128_u64[1] = v142;
  LANES128(v192_.v193).n128_u32[0] = 2;
  *((_QWORD*)&v192_.v194 + 1) = *GameData_2130eb0[0];
  *(_QWORD*)&v192_.v195 = 0;
  v145 = *(_QWORD*)(a1 + 1856);
  LANES128(v192_.v193).n128_u64[1] = GameData_220b680 + 56;
  *(_QWORD*)&v192_.v194 = v145;
  v146 = game_g_frame_clock_ptr[0];
  GameRoutine_55d9a0(a1 + 1760, *game_g_frame_clock_ptr[0] + 568,
                     (__int64)&v192_.v192);
  if (2 * v143 != 0) {
    v147 = *(_QWORD*)(a1 + 1968);
    LANES128(v192_.v192).n128_u64[1] = v143;
    LANES128(v192_.v193).n128_u32[0] = 2;
    LANES128(v192_.v193).n128_u64[1] = v144;
    *(_QWORD*)&v192_.v194 = v147;
    GameRoutine_55d9a0(a1 + 1872, *v146 + 568, (__int64)&v192_.v192);
  }
  v148 = *(float*)(a1 + 192);
  v149 = *(float*)(a1 + 196);
  *(_QWORD*)(a1 + 456) = a1 + 1760;
  *(_QWORD*)(a1 + 464) = a1 + 1872;
  *(_QWORD*)(a1 + 440) = ui_Manager_instance_;
  v150 = v148 * 0x1.0000000000000p-1f;
  v151 = v149 * 0x1.0000000000000p-1f;
  LANES128(v152).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                           COERCE_AS(float32x2_t, 1065353216LL)))
          .n64_u64[0];
  LANES128(v152).n128_u64[1] = LANES128(v152).n128_u64[0];
  v153 = vrsqrteq_f32(v152);
  v154 = vmulq_f32(v153, vrsqrtsq_f32(v153, vmulq_f32(v152, v153)));
  v155 = vmulq_f32(vmulq_f32(v154, vrsqrtsq_f32(v154, vmulq_f32(v152, v154))),
                   COERCE_AS(float32x4_t, GameData_1a83090));
  LANES128(v154).n128_u32[0] = 0;
  LANES128(v154).n128_u32[2] = 0;
  v156 = vbicq_s8(v155, vceqzq_f32(v152));
  LANES128(v157).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v158).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v158).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v159).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v159).n128_i8[8] =
      vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v160).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v160).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v157).n128_i8[8] =
      vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v161 = vmlsq_f32(vmulq_f32(v158, v159), v157, v160);
  v162 = vmulq_f32(v161, v161);
  LANES128(v162).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v162, v162, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0])))
          .n64_u64[0];
  LANES128(v162).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0])))
          .n64_u64[0];
  LANES128(v162).n128_u64[1] = LANES128(v162).n128_u64[0];
  v163 = vrsqrteq_f32(v162);
  v164 = vmulq_f32(v163, vrsqrtsq_f32(v163, vmulq_f32(v162, v163)));
  v165 = vbicq_s8(
      vmulq_f32(v161,
                vmulq_f32(v164, vrsqrtsq_f32(v164, vmulq_f32(v162, v164)))),
      vceqzq_f32(v162));
  LANES128(v161).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v166).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v161).n128_i8[8] =
      vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v166).n128_i8[8] =
      vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v167 = vmlsq_f32(vmulq_f32(v157, v161), v166, v159);
  v168 = vmulq_f32(v165, COERCE_AS(float32x4_t, GameData_1a83260));
  LANES128(v168).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v168, v168, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
          .n64_u64[0];
  v169 = vmulq_f32(v167, COERCE_AS(float32x4_t, GameData_1a83260));
  v170 = vmulq_f32(v156, COERCE_AS(float32x4_t, GameData_1a83260));
  LANES128(v169).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v169, v169, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
          .n64_u64[0];
  LANES128(v165).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
          .n64_u32[1];
  LANES128(v170).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v170, v170, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
          .n64_u64[0];
  LANES128(v167).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
          .n64_u32[1];
  LANES128(v168).n128_f32[0] = 0x1.0000000000000p+0f / (float)(v150 + v150);
  PSEUDO_LOW_LANE128(v169, n128_f32,
                     0x1.0000000000000p+0f / (float)(v151 + v151));
  LANES128(v156).n128_u32[3] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
          .n64_u32[1];
  *(int8x16_t*)(a1 + 336) = v165;
  *(float32x4_t*)(a1 + 352) = v167;
  *(int8x16_t*)(a1 + 368) = v156;
  v171 = -(float)((float)(v150 - v150) * LANES128(v168).n128_f32[0]);
  LANES128(v168).n128_u32[1] = 0;
  LANES128(v168).n128_u32[2] = 0;
  LANES128(v168).n128_f32[0] =
      LANES128(v168).n128_f32[0] + LANES128(v168).n128_f32[0];
  LANES128(v168).n128_f32[3] = v171;
  LANES128(v154).n128_f32[1] =
      LANES128(v169).n128_f32[0] + LANES128(v169).n128_f32[0];
  LANES128(v154).n128_f32[3] =
      -(float)((float)(v151 - v151) * LANES128(v169).n128_f32[0]);
  v192_.v192 = v168;
  v192_.v193 = v154;
  v192_.v194 = GameData_1a83120;
  v192_.v195 = GameData_1a82dc0;
  DrawInfo_5769d0((_QWORD*)(a1 + 256), (__int64*)&v192_.v192);
  DrawInfo_5769c0(a1 + 256, 0, (int)v148, (int)v149);
  v172 = *(_BYTE*)(a1 + 660);
  v192_.v194 = (__typeof__(v192_.v194)){0};
  v192_.v193 = (__typeof__(v192_.v193)){0};
  v192_.v192 = (__typeof__(v192_.v192)){0};
  *(_BYTE*)(a1 + 660) = v172 | 8;
  v173 = *(_DWORD*)(*v146 + 13312);
  v174 = *(_DWORD*)(*v146 + 13316);
  GameRoutine_5fc3e0(&v192_.v192);
  v188_.v190 = 0;
  v188_.v191 = 0;
  v188_.v188 = nullptr;
  v188_.v189 = 0;
  LANES128(v192_.v192).n128_f32[2] = (float)v173;
  LANES128(v192_.v192).n128_f32[3] = (float)v174;
  GameRoutine_5fc3f0(&v188_.v188);
  v188_.v189 = __PAIR64__(v174, v173);
  *(float32x4_t*)(a1 + 528) = v192_.v193;
  *(_OWORD*)(a1 + 544) = v192_.v194;
  *(int8x16_t*)(a1 + 512) = v192_.v192;
  v175 = v188_.v190;
  *(_QWORD*)(a1 + 584) = v188_.v191;
  *(_QWORD*)(a1 + 576) = v175;
  v176 = v188_.v189;
  *(_QWORD*)(a1 + 560) = v188_.v188;
  *(_QWORD*)(a1 + 568) = v176;
  v177 = *((_QWORD*)i + 5);
  if (v177 == 0) {
    goto LABEL_197;
  }
  v178 = i[12];
  if ((int)v178 >= 1) {
    v179 = LayoutEx_579180(v178);
    v180 = *(_QWORD*)(a1 + 2304);
    *(_QWORD*)(a1 + 2304) = v179;
    if (v180 != 0) {
      v181 = *(_QWORD*)(a1 + 2352);
      LANES128(v192_.v192).n128_u64[0] = v180;
      if (v181 == 0) {
        GameRoutine_60a310();
      }
      (*(void (**)(__int64, int8x16_t*))(*(_QWORD*)v181 + 48LL))(v181,
                                                                 &v192_.v192);
    }
    LANES128(v192_.v192).n128_u64[0] = (unsigned __int64)GameData_202f048;
    *(_QWORD*)&v192_.v194 = &v192_.v192;
    GameRoutine_64adb0(&v192_.v192, (_QWORD*)(a1 + 2320));
    if ((int8x16_t*)v192_.v194 == &v192_.v192) {
      v182 = 32;
    }
    else {
      if ((_QWORD)v192_.v194 == 0) {
      LABEL_195:
        memset(*(_QWORD*)(a1 + 2304), 0, (int)i[12]);
        v177 = *((_QWORD*)i + 5);
        goto LABEL_196;
      }
      v182 = 40;
    }
    (*(void (**)(_QWORD))(*(_QWORD*)v192_.v194 + v182))(v192_.v194);
    goto LABEL_195;
  }
LABEL_196:
  v183 = *(_QWORD*)(a1 + 2304);
  *(_QWORD*)(a1 + 616) = v177;
  *(_QWORD*)(a1 + 624) = v183;
LABEL_197:
  MultiArcResourceAccessor_Unknown3(a1 + 80, (__int64)ControlCreator_1362b00,
                                    0);
  GameHr_1366e60(*(_QWORD*)(a1 + 176));
  *(_BYTE*)(a1 + 24) = 1;
  if ((v198_.v198[0] & 1) != 0 && v198_.v199 != nullptr) {
    v184 = 128;
    if (*(_QWORD*)(*v102 + 200) == 0) {
      v184 = 56;
    }
    nn_mem_StandardAllocator_Free(*v102 + v184, (__int64)v198_.v199);
  }
}

__int64 memory_1438bc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_14393f0();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  return a1;
}

__int64 memory_143b500(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_1439bb0();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  return a1;
}

__int64 memory_143c2f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_143c080();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  return a1;
}

#pragma GCC visibility pop
