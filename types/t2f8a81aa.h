/**
 * Definition: t2f8a81aa
 * Hash: 2f8a81aa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2f8a81aa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
