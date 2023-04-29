/**
 * Definition: tc5e0c95f
 * Hash: c5e0c95f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc5e0c95f : public ComplexRead {
  DT_UINT dwMinLevel;
  DT_UINT dwMaxLevel;
  DT_ENUM<DT_INT> unk_99e9721;
  DT_UINT unk_d7c9b5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
