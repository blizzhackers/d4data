/**
 * Definition: t37227e2
 * Hash: 37227e2
 */

#pragma once

#include "../types.h"
#include "t80554fed.h"

#pragma push(pack, 1)

struct t37227e2 : public ComplexRead {
  DT_UINT dwType;
  t80554fed unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
