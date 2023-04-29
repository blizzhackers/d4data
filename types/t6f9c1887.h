/**
 * Definition: t6f9c1887
 * Hash: 6f9c1887
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6f9c1887 : public ComplexRead {
  DT_UINT szName;
  DT_VARIABLEARRAY<DT_UINT> unk_e6f1de0;
  DT_CSTRING unk_9b8c777;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
