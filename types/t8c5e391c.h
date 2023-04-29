/**
 * Definition: t8c5e391c
 * Hash: 8c5e391c
 */

#pragma once

#include "../types.h"
#include "tab2d8e94.h"

#pragma push(pack, 1)

struct t8c5e391c : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  tab2d8e94 tPair;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
