/**
 * Definition: PlayerACDInfo
 * Hash: 3cb27fa1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlayerACDInfo : public ComplexRead {
  DT_INT fFemale;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_INT unk_9363e7a;
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::Makeup> snoMakeup;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::MarkingColor> snoMarkingColor;
  DT_SNO<SnoGroup::HairColor> snoHairColor;
  DT_SNO<SnoGroup::EyeColor> snoEyeColor;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> snoFacialHair;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::Actor> snoMount;
  DT_SNO<SnoGroup::Actor> snoHeadstone;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 18> snoItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Power>, 128> snoPowers;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Power>, 24> unk_dedd90a;
  DT_FIXEDARRAY<DT_SNO_NAME, 16> unk_d96f751;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
