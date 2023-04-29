/**
 * Definition: td8824023
 * Hash: d8824023
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td8824023 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT accept;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
