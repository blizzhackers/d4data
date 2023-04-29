/**
 * Definition: tbd384884
 * Hash: bd384884
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbd384884 : public ComplexRead {
  DT_UINT dwValue;
  DT_CSTRING unk_e1df903;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
