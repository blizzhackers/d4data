/**
 * Definition: tf6b21430
 * Hash: f6b21430
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf6b21430 : public ComplexRead {
  DT_INT unk_c63f49e;
  DT_UINT unk_a2d382e;
  DT_STRING_FORMULA tSlowAmount;
  DT_STRING_FORMULA tChillAmount;
  DT_STRING_FORMULA unk_c7e1888;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
