/**
 * Definition: td2f29025
 * Hash: d2f29025
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct td2f29025 : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
