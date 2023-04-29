/**
 * Definition: t8d4a11f2
 * Hash: 8d4a11f2
 */

#pragma once

#include "../types.h"
#include "PetType.h"

#pragma push(pack, 1)

struct t8d4a11f2 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<PetType> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
