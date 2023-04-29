/**
 * Definition: wWiseSoundBankDefinition
 * Hash: d15a2bfd
 */

#pragma once

#include "../types.h"
#include "t1b50d66a.h"

#pragma push(pack, 1)

struct wWiseSoundBankDefinition : public ComplexRead {
  DT_POLYMORPHIC_VARIABLEARRAY ptContent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
