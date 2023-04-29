/**
 * Definition: t3335f1c5
 * Hash: 3335f1c5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3335f1c5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
