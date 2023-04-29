/**
 * Definition: tba05ef94
 * Hash: ba05ef94
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tba05ef94 : public ComplexRead {
  ta78f399f tHeader;
  DT_ENUM<DT_INT> eType;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT szPowerMod;
  DT_UINT dwMaxTalentRanks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
