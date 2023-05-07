/**
 * Definition: tc06f4ebf
 * Hash: c06f4ebf
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc06f4ebf : public ComplexRead {
  DT_CSTRING szTreeScrollbar;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
