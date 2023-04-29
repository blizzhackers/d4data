/**
 * Definition: taa55cd98
 * Hash: aa55cd98
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taa55cd98 : public ComplexRead {
  DT_CSTRING szData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
