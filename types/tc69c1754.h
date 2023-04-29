/**
 * Definition: tc69c1754
 * Hash: c69c1754
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc69c1754 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<350> szText;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
