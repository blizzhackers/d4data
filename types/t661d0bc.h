/**
 * Definition: t661d0bc
 * Hash: 661d0bc
 */

#pragma once

#include "../types.h"
#include "t80554fed.h"

#pragma push(pack, 1)

struct t661d0bc : public ComplexRead {
  DT_UINT dwType;
  t80554fed unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
