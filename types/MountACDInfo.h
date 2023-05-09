/**
 * Definition: MountACDInfo
 * Hash: ad528067
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MountACDInfo : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 2> snoItems;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
