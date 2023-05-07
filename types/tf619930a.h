/**
 * Definition: tf619930a
 * Hash: f619930a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf619930a : public ComplexRead {
  DT_FLOAT flFirstWeight;
  DT_FLOAT unk_574d429;
  DT_FLOAT flLastWeight;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
