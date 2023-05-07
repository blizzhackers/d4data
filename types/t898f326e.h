/**
 * Definition: t898f326e
 * Hash: 898f326e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t898f326e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> szMarkerName;
  DT_CHARARRAY<16> szGroupType;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::Actor> snoMonster;
  DT_SNO<SnoGroup::MonsterAffix> snoAffix;
  DT_UINT uCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
