/**
 * Definition: tbe2f3b4
 * Hash: be2f3b4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tbe2f3b4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT reason;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
