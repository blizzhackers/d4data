/**
 * Definition: t8552b0bd
 * Hash: 8552b0bd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8552b0bd : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
