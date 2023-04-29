/**
 * Definition: t8e0085
 * Hash: 8e0085
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8e0085 : public ComplexRead {
  DT_ENUM<DT_INT> eVBFormat;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
