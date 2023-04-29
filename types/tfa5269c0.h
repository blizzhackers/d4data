/**
 * Definition: tfa5269c0
 * Hash: fa5269c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfa5269c0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
