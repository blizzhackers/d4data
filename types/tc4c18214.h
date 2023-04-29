/**
 * Definition: tc4c18214
 * Hash: c4c18214
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc4c18214 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> szCheat;
  DT_INT unk_d57d005;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
