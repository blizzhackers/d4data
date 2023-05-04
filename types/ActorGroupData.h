/**
 * Definition: ActorGroupData
 * Hash: 888e9180
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct ActorGroupData : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
