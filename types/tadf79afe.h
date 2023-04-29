/**
 * Definition: tadf79afe
 * Hash: adf79afe
 */

#pragma once

#include "../types.h"
#include "t80fa280c.h"

#pragma push(pack, 1)

struct tadf79afe : public ComplexRead {
  DT_UINT dwType;
  t80fa280c unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
