/**
 * Definition: t666e5231
 * Hash: 666e5231
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t666e5231 : public ComplexRead {
  DT_FLOAT flTime;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
