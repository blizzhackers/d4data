/**
 * Definition: t56c52df
 * Hash: 56c52df
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t56c52df : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_7a9ffba;
  DT_ACD_NETWORK_NAME annAttacker;
  DT_OPTIONAL<DT_INT> unk_5692531;
  DT_OPTIONAL<DT_INT> unk_5d619c6;
  DT_OPTIONAL<DT_INT> flImpactDirection;
  DT_OPTIONAL<DT_INT> flImpactPitch;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
