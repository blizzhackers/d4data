/**
 * Definition: FloatingNumberMessage
 * Hash: e3945842
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct FloatingNumberMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annTarget;
  DT_FLOAT flDamage;
  DT_FLOAT unk_d5344c0;
  DT_ENUM<DT_INT> eType;
  DT_OPTIONAL<DT_INT> vImpactPos;
  DT_OPTIONAL<DT_INT> unk_741de7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
