/**
 * Definition: tc59b18df
 * Hash: c59b18df
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc59b18df : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT vote;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
