/**
 * Definition: te562d892
 * Hash: e562d892
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te562d892 : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_9a015a0;
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_7a87372;
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_5611760;
  DT_FLOAT unk_5c74a81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
