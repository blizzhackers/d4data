/**
 * Definition: ChatMessage
 * Hash: d7c8b625
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ChatMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_CHARARRAY<1024> usMessage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
