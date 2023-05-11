/**
 * Definition: t95027776
 * Hash: 95027776
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t95027776 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
