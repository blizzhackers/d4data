/**
 * Definition: ta5c62f55
 * Hash: a5c62f55
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta5c62f55 : public ComplexRead {
  DT_VECTOR4D params;
  DT_VECTOR4D scale;
  DT_WORD i1;
  DT_WORD i2;
  DT_FIXEDARRAY<DT_WORD, 6> unk_7092ef7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
