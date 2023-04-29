/**
 * Definition: t49b186af
 * Hash: 49b186af
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t49b186af : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
