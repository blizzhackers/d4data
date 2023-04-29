/**
 * Definition: teb33110a
 * Hash: eb33110a
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct teb33110a : public ComplexRead {
  t72bd65f8 tHeader;
  DT_WORD uBlobSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
