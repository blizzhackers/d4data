/**
 * Definition: tdca4dec2
 * Hash: dca4dec2
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct tdca4dec2 : public ComplexRead {
  DT_UINT szName;
  tcbfdd2ea unk_465327d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
