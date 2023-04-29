/**
 * Definition: t1e99a7f3
 * Hash: 1e99a7f3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t1e99a7f3 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Item> snoClass;
  DT_SNO<SnoGroup::Item> snoHead;
  DT_SNO<SnoGroup::Item> snoTorso;
  DT_SNO<SnoGroup::Item> snoFeet;
  DT_SNO<SnoGroup::Item> snoHands;
  DT_SNO<SnoGroup::Item> snoLegs;
  DT_INT nArmorSet;
  DT_INT bFemale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
