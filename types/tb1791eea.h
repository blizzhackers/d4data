/**
 * Definition: tb1791eea
 * Hash: b1791eea
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct tb1791eea : public ComplexRead {
  tb42131c6 tSNONames;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
