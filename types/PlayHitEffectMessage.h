/**
 * Definition: PlayHitEffectMessage
 * Hash: 1dfc9c2d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayHitEffectMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ACD_NETWORK_NAME annAttacker;
  DT_ENUM<DT_INT> eDamageType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
