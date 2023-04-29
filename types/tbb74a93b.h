/**
 * Definition: tbb74a93b
 * Hash: bb74a93b
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tbb74a93b : public ComplexRead {
  ta78f399f tHeader;
  DT_INT unk_b604ea1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
