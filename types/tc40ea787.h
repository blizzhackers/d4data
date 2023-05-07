/**
 * Definition: tc40ea787
 * Hash: c40ea787
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc40ea787 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_853a2ec;
  DT_ENUM<DT_INT> eDamageType;
  DT_ACD_NETWORK_NAME annTarget;
  DT_ACD_NETWORK_NAME annAttacker;
  DT_FLOAT unk_1c7ccc9;
  DT_INT unk_7a2cffa;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> unk_5d619c6;
  DT_OPTIONAL<DT_INT> flImpactDirection;
  DT_OPTIONAL<DT_INT> flImpactPitch;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
