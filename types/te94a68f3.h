/**
 * Definition: te94a68f3
 * Hash: e94a68f3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te94a68f3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
