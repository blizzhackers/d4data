/**
 * Definition: ta5893491
 * Hash: a5893491
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta5893491 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eDamageType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
