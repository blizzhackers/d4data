/**
 * Definition: t6c5b85fd
 * Hash: 6c5b85fd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6c5b85fd : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwNodeIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
