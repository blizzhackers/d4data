/**
 * Definition: t8d06aec1
 * Hash: 8d06aec1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8d06aec1 : public ComplexRead {
  DT_VECTOR4D invMass;
  DT_VECTOR4D params;
  DT_VECTOR4D scale;
  DT_WORD i1;
  DT_WORD i2;
  DT_WORD i3;
  DT_WORD i4;
  DT_FIXEDARRAY<DT_WORD, 4> padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
