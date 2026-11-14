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
    v10 = (*(_BYTE*)0x940LL);
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
      if (!v22 && v23 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
