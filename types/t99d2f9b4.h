/**
 * Definition: t99d2f9b4
 * Hash: 99d2f9b4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "ta9417475.h"

#pragma push(pack, 1)

struct t99d2f9b4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FIXEDARRAY<ta9417475, 4> unk_d8a1f3b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
