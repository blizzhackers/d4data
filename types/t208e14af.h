/**
 * Definition: t208e14af
 * Hash: 208e14af
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tb780b821.h"

#pragma push(pack, 1)

struct t208e14af : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nType;
  DT_FIXEDARRAY<DT_INT, 2> arParams;
  DT_FIXEDARRAY<tb780b821, 10> unk_7edc2dd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
