/**
 * Definition: SimpleRequest
 * Hash: 5331e973
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct SimpleRequest : public ComplexRead {
  t72bd65f8 tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
