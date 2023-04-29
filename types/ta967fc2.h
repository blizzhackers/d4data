/**
 * Definition: ta967fc2
 * Hash: a967fc2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta967fc2 : public ComplexRead {
  DT_GBID<0x1c> unk_65f1ff6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
