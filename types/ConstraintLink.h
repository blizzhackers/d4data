/**
 * Definition: ConstraintLink
 * Hash: b1fa7373
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConstraintLink : public ComplexRead {
  DT_UINT dwHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
