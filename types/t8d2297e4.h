/**
 * Definition: t8d2297e4
 * Hash: 8d2297e4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8d2297e4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Dye>> unk_4ec0ab2;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Face>> unk_ffbac0;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::HairStyle>> unk_ea1a6c6;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::FacialHair>> unk_29196f5;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::HairColor>> unk_ce00a34;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MarkingShape>> unk_4f6f7ab;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MarkingColor>> unk_299b139;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Jewelry>> unk_4dd0653;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::EyeColor>> unk_71d6df3;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Makeup>> unk_c3897b4;
  DT_SNO<SnoGroup::Face> unk_730d00f;
  DT_SNO<SnoGroup::HairStyle> unk_4792ef5;
  DT_SNO<SnoGroup::HairColor> unk_354b223;
  DT_SNO<SnoGroup::EyeColor> unk_1dde522;
  DT_SNO<SnoGroup::MarkingColor> unk_44109a8;
  DT_UINT nLastAllocatedRewardId;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
