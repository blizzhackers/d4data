/**
 * Definition: t16a69b73
 * Hash: 16a69b73
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t16a69b73 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO_NAME tSNOName;
  DT_GBID<0x39> unk_68d2b86;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
