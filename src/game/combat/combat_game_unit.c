#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e9d00(_QWORD, _QWORD, _QWORD);
__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1072580(unsigned __int64, char**);
__int64 GameRoutine_10784f0(__int64, int, __int64);
__int64 GameRoutine_108f600(_QWORD, _QWORD, _QWORD);
__int64 TrickEntity_7d1480(_QWORD, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2007a08[])();
extern __int64 (*GameData_2007a88[])();
extern __int64 GameData_1aa170f;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21f49b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d3c8[3];
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
__int64 game_combat_CombatGameUnit_CreateInvisibleMan(__int64 result);
__int64 game_combat_CombatGameUnit_CreateIshPhantom(__int64 a1);
__int64
game_combat_CombatGameUnit_CreateInvisibleMan_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 game_combat_CombatGameUnit_CreateIshPhantom_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameHr_1083840(__int64 result);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 GameData_21ec7b0;
_QWORD* CombatGameUnit_108f600(__int64 a1, int a2, int a3);

__int64 game_combat_CombatGameUnit_CreateInvisibleMan(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  long double v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD v15[4];
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  char* v19[48];
  int v20;
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
  __int64 v31;

  if (*(_QWORD*)(result + 24) != 0) {
    return result;
  }
  v30 = v1;
  v31 = v2;
  v3 = result;
  v19[25] = nullptr;
  v19[27] = nullptr;
  memset(&v19[2], 0, 176);
  v20 = 1065353216;
  v4 = (int*)GameData_21d9d18;
  v5 = GameData_21d9d20;
  v19[40] = nullptr;
  v19[41] = nullptr;
  memset(&v19[43], 0, 40);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v6 = *v4++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v6) = 0;
    } while (v4 != (int*)v5);
    v4 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v4;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  v19[0] = "CD_Invisible";
  v19[1] = nullptr;
  v19[28] = (char*)0x3F80000040000000LL;
  v19[29] = (char*)0x3F8000003F800000LL;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 11832,
                                               16, 0);
  v7[2] = 0;
  v8 = (unsigned __int64)(v7 + 3);
  v9 = v7;
  *v7 = GameData_212d3c8[0] + 2;
  v7[1] = 0;
  CharacterAppearance_10735d0(v7 + 3);
  v17 = v8;
  v18 = v9;
  GameRoutine_1072580(v8, v19);
  v15[0] = GameData_2007a08;
  v15[1] = v3;
  v16 = v15;
  v10 = GameRoutine_10784f0((__int64)&v17, 512, (__int64)v15);
  v12 = v16;
  *(_QWORD*)(v3 + 24) = v10;
  if (v12 == v15) {
    v13 = 32;
    goto LABEL_9;
  }
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_9:
    (*(void (**)(_QWORD*))(*v12 + v13))(v12);
    v10 = *(_QWORD*)(v3 + 24);
  }
  if (v10 != 0) {
    *(_BYTE*)(v10 + 28) = 0;
    *(_DWORD*)(v10 + 24) = -1818826310;
    *(_QWORD*)(v10 + 16) = 0xBAE48E98E68F80E9LL;
    *(_QWORD*)(v10 + 272) = 12;
    *(_BYTE*)(v3 + 32) = 1;
  }
  v14 = v18;
  if (v18 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v18 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v14 + 16LL))(v14);
    *(__n128*)&v11 = std___1___shared_weak_count___release_weak(v14);
  }
  return TrickEntity_7d1480(v19, v11);
}

__int64 game_combat_CombatGameUnit_CreateIshPhantom(__int64 a1)
{
  __int64 v2;
  __int64 i;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  long double v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD v18[4];
  _QWORD* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  char* v22[48];
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = game_GetHero(9);
  if (v2 == 0) {
    goto LABEL_11;
  }
  for (i = v2; i != 0; i = *(_QWORD*)(i + 624)) {
    v4 = i;
  }
  if (*(_BYTE*)(v4 + 441) != 3) {
    goto LABEL_11;
  }
  v5 = *(char**)(v2 + 624);
  if (v5 == nullptr) {
    v5 = (char*)v2;
  }
  v22[0] = v5;
  LODWORD(v18[0]) = 241;
  v6 = game_UnitPool_Find_6ead60(v22, v18);
  if (v6 != 0) {
    v7 = (__int64*)(v6 + 2104);
    goto LABEL_12;
  }
  v8 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v8 + 144) != 0) {
    v7 = (__int64*)(v8 + 112);
  }
  else {
  LABEL_11:
    v7 = &GameData_21f49b8;
  }
LABEL_12:
  v22[25] = nullptr;
  v22[27] = nullptr;
  memset(v22, 0, 192);
  v18[0] = &GameData_1aa170f;
  v22[40] = nullptr;
  v22[41] = nullptr;
  memset(&v22[43], 0, 40);
  v23 = 1065353216;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  AssetTableFile_7e9d00(v22, v7, v18);
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v9[2] = 0;
  v10 = (unsigned __int64)(v9 + 3);
  v11 = v9;
  *v9 = GameData_212d3c8[0] + 2;
  v9[1] = 0;
  CharacterAppearance_10735d0(v9 + 3);
  v20 = v10;
  v21 = v11;
  GameRoutine_1072580(v10, v22);
  v19 = v18;
  v18[0] = GameData_2007a88;
  v18[1] = a1;
  v12 = GameRoutine_10784f0((__int64)&v20, 2048, (__int64)v18);
  v14 = v19;
  *(_QWORD*)(a1 + 24) = v12;
  if (v14 == v18) {
    v15 = 32;
    goto LABEL_16;
  }
  if (v14 != nullptr) {
    v15 = 40;
  LABEL_16:
    (*(void (**)(_QWORD*))(*v14 + v15))(v14);
    v12 = *(_QWORD*)(a1 + 24);
  }
  strcpy((char*)(v12 + 16), "IshPhantom");
  *(_QWORD*)(v12 + 272) = 10;
  *(_BYTE*)(a1 + 32) = 1;
  v16 = v21;
  if (v21 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v21 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v16 + 16LL))(v16);
    *(__n128*)&v13 = std___1___shared_weak_count___release_weak(v16);
  }
  return TrickEntity_7d1480(v22, v13);
}

__int64 game_combat_CombatGameUnit_CreateInvisibleMan_lambda0_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  return GameRoutine_108f600(*a2, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 84LL),
                             *(unsigned int*)(*(_QWORD*)(a1 + 8) + 88LL));
}

_QWORD* CombatGameUnit_108f600(__int64 a1, int a2, int a3)
{
  float32x4_t* v3;
  __int128 v5;
  __int128 v6;
  _QWORD* result;
  __int64 v8;
  unsigned __int32 v9;
  float32x4_t v10;
  int8x16_t v11;
  float v12;
  __int64 v13;
  float32x4_t* v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int128 v28;
  __int128 v29;
  struct {
    float32x4_t v30;
    char gap64_[16];
    float32x4_t* v31;
  } v30_;

  v3 = *(float32x4_t**)(a1 + 8);
  *(float*)&v5 =
      (float)((float)a2 * 0x1.4000000000000p+2f) + 0x1.4000000000000p+1f;
  *(float*)&v6 = *(float*)&v5;
  DWORD1(v6) = 1128792064;
  DWORD1(v5) = -1027080192;
  *((_QWORD*)&v6 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)a3 * 0x1.4000000000000p+2f) + 0x1.4000000000000p+1f);
  *((_QWORD*)&v5 + 1) = *((_QWORD*)&v6 + 1);
  v28 = v5;
  v29 = v6;
  result = X8CALL_X0(
      void*, GameRoutine_1085a10((void*)(&v30_.v30), a1 + 160, &v29, &v28, 0));
  v9 = LANES128(v30_.v30).n128_u32[2];
  v10 = vsubq_f32(v3[19], v30_.v30);
  v11 = vmulq_f32(v10, v10);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
          .n64_u64[0];
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v11).n128_f32[0] != 0x0.0p+0f) {
    LANES128(v3[19]).n128_u64[0] = LANES128(v30_.v30).n128_u64[0];
    v11 = v3[19];
    LANES128(v3[18]).n128_u32[2] |= 1u;
    LANES128(v11).n128_u64[1] = v9;
    v3[19] = v11;
  }
  if (GameData_21ec7b0 != 0) {
    v8 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v8 != 0) {
      LODWORD(v8) = *(unsigned __int8*)(v8 + 113) >> 7;
    }
  }
  v12 = 0x0.0p+0f;
  v13 = *(_QWORD*)(a1 + 392);
  if (((GameData_21ec7b0 != 0) & (unsigned __int8)v8) == 0) {
    v12 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 336) = v12;
  if (v13 != 0) {
    v14 = *(float32x4_t**)(a1 + 8);
    LANES128(v11).n128_f32[0] =
        *(float*)(v13 + 40) +
        (float)((float)(0x1.0000000000000p+0f - *(float*)(v13 + 40)) * v12);
    v15 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]), 0);
    LANES128(v15).n128_u32[3] = 0;
    v16 = vsubq_f32(v14[22], v15);
    v17 = vmulq_f32(v16, v16);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v14[22]).n128_u32[0] = LANES128(v11).n128_u32[0];
      LANES128(v14[22]).n128_u32[1] = LANES128(v11).n128_u32[0];
      v18 = v14[22];
      LANES128(v14[18]).n128_u32[2] |= 1u;
      LANES128(v18).n128_u64[1] = LANES128(v11).n128_u32[0];
      v14[22] = v18;
      v13 = *(_QWORD*)(a1 + 392);
    }
    v19 = *(__int64**)(a1 + 528);
    v20 = *(__int64**)(a1 + 536);
    if (v19 != v20) {
      v27 = *(float*)(v13 + 44) +
            (float)((float)(0x1.0000000000000p+0f - *(float*)(v13 + 44)) * v12);
      do {
        v21 = *v19++;
        v22 = *(_DWORD*)(v21 + 128);
        v23 = *(_QWORD*)v21;
        *(float*)(v21 + 112) = v27;
        *(float*)(v21 + 116) = v27;
        v24 = *(_OWORD*)(v21 + 112);
        *(_DWORD*)(v21 + 128) = v22 | 0x20;
        *((_QWORD*)&v24 + 1) = LODWORD(v27);
        *(_OWORD*)(v21 + 112) = v24;
        GameRoutine_a7c6a0(v23, v21);
      } while (v19 != v20);
    }
    result = (_QWORD*)GameHr_1083840(a1);
  }
  if (*(float*)(a1 + 348) == 0x0.0p+0f) {
    goto LABEL_26;
  }
  *(_DWORD*)(a1 + 348) = 0;
  LANES128(v30_.v30).n128_u32[2] = 0;
  LANES128(v30_.v30).n128_u64[0] = (unsigned __int64)GameData_20076d8;
  v30_.v31 = &v30_.v30;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v30_.v30);
  if (v30_.v31 == &v30_.v30) {
    v25 = 32;
    goto LABEL_20;
  }
  if (v30_.v31 != nullptr) {
    v25 = 40;
  LABEL_20:
    (*(void (**)(void*))(LANES128(*(v30_.v31)).n128_u64[0] + v25))(
        (void*)v30_.v31);
  }
  LANES128(v30_.v30).n128_u32[2] = 0;
  LANES128(v30_.v30).n128_u64[0] = (unsigned __int64)GameData_2007758;
  v30_.v31 = &v30_.v30;
  CharacterBuilder_1083e90((_QWORD*)a1, (__int64)&v30_.v30);
  result = LANES128(*(v30_.v31)).n128_u64;
  if (v30_.v31 == &v30_.v30) {
    v26 = 32;
    goto LABEL_25;
  }
  if (v30_.v31 != nullptr) {
    v26 = 40;
  LABEL_25:
    result = (_QWORD*)(*(__int64 (**)(void*))(
        LANES128(*(v30_.v31)).n128_u64[0] + v26))((void*)v30_.v31);
  }
LABEL_26:
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + 289LL) = 0;
  return result;
}

__int64 game_combat_CombatGameUnit_CreateIshPhantom_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  return GameRoutine_108f600(*a2, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 84LL),
                             *(unsigned int*)(*(_QWORD*)(a1 + 8) + 88LL));
}

#pragma GCC visibility pop
