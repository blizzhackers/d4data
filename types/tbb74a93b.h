/**
 * Definition: tbb74a93b
 * Hash: bb74a93b
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct tbb74a93b : public ComplexRead {
  GBIDHeader tHeader;
  DT_INT unk_b604ea1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
