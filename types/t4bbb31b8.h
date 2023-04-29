/**
 * Definition: t4bbb31b8
 * Hash: 4bbb31b8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4bbb31b8 : public ComplexRead {
  DT_CSTRING szValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
