/**
 * Definition: HardpointLink
 * Hash: d8f028b7
 */

#pragma once

#include "../types.h"
#include "td8ee97d5.h"

#pragma push(pack, 1)

struct HardpointLink : public ComplexRead {
  td8ee97d5 tInfo;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
