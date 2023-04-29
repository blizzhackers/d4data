/**
 * Definition: t2fb814f6
 * Hash: 2fb814f6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2fb814f6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_99e9721;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
