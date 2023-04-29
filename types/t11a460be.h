/**
 * Definition: t11a460be
 * Hash: 11a460be
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t11a460be : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
