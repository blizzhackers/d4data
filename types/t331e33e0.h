/**
 * Definition: t331e33e0
 * Hash: 331e33e0
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t331e33e0 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bEquipped;
  DT_INT bBackpack;
  DT_INT bStash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
