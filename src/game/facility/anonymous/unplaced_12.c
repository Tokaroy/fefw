#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 BlnPopup_19f25b0(__int64*);
__int64 BlnPopup_19f2680(__int64);
__int64 GameRoutine_174dbb0(__int64, int);
__int64 GameRoutine_1842180(__int64, int);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool LayoutAccessor_1563380(__int64*, __int64, char);
extern _UNKNOWN GameData_1aa6471;
extern _UNKNOWN GameData_1ab1dc0;
extern _UNKNOWN GameData_1adffe6;
extern _UNKNOWN GameData_1af31c8;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f61c0;
extern __int64 as_g_base_frame_counter;
void game_174d800(__int64, float, float);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_facility_anonymous_16c0c20(__int64 a1);

__int64 game_facility_anonymous_16c0c20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  void* v24;
  __int64* v25;
  float v26;
  float v27;
  int v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  char v41;
  char v42;
  unsigned __int8* v43;
  unsigned int v44;
  _QWORD v45[2];
  struct {
    char gap0_[24];
    char* v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } f_;

  v1 = *(_QWORD*)(a1 + 160);
  GameRoutine_174dbb0(v1 + 224, 1);
  v3 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v3 < 1) {
    v5 = 0;
  }
  else {
    v4 = *(_DWORD*)(v1 + 232);
    v5 = 0;
    v6 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v3 - 1));
    if (v6 >= v4) {
      v6 = *(_DWORD*)(v1 + 232);
    }
    if (v4 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
      v7 = v6;
    }
    else {
      v7 = *(_DWORD*)GameData_21d9988;
    }
    v8 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    while (1) {
      v9 = (unsigned int)(v5 + v8) >> 1;
      v10 = *(_DWORD*)(GameData_21d9988 + 4LL * v9);
      if (v7 == v10) {
        break;
      }
      if (v7 < v10) {
        v8 = (unsigned int)(v5 + v8) >> 1;
      }
      else {
        v5 = v9 + 1;
      }
      if (v5 >= v8) {
        goto LABEL_16;
      }
    }
    v5 = v9 + 1;
  }
LABEL_16:
  v11 = *(_DWORD*)(v1 + 248);
  v12 = 0;
  if (v11 >= (int)v3) {
    v13 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  }
  else {
    v13 = *(_DWORD*)(v1 + 248);
  }
  v14 = v13 - 1;
  if (v11 <= 0) {
    v14 = 0;
  }
  if (v11 < 1) {
    v15 = 1;
  }
  else {
    v15 = v13;
  }
  if (v15 != (_DWORD)v3) {
    v12 = *(_DWORD*)(GameData_21d9988 + 4LL * v15);
  }
  v16 = *(_DWORD*)(GameData_21d9988 + 4LL * v14);
  v17 = ui_LayoutAccessor_empty__ptr[0];
  if (*(_BYTE*)(v1 + 254) != 1) {
    goto LABEL_53;
  }
  if (*(_QWORD*)(v1 + 168) != 0) {
    v18 = *(__int64**)(v1 + 168);
  }
  else {
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }
  f_.v46 = "L_LvUp";
  f_.v47 = 6;
  GameRoutine_1114920((void*)(&f_.v48), v18, &f_.v46);
  if (f_.v49 != 0) {
    v19 = std___1___shared_weak_count_lock(f_.v49);
    v20 = (__int64*)f_.v48;
    if (f_.v49 != 0) {
      std___1___shared_weak_count___release_weak(f_.v49);
    }
    if (v19 != 0 && v20 != nullptr) {
      BlnPopup_19f25b0(v20);
      *(_BYTE*)(v1 + 360) = 1;
      goto LABEL_37;
    }
    if (v19 != 0) {
    LABEL_37:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  if (*(_QWORD*)(v1 + 168) != 0) {
    v21 = *(__int64**)(v1 + 168);
  }
  else {
    v21 = v17;
  }
  v22 = LayoutAccessor_155fbe0(v21, "L_Reliance");
  v23 = ui_LayoutAccessor_FindPane(v22, (__int64)"Icon");
  if (v23 != 0) {
    v23 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180(v23, v5);
  snd_Fade_Fade_10c830((__int64)&f_.v48, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_FriendShipLevel_Up",
                 (__int64)"SE_SYS_FriendShipLevel_Up", (__int64)&f_.v48, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&f_.v48);
  switch (v5) {
  case 4:
    v24 = &GameData_1adffe6;
    break;
  case 3:
    v24 = &GameData_1af31c8;
    break;
  case 2:
    v24 = &GameData_1ab1dc0;
    break;
  default:
    if (*(_BYTE*)(v1 + 252) != 1) {
      goto LABEL_53;
    }
    v24 = &GameData_1aa6471;
    break;
  }
  f_.v49 = (__int64)v24;
  f_.v48 = game_HashString((__int64)v24);
  GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&f_.v48, 1u);
LABEL_53:
  if (*(_QWORD*)(v1 + 168) != 0) {
    v25 = *(__int64**)(v1 + 168);
  }
  else {
    v25 = v17;
  }
  LayoutAccessor_1560070((void*)(&f_.v46), v25, "L_Reliance/L_Gauge");
  v26 = 0x1.0000000000000p+0f;
  v27 = 0x1.0000000000000p+0f;
  if (v12 >= 1) {
    v28 = v12 - v16;
    if (v12 != v16) {
      v29 = *(_DWORD*)(v1 + 236);
      if (v29 <= v16) {
        v29 = v16;
      }
      v30 = v29 - v16;
      if (v28 < v30) {
        v30 = v12 - v16;
      }
      v27 = (float)v30 / (float)v28;
    }
  }
  if (v12 >= 1) {
    v31 = (float)v16;
    if ((float)v16 != (float)v12) {
      v32 = *(float*)(v1 + 256);
      v33 = (float)v12 - v31;
      if (v32 < v31) {
        v32 = (float)v16;
      }
      v34 = v32 - v31;
      if (v33 < v34) {
        v34 = v33;
      }
      v26 = v34 / v33;
    }
  }
  if (f_.v47 != 0) {
    v35 = std___1___shared_weak_count_lock(f_.v47);
    if (v35 != 0) {
      v36 = v35;
      if (f_.v46 != nullptr) {
        game_174d800((__int64)f_.v46, v27, v26);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak(v36);
      }
    }
    if (f_.v47 != 0) {
      std___1___shared_weak_count___release_weak(f_.v47);
    }
  }
  if (*(_QWORD*)(v1 + 168) != 0) {
    v37 = *(__int64**)(v1 + 168);
  }
  else {
    v37 = v17;
  }
  v45[0] = "L_LvUp";
  v45[1] = 6;
  GameRoutine_1114920((void*)(&f_.v48), v37, v45);
  result = f_.v49;
  if (f_.v49 != 0) {
    v39 = std___1___shared_weak_count_lock(f_.v49);
    result = f_.v49;
    if (v39 != 0) {
      v40 = f_.v48;
    }
    else {
      v40 = 0;
    }
    if (f_.v49 != 0) {
      result = std___1___shared_weak_count___release_weak(f_.v49);
    }
  }
  else {
    v39 = 0;
    v40 = 0;
  }
  if (*(_BYTE*)(v1 + 360) == 1) {
    if (as_g_base_frame_counter != 0) {
      *(float*)(v1 + 352) =
          *(float*)(v1 + 352) +
          (float)((float)(*(float*)(as_g_base_frame_counter + 104) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f);
    }
    if (v40 != 0) {
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          (__int64*)(v40 + 88), (__int64)"In", 0);
      if ((result & 1) != 0 && *(float*)(v1 + 352) > 0x1.0000000000000p+0f) {
        result = BlnPopup_19f2680(v40);
        v41 = 0;
        *(_BYTE*)(v1 + 360) = 0;
      }
      else {
        v41 = *(_BYTE*)(v1 + 360);
      }
    }
    else {
      v41 = 1;
    }
  }
  else {
    v41 = 0;
  }
  if (*(float*)(v1 + 240) == 0x0.0p+0f) {
    v42 = (v40 != 0) & v41;
    if (v39 == 0) {
      goto LABEL_103;
    }
  }
  else {
    snd_Fade_Fade_10c830((__int64)&f_.v48, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_FriendShip", (__int64)"SE_SYS_FriendShip",
                   (__int64)&f_.v48, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(&f_.v48);
    v42 = 1;
    if (v39 == 0) {
    LABEL_103:
      if ((v42 & 1) != 0) {
        return result;
      }
      goto LABEL_104;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_103;
  }
  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
  result = std___1___shared_weak_count___release_weak(v39);
  if ((v42 & 1) != 0) {
    return result;
  }
LABEL_104:
  v43 = *(unsigned __int8**)(a1 + 16);
  if (v43 != nullptr) {
    v44 = *v43;
    if (v44 <= 0x10 && ((1 << v44) & 0x1CE00) != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
