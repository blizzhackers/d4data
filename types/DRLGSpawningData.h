/**
 * Definition: DRLGSpawningData
 * Hash: 29aeb8aa
 */

#pragma once

#include "../types.h"
#include "te730cffb.h"

#pragma push(pack, 1)

struct DRLGSpawningData : public ComplexRead {
  DT_GBID<0x14> gbidSpawnLocType;
  DT_FIXEDARRAY<te730cffb, 9> arGroupTypeData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
