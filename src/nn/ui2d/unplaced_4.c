#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_util_ConvertCharacterUtf8ToUtf32(_QWORD, _QWORD);
__int64 nn_util_PickOutCharacterFromUtf8String(_QWORD, _QWORD);
double exp2(double);
double sin(double);
float cosf(float);
float sinf(float);
int strcmp(const char*, const char*);
void nn_detail_UnexpectedDefaultImpl();
void nn_ui2d_58b740(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4);
float nn_ui2d_59dbe0(__int64 a1, float* a2, __int64 a3);
float nn_ui2d_59f2e0(_WORD* a1, float a2, float a3);
__int64 nn_util_ConvertCharacterUtf8ToUtf32_alt1(__int64, const char*);
__int64 nn_util_PickOutCharacterFromUtf8String_alt1(__int64, __int64);

void nn_ui2d_58b740(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{

#pragma clang fp contract(off)
  __int64 v6;
  int v7;
  const char* v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  const char* v12;
  const char* v13;
  const char* v14;
  const char* v15;
  const char* v16;

  if (a3 != 0 && a4 != 0) {
    v6 = 0;
    v7 = 12 * a4;
    do {
      v8 = (const char*)(a3 + v6);
      v9 = *(unsigned int*)(a3 + v6);
      if (strcmp("__CUS_Vec2_0", (const char*)(a3 + v6 + v9)) != 0) {
        if (strcmp("__CUS_Vec2_1", &v8[v9]) != 0) {
          goto LABEL_7;
        }
      }
      else {
        *(_DWORD*)(a2 + 304) = *(_DWORD*)&v8[*((unsigned int*)v8 + 1)];
        *(_DWORD*)(a2 + 308) = *(_DWORD*)&v8[*((unsigned int*)v8 + 1) + 4LL];
        v9 = *(unsigned int*)v8;
        if (strcmp("__CUS_Vec2_1", &v8[v9]) != 0) {
        LABEL_7:
          v10 = (const char*)(a3 + v6);
          if (strcmp("__CUS_Vec2_2", (const char*)(a3 + v6 + v9)) != 0) {
            goto LABEL_8;
          }
          goto LABEL_24;
        }
      }
      *(_DWORD*)(a2 + 320) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1));
      *(_DWORD*)(a2 + 324) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4);
      v9 = *(unsigned int*)(a3 + v6);
      v10 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Vec2_2", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_8:
        if (strcmp("__CUS_Vec2_3", &v10[v9]) != 0) {
          goto LABEL_9;
        }
        goto LABEL_25;
      }
    LABEL_24:
      *(_DWORD*)(a2 + 336) = *(_DWORD*)&v10[*((unsigned int*)v8 + 1)];
      *(_DWORD*)(a2 + 340) = *(_DWORD*)&v10[*((unsigned int*)v8 + 1) + 4LL];
      v9 = *(unsigned int*)v10;
      if (strcmp("__CUS_Vec2_3", &v10[v9]) != 0) {
      LABEL_9:
        v11 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Vec3_0", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_10;
        }
        goto LABEL_26;
      }
    LABEL_25:
      *(_DWORD*)(a2 + 352) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1));
      *(_DWORD*)(a2 + 356) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4);
      v9 = *(unsigned int*)(a3 + v6);
      v11 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Vec3_0", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_10:
        if (strcmp("__CUS_Vec3_1", &v11[v9]) != 0) {
          goto LABEL_11;
        }
        goto LABEL_27;
      }
    LABEL_26:
      *(_DWORD*)(a2 + 368) = *(_DWORD*)&v11[*((unsigned int*)v8 + 1)];
      *(_DWORD*)(a2 + 372) = *(_DWORD*)&v11[*((unsigned int*)v8 + 1) + 4LL];
      *(_DWORD*)(a2 + 376) = *(_DWORD*)&v11[*((unsigned int*)v8 + 1) + 8LL];
      v9 = *(unsigned int*)v11;
      if (strcmp("__CUS_Vec3_1", &v11[v9]) != 0) {
      LABEL_11:
        v12 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Vec3_2", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_12;
        }
        goto LABEL_28;
      }
    LABEL_27:
      *(_DWORD*)(a2 + 384) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1));
      *(_DWORD*)(a2 + 388) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4);
      *(_DWORD*)(a2 + 392) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 8);
      v9 = *(unsigned int*)(a3 + v6);
      v12 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Vec3_2", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_12:
        if (strcmp("__CUS_Vec3_3", &v12[v9]) != 0) {
          goto LABEL_13;
        }
        goto LABEL_29;
      }
    LABEL_28:
      *(_DWORD*)(a2 + 400) = *(_DWORD*)&v12[*((unsigned int*)v8 + 1)];
      *(_DWORD*)(a2 + 404) = *(_DWORD*)&v12[*((unsigned int*)v8 + 1) + 4LL];
      *(_DWORD*)(a2 + 408) = *(_DWORD*)&v12[*((unsigned int*)v8 + 1) + 8LL];
      v9 = *(unsigned int*)v12;
      if (strcmp("__CUS_Vec3_3", &v12[v9]) != 0) {
      LABEL_13:
        v13 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Rgba_0", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_14;
        }
        goto LABEL_30;
      }
    LABEL_29:
      *(_DWORD*)(a2 + 416) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1));
      *(_DWORD*)(a2 + 420) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4);
      *(_DWORD*)(a2 + 424) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1) + 8);
      v9 = *(unsigned int*)(a3 + v6);
      v13 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Rgba_0", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_14:
        if (strcmp("__CUS_Rgba_1", &v13[v9]) != 0) {
          goto LABEL_15;
        }
        goto LABEL_31;
      }
    LABEL_30:
      *(float*)(a2 + 432) =
          (float)*(int*)&v13[*((unsigned int*)v8 + 1)] / 0x1.fe00000000000p+7f;
      *(float*)(a2 + 436) = (float)*(int*)&v13[*((unsigned int*)v8 + 1) + 4LL] /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 440) = (float)*(int*)&v13[*((unsigned int*)v8 + 1) + 8LL] /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 444) =
          (float)*(int*)&v13[*((unsigned int*)v8 + 1) + 12LL] /
          0x1.fe00000000000p+7f;
      v9 = *(unsigned int*)v13;
      if (strcmp("__CUS_Rgba_1", &v13[v9]) != 0) {
      LABEL_15:
        v14 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Rgba_2", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_16;
        }
        goto LABEL_32;
      }
    LABEL_31:
      *(float*)(a2 + 448) = (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1)) /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 452) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4) /
          0x1.fe00000000000p+7f;
      *(float*)(a2 + 456) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 8) /
          0x1.fe00000000000p+7f;
      *(float*)(a2 + 460) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 12) /
          0x1.fe00000000000p+7f;
      v9 = *(unsigned int*)(a3 + v6);
      v14 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Rgba_2", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_16:
        if (strcmp("__CUS_Rgba_3", &v14[v9]) != 0) {
          goto LABEL_17;
        }
        goto LABEL_33;
      }
    LABEL_32:
      *(float*)(a2 + 464) =
          (float)*(int*)&v14[*((unsigned int*)v8 + 1)] / 0x1.fe00000000000p+7f;
      *(float*)(a2 + 468) = (float)*(int*)&v14[*((unsigned int*)v8 + 1) + 4LL] /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 472) = (float)*(int*)&v14[*((unsigned int*)v8 + 1) + 8LL] /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 476) =
          (float)*(int*)&v14[*((unsigned int*)v8 + 1) + 12LL] /
          0x1.fe00000000000p+7f;
      v9 = *(unsigned int*)v14;
      if (strcmp("__CUS_Rgba_3", &v14[v9]) != 0) {
      LABEL_17:
        v15 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Float_0", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_18;
        }
        goto LABEL_34;
      }
    LABEL_33:
      *(float*)(a2 + 480) = (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1)) /
                            0x1.fe00000000000p+7f;
      *(float*)(a2 + 484) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 4) /
          0x1.fe00000000000p+7f;
      *(float*)(a2 + 488) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 8) /
          0x1.fe00000000000p+7f;
      *(float*)(a2 + 492) =
          (float)*(int*)(a3 + v6 + *((unsigned int*)v8 + 1) + 12) /
          0x1.fe00000000000p+7f;
      v9 = *(unsigned int*)(a3 + v6);
      v15 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Float_0", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_18:
        if (strcmp("__CUS_Float_1", &v15[v9]) != 0) {
          goto LABEL_19;
        }
        goto LABEL_35;
      }
    LABEL_34:
      *(_DWORD*)(a2 + 288) = *(_DWORD*)&v15[*((unsigned int*)v8 + 1)];
      v9 = *(unsigned int*)v15;
      if (strcmp("__CUS_Float_1", &v15[v9]) != 0) {
      LABEL_19:
        v16 = (const char*)(a3 + v6);
        if (strcmp("__CUS_Float_2", (const char*)(a3 + v6 + v9)) != 0) {
          goto LABEL_20;
        }
        goto LABEL_36;
      }
    LABEL_35:
      *(_DWORD*)(a2 + 292) = *(_DWORD*)(a3 + v6 + *((unsigned int*)v8 + 1));
      v9 = *(unsigned int*)(a3 + v6);
      v16 = (const char*)(a3 + v6);
      if (strcmp("__CUS_Float_2", (const char*)(a3 + v6 + v9)) != 0) {
      LABEL_20:
        if (strcmp("__CUS_Float_3", &v16[v9]) == 0) {
          goto LABEL_37;
        }
        goto LABEL_4;
      }
    LABEL_36:
      *(_DWORD*)(a2 + 296) = *(_DWORD*)&v16[*((unsigned int*)v8 + 1)];
      if (strcmp("__CUS_Float_3", &v16[*(unsigned int*)v16]) == 0) {
      LABEL_37:
        *(_DWORD*)(a2 + 300) = *(_DWORD*)(a3 + *((unsigned int*)v8 + 1) + v6);
      }
    LABEL_4:
      v6 += 12;
    } while (v7 != (_DWORD)v6);
  }
}

float nn_ui2d_59dbe0(__int64 a1, float* a2, __int64 a3)
{
#pragma clang fp contract(fast)
  int count;
  unsigned __int16 flags;
  __int64 font;
  float width;
  float scale;
  unsigned __int64 at;
  unsigned __int64 next;
  int i;
  float total;
  struct {
    _BYTE end;
    unsigned __int64 cursor;
    unsigned int code;
    unsigned int utf8;
  } f_;

  count = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 156LL);
  *a2 = 0x0.0p+0f;
  flags = *(unsigned __int16*)(a1 + 276);
  if ((~flags & 0x9000) == 0) {
    font = *(_QWORD*)(a1 + 240);
    width = *(float*)(a1 + 248);
    at = *(_QWORD*)(a1 + 216);
    scale = width / (float)(int)(*(__int64 (**)(__int64))(
        *(_QWORD*)font + 32LL))(font);
    for (i = 0; i != count; ++i) {
      f_.end = 0;
      while (1) {
        next = (*(unsigned __int64 (**)(__int64, _BYTE*, unsigned __int64))(
            *(_QWORD*)a3 + 112LL))(a3, &f_.end, at);
        if ((f_.end & 1) != 0) {
          break;
        }
        if (!(next > at) ||
            next > *(_QWORD*)(a1 + 216) +
                       (unsigned __int64)*(unsigned __int16*)(a1 + 274)) {
          goto LABEL_WIDTH;
        }
        at = next;
      }
      f_.cursor = at;
      f_.utf8 = 0;
      nn_util_PickOutCharacterFromUtf8String_alt1((__int64)&f_.utf8,
                                                  (__int64)&f_.cursor);
      f_.code = 0;
      nn_util_ConvertCharacterUtf8ToUtf32_alt1((__int64)&f_.code,
                                               (const char*)&f_.utf8);
      if (next == 0) {
        break;
      }
      at = next;
      font = *(_QWORD*)(a1 + 240);
      *a2 = (*(float*)(a1 + 260) +
             (float)(int)(*(__int64 (**)(__int64, unsigned int))(
                 *(_QWORD*)font + 128LL))(font, f_.code)) *
                scale +
            *a2;
    }
  LABEL_WIDTH:
    total = *(float*)(a1 + 80);
    if (total == 0x0.0p+0f) {
      return 0x0.0p+0f;
    }
    return *(float*)(*(_QWORD*)(a1 + 336) + 4LL) / total;
  }
  if ((~flags & 0x3000) == 0) {
    return *(float*)(*(_QWORD*)(a1 + 336) + 24LL);
  }
  if ((flags & 0x200) == 0) {
    if (count == 1) {
      return 0x0.0p+0f;
    }
    return *(float*)(*(_QWORD*)(a1 + 336) + 4LL) /
           (float)(unsigned int)(count - 1);
  }
  if (count != 0) {
    at = *(_QWORD*)(a1 + 216);
    for (i = 0; i != count; ++i) {
      f_.end = 0;
      while (1) {
        next = (*(unsigned __int64 (**)(__int64, _BYTE*, unsigned __int64))(
            *(_QWORD*)a3 + 112LL))(a3, &f_.end, at);
        if ((f_.end & 1) != 0) {
          break;
        }
        if (!(next > at) ||
            next > *(_QWORD*)(a1 + 216) +
                       (unsigned __int64)*(unsigned __int16*)(a1 + 274)) {
          goto LABEL_TOTAL;
        }
        at = next;
      }
      f_.cursor = at;
      f_.utf8 = 0;
      nn_util_PickOutCharacterFromUtf8String_alt1((__int64)&f_.utf8,
                                                  (__int64)&f_.cursor);
      f_.code = 0;
      nn_util_ConvertCharacterUtf8ToUtf32_alt1((__int64)&f_.code,
                                               (const char*)&f_.utf8);
      if (next == 0) {
        break;
      }
      at = next;
      if ((*(_WORD*)(a1 + 276) & 0x1000 | i) != 0) {
        font = *(_QWORD*)(a1 + 240);
        *a2 = *a2 +
              (*(float*)(a1 + 260) +
               (float)(int)(*(__int64 (**)(__int64, unsigned int))(
                   *(_QWORD*)font + 128LL))(font, f_.code));
      }
    }
  }
LABEL_TOTAL:
  total = *a2;
  if (total == 0x0.0p+0f) {
    return 0x0.0p+0f;
  }
  return *(float*)(*(_QWORD*)(a1 + 336) + 4LL) / total;
}

float nn_ui2d_59f2e0(_WORD* a1, float a2, float a3)
{
  unsigned int* v3;
  __int64 v4;
  unsigned int v5;
  float* v6;
  float v7;
  float v8;
  float result;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  double v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  double v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  double v54;
  float v55;
  float v56;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = (unsigned int*)(a1 + 2);
  v4 = (unsigned __int16)*a1;
  if (*a1 == 0) {
    return a3;
  }
  while (1) {
    v5 = *v3++;
    v6 = (float*)((char*)a1 + v5);
    v7 = v6[4];
    v8 = v6[5];
    if (a2 >= v7 && (float)(v7 + v8) >= a2) {
      break;
    }
    if (--v4 == 0) {
      return a3;
    }
  }
  v11 = a2 - v7;
  v12 = v6[2];
  v13 = v11 / v8;
  v14 = fmaxf(v11, 0x0.0p+0f);
  if (v8 < v14) {
    v14 = v6[5];
  }
  v15 = fmaxf(v13, 0x0.0p+0f);
  v16 = 0x1.0000000000000p+0f;
  if (v15 <= 0x1.0000000000000p+0f) {
    v16 = v15;
  }
  v17 = v6[3] - v12;
  v18 = 0x0.0p+0f;
  switch (*(_BYTE*)v6) {
  case 0:
    return v12 + (float)(v17 * v16);
  case 1:
    v29 = v12 - (float)(v17 * cosf(v16 * 0x1.921fb60000000p+0f)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    return v17 + v29;
  case 2:
    v40 = v6[2];
    v41 = sinf(v16 * 0x1.921fb60000000p+0f),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    return v40 + (float)(v17 * v41);
  case 3:
    v43 = v6[2];
    v44 = cosf(v16 * 0x1.921fb60000000p+1f) + -0x1.0000000000000p+0f,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    return v43 + (float)((float)(v17 * -0x1.0000000000000p-1f) * v44);
  case 4:
    return v12 + (float)((float)(v16 * (float)(v16 * v17)) * v16);
  case 5:
    v28 = v16 + -0x1.0000000000000p+0f;
    v27 = v28 * v28;
    goto LABEL_43;
  case 6:
    v30 = v14 / (float)(v8 * 0x1.0000000000000p-1f);
    if (v30 < 0x1.0000000000000p+0f) {
      v31 = v17 * 0x1.0000000000000p-1f;
      goto LABEL_27;
    }
    v46 = v30 + -0x1.0000000000000p+1f;
    v32 = v17 * 0x1.0000000000000p-1f;
    v47 = v46 * v46;
    goto LABEL_48;
  case 7:
    v45 = (float)(v14 / v8) *
          (float)((float)(v14 / v8) *
                  (float)((float)(v14 / v8) *
                          (float)((float)(v14 / v8) * (float)(v14 / v8))));
    return v12 + (float)(v17 * v45);
  case 8:
    v28 = (float)(v14 / v8) + -0x1.0000000000000p+0f;
    v27 = v28 * (float)(v28 * (float)(v28 * v28));
    goto LABEL_43;
  case 9:
    v30 = v14 / (float)(v8 * 0x1.0000000000000p-1f);
    if (v30 >= 0x1.0000000000000p+0f) {
      v46 = v30 + -0x1.0000000000000p+1f;
      v32 = v17 * 0x1.0000000000000p-1f;
      v47 = v46 * (float)(v46 * (float)(v46 * v46));
      goto LABEL_48;
    }
    v31 = v30 * (float)(v30 * (float)(v17 * 0x1.0000000000000p-1f));
  LABEL_27:
    v32 = v30 * (float)(v30 * v31);
    break;
  case 0xA:
    v42 = v14 / v8;
    v32 = v42 * (float)(v42 * v17);
    v30 = (float)(v42 * 0x1.59cd600000000p+1f) + -0x1.b39ac00000000p+0f;
    return v12 + (float)(v32 * v30);
  case 0xB:
    v26 = (float)(v14 / v8) + -0x1.0000000000000p+0f;
    v27 = v26 * v26;
    v28 = (float)(v26 * 0x1.59cd600000000p+1f) + 0x1.b39ac00000000p+0f;
  LABEL_43:
    v45 = (float)(v27 * v28) + 0x1.0000000000000p+0f;
    return v12 + (float)(v17 * v45);
  case 0xC:
    v33 = v14 / (float)(v8 * 0x1.0000000000000p-1f);
    if (v33 >= 0x1.0000000000000p+0f) {
      v48 = v33 + -0x1.0000000000000p+1f;
      v32 = v17 * 0x1.0000000000000p-1f;
      v47 = v48 * v48;
      v46 = (float)(v48 * 0x1.cc25fe0000000p+1f) + 0x1.4c25fe0000000p+1f;
    LABEL_48:
      v30 = (float)(v47 * v46) + 0x1.0000000000000p+1f;
    }
    else {
      v32 = v17 * 0x1.0000000000000p-1f;
      v30 = (float)(v33 * v33) * (float)((float)(v33 * 0x1.cc25fe0000000p+1f) +
                                         -0x1.4c25fe0000000p+1f);
    }
    break;
  case 0xD:
    if (v14 == 0x0.0p+0f) {
      return v6[2];
    }
    v19 = v14 / v8;
    if (v19 == 0x1.0000000000000p+0f) {
      return v12 + v17;
    }
    v20 = v6[2];
    v21 = v6[5];
    v22 = v8 * 0x1.3333340000000p-2f;
    v23 = v19 + -0x1.0000000000000p+0f;
    v24 = exp2((float)(v19 + -0x1.0000000000000p+0f) * 0x1.4000000000000p+3) *
          v17,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v25 = v24 *
          sin((float)((float)(PSEUDO_UNFUSED(v22 * -0x1.0000000000000p-2f)) +
                      (float)(v23 * v21)) *
              0x1.921fb60000000p+2 / v22),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    return v20 - v25;
  case 0xE:
    if (v14 == 0x0.0p+0f) {
      return v6[2];
    }
    v34 = v14 / v8;
    if ((float)(v14 / v8) == 0x1.0000000000000p+0f) {
      return v12 + v17;
    }
    v35 = v6[2];
    v36 = v6[5];
    v37 = v8 * 0x1.3333340000000p-2f;
    v38 = exp2(v34 * -0x1.4000000000000p+3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v39 = v38 *
          sin((float)((float)(PSEUDO_UNFUSED(v37 * -0x1.0000000000000p-2f)) +
                      (float)(v34 * v36)) *
              0x1.921fb60000000p+2 / v37),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v29 = v35 + (float)(v17 * v39);
    return v17 + v29;
  case 0xF:
    if (v14 == 0x0.0p+0f) {
      return v6[2];
    }
    v49 = v14 / (float)(v8 * 0x1.0000000000000p-1f);
    if (v49 == 0x1.0000000000000p+1f) {
      return v12 + v17;
    }
    v50 = v6[5];
    v43 = v6[2];
    v51 = (float)(v8 * 0x1.3333340000000p-2f) * 0x1.8000000000000p+0f;
    v52 = v51 * 0x1.0000000000000p-2f;
    v53 = v49 + -0x1.0000000000000p+0f;
    v54 = (float)(v49 + -0x1.0000000000000p+0f);
    if (v49 >= 0x1.0000000000000p+0f) {
      v56 = exp2(v54 * -0x1.4000000000000p+3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v40 = v43 + v17;
      v17 = (float)(v17 * v56) * 0x1.0000000000000p-1f;
      v41 = sin((float)-(float)(v52 - (float)(v53 * v50)) *
                0x1.921fb60000000p+2 / v51),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      return v40 + (float)(v17 * v41);
    }
    else {
      v55 = exp2(v54 * 0x1.4000000000000p+3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v17 = v17 * v55;
      v44 = sin((float)-(float)(v52 - (float)(v53 * v50)) *
                0x1.921fb60000000p+2 / v51),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      return v43 + (float)((float)(v17 * -0x1.0000000000000p-1f) * v44);
    }
  case 0x10:
  case 0x11:
  case 0x12:
    return v18;
  default:
    nn_detail_UnexpectedDefaultImpl(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    return result;
  }
  return v12 + (float)(v32 * v30);
}

#pragma GCC visibility pop
