/**
 * Definition: SNONameDataMessage
 * Hash: 5fbfd150
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct SNONameDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO_NAME snoName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
