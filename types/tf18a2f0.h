/**
 * Definition: tf18a2f0
 * Hash: f18a2f0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf18a2f0 : public ComplexRead {
  DT_UINT uID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
