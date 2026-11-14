#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 EmbeddedImage_1889d00(_QWORD, _QWORD, long double);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 game_17356e0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_text_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
struct PseudoSret GameRoutine_9b8fe0(_QWORD, _QWORD);
struct PseudoSret TextBoxEx_188aa00(_QWORD, _QWORD, long double);
void game_telop_16f9e40(__int64 a1);

void game_telop_16f9e40(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __n128 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  char** v12;
  __int64 v13;
  unsigned int v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  unsigned __int32 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  int32x4_t* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  __int64 v38;
  unsigned __int64 v39;
  float32x4_t v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int32x2_t* v44;
  float32x4_t v45;
  unsigned __int64 v46;
  unsigned __int32 v47;
  _QWORD v48[2];
  __int64 v49;
  __int64 v50;
  char v51[4];

  v48[0] = "L_Txt";
  v48[1] = 5;
  *(struct PseudoSret*)(&v49) = GameRoutine_9b8fe0(a1 + 168, v48);
  if (v50 == 0) {
    goto LABEL_44;
  }
  v3 = std___1___shared_weak_count_lock(v50);
  v1 = v49;
  if (v50 != 0) {
    v4 = std___1___shared_weak_count___release_weak(v50);
  }
  if (v3 == 0 || v1 == 0) {
    if (v3 == 0) {
      goto LABEL_44;
    }
    goto LABEL_42;
  }
  if (*(_QWORD*)(a1 + 912) != 0) {
    *(struct PseudoSret*)(&v49) = TextBoxEx_188aa00(v1, 0, *(long double*)&v4);
    if (v50 != 0) {
      v6 = std___1___shared_weak_count_lock(v50);
      v7 = v49;
      if (v50 != 0) {
        v4 = std___1___shared_weak_count___release_weak(v50);
      }
      if (v6 != 0 && v7 != 0) {
        if ((EmbeddedImage_1889d00(v7, a1 + 880, *(long double*)&v4) & 1) !=
            0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
        }
        goto LABEL_20;
      }
      if (v6 != 0) {
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          v4 = std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 856);
  if (*(_QWORD*)(a1 + 864) != v8) {
    v9 = 0;
    v10 = 0;
    v11 = msg_MessageManager_instance__ptr[0];
    v12 = msg_MessageManager_empty_text__ptr;
    do {
      v13 = v8 + v9;
      v14 = v10;
      if ((*(_BYTE*)v13 & 1) != 0) {
        v15 = *(char**)(v13 + 16);
      }
      else {
        v15 = (char*)(v13 + 1);
      }
      if (v10 > 7) {
        v14 = 0;
      }
      if (v15 != nullptr) {
        v16 = v15;
      }
      else {
        v16 = *v12;
      }
      GameRoutine_60a020(*v11 + 24LL * v14 + 14704, v16);
      v8 = *(_QWORD*)(a1 + 856);
      ++v10;
      v9 += 24;
    } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 864) - v8) >> 3) > v10);
  }
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 848);
  }
  else {
    v17 = a1 + 833;
  }
  TextBoxEx_188ab20(v1, v17, *(long double*)&v4);
  v18 = ui_LayoutAccessor_FindTextBox(a1 + 168, "L_Txt/T_Txt");
  if (v18 != 0) {
    v1 = v18;
    v19 = ui_LayoutAccessor_FindTextBox(a1 + 168, "L_Txt/T_Txt");
    if (v19 != 0) {
      ui_text_190a0c0(&v49, v48, v51, v19, *(_QWORD*)(v19 + 216));
      v20 = v48[0];
    }
    else {
      v20 = 0;
    }
    v21 = *(_BYTE*)(v1 + 88);
    *(_QWORD*)(v1 + 80) = v20;
    *(_BYTE*)(v1 + 88) = v21 | 0x10;
  }
  game_17356e0(a1 + 168, "L_Txt");
LABEL_42:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(
        v3, *(long double*)&v4);
    std___1___shared_weak_count___release_weak(v3);
  }
LABEL_44:
  if (*(_DWORD*)(a1 + 824) != 1 || *(_QWORD*)(a1 + 184) == 0) {
    return;
  }
  v22 = *(_QWORD*)(a1 + 176);
  v23 = 0;
  if (v22 == 0) {
    goto LABEL_63;
  }
  v24 = std___1___shared_weak_count_lock(v22);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 168);
    if (v25 != 0) {
      LODWORD(v1) = *(unsigned __int8*)(v25 + 24);
      v26 = v25 + 152;
      if ((_DWORD)v1 == 0) {
        v26 = 0;
      }
      v27 = v26 != *(_QWORD*)(a1 + 184);
    }
    else {
      v27 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v27) {
        goto LABEL_55;
      }
    LABEL_62:
      v23 = 0;
      if ((v1 & 1) != 0) {
        goto LABEL_57;
      }
    LABEL_63:
      v31 = 0;
      goto LABEL_64;
    }
    v32 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v32);
    if (!v27) {
      goto LABEL_62;
    }
  }
LABEL_55:
  v28 = *(_QWORD*)(a1 + 176);
  if (v28 == 0) {
    v31 = 0;
    v23 = 0;
    goto LABEL_64;
  }
  v23 = 0;
  if (*(_QWORD*)(v28 + 8) == -1) {
    goto LABEL_63;
  }
LABEL_57:
  v29 = *(_QWORD*)(a1 + 184);
  if (v29 == 0) {
    return;
  }
  v30 = *(int32x4_t**)(v29 + 24);
  v31 = 0;
  if (v30 != nullptr) {
    v23 = LANES128_OF(vdupq_laneq_s32(v30[7], 3)).n128_u32[0];
    v31 = LANES128(v30[9]).n128_u32[3];
  }
LABEL_64:
  if (*(_QWORD*)(a1 + 184) != 0) {
    v33 = *(_QWORD*)(a1 + 176);
    if (v33 != 0) {
      v46 = v31;
      v47 = v23;
      v34 = std___1___shared_weak_count_lock(v33);
      if (v34 == 0) {
        goto LABEL_75;
      }
      v35 = *(_QWORD*)(a1 + 168);
      if (v35 != 0) {
        LODWORD(v1) = *(unsigned __int8*)(v35 + 24);
        v36 = v35 + 152;
        if ((_DWORD)v1 == 0) {
          v36 = 0;
        }
        v37 = v36 != *(_QWORD*)(a1 + 184);
      }
      else {
        v37 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v38 = v34;
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v38);
      }
      if (!v37) {
        v39 = v46;
        LANES128(v40).n128_u32[0] = v47;
        if ((v1 & 1) == 0) {
          return;
        }
      }
      else {
      LABEL_75:
        v39 = v46;
        LANES128(v40).n128_u32[0] = v47;
        v41 = *(_QWORD*)(a1 + 176);
        if (v41 == 0 || *(_QWORD*)(v41 + 8) == -1) {
          return;
        }
      }
      v42 = *(_QWORD*)(a1 + 184);
      if (v42 != 0) {
        v43 = *(_QWORD*)(v42 + 24);
        if (v43 != 0) {
          v44 = *(int32x2_t**)(v43 + 24);
          LANES128(v40).n128_u32[1] = -1016070144;
          LANES128(v40).n128_u64[1] = v39;
          if (v44 != nullptr) {
            LANES128(v45).n128_u64[0] =
                LANES64_OF(vzip2_s32(v44[15], v44[17])).n64_u64[0];
            LANES128(v45).n128_u64[1] = LANES64(v44[19]).n64_u32[1];
            v40 = vsubq_f32(v40, v45);
          }
          *(_QWORD*)(v43 + 48) = LANES128(v40).n128_u64[0];
          *(_DWORD*)(v43 + 56) = LANES128(v40).n128_u32[2];
          *(_BYTE*)(v43 + 88) |= 0x10u;
        }
      }
    }
  }
}

#pragma GCC visibility pop
