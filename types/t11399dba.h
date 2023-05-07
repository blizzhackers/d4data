/**
 * Definition: t11399dba
 * Hash: 11399dba
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t74952762.h"

#pragma push(pack, 1)

struct t11399dba : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT idSGame;
  DT_ENUM<DT_INT> eXLocale;
  DT_FLOAT flAspectRatio;
  DT_UINT uProtocolHash;
  DT_FIXEDARRAY<t74952762, 2> unk_23ac715;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
