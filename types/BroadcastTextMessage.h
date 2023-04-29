/**
 * Definition: BroadcastTextMessage
 * Hash: 9431c83d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct BroadcastTextMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1024> szMsg;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
