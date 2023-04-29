/**
 * Definition: t77aada63
 * Hash: 77aada63
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t77aada63 : public ComplexRead {
  DT_FLOAT tValueMin;
  DT_FLOAT tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
