/**
 * Definition: tebca2ccc
 * Hash: ebca2ccc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tebca2ccc : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
