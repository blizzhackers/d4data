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
  DT_SNO<SnoGroup::MarkingShape> unk_7d2386a;
  DT_SNO<SnoGroup::MarkingColor> unk_6b4b5b8;
  DT_SNO<SnoGroup::Jewelry> snoJewelry;
  DT_SNO<SnoGroup::Makeup> unk_3657ed3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
