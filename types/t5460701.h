/**
 * Definition: t5460701
 * Hash: 5460701
 */

#pragma once

#include "../types.h"
#include "t7bd3842a.h"

#pragma push(pack, 1)

struct t5460701 : public ComplexRead {
  t7bd3842a unk_68dec9e;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::SoundTable>, 4> unk_f77a839;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
