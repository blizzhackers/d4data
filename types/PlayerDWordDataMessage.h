/**
 * Definition: PlayerDWordDataMessage
 * Hash: 8dfb1c0c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerDWordDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwData;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
