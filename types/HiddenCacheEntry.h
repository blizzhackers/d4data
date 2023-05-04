/**
 * Definition: HiddenCacheEntry
 * Hash: f10f5cf2
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct HiddenCacheEntry : public ComplexRead {
  GBIDHeader tHeader;
  DT_SNO<SnoGroup::TrackedReward> snoTrackedReward;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
