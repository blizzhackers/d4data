/**
 * Definition: PlayerWarpedMessage
 * Hash: f4857375
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerWarpedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_e012d2b;
  DT_ENUM<DT_INT> eWarpReason;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
