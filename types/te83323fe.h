/**
 * Definition: te83323fe
 * Hash: e83323fe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te83323fe : public ComplexRead {
  DT_CHARARRAY<64> szEventName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
