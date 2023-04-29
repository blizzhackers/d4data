/**
 * Definition: t7305a6c6
 * Hash: 7305a6c6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7305a6c6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<256> szText;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
