/**
 * Definition: t679d7816
 * Hash: 679d7816
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t679d7816 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
