/**
 * Definition: t165c63c0
 * Hash: 165c63c0
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t165c63c0 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_870804d;
  DT_CHARARRAY<128> szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
