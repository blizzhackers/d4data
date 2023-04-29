/**
 * Definition: ta78f399f
 * Hash: a78f399f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta78f399f : public ComplexRead {
  DT_CHARARRAY<256> szName;
  DT_GBID<0xffffffff> gbid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
