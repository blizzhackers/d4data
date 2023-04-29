/**
 * Definition: t2dd9d297
 * Hash: 2dd9d297
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2dd9d297 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 unk_8a6cb1e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
