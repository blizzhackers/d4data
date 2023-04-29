/**
 * Definition: t20e37537
 * Hash: 20e37537
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t20e37537 : public ComplexRead {
  DT_STRING_FORMULA tFormula;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
