/**
 * Definition: FacialHairDefinition
 * Hash: 9ee0974d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FacialHairDefinition : public ComplexRead {
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_SNO<SnoGroup::Material> unk_259d5a4;
  DT_SNO<SnoGroup::Material> unk_259d59d;
  DT_INT unk_2ab2122;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
