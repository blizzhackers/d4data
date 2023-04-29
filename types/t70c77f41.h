/**
 * Definition: t70c77f41
 * Hash: 70c77f41
 */

#pragma once

#include "../types.h"
#include "t8c33d728.h"

#pragma push(pack, 1)

struct t70c77f41 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CSTRING szName;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_INT unk_d6d0056;
  DT_ENUM<DT_INT> eGender;
  DT_ENUM<DT_INT> eClass;
  DT_SNO<SnoGroup::Face> snoFace;
  DT_SNO<SnoGroup::HairColor> snoHairColor;
  DT_SNO<SnoGroup::HairStyle> snoHairStyle;
  DT_SNO<SnoGroup::FacialHair> snoFacialHair;
  DT_CSTRING unk_cd15187;
  DT_SNO<SnoGroup::EyeColor> snoEyeColor;
  DT_SNO<SnoGroup::Makeup> snoMakeup;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::MarkingColor> snoMarkingColor;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_FIXEDARRAY<t8c33d728, 5> arrItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 7> unk_87a6362;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 1> unk_aff169e;
  DT_CSTRING unk_b1142bf;
  DT_SNO<SnoGroup::Animation> unk_d675dd5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
