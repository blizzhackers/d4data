/**
 * Definition: tbb29c0
 * Hash: bb29c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbb29c0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
