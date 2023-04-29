/**
 * Definition: GameSetupMessage
 * Hash: d1d5be50
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct GameSetupMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwFirstHeartbeat;
  DT_INT64 unk_35f9686;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
