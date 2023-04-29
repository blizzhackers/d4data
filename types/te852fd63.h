/**
 * Definition: te852fd63
 * Hash: e852fd63
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te852fd63 : public ComplexRead {
  DT_FLOAT flTime;
  DT_FLOAT flValue;
  DT_VECTOR2D unk_5fd7226;
  DT_VECTOR2D unk_f044887;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
