/**
 * Definition: HardpointOffsets
 * Hash: 68a819c3
 */

#pragma once

#include "../types.h"
#include "HardpointOffset.h"

#pragma push(pack, 1)

struct HardpointOffsets : public ComplexRead {
  DT_VARIABLEARRAY<HardpointOffset> unk_55bda0c;
  DT_VARIABLEARRAY<HardpointOffset> unk_63b0377;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
