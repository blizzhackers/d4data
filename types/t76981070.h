/**
 * Definition: t76981070
 * Hash: 76981070
 */

#pragma once

#include "../types.h"
#include "tad008e7e.h"

#pragma push(pack, 1)

struct t76981070 : public ComplexRead {
  tad008e7e tHeader;
  DT_WORD uBlobSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
