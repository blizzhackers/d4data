/**
 * Definition: ta0b28844
 * Hash: a0b28844
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t4f086626.h"

#pragma push(pack, 1)

struct ta0b28844 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<t4f086626, 64> arUpdates;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
