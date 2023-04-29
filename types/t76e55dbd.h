/**
 * Definition: t76e55dbd
 * Hash: 76e55dbd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t76e55dbd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
