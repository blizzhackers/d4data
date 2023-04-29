/**
 * Definition: tbdef6175
 * Hash: bdef6175
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbdef6175 : public ComplexRead {
  DT_INT unk_c6ddf2d;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Actor>, 10> snoActor;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Actor>, 10> snoActor2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
