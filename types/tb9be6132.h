/**
 * Definition: tb9be6132
 * Hash: b9be6132
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb9be6132 : public ComplexRead {
  DT_UINT szName;
  DT_STRING_FORMULA tFormula;
  DT_FLOAT flDefaultValue;
  DT_INT unk_c0f4112;
  DT_INT bIsGlobal;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
