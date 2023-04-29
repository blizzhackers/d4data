/**
 * Definition: t95702077
 * Hash: 95702077
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t95702077 : public ComplexRead {
  DT_ENUM<DT_INT> unk_f2e7542;
  DT_FLOAT unk_50ce6c8;
  DT_ENUM<DT_INT> unk_14b5ec9;
  DT_UINT unk_aae71b4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
