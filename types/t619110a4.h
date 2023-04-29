/**
 * Definition: t619110a4
 * Hash: 619110a4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t619110a4 : public ComplexRead {
  DT_INT nIsFemale;
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::Makeup> snoMakeup;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::MarkingColor> snoMarkingColor;
  DT_SNO<SnoGroup::EyeColor> snoEyeColor;
  DT_INT unk_1989dcd;
  DT_SNO<SnoGroup::HairColor> snoHairColor;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> snoFacialHair;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_INT unk_23f8995;
  DT_INT unk_35e41c8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
