/**
 * Definition: IncludePath
 * Hash: 9ad26651
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IncludePath : public ComplexRead {
  DT_CSTRING szPath;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
