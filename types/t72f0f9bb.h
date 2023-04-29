/**
 * Definition: t72f0f9bb
 * Hash: 72f0f9bb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t72f0f9bb : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::MarkingShape> snoMarkingShape;
  DT_SNO<SnoGroup::MarkingColor> snoMarkingColor;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::Makeup> snoMakeup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
