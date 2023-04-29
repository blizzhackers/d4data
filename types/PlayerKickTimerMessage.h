/**
 * Definition: PlayerKickTimerMessage
 * Hash: b09c9475
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerKickTimerMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwLastKickAttempt;
  DT_UINT dwLastSuccessfulKick;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
