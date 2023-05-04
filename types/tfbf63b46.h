/**
 * Definition: tfbf63b46
 * Hash: fbf63b46
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfbf63b46 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_GBID<0x1c> gbidHiddenCache;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
