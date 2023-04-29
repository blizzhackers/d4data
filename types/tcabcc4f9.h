/**
 * Definition: tcabcc4f9
 * Hash: cabcc4f9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcabcc4f9 : public ComplexRead {
  DT_FLOAT flTime;
  DT_FLOAT flScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
