/**
 * Definition: t4a900441
 * Hash: 4a900441
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4a900441 : public ComplexRead {
  DT_FLOAT unk_f4522ab;
  DT_FLOAT unk_d494c2d;
  DT_FLOAT flAmplitudeRatio;
  DT_FLOAT unk_12070ce;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
