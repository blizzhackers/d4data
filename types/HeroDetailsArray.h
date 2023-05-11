/**
 * Definition: HeroDetailsArray
 * Hash: aec481b3
 */

#pragma once

#include "../types.h"
#include "HeroDetailsEntry.h"

#pragma push(pack, 1)

struct HeroDetailsArray : public ComplexRead {
  DT_VARIABLEARRAY<HeroDetailsEntry> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
