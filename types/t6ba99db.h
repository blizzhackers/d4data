/**
 * Definition: t6ba99db
 * Hash: 6ba99db
 */

#pragma once

#include "../types.h"
#include "t80fa280c.h"

#pragma push(pack, 1)

struct t6ba99db : public ComplexRead {
  DT_UINT dwType;
  t80fa280c unk_9b2bc26;
  DT_ENUM<DT_INT> unk_77ed19a;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
