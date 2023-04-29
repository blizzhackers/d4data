/**
 * Definition: tc5a97f53
 * Hash: c5a97f53
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc5a97f53 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eGender;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
