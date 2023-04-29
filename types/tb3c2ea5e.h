/**
 * Definition: tb3c2ea5e
 * Hash: b3c2ea5e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb3c2ea5e : public ComplexRead {
  DT_UINT unk_e38abf;
  DT_ENUM<DT_INT> eTileType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
