/**
 * Definition: BuffExclusiveType
 * Hash: c42da49d
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct BuffExclusiveType : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
