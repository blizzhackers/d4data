/**
 * Definition: t8ecd4f58
 * Hash: 8ecd4f58
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8ecd4f58 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
