/**
 * Definition: ta6ee534a
 * Hash: a6ee534a
 */

#pragma once

#include "../types.h"
#include "tf5735f03.h"

#pragma push(pack, 1)

struct ta6ee534a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tf5735f03> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
