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
  DT_SNO<SnoGroup::Makeup> unk_3657ed3;
  DT_SNO<SnoGroup::MarkingShape> unk_7d2386a;
  DT_SNO<SnoGroup::MarkingColor> unk_6b4b5b8;
  DT_SNO<SnoGroup::EyeColor> unk_7be0932;
  DT_INT unk_1989dcd;
  DT_SNO<SnoGroup::HairColor> unk_5395833;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> unk_ba89bb4;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_INT unk_23f8995;
  DT_INT unk_35e41c8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
