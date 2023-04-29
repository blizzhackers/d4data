/**
 * Definition: DWordDataMessage
 * Hash: 40d5185f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DWordDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
