#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_7f8880(PSEUDO_X8);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 game_17bfc90(__int64*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
extern _QWORD GameData_212d6d8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a92aa6[];
typedef char* GameAlign_1afe93a __attribute__((aligned(2)));
extern GameAlign_1afe93a GameData_1afe93a;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 llvm_libcxx_21_libcxx_include___vector_17265a0(__int64 a1, int a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_character_d35280(PSEUDO_X8, __int64*,
                                                      long double, long double);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterTrailModule_d3d630(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_bd3bc0(__int64, __int64*);
__int64 LocatorModule_a7bee0(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fdbb60[])();
extern __int64 (*game_character_CharacterTrailModule_vtable[])();
extern __int64 GameData_212c7d0[7];
extern char GameData_2167648[18];
extern int* GameData_212df08;
extern int* GameData_212ea00;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void* CharacterController_d43a60(int, __int64);
void CharacterTrailModule_d3b6a0(__int64);
void __attribute__((noreturn)) GameRoutine_a78a90();
void __cxa_guard_release(__int64);
void game_1052fc0(_QWORD*, const char*, unsigned __int64);
void llvm_libcxx_21_libcxx_include___vector_d3ade0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5);
__attribute__((swiftcall)) void
CharacterTrailVertex_d35280(PSEUDO_X8, __int64*, long double, long double);

void llvm_libcxx_21_libcxx_include___vector_d3ade0(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8 explicit;
  int* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int8 v39;
  int* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  float32x4_t* v45;
  float32x4_t* v46;
  float32x4_t v47;
  float32x4_t v48;
  __int128 v49;
  float32x4_t v50;
  __int128 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  long double v56;
  long double v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  bool v90;
  unsigned __int64 v91;
  char* v92;
  unsigned __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  _QWORD* v98;
  char* v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  int v116;
  struct {
    char gap0_[8];
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 (**v120)();
    __int64 v121;
    char* v122;
    char gap56_[8];
    __int64 (***v123)();
  } f_;

  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v5 = a1 + 24;
  *(_QWORD*)(a1 + 80) = 0;
  *(_BYTE*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)(a1 + 96) = 0;
  v7 = (__int64*)(a1 + 96);
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 124) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_QWORD*)a1 = game_character_CharacterTrailModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 132) = 0;
  *(_DWORD*)(a1 + 120) = 1065353216;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v102 = a4;
    v103 = a5;
    v104 = a3;
    v105 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    a3 = v104;
    a5 = v103;
    a4 = v102;
    if (v105 != 0) {
      v106 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v106;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      a3 = v104;
      a5 = v103;
      a4 = v102;
    }
  }
  *(_OWORD*)(a1 + 144) = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v107 = a4;
    v108 = a5;
    v109 = a3;
    v110 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    a3 = v109;
    a5 = v108;
    a4 = v107;
    if (v110 != 0) {
      v111 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v111;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      a3 = v109;
      a5 = v108;
      a4 = v107;
    }
  }
  v9 = *((_QWORD*)&GameData_21a6120 + 1);
  v8 = GameData_21a6120;
  *(_QWORD*)(a1 + 200) = 0;
  v10 = (char*)(a1 + 200);
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 72) = a3;
  *(_QWORD*)(a1 + 24) = a4;
  *(_QWORD*)(a1 + 32) = a5;
  *(_OWORD*)(a1 + 160) = __PAIR128__(v9, v8);
  *(_DWORD*)(a1 + 180) = 1065353216;
  v11 = *(_QWORD**)(a4 + 24);
  v12 = v11[76];
  v13 = v11[77];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v14 = (_QWORD*)v11[78];
  v15 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = v12;
  *(_QWORD*)(a1 + 48) = v13;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v13 = *(_QWORD*)(a1 + 48);
  }
  *(_QWORD*)(a1 + 56) = v14;
  v16 = (_QWORD*)((_UNKNOWN*)0x48LL);
  if (*(_QWORD*)(v13 + 8) != -1) {
    v16 = v14 + 9;
  }
  *(_QWORD*)(a1 + 64) = *v16;
  v17 = v14[9];
  v18 = v14[6];
  v19 = v14[7];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    f_.v117 = v18;
    f_.v118 = v19;
    f_.v120 = GameData_1fdbb60;
    f_.v121 = a1;
    f_.v123 = &f_.v120;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    f_.v117 = v18;
    f_.v118 = 0;
    f_.v120 = GameData_1fdbb60;
    f_.v121 = a1;
    f_.v123 = &f_.v120;
  }
  v20 = CharacterTrailModule_d3d630((_QWORD*)(v17 + 56), &f_.v117,
                                    (__int64)&f_.v120, -1),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (f_.v118 != 0) {
    std___1___shared_weak_count___release_weak(f_.v118),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v21 = (__int64*)f_.v123;
  *(_DWORD*)(a1 + 192) = v20;
  if (v21 == (__int64*)&f_.v120) {
    v22 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_19;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v21 + v22))((__int64)v21),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
LABEL_19:
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak(v19),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v112 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v112;
    __cxa_guard_release((__int64)&GameData_21a6130),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  *(_QWORD*)(a1 + 144) = 0;
  v23 = DWORD2(GameData_21a6120);
  *(_QWORD*)(a1 + 160) = GameData_21a6120;
  v25 = *(_OWORD*)(a1 + 144);
  v24 = *(_OWORD*)(a1 + 160);
  *((_QWORD*)&v24 + 1) = v23;
  v26 = *(_QWORD*)(a1 + 56);
  *((_QWORD*)&v25 + 1) = 1056964608;
  *(_OWORD*)(a1 + 144) = v25;
  *(_OWORD*)(a1 + 160) = v24;
  v27 = *(_QWORD*)(v26 + 392);
  v28 = *(_QWORD*)(v26 + 400);
  if (v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(v27 + 32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      std___1___shared_weak_count___release_weak(v28),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  else {
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(v27 + 32);
  }
  v29 = *(_QWORD*)(a1 + 24);
  *(_BYTE*)(a1 + 176) = 0;
  v30 = *(_DWORD*)(v29 + 36);
  if (v30 != 0) {
    if (v30 != 1) {
      goto LABEL_51;
    }
    v31 = 432;
  }
  else {
    v31 = 440;
  }
  v32 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + v31);
  if (v32 == 0) {
    goto LABEL_51;
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                                  memory_order_acquire);
  v34 = GameData_212ea00;
  if ((explicit & 1) == 0) {
    v113 = v32;
    v114 = __cxa_guard_acquire((__int64)GameData_212ea08),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v32 = v113;
    if (v114 != 0) {
      *v34 = wld_Crc32(0, "LocatorModule", 0xDu),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      __cxa_guard_release((__int64)GameData_212ea08),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v32 = v113;
    }
  }
  v35 = *(_QWORD*)(v32 + 512);
  v36 = v35;
  do {
    if (v36 == *(_QWORD*)(v32 + 504)) {
      goto LABEL_38;
    }
    v37 = *(_DWORD*)(v36 - 16);
    v36 -= 16;
    v35 -= 16;
  } while (v37 != *v34);
  if (*(_QWORD*)(v32 + 512) == v35) {
  LABEL_38:
    *(_QWORD*)(a1 + 184) = 0;
    goto LABEL_39;
  }
  v38 = *(_QWORD*)(v35 + 8);
  *(_QWORD*)(a1 + 184) = v38;
  if (v38 != 0) {
    goto LABEL_43;
  }
LABEL_39:
  v39 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                             memory_order_acquire);
  v40 = GameData_212df08;
  if ((v39 & 1) == 0) {
    v115 = v32;
    v116 = __cxa_guard_acquire((__int64)GameData_212df10),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v32 = v115;
    if (v116 != 0) {
      *v40 = wld_Crc32(0, "ModelModule", 0xBu),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      __cxa_guard_release((__int64)GameData_212df10),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v32 = v115;
    }
  }
  v41 = *(_QWORD*)(v32 + 512);
  v42 = v41;
  do {
    v43 = *(_DWORD*)(v42 - 16);
    v42 -= 16;
    v41 -= 16;
  } while (v43 != *v40);
  f_.v120 = *(__int64 (***)(void))(*(_QWORD*)(v41 + 8) + 24LL),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v38 = GameRoutine_bd3bc0(v32, (__int64*)&f_.v120),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_QWORD*)(a1 + 184) = v38;
LABEL_43:
  *(_QWORD*)(a1 + 264) = LocatorModule_a7bee0(v38, "Loc_TrailRoot"),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v57 = COERCE_AS(__typeof__(v57),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_QWORD*)(a1 + 272) =
      LocatorModule_a7bee0(*(_QWORD*)(a1 + 184), "Loc_TrailTip"),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v57 = COERCE_AS(__typeof__(v57),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
  v44 = LocatorModule_a7bee0(*(_QWORD*)(a1 + 184), "Export"),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v46 = *(float32x4_t**)(a1 + 264);
  v45 = *(float32x4_t**)(a1 + 272);
  *(_QWORD*)(a1 + 280) = v44;
  if (v46 != nullptr && v45 != nullptr) {
    *(_BYTE*)(a1 + 176) = 1;
  }
  if (v44 != 0) {
    v47 = *(float32x4_t*)(v44 + 320);
    LANES128(v47).n128_u32[3] = 0;
    if (v46 == nullptr) {
      goto LABEL_49;
    }
    goto LABEL_48;
  }
  v47 = (__typeof__(v47)){0};
  if (v46 != nullptr) {
  LABEL_48:
    *(_DWORD*)(a1 + 180) = LANES128(v46[15]).n128_u32[0];
    v48 = vaddq_f32(v47, v46[20]);
    *(_QWORD*)(a1 + 160) = LANES128(v48).n128_u64[0];
    v49 = *(_OWORD*)(a1 + 160);
    *((_QWORD*)&v49 + 1) = LANES128(v48).n128_u32[2];
    *(_OWORD*)(a1 + 160) = v49;
  }
LABEL_49:
  if (v45 != nullptr) {
    v50 = vaddq_f32(v47, v45[20]);
    *(_QWORD*)(a1 + 144) = LANES128(v50).n128_u64[0];
    v51 = *(_OWORD*)(a1 + 144);
    *((_QWORD*)&v51 + 1) = LANES128(v50).n128_u32[2];
    *(_OWORD*)(a1 + 144) = v51;
  }
LABEL_51:
  v52 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 96LL);
  if (v52 != 0) {
    v53 = GameRoutine_d2b5f0(*(_QWORD*)(v52 + 32) + 72LL),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if ((v53 & 0x100000000LL) != 0) {
      v54 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v52 + 24) + 72LL) +
                       104LL * (int)v53 + 16);
      if (v54 != 0) {
        v55 = (__int64*)CharacterController_d43a60(
            *(_DWORD*)(*(_QWORD*)v5 + 36LL), v54),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
        f_.v121 = 0;
        f_.v122 = nullptr;
        f_.v120 = nullptr;
        v59 = *v55;
        v58 = v55[1];
        v60 = (__int64*)fw_memory_g_heap_manager_ptr;
        v61 = v58 - *v55;
        if (v58 != *v55) {
          if ((v61 & 0x8000000000000000LL) != 0) {
            GameRoutine_a78a90(),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v62 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v61, 16, 0),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v63 = v62 + v61;
          f_.v120 = (__int64 (**)(void))v62,
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
          f_.v122 = (const char*)(v62 + v61);
          GameRoutine_1a0b950(v62, v59, v61),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          f_.v121 = v63;
        }
        CharacterTrailVertex_d35280((void*)(&f_.v117), (__int64*)&f_.v120, v56,
                                    v57),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v64 = *v7;
        if (*v7 != 0) {
          v65 = *v60;
          *(_QWORD*)(a1 + 104) = v64;
          v66 = 128;
          if (*(_QWORD*)(v65 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(v65 + v66, v64),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        v67 = f_.v118;
        *(_QWORD*)(a1 + 96) = f_.v117;
        *(_QWORD*)(a1 + 104) = v67;
        v68 = (__int64)f_.v120;
        *(_QWORD*)(a1 + 112) = f_.v119;
        if (v68 != 0) {
          v69 = *v60;
          f_.v121 = v68;
          v70 = 128;
          if (*(_QWORD*)(v69 + 200) == 0) {
            v70 = 56;
          }
          nn_mem_StandardAllocator_Free(v69 + v70, v68),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      }
    }
  }
  v71 = *(_QWORD*)(a1 + 24);
  v72 = (__int64*)(v71 + 40);
  *(_DWORD*)(a1 + 132) = *(_DWORD*)(v71 + 64);
  if (v10 != (char*)(v71 + 40)) {
    v73 = *(unsigned __int8*)v72;
    if ((*v10 & 1) != 0) {
      v77 = v71 + 41;
      v80 = v71 + 48;
      v78 = *(_QWORD*)(v71 + 48);
      v79 = *(_QWORD*)(v80 + 8);
      if ((v73 & 1) != 0) {
        v81 = v79;
      }
      else {
        v81 = v77;
      }
      if ((v73 & 1) != 0) {
        v82 = v78;
      }
      else {
        v82 = v73 >> 1;
      }
      SpineModel_64dde0((__int64*)(a1 + 200), v81, v82),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else if ((v73 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 200), *(_QWORD*)(v71 + 56),
                         *(_QWORD*)(v71 + 48)),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      v74 = *v72;
      v75 = v72[1];
      v76 = v72[2];
      *(_QWORD*)(a1 + 208) = v75;
      *(_QWORD*)(a1 + 216) = v76;
      *(_QWORD*)v10 = v74;
    }
  }
  v83 = *(unsigned __int8*)(a1 + 200);
  v84 = v83 >> 1;
  if ((v83 & 1) != 0) {
    v84 = *(_QWORD*)(a1 + 208);
  }
  if (v10 != GameData_2167648 && v84 == 0) {
    if ((v83 & 1) != 0) {
      if ((GameData_2167648[0] & 1) != 0) {
        v87 = *(char**)&GameData_2167648[16];
      }
      else {
        v87 = &GameData_2167648[1];
      }
      if ((GameData_2167648[0] & 1) != 0) {
        v88 = *(_QWORD*)&GameData_2167648[8];
      }
      else {
        v88 = (unsigned __int64)(unsigned __int8)GameData_2167648[0] >> 1;
      }
      SpineModel_64dde0((__int64*)(a1 + 200), (__int64)v87, v88),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else if ((GameData_2167648[0] & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 200), *(__int64*)&GameData_2167648[16],
                         *(unsigned __int64*)&GameData_2167648[8]),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      v85 = *(_QWORD*)&GameData_2167648[8];
      v86 = *(_QWORD*)&GameData_2167648[16];
      *(_QWORD*)v10 = *(_QWORD*)GameData_2167648;
      *(_QWORD*)(a1 + 208) = v85;
      *(_QWORD*)(a1 + 216) = v86;
    }
  }
  f_.v121 = 0;
  f_.v122 = nullptr;
  f_.v120 = nullptr;
  GameRoutine_1a09ce0((__int64)&f_.v120, "Trail:", 6u),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v89 = *(unsigned __int8*)(a1 + 200);
  v90 = (v89 & 1) == 0;
  v91 = v89 >> 1;
  if (v90) {
    v92 = (const char*)(a1 + 201);
  }
  else {
    v92 = *(const char**)(a1 + 216);
  }
  if (v90) {
    v93 = v91;
  }
  else {
    v93 = *(_QWORD*)(a1 + 208);
  }
  GameRoutine_1a09ce0((__int64)&f_.v120, v92, v93),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v94 = *(_QWORD*)(a1 + 8);
  if (((unsigned __int8)f_.v120 & 1) != 0) {
    v95 = f_.v122;
  }
  else {
    v95 = (char*)&f_.v120 + 1;
  }
  v96 = GameRoutine_1a09c70(v95),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v96 != 0) {
    if (v96 >= 0xFF) {
      v97 = 255;
    }
    else {
      v97 = v96;
    }
    GameRoutine_1a0b940(v94 + 16, (__int64)v95, v97),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  *(_QWORD*)(v94 + 272) = v96;
  *(_BYTE*)(v94 + 16 + v96) = 0;
  v98 = *(_QWORD**)GameData_212c7d0[0];
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v99 = *(const char**)(a1 + 216);
  }
  else {
    v99 = (const char*)(a1 + 201);
  }
  v100 = GameRoutine_1a09c70(v99),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_1052fc0(v98, v99, v100),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  CharacterTrailModule_d3b6a0(a1),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (((unsigned __int8)f_.v120 & 1) != 0 && f_.v122 != nullptr) {
    v101 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v101 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v101,
                                  (__int64)f_.v122),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_17265a0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  char* v9;
  char* v10;
  char* v11;
  char* v12;
  __int64 v13;
  char* v14;
  __int64* v15;
  __int64* v16;
  char** v17;
  char* v18;
  __int64 v19;
  char* v20;
  unsigned int v21;
  int v22;
  char* v26;
  char* v27;
  __int64 v28;
  char* v29;
  char* v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  char* v38;
  __int64 v39;
  char* v40;
  char* v41;
  __int16 v42;
  __int16 v43;
  __int16 v44;
  __int16 v45;
  __int16 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  char* v50;
  float v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  float v55;
  float v56;
  char v57;
  _QWORD* v58;
  float v59;
  float v60;
  float v61;
  __int64 result;
  __int64 v64;
  __int64 v65;
  char v67;
  int v68;
  int i;
  char* v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  _WORD v74[6];
  struct {
    __int64* v75;
    __int64 v76;
    char* v77;
    unsigned __int64 v78;
    int v79;
    int v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    char gap168_[4];
    float v94;
  } v75_;
  float v95[4];

  v2 = *(_QWORD*)(a1 + 1216);
  v5 = 0x6DB6DB6DB6DB6DB7LL *
       ((signed __int64)(*(_QWORD*)(a1 + 1224) - v2) >> 4);
  v6 = v2 + 112LL * a2;
  if (v5 <= a2) {
    v7 = GameData_212d6d8;
  }
  else {
    v7 = v6;
  }
  v8 = *(unsigned __int8*)(v7 + 11);
  if (v8 > 1) {
    if (v8 == 2) {
      v11 = "MCID_chapter_29";
    }
    else if (v8 == 3) {
      v11 = "MCID_chapter_30";
    }
    else {
      v11 = nullptr;
    }
  }
  else if (*(_BYTE*)(v7 + 11) != 0) {
    game_7f8880((void*)((__int64*)&v75_.v75));
    if (((unsigned __int8)v75_.v75 & 1) != 0) {
      v9 = v75_.v77;
    }
    else {
      v9 = (char*)&v75_.v75 + 1;
    }
    v10 = game_util_Format("MCID_episode_%s", v9);
    v11 = v10;
    if (((unsigned __int8)v75_.v75 & 1) != 0 && v75_.v77 != nullptr) {
      v12 = v10;
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v75_.v77);
      v11 = v12;
    }
  }
  else {
    v11 = "MCID_chapter_28";
  }
  LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)"T_Story", v11);
  v14 = game_util_Format("MCID_part_%d", *(unsigned __int8*)(v7 + 11));
  v15 = msg_MessageManager_instance__ptr[0];
  v16 = GameData_212e348;
  v17 = msg_MessageManager_empty_text__ptr;
  if (*v14 != 0) {
    v18 = v14;
    v19 = *msg_MessageManager_instance__ptr[0];
    v75_.v81 = -1;
    v75_.v82 = -1;
    v75_.v83 = -1;
    v75_.v84 = -1;
    v75_.v85 = -1;
    v75_.v86 = -1;
    v75_.v87 = -1;
    v75_.v88 = -1;
    v75_.v89 = -1;
    v75_.v90 = -1;
    v75_.v91 = -1;
    v75_.v92 = -1;
    v75_.v75 = GameData_212e348 + 2;
    v75_.v76 = 0xFFFF0001FFFF0000LL;
    v75_.v77 = (char*)0xFFFF0004FFFF0002LL;
    v75_.v78 = 0xFFFF0006FFFF0005LL;
    v75_.v93 = 8;
    v75_.v79 = -65529;
    v75_.v80 = -65528;
    v20 = GameRoutine_a4dbe0(v19, v18, 0);
  }
  else {
    v20 = *msg_MessageManager_empty_text__ptr;
  }
  v21 = *(unsigned __int8*)(v7 + 11);
  v22 = *(unsigned __int8*)(v7 + 12);
  if (*(_BYTE*)(v7 + 11) == 0 & v22 == 3) {
    v27 = "MCID_chapter_Ex01";
    if (GameData_1a92aa6[0] != 0) {
      goto LABEL_40;
    }
  }
  else {
    if (v22 != 13 | v21 != 1 || *(_BYTE*)(a1 + 1200) != 7) {
      if (v21 >= 3) {
        v26 = game_util_Format("MCID_chapter_Sect%02d");
      }
      else {
        v26 = game_util_Format("MCID_chapter_%02d");
      }
      v27 = v26;
      if (*v26 == 0) {
        goto LABEL_42;
      }
    LABEL_40:
      v28 = *v15;
      v75_.v81 = -1;
      v75_.v82 = -1;
      v75_.v83 = -1;
      v75_.v84 = -1;
      v75_.v85 = -1;
      v75_.v86 = -1;
      v75_.v87 = -1;
      v75_.v88 = -1;
      v75_.v89 = -1;
      v75_.v90 = -1;
      v75_.v91 = -1;
      v75_.v92 = -1;
      v75_.v75 = v16 + 2;
      v75_.v76 = 0xFFFF0001FFFF0000LL;
      v75_.v77 = (char*)0xFFFF0004FFFF0002LL;
      v75_.v78 = 0xFFFF0006FFFF0005LL;
      v75_.v93 = 8;
      v75_.v79 = -65529;
      v75_.v80 = -65528;
      v29 = GameRoutine_a4dbe0(v28, v27, 0);
      goto LABEL_43;
    }
    v27 = "MCID_chapter_Ex02";
    if (GameData_1afe93a[0] != 0) {
      goto LABEL_40;
    }
  }
LABEL_42:
  v29 = *v17;
LABEL_43:
  if (v20 != nullptr) {
    v30 = v20;
  }
  else {
    v30 = *v17;
  }
  GameRoutine_60a020(*v15 + 14704, v30);
  if (v29 != nullptr) {
    v31 = v29;
  }
  else {
    v31 = *v17;
  }
  GameRoutine_60a020(*v15 + 14728, v31);
  v32 = *v15;
  v75_.v81 = -1;
  v75_.v82 = -1;
  v75_.v83 = -1;
  v75_.v84 = -1;
  v75_.v85 = -1;
  v75_.v86 = -1;
  v75_.v87 = -1;
  v75_.v88 = -1;
  v75_.v89 = -1;
  v75_.v90 = -1;
  v75_.v91 = -1;
  v75_.v92 = -1;
  v75_.v75 = v16 + 2;
  v75_.v76 = 0xFFFF0001FFFF0000LL;
  v75_.v77 = (char*)0xFFFF0004FFFF0002LL;
  v75_.v78 = 0xFFFF0006FFFF0005LL;
  v75_.v93 = 8;
  v75_.v79 = -65529;
  v75_.v80 = -65528;
  v33 = GameRoutine_a4dbe0(v32, "MID_Chapter_PartChapter", 0);
  if (v33 != nullptr) {
    v34 = (__int64)v33;
    v35 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                        (__int64)"T_PartChapter");
    if (v35 != 0) {
      GameRoutine_156c5d0(v35, v34, 0);
    }
  }
  v36 = *(unsigned __int8*)(v7 + 11);
  v37 = *(unsigned __int8*)(v7 + 12);
  if (v36 == 2) {
    v41 = game_util_Format("MCID_2_title%02d", *(unsigned __int8*)(v7 + 12));
  LABEL_64:
    v38 = v41;
    goto LABEL_65;
  }
  if (v36 == 1) {
    v39 = *(unsigned __int8*)(a1 + 1200);
    if ((_DWORD)v39 == 10) {
      v40 = nullptr;
    }
    else {
      v40 = GameData_20660e0[v39];
    }
    v41 = game_util_Format("MCID_1_%s_title%02d", v40, v37);
    goto LABEL_64;
  }
  if (*(_BYTE*)(v7 + 11) != 0) {
    v41 =
        game_util_Format("MCID_3_ISM_title%02d", *(unsigned __int8*)(v7 + 12));
    goto LABEL_64;
  }
  if (v37 != 3) {
    v41 =
        game_util_Format("MCID_0_ISM_title%02d", *(unsigned __int8*)(v7 + 12));
    goto LABEL_64;
  }
  v38 = "MCID_0_ISM_title03_2";
LABEL_65:
  LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)"T_TitleChapter", v38);
  v42 = *(_WORD*)(v7 + 64);
  v43 = *(unsigned __int8*)(v7 + 66);
  v44 = *(unsigned __int8*)(v7 + 67);
  v45 = *(unsigned __int8*)(v7 + 68);
  v46 = *(unsigned __int8*)(v7 + 69);
  if (*(_BYTE*)(v7 + 11) == 2 && *(_BYTE*)(v7 + 12) == 1 &&
      *(_BYTE*)(a1 + 1240) != 0) {
    v47 = ((3600LL * *(unsigned __int16*)(a1 + 1300)) |
           ((unsigned __int64)*(unsigned int*)(a1 + 1324) << 32)) +
          60LL * *(unsigned __int8*)(a1 + 1302) +
          *(unsigned __int8*)(a1 + 1303);
    if (((3600LL * *(unsigned __int16*)(v7 + 60)) |
         ((unsigned __int64)*(unsigned int*)(v7 + 84) << 32)) +
            60LL * *(unsigned __int8*)(v7 + 62) +
            *(unsigned __int8*)(v7 + 63) <=
        v47) {
      v42 = *(_WORD*)(a1 + 1304);
      v43 = *(unsigned __int8*)(a1 + 1306);
      v44 = *(unsigned __int8*)(a1 + 1307);
      v45 = *(unsigned __int8*)(a1 + 1308);
      v46 = *(unsigned __int8*)(a1 + 1309);
      if (*(_QWORD*)(a1 + 1424) < v47) {
        *(_DWORD*)(a1 + 1432) = 1;
      }
    }
  }
  v74[0] = v42;
  v74[1] = v43;
  v74[2] = v44;
  v74[3] = v45;
  v74[4] = v46;
  v74[5] = 0;
  game_17bfc90((__int64*)(a1 + 848), (__int64)v74);
  if (*(_DWORD*)(a1 + 1432) == *(unsigned __int8*)(v7 + 12)) {
    v48 = "New_Date";
  }
  else {
    v48 = "Common_Date";
  }
  LayoutAccessor_1562cf0(a1 + 848, v48);
  v49 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), (__int64)"BorderImg");
  if (v49 != 0 && (v50 = Pane_58fac0(v49, "Margin_Width")) != nullptr) {
    v51 = (float)*(int*)&v50[*((unsigned int*)v50 + 1)];
  }
  else {
    v51 = 0x1.4000000000000p+5f;
  }
  v52 =
      ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848), (__int64)"BorderImg");
  if (v52 != 0) {
    v53 = v52;
    v54 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                                 (__int64)"BorderImg");
    if (v54 != nullptr) {
      ui_text_190a0c0((float*)&v75_.v75, (__int64)v95, &v75_.v94, v54, v54[27]);
      v55 = v95[0];
      v56 = v95[1];
    }
    else {
      v55 = 0x0.0p+0f;
      v56 = 0x0.0p+0f;
    }
    v57 = *(_BYTE*)(v53 + 88);
    *(float*)(v53 + 80) = v55;
    *(float*)(v53 + 84) = v56;
    *(_BYTE*)(v53 + 88) = v57 | 0x10;
  }
  v58 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                               (__int64)"T_TitleChapter");
  if (v58 != nullptr) {
    ui_text_190a0c0((float*)&v75_.v75, (__int64)v95, &v75_.v94, v58, v58[27]);
    v59 = v95[0];
  }
  else {
    v59 = 0x0.0p+0f;
  }
  v60 = v51 + v59;
  if (v60 >= 0x1.1800000000000p+6f) {
    v61 = v60;
  }
  else {
    v61 = 0x1.1800000000000p+6f;
  }
  ui_LayoutAccessor_GetPaneSize((__int64*)(a1 + 848), (__int64)"BorderImg");
  ui_LayoutAccessor_SetPaneSize(a1 + 848, (__int64)"BorderImg", v61);
  LayoutAccessor_1560070((void*)(&v75_.v75), (__int64*)(a1 + 848), "L_KeyHelp");
  result = v75_.v76;
  if (v75_.v76 != 0) {
    v64 = std___1___shared_weak_count_lock(v75_.v76);
    v65 = (__int64)v75_.v75;
    result = v75_.v76;
    if (v75_.v76 != 0) {
      result = std___1___shared_weak_count___release_weak(v75_.v76);
    }
    if (v64 != 0 && v65 != 0) {
      v67 = *(_BYTE*)(v7 + 11) != 1 | *(_BYTE*)(v7 + 12) != 1;
      result = LayoutAccessor_155e830(v65, v67);
    }
    else if (v64 == 0) {
      goto LABEL_104;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
      result = std___1___shared_weak_count___release_weak(v64);
    }
  }
LABEL_104:
  v68 = -1227133513 * ((*(_QWORD*)(a1 + 1224) - *(_QWORD*)(a1 + 1216)) >> 4);
  if (v68 >= 1) {
    for (i = 0; v68 != i; ++i) {
      v70 = game_util_Format("L_Tab/Tab%02d", i);
      LayoutAccessor_1560070((void*)(&v75_.v75), (__int64*)(a1 + 848), v70);
      result = v75_.v76;
      if (v75_.v76 != 0) {
        v71 = std___1___shared_weak_count_lock(v75_.v76);
        v72 = (__int64)v75_.v75;
        result = v75_.v76;
        if (v75_.v76 != 0) {
          result = std___1___shared_weak_count___release_weak(v75_.v76);
        }
        if (v71 != 0 && v72 != 0) {
          if (a2 == i) {
            v73 = "Select";
          }
          else {
            v73 = "Default";
          }
          result = GameHr_1562680(v72, v73, 0x1.0000000000000p+0f);
        LABEL_117:
          if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
            result = std___1___shared_weak_count___release_weak(v71);
          }
          continue;
        }
        if (v71 != 0) {
          goto LABEL_117;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
