/**
 * Definition: ACDTranslateAckMessage
 * Hash: a41317ca
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateAckMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uAckValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
