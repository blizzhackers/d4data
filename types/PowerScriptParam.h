/**
 * Definition: PowerScriptParam
 * Hash: 99ccdad3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerScriptParam : public ComplexRead {
  DT_ENUM<DT_INT> eType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
