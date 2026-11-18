#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void ResFile_ad6ca0(PSEUDO_X8);
__attribute__((swiftcall)) void game_13f8ba0(PSEUDO_X8, char*);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64, unsigned __int16*,
                                      int);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_140d860(PSEUDO_X8, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_8aef60(__int64, unsigned __int16*);
__int64 BuyController_186b3c0(_QWORD*);
__int64 Components_a870e0(__int64*, char);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_8a1f40(__int64 result);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, int);
__int64 SceneCharacterBuilder_1469220(__int64 result, __int64*, char, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_120c6c0(__int64, unsigned int, char);
__int64 game_HashString(__int64 result);
__int64 game_UnitItemList_Add(_WORD*, _DWORD*, _WORD*, char);
__int64 game_menu_DeleteTransportMenu_CreateBind(__int64, __int64, __int64,
                                                 char, char);
__int64 game_menu_SendUnitItemMenu_CreateBind(__int64, __int64, __int64, char,
                                              char, __int64, __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool TransporterConst_89ca00(unsigned __int16*);
extern _BYTE* GameData_2132020;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1aa0a79;
extern _UNKNOWN GameData_1aac18e;
extern _UNKNOWN GameData_1fd1588;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fa9248[])();
extern __int64 (*GameData_20f37c8[])();
extern __int64 (*GameData_20f3848[])();
extern __int64 (*GameData_20f38c8[])();
extern __int64 (*GameData_20f3948[])();
extern __int64 (
    *game_facility_SceneCharacter_ChangeAppearance_lambda0_Destructor_ptr[])();
extern __int64 (
    *game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_ptr[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e030[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_2131c68[45];
extern __int64 GameData_21f61c0;
extern __int64 GameData_2241860;
extern __int64 GameData_226b320;
extern __int64 GameData_226b328;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void GameRoutine_ad69c0(_QWORD*);
void GameRoutine_ad6d20(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_1953ab0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8a54f0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
long double game_facility_138b340(__int64 a1, __int64 a2, __int64 a3);
void game_facility_13fcbc0(__int64 a1, __int64 a2, __int64* a3);
__int64 game_facility_1400c40(__int64 a1, __int64* a2, char a3, __int64 a4);
__int64 game_facility_1868d40(_QWORD* a1);
void game_facility_19526e0(__int64 a1, __int64 a2, float a3);

long double game_facility_138b340(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int128 v39;
  long double result;
  __int64 v41;
  __int128 v42;
  __int64 v43;
  struct {
    _QWORD v44[2];
    char* v45;
    __int64 v46[2];
    __int64 v47;
    long double v48;
    char* v49;
    __int64 v50;
    unsigned __int64 v51;
    char* v52;
  } f_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(f_.v46, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    f_.v46[0] = *(_QWORD*)a2;
    f_.v46[1] = v6;
    f_.v47 = *(_QWORD*)(a2 + 16);
  }
  game_13f8ba0((void*)((__int64*)&f_.v48), (char*)f_.v46);
  if ((f_.v46[0] & 1) != 0 && f_.v47 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  f_.v47);
  }
  v8 = (__int64*)(a1 + 8);
  if ((long double*)(a1 + 8) != &f_.v48) {
    if ((*(_BYTE*)v8 & 1) != 0) {
      if ((LOBYTE(f_.v48) & 1) != 0) {
        v10 = f_.v49;
      }
      else {
        v10 = (char*)&f_.v48 + 1;
      }
      if ((LOBYTE(f_.v48) & 1) != 0) {
        v11 = *((_QWORD*)&f_.v48 + 1);
      }
      else {
        v11 = (unsigned __int64)LOBYTE(f_.v48) >> 1;
      }
      SpineModel_64dde0(v8, (__int64)v10, v11);
    }
    else if ((LOBYTE(f_.v48) & 1) != 0) {
      GameRoutine_64df20(v8, (__int64)f_.v49,
                         *((unsigned __int64*)&f_.v48 + 1));
    }
    else {
      v9 = *((_QWORD*)&f_.v48 + 1);
      *v8 = *(_QWORD*)&f_.v48;
      *(_QWORD*)(a1 + 16) = v9;
      *(_QWORD*)(a1 + 24) = f_.v49;
    }
  }
  v12 = (__int64*)(a1 + 32);
  if ((__int64*)(a1 + 32) == &f_.v50) {
  LABEL_33:
    if ((f_.v50 & 1) == 0) {
      goto LABEL_38;
    }
    goto LABEL_34;
  }
  if ((*(_BYTE*)v12 & 1) != 0) {
    if ((f_.v50 & 1) != 0) {
      v15 = f_.v52;
    }
    else {
      v15 = (char*)&f_.v50 + 1;
    }
    if ((f_.v50 & 1) != 0) {
      v16 = f_.v51;
    }
    else {
      v16 = (unsigned __int64)(unsigned __int8)f_.v50 >> 1;
    }
    SpineModel_64dde0(v12, (__int64)v15, v16);
    goto LABEL_33;
  }
  if ((f_.v50 & 1) != 0) {
    GameRoutine_64df20(v12, (__int64)f_.v52, f_.v51);
    if ((f_.v50 & 1) == 0) {
      goto LABEL_38;
    }
  }
  else {
    v13 = f_.v51;
    v14 = (__int64)f_.v52;
    *v12 = f_.v50;
    *(_QWORD*)(a1 + 40) = v13;
    *(_QWORD*)(a1 + 48) = v14;
    if ((f_.v50 & 1) == 0) {
      goto LABEL_38;
    }
  }
LABEL_34:
  if (f_.v52 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)f_.v52);
  }
LABEL_38:
  if ((LOBYTE(f_.v48) & 1) != 0 && f_.v49 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)f_.v49);
  }
  v19 = (unsigned __int8*)(a2 + 24);
  v20 = (__int64*)(a1 + 56);
  if (a1 + 56 != a2 + 24) {
    v21 = *v19;
    if ((*(_BYTE*)v20 & 1) != 0) {
      if ((v21 & 1) != 0) {
        v24 = *(_QWORD*)(a2 + 40);
      }
      else {
        v24 = a2 + 25;
      }
      if ((v21 & 1) != 0) {
        v25 = *(_QWORD*)(a2 + 32);
      }
      else {
        v25 = v21 >> 1;
      }
      SpineModel_64dde0(v20, v24, v25);
    }
    else if ((v21 & 1) != 0) {
      GameRoutine_64df20(v20, *(_QWORD*)(a2 + 40), *(_QWORD*)(a2 + 32));
    }
    else {
      v22 = *(_QWORD*)v19;
      v23 = *(_QWORD*)(a2 + 40);
      *(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 32);
      *(_QWORD*)(a1 + 72) = v23;
      *v20 = v22;
    }
  }
  v26 = (unsigned __int8*)(a2 + 224);
  v27 = (__int64*)(a1 + 80);
  if (a1 + 80 == a2 + 224) {
  LABEL_69:
    *(_QWORD*)(a1 + 104) = a3;
    if (a3 != 0) {
      goto LABEL_70;
    }
    goto LABEL_90;
  }
  v28 = *v26;
  if ((*(_BYTE*)v27 & 1) != 0) {
    if ((v28 & 1) != 0) {
      v30 = *(_QWORD*)(a2 + 240);
    }
    else {
      v30 = a2 + 225;
    }
    if ((v28 & 1) != 0) {
      v31 = *(_QWORD*)(a2 + 232);
    }
    else {
      v31 = v28 >> 1;
    }
    SpineModel_64dde0(v27, v30, v31);
    goto LABEL_69;
  }
  if ((v28 & 1) != 0) {
    GameRoutine_64df20(v27, *(_QWORD*)(a2 + 240), *(_QWORD*)(a2 + 232));
    *(_QWORD*)(a1 + 104) = a3;
    if (a3 != 0) {
      goto LABEL_70;
    }
  LABEL_90:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
      v43 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v43;
      __cxa_guard_release((__int64)&GameData_21a6130);
    }
    *(_DWORD*)(a1 + 128) = 0;
    result = *(long double*)&GameData_21a6120;
    *(_QWORD*)(a1 + 112) = GameData_21a6120;
    v42 = *(_OWORD*)(a1 + 112);
    *((_QWORD*)&v42 + 1) = DWORD2(result);
    *(_OWORD*)(a1 + 112) = v42;
    return result;
  }
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 232);
  v29 = *(_QWORD*)v26;
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 240);
  *v27 = v29;
  *(_QWORD*)(a1 + 104) = a3;
  if (a3 == 0) {
    goto LABEL_90;
  }
LABEL_70:
  v32 = *(const char**)(a3 + 8);
  v33 = GameRoutine_1a09c70(v32);
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v34 = v33;
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v33 | 7) + 1;
    }
    v35 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
    f_.v44[1] = v34;
    f_.v45 = v35;
    f_.v44[0] = v36 | 1;
    goto LABEL_78;
  }
  LOBYTE(f_.v44[0]) = 2 * v33;
  v35 = (char*)f_.v44 + 1;
  if (v33 != 0) {
  LABEL_78:
    GameRoutine_1a0b940((__int64)v35, (__int64)v32, v34);
  }
  v35[v34] = 0;
  game_facility_140d860((void*)((__int64)&f_.v48), (__int64)f_.v44);
  if ((f_.v44[0] & 1) != 0 && f_.v45 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  (__int64)f_.v45);
  }
  result = f_.v48;
  v38 = f_.v50;
  *(_QWORD*)(a1 + 112) = *(_QWORD*)&f_.v48;
  v39 = *(_OWORD*)(a1 + 112);
  *((_QWORD*)&v39 + 1) = DWORD2(result);
  {
    __typeof__(result) z_ = (__typeof__(result)){0};
    LODWORD(z_) = (_DWORD)f_.v49;
    result = z_;
  }
  *(_DWORD*)(a1 + 128) = (_DWORD)f_.v49;
  *(_OWORD*)(a1 + 112) = v39;
  if ((v38 & 1) != 0 && f_.v52 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  (__int64)f_.v52);
  }
  return result;
}

void game_facility_13fcbc0(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;
  unsigned int v25;
  __int128 v26;
  float v27;
  __int128 i;
  __int128 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  bool v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _BYTE* v67;
  __int64 v68;
  __int128* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int128* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  struct {
    __int64 v77;
    __int64 v78;
    __int64 v79;
  } v77_;
  struct {
    _BYTE v80[32];
    _BYTE* v81;
  } v80_;
  struct {
    __int128 v82;
    char* v83;
    char v84;
    char gap121_[7];
    __int128* v85;
    __int64 v86;
  } v82_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  v6 = game_HashString(v5);
  if (v6 == 0) {
    return;
  }
  v7 = *(_QWORD*)(GameData_2241860 + 96);
  if (v7 == 0 | *(_QWORD*)(GameData_2241860 + 112) == 0) {
    return;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_2241860 + 88) + 8 * v10);
  if (v11 == nullptr) {
    return;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    return;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == v6) {
        if (v12[2] == v6) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v9) != v10) {
        return;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v6) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      return;
    }
  LABEL_18:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      return;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_18;
  }
LABEL_29:
  v15 = v12[3];
  if (v15 == 0) {
    return;
  }
  if (*(_QWORD*)(v15 + 40) != 0) {
    v16 = *(const char**)(v15 + 40);
  }
  else {
    v16 = &GameData_1a9f09e;
  }
  v17 = GameRoutine_1a09c70(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_138;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    v20 = (v17 | 7) == 0x17 ? 26LL : (v17 | 7) + 1;
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    *((_QWORD*)&v82_.v82 + 1) = v18;
    v82_.v83 = v19;
    *(_QWORD*)&v82_.v82 = v20 | 1;
  }
  else {
    LOBYTE(v82_.v82) = 2 * v17;
    v19 = (char*)&v82_.v82 + 1;
    if (v17 == 0) {
      goto LABEL_42;
    }
  }
  GameRoutine_1a0b940((__int64)v19, (__int64)v16, v18);
LABEL_42:
  v19[v18] = 0;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 64);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
    }
  }
  *(_OWORD*)(a1 + 48) = v82_.v82;
  *(_QWORD*)(a1 + 64) = v82_.v83;
  v23 = *(_DWORD*)(v15 + 48);
  *(_DWORD*)(a1 + 112) = v23;
  *(_DWORD*)(a1 + 116) = v23;
  v24 = *(_OWORD*)(a1 + 112);
  *((_QWORD*)&v24 + 1) = v23;
  *(_OWORD*)(a1 + 112) = v24;
  game_facility_140d160((void*)(&v82_.v82), (__int64)a3);
  v25 = DWORD2(v82_.v82);
  *(_QWORD*)(a1 + 80) = v82_.v82;
  v26 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v26 + 1) = v25;
  *(_OWORD*)(a1 + 80) = v26;
  v27 = *(float*)&v82_.v83 + 0x0.0p+0f;
  if (*(float*)&v82_.v83 < -0x1.6800000000000p+7f) {
    do {
      v27 = v27 + 0x1.6800000000000p+8f;
    } while (v27 < -0x1.6800000000000p+7f);
  }
  for (i = *(_OWORD*)(a1 + 96); v27 >= 0x1.6800000000000p+7f;
       v27 = v27 + -0x1.6800000000000p+8f)
    ;
  *(_DWORD*)(a1 + 96) = i;
  *(float*)(a1 + 100) = v27;
  v29 = *(_OWORD*)(a1 + 96);
  *(_BYTE*)(a1 + 128) = 1;
  v30 = v82_.v84;
  *((_QWORD*)&v29 + 1) = DWORD2(i);
  *(_OWORD*)(a1 + 96) = v29;
  if ((v30 & 1) != 0 && v82_.v86 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  v82_.v86);
  }
  v32 = Components_a870e0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                              8LL) +
                   48LL),
      0);
  v33 = *(unsigned __int8*)(a1 + 24);
  v34 = *(_QWORD*)(a1 + 32);
  v35 = v32 + 16;
  v36 = v32;
  *(_QWORD*)(a1 + 8) = v32;
  if ((v33 & 1) != 0) {
    v37 = v34;
  }
  else {
    v37 = v33 >> 1;
  }
  if (v37 != 0) {
    v38 = v32 + 16;
    if ((v33 & 1) != 0) {
      v39 = *(_QWORD*)(a1 + 40);
    }
    else {
      v39 = a1 + 25;
    }
    if (v37 >= 0xFF) {
      v40 = 255;
    }
    else {
      v40 = v37;
    }
    GameRoutine_1a0b940(v38, v39, v40);
  }
  *(_QWORD*)(v36 + 272) = v37;
  *(_BYTE*)(v35 + v37) = 0;
  v41 = *(unsigned __int8*)(a1 + 48);
  v42 = (v41 & 1) == 0;
  v43 = v41 >> 1;
  v44 = v42 ? v43 : *(_QWORD*)(a1 + 56);
  v45 = v42 ? a1 + 49 : *(_QWORD*)(a1 + 64);
  v46 = v44 + 6;
  if (v44 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_138:
    String_60a1d0();
  }
  if (v46 >= 0x17) {
    if ((v46 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v46 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v48,
                                                16, 0);
    *((_QWORD*)&v82_.v82 + 1) = v44 + 6;
    v82_.v83 = v47;
    *(_QWORD*)&v82_.v82 = v48 | 1;
    goto LABEL_81;
  }
  v82_.v83 = nullptr;
  v82_.v82 = (unsigned __int8)(2 * v46);
  v47 = (char*)&v82_.v82 + 1;
  if (v44 != 0) {
  LABEL_81:
    GameRoutine_1a0b940((__int64)v47, v45, v44);
  }
  strcpy(&v47[v44], ".bfres");
  v49 = v82_.v82 & 1;
  if ((v82_.v82 & 1) != 0) {
    v50 = (__int64)v82_.v83;
  }
  else {
    v50 = (__int64)&v82_.v82 + 1;
  }
  if (v50 != 0) {
    v51 = *snd_g_fileIndex_ptr[0];
    v52 = GameRoutine_1a09c70((const char*)v50);
    LOBYTE(v50) = fs_6360e0(v51, v50, v52, 0, 0);
    v49 = v82_.v82 & 1;
  }
  if (v49 != 0 && v82_.v83 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  (__int64)v82_.v83);
  }
  if ((v50 & 1) != 0) {
    ResFile_ad6ca0((void*)((__int64*)&v82_.v82));
    v54 = v82_.v82;
    if ((_QWORD)v82_.v82 != 0) {
      v55 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v55[2] = 0;
      v55[3] = v54;
      *v55 = &GameData_1fd1588;
      v55[1] = 0;
    }
    else {
      v55 = nullptr;
    }
    v56 = *(_QWORD*)(a1 + 144);
    *(_QWORD*)&v82_.v82 = 0;
    *(_QWORD*)(a1 + 136) = v54;
    *(_QWORD*)(a1 + 144) = v55;
    if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
      std___1___shared_weak_count___release_weak(v56);
    }
    v57 = v82_.v82;
    if ((_QWORD)v82_.v82 != 0) {
      GameRoutine_ad69c0((_QWORD*)v82_.v82);
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
    }
    v59 = *(unsigned __int8*)(a1 + 48);
    v60 = (v59 & 1) == 0;
    v61 = v59 >> 1;
    v62 = *(_QWORD*)(a1 + 136);
    if (v60) {
      v63 = v61;
    }
    else {
      v63 = *(_QWORD*)(a1 + 56);
    }
    if (v60) {
      v64 = a1 + 49;
    }
    else {
      v64 = *(_QWORD*)(a1 + 64);
    }
    if ((*(_BYTE*)a3 & 1) != 0) {
      fw_text_String_CopyTerminated(&v77_.v77, a3[2], a3[1]);
    }
    else {
      v65 = a3[1];
      v77_.v77 = *a3;
      v77_.v78 = v65;
      v77_.v79 = a3[2];
    }
    v66 = a3[8];
    if (v66 != 0) {
      if ((__int64*)v66 == a3 + 4) {
        v80_.v81 = v80_.v80;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v66 + 24LL))(
            v66, (__int64)v80_.v80);
        v67 = v80_.v81;
      }
      else {
        v67 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
        v80_.v81 = v67;
      }
    }
    else {
      v67 = nullptr;
      v80_.v81 = nullptr;
    }
    v68 = fw_memory_g_heap_manager_ptr;
    v69 = (__int128*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)v69 =
        game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_ptr;
    *((_QWORD*)v69 + 2) = a1;
    *((_QWORD*)v69 + 3) = v15;
    v70 = v77_.v77;
    v71 = v77_.v78;
    v77_.v77 = 0;
    v77_.v78 = 0;
    *((_QWORD*)v69 + 4) = v70;
    *((_QWORD*)v69 + 5) = v71;
    v72 = v77_.v79;
    v77_.v79 = 0;
    *((_QWORD*)v69 + 6) = v72;
    if (v67 != nullptr) {
      if (v67 == v80_.v80) {
        v73 = v69;
        *((_QWORD*)v69 + 12) = v69 + 4;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v67 + 24LL))(
            (__int64)v67, (__int64)(v69 + 4));
        v69 = v73;
      }
      else {
        *((_QWORD*)v69 + 12) = v67;
        v80_.v81 = nullptr;
      }
    }
    else {
      *((_QWORD*)v69 + 12) = 0;
    }
    v82_.v85 = v69;
    GameRoutine_ad6d20(v62, v64, v63);
    if (v82_.v85 == &v82_.v82) {
      v74 = 32;
    LABEL_126:
      (*(void (**)(__int64))(*(_QWORD*)v82_.v85 + v74))((__int64)v82_.v85);
    }
    else if (v82_.v85 != nullptr) {
      v74 = 40;
      goto LABEL_126;
    }
    if (v80_.v81 == v80_.v80) {
      v75 = 32;
    LABEL_131:
      (*(void (**)(__int64))(*(_QWORD*)v80_.v81 + v75))((__int64)v80_.v81);
    }
    else if (v80_.v81 != nullptr) {
      v75 = 40;
      goto LABEL_131;
    }
    if ((v77_.v77 & 1) != 0 && v77_.v79 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*(_QWORD*)v68 + 200LL) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v68 + v76, v77_.v79);
    }
  }
}

__int64 game_facility_1400c40(__int64 a1, __int64* a2, char a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _QWORD* v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  struct {
    char gap0_[16];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    char gap40_[8];
    _BYTE v28[32];
    _BYTE* v29;
    char gap88_[8];
    _BYTE v30[32];
    _BYTE* v31;
    char gap136_[8];
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    char gap184_[8];
    _BYTE v37[32];
    _BYTE* v38;
  } f_;

  v5 = *a2;
  v4 = a2[1];
  f_.v34 = a1;
  f_.v35 = v5;
  f_.v36 = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(a4 + 32);
  if (v8 == 0) {
    f_.v38 = nullptr;
    v10 = *(_QWORD*)(a1 + 144);
    v9 = *(_QWORD*)(a1 + 152);
    if (v9 == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if (v8 != a4) {
    f_.v38 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    v10 = *(_QWORD*)(a1 + 144);
    v9 = *(_QWORD*)(a1 + 152);
    if (v9 == 0) {
      goto LABEL_9;
    }
  LABEL_8:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_9;
  }
  f_.v38 = f_.v37;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8, (__int64)f_.v37);
  v10 = *(_QWORD*)(a1 + 144);
  v9 = *(_QWORD*)(a1 + 152);
  if (v9 != 0) {
    goto LABEL_8;
  }
LABEL_9:
  v11 = a2[1];
  f_.v32 = *a2;
  f_.v33 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = f_.v34;
  v13 = f_.v35;
  v14 = f_.v36;
  f_.v25 = f_.v34;
  f_.v26 = f_.v35;
  f_.v27 = f_.v36;
  if (f_.v36 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v36 + 8), 1u,
                              memory_order_relaxed);
  }
  if (f_.v38 != nullptr) {
    if (f_.v38 == f_.v37) {
      f_.v29 = f_.v28;
      (*(void (**)(__int64, __int64))(*(_QWORD*)f_.v38 + 24LL))(
          (__int64)f_.v38, (__int64)f_.v28);
      v12 = f_.v25;
      v13 = f_.v26;
      v14 = f_.v27;
      v15 = f_.v29;
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)f_.v38 + 16LL))(
          (__int64)f_.v38);
      f_.v29 = v15;
    }
  }
  else {
    v15 = nullptr;
    f_.v29 = nullptr;
  }
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v17 = v16;
  v16[2] = v12;
  v16[3] = v13;
  v16[4] = v14;
  *v16 = game_facility_SceneCharacter_ChangeAppearance_lambda0_Destructor_ptr;
  if (v15 != nullptr) {
    if (v15 == f_.v28) {
      v16[10] = v16 + 6;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(
          (__int64)v15, (__int64)(v16 + 6));
    }
    else {
      v16[10] = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))((__int64)v15);
    }
  }
  else {
    v16[10] = 0;
  }
  f_.v31 = v17;
  SceneCharacterBuilder_1469220(v10, &f_.v32, a3 & 1, (__int64)f_.v30);
  if (f_.v31 == f_.v30) {
    v18 = 32;
  }
  else {
    if (f_.v31 == nullptr) {
      goto LABEL_30;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)f_.v31 + v18))((__int64)f_.v31);
LABEL_30:
  if (f_.v29 == f_.v28) {
    v19 = 32;
    goto LABEL_34;
  }
  if (f_.v29 != nullptr) {
    v19 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*(_QWORD*)f_.v29 + v19))((__int64)f_.v29);
  }
  v20 = f_.v33;
  if (f_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v33 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  result = (__int64)f_.v38;
  if (f_.v38 == f_.v37) {
    v22 = 32;
  }
  else {
    if (f_.v38 == nullptr) {
      goto LABEL_46;
    }
    v22 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)f_.v38 + v22))((__int64)f_.v38);
LABEL_46:
  v23 = f_.v36;
  if (f_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v36 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    return std___1___shared_weak_count___release_weak(v23);
  }
  return result;
}

__int64 game_facility_1868d40(_QWORD* a1)
{
  int v2;
  char** v3;
  _WORD* v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _WORD* v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned __int16* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  int v28;
  __int64* v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64* v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  __int16 v47;
  unsigned int v48;
  unsigned __int16* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64* v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  __int16 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  __int64 v77;
  int v78;
  unsigned int v79;
  char* v80;
  char* v81;
  unsigned __int64 v82;
  int v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64* v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  __int16 v98;
  char* v99;
  char* v100;
  __int64* v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64* v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64* v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64* v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  int v127;
  unsigned int v128;
  __int64* v129;
  struct {
    __int64 (**v130)();
    _QWORD* v131;
    char gap16_[16];
    __int64 (***v132)();
  } v130_;
  struct {
    __int64 v133;
    __int64* v134;
    char gap64_[16];
    unsigned __int64* v135;
  } v133_;

  *GameData_2132020 = 1;
  v2 = (*(__int64 (**)(__int64))(*a1 + 608LL))((__int64)a1);
  v3 = (char**)a1[15];
  v4 = (_WORD*)a1[13];
  v5 = a1[1];
  if (v4 != nullptr) {
    if (v5 == 0 ||
        (v6 = (_QWORD*)__dynamic_cast(v5, GameData_212e030[0],
                                      GameData_2131c68[0], -2)) == nullptr ||
        (int)((v6[2] - v6[1]) >> 3) < 1) {
      if (*((int*)a1 + 21) > 1) {
        v7 = 0;
        v8 = GameData_212c878[0];
        v9 = 0xFFBFFFFFFFA39FFFLL;
        while (1) {
          v13 = (_WORD*)a1[13];
          if (v13 == nullptr) {
            goto LABEL_15;
          }
          if (v13[414] != 0) {
            v14 = (v13[418] != 0) + 1;
          }
          else {
            v14 = v13[418] != 0;
          }
          if (v13[422] != 0) {
            ++v14;
          }
          v15 = v13[426] == 0;
          v16 = (unsigned __int16)v13[430];
          v17 = (unsigned __int16)v13[434];
          if (!v15) {
            ++v14;
          }
          if (v16 != 0) {
            ++v14;
          }
          v18 = v17 != 0 ? v14 + 1 : v14;
          if (v18 <= 5) {
            v19 = (unsigned __int16*)(*(__int64 (**)(__int64))(*a1 + 560LL))(
                (__int64)a1);
            v20 = *(_QWORD*)(*v8 + 64);
            v21 = *(_QWORD*)(v20 + 8LL * *v19);
            if ((((0x10000000000LL << *(_BYTE*)(v21 + 72)) |
                  (1LL << *(_BYTE*)(v21 + 73))) &
                 v9) != 0) {
              v22 = a1[13];
              if (v3[1] == *v3) {
                v133_.v133 = 0;
              }
              else {
                v23 = *(_QWORD*)*v3;
                v133_.v133 = 0;
                v24 = *(_QWORD*)(v23 + 48);
                if (v24 != 0) {
                  v25 = *(unsigned __int16*)(v24 + 16);
                  DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) = 1;
                  LOWORD(v133_.v133) = v25;
                  if (*(_BYTE*)(*(_QWORD*)(v20 + 8 * v25) + 73LL) == 17) {
                    nn_os_LockMutex((__int64)&game_g_random_mutex);
                    v26 = v8;
                    v27 = v9;
                    v28 = v2;
                    v29 = game_map_MapRandom_instance__ptr[0];
                    v30 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v31 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v32 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v29 + 1) = v30;
                    v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29) = v31;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29 + 4) =
                        v33;
                    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                    v34 = v33 - 1000 * ((v33 & 0x7FFFFFFFu) / 0x3E8);
                    v2 = v28;
                    v9 = v27;
                    v8 = v26;
                    DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) =
                        DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) &
                            0xFFFFC00F |
                        (16 * (((16 * v34 + 16) >> 4) & 0x3FF));
                  }
                }
              }
              if ((game_UnitItemList_Add((_WORD*)(v22 + 828), &v130_.v130,
                                         &v133_.v133, 0) &
                   1) != 0 &&
                  (_DWORD)v130_.v130 != -1) {
                game_120c6c0(v22, (unsigned int)v130_.v130, 1);
                v35 = a1[14];
                if (game_GameModeData_instance_ != 0) {
                  v36 = (*(int*)(game_GameModeData_instance_ + 72) - v2) &
                        ~((signed __int32)(*(int*)(game_GameModeData_instance_ +
                                                   72) -
                                           v2) >>
                          31);
                  if (v36 >= 9999999) {
                    v36 = 9999999;
                  }
                  *(_DWORD*)(game_GameModeData_instance_ + 72) = v36;
                }
                GameRoutine_8a1f40((__int64)v3);
                if (v35 != 0) {
                  v37 = *(unsigned __int8*)(*(_QWORD*)(v35 + 24) + 64LL);
                  if (v37 <= 9) {
                    if (((1 << v37) & 0x31E) != 0) {
                      v12 = (__int64*)&GameData_1aac18e;
                    }
                    else {
                      if (v37 != 6) {
                        goto LABEL_15;
                      }
                      v12 = (__int64*)&GameData_1aa0a79;
                    }
                    v133_.v134 = v12;
                    v133_.v133 = game_HashString((__int64)v12);
                    GameRoutine_9b11a0(&GameData_21f61c0,
                                       (unsigned __int64*)&v133_.v133, v2);
                  }
                }
              }
            }
          }
        LABEL_15:
          if (++v7 >= (signed __int32)*((_DWORD*)a1 + 21)) {
            goto LABEL_11;
          }
        }
      }
      if (v4[414] != 0) {
        v48 = (v4[418] != 0) + 1;
      }
      else {
        v48 = v4[418] != 0;
      }
      if (v4[422] != 0) {
        ++v48;
      }
      if (v4[426] != 0) {
        ++v48;
      }
      if (v4[430] != 0) {
        ++v48;
      }
      if (v4[434] != 0) {
        ++v48;
      }
      if (v48 >= 6) {
        GameData_226b328 = GameData_226b320;
      }
      else {
        v49 = (unsigned __int16*)(*(__int64 (**)(__int64))(*a1 + 560LL))(
            (__int64)a1);
        v4 = (_WORD*)a1[13];
        v50 = *(_QWORD*)(*GameData_212c878[0] + 64);
        v51 = *(_QWORD*)(v50 + 8LL * *v49);
        if ((((0x10000000000LL << *(_BYTE*)(v51 + 72)) |
              (1LL << *(_BYTE*)(v51 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          if (v3[1] == *v3) {
            v133_.v133 = 0;
          }
          else {
            v52 = *(_QWORD*)*v3;
            v133_.v133 = 0;
            v53 = *(_QWORD*)(v52 + 48);
            if (v53 != 0) {
              v54 = *(unsigned __int16*)(v53 + 16);
              DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) = 1;
              LOWORD(v133_.v133) = v54;
              if (*(_BYTE*)(*(_QWORD*)(v50 + 8 * v54) + 73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v55 = v2;
                v56 = game_map_MapRandom_instance__ptr[0];
                v57 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL));
                v58 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v59 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                      (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v56 + 1) = v57;
                v60 = (v59 >> 8) ^ (v58 >> 19) ^ v59 ^ v58;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v56) = v58;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v56 + 4) = v60;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                v61 = v60 - 1000 * ((v60 & 0x7FFFFFFFu) / 0x3E8);
                v2 = v55;
                DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) =
                    (16 * v61 + 16) & 0x3FF0 | 1;
              }
            }
          }
          if ((game_UnitItemList_Add(v4 + 414, &v130_.v130, &v133_.v133, 0) &
               1) == 0 ||
              (_DWORD)v130_.v130 == -1) {
            goto LABEL_11;
          }
          game_120c6c0((__int64)v4, (unsigned int)v130_.v130, 1);
          v126 = a1[14];
          if (game_GameModeData_instance_ != 0) {
            v127 =
                (*(int*)(game_GameModeData_instance_ + 72) - v2) &
                ~((signed __int32)(*(int*)(game_GameModeData_instance_ + 72) -
                                   v2) >>
                  31);
            if (v127 >= 9999999) {
              v127 = 9999999;
            }
            *(_DWORD*)(game_GameModeData_instance_ + 72) = v127;
          }
          GameRoutine_8a1f40((__int64)v3);
          if (v126 == 0) {
            goto LABEL_11;
          }
          v128 = *(unsigned __int8*)(*(_QWORD*)(v126 + 24) + 64LL);
          if (v128 > 9) {
            goto LABEL_11;
          }
          if (((1 << v128) & 0x31E) != 0) {
            v129 = (__int64*)&GameData_1aac18e;
          }
          else {
            if (v128 != 6) {
            LABEL_11:
              v10 =
                  (*(__int64 (**)(__int64))(a1[12] + 80LL))((__int64)(a1 + 12));
              if (v10 != 0) {
                v11 = v10;
                (*(void (**)(__int64))(*(_QWORD*)v10 + 1128LL))(v10);
                (*(void (**)(__int64))(*(_QWORD*)v11 + 1136LL))(v11);
                (*(void (**)(__int64))(*(_QWORD*)v11 + 1120LL))(v11);
              }
              return 2;
            }
            v129 = (__int64*)&GameData_1aa0a79;
          }
          v133_.v134 = v129;
          v133_.v133 = game_HashString((__int64)v129);
          GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v133_.v133,
                             v2);
          goto LABEL_11;
        }
        GameData_226b328 = GameData_226b320;
        if (v4 == nullptr) {
          goto LABEL_102;
        }
      }
      v133_.v133 = (__int64)GameData_1fa9248;
      v133_.v134 = &GameData_226b320;
      v133_.v135 = (unsigned __int64*)&v133_.v133;
      game_UnitItemList_EachItem(v4 + 414, (__int64)&v133_.v133);
      if (v133_.v135 == (unsigned __int64*)&v133_.v133) {
        v62 = 32;
      }
      else {
        if (v133_.v135 == nullptr) {
        LABEL_102:
          if (v3[1] == *v3) {
            v133_.v133 = 0;
          }
          else {
            v89 = *(_QWORD*)*v3;
            v133_.v133 = 0;
            v90 = *(_QWORD*)(v89 + 48);
            if (v90 != 0) {
              v91 = *(unsigned __int16*)(v90 + 16);
              DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) = 1;
              LOWORD(v133_.v133) = v91;
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v91) +
                            73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v92 = v2;
                v93 = game_map_MapRandom_instance__ptr[0];
                v94 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL));
                v95 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v96 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                      (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v93 + 1) = v94;
                v97 = (v96 >> 8) ^ (v95 >> 19) ^ v96 ^ v95;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v93) = v95;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v93 + 4) = v97;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                v98 = v97 - 1000 * ((v97 & 0x7FFFFFFFu) / 0x3E8);
                v2 = v92;
                DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) =
                    (16 * v98 + 16) & 0x3FF0 | 1;
              }
            }
          }
          game_8aef60((__int64)&GameData_226b320,
                      (unsigned __int16*)&v133_.v133);
          v100 = *v3;
          v99 = v3[1];
          v101 = (__int64*)fw_memory_g_heap_manager_ptr;
          v102 = v99 - *v3;
          if (v99 == *v3) {
            v104 = 0;
            v103 = 0;
          }
          else {
            if ((v102 & 0x8000000000000000LL) != 0) {
              goto LABEL_167;
            }
            v103 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v99 - *v3, 16, 0);
            v104 = v103 + v102;
            GameRoutine_1a0b950(v103, (__int64)v100, v102);
          }
          v105 = fw_memory_HeapManager_Allocate(*v101, 48, 16, 0);
          *(_DWORD*)(v105 + 16) = v2;
          v106 = v104 - v103;
          v107 = (unsigned __int64*)v105;
          *(_QWORD*)(v105 + 24) = 0;
          *(_QWORD*)(v105 + 32) = 0;
          *(_QWORD*)(v105 + 40) = 0;
          *(_QWORD*)v105 = GameData_20f37c8;
          *(_QWORD*)(v105 + 8) = a1;
          if (v104 == v103) {
            goto LABEL_114;
          }
          if ((v106 & 0x8000000000000000LL) == 0) {
            v108 = fw_memory_HeapManager_Allocate(*v101, v104 - v103, 16, 0);
            v109 = v108 + v106;
            v107[3] = v108;
            v107[5] = v108 + v106;
            GameRoutine_1a0b950(v108, v103, v104 - v103);
            v107[4] = v109;
          LABEL_114:
            v133_.v135 = v107;
            if (v103 != 0) {
              v110 = 128;
              if (*(_QWORD*)(*v101 + 200) == 0) {
                v110 = 56;
              }
              nn_mem_StandardAllocator_Free(*v101 + v110, v103);
            }
            v111 = a1[1];
            v112 = a1[13];
            v130_.v130 = GameData_20f3848;
            v130_.v131 = a1;
            v130_.v132 = &v130_.v130;
            game_menu_SendUnitItemMenu_CreateBind(
                v111, v112, (__int64)&GameData_226b320, 0, 1,
                (__int64)&v133_.v133, (__int64)&v130_.v130);
            if (v130_.v132 == &v130_.v130) {
              v113 = 4;
            }
            else {
              if (v130_.v132 == nullptr) {
                goto LABEL_123;
              }
              v113 = 5;
            }
            ((void (*)(__int64))(*v130_.v132)[v113])((__int64)v130_.v132);
          LABEL_123:
            if (v133_.v135 == (unsigned __int64*)&v133_.v133) {
              v114 = 32;
            }
            else {
              if (v133_.v135 == nullptr) {
                return 2;
              }
              v114 = 40;
            }
            (*(void (**)(__int64))(*v133_.v135 + v114))((__int64)v133_.v135);
            return 2;
          }
        LABEL_167:
          GameRoutine_8a54f0();
        }
        v62 = 40;
      }
      (*(void (**)(__int64))(*v133_.v135 + v62))((__int64)v133_.v135);
      goto LABEL_102;
    }
  LABEL_10:
    BuyController_186b3c0(v6);
    goto LABEL_11;
  }
  if (v5 != 0) {
    v6 = (_QWORD*)__dynamic_cast(v5, GameData_212e030[0], GameData_2131c68[0],
                                 -2);
    if (v6 != nullptr && (int)((v6[2] - v6[1]) >> 3) >= 1) {
      goto LABEL_10;
    }
  }
  if (v3[1] == *v3) {
    v133_.v133 = 0;
  }
  else {
    v38 = *(_QWORD*)*v3;
    v133_.v133 = 0;
    v39 = *(_QWORD*)(v38 + 48);
    if (v39 != 0) {
      v40 = *(unsigned __int16*)(v39 + 16);
      DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) = 1;
      LOWORD(v133_.v133) = v40;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v40) +
                    73LL) == 17) {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v41 = v2;
        v42 = game_map_MapRandom_instance__ptr[0];
        v43 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v44 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v45 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v42 + 1) = v43;
        v46 = (v45 >> 8) ^ (v44 >> 19) ^ v45 ^ v44;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v42) = v44;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v42 + 4) = v46;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v47 = v46 - 1000 * ((v46 & 0x7FFFFFFFu) / 0x3E8);
        v2 = v41;
        DWORDn(v133_.v133, sizeof(v133_.v133) / 4 - 1) =
            (16 * v47 + 16) & 0x3FF0 | 1;
      }
    }
  }
  if (TransporterConst_89ca00((unsigned __int16*)&v133_.v133)) {
    if (*((int*)a1 + 21) < 1) {
      goto LABEL_11;
    }
    v63 = 0;
    v64 = game_TransporterConst_List_instance__ptr[0];
    v65 = game_map_MapRandom_instance__ptr[0];
    while (1) {
      v67 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v67 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      if (v67 < v2) {
        goto LABEL_11;
      }
      if (v3[1] == *v3) {
        v130_.v130 = nullptr;
      }
      else {
        v68 = *(_QWORD*)*v3;
        v130_.v130 = nullptr;
        v69 = *(_QWORD*)(v68 + 48);
        if (v69 != 0) {
          v70 = *(unsigned __int16*)(v69 + 16);
          DWORDn(v130_.v130, sizeof(v130_.v130) / 4 - 1) = 1;
          LOWORD(v130_.v130) = v70;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v70) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v71 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v65);
            v72 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v65 + 4);
            v73 = v2;
            v74 = *(_DWORD*)v65 ^ (*(_DWORD*)v65 << 11);
            *(_DWORD*)v65 = *((_DWORD*)v65 + 1);
            *((_DWORD*)v65 + 1) = v71;
            v75 = (v74 >> 8) ^ (v72 >> 19) ^ v74 ^ v72;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v65) = v72;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v65 + 4) = v75;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v76 = v75 - 1000 * ((v75 & 0x7FFFFFFFu) / 0x3E8);
            v2 = v73;
            DWORDn(v130_.v130, sizeof(v130_.v130) / 4 - 1) =
                DWORDn(v130_.v130, sizeof(v130_.v130) / 4 - 1) & 0xFFFFC00F |
                (16 * (((16 * v76 + 16) >> 4) & 0x3FF));
          }
        }
      }
      game_UnitUtil_UniqueMap_Commit_89abc0((void*)((__int64)&v133_.v133),
                                            *(_QWORD*)(*(_QWORD*)v64 + 8LL),
                                            (unsigned __int16*)&v130_.v130, 1);
      if (v133_.v133 < 0) {
        goto LABEL_11;
      }
      v77 = a1[14];
      if (game_GameModeData_instance_ != 0) {
        v78 = (*(int*)(game_GameModeData_instance_ + 72) - v2) &
              ~((signed __int32)(*(int*)(game_GameModeData_instance_ + 72) -
                                 v2) >>
                31);
        if (v78 >= 9999999) {
          v78 = 9999999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 72) = v78;
      }
      GameRoutine_8a1f40((__int64)v3);
      if (v77 != 0) {
        v79 = *(unsigned __int8*)(*(_QWORD*)(v77 + 24) + 64LL);
        if (v79 <= 9) {
          if (((1 << v79) & 0x31E) != 0) {
            v66 = (__int64*)&GameData_1aac18e;
          }
          else {
            if (v79 != 6) {
              goto LABEL_78;
            }
            v66 = (__int64*)&GameData_1aa0a79;
          }
          v133_.v134 = v66;
          v133_.v133 = game_HashString((__int64)v66);
          GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v133_.v133,
                             v2);
        }
      }
    LABEL_78:
      if (++v63 >= (signed __int32)*((_DWORD*)a1 + 21)) {
        goto LABEL_11;
      }
    }
  }
  v81 = *v3;
  v80 = v3[1];
  v82 = v80 - *v3;
  if (v80 == *v3) {
    v86 = a1[1];
    v85 = 0;
    v87 = 0;
    v88 = 0;
  }
  else {
    if ((v82 & 0x8000000000000000LL) != 0) {
      goto LABEL_167;
    }
    v83 = v2;
    v84 = (__int64*)fw_memory_g_heap_manager_ptr;
    v85 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v80 - *v3, 16, 0);
    GameRoutine_1a0b950(v85, (__int64)v81, v82);
    v86 = a1[1];
    v87 = fw_memory_HeapManager_Allocate(*v84, v82, 16, 0);
    v88 = v87 + v82;
    GameRoutine_1a0b950(v87, (__int64)v81, v82);
    v2 = v83;
  }
  v116 = (__int64*)fw_memory_g_heap_manager_ptr;
  v117 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        48, 16, 0);
  *(_DWORD*)(v117 + 16) = v2;
  v118 = v88 - v87;
  v119 = (unsigned __int64*)v117;
  *(_QWORD*)(v117 + 24) = 0;
  *(_QWORD*)(v117 + 32) = 0;
  *(_QWORD*)(v117 + 40) = 0;
  *(_QWORD*)v117 = GameData_20f38c8;
  *(_QWORD*)(v117 + 8) = a1;
  if (v88 != v87) {
    if ((v118 & 0x8000000000000000LL) != 0) {
      goto LABEL_167;
    }
    v120 = fw_memory_HeapManager_Allocate(*v116, v88 - v87, 16, 0);
    v121 = v120 + v118;
    v119[3] = v120;
    v119[5] = v120 + v118;
    GameRoutine_1a0b950(v120, v87, v118);
    v119[4] = v121;
  }
  v133_.v135 = v119;
  v130_.v130 = GameData_20f3948;
  v130_.v131 = a1;
  v130_.v132 = &v130_.v130;
  game_menu_DeleteTransportMenu_CreateBind(v86, (__int64)&v133_.v133,
                                           (__int64)&v130_.v130, 1, 0);
  if (v130_.v132 == &v130_.v130) {
    v122 = 4;
  }
  else {
    if (v130_.v132 == nullptr) {
      goto LABEL_138;
    }
    v122 = 5;
  }
  ((void (*)(__int64))(*v130_.v132)[v122])((__int64)v130_.v132);
LABEL_138:
  if (v133_.v135 == (unsigned __int64*)&v133_.v133) {
    v123 = 32;
    goto LABEL_142;
  }
  if (v133_.v135 != nullptr) {
    v123 = 40;
  LABEL_142:
    (*(void (**)(__int64))(*v133_.v135 + v123))((__int64)v133_.v135);
  }
  if (v87 != 0) {
    v124 = 128;
    if (*(_QWORD*)(*v116 + 200) == 0) {
      v124 = 56;
    }
    nn_mem_StandardAllocator_Free(*v116 + v124, v87);
  }
  if (v85 != 0) {
    v125 = 128;
    if (*(_QWORD*)(*v116 + 200) == 0) {
      v125 = 56;
    }
    nn_mem_StandardAllocator_Free(*v116 + v125, v85);
  }
  return 2;
}

void game_facility_19526e0(__int64 a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  struct {
    _BYTE v68[32];
    _BYTE* v69;
  } v68_;

  if (*(_BYTE*)(a1 + 136) == 1) {
    v5 = *(_QWORD*)(a1 + 120);
    v4 = *(_QWORD*)(a1 + 128);
    if (v5 < v4) {
      *(float*)v5 = a3;
      v6 = *(_QWORD*)(a2 + 32);
      if (v6 != 0) {
        if (v6 == a2) {
          *(_QWORD*)(v5 + 48) = v5 + 16;
          (*(void (**)(__int64, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
              *(_QWORD*)(a2 + 32), v5 + 16);
        }
        else {
          *(_QWORD*)(v5 + 48) =
              (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        }
        *(_QWORD*)(a1 + 120) = v5 + 64;
      }
      else {
        *(_QWORD*)(v5 + 48) = 0;
        *(_QWORD*)(a1 + 120) = v5 + 64;
      }
      return;
    }
    v12 = *(_QWORD*)(a1 + 112);
    v13 = v5 - v12;
    v14 = ((__int64)(v5 - v12) >> 6) + 1;
    if (v14 >> 58 == 0) {
      v15 = v4 - v12;
      v16 = v15 >> 5;
      if (v15 >> 5 <= v14) {
        v16 = v14;
      }
      v17 = (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL;
      v18 = 0x3FFFFFFFFFFFFFFLL;
      if (!v17) {
        v18 = v16;
      }
      if (v18 >> 58 == 0) {
        v19 = v18 << 6;
        v22 = fw_memory_g_heap_manager_ptr;
        v23 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v18 << 6, 16, 0);
        v24 = v23 + v13;
        v25 = *(_QWORD*)(a2 + 32);
        *(float*)(v23 + v13) = a3;
        if (v25 != 0) {
          if (v25 == a2) {
            *(_QWORD*)(v24 + 48) = v23 + v13 + 16;
            (*(void (**)(__int64))(*(_QWORD*)v25 + 24LL))(v25);
          }
          else {
            *(_QWORD*)(v24 + 48) =
                (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          }
        }
        else {
          *(_QWORD*)(v24 + 48) = 0;
        }
        v28 = v23 + v19;
        v29 = *(_QWORD*)(a1 + 112);
        v30 = *(_QWORD*)(a1 + 120);
        v31 = v24 + 64;
        v32 = v24 + v29 - v30;
        if (v30 == v29) {
        LABEL_53:
          *(_QWORD*)(a1 + 112) = v32;
          *(_QWORD*)(a1 + 120) = v31;
          *(_QWORD*)(a1 + 128) = v28;
          if (v29 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v40, v29);
          }
          *(_QWORD*)(a1 + 120) = v31;
          return;
        }
        v33 = 0;
        do {
          v34 = v29 + v33;
          *(_DWORD*)(v32 + v33) = *(_DWORD*)(v29 + v33);
          v35 = *(_QWORD*)(v29 + v33 + 48);
          if (v35 != 0) {
            if (v34 + 16 == v35) {
              *(_QWORD*)(v32 + v33 + 48) = v32 + v33 + 16;
              (*(void (**)(__int64))(**(_QWORD**)(v34 + 48) + 24LL))(
                  *(_QWORD*)(v34 + 48));
            }
            else {
              *(_QWORD*)(v32 + v33 + 48) =
                  (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            }
          }
          else {
            *(_QWORD*)(v32 + v33 + 48) = 0;
          }
          v33 += 64;
        } while (v29 + v33 != v30);
        while (1) {
          v37 = *(_QWORD**)(v29 + 48);
          *(_QWORD*)(v29 + 48) = 0;
          if ((_QWORD*)(v29 + 16) == v37) {
            v38 = 32;
          }
          else {
            if (v37 == nullptr) {
              goto LABEL_44;
            }
            v38 = 40;
          }
          (*(void (**)(__int64))(*v37 + v38))((__int64)v37);
          v39 = *(_QWORD**)(v29 + 48);
          if ((_QWORD*)(v29 + 16) == v39) {
            v36 = 32;
          }
          else {
            if (v39 == nullptr) {
              goto LABEL_44;
            }
            v36 = 40;
          }
          (*(void (**)(__int64))(*v39 + v36))((__int64)v39);
        LABEL_44:
          v29 += 64;
          if (v29 == v30) {
            v29 = *(_QWORD*)(a1 + 112);
            goto LABEL_53;
          }
        }
      }
    LABEL_108:
      GameRoutine_60a210();
    }
  LABEL_107:
    GameRoutine_1953ab0();
  }
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 == 0) {
    goto LABEL_26;
  }
  if (v7 == a2) {
    v68_.v69 = v68_.v68;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7,
                                                          (__int64)v68_.v68);
    v8 = (__int64)v68_.v69;
    if (v68_.v69 != nullptr) {
      goto LABEL_10;
    }
  LABEL_26:
    v68_.v69 = nullptr;
    return;
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  v68_.v69 = (_BYTE*)v8;
  if (v8 == 0) {
    goto LABEL_26;
  }
LABEL_10:
  if (*(float*)(a1 + 48) >= a3) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 48LL))(v8);
    v26 = v68_.v69;
    v68_.v69 = nullptr;
    if (v26 == v68_.v68) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
        return;
      }
      v27 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v26 + v27))((__int64)v26);
    goto LABEL_97;
  }
  v10 = *(_QWORD*)(a1 + 120);
  v9 = *(_QWORD*)(a1 + 128);
  if (v10 < v9) {
    *(float*)v10 = a3;
    if (v68_.v69 != nullptr) {
      if (v68_.v69 == v68_.v68) {
        *(_QWORD*)(v10 + 48) = v10 + 16;
        (*(void (**)(__int64))(*(_QWORD*)v68_.v69 + 24LL))((__int64)v68_.v69);
      }
      else {
        *(_QWORD*)(v10 + 48) = (*(__int64 (**)(__int64))(
            *(_QWORD*)v68_.v69 + 16LL))((__int64)v68_.v69);
      }
      v11 = v10 + 64;
    }
    else {
      *(_QWORD*)(v10 + 48) = 0;
      v11 = v10 + 64;
    }
    goto LABEL_96;
  }
  v41 = *(_QWORD*)(a1 + 112);
  v42 = v10 - v41;
  v43 = ((__int64)(v10 - v41) >> 6) + 1;
  if (v43 >> 58 != 0) {
    goto LABEL_107;
  }
  v44 = v9 - v41;
  v45 = v44 >> 5;
  if (v44 >> 5 <= v43) {
    v45 = v43;
  }
  v17 = (unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFC0LL;
  v46 = 0x3FFFFFFFFFFFFFFLL;
  if (!v17) {
    v46 = v45;
  }
  if (v46 >> 58 != 0) {
    goto LABEL_108;
  }
  v47 = v46 << 6;
  v48 = fw_memory_g_heap_manager_ptr;
  v49 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v46 << 6, 16, 0);
  v50 = v49 + v42;
  v51 = v68_.v69;
  *(float*)(v49 + v42) = a3;
  if (v51 != nullptr) {
    if (v51 == v68_.v68) {
      *(_QWORD*)(v50 + 48) = v49 + v42 + 16;
      (*(void (**)(__int64))(*(_QWORD*)v51 + 24LL))((__int64)v51);
    }
    else {
      *(_QWORD*)(v50 + 48) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 16LL))((__int64)v51);
    }
  }
  else {
    *(_QWORD*)(v50 + 48) = 0;
  }
  v52 = v49 + v47;
  v53 = *(_QWORD*)(a1 + 112);
  v54 = *(_QWORD*)(a1 + 120);
  v11 = v50 + 64;
  v55 = v50 + v53 - v54;
  if (v54 == v53) {
    goto LABEL_92;
  }
  v56 = 0;
  do {
    v57 = v53 + v56;
    *(_DWORD*)(v55 + v56) = *(_DWORD*)(v53 + v56);
    v58 = *(_QWORD*)(v53 + v56 + 48);
    if (v58 != 0) {
      if (v57 + 16 == v58) {
        *(_QWORD*)(v55 + v56 + 48) = v55 + v56 + 16;
        (*(void (**)(__int64))(**(_QWORD**)(v57 + 48) + 24LL))(
            *(_QWORD*)(v57 + 48));
      }
      else {
        *(_QWORD*)(v55 + v56 + 48) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
      }
    }
    else {
      *(_QWORD*)(v55 + v56 + 48) = 0;
    }
    v56 += 64;
  } while (v53 + v56 != v54);
  do {
    v60 = *(_QWORD**)(v53 + 48);
    *(_QWORD*)(v53 + 48) = 0;
    if ((_QWORD*)(v53 + 16) == v60) {
      v61 = 32;
    }
    else {
      if (v60 == nullptr) {
        goto LABEL_83;
      }
      v61 = 40;
    }
    (*(void (**)(__int64))(*v60 + v61))((__int64)v60);
    v62 = *(_QWORD**)(v53 + 48);
    if ((_QWORD*)(v53 + 16) == v62) {
      v59 = 32;
    LABEL_82:
      (*(void (**)(__int64))(*v62 + v59))((__int64)v62);
      goto LABEL_83;
    }
    if (v62 != nullptr) {
      v59 = 40;
      goto LABEL_82;
    }
  LABEL_83:
    v53 += 64;
  } while (v53 != v54);
  v53 = *(_QWORD*)(a1 + 112);
LABEL_92:
  *(_QWORD*)(a1 + 112) = v55;
  *(_QWORD*)(a1 + 120) = v11;
  *(_QWORD*)(a1 + 128) = v52;
  if (v53 != 0) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)v48 + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v48 + v63, v53);
  }
LABEL_96:
  *(_QWORD*)(a1 + 120) = v11;
LABEL_97:
  v64 = v68_.v69;
  v68_.v69 = nullptr;
  if (v64 == v68_.v68) {
    v65 = 32;
  LABEL_101:
    (*(void (**)(__int64))(*(_QWORD*)v64 + v65))((__int64)v64);
    if (v68_.v69 == v68_.v68) {
      v66 = 32;
    }
    else {
      if (v68_.v69 == nullptr) {
        return;
      }
      v66 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v68_.v69 + v66))((__int64)v68_.v69);
  }
  else if (v64 != nullptr) {
    v65 = 40;
    goto LABEL_101;
  }
}

#pragma GCC visibility pop
