/**
 * Definition: t28dfe0dd
 * Hash: 28dfe0dd
 */

#pragma once

#include "../types.h"
#include "VectorPath.h"

#pragma push(pack, 1)

struct t28dfe0dd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_INT unk_d1e17f4;
  VectorPath pathBoxExtents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
