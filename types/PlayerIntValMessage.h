/**
 * Definition: PlayerIntValMessage
 * Hash: 4b723c80
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerIntValMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_INT nVal;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
