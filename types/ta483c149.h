/**
 * Definition: ta483c149
 * Hash: a483c149
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta483c149 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<1024> usMessage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
