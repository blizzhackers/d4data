/**
 * Definition: t63351fa4
 * Hash: 63351fa4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t63351fa4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_2883a68;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
