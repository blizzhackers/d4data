/**
 * Definition: t288a8c0b
 * Hash: 288a8c0b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "te5dc90d3.h"

#pragma push(pack, 1)

struct t288a8c0b : public ComplexRead {
  RequiredMessageHeader tHeader;
  te5dc90d3 unk_7e407c7;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
