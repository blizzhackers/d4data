/**
 * Definition: VoteKickMessage
 * Hash: 734d58c5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct VoteKickMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_390da21;
  DT_UINT unk_1d54bcc;
  DT_CHARARRAY<1024> vRMessage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
