#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 libunwind_LocalAddressSpace_getEncodedP(__int64, unsigned __int8**,
                                                unsigned __int8*,
                                                unsigned __int8, __int64,
                                                __int64*);
__int64 libunwind_LocalAddressSpace_getULEB128(unsigned __int8**,
                                               unsigned __int8*);
__int64 malloc_plt(unsigned __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nn_aead0(__int64, ...);
void __attribute__((noreturn)) nn_aeb60(__int64, ...);
void free_plt(__int64);
__int64 llvm_libcxx_libunwind_src_850e80(__int64 a1, _QWORD* a2, __int64 a3,
                                         __int64 a4, int a5, __int64 a6);

__int64 llvm_libcxx_libunwind_src_850e80(__int64 a1, _QWORD* a2, __int64 a3,
                                         __int64 a4, int a5, __int64 a6)
{
  __int64 v6;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  bool v21;
  unsigned __int8* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  unsigned int v29;
  unsigned int v30;
  bool v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  unsigned int v39;
  unsigned int v40;
  char v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  unsigned __int8* v58;
  int v59;
  unsigned __int64 v60;
  int v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int8* v64;
  unsigned int v65;
  unsigned int v66;
  char v67;
  bool v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  unsigned __int64 v92;
  unsigned __int8* v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int8* v96;
  unsigned int v97;
  unsigned int v98;
  char v99;
  bool v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  unsigned __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  _QWORD* v114;
  int v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  __int64 v123;
  unsigned int v124;
  __int64 v125;
  __int64 v126;
  unsigned int v127;
  _QWORD* v128;
  __int64* v130;
  struct {
    _QWORD v134[68];
    __int64 v135;
    __int64 v136;
  } v134_;
  unsigned __int8* v137;
  _QWORD v138[7];

  v6 = a6 + 24;
  v9 = 0;
  {
    v10 = a2[2];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = nullptr;
  {
    v12 = *(_QWORD*)(a3 + 8) + *(_QWORD*)a3;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_QWORD*)(a3 + 16);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = a2[1] + *a2;
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = a4 - a2[3];
    __asm__ volatile("" ::"r"(v15));
  }
  v138[2] = -1;
  v138[3] = v10;
  v138[4] = v14;
  v138[5] = v15;
  v138[0] = v13;
  v138[1] = v12;
  v130 = (__int64*)(a6 + 568);
  while (1) {
    {
      v16 = (unsigned __int8*)v138[v9];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = (unsigned __int8*)v138[v9 + 1];
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = v138[v9 + 2];
      __asm__ volatile("" ::"r"(v18));
    }
    v137 = v16;
    if (v16 < v17 && v18 != 0) {
      break;
    }
  LABEL_2:
    v9 += 3;
    if (v9 == 6) {
      v127 = 1;
      if (v11 != nullptr) {
        goto LABEL_148;
      }
      return v127;
    }
  }
  v20 = 0;
  while (2) {
    v22 = v16 + 1;
    {
      v23 = *v16;
      __asm__ volatile("" ::"r"(v23));
    }
    v137 = v16 + 1;
    switch (v23) {
    case 0LL:
      goto LABEL_9;
    case 1LL:
      v20 = libunwind_LocalAddressSpace_getEncodedP(
          a1, &v137, v17, *(_BYTE*)(a3 + 24), 0, nullptr);
      goto LABEL_9;
    case 2LL:
      v20 += *(int*)(a3 + 40) * (unsigned int)v16[1];
      v137 = v16 + 2;
      goto LABEL_9;
    case 3LL:
      v20 += *(int*)(a3 + 40) * (unsigned int)*(unsigned __int16*)(v16 + 1);
      v137 = v16 + 3;
      goto LABEL_9;
    case 4LL:
      v20 += (unsigned int)(*(int*)(a3 + 40) * *(int*)(v16 + 1));
      v137 = v16 + 5;
      goto LABEL_9;
    case 5LL:
      v70 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v71 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v70 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_offset_extended "
                     "DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            526);
        goto LABEL_147;
      }
      v72 = v6 + 16 * v70;
      {
        v73 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v73));
      }
      if ((*(_BYTE*)(v72 + 4) & 1) == 0) {
        {
          v74 = &v134_.v134[2 * v70];
          __asm__ volatile("" ::"r"(v74));
        }
      LABEL_125:
        {
          v126 = *(_QWORD*)(v72 + 8);
          __asm__ volatile("" ::"r"(v126));
        }
        *v74 = *(_QWORD*)v72;
        v74[1] = v126;
        *(_BYTE*)(v72 + 4) = 1;
      }
    LABEL_126:
      v116 = v71 * v73;
      goto LABEL_127;
    case 6LL:
      v77 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v77 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_restore_extended "
                     "DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            538);
        goto LABEL_147;
      }
      v72 = v6 + 16 * v77;
      if (*(_BYTE*)(v72 + 4) != 1) {
        goto LABEL_9;
      }
      {
        v78 = &v134_.v134[2 * v77];
        __asm__ volatile("" ::"r"(v78));
      }
    LABEL_120:
      {
        v125 = *v78;
        __asm__ volatile("" ::"r"(v125));
      }
      {
        v116 = v78[1];
        __asm__ volatile("" ::"r"(v116));
      }
      *(_QWORD*)v72 = v125;
      goto LABEL_129;
    case 7LL:
      v79 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v79 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_undefined DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            549);
        goto LABEL_147;
      }
      v80 = v6 + 16 * v79;
      if ((*(_BYTE*)(v80 + 4) & 1) == 0) {
        {
          v81 = *(_QWORD*)(v80 + 8);
          __asm__ volatile("" ::"r"(v81));
        }
        {
          v82 = &v134_.v134[2 * v79];
          __asm__ volatile("" ::"r"(v82));
        }
        *v82 = *(_QWORD*)v80;
        v82[1] = v81;
        *(_BYTE*)(v80 + 4) = 1;
      }
      *(_DWORD*)v80 = 1;
      goto LABEL_9;
    case 8LL:
      v88 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v88 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_same_value DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            559);
        goto LABEL_147;
      }
      v89 = v6 + 16 * v88;
      if ((*(_BYTE*)(v89 + 4) & 1) == 0) {
        {
          v90 = *(_QWORD*)(v89 + 8);
          __asm__ volatile("" ::"r"(v90));
        }
        {
          v91 = &v134_.v134[2 * v88];
          __asm__ volatile("" ::"r"(v91));
        }
        *v91 = *(_QWORD*)v89;
        v91[1] = v90;
        *(_BYTE*)(v89 + 4) = 1;
      }
      *(_DWORD*)v89 = 0;
      goto LABEL_9;
    case 9LL:
      v83 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v84 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v83 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_register DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            574);
        goto LABEL_147;
      }
      if (v84 < 0x60) {
        v85 = v6 + 16 * v83;
        if ((*(_BYTE*)(v85 + 4) & 1) == 0) {
          {
            v86 = *(_QWORD*)(v85 + 8);
            __asm__ volatile("" ::"r"(v86));
          }
          {
            v87 = &v134_.v134[2 * v83];
            __asm__ volatile("" ::"r"(v87));
          }
          *v87 = *(_QWORD*)v85;
          v87[1] = v86;
          *(_BYTE*)(v85 + 4) = 1;
        }
        *(_QWORD*)(v85 + 8) = v84;
        *(_DWORD*)v85 = 5;
      LABEL_9:
        v16 = v137;
        v21 = v137 >= v17 || v20 >= v18;
        if (v21) {
          goto LABEL_2;
        }
        continue;
      }
      nn_aead0(
          (__int64)"libunwind: %s %s:%d - malformed DW_CFA_register DWARF "
                   "unwind, reg2 too big\n",
          "parseFDEInstructions",
          "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
          579);
    LABEL_147:
      v127 = 0;
      if (v11 != nullptr) {
        do {
        LABEL_148:
          v128 = (_QWORD*)*v11;
          free_plt((__int64)v11);
          v11 = v128;
        } while (v128 != nullptr);
      }
      return v127;
    case 10LL:
      v52 = (_QWORD*)malloc_plt(0x628u);
      if (v52 == nullptr) {
        goto LABEL_147;
      }
      v53 = v52;
      *v52 = v11;
      memcpy_plt((__int64)(v52 + 1), a6, 0x620u);
      v11 = v53;
      goto LABEL_9;
    case 11LL:
      if (v11 == nullptr) {
        goto LABEL_147;
      }
      memcpy_plt(a6, (__int64)(v11 + 1), 0x620u);
      v75 = (_QWORD*)*v11;
      free_plt((__int64)v11);
      v11 = v75;
      goto LABEL_9;
    case 12LL:
      v60 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v61 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v60 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_def_cfa DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            618);
        goto LABEL_147;
      }
      *(_DWORD*)a6 = v60;
      *(_DWORD*)(a6 + 4) = v61;
      goto LABEL_9;
    case 13LL:
      v50 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v50 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_def_cfa_register "
                     "DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            631);
        goto LABEL_147;
      }
      *(_DWORD*)a6 = v50;
      goto LABEL_9;
    case 14LL:
      *(_DWORD*)(a6 + 4) = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      goto LABEL_9;
    case 15LL:
      *(_DWORD*)a6 = 0;
      *(_QWORD*)(a6 + 8) = v22;
      goto LABEL_107;
    case 16LL:
      v105 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v105 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_expression DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            657);
        goto LABEL_147;
      }
      v55 = v6 + 16 * v105;
      if ((*(_BYTE*)(v55 + 4) & 1) == 0) {
        {
          v106 = *(_QWORD*)(v55 + 8);
          __asm__ volatile("" ::"r"(v106));
        }
        {
          v107 = &v134_.v134[2 * v105];
          __asm__ volatile("" ::"r"(v107));
        }
        *v107 = *(_QWORD*)v55;
        v107[1] = v106;
        *(_BYTE*)(v55 + 4) = 1;
      }
      v58 = v137;
      v59 = 6;
    LABEL_106:
      *(_DWORD*)v55 = v59;
      *(_QWORD*)(v55 + 8) = v58;
    LABEL_107:
      v108 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v137 += v108;
      goto LABEL_9;
    case 17LL:
      v92 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v92 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed "
                     "DW_CFA_offset_extended_sf DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            674);
        goto LABEL_147;
      }
      v93 = v137;
      v94 = -7;
      v95 = 0;
      v96 = v137;
      do {
        if (v96 == v17) {
          goto LABEL_150;
        }
        {
          v98 = *v96++;
          __asm__ volatile("" ::"r"(v98));
        }
        v97 = v98;
        v94 += 7LL;
        ++v93;
        v95 |= (unsigned __int64)(v98 & 0x7F) << v94;
      } while ((v98 & 0x80) != 0);
      v21 = v94 >= 0x39;
      v99 = v94 + 7;
      v137 = v93;
      v42 = v6 + 16 * v92;
      v100 = !v21 && v97 > 0x3F;
      v101 = -1LL << v99;
      {
        v102 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v102));
      }
      if (!v100) {
        v101 = 0;
      }
      if ((*(_BYTE*)(v42 + 4) & 1) == 0) {
        {
          v103 = *(_QWORD*)(v42 + 8);
          __asm__ volatile("" ::"r"(v103));
        }
        {
          v104 = &v134_.v134[2 * v92];
          __asm__ volatile("" ::"r"(v104));
        }
        *v104 = *(_QWORD*)v42;
        v104[1] = v103;
        *(_BYTE*)(v42 + 4) = 1;
      }
      v48 = (v95 | v101) * v102;
      v49 = 2;
    LABEL_101:
      *(_DWORD*)v42 = v49;
      *(_QWORD*)(v42 + 8) = v48;
      goto LABEL_9;
    case 18LL:
      v24 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v25 = v137;
      v26 = -7;
      v27 = 0;
      v28 = v137;
      do {
        if (v28 == v17) {
          goto LABEL_150;
        }
        {
          v30 = *v28++;
          __asm__ volatile("" ::"r"(v30));
        }
        v29 = v30;
        v26 += 7LL;
        ++v25;
        v27 |= (unsigned __int64)(v30 & 0x7F) << v26;
      } while ((v30 & 0x80) != 0);
      v137 = v25;
      if (v24 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_def_cfa_sf DWARF "
                     "unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            690);
        goto LABEL_147;
      }
      v31 = v26 < 0x39 && v29 > 0x3F;
      v32 = -1LL << ((unsigned __int8)v26 + 7);
      if (!v31) {
        LODWORD(v32) = 0;
      }
      {
        v33 = *(int*)(a3 + 44) * (v27 | v32);
        __asm__ volatile("" ::"r"(v33));
      }
      *(_DWORD*)a6 = v24;
      *(_DWORD*)(a6 + 4) = v33;
      goto LABEL_9;
    case 19LL:
      v62 = -7;
      v63 = 0;
      v64 = v22;
      do {
        if (v64 == v17) {
          goto LABEL_150;
        }
        {
          v66 = *v64++;
          __asm__ volatile("" ::"r"(v66));
        }
        v65 = v66;
        v62 += 7LL;
        ++v22;
        v63 |= (unsigned __int64)(v66 & 0x7F) << v62;
      } while ((v66 & 0x80) != 0);
      v21 = v62 >= 0x39;
      v137 = v22;
      v67 = v62 + 7;
      v68 = !v21 && v65 > 0x3F;
      v69 = -1LL << v67;
      if (!v68) {
        LODWORD(v69) = 0;
      }
      *(_DWORD*)(a6 + 4) = *(int*)(a3 + 44) * (v63 | v69);
      goto LABEL_9;
    case 20LL:
      v109 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v109 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_val_offset DWARF "
                     "unwind, reg too big\n\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            711);
        goto LABEL_147;
      }
      v110 = v109;
      v111 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v72 = v6 + 16 * v110;
      {
        v112 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v112));
      }
      if ((*(_BYTE*)(v72 + 4) & 1) == 0) {
        {
          v113 = *(_QWORD*)(v72 + 8);
          __asm__ volatile("" ::"r"(v113));
        }
        {
          v114 = &v134_.v134[2 * v110];
          __asm__ volatile("" ::"r"(v114));
        }
        *v114 = *(_QWORD*)v72;
        v114[1] = v113;
        *(_BYTE*)(v72 + 4) = 1;
      }
      v115 = 4;
      v116 = v111 * v112;
      goto LABEL_128;
    case 21LL:
      v34 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v34 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_val_offset_sf "
                     "DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            725);
        goto LABEL_147;
      }
      v35 = v137;
      v36 = -7;
      v37 = 0;
      v38 = v137;
      do {
        if (v38 == v17) {
        LABEL_150:
          nn_aeb60((__int64)"libunwind: %s %s:%d - %s\n", "getSLEB128",
                   "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/"
                   "src\\AddressSpace.hpp",
                   265, "truncated sleb128 expression");
        }
        {
          v40 = *v38++;
          __asm__ volatile("" ::"r"(v40));
        }
        v39 = v40;
        v36 += 7LL;
        ++v35;
        v37 |= (unsigned __int64)(v40 & 0x7F) << v36;
      } while ((v40 & 0x80) != 0);
      v21 = v36 >= 0x39;
      v41 = v36 + 7;
      v137 = v35;
      v42 = v6 + 16 * v34;
      v43 = !v21 && v39 > 0x3F;
      v44 = -1LL << v41;
      {
        v45 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v45));
      }
      if (!v43) {
        v44 = 0;
      }
      if ((*(_BYTE*)(v42 + 4) & 1) == 0) {
        {
          v46 = *(_QWORD*)(v42 + 8);
          __asm__ volatile("" ::"r"(v46));
        }
        {
          v47 = &v134_.v134[2 * v34];
          __asm__ volatile("" ::"r"(v47));
        }
        *v47 = *(_QWORD*)v42;
        v47[1] = v46;
        *(_BYTE*)(v42 + 4) = 1;
      }
      v48 = (v37 | v44) * v45;
      v49 = 4;
      goto LABEL_101;
    case 22LL:
      v54 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v54 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed DW_CFA_val_expression "
                     "DWARF unwind, reg too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            739);
        goto LABEL_147;
      }
      v55 = v6 + 16 * v54;
      if ((*(_BYTE*)(v55 + 4) & 1) == 0) {
        {
          v56 = *(_QWORD*)(v55 + 8);
          __asm__ volatile("" ::"r"(v56));
        }
        {
          v57 = &v134_.v134[2 * v54];
          __asm__ volatile("" ::"r"(v57));
        }
        *v57 = *(_QWORD*)v55;
        v57[1] = v56;
        *(_BYTE*)(v55 + 4) = 1;
      }
      v58 = v137;
      v59 = 7;
      goto LABEL_106;
    case 44LL:
      if ((*(_BYTE*)(a6 + 572) & 1) == 0) {
        {
          v51 = v130[1];
          __asm__ volatile("" ::"r"(v51));
        }
        v134_.v135 = *v130;
        v134_.v136 = v51;
        *(_BYTE*)(a6 + 572) = 1;
      }
      *(_QWORD*)(a6 + 576) ^= 3uLL;
      *(_QWORD*)(a6 + 1560) = v20 + a2[3] - 4;
      goto LABEL_9;
    case 45LL:
      if (a5 == 4) {
        if ((*(_BYTE*)(a6 + 572) & 1) == 0) {
          {
            v76 = v130[1];
            __asm__ volatile("" ::"r"(v76));
          }
          v134_.v135 = *v130;
          v134_.v136 = v76;
          *(_BYTE*)(a6 + 572) = 1;
        }
        *(_QWORD*)(a6 + 576) ^= 1uLL;
      }
      goto LABEL_9;
    case 46LL:
      *(_DWORD*)(a6 + 16) = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      goto LABEL_9;
    case 47LL:
      v117 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      if (v117 >= 0x60) {
        nn_aead0(
            (__int64)"libunwind: %s %s:%d - malformed "
                     "DW_CFA_GNU_negative_offset_extended DWARF unwind, reg "
                     "too big\n",
            "parseFDEInstructions",
            "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\DwarfParser.hpp",
            761);
        goto LABEL_147;
      }
      v118 = v117;
      v119 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v72 = v6 + 16 * v118;
      {
        v120 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v120));
      }
      if ((*(_BYTE*)(v72 + 4) & 1) == 0) {
        {
          v121 = *(_QWORD*)(v72 + 8);
          __asm__ volatile("" ::"r"(v121));
        }
        {
          v122 = &v134_.v134[2 * v118];
          __asm__ volatile("" ::"r"(v122));
        }
        *v122 = *(_QWORD*)v72;
        v122[1] = v121;
        *(_BYTE*)(v72 + 4) = 1;
      }
      v116 = -(v119 * v120);
    LABEL_127:
      v115 = 2;
    LABEL_128:
      *(_DWORD*)v72 = v115;
    LABEL_129:
      *(_QWORD*)(v72 + 8) = v116;
      goto LABEL_9;
    default:
      v123 = v23 & 0x3F;
      v124 = (unsigned int)v23 >> 6;
      if ((unsigned int)v23 >> 6 <= 1) {
        if (v124 != 1) {
          goto LABEL_147;
        }
        v20 += (unsigned int)(*(int*)(a3 + 40) * v123);
        goto LABEL_9;
      }
      if (v124 == 3) {
        v72 = v6 + 16 * v123;
        if (*(_BYTE*)(v72 + 4) != 1) {
          goto LABEL_9;
        }
        {
          v78 = &v134_.v134[2 * v123];
          __asm__ volatile("" ::"r"(v78));
        }
        goto LABEL_120;
      }
      v71 = libunwind_LocalAddressSpace_getULEB128(&v137, v17);
      v72 = v6 + 16LL * (unsigned int)v123;
      {
        v73 = *(int*)(a3 + 44);
        __asm__ volatile("" ::"r"(v73));
      }
      if ((*(_BYTE*)(v72 + 4) & 1) != 0) {
        goto LABEL_126;
      }
      {
        v74 = &v134_.v134[2 * (unsigned int)v123];
        __asm__ volatile("" ::"r"(v74));
      }
      goto LABEL_125;
    }
  }
}

#pragma GCC visibility pop
