/**
 * Definition: t787fab4
 * Hash: 787fab4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t787fab4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
