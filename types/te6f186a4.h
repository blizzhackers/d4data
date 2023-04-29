/**
 * Definition: te6f186a4
 * Hash: e6f186a4
 */

#pragma once

#include "../types.h"
#include "PowerFormulaTableEntry.h"

#pragma push(pack, 1)

struct te6f186a4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<PowerFormulaTableEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
