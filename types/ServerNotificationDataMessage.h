/**
 * Definition: ServerNotificationDataMessage
 * Hash: 33421fbd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ServerNotificationDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uSec;
  DT_ENUM<DT_INT> eType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
