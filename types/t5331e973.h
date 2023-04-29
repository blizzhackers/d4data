/**
 * Definition: t5331e973
 * Hash: 5331e973
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct t5331e973 : public ComplexRead {
  t72bd65f8 tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
