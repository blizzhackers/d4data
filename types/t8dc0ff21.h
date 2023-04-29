/**
 * Definition: t8dc0ff21
 * Hash: 8dc0ff21
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8dc0ff21 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
