/**
 * Definition: tcd121122
 * Hash: cd121122
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcd121122 : public ComplexRead {
  DT_FLOAT unk_8854fb0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
