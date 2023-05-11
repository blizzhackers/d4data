/**
 * Definition: t5887daa1
 * Hash: 5887daa1
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct t5887daa1 : public ComplexRead {
  StringLabelHandleEx unk_52f2d9;
  DT_CSTRING unk_bb31b91;
  DT_CSTRING unk_a1d8ccf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
