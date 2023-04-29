/**
 * Definition: t4bfa20cf
 * Hash: 4bfa20cf
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4bfa20cf : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nType;
  DT_FIXEDARRAY<DT_INT, 2> arParams;
  DT_INT nDataBlocks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
