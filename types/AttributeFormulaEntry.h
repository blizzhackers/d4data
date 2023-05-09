/**
 * Definition: AttributeFormulaEntry
 * Hash: e64c779c
 */

#pragma once

#include "../types.h"
#include "AttributeFormulaRange.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct AttributeFormulaEntry : public ComplexRead {
  GBIDHeader tHeader;
  DT_VARIABLEARRAY<AttributeFormulaRange> arRanges;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
