/**
 * Definition: td8a9e2b7
 * Hash: d8a9e2b7
 */

#pragma once

#include "../types.h"
#include "UIControlStyle.h"

#pragma push(pack, 1)

struct td8a9e2b7 : public ComplexRead {
  DT_CSTRING unk_d5fa5df;
  DT_UINT nKey;
  DT_POLYMORPHIC_VARIABLEARRAY ptStyle;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
