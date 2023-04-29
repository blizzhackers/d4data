/**
 * Definition: t78541b1a
 * Hash: 78541b1a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t78541b1a : public ComplexRead {
  DT_INT unk_70a927c;
  DT_FLOAT flDelta;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
