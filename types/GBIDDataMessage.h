/**
 * Definition: GBIDDataMessage
 * Hash: 8f51d975
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct GBIDDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_GBID<0xffffffff> gbidData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
