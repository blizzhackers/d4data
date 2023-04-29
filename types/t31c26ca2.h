/**
 * Definition: t31c26ca2
 * Hash: 31c26ca2
 */

#pragma once

#include "../types.h"
#include "t41b30aab.h"

#pragma push(pack, 1)

struct t31c26ca2 : public ComplexRead {
  DT_VECTOR4D value;
  DT_INT unk_b5a2c78;
  t41b30aab unk_411da82;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
