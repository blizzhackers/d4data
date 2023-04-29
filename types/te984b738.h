/**
 * Definition: te984b738
 * Hash: e984b738
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te984b738 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_ENUM<DT_INT> eResourceType;
  DT_FLOAT flAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
