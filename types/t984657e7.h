/**
 * Definition: t984657e7
 * Hash: 984657e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t984657e7 : public ComplexRead {
  DT_ENUM<DT_INT> eStat;
  DT_INT nAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
