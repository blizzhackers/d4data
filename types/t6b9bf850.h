/**
 * Definition: t6b9bf850
 * Hash: 6b9bf850
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6b9bf850 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nType;
  DT_FIXEDARRAY<DT_INT, 2> arParams;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
