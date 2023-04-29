/**
 * Definition: UInt64DataMessage
 * Hash: 4bfb2029
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct UInt64DataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 uData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
