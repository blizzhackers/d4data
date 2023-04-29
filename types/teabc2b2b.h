/**
 * Definition: teabc2b2b
 * Hash: eabc2b2b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct teabc2b2b : public ComplexRead {
  DT_BYTE twinOffset;
  DT_BYTE tail;
  DT_BYTE left;
  DT_BYTE next;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
