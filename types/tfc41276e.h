/**
 * Definition: tfc41276e
 * Hash: fc41276e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfc41276e : public ComplexRead {
  DT_UINT szName;
  DT_TAGMAP<DT_INT> unk_fd93db3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
