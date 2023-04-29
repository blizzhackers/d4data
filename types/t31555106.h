/**
 * Definition: t31555106
 * Hash: 31555106
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t31555106 : public ComplexRead {
  DT_STRING_FORMULA tDuration;
  DT_INT unk_bb865d0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
