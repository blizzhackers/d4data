/**
 * Definition: t5a26a83e
 * Hash: 5a26a83e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t5a26a83e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::PlayerClass> snoClass;
  DT_SNO<SnoGroup::FacialHair> unk_ba89bb4;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_INT bFemale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
