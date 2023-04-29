/**
 * Definition: tc0fa945c
 * Hash: c0fa945c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc0fa945c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
