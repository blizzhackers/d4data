/**
 * Definition: tc5a830ec
 * Hash: c5a830ec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc5a830ec : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
