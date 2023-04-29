/**
 * Definition: t6f6158b5
 * Hash: 6f6158b5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6f6158b5 : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
