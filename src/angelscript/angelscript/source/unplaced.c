#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* asCScriptNode_DisconnectParent(_QWORD* result);
__int64 CastToObjectType(__int64 result);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 asCBuilder_AddDefaultConstructor(__int64, __int64, __int64);
__int64 asCBuilder_CompleteFuncDef(__int64, _QWORD*);
__int64 asCBuilder_DetermineTypeRelations(__int64 result);
__int64 asCBuilder_RegisterNonTypesFromScript(__int64 result, __int64, __int64,
                                              __int64);
__int64 asCBuilder_RegisterScriptFunctionFromNode(__int64, __int64, __int64,
                                                  __int64, char, char, __int64,
                                                  char, char);
__int64 asCBuilder_RegisterTypesFromScript(__int64 result, __int64, __int64,
                                           __int64);
__int64 asCBuilder_RegisterVirtualProperty(__int64, __int64, __int64, __int64,
                                           char, char, __int64, char);
__int64 asCContext_PopCallState(__int64);
__int64 asCDataType_GetSizeInMemoryDWords();
__int64 asCParser_Destroy_asCParser(__int64);
__int64 asCParser_GetScriptNode(_QWORD);
__int64 asCParser_ParseScript_202170(unsigned __int8*, __int64);
__int64 asCParser_asCParser(__int64, __int64);
__int64 asCScriptFunction_ReleaseInternal(_DWORD*);
__int64 asCThreadCriticalSection_Enter(__int64);
__int64 asCThreadCriticalSection_Leave(__int64);
bool asCScriptFunction_DoesReturnOnStack(__int64);
extern _UNKNOWN** GameData_212bff8;
extern _UNKNOWN** GameData_2134d10;
extern __int64 (*GameData_219a968)(void);
__int64 angelscript_angelscript_source_1b8c00(__int64 a1);
__int64 angelscript_angelscript_source_1bf860(__int64 a1);
__int64 angelscript_angelscript_source_1e0f40(__int64 a1);
__int64 asCBuilder_RegisterScriptFunctionFromNode_alt1(__int64, __int64,
                                                       __int64, __int64, char,
                                                       char, __int64, char);

__int64 angelscript_angelscript_source_1b8c00(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 88LL))(a1, 0) & 1) ==
      0) {
    return 0xFFFFFFFFLL;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  v2 = *(_DWORD*)(a1 + 60);
  v3 = *(_QWORD*)(a1 + 48);
  v4 = (unsigned int)(*(int*)(a1 + 56) - 9);
  v5 = v3 + 8LL * (unsigned int)v4;
  *(_QWORD*)(a1 + 40) = *(_QWORD*)(v5 + 8);
  if ((unsigned int)v4 <= v2) {
    goto LABEL_25;
  }
  if ((unsigned int)v4 > 2) {
    v10 = ((__int64 (*)(__int64))*GameData_212bff8)(8 * v4);
    if (v10 == 0) {
      if ((unsigned int)v4 > *(_DWORD*)(a1 + 60)) {
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    v6 = v10;
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != v6) {
      goto LABEL_5;
    }
  }
  else {
    v6 = a1 + 64;
    if (v3 != a1 + 64) {
    LABEL_5:
      v7 = v6;
      v8 = 8 * v4;
    LABEL_11:
      GameRoutine_1a0ba50(v7, 0, v8);
      v3 = *(_QWORD*)(a1 + 48);
      goto LABEL_12;
    }
  }
  v11 = *(unsigned int*)(a1 + 56);
  if ((unsigned int)v11 < (unsigned int)v4) {
    v7 = v6 + 8 * v11;
    v8 = 8LL * (unsigned int)(v4 + ~(_DWORD)v11) + 8;
    goto LABEL_11;
  }
LABEL_12:
  if (v3 != 0 && v3 != v6) {
    v12 = *(_DWORD*)(a1 + 56);
    if (v12 <= (unsigned int)v4) {
      if (v12 == 0) {
        goto LABEL_22;
      }
    }
    else {
      *(_DWORD*)(a1 + 56) = v4;
    }
    v13 = 0;
    do {
      *(_QWORD*)(v6 + 8 * v13) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v13);
      ++v13;
    } while (v13 < *(unsigned int*)(a1 + 56));
    v3 = *(_QWORD*)(a1 + 48);
  LABEL_22:
    if (v3 != a1 + 64) {
      ((void (*)(__int64))GameData_219a968)(v3);
    }
  }
  *(_QWORD*)(a1 + 48) = v6;
  *(_DWORD*)(a1 + 60) = v4;
LABEL_25:
  *(_DWORD*)(a1 + 56) = v4;
LABEL_26:
  v14 = *(_QWORD*)(v5 + 16);
  *(_QWORD*)(a1 + 184) = v14;
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(v5 + 24);
  *(_DWORD*)(a1 + 196) = *(_QWORD*)(v5 + 32);
  v15 = *(unsigned int*)(v5 + 40);
  *(_QWORD*)(a1 + 528) = v15;
  *(_QWORD*)(a1 + 528) = v15 | (*(_QWORD*)(v5 + 48) << 32);
  *(_QWORD*)(a1 + 536) = *(_QWORD*)(v5 + 56);
  *(_QWORD*)(a1 + 544) = *(_QWORD*)(v5 + 64);
  if (asCScriptFunction_DoesReturnOnStack(v14)) {
    v16 = asCDataType_GetSizeInMemoryDWords();
  }
  else {
    v16 = 0;
  }
  *(_DWORD*)(a1 + 192) = v16;
  asCContext_PopCallState(a1);
  *(_DWORD*)(a1 + 24) = 6;
  return 0;
}

__int64 angelscript_angelscript_source_1bf860(__int64 a1)
{
  int v2;
  void (**i)(__int64);
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  int j;
  __int64 v8;
  unsigned int v9;
  __int64 v10;

  asCThreadCriticalSection_Enter(a1);
  v2 = *(_DWORD*)(a1 + 40);
  for (i = (void (**)(__int64))GameData_2134d10; v2 != 0;
       v2 = *(_DWORD*)(a1 + 40)) {
    v4 = *(_QWORD*)(a1 + 32);
    v5 = v2 - 1;
    *(_DWORD*)(a1 + 40) = v5;
    (*i)(*(_QWORD*)(v4 + 8LL * v5));
  }
  v6 = *(_QWORD*)(a1 + 32);
  if (v6 != 0) {
    *(_DWORD*)(a1 + 40) = 0;
    if (v6 != a1 + 48) {
      (*i)(v6);
    }
  }
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 44) = 0;
  for (j = *(_DWORD*)(a1 + 72); j != 0; j = *(_DWORD*)(a1 + 72)) {
    v8 = *(_QWORD*)(a1 + 64);
    v9 = j - 1;
    *(_DWORD*)(a1 + 72) = v9;
    (*i)(*(_QWORD*)(v8 + 8LL * v9));
  }
  v10 = *(_QWORD*)(a1 + 64);
  if (v10 != 0) {
    *(_DWORD*)(a1 + 72) = 0;
    if (v10 != a1 + 80) {
      (*i)(v10);
    }
  }
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 76) = 0;
  return asCThreadCriticalSection_Leave(a1);
}

__int64 angelscript_angelscript_source_1e0f40(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 (**v7)(__int64);
  void (**v8)(__int64);
  unsigned __int64 v9;
  unsigned __int8* v10;
  int v11;
  unsigned int v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 i;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _DWORD* v48;
  __int64 v49;
  int v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _DWORD* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  void (**v57)(__int64);
  __int64 v58;
  __int64 result;
  _QWORD* v60;
  __int64 v61;
  _QWORD v62[2];

  v1 = *(unsigned int*)(a1 + 40);
  v60 = nullptr;
  v61 = 0;
  if ((_DWORD)v1 == 0) {
    v3 = nullptr;
    goto LABEL_7;
  }
  if ((unsigned int)v1 <= 2) {
    v3 = v62;
    GameRoutine_1a0ba50((__int64)v62, 0, 8 * v1);
  LABEL_7:
    v60 = v3;
    DWORDn(v61, sizeof(v61) / 4 - 1) = v1;
    goto LABEL_8;
  }
  v4 = ((__int64 (*)(__int64))*GameData_212bff8)(8 * v1);
  if (v4 != 0) {
    v3 = (_QWORD*)v4;
    GameRoutine_1a0ba50(v4, 0, 8 * v1);
    goto LABEL_7;
  }
LABEL_8:
  v5 = *(_DWORD*)(a1 + 40);
  *(_DWORD*)(a1 + 504) = 0;
  if (v5 == 0) {
    if (*(_DWORD*)a1 == 0) {
      goto LABEL_51;
    }
    goto LABEL_100;
  }
  v6 = 0;
  v7 = (__int64 (**)(__int64))GameData_212bff8;
  v8 = (void (**)(__int64))GameData_2134d10;
  do {
    v10 = (unsigned __int8*)(*v7)(96);
    asCParser_asCParser((__int64)v10, a1);
    v11 = v61;
    if ((_DWORD)v61 != DWORDn(v61, sizeof(v61) / 4 - 1)) {
      goto LABEL_10;
    }
    if ((_DWORD)v61 == 0) {
      v62[0] = 0;
      if (v60 != nullptr) {
        LODWORD(v61) = 0;
        if (v60 != v62) {
          (*v8)((__int64)v60);
        }
      }
      v60 = v62;
      DWORDn(v61, sizeof(v61) / 4 - 1) = 1;
      v11 = v61;
    LABEL_10:
      LODWORD(v61) = v11 + 1;
      v60[v11] = v10;
      goto LABEL_11;
    }
    v12 = 2 * v61;
    if (2 * (int)v61 == 0) {
      v13 = nullptr;
      goto LABEL_27;
    }
    v13 = v62;
    if (v12 >= 3) {
      v13 = (_QWORD*)(*v7)(8LL * (unsigned int)(2 * v61));
      if (v13 == nullptr) {
        v11 = v61;
        if ((_DWORD)v61 != DWORDn(v61, sizeof(v61) / 4 - 1)) {
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    v14 = v60;
    if (v60 != v13) {
      v15 = 8LL * (unsigned int)(2 * v61);
      v16 = (__int64)v13;
      goto LABEL_26;
    }
    if ((unsigned int)v61 < v12) {
      v16 = (__int64)&v13[(unsigned int)v61];
      v15 = 8LL * (v12 + ~(_DWORD)v61) + 8;
    LABEL_26:
      GameRoutine_1a0ba50(v16, 0, v15);
    LABEL_27:
      v14 = v60;
    }
    if (v14 != nullptr) {
      v17 = v61;
      if (v14 == v13) {
        if ((unsigned int)v61 > v12) {
          LODWORD(v61) = 2 * v61;
        }
      }
      else {
        if ((unsigned int)v61 > v12) {
          LODWORD(v61) = 2 * v61;
          v17 = v12;
        }
        if (v17 != 0) {
          v18 = 0;
          do {
            v13[v18] = v60[v18];
            ++v18;
          } while (v18 < (unsigned int)v61);
          v14 = v60;
        }
        if (v14 != v62) {
          (*v8)((__int64)v14);
          v60 = v13;
          DWORDn(v61, sizeof(v61) / 4 - 1) = v12;
          v11 = v61;
          if ((_DWORD)v61 != v12) {
            goto LABEL_10;
          }
          goto LABEL_11;
        }
      }
    }
    v60 = v13;
    DWORDn(v61, sizeof(v61) / 4 - 1) = v12;
    v11 = v61;
    if ((_DWORD)v61 != v12) {
      goto LABEL_10;
    }
  LABEL_11:
    asCParser_ParseScript_202170(v10, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v6));
    v9 = *(unsigned int*)(a1 + 40);
    ++v6;
  } while (v6 < v9);
  if (*(_DWORD*)a1 == 0) {
    if ((_DWORD)v9 != 0) {
      v19 = 0;
      do {
        v20 = asCParser_GetScriptNode(v60[v19]);
        asCBuilder_RegisterTypesFromScript(
            a1, v20, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19++),
            **(_QWORD**)(*(_QWORD*)(a1 + 16) + 13408LL));
      } while (v19 < *(unsigned int*)(a1 + 40));
    }
  LABEL_51:
    asCBuilder_DetermineTypeRelations(a1);
    if (*(_DWORD*)(a1 + 352) != 0) {
      v21 = 0;
      do {
        asCBuilder_CompleteFuncDef(
            a1, *(_QWORD**)(*(_QWORD*)(a1 + 344) + 8 * v21++));
      } while (v21 < *(unsigned int*)(a1 + 352));
    }
    if (*(_DWORD*)(a1 + 40) != 0) {
      v22 = 0;
      do {
        v23 = asCParser_GetScriptNode(v60[v22]);
        asCBuilder_RegisterNonTypesFromScript(
            a1, v23, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v22++),
            **(_QWORD**)(*(_QWORD*)(a1 + 16) + 13408LL));
      } while (v22 < *(unsigned int*)(a1 + 40));
    }
    v24 = *(unsigned int*)(a1 + 288);
    if ((_DWORD)v24 != 0) {
      for (i = 0; i < v24; ++i) {
        v26 = *(_QWORD*)(*(_QWORD*)(a1 + 280) + 8 * i);
        v27 = *(_QWORD**)(*(_QWORD*)(v26 + 8) + 48LL);
        while (1) {
          v27 = (_QWORD*)v27[4];
          if (v27 == nullptr) {
            break;
          }
          if (*(_DWORD*)v27 != 5) {
            do {
              v30 = v27;
              v27 = (_QWORD*)v27[4];
              if (*(_DWORD*)v30 == 39) {
                asCScriptNode_DisconnectParent(v30);
                v28 = *(_QWORD*)v26;
                v29 = CastToObjectType(*(_QWORD*)(v26 + 48));
                asCBuilder_RegisterVirtualProperty(
                    a1, (__int64)v30, v28, v29, 1, 0, 0, *(_BYTE*)(v26 + 56));
              }
              else if (*(_DWORD*)v30 == 2) {
                asCScriptNode_DisconnectParent(v30);
                v31 = *(_QWORD*)v26;
                v32 = CastToObjectType(*(_QWORD*)(v26 + 48));
                asCBuilder_RegisterScriptFunctionFromNode_alt1(
                    a1, (__int64)v30, v31, v32, 1, 0, 0, *(_BYTE*)(v26 + 56));
              }
            } while (v27 != nullptr);
            v24 = *(unsigned int*)(a1 + 288);
            break;
          }
        }
      }
    }
    if (*(_DWORD*)(a1 + 256) != 0) {
      v33 = 0;
      do {
        v34 = *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8 * v33);
        v35 = *(_QWORD**)(*(_QWORD*)(v34 + 8) + 48LL);
        while (1) {
          v35 = (_QWORD*)v35[4];
          if (v35 == nullptr) {
            break;
          }
          if (*(_DWORD*)v35 != 5) {
            do {
              v38 = v35;
              v35 = (_QWORD*)v35[4];
              if (*(_DWORD*)v38 == 39) {
                asCScriptNode_DisconnectParent(v38);
                v36 = *(_QWORD*)v34;
                v37 = CastToObjectType(*(_QWORD*)(v34 + 48));
                asCBuilder_RegisterVirtualProperty(
                    a1, (__int64)v38, v36, v37, 0, 0, 0, *(_BYTE*)(v34 + 56));
              }
              else if (*(_DWORD*)v38 == 2) {
                asCScriptNode_DisconnectParent(v38);
                v39 = *(_QWORD*)v34;
                v40 = CastToObjectType(*(_QWORD*)(v34 + 48));
                asCBuilder_RegisterScriptFunctionFromNode_alt1(
                    a1, (__int64)v38, v39, v40, 0, 0, 0, *(_BYTE*)(v34 + 56));
              }
            } while (v35 != nullptr);
            break;
          }
        }
        v41 = CastToObjectType(*(_QWORD*)(v34 + 48));
        v42 = *(_QWORD*)(a1 + 16);
        v43 = *(unsigned int*)(v41 + 340);
        if ((_DWORD)v43 == *(_DWORD*)(v42 + 460)) {
          v44 = v41;
          if (*(_DWORD*)(v41 + 432) == 1 || *(_BYTE*)(v42 + 13911) == 1) {
            asCBuilder_AddDefaultConstructor(a1, v41, *(_QWORD*)v34);
          }
          else {
            if ((_DWORD)v43 != 0) {
              asCScriptFunction_ReleaseInternal(
                  *(_DWORD**)(*(_QWORD*)(v42 + 1928) + 8 * v43));
              v45 = *(_DWORD*)(v44 + 432);
              *(_DWORD*)(v44 + 340) = 0;
              if (v45 != 0) {
                LODWORD(v46) = 0;
                if (v45 != 1) {
                  v47 = 0;
                  do {
                    v48 = (_DWORD*)(*(_QWORD*)(v44 + 424) + 4 * v47++);
                    *(_DWORD*)v48 = v48[1];
                    v46 = (unsigned int)(*(int*)(v44 + 432) - 1);
                  } while (v47 < v46);
                }
                *(_DWORD*)(v44 + 432) = v46;
              }
            }
            v49 = *(unsigned int*)(v44 + 328);
            if ((_DWORD)v49 != 0) {
              asCScriptFunction_ReleaseInternal(
                  *(_DWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1928LL) +
                              8 * v49));
              v50 = *(_DWORD*)(v44 + 400);
              *(_DWORD*)(v44 + 328) = 0;
              if (v50 != 0) {
                LODWORD(v51) = 0;
                if (v50 != 1) {
                  v52 = 0;
                  do {
                    v53 = (_DWORD*)(*(_QWORD*)(v44 + 392) + 4 * v52++);
                    *(_DWORD*)v53 = v53[1];
                    v51 = (unsigned int)(*(int*)(v44 + 400) - 1);
                  } while (v52 < v51);
                }
                *(_DWORD*)(v44 + 400) = v51;
              }
            }
            v54 = *(_QWORD*)(a1 + 16);
            v55 = *(unsigned int*)(v44 + 352);
            if ((_DWORD)v55 == *(_DWORD*)(v54 + 472)) {
              asCScriptFunction_ReleaseInternal(
                  *(_DWORD**)(*(_QWORD*)(v54 + 1928) + 8 * v55));
              *(_DWORD*)(v44 + 352) = 0;
            }
          }
        }
        ++v33;
      } while (v33 < *(unsigned int*)(a1 + 256));
    }
  }
LABEL_100:
  if ((_DWORD)v61 != 0) {
    v56 = 0;
    v57 = (void (**)(__int64))GameData_2134d10;
    do {
      v58 = v60[v56];
      asCParser_Destroy_asCParser(v58);
      (*v57)(v58);
      ++v56;
    } while (v56 < (unsigned int)v61);
  }
  result = (__int64)v60;
  if (v60 != nullptr && v60 != v62) {
    return ((__int64 (*)(__int64))*GameData_2134d10)((__int64)v60);
  }
  return result;
}

#pragma GCC visibility pop
