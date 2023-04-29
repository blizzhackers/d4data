/**
 * Definition: t4ad15c6
 * Hash: 4ad15c6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4ad15c6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FLOAT unk_f898967;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
