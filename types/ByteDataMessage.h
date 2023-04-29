/**
 * Definition: ByteDataMessage
 * Hash: be0eb873
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ByteDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_BYTE bData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
