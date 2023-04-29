/**
 * Definition: t7bd3842a
 * Hash: 7bd3842a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7bd3842a : public ComplexRead {
  DT_UINT szTag;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
