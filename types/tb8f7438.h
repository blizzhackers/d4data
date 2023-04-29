/**
 * Definition: tb8f7438
 * Hash: b8f7438
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct tb8f7438 : public ComplexRead {
  t72bd65f8 tHeader;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT64 unk_2d67281;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
