/**
 * Definition: AttributeFormulaRange
 * Hash: e7307a37
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AttributeFormulaRange : public ComplexRead {
  DT_INT unk_89a9405;
  DT_RANGE<DT_INT> unk_8753a3e;
  DT_STRING_FORMULA tFormula;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
