#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_libstagefright_4df000(void* this_);

__int64 nandroid_libstagefright_4df000(void* this_)
{
  __int64 result;

  result = *((_QWORD*)this_ + 1);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 80LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
