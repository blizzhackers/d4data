/**
 * Definition: SharedChildFile
 * Hash: 2070413b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SharedChildFile : public ComplexRead {
  DT_CHARARRAY<50> szMD5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
