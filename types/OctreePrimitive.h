/**
 * Definition: OctreePrimitive
 * Hash: 7ad69b7b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct OctreePrimitive : public ComplexRead {
  DT_INT64 uUserData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
