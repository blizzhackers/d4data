/**
 * Definition: StarsSettings
 * Hash: a1e96c7e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StarsSettings : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_1d0c343;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
