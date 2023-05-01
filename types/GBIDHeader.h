/**
 * Definition: GBIDHeader
 * Hash: a78f399f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GBIDHeader : public ComplexRead {
  DT_CHARARRAY<256> szName;
  DT_GBID<0xffffffff> gbid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
