/**
 * Definition: td0a8fb7f
 * Hash: d0a8fb7f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td0a8fb7f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nPlayers;
  DT_FIXEDARRAY<DT_UINT, 4> unk_52e2a15;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
