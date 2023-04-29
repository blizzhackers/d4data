/**
 * Definition: tc476c4
 * Hash: c476c4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc476c4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_INT unk_b70ce55;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
