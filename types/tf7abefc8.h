/**
 * Definition: tf7abefc8
 * Hash: f7abefc8
 */

#pragma once

#include "../types.h"
#include "t340f2b52.h"

#pragma push(pack, 1)

struct tf7abefc8 : public ComplexRead {
  DT_UINT dwType;
  t340f2b52 unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
