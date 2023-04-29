/**
 * Definition: ActorLookOverrideChangedMessage
 * Hash: cac8bfdd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ActorLookOverrideChangedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT nChange;
  DT_UINT nLookOverrideHash;
  DT_INT unk_80b4365;
  DT_INT unk_1b57083;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
