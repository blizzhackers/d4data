/**
 * Definition: WorldStateDefinition
 * Hash: 3bb55992
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WorldStateDefinition : public ComplexRead {
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
