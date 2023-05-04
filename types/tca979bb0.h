/**
 * Definition: tca979bb0
 * Hash: ca979bb0
 */

#pragma once

#include "../types.h"
#include "SpawnLocType.h"

#pragma push(pack, 1)

struct tca979bb0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<SpawnLocType> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
