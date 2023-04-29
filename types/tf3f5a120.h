/**
 * Definition: tf3f5a120
 * Hash: f3f5a120
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf3f5a120 : public ComplexRead {
  DT_CSTRING szOnKey;
  DT_INT unk_147ed31;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
