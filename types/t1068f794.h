/**
 * Definition: t1068f794
 * Hash: 1068f794
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1068f794 : public ComplexRead {
  DT_UINT nDeltaXP;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
