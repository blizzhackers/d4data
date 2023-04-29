/**
 * Definition: t7766d6f5
 * Hash: 7766d6f5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7766d6f5 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> unk_7cb44e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
