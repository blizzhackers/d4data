/**
 * Definition: t5f527528
 * Hash: 5f527528
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5f527528 : public ComplexRead {
  DT_VECTOR4D q;
  DT_VECTOR4D p;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
