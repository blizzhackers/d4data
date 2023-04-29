/**
 * Definition: t169210d9
 * Hash: 169210d9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t169210d9 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
