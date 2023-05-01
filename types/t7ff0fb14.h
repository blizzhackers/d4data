/**
 * Definition: t7ff0fb14
 * Hash: 7ff0fb14
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7ff0fb14 : public ComplexRead {
  DT_VECTOR4D normal;
  DT_FLOAT area;
  DT_WORD i1;
  DT_WORD i2;
  DT_WORD i3;
  DT_WORD unk_5b98999;
  DT_FIXEDARRAY<DT_WORD, 2> padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
