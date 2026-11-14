#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, _QWORD);
__int64 AsyncLoadImage_17e4db0(__int64 result, const char*, char);
__int64 EmbeddedImage_1889eb0(__int64, _BYTE*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 UnitMakeCamera_179b570(_QWORD);
__int64 UnitMakeCamera_179ba60(_QWORD);
__int64 UnitMakeCamera_179bb70(_QWORD);
__int64 UnitMake_16337a0();
__int64 __cxa_guard_acquire_alt1(_QWORD) __asm__("__cxa_guard_acquire");
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
const char* Manager_a4aea0(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_225d4d8;
extern __int128 GameData_21a6120;
extern __int64 (*game_menu_anonymous_UnitMakeDitherAlpha_vtable[])();
extern __int64* GameData_212e348;
extern __int64* GameData_2131a88[7];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21759e0;
extern __int64 GameData_225d460;
extern __int64 GameData_225d468;
extern __int64 GameData_225d470;
extern __int64 GameData_225d480;
extern __int64 GameData_225d490;
extern __int64 GameData_225d4a0;
extern __int64 GameData_225d4a8;
extern __int64 GameData_225d4b0;
extern __int64 GameData_225d4c0;
extern __int64 GameData_225d4d0;
extern __int64 GameData_225d4e0;
extern __int64 GameData_2264528;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern char GameData_225d458;
extern char GameData_225d498;
extern int GameData_225d478;
extern int GameData_225d488;
extern int GameData_225d4b8;
extern int GameData_225d4c8;
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen(const char*);
void GameHr_157e0f0(__int64*, __int64, const char*);
void TextBoxEx_188ac20(__int64, const char*, unsigned __int16*);
void __attribute__((noreturn)) GameRoutine_17e6d90();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 game_menu_15bc070(__int64 a1);
__int64 game_menu_16325f0(__int64 result, char a2, char a3);
__int64 game_menu_179b0a0(__int64 result);
__int64 game_menu_17e5d20(__int64 a1, int a2);
__int64 game_menu_187eb30(__int64 a1);

__int64 game_menu_15bc070(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  struct {
    __int64* v7;
    __int64 v8;
  } v7_;

  LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 952),
                         "L_MenuItem_Info");
  result = v7_.v8;
  if (v7_.v8 != 0) {
    v3 = *(unsigned __int8*)(a1 + 1080);
    v4 = std___1___shared_weak_count_lock(v7_.v8);
    if (v4 != 0) {
      v5 = v4;
      if (v7_.v7 != nullptr) {
        if (v3 == 2) {
          v6 = "MID_BtlMenu_WeaponCost";
        }
        else {
          v6 = nullptr;
        }
        GameHr_157e0f0(v7_.v7, (__int64)"MID_Sys_Acquired", v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    result = v7_.v8;
    if (v7_.v8 != 0) {
      return std___1___shared_weak_count___release_weak(v7_.v8);
    }
  }
  return result;
}

__int64 game_menu_16325f0(__int64 result, char a2, char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_225d4e0 == 0) {
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_225d4d8) != 0) {
      GameData_225d458 = 14;
      GameData_225d470 = 0;
      GameData_225d478 = 0;
      GameData_225d480 = 0;
      GameData_225d488 = 0;
      GameData_225d490 = 0;
      GameData_225d498 = 0;
      GameData_225d4c0 = 0;
      GameData_225d4c8 = 0;
      GameData_225d4d0 = 0;
      GameData_225d4a0 = 0;
      GameData_225d4a8 = 0;
      GameData_225d4b0 = 0;
      GameData_225d4b8 = 0;
      GameData_225d460 = 0;
      GameData_225d468 = (__int64)UnitMake_16337a0;
      __cxa_guard_release((__int64)&GameData_225d4d8);
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v7 = 888;
    v8 = v6;
    v9 = GameData_212c608[0];
    if ((a2 & 1) != 0) {
      v7 = 720;
    }
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    v10 = *(_QWORD*)(v5 + v7);
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)v6 = v9 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    result = game_ProcInst_Register(v6);
    GameData_225d4e0 = v8;
    *(_QWORD*)(v8 + 152) = v10;
    *(_BYTE*)(v8 + 160) = a3 & 1;
    *(_DWORD*)(v8 + 164) = 0;
    *(_QWORD*)v8 = game_menu_anonymous_UnitMakeDitherAlpha_vtable;
    v11 = *(_QWORD*)(v5 + 32);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 40);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = *(_QWORD*)(v11 + 40);
      }
      *(_QWORD*)(v11 + 40) = v8;
      *(_QWORD*)(v8 + 24) = "UnitMakeDitherAlpha";
      *(_QWORD*)(v8 + 32) = v11;
      *(_DWORD*)(v8 + 140) =
          (unsigned int)game_HashString32("UnitMakeDitherAlpha");
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_225d458;
      *(_QWORD*)(v8 + 16) = &GameData_225d458;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8);
      if ((result & 1) != 0 && (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v8 + 136) & 1) == 0) {
      return (__int64)ProcInst_657a50(v8, 1);
    }
  }
  return result;
}

__int64 game_menu_179b0a0(__int64 result)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  _BOOL4 v13;
  __int128 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[25];

  v1 = *(_DWORD*)(*GameData_2131a88[0] + 152);
  if (v1 <= 7 && ((1 << v1) & 0xA1) != 0) {
    return result;
  }
  v3 = result;
  v4 = *(_QWORD*)game_g_game_setting_ptr;
  v5 = *(float*)(*(_QWORD*)game_g_game_setting_ptr + 968LL);
  if (v5 <= 0.25f) {
    v7 = 0.0f;
    if (v5 >= -0.25f) {
      goto LABEL_11;
    }
    v6 = 0.25f;
  }
  else {
    v6 = -0.25f;
  }
  v7 = (float)(v5 + v6) * 0x1.5555560000000p+0f;
LABEL_11:
  v8 = fabsf(v7);
  if (*(_BYTE*)(result + 216) == 1) {
    if (v8 <= 0x1.47ae140000000p-7f ||
        (v9 = -0.25f, v5 <= 0.25f) && (v9 = 0.25f, v5 >= -0.25f)) {
      v12 = *(float*)(result + 220);
    }
    else {
      v10 = (float)(v5 + v9) * 0x1.5555560000000p+0f;
      if (v10 > 0.0f) {
        v11 = *(float*)(result + 220);
        if (v11 > 0.0f) {
          v11 = 0.0f;
        }
        v12 = v11 + (float)(v10 * -0x1.3333340000000p-1f);
        if (v12 <= -8.0f) {
          v12 = -8.0f;
        }
      LABEL_31:
        v16 = *(float*)(result + 212);
        *(float*)(result + 220) = v12;
        v17 = v16 + v12;
        *(float*)(result + 212) = v17;
        if (v17 >= 0.0f) {
          goto LABEL_45;
        }
        v18 = 0x1.6800000000000p+8f;
        goto LABEL_44;
      }
      v12 = *(float*)(result + 220);
      if (v10 < 0.0f) {
        if (v12 < 0.0f) {
          v12 = 0.0f;
        }
        v12 = v12 + (float)(v10 * -0x1.3333340000000p-1f);
        if (v12 >= 8.0f) {
          v12 = 8.0f;
        }
        goto LABEL_42;
      }
    }
    if (v12 < 0.0f) {
      v12 = v12 + (float)((float)(1.0f - v12) / 6.0f);
      if (v12 >= 0.0f) {
        v12 = 0.0f;
      }
      goto LABEL_31;
    }
    if (v12 > 0.0f) {
      v12 = v12 + (float)((float)(-1.0f - v12) / 6.0f);
      if (v12 <= 0.0f) {
        v12 = 0.0f;
      }
    LABEL_42:
      v19 = *(float*)(result + 212);
      *(float*)(result + 220) = v12;
      v17 = v12 + v19;
      *(float*)(result + 212) = v17;
      if (v17 < 0x1.6800000000000p+8f) {
        goto LABEL_45;
      }
      v18 = -0x1.6800000000000p+8f;
    LABEL_44:
      *(float*)(result + 212) = v17 + v18;
    }
  LABEL_45:
    v13 = v12 > 0.0f || v12 < 0.0f;
    if (v1 != 4 || GameData_2264528 != 0) {
      goto LABEL_78;
    }
    v13 = false;
    if (v12 == 0.0f) {
    LABEL_70:
      v28 = *(_DWORD*)(v4 + 952);
      if ((v28 & 0x1000000) == 0) {
      LABEL_71:
        if ((v28 & 0x800000) != 0 && (*(_BYTE*)(result + 208) & 1) == 0) {
          result = UnitMakeCamera_179bb70(result);
        }
        goto LABEL_77;
      }
    LABEL_75:
      if (*(_BYTE*)(result + 208) == 1) {
        result = UnitMakeCamera_179ba60(result);
      }
    LABEL_77:
      if (GameData_2264528 != 0) {
        return result;
      }
    LABEL_78:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_21a6130) != 0) {
        v30 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v30;
        __cxa_guard_release_alt1(&GameData_21a6130);
      }
      v29 = GameData_21a6120;
      DWORD1(v29) = *(_DWORD*)(v3 + 212);
      *(_OWORD*)(*(_QWORD*)(v3 + 152) + 64LL) = v29;
      if (v13) {
        UnitMakeCamera_179b570(v3);
        if (v8 > 0x1.47ae140000000p-7f) {
          result = snd_fnd_WeakHandle_isValid(v3 + 224);
          if ((result & 1) == 0) {
            game_80c770((void*)(v32), "SE_SYS_CharaMove_CharaMake_lp");
            return GameRoutine_112180(v3 + 224, v32);
          }
          return result;
        }
      }
      goto LABEL_83;
    }
    v21 = *(float*)(v4 + 968);
    v22 = -0.25f;
    if (v21 > 0.25f || (v22 = 0.25f, v21 < -0.25f)) {
      if ((float)((float)(v21 + v22) * 0x1.5555560000000p+0f) != 0.0f) {
        v13 = true;
        v28 = *(_DWORD*)(v4 + 952);
        if ((v28 & 0x1000000) == 0) {
          goto LABEL_71;
        }
        goto LABEL_75;
      }
    }
    if (v12 >= 0.0f) {
      v23 = v12 + (float)((float)(-1.0f - v12) / 6.0f);
      if (v23 <= 0.0f) {
        v23 = 0.0f;
      }
      v27 = *(float*)(result + 212);
      *(float*)(result + 220) = v23;
      v25 = v23 + v27;
      *(float*)(result + 212) = v25;
      if (v25 < 0x1.6800000000000p+8f) {
        goto LABEL_67;
      }
      v26 = -0x1.6800000000000p+8f;
    }
    else {
      v23 = v12 + (float)((float)(1.0f - v12) / 6.0f);
      if (v23 >= 0.0f) {
        v23 = 0.0f;
      }
      v24 = *(float*)(result + 212);
      *(float*)(result + 220) = v23;
      v25 = v23 + v24;
      *(float*)(result + 212) = v25;
      if (v25 >= 0.0f) {
        goto LABEL_67;
      }
      v26 = 0x1.6800000000000p+8f;
    }
    *(float*)(result + 212) = v25 + v26;
  LABEL_67:
    v13 = v23 > 0.0f || v23 < 0.0f;
    goto LABEL_70;
  }
  v13 = false;
  *(_DWORD*)(result + 220) = 0;
  if (v1 == 4 && GameData_2264528 == 0) {
    goto LABEL_78;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(&GameData_21a6130) != 0) {
    v31 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v31;
    __cxa_guard_release_alt1(&GameData_21a6130);
  }
  v15 = GameData_21a6120;
  DWORD1(v15) = *(_DWORD*)(v3 + 212);
  *(_OWORD*)(*(_QWORD*)(v3 + 152) + 64LL) = v15;
LABEL_83:
  result = snd_fnd_WeakHandle_isValid(v3 + 224);
  if ((result & 1) != 0) {
    snd_Fade_Fade_10c830(v32, 0.0f);
    snd_stop_ffc40(v3 + 224, v32);
    return snd_Fade_Destroy_Fade(v32);
  }
  return result;
}

__int64 game_menu_17e5d20(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  char* v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64** v58;
  __int64* v59;
  __int64* v60;
  int v61;
  __int64* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  char v67;
  char* v69[2];
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
    unsigned __int64 v73;
    int v74;
    int v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    int v88;
    int v89;
  } v70_;

  v2 = **(_QWORD**)(*(_QWORD*)(a1 + 256) + 40LL);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 256) + 40LL) +
                                     8LL) -
                          v2) >>
                         3)) {
    GameRoutine_17e6d90();
  }
  v3 = *(_QWORD*)(v2 + 8LL * a2);
  v5 = *(const char**)(v3 + 72);
  if (v5 != nullptr) {
    v6 = *(const char**)(a1 + 296);
    if (v6 == nullptr || strcmp(v6, v5) != 0) {
      v7 = *(_QWORD*)(a1 + 272);
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = *(_QWORD*)(a1 + 264);
          v10 = v8;
          if (v9 == 0) {
          LABEL_70:
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
            goto LABEL_72;
          }
          *(_QWORD*)(a1 + 296) = *(_QWORD*)(v3 + 72);
          v11 = GameData_21759e0;
          v12 = *(const char**)(v3 + 72);
          v13 = Manager_a4aea0(GameData_21759e0);
          v14 =
              game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx", v13, v12);
          v15 = snd_g_fileIndex_ptr[0];
          v16 = *snd_g_fileIndex_ptr[0];
          v17 = strlen(v14);
          if ((fs_6360e0(v16, (__int64)v14, v17, 0, 0) & 1) != 0) {
            goto LABEL_52;
          }
          v18 = BYTE3(v11);
          if ((unsigned __int8)v11 == 102) {
            if (BYTE5(v11) == 0 && BYTE4(v11) == 65 && v18 == 67 &&
                BYTE1(v11) == 114 && BYTE2(v11) == 45) {
              v19 = 29286;
              goto LABEL_31;
            }
          }
          else if ((unsigned __int8)v11 == 101) {
            if (BYTE1(v11) == 115) {
              if ((v11 & 0xFF000000000000LL) == 0 && BYTE5(v11) == 57 &&
                  BYTE4(v11) == 49 && BYTE2(v11) == 45 && v18 == 52) {
                v19 = 29541;
                goto LABEL_31;
              }
            }
            else if (BYTE1(v11) == 110 && BYTE5(v11) == 0 && BYTE4(v11) == 66 &&
                     BYTE2(v11) == 45 && v18 == 71) {
              v19 = 0x53552D6E65LL;
            LABEL_31:
              if ((unsigned __int8)v11 != (unsigned __int8)v19 ||
                  (_BYTE)v11 != 0 &&
                      (BYTE1(v11) != BYTE1(v19) ||
                       BYTE1(v11) != 0 &&
                           (BYTE2(v11) != BYTE2(v19) ||
                            BYTE2(v11) != 0 &&
                                (v18 != BYTE3(v19) ||
                                 v18 != 0 &&
                                     (BYTE4(v11) != BYTE4(v19) ||
                                      BYTE4(v11) != 0 &&
                                          (BYTE5(v11) != BYTE5(v19) ||
                                           BYTE5(v11) != 0 &&
                                               (BYTE6(v11) != BYTE6(v19) ||
                                                BYTE6(v11) != 0 &&
                                                    (v19 ^
                                                     (unsigned __int64)v11) >>
                                                            56 !=
                                                        0))))))) {
                v20 = Manager_a4aea0(v19);
                v21 = game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx",
                                       v20, v12);
                v22 = *v15;
                v23 = v21;
                v24 = strlen(v21);
                if ((fs_6360e0(v22, (__int64)v23, v24, 0, 0) & 1) != 0) {
                  v25 = strlen(v23);
                  if (v25 < 0xFFFFFFFFFFFFFFF7LL) {
                    v26 = v25;
                    if (v25 >= 0x17) {
                      if ((v25 | 7) == 0x17) {
                        v54 = 26;
                      }
                      else {
                        v54 = (v25 | 7) + 1;
                      }
                      v27 = (const char*)fw_memory_HeapManager_Allocate(
                          fw_memory_g_heap_manager, v54, 16, 0);
                      v70_.v71 = v26;
                      v70_.v72 = v27;
                      v70_.v70 = v54 | 1;
                    }
                    else {
                      LOBYTE(v70_.v70) = 2 * v25;
                      v27 = (char*)&v70_.v70 + 1;
                      if (v25 == 0) {
                        goto LABEL_140;
                      }
                    }
                    memmove((__int64)v27, (__int64)v23, v26);
                  LABEL_140:
                    v27[v26] = 0;
                  LABEL_62:
                    if ((v70_.v70 & 1) != 0) {
                      v33 = v70_.v72;
                    }
                    else {
                      v33 = (char*)&v70_.v70 + 1;
                    }
                    AsyncLoadImage_17e4db0(v9, v33, 1);
                    if ((v70_.v70 & 1) != 0 && v70_.v72 != nullptr) {
                      v34 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v34 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                          (__int64)v70_.v72);
                    }
                    goto LABEL_70;
                  }
                LABEL_172:
                  String_60a1d0();
                }
              }
              v28 = Manager_a4aea0(24938);
              v14 = game_util_Format("Layout/Textures/Tutorial/%s/%s.bntx", v28,
                                     v12);
            LABEL_52:
              v29 = strlen(v14);
              if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_172;
              }
              v30 = v29;
              if (v29 >= 0x17) {
                if ((v29 | 7) == 0x17) {
                  v32 = 26;
                }
                else {
                  v32 = (v29 | 7) + 1;
                }
                v31 = (const char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v32, 16, 0);
                v70_.v71 = v30;
                v70_.v72 = v31;
                v70_.v70 = v32 | 1;
              }
              else {
                LOBYTE(v70_.v70) = 2 * v29;
                v31 = (char*)&v70_.v70 + 1;
                if (v29 == 0) {
                  goto LABEL_61;
                }
              }
              memmove((__int64)v31, (__int64)v14, v30);
            LABEL_61:
              v31[v30] = 0;
              goto LABEL_62;
            }
          }
          v19 = v11;
          goto LABEL_31;
        }
      }
    }
  }
LABEL_72:
  v35 = *(_QWORD*)(v3 + 40);
  if (v35 != 0) {
    v36 = *(const char**)(a1 + 280);
    if (v36 == nullptr || strcmp(v36, *(const char**)(v3 + 40)) != 0) {
      *(_QWORD*)(a1 + 280) = v35;
      LayoutAccessor_1562060((char*)(a1 + 24), (__int64)"T_Title",
                             *(const char**)(v3 + 40));
    }
  }
  v37 = *(_QWORD*)(v3 + 48);
  if (v37 != 0) {
    v38 = *(const char**)(a1 + 288);
    if (v38 == nullptr || strcmp(v38, *(const char**)(v3 + 48)) != 0) {
      *(_QWORD*)(a1 + 288) = v37;
      v69[0] = "L_Body";
      v69[1] = (_BYTE*)((_UNKNOWN*)0x6LL);
      GameRoutine_9b8fe0((void*)(&v70_.v70), (__int64*)(a1 + 24), v69);
      if (v70_.v71 != 0) {
        v39 = std___1___shared_weak_count_lock(v70_.v71);
        v40 = v70_.v70;
        if (v70_.v71 != 0) {
          std___1___shared_weak_count___release_weak(v70_.v71);
        }
        if (v39 == 0 || v40 == 0) {
          goto LABEL_159;
        }
        TextBoxEx_188ac20(v40, *(const char**)(v3 + 48),
                          (unsigned __int16*)(v3 + 56));
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 0);
        if (v70_.v71 != 0) {
          v41 = std___1___shared_weak_count_lock(v70_.v71);
          v42 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v41 != 0 && v42 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v42 + 40LL))(v42, 0);
          }
          else if (v41 == 0) {
            goto LABEL_93;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak(v41);
          }
        }
      LABEL_93:
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 1);
        if (v70_.v71 != 0) {
          v43 = std___1___shared_weak_count_lock(v70_.v71);
          v44 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v43 != 0 && v44 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v44 + 40LL))(v44, 0);
          }
          else if (v43 == 0) {
            goto LABEL_102;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
            std___1___shared_weak_count___release_weak(v43);
          }
        }
      LABEL_102:
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 2);
        if (v70_.v71 != 0) {
          v45 = std___1___shared_weak_count_lock(v70_.v71);
          v46 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v45 != 0 && v46 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v46 + 40LL))(v46, 0);
          }
          else if (v45 == 0) {
            goto LABEL_111;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
            std___1___shared_weak_count___release_weak(v45);
          }
        }
      LABEL_111:
        if (*(_WORD*)(v3 + 80) == 0) {
        LABEL_160:
          if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
            std___1___shared_weak_count___release_weak(v39);
          }
          goto LABEL_162;
        }
        v47 = *(unsigned __int16*)(v3 + 80) - 1;
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 0);
        if (v70_.v71 != 0) {
          v48 = std___1___shared_weak_count_lock(v70_.v71);
          v49 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v48 != 0 && v49 != 0) {
            if (*(_WORD*)(v3 + 80) != 0) {
              v50 = **(_BYTE***)(v3 + 88);
            }
            else {
              v50 = nullptr;
            }
            EmbeddedImage_1889eb0(v49, v50);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v49 + 40LL))(v49, 1);
          }
          else if (v48 == 0) {
            goto LABEL_125;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
        }
      LABEL_125:
        if (v47 == 0) {
          goto LABEL_159;
        }
        TextBoxEx_188aa00((void*)(&v70_.v70), v40, 1);
        if (v70_.v71 != 0) {
          v51 = std___1___shared_weak_count_lock(v70_.v71);
          v52 = v70_.v70;
          if (v70_.v71 != 0) {
            std___1___shared_weak_count___release_weak(v70_.v71);
          }
          if (v51 != 0 && v52 != 0) {
            if (*(unsigned __int16*)(v3 + 80) < 2u) {
              v53 = nullptr;
            }
            else {
              v53 = *(_BYTE**)(*(_QWORD*)(v3 + 88) + 8LL);
            }
            EmbeddedImage_1889eb0(v52, v53);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v52 + 40LL))(v52, 1);
          }
          else if (v51 == 0) {
            goto LABEL_145;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
            std___1___shared_weak_count___release_weak(v51);
          }
        }
      LABEL_145:
        if (v47 != 1) {
          TextBoxEx_188aa00((void*)(&v70_.v70), v40, 2);
          if (v70_.v71 != 0) {
            v55 = std___1___shared_weak_count_lock(v70_.v71);
            v56 = v70_.v70;
            if (v70_.v71 != 0) {
              std___1___shared_weak_count___release_weak(v70_.v71);
            }
            if (v55 != 0 && v56 != 0) {
              if (*(unsigned __int16*)(v3 + 80) < 3u) {
                v57 = nullptr;
              }
              else {
                v57 = *(_BYTE**)(*(_QWORD*)(v3 + 88) + 16LL);
              }
              EmbeddedImage_1889eb0(v56, v57);
              (*(void (**)(__int64, __int64))(*(_QWORD*)v56 + 40LL))(v56, 1);
            }
            else if (v55 == 0) {
              goto LABEL_159;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
              std___1___shared_weak_count___release_weak(v55);
            }
          }
        }
      LABEL_159:
        if (v39 == 0) {
          goto LABEL_162;
        }
        goto LABEL_160;
      }
    }
  }
LABEL_162:
  v58 = *(__int64***)(*(_QWORD*)(a1 + 256) + 40LL);
  v59 = *v58;
  v60 = v58[1];
  if (*v58 == v60) {
    v67 = 0;
  }
  else {
    v61 = 0;
    v62 = GameData_212e348 + 2;
    do {
      v63 = *v59++;
      v64 = *(const char**)(v63 + 48);
      if (v64 == nullptr) {
        break;
      }
      v70_.v76 = -1;
      v70_.v77 = -1;
      v70_.v78 = -1;
      v70_.v79 = -1;
      v70_.v80 = -1;
      v70_.v81 = -1;
      v70_.v82 = -1;
      v70_.v83 = -1;
      v65 = *msg_MessageManager_instance__ptr[0];
      v70_.v84 = -1;
      v70_.v85 = -1;
      v70_.v86 = -1;
      v70_.v87 = -1;
      v70_.v88 = 8;
      v70_.v89 = 0;
      v70_.v74 = -65529;
      v70_.v75 = -65528;
      v70_.v70 = (__int64)v62;
      v70_.v71 = 0xFFFF0001FFFF0000LL;
      v70_.v72 = (const char*)0xFFFF0004FFFF0002LL;
      v70_.v73 = 0xFFFF0006FFFF0005LL;
      v66 = GameRoutine_a4dbe0(v65, v64, 0);
      if (v66 == nullptr) {
        break;
      }
      if (*v66 == 0) {
        break;
      }
      ++v61;
    } while (v59 != v60);
    v67 = v61 > 1;
  }
  return ui_LayoutAccessor_SetPaneVisible(a1 + 24, (__int64)"L_PageTab", v67);
}

__int64 game_menu_187eb30(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  snd_Fade_Fade_10c830_alt1((__int64)&v5_.v5, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_QuestWindow_Open",
                 (__int64)"SE_SYS_QuestWindow_Open", (__int64)&v5_.v5, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(&v5_.v5);
  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848), "L_Img");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v3 = std___1___shared_weak_count_lock(v5_.v6);
    v4 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v5_.v6);
    }
    if (v3 != 0 && v4 != 0) {
      LayoutAccessor_1562cf0(v4, "Img01");
      result = ui_LayoutAccessor_SetPaneVisible(v4, (__int64)"N_State", 0);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
