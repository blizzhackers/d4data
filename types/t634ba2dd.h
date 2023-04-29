/**
 * Definition: t634ba2dd
 * Hash: 634ba2dd
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t634ba2dd : public ComplexRead {
  DT_SNO<SnoGroup::AnimSet> snoAnimSet;
  DT_FIXEDARRAY<tb42131c6, 31> unk_aa12873;
  DT_FIXEDARRAY<tb42131c6, 31> unk_781e07e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
