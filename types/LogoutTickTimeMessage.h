/**
 * Definition: LogoutTickTimeMessage
 * Hash: fb2e5d79
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct LogoutTickTimeMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eContext;
  DT_UINT uMinWaitTicks;
  DT_UINT uMaxWaitTicks;
  DT_UINT uKickTicks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
