/**
 * Definition: te5dc90d3
 * Hash: e5dc90d3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te5dc90d3 : public ComplexRead {
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::HairColor> unk_5395833;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> unk_ba89bb4;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::EyeColor> unk_7be0932;
  DT_INT unk_9363e7a;
  DT_SNO<SnoGroup::Makeup> unk_3657ed3;
  DT_SNO<SnoGroup::MarkingShape> unk_7d2386a;
  DT_SNO<SnoGroup::MarkingColor> unk_6b4b5b8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
