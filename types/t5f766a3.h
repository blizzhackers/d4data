/**
 * Definition: t5f766a3
 * Hash: 5f766a3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5f766a3 : public ComplexRead {
  DT_UINT szName;
  DT_CSTRING szData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
