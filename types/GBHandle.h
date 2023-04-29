/**
 * Definition: GBHandle
 * Hash: dd273b5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GBHandle : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_GBID<0xffffffff> gbid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
