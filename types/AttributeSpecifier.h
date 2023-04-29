/**
 * Definition: AttributeSpecifier
 * Hash: bfd1afce
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AttributeSpecifier : public ComplexRead {
  DT_ENUM<DT_INT> eAttribute;
  DT_INT nParam;
  DT_STRING_FORMULA szAttributeFormula;
  DT_GBID<0x16> gbidFormula;
  DT_STRING_FORMULA unk_dffdf28;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
