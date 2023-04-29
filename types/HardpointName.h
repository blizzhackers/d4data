/**
 * Definition: HardpointName
 * Hash: d8f11f4a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HardpointName : public ComplexRead {
  DT_CHARARRAY<64> szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
