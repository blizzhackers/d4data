/**
 * Definition: tfcf32328
 * Hash: fcf32328
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfcf32328 : public ComplexRead {
  DT_CSTRING unk_4245cbb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
