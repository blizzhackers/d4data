/**
 * Definition: t2b920147
 * Hash: 2b920147
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2b920147 : public ComplexRead {
  DT_UINT unk_d17aff0;
  DT_ENUM<DT_INT> unk_39e87d5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
