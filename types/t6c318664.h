/**
 * Definition: t6c318664
 * Hash: 6c318664
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6c318664 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eSoundType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
