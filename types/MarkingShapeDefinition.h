/**
 * Definition: MarkingShapeDefinition
 * Hash: 94e6db83
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkingShapeDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eClassRestriction;
  DT_FLOAT unk_3dcf566;
  DT_UINT hIconImage;
  DT_SNO<SnoGroup::Texture> unk_5bc5f2b;
  DT_SNO<SnoGroup::Texture> unk_5ba696a;
  DT_SNO<SnoGroup::MarkingColor> snoDefaultColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
