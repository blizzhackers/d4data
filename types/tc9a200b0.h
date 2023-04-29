/**
 * Definition: tc9a200b0
 * Hash: c9a200b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc9a200b0 : public ComplexRead {
  DT_FLOAT flTime;
  DT_RGBACOLOR rgbaColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
