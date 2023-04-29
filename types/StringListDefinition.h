/**
 * Definition: StringListDefinition
 * Hash: dae1937c
 */

#pragma once

#include "../types.h"
#include "StringTableEntry.h"

#pragma push(pack, 1)

struct StringListDefinition : public ComplexRead {
  DT_VARIABLEARRAY<StringTableEntry> arStrings;
  DT_INT64 ptMapStringTable;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
