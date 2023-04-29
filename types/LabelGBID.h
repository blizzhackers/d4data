/**
 * Definition: LabelGBID
 * Hash: 8511e6b6
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct LabelGBID : public ComplexRead {
  ta78f399f tHeader;
  DT_INT nIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
