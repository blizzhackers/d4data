/**
 * Definition: Subcondition
 * Hash: df741cd1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Subcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
