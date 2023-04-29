/**
 * Definition: t78fcb58d
 * Hash: 78fcb58d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t78fcb58d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1000> szLogString;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
