/**
 * Definition: t4203ae2e
 * Hash: 4203ae2e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4203ae2e : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::MarkerSet> snoMarkerSet;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
