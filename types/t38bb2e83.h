/**
 * Definition: t38bb2e83
 * Hash: 38bb2e83
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "td8ee97d5.h"

#pragma push(pack, 1)

struct t38bb2e83 : public ComplexRead {
  td8ee97d5 tInfo;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
