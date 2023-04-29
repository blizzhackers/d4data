/**
 * Definition: TrySalvageAllMessage
 * Hash: 9cb6d40
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct TrySalvageAllMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eSalvageType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
