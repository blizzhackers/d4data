/**
 * Definition: MarkerHandle
 * Hash: ea806a2e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerHandle : public ComplexRead {
  DT_SNO<SnoGroup::MarkerSet> snoMarkerSet;
  DT_INT nID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
