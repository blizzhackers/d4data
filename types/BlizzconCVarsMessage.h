/**
 * Definition: BlizzconCVarsMessage
 * Hash: e3dcac2f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct BlizzconCVarsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bMultiplayerEnabled;
  DT_INT bDHunterEnabled;
  DT_INT bBlizzconDropEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
