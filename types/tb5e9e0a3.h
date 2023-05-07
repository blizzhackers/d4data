/**
 * Definition: tb5e9e0a3
 * Hash: b5e9e0a3
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct tb5e9e0a3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eFacing;
  DT_FLOAT aCone;
  tcbfdd2ea pathRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
