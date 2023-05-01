/**
 * Definition: t888e9180
 * Hash: 888e9180
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct t888e9180 : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
