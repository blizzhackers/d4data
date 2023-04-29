/**
 * Definition: t87385a6d
 * Hash: 87385a6d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t87385a6d : public ComplexRead {
  DT_CSTRING szTarget;
  DT_POLYMORPHIC_VARIABLEARRAY unk_897d99b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
