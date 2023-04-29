/**
 * Definition: t97a9c2d4
 * Hash: 97a9c2d4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t97a9c2d4 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eRarity;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
