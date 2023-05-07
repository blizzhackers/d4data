/**
 * Definition: tc67f3031
 * Hash: c67f3031
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t3940c0fe.h"

#pragma push(pack, 1)

struct tc67f3031 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_853a2ec;
  DT_ENUM<DT_INT> eDamageType;
  DT_ACD_NETWORK_NAME annTarget;
  DT_ACD_NETWORK_NAME annAttacker;
  DT_INT unk_7a2cffa;
  DT_OPTIONAL<DT_INT> eHitSound;
  DT_OPTIONAL<DT_INT> unk_75bd339;
  DT_OPTIONAL<DT_INT> unk_4d7691e;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> unk_5d619c6;
  DT_OPTIONAL<DT_INT> flImpactDirection;
  DT_OPTIONAL<DT_INT> flImpactPitch;
  DT_OPTIONAL<DT_INT> unk_94ab101;
  DT_OPTIONAL<DT_INT> unk_78c21b7;
  DT_OPTIONAL<DT_INT> unk_81caaab;
  DT_OPTIONAL<DT_INT> unk_b1ba550;
  DT_OPTIONAL<DT_INT> unk_563f3e;
  DT_OPTIONAL<DT_INT> unk_d5344c0;
  DT_OPTIONAL<DT_INT> dwEffectFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
