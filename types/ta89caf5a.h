/**
 * Definition: ta89caf5a
 * Hash: a89caf5a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta89caf5a : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwNodeIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
