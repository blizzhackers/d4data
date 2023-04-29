/**
 * Definition: t6526ac45
 * Hash: 6526ac45
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6526ac45 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_12fe198;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
