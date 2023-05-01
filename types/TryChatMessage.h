/**
 * Definition: TryChatMessage
 * Hash: c434fd44
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct TryChatMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1024> vRMessage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
