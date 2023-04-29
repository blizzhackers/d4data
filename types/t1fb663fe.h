/**
 * Definition: t1fb663fe
 * Hash: 1fb663fe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1fb663fe : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
