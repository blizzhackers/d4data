/**
 * Definition: t6ce94c9b
 * Hash: 6ce94c9b
 */

#pragma once

#include "../types.h"
#include "tba05ef94.h"

#pragma push(pack, 1)

struct t6ce94c9b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tba05ef94> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
