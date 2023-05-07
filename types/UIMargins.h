/**
 * Definition: UIMargins
 * Hash: 1de9164f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UIMargins : public ComplexRead {
  DT_FLOAT flLeft;
  DT_FLOAT flTop;
  DT_FLOAT flRight;
  DT_FLOAT flBottom;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
