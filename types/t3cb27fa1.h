/**
 * Definition: t3cb27fa1
 * Hash: 3cb27fa1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3cb27fa1 : public ComplexRead {
  DT_INT fFemale;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::Makeup> unk_3657ed3;
  DT_SNO<SnoGroup::MarkingShape> unk_7d2386a;
  DT_SNO<SnoGroup::MarkingColor> unk_6b4b5b8;
  DT_SNO<SnoGroup::HairColor> unk_5395833;
  DT_SNO<SnoGroup::EyeColor> unk_7be0932;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> unk_ba89bb4;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::Actor> snoMount;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 18> snoItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Power>, 128> snoPowers;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Power>, 24> unk_dedd90a;
  DT_FIXEDARRAY<DT_SNO_NAME, 16> unk_d96f751;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
