/**
 * Definition: t144b834d
 * Hash: 144b834d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t144b834d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<16> szGroupType;
  DT_SNO<SnoGroup::Actor> snoMonster;
  DT_SNO<SnoGroup::Power> snoSkill;
  DT_UINT uCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
