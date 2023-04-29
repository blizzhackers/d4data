/**
 * Definition: tcedf8981
 * Hash: cedf8981
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcedf8981 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
