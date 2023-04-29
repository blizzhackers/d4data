/**
 * Definition: tc4e63b1f
 * Hash: c4e63b1f
 */

#pragma once

#include "../types.h"
#include "t46a557e9.h"

#pragma push(pack, 1)

struct tc4e63b1f : public ComplexRead {
  DT_UINT tName;
  DT_GBID<0x17> gbidType;
  DT_STRING_FORMULA tMax;
  t46a557e9 tHealth;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
