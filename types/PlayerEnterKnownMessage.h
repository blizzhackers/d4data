/**
 * Definition: PlayerEnterKnownMessage
 * Hash: a59591dd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerEnterKnownMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_ACD_NETWORK_NAME ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
