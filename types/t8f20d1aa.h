/**
 * Definition: t8f20d1aa
 * Hash: 8f20d1aa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8f20d1aa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
