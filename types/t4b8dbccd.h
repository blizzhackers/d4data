/**
 * Definition: t4b8dbccd
 * Hash: 4b8dbccd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4b8dbccd : public ComplexRead {
  DT_FLOAT flNoSpawnRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
