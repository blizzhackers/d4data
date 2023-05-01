/**
 * Definition: te64c779c
 * Hash: e64c779c
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"
#include "te7307a37.h"

#pragma push(pack, 1)

struct te64c779c : public ComplexRead {
  GBIDHeader tHeader;
  DT_VARIABLEARRAY<te7307a37> arRanges;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
