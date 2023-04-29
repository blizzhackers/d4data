/**
 * Definition: LookLink
 * Hash: 8eb3e043
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LookLink : public ComplexRead {
  DT_UINT dwLookHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
