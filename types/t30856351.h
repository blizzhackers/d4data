/**
 * Definition: t30856351
 * Hash: 30856351
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t30856351 : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> unk_531e646;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
