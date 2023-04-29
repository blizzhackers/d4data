/**
 * Definition: t5a98a8eb
 * Hash: 5a98a8eb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5a98a8eb : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
