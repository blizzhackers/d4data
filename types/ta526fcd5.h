/**
 * Definition: ta526fcd5
 * Hash: a526fcd5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta526fcd5 : public ComplexRead {
  DT_UINT unk_5170dee;
  DT_INT unk_b0ff7b8;
  DT_INT unk_d39db42;
  DT_UINT dwValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
