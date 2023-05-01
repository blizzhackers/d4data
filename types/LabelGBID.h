/**
 * Definition: LabelGBID
 * Hash: 8511e6b6
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct LabelGBID : public ComplexRead {
  GBIDHeader tHeader;
  DT_INT nIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
