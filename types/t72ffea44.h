/**
 * Definition: t72ffea44
 * Hash: 72ffea44
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t72ffea44 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_FIXEDARRAY<DT_GBID<0x7>, 2> pRareNameGBIDs;
  DT_ENUM<DT_INT> eRarity;
  DT_INT unk_eb56f11;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
