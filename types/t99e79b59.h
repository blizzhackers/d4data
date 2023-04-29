/**
 * Definition: t99e79b59
 * Hash: 99e79b59
 */

#pragma once

#include "../types.h"
#include "t59787d2.h"

#pragma push(pack, 1)

struct t99e79b59 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t59787d2> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
