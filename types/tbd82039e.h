/**
 * Definition: tbd82039e
 * Hash: bd82039e
 */

#pragma once

#include "../types.h"
#include "t4824e5e3.h"

#pragma push(pack, 1)

struct tbd82039e : public ComplexRead {
  DT_UINT tKey;
  DT_ENUM<DT_INT> unk_e1da18d;
  DT_POLYMORPHIC_VARIABLEARRAY unk_67545b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
