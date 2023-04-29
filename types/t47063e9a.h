/**
 * Definition: t47063e9a
 * Hash: 47063e9a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t47063e9a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
