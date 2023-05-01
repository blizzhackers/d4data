/**
 * Definition: t59787d2
 * Hash: 59787d2
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct t59787d2 : public ComplexRead {
  GBIDHeader tHeader;
  DT_INT bIsUnique;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
