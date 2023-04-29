/**
 * Definition: tbdc45559
 * Hash: bdc45559
 */

#pragma once

#include "../types.h"
#include "tad008e7e.h"

#pragma push(pack, 1)

struct tbdc45559 : public ComplexRead {
  tad008e7e tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
