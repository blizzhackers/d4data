/**
 * Definition: tad528067
 * Hash: ad528067
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tad528067 : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 2> snoItems;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
