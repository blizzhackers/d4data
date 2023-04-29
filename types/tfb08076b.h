/**
 * Definition: tfb08076b
 * Hash: fb08076b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tfb08076b : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
