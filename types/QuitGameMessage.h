/**
 * Definition: QuitGameMessage
 * Hash: e920aca2
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct QuitGameMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eReason;
  DT_OPTIONAL<DT_INT> dwLastHeartbeat;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
