/**
 * Definition: LookVariant
 * Hash: 6032ac6a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LookVariant : public ComplexRead {
  DT_UINT szName;
  DT_UINT dwValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
