/**
 * Definition: tba69c62c
 * Hash: ba69c62c
 */

#pragma once

#include "../types.h"
#include "t56bf0569.h"

#pragma push(pack, 1)

struct tba69c62c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t56bf0569> unk_9af876f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
