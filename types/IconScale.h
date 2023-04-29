/**
 * Definition: IconScale
 * Hash: fc1f3f71
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IconScale : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_19dc976;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
