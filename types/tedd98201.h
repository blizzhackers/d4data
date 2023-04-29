/**
 * Definition: tedd98201
 * Hash: edd98201
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tedd98201 : public ComplexRead {
  DT_UINT value;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
