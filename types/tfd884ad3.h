/**
 * Definition: tfd884ad3
 * Hash: fd884ad3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfd884ad3 : public ComplexRead {
  DT_WORD startIndex;
  DT_WORD endIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
