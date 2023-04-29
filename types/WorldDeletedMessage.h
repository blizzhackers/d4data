/**
 * Definition: WorldDeletedMessage
 * Hash: 29d08b04
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct WorldDeletedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
