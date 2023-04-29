/**
 * Definition: t4bf73bfd
 * Hash: 4bf73bfd
 */

#pragma once

#include "../types.h"
#include "t642fc25a.h"

#pragma push(pack, 1)

struct t4bf73bfd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  t642fc25a unk_9b2bc26;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
