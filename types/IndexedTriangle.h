/**
 * Definition: IndexedTriangle
 * Hash: bb66ea97
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IndexedTriangle : public ComplexRead {
  DT_INT a;
  DT_INT b;
  DT_INT c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
