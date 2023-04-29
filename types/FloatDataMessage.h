/**
 * Definition: FloatDataMessage
 * Hash: 88019975
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct FloatDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FLOAT flData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
