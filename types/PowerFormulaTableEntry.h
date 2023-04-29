/**
 * Definition: PowerFormulaTableEntry
 * Hash: d6d196dd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerFormulaTableEntry : public ComplexRead {
  DT_CHARARRAY<1024> szName;
  DT_FIXEDARRAY<DT_FLOAT, 76> flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
