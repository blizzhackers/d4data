/**
 * Definition: t6a7c9e6e
 * Hash: 6a7c9e6e
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct t6a7c9e6e : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
