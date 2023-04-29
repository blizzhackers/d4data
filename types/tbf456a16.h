/**
 * Definition: tbf456a16
 * Hash: bf456a16
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbf456a16 : public ComplexRead {
  DT_INT nIndexOffset;
  DT_INT nIndexCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
