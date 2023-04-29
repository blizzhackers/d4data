/**
 * Definition: t1d865fc7
 * Hash: 1d865fc7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1d865fc7 : public ComplexRead {
  DT_UINT szToken;
  DT_RGBACOLOR rgbaColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
