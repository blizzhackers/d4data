/**
 * Definition: MarkerLink
 * Hash: b0101430
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerLink : public ComplexRead {
  DT_INT nMarkerID;
  DT_UINT dwGroupHash;
  DT_INT nMarkerIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
