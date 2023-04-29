/**
 * Definition: tf5735f03
 * Hash: f5735f03
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tf5735f03 : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
