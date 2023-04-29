/**
 * Definition: t97f642a2
 * Hash: 97f642a2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t97f642a2 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT uProfileAwardId;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
