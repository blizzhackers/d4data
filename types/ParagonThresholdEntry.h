/**
 * Definition: ParagonThresholdEntry
 * Hash: 456084a7
 */

#pragma once

#include "../types.h"
#include "tdcc8652e.h"

#pragma push(pack, 1)

struct ParagonThresholdEntry : public ComplexRead {
  tdcc8652e unk_72f7a95;
  DT_STRING_FORMULA unk_ba3334;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
