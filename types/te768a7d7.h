/**
 * Definition: te768a7d7
 * Hash: e768a7d7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te768a7d7 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
