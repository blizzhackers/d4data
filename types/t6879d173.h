/**
 * Definition: t6879d173
 * Hash: 6879d173
 */

#pragma once

#include "../types.h"
#include "tad008e7e.h"

#pragma push(pack, 1)

struct t6879d173 : public ComplexRead {
  tad008e7e tHeader;
  DT_INT64 uData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
