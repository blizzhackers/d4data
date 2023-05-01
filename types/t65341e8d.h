/**
 * Definition: t65341e8d
 * Hash: 65341e8d
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"
#include "t674e5442.h"

#pragma push(pack, 1)

struct t65341e8d : public ComplexRead {
  GBIDHeader tHeader;
  DT_VARIABLEARRAY<t674e5442> unk_766f08;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
