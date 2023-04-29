/**
 * Definition: t79b4d566
 * Hash: 79b4d566
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t79b4d566 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
