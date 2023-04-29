/**
 * Definition: t5b95dd21
 * Hash: 5b95dd21
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5b95dd21 : public ComplexRead {
  DT_ENUM<DT_INT> eSemantic;
  DT_ENUM<DT_INT> eFormat;
  DT_INT nOffset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
