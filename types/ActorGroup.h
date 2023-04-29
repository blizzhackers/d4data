/**
 * Definition: ActorGroup
 * Hash: 9054a8c6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorGroup : public ComplexRead {
  DT_UINT uHash;
  DT_CHARARRAY<64> szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
