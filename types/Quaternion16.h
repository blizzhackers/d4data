/**
 * Definition: Quaternion16
 * Hash: 466dd9ad
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Quaternion16 : public ComplexRead {
  DT_WORD x;
  DT_WORD y;
  DT_WORD z;
  DT_WORD w;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
