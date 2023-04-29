/**
 * Definition: t41ad8904
 * Hash: 41ad8904
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t41ad8904 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_d3be7ce;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
