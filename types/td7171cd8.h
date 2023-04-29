/**
 * Definition: td7171cd8
 * Hash: d7171cd8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td7171cd8 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
