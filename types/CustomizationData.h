/**
 * Definition: CustomizationData
 * Hash: e5dc90d3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CustomizationData : public ComplexRead {
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::HairColor> snoHairColor;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> snoFacialHair;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::EyeColor> snoEyeColor;
  DT_INT unk_9363e7a;
  DT_SNO<SnoGroup::Makeup> snoMakeup;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::MarkingColor> snoMarkingColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
