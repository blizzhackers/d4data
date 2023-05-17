/**
 * Definition: t21df8be8
 * Hash: 21df8be8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t21df8be8 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bComplete;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
