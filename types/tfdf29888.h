/**
 * Definition: tfdf29888
 * Hash: fdf29888
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfdf29888 : public ComplexRead {
  DT_BYTE dwHeight;
  DT_UINT snoSurface;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
