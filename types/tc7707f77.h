/**
 * Definition: tc7707f77
 * Hash: c7707f77
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc7707f77 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nCrafterType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
