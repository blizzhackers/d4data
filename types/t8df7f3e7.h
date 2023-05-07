/**
 * Definition: t8df7f3e7
 * Hash: 8df7f3e7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t8df7f3e7 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT isDungeon;
  DT_INT unk_70b9617;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
