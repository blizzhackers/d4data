/**
 * Definition: t4174a154
 * Hash: 4174a154
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct t4174a154 : public ComplexRead {
  tf18a2f0 unk_322049a;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
