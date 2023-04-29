/**
 * Definition: RitualTetherEffectMessage
 * Hash: f6b178f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct RitualTetherEffectMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annFrom;
  SharedServerWorldPlace tPlaceDest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
