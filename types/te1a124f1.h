/**
 * Definition: te1a124f1
 * Hash: e1a124f1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te1a124f1 : public ComplexRead {
  DT_UINT szBoneName;
  DT_FLOAT unk_fc40f9b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
