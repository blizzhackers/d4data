/**
 * Definition: t835c1731
 * Hash: 835c1731
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t835c1731 : public ComplexRead {
  DT_FIXEDARRAY<DT_VECTOR4D, 3> unk_73e1323;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
