#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
LayoutAccessor_155ed40(PSEUDO_X8, __int64*, __int64*, __int64, const char*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool LayoutAccessor_1563380(__int64*, __int64, char);
float LayoutAccessor_15638b0(__int64*, char*, char);
__int64 game_gameui_anonymous_1738240(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, const char**);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 GameRoutine_1738e80();
__int64 ProcGameOverMenu_1738fa0();
__int64 ProcGameOverMenu_1738fd0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_1738db0();
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_22632d8;
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_2131c08[2])();
extern __int64 (*GameData_2131c10)();
extern __int64 (*game_16db500_ptr_2131be8[6])();
extern __int64 (*game_16db800_ptr_2131bf0[5])();
extern __int64 (*game_16dbb80_ptr_2131bf8[4])();
extern __int64 (*game_16dc3e0_ptr_2131c00[3])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b7040[])();
extern __int64 (*game_menu_anonymous_ProcGameOverMenu_vtable[])();
extern __int64 GameData_2131678;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 GameData_2262c20;
extern __int64 GameData_2262c28;
extern __int64 GameData_2262c30;
extern __int64 GameData_2262c40;
extern __int64 GameData_2262c50;
extern __int64 GameData_2262c60;
extern __int64 GameData_2262c68;
extern __int64 GameData_2262c80;
extern __int64 GameData_2262c90;
extern __int64 GameData_2262ca0;
extern __int64 GameData_2262ca8;
extern __int64 GameData_2262cb0;
extern __int64 GameData_2262cc0;
extern __int64 GameData_2262cd0;
extern __int64 GameData_2262ce0;
extern __int64 GameData_2262ce8;
extern __int64 GameData_2262d00;
extern __int64 GameData_2262d10;
extern __int64 GameData_2262d20;
extern __int64 GameData_2262d28;
extern __int64 GameData_2262d30;
extern __int64 GameData_2262d40;
extern __int64 GameData_2262d50;
extern __int64 GameData_2262d60;
extern __int64 GameData_2262d68;
extern __int64 GameData_2262d70;
extern __int64 GameData_2262d80;
extern __int64 GameData_2262d90;
extern __int64 GameData_2262da0;
extern __int64 GameData_2262da8;
extern __int64 GameData_2262db0;
extern __int64 GameData_2262dc0;
extern __int64 GameData_2262dd0;
extern __int64 GameData_2262de0;
extern __int64 GameData_2262de8;
extern __int64 GameData_2262df0;
extern __int64 GameData_2262e00;
extern __int64 GameData_2262e10;
extern __int64 GameData_2262e20;
extern __int64 GameData_2262e28;
extern __int64 GameData_2262e30;
extern __int64 GameData_2262e40;
extern __int64 GameData_2262e50;
extern __int64 GameData_2262e60;
extern __int64 GameData_2262e68;
extern __int64 GameData_2262e70;
extern __int64 GameData_2262e80;
extern __int64 GameData_2262e90;
extern __int64 GameData_2262ea0;
extern __int64 GameData_2262ea8;
extern __int64 GameData_2262eb0;
extern __int64 GameData_2262ec0;
extern __int64 GameData_2262ed0;
extern __int64 GameData_2262ee0;
extern __int64 GameData_2262ee8;
extern __int64 GameData_2262ef0;
extern __int64 GameData_2262f00;
extern __int64 GameData_2262f10;
extern __int64 GameData_2262f20;
extern __int64 GameData_2262f28;
extern __int64 GameData_2262f30;
extern __int64 GameData_2262f40;
extern __int64 GameData_2262f50;
extern __int64 GameData_2262f60;
extern __int64 GameData_2262f68;
extern __int64 GameData_2262f80;
extern __int64 GameData_2262f90;
extern __int64 GameData_2262fa0;
extern __int64 GameData_2262fa8;
extern __int64 GameData_2262fb0;
extern __int64 GameData_2262fc0;
extern __int64 GameData_2262fd0;
extern __int64 GameData_2262fe0;
extern __int64 GameData_2262fe8;
extern __int64 GameData_2262ff0;
extern __int64 GameData_2263000;
extern __int64 GameData_2263010;
extern __int64 GameData_2263020;
extern __int64 GameData_2263028;
extern __int64 GameData_2263030;
extern __int64 GameData_2263040;
extern __int64 GameData_2263050;
extern __int64 GameData_2263060;
extern __int64 GameData_2263068;
extern __int64 GameData_2263070;
extern __int64 GameData_2263080;
extern __int64 GameData_2263090;
extern __int64 GameData_22630a0;
extern __int64 GameData_22630a8;
extern __int64 GameData_22630b0;
extern __int64 GameData_22630c0;
extern __int64 GameData_22630d0;
extern __int64 GameData_22630e0;
extern __int64 GameData_22630e8;
extern __int64 GameData_22630f0;
extern __int64 GameData_2263100;
extern __int64 GameData_2263110;
extern __int64 GameData_2263120;
extern __int64 GameData_2263128;
extern __int64 GameData_2263130;
extern __int64 GameData_2263140;
extern __int64 GameData_2263150;
extern __int64 GameData_2263160;
extern __int64 GameData_2263168;
extern __int64 GameData_2263180;
extern __int64 GameData_2263190;
extern __int64 GameData_22631a0;
extern __int64 GameData_22631a8;
extern __int64 GameData_22631b0;
extern __int64 GameData_22631c0;
extern __int64 GameData_22631d0;
extern __int64 GameData_22631e0;
extern __int64 GameData_22631e8;
extern __int64 GameData_22631f0;
extern __int64 GameData_2263200;
extern __int64 GameData_2263210;
extern __int64 GameData_2263220;
extern __int64 GameData_2263228;
extern __int64 GameData_2263230;
extern __int64 GameData_2263240;
extern __int64 GameData_2263250;
extern __int64 GameData_2263260;
extern __int64 GameData_2263268;
extern __int64 GameData_2263270;
extern __int64 GameData_2263280;
extern __int64 GameData_2263290;
extern __int64 GameData_22632a0;
extern __int64 GameData_22632a8;
extern __int64 GameData_22632b0;
extern __int64 GameData_22632c0;
extern __int64 GameData_22632d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_2262c18;
extern char GameData_2262c58;
extern char GameData_2262c98;
extern char GameData_2262cd8;
extern char GameData_2262d18;
extern char GameData_2262d58;
extern char GameData_2262d98;
extern char GameData_2262dd8;
extern char GameData_2262e18;
extern char GameData_2262e58;
extern char GameData_2262e98;
extern char GameData_2262ed8;
extern char GameData_2262f18;
extern char GameData_2262f58;
extern char GameData_2262f98;
extern char GameData_2262fd8;
extern char GameData_2263018;
extern char GameData_2263058;
extern char GameData_2263098;
extern char GameData_22630d8;
extern char GameData_2263118;
extern char GameData_2263158;
extern char GameData_2263198;
extern char GameData_22631d8;
extern char GameData_2263218;
extern char GameData_2263258;
extern char GameData_2263298;
extern int GameData_2262c38;
extern int GameData_2262c48;
extern int GameData_2262c78;
extern int GameData_2262c88;
extern int GameData_2262cb8;
extern int GameData_2262cc8;
extern int GameData_2262cf8;
extern int GameData_2262d08;
extern int GameData_2262d38;
extern int GameData_2262d48;
extern int GameData_2262d78;
extern int GameData_2262d88;
extern int GameData_2262db8;
extern int GameData_2262dc8;
extern int GameData_2262df8;
extern int GameData_2262e08;
extern int GameData_2262e38;
extern int GameData_2262e48;
extern int GameData_2262e78;
extern int GameData_2262e88;
extern int GameData_2262eb8;
extern int GameData_2262ec8;
extern int GameData_2262ef8;
extern int GameData_2262f08;
extern int GameData_2262f38;
extern int GameData_2262f48;
extern int GameData_2262f78;
extern int GameData_2262f88;
extern int GameData_2262fb8;
extern int GameData_2262fc8;
extern int GameData_2262ff8;
extern int GameData_2263008;
extern int GameData_2263038;
extern int GameData_2263048;
extern int GameData_2263078;
extern int GameData_2263088;
extern int GameData_22630b8;
extern int GameData_22630c8;
extern int GameData_22630f8;
extern int GameData_2263108;
extern int GameData_2263138;
extern int GameData_2263148;
extern int GameData_2263178;
extern int GameData_2263188;
extern int GameData_22631b8;
extern int GameData_22631c8;
extern int GameData_22631f8;
extern int GameData_2263208;
extern int GameData_2263238;
extern int GameData_2263248;
extern int GameData_2263278;
extern int GameData_2263288;
extern int GameData_22632b8;
extern int GameData_22632c8;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void BasicMenuCursor_16de600(__int64);
void GameRoutine_8679c0();
void __cxa_guard_release(__int64);
__int64 game_gameui_anonymous_1738620(__int64 a1, int a2, char a3);
float LayoutAccessor_15638b0_alt1(__int64*, const char*, char);

__int64 game_gameui_anonymous_1738240(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64* v12;
  float v13;
  __int64 result;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned int v21;
  bool v22;
  int v23;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  v2 = *(_QWORD*)(a1 + 176);
  if (v2 == 0) {
    goto LABEL_17;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_17;
  }
  v4 = v3;
  if (*(_QWORD*)(a1 + 168) == 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v4);
    }
    goto LABEL_17;
  }
  v5 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 176));
  v6 = *(_QWORD**)(a1 + 168);
  v7 = v5;
  v8 = v6[1];
  if (v8 != 0 && (v9 = std___1___shared_weak_count_lock(v8)) != 0) {
    v10 = *(_BYTE*)(*v6 + 2368LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v10 = (*(_UNKNOWN*)0x940LL);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  if ((v10 & 1) == 0) {
  LABEL_17:
    v12 = *(__int64**)(a1 + 152);
    v13 = LayoutAccessor_15638b0(v12, "IO", 0);
    LayoutAccessor_15636c0((__int64)v12, (__int64)"IO", 0, v13);
  }
  result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
      *(__int64**)(a1 + 152), (__int64)"IO", 0);
  if ((result & 1) != 0) {
    v15 = *(__int64**)(a1 + 152);
    v16 = *(_QWORD*)(a1 + 160);
    v17 = *(__int64**)(a1 + 184);
    v18 = std___1___shared_weak_count_lock(v15[1]);
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v19);
    }
    LayoutAccessor_155ed40((void*)(&v25_.v25), v15, v17, v16,
                           (const char*)(*(_QWORD*)(v15[2] + 24) + 176LL));
    result = v25_.v26;
    if (v25_.v26 != 0) {
      result = std___1___shared_weak_count___release_weak(v25_.v26);
    }
    v20 = *(unsigned __int8**)(a1 + 16);
    if (v20 != nullptr) {
      v21 = *v20;
      v22 = v21 > 0x10;
      v23 = (1 << v21) & 0x1CE00;
      if (!v22 & v23 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 game_gameui_anonymous_1738620(__int64 a1, int a2, char a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  float v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  int v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  char* v25;
  struct {
    __int64 v26;
    __int64 v27;
    char gap32_[43];
    char v28;
  } v26_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22632d8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22632d8) != 0) {
    GameData_2262c18 = 3;
    GameData_2262c40 = 0;
    GameData_2262ca0 = 0;
    GameData_2262ca8 = (__int64)game_1738db0;
    GameData_2262c48 = 0;
    GameData_2262c50 = 0;
    GameData_2262c20 = 0;
    GameData_2262c28 = 0;
    GameData_2262c30 = 0;
    GameData_2262c38 = 0;
    GameData_2262c58 = 10;
    GameData_2262c78 = 0;
    GameData_2262c80 = 0;
    GameData_2262c88 = 0;
    GameData_2262c90 = 0;
    GameData_2262c98 = 13;
    GameData_2262cb0 = 0;
    GameData_2262cb8 = 0;
    GameData_2262cc0 = 0;
    GameData_2262cc8 = 0;
    GameData_2262cd0 = 0;
    GameData_2262cd8 = 10;
    GameData_2262cf8 = 0;
    GameData_2262d00 = 0;
    GameData_2262d08 = 0;
    GameData_2262d10 = 0;
    GameData_2262d18 = 2;
    GameData_2262d40 = 0;
    GameData_2262d48 = 0;
    GameData_2262d50 = 0;
    GameData_2262d38 = 0;
    GameData_2262d28 = 0;
    GameData_2262d30 = 0;
    GameData_2262d20 = 0;
    GameData_2262d58 = 13;
    GameData_2262d60 = 0;
    GameData_2262d68 = (__int64)GameRoutine_1738e80;
    GameData_2262d70 = 0;
    GameData_2262d78 = 0;
    GameData_2262d80 = 0;
    GameData_2262d88 = 0;
    GameData_2262d90 = 0;
    GameData_2262d98 = 13;
    GameData_2262c60 = 0;
    GameData_2262c68 = (__int64)GameData_212c720;
    GameData_2262ce0 = 0;
    GameData_2262ce8 = (__int64)GameData_212c720;
    GameData_2262db0 = 0;
    GameData_2262db8 = 0;
    GameData_2262dc0 = 0;
    GameData_2262dc8 = 0;
    GameData_2262dd0 = 0;
    GameData_2262da0 = 0;
    GameData_2262da8 = (__int64)game_16db500_ptr_2131be8[0];
    GameData_2262dd8 = 14;
    GameData_2262df0 = 0;
    GameData_2262df8 = 0;
    GameData_2262e00 = 0;
    GameData_2262e08 = 0;
    GameData_2262e10 = 0;
    GameData_2262e18 = 2;
    GameData_2262e30 = 0;
    GameData_2262e28 = 0;
    GameData_2262e20 = 0;
    GameData_2262e40 = 0;
    GameData_2262e48 = 0;
    GameData_2262e50 = 0;
    GameData_2262e58 = 13;
    GameData_2262e60 = 0;
    GameData_2262de0 = 0;
    GameData_2262de8 = (__int64)game_16db800_ptr_2131bf0[0];
    GameData_2262e38 = 1;
    GameData_2262e70 = 0;
    GameData_2262e78 = 0;
    GameData_2262e80 = 0;
    GameData_2262e88 = 0;
    GameData_2262e90 = 0;
    GameData_2262e98 = 13;
    GameData_2262ea0 = 0;
    GameData_2262e68 = (__int64)game_16dbb80_ptr_2131bf8[0];
    GameData_2262eb0 = 0;
    GameData_2262eb8 = 0;
    GameData_2262ec0 = 0;
    GameData_2262ec8 = 0;
    GameData_2262ed0 = 0;
    GameData_2262ed8 = 2;
    GameData_2262ef0 = 0;
    GameData_2262ee8 = 0;
    GameData_2262ee0 = 0;
    GameData_2262ef8 = 2;
    GameData_2262f00 = 0;
    GameData_2262f08 = 0;
    GameData_2262f10 = 0;
    GameData_2262f18 = 13;
    GameData_2262f20 = 0;
    GameData_2262f30 = 0;
    GameData_2262f38 = 0;
    GameData_2262f40 = 0;
    GameData_2262f48 = 0;
    GameData_2262f50 = 0;
    GameData_2262f58 = 10;
    GameData_2262f60 = 0;
    GameData_2262f68 = (__int64)GameData_212c720;
    GameData_2262f78 = 0;
    GameData_2262f80 = 0;
    GameData_2262f88 = 0;
    GameData_2262f90 = 0;
    GameData_2262fa0 = 0;
    GameData_2262ea8 = (__int64)game_16dc3e0_ptr_2131c00[0];
    GameData_2262f28 = (__int64)ProcGameOverMenu_1738fa0;
    GameData_2262f98 = 21;
    GameData_2262ff8 = 3;
    GameData_2263158 = 10;
    GameData_2262fb0 = 0;
    GameData_2262fb8 = 1;
    GameData_2262fc0 = 0;
    GameData_2262fc8 = 0;
    GameData_2262fd0 = 0;
    GameData_2262fd8 = 2;
    GameData_2262ff0 = 0;
    GameData_2262fe8 = 0;
    GameData_2262fe0 = 0;
    GameData_2263000 = 0;
    GameData_2263008 = 0;
    GameData_2263010 = 0;
    GameData_2263018 = 14;
    GameData_2263020 = 0;
    GameData_2263030 = 1;
    GameData_2263038 = 0;
    GameData_2263040 = 0;
    GameData_2263048 = 0;
    GameData_2263050 = 0;
    GameData_2263058 = 2;
    GameData_2263060 = 0;
    GameData_2263068 = 0;
    GameData_2263070 = 0;
    GameData_2263080 = 0;
    GameData_2263088 = 0;
    GameData_2263090 = 0;
    GameData_2263098 = 14;
    GameData_22630a0 = 0;
    GameData_22630b0 = 1;
    GameData_22630b8 = 0;
    GameData_22630c0 = 0;
    GameData_22630c8 = 0;
    GameData_22630d0 = 0;
    GameData_22630d8 = 2;
    GameData_22630e0 = 0;
    GameData_22630e8 = 0;
    GameData_22630f0 = 0;
    GameData_2263100 = 0;
    GameData_2263108 = 0;
    GameData_2263110 = 0;
    GameData_2263118 = 13;
    GameData_2263120 = 0;
    GameData_2263130 = 0;
    GameData_2263138 = 0;
    GameData_2263140 = 0;
    GameData_2263148 = 0;
    GameData_2263150 = 0;
    GameData_2263160 = 0;
    GameData_2263168 = (__int64)GameData_212c720;
    GameData_2263178 = 0;
    GameData_2263180 = 0;
    GameData_2263188 = 0;
    GameData_2263190 = 0;
    GameData_2263198 = 2;
    GameData_22631b0 = 0;
    GameData_22631a8 = 0;
    GameData_22631a0 = 0;
    GameData_22631c0 = 0;
    GameData_22631c8 = 0;
    GameData_22631d0 = 0;
    GameData_22631d8 = 13;
    GameData_22631e0 = 0;
    GameData_2263028 = 1056;
    GameData_22631b8 = 6;
    GameData_2263078 = 4;
    GameData_22630a8 = 16;
    GameData_22630f8 = 5;
    GameData_2262fa8 = (__int64)GameData_2131c08[0];
    GameData_2263128 = (__int64)ProcGameOverMenu_1738fd0;
    GameData_22631f0 = 0;
    GameData_22631f8 = 0;
    GameData_2263200 = 0;
    GameData_2263208 = 0;
    GameData_2263210 = 0;
    GameData_2263240 = 0;
    GameData_2263248 = 0;
    GameData_2263250 = 0;
    GameData_2263238 = 0;
    GameData_2263230 = 0;
    GameData_2263228 = 0;
    GameData_2263220 = 0;
    GameData_2263258 = 2;
    GameData_2263260 = 0;
    GameData_2263268 = 0;
    GameData_2263270 = 0;
    GameData_2263280 = 0;
    GameData_2263288 = 0;
    GameData_2263290 = 0;
    GameData_2263298 = 0;
    GameData_22632c0 = 0;
    GameData_22632c8 = 0;
    GameData_22632d0 = 0;
    GameData_22632a0 = 0;
    GameData_22632a8 = 0;
    GameData_22632b0 = 0;
    GameData_22632b8 = 0;
    GameData_22631e8 = (__int64)GameData_2131c10;
    GameData_2263218 = 18;
    GameData_2263278 = 7;
    __cxa_guard_release((__int64)&GameData_22632d8);
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1136, 16, 0);
  v26_.v26 = 0;
  v26_.v27 = 0;
  game_menu_16dcd30(v7, (__int64)"GameOverMenu", &v26_.v26, 0);
  v8 = v26_.v27;
  if (v26_.v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26_.v27 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *v6;
  *(_WORD*)(v7 + 1056) = 0;
  *(_QWORD*)v7 = game_menu_anonymous_ProcGameOverMenu_vtable;
  *(_QWORD*)(v7 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20b7040;
  v10 = fw_memory_HeapManager_Allocate(v9, 296, 16, 0);
  *(_QWORD*)(v10 + 16) = 0;
  v11 = GameData_2131678;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 48) = 0x2000;
  *(_DWORD*)(v10 + 104) = 0;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v7 + 1088) = v10;
  *(_QWORD*)(v7 + 1096) = 0;
  *(_DWORD*)(v7 + 1104) = 0x2000;
  *(_DWORD*)(v7 + 1112) = a2;
  *(_BYTE*)(v7 + 1116) = a3 & 1;
  *(_DWORD*)(v7 + 1120) = 0;
  *(_WORD*)(v7 + 1128) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_QWORD*)(v10 + 8) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v7 + 1080) = v10 + 24;
  GameRoutine_8679c0();
  v12 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v13 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v13 & 0x10) == 0) {
      v14 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v13 & 0xFFFFFFE2 | 1;
      if (v14 > 0x0.0p+0f) {
        *(_DWORD*)(v12 + 224) = 0;
      }
    }
  }
  ProcInst_657850(v7, (__int64)&GameData_2262c18, (__int64)"ProcGameOverMenu",
                  1, a1);
  v15 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        *(_DWORD*)(game_GameModeData_instance_ + 64) != 1) {
      goto LABEL_23;
    }
    v16 = GameData_21eea48;
    if ((__int64*)GameData_21eea48 != &GameData_21eea40) {
      while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v16 + 16) + 88LL))(
                  *(_QWORD*)(v16 + 16)) &
              1) != 0) {
        v16 = *(_QWORD*)(v16 + 8);
        if ((__int64*)v16 == &GameData_21eea40) {
          v17 = GameData_21eea48;
          if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
            goto LABEL_18;
          }
          while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v17 + 16) + 96LL))(
                      *(_QWORD*)(v17 + 16)) &
                  1) != 0) {
            v17 = *(_QWORD*)(v17 + 8);
            if ((__int64*)v17 == &GameData_21eea40) {
              goto LABEL_18;
            }
          }
          goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
  LABEL_18:
    v18 = game_util_Format("%s_%s_%d", "Part", "Ism", 3);
    v25 = game_util_Format("%s/%s", "000", v18);
    v19 = GameRoutine_1a09c70(v25);
    GameRoutine_878ea0((void*)((__int64)&v26_.v26), (const char**)&v25);
    v15 = v26_.v26;
    if ((_BYTE)v26_.v26 != 0) {
      if ((v26_.v28 & 0x40) == 0) {
        v20 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v20 = *(_DWORD*)(game_GameModeData_instance_ + 8);
        }
        v15 = DWORDn(v26_.v26, sizeof(v26_.v26) / 4 - 1) == v20;
        goto LABEL_24;
      }
    LABEL_23:
      v15 = 0;
    }
  }
LABEL_24:
  *(_BYTE*)(v7 + 1129) = v15;
  v22 = *(_QWORD**)(v7 + 256);
  v21 = *(_QWORD**)(v7 + 264);
  *(_QWORD*)(v7 + 336) = 0;
  while (v22 != v21) {
    if (*v22 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v22 + 8LL))(*v22);
      v21 = *(_QWORD**)(v7 + 264);
    }
    ++v22;
  }
  v23 = *(_QWORD*)(v7 + 344);
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
    *(_QWORD*)(v7 + 344) = 0;
  }
  *(_QWORD*)(v7 + 264) = *(_QWORD*)(v7 + 256);
  *(_QWORD*)(v7 + 240) = *(_QWORD*)(v7 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 1024LL))(v7);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 1032LL))(v7);
  BasicMenuCursor_16de600(v7);
  return BasicMenu_16dea40(v7, 1, 0, 0);
}

#pragma GCC visibility pop
