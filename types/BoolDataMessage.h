/**
 * Definition: BoolDataMessage
 * Hash: 3758d64b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct BoolDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bVal;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
