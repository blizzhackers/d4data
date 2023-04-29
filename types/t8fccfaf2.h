/**
 * Definition: t8fccfaf2
 * Hash: 8fccfaf2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8fccfaf2 : public ComplexRead {
  DT_UINT tValueMin;
  DT_UINT tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
