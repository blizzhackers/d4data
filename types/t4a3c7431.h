/**
 * Definition: t4a3c7431
 * Hash: 4a3c7431
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4a3c7431 : public ComplexRead {
  DT_FLOAT flMax;
  DT_FLOAT flMin;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
