/**
 * Definition: t72bd65f8
 * Hash: 72bd65f8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t72bd65f8 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uToken;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
